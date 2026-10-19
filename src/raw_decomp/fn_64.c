// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006403A0  PowerClass::getDrain  this=PowerClass  sig=csp ====
char __thiscall PowerClass::getDrain(PowerClass *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch] BYREF
  int v4; // [esp+8h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+10h] [ebp-10h]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  char v9; // [esp+1Ch] [ebp-4h]

  RadarClass::Destru_vt34((RadarClass *)this); /*0x6403a3*/
  v1 = 0; /*0x6403ae*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6403b2*/
  {
    v4 = 0; /*0x6403bf*/
    v5 = 0; /*0x6403c3*/
    v6 = 0; /*0x6403c7*/
    v7 = 0; /*0x6403cb*/
    v9 = 0; /*0x6403cf*/
    v3 = 999; /*0x6403d3*/
    v8 = 0; /*0x6403db*/
    if ( !dword_A8B230[374].NeedsSaveOrLink ) /*0x6403df*/
      v1 = 5; /*0x6403e9*/
    v4 = v1 + DSurface_SidebarBounds; /*0x6403fb*/
    v5 = g_DSurface_SidebarBounds + 69; /*0x640417*/
    v6 = 8; /*0x64041b*/
    v7 = dword_B0B504; /*0x640423*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 999); /*0x640427*/
    LOBYTE(v1) = CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v3); /*0x640437*/
  }
  return v1; /*0x64043d*/
}



// ==== 0x00640450  PowerClass::getAvailable  this=PowerClass  sig=csp ====
wchar_t *__thiscall PowerClass::getAvailable(PowerClass *this, int a2)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-4h] [ebp-4h]

  if ( a2 != 999 ) /*0x640459*/
    return RadarClass::Destru_vt33((RadarClass *)this, a2); /*0x64049b*/
  v5 = *(_DWORD *)&dword_A83D4C[31].__pad_140[264]; /*0x64046c*/
  v4 = *(const wchar_t **)&dword_A83D4C[31].__pad_140[260]; /*0x64046d*/
  StringCSF = GetStringCSF(aTxtPowerDrain, 0, aDRa2mdpostPowe, 670); /*0x64047f*/
  swprintf((wchar_t *const)&stru_AC4B30.__pad_EC[276], (const size_t)StringCSF, v4, v5); /*0x64048a*/
  return (wchar_t *)&stru_AC4B30.__pad_EC[276]; /*0x640497*/
}



// ==== 0x006404B0  PowerClass::Initialize  this=PowerClass  sig=csp ====
_DWORD *__thiscall PowerClass::Initialize(PowerClass *this, char a2)
{
  RadarClass::Destruct((RadarClass *)this); /*0x6404b3*/
  if ( (a2 & 1) != 0 ) /*0x6404bd*/
    __3_YAXPAX_Z(this); /*0x6404c0*/
  return this->__pad_0; /*0x6404ca*/
}



// ==== 0x006404D0  sub_6404D0  this=-  sig=ida-proto ====
int sub_6404D0()
{
  dword_AC4E98 = 0; /*0x6404d2*/
  dword_AC4E9C = 0; /*0x6404d7*/
  dword_AC4EA0 = 0; /*0x6404dc*/
  dword_AC4EA4 = 0; /*0x6404e1*/
  return 0; /*0x6404e6*/
}



// ==== 0x006404F0  sub_6404F0  this=-  sig=ida-proto ====
void sub_6404F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6404fc*/
  dbl_AC4EB0 = Math::Sqrt(v0 + v0); /*0x64050e*/
}



// ==== 0x00640520  sub_640520  this=-  sig=ida-proto ====
void sub_640520()
{
  dbl_AC4F00 = dbl_AC4EB0 / 60.0; /*0x64052c*/
}



// ==== 0x00640540  sub_640540  this=-  sig=ida-proto ====
void sub_640540()
{
  dbl_AC4EE8 = 1.0 / dbl_AC4F00; /*0x64054c*/
}



// ==== 0x00640560  sub_640560  this=-  sig=ida-proto ====
void sub_640560()
{
  dbl_AC4EE0 = 0.0174532925199433 * 45.0; /*0x64056c*/
}



// ==== 0x00640580  sub_640580  this=-  sig=ida-proto ====
void sub_640580()
{
  dbl_AC4EB8 = 0.0174532925199433 * 60.0; /*0x64058c*/
}



// ==== 0x006405A0  sub_6405A0  this=-  sig=ida-proto ====
void sub_6405A0()
{
  dbl_AC4E88 = 0.0174532925199433 * 90.0; /*0x6405ac*/
}



// ==== 0x006405C0  sub_6405C0  this=-  sig=ida-proto ====
__int64 sub_6405C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4E88 - dbl_AC4EB8); /*0x6405d2*/
  result = Math::RoundToInt(v0 * dbl_AC4EB0 * 0.5); /*0x6405e6*/
  dword_AC4F08 = result; /*0x6405eb*/
  return result; /*0x6405f0*/
}



// ==== 0x00640600  sub_640600  this=-  sig=ida-proto ====
void sub_640600()
{
  dbl_AC4EC0 = Math::ArcTan((double)dword_AC4F08 * 0.00390625); /*0x640617*/
}



// ==== 0x00640630  sub_640630  this=-  sig=ida-proto ====
void sub_640630()
{
  dbl_AC4ED8 = Math::ArcTan((double)(2 * dword_AC4F08) / dbl_AC4EB0); /*0x640652*/
}



// ==== 0x00640660  sub_640660  this=-  sig=ida-proto ====
__int64 sub_640660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4F08) + 0.5); /*0x64067b*/
  dword_AC4EFC = result; /*0x640680*/
  return result; /*0x640686*/
}



// ==== 0x00640690  sub_640690  this=-  sig=ida-proto ====
int sub_640690()
{
  word_AC4EA8 = 0; /*0x640692*/
  word_AC4EAA = 0; /*0x640698*/
  return 0; /*0x64069e*/
}



// ==== 0x006406A0  sub_6406A0  this=-  sig=ida-proto ====
int sub_6406A0()
{
  dword_AC4EC8 = 0; /*0x6406a2*/
  dword_AC4ECC = 0; /*0x6406a7*/
  dword_AC4ED0 = 0; /*0x6406ac*/
  return 0; /*0x6406b1*/
}



// ==== 0x006406C0  sub_6406C0  this=-  sig=ida-proto ====
int sub_6406C0()
{
  dword_AC4EF8 = 0; /*0x6406c5*/
  dword_AC4EF0 = 128; /*0x6406cf*/
  dword_AC4EF4 = 128; /*0x6406d4*/
  return 128; /*0x6406d9*/
}



// ==== 0x006406E0  ObjectClass::unknown_libname_27  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_27(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6406e2*/
  return &this->AbstractClass; /*0x6406e8*/
}



// ==== 0x006406F0  ComPtr::Dtor  this=ComPtr  sig=csp ====
int __thiscall ComPtr::Dtor(ComPtr *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x6406f3*/
  if ( v2 ) /*0x6406f7*/
  {
    result = (**v2)(v2, 1); /*0x6406fd*/
    *(_DWORD *)this->__pad_0 = 0; /*0x6406ff*/
  }
  return result; /*0x640705*/
}



// ==== 0x00640710  Skirmish::RenderPreview  this=Skirmish  sig=csp ====
int __thiscall Skirmish::RenderPreview(Skirmish *this, HWND hWnd)
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
  void (__thiscall **DSurface_field_0x0)(DSurface *, int *, _DWORD, int); // esi
  int v13; // eax
  int BuildingAnimByName; // eax
  AbstractClass *v15; // ecx
  int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp+24h] [ebp-80h] BYREF
  int v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v25; // [esp+30h] [ebp-74h]
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

  result = ValidateRect(hWnd, 0); /*0x640726*/
  if ( *(_DWORD *)this ) /*0x64072c*/
  {
    DlgItem = GetDlgItem(hWnd, 1128); /*0x64073f*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x640749*/
    left = Rect.left; /*0x64075a*/
    top = Rect.top; /*0x640764*/
    v5 = *(_DWORD *)this; /*0x64076a*/
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
    v25 = v10 / 2000; /*0x6407e7*/
    v32 = left + v30 / 2 - v10 / 2000; /*0x6407fc*/
    v33 = top + v31 / 2 - v11 / 2000; /*0x640822*/
    v34 = v10 / 1000; /*0x640842*/
    v35 = v11 / 1000; /*0x640856*/
    (*((void (__thiscall **)(DSurface *, LONG *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 5))( /*0x64085d*/
      DSurface_Alternate,
      &left,
      0);
    DSurface_field_0x0 = (void (__thiscall **)(DSurface *, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0; /*0x64086c*/
    v13 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD))(**(_DWORD **)this + 120))(*(_DWORD *)this, v27, 0, 0); /*0x640875*/
    DSurface_field_0x0[2](DSurface_Alternate, &v34, *(_DWORD *)this, v13); /*0x640887*/
    HIBYTE(v23) = 0; /*0x640896*/
    if ( (stru_AC4B30.__pad_EC[628] & 1) == 0 ) /*0x64089b*/
    {
      stru_AC4B30.__pad_EC[628] |= 1u; /*0x6408a8*/
      *(_DWORD *)&stru_AC4B30.__pad_EC[612] = LoadFileSHP(aStartbutShp, (bool *)&v23 + 3); /*0x6408b2*/
    }
    v25 = VtableStub_72E280(); /*0x6408c3*/
    BuildingAnimByName = FindBuildingAnimByName(&stru_820320.?[12], 1); /*0x6408c7*/
    v15 = dword_A8B230; /*0x6408cc*/
    v16 = BuildingAnimByName; /*0x6408d2*/
    result = dword_A8B230[122].abstractFlags; /*0x6408d4*/
    if ( result > 0 && result <= 8 ) /*0x6408e5*/
    {
      v17 = 0; /*0x6408eb*/
      do /*0x640a29*/
      {
        v18 = v32 /*0x640944*/
            + v34
            * ((signed int)(1000 * (*(&v15[122].nextArrayIndex + 2 * v17) - (unsigned int)v15[122].ptr_4))
             / (int)v15[122].ptr_C)
            / 1000;
        v19 = v33 /*0x64097a*/
            + v35
            * ((signed int)(1000 * (*(&v15[122].referenceCount + 2 * v17) - (unsigned int)v15[122].ptr_8))
             / v15[122].uniqueId)
            / 1000;
        v20 = v19; /*0x64097e*/
        if ( *(_DWORD *)&stru_AC4B30.__pad_EC[612] ) /*0x640980*/
        {
          v24[0] = v18 - 9; /*0x640994*/
          v24[1] = v19 - 6; /*0x6409a3*/
          v21 = (int *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x6409b6*/
                         DSurface_Alternate,
                         v37);
          DrawToSurfaceSHP( /*0x6409d2*/
            (int)DSurface_Alternate,
            v25,
            *(int *)&stru_AC4B30.__pad_EC[612],
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
        v22 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x640a01*/
                          DSurface_Alternate,
                          v38);
        result = (int)TextRenderer::DrawText( /*0x640a15*/
                        v27,
                        (size_t)g_Str_Fmt_PctD,
                        (int)DSurface_Alternate,
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = dword_A8B230; /*0x640a1a*/
      }
      while ( v17 < dword_A8B230[122].abstractFlags ); /*0x640a29*/
    }
  }
  return result; /*0x640a2f*/
}



// ==== 0x00640A40  Tactical::Radar_Render  this=Tactical  sig=csp ====
int *__userpurge Tactical::Radar_Render@<eax>(
        Tactical *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        char a6,
        int a7,
        int *a8)
{
  int **v8; // ecx
  int *result; // eax
  int v10; // ebp
  int v11; // ebx
  int i; // eax
  _DWORD *v13; // esi
  int v14; // esi
  int v15; // edi
  int v16; // edx
  signed int v17; // esi
  signed int j; // edi
  signed int v19; // ebx
  int v20; // esi
  int v21; // edi
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int *v28; // ecx
  int *v29; // eax
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  char *v33; // eax
  char *v34; // esi
  _DWORD *v35; // edi
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  char *v39; // ecx
  int v40; // ebp
  int v41; // edi
  int v42; // edx
  int v43; // edx
  int v44; // eax
  int *v45; // eax
  int *v46; // edi
  int v47; // ebx
  int v48; // eax
  int v52; // [esp+2Ch] [ebp-88h]
  signed int k; // [esp+2Ch] [ebp-88h]
  int **v54; // [esp+34h] [ebp-80h]
  int v55; // [esp+38h] [ebp-7Ch] BYREF
  _DWORD *v56; // [esp+3Ch] [ebp-78h] BYREF
  int FileSHP; // [esp+40h] [ebp-74h] BYREF
  int v58; // [esp+44h] [ebp-70h]
  int v59; // [esp+48h] [ebp-6Ch] BYREF
  int v60; // [esp+4Ch] [ebp-68h]
  int v61; // [esp+50h] [ebp-64h]
  int v62; // [esp+54h] [ebp-60h] BYREF
  int v63; // [esp+58h] [ebp-5Ch] BYREF
  int v64; // [esp+5Ch] [ebp-58h]
  int v65; // [esp+60h] [ebp-54h] BYREF
  int v66; // [esp+64h] [ebp-50h] BYREF
  int v67; // [esp+68h] [ebp-4Ch]
  int v68; // [esp+6Ch] [ebp-48h] BYREF
  int v69[3]; // [esp+70h] [ebp-44h] BYREF
  int v70; // [esp+7Ch] [ebp-38h]
  int v71; // [esp+80h] [ebp-34h] BYREF
  int v72; // [esp+84h] [ebp-30h] BYREF
  int v73; // [esp+88h] [ebp-2Ch]
  int v74; // [esp+8Ch] [ebp-28h] BYREF
  _DWORD v75[2]; // [esp+90h] [ebp-24h] BYREF
  int v76; // [esp+98h] [ebp-1Ch] BYREF
  int v77; // [esp+9Ch] [ebp-18h]
  _DWORD v78[3]; // [esp+A0h] [ebp-14h] BYREF
  _BYTE v79[8]; // [esp+ACh] [ebp-8h] BYREF

  result = *v8; /*0x640a46*/
  v54 = v8; /*0x640a4b*/
  if ( *v8 ) /*0x640a46*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x640a5d*/
    v10 = 10000; /*0x640a62*/
    v64 = 10000; /*0x640a6c*/
    v58 = 10000; /*0x640a70*/
    v52 = 0; /*0x640a74*/
    v11 = 0; /*0x640a7c*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x640a85*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v13 = (_DWORD *)(i + 36); /*0x640a8b*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea( /*0x640a96*/
                              (LayerClass *)&stru_87F5F0.__pad_58[416],
                              (__int16 *)(i + 36),
                              0) )
      {
        v56 = (_DWORD *)*v13; /*0x640aa7*/
        v14 = (SHIWORD(v56) << 8) + 128; /*0x640ab9*/
        v15 = ((__int16)v56 << 8) + 128; /*0x640ac3*/
        Coord::Subtract((Coord *)&v66, v15, v14, 0); /*0x640acb*/
        Coord::Subtract((Coord *)&v71, v15, v14, 0); /*0x640ad8*/
        IsoCoord::ToScreenOffset(v71, v67, &v55, &v59); /*0x640af7*/
        v16 = v59 / 30; /*0x640b2a*/
        if ( v55 / 60 < v10 ) /*0x640b2e*/
        {
          v64 = v55 / 60; /*0x640b30*/
          v10 = v55 / 60; /*0x640b34*/
        }
        if ( v55 / 60 > v52 ) /*0x640b3a*/
          v52 = v55 / 60; /*0x640b3c*/
        if ( v16 < v58 ) /*0x640b44*/
          v58 = v59 / 30; /*0x640b46*/
        if ( v16 > v11 ) /*0x640b4c*/
          v11 = v59 / 30; /*0x640b4e*/
      }
    }
    v17 = 0; /*0x640b62*/
    for ( j = 0; j < 8; ++j ) /*0x640b64*/
    {
      if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, j) ) /*0x640b71*/
        ++v17; /*0x640b7a*/
    }
    v19 = 0; /*0x640b81*/
    v59 = j; /*0x640b83*/
    for ( k = v17; v19 < v17; ++v19 ) /*0x640b8d*/
    {
      if ( (!v19 || v19 <= j) && (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v19) ) /*0x640ba6*/
      {
        v56 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v65, v19); /*0x640bc8*/
        v20 = (SHIWORD(v56) << 8) + 128; /*0x640bde*/
        v21 = ((__int16)v56 << 8) + 128; /*0x640be4*/
        Coord::Subtract((Coord *)&v71, v21, v20, 0); /*0x640bec*/
        Coord::Subtract((Coord *)&v66, v21, v20, 0); /*0x640bf9*/
        IsoCoord::ToScreenOffset(v66, v72, &v55, &FileSHP); /*0x640c18*/
        v76 = 4; /*0x640c61*/
        v75[1] = FileSHP / 30 - v58 - 1; /*0x640c65*/
        v77 = 4; /*0x640c6d*/
        v75[0] = 2 * (v55 / 60 - v10) - 1; /*0x640c74*/
        v22 = **v54; /*0x640c8a*/
        v23 = (*(int (__thiscall **)(int *, _DWORD *, _DWORD *, _DWORD))(v22 + 120))(*v54, v78, v75, 0); /*0x640cc4*/
        (*(void (__thiscall **)(_DWORD, int))(v22 + 16))(*v56, v23); /*0x640cce*/
        v17 = k; /*0x640cd1*/
        j = v59; /*0x640cd5*/
      }
    }
    if ( g_DisplayWidth == (LoadingScreen *)800 ) /*0x640cef*/
    {
      v24 = 499; /*0x640cf1*/
      v25 = 379; /*0x640cf6*/
      v26 = 216; /*0x640cfb*/
      v27 = 166; /*0x640d00*/
    }
    else if ( g_DisplayWidth == (LoadingScreen *)1024 ) /*0x640d0d*/
    {
      v24 = 570; /*0x640d0f*/
      v25 = 424; /*0x640d14*/
      v26 = 300; /*0x640d19*/
      v27 = 260; /*0x640d1e*/
    }
    else
    {
      v26 = 200; /*0x640d25*/
      v24 = 385; /*0x640d2a*/
      v25 = 270; /*0x640d2f*/
      v27 = 200; /*0x640d34*/
    }
    v61 = v25; /*0x640d36*/
    v60 = v24; /*0x640d3e*/
    v62 = v26; /*0x640d42*/
    v28 = *v54; /*0x640d46*/
    v63 = v27; /*0x640d48*/
    v29 = (int *)(*(int (__thiscall **)(int *, _DWORD *, int, int, int))(*v28 + 120))(v28, v78, a4, a3, a2); /*0x640d56*/
    v77 = *v29; /*0x640d5f*/
    v78[0] = v29[1]; /*0x640d6a*/
    v30 = v29[2]; /*0x640d6e*/
    v31 = v29[3]; /*0x640d71*/
    v32 = 1000 * v66 / v31; /*0x640d83*/
    if ( v32 >= 1000 * v65 / v30 ) /*0x640d96*/
      v32 = 1000 * v65 / v30; /*0x640d98*/
    v70 = (v65 - v32 * v30 / 1000) / 2; /*0x640dd6*/
    v71 = (v66 - v32 * v31 / 1000) / 2; /*0x640ddf*/
    v72 = v65 - 2 * v70; /*0x640dea*/
    v73 = v66 - 2 * v71; /*0x640dee*/
    v33 = (char *)__2_YAPAXI_Z(0x24u); /*0x640df2*/
    if ( v33 ) /*0x640dfc*/
      v34 = DSurface::Construct(v33, v65, v66, 1, 0); /*0x640e13*/
    else
      v34 = 0; /*0x640e17*/
    v35 = (_DWORD *)FileSHP; /*0x640e19*/
    v36 = *(_DWORD *)v34; /*0x640e1d*/
    v37 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD, _DWORD))(**(_DWORD **)FileSHP + 120))( /*0x640e2f*/
            *(_DWORD *)FileSHP,
            v79,
            0,
            0);
    (*(void (__thiscall **)(char *, int *, _DWORD, int))(v36 + 8))(v34, &v72, *v35, v37); /*0x640e3d*/
    HIBYTE(v56) = 0; /*0x640e49*/
    FileSHP = (int)LoadFileSHP(aMmpbShp, (bool *)&v56 + 3); /*0x640e53*/
    v38 = 0; /*0x640e5b*/
    v58 = 0; /*0x640e5f*/
    if ( v55 > 0 ) /*0x640e63*/
    {
      v39 = (char *)dword_A8B230; /*0x640e69*/
      v40 = 4480; /*0x640e6f*/
      v59 = 4480; /*0x640e74*/
      do /*0x64106b*/
      {
        if ( v40 == 4480 || v38 <= v62 ) /*0x640e84*/
        {
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v39, v38) ) /*0x640e8b*/
          {
            v60 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a5, v38); /*0x640eb0*/
            v41 = (SHIWORD(v60) << 8) + 128; /*0x640ec2*/
            Coord::Subtract((Coord *)&v74, ((__int16)v60 << 8) + 128, v41, 0); /*0x640ed4*/
            IsoCoord::ToScreenOffset(v74, v41, &v76, &v68); /*0x640eef*/
            v39 = (char *)dword_A8B230; /*0x640f32*/
            v42 = *(int *)((char *)&dword_A8B230->ptr_0 + v40); /*0x640f3a*/
            if ( v42 != -1 ) /*0x640f40*/
            {
              v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x640f66*/
                                          + 4 * *(_DWORD *)(*((_DWORD *)stru_A80220.? + v42) + 90196))
                              + 780);
              v60 = v43; /*0x640f6c*/
              if ( FileSHP ) /*0x640f70*/
              {
                if ( v43 ) /*0x640f78*/
                {
                  v69[0] = v72 * (1000000 * (v76 / 60 - v67) / (int)dword_A8B230[122].ptr_C) / 1000000 + v70 - 3; /*0x640fd6*/
                  v44 = *(_DWORD *)v34; /*0x641015*/
                  v69[1] = v73 * (1000000 * (v68 / 30 - v61) / dword_A8B230[122].uniqueId) / 1000000 + v71 - 2; /*0x641025*/
                  v45 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(v44 + 120))(v34, v79); /*0x641029*/
                  DrawToSurfaceSHP((int)v34, v60, FileSHP, 0, v69, v45, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x64103e*/
                  v39 = (char *)dword_A8B230; /*0x641043*/
                  v38 = v58; /*0x641049*/
                }
              }
            }
          }
          else
          {
            v39 = (char *)dword_A8B230; /*0x64104f*/
          }
        }
        ++v38; /*0x64105d*/
        v40 = v59 + 4; /*0x64105e*/
        v58 = v38; /*0x641063*/
        v59 += 4; /*0x641067*/
      }
      while ( v38 < v55 ); /*0x64106b*/
    }
    v46 = (int *)a7; /*0x641071*/
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a7 + 20))(a7, &v63, 0); /*0x641083*/
    v47 = *v46; /*0x641088*/
    v48 = (*(int (__thiscall **)(char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v34 + 120))(v34, v79, 0, 0); /*0x641098*/
    result = (int *)(*(int (__thiscall **)(int *, int *, char *, int))(v47 + 8))(v46, &v62, v34, v48); /*0x6410a4*/
    if ( v34 ) /*0x6410ac*/
      return (**(int *(__thiscall ***)(char *, int))v34)(v34, 1); /*0x6410b4*/
  }
  return result; /*0x6410b6*/
}



// ==== 0x00641140  MiniMap::Render  this=MiniMap  sig=csp ====
int __thiscall MiniMap::Render(MiniMap *this)
{
  MiniMap *v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // esi
  int *v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  int v13; // ebp
  ObjectClass *v14; // eax
  unsigned int BridgeCellColor; // edi
  int *v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ebx
  int v20; // edi
  int RadarColor; // eax
  int v22; // esi
  unsigned __int8 v23; // al
  int v24; // ebp
  unsigned int v25; // edi
  int v26; // ebp
  MiniMap *v27; // esi
  int v28; // ebx
  _DWORD *v29; // ecx
  int v30; // eax
  int *v31; // ecx
  int v32; // edi
  int v33; // eax
  int v34; // esi
  int v35; // esi
  int v36; // eax
  int v38; // [esp+10h] [ebp-B8h]
  int v39; // [esp+10h] [ebp-B8h]
  char v40; // [esp+2Fh] [ebp-99h]
  __int16 v41[2]; // [esp+30h] [ebp-98h] BYREF
  int v42; // [esp+34h] [ebp-94h]
  __int16 v43[2]; // [esp+38h] [ebp-90h] BYREF
  _BYTE v44[4]; // [esp+3Ch] [ebp-8Ch] BYREF
  int v45; // [esp+40h] [ebp-88h]
  MiniMap *v46; // [esp+44h] [ebp-84h]
  int v47; // [esp+48h] [ebp-80h] BYREF
  __int16 v48; // [esp+4Ch] [ebp-7Ch]
  unsigned __int8 v49; // [esp+4Eh] [ebp-7Ah]
  int v50; // [esp+54h] [ebp-74h] BYREF
  int v51; // [esp+58h] [ebp-70h] BYREF
  int v52; // [esp+5Ch] [ebp-6Ch] BYREF
  _DWORD v53[2]; // [esp+60h] [ebp-68h] BYREF
  _DWORD v54[2]; // [esp+68h] [ebp-60h] BYREF
  CoordStruct v55; // [esp+70h] [ebp-58h] BYREF
  int v56; // [esp+74h] [ebp-54h]
  int v57; // [esp+78h] [ebp-50h]
  int v58; // [esp+7Ch] [ebp-4Ch]
  int v59; // [esp+80h] [ebp-48h] BYREF
  int v60; // [esp+84h] [ebp-44h]
  CoordStruct v61; // [esp+8Ch] [ebp-3Ch] BYREF
  int v62; // [esp+90h] [ebp-38h]
  int v63; // [esp+98h] [ebp-30h]
  char v64[16]; // [esp+A8h] [ebp-20h] BYREF
  char v65[16]; // [esp+B8h] [ebp-10h] BYREF

  v1 = this; /*0x64114a*/
  v46 = this; /*0x641151*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x641155*/
  v2 = 10000; /*0x64115a*/
  v3 = 0; /*0x64115f*/
  v47 = 10000; /*0x641166*/
  v45 = 10000; /*0x64116a*/
  v4 = 0; /*0x64116e*/
  v42 = 0; /*0x641170*/
  v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x641174*/
  if ( v5 ) /*0x64117b*/
  {
    do /*0x641256*/
    {
      v6 = (_DWORD *)(v5 + 36); /*0x641181*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)(v5 + 36), 0) ) /*0x64118c*/
      {
        *(_DWORD *)v41 = *v6; /*0x64119d*/
        Coord::Subtract((Coord *)&v59, (v41[0] << 8) + 128, (v41[1] << 8) + 128, 0); /*0x6411c1*/
        v38 = v60; /*0x6411d4*/
        v7 = CoordStruct::Set2(&v61, v41, 0); /*0x6411e3*/
        IsoCoord::ToScreenOffset(*v7, v38, (int *)v43, &v52); /*0x6411f1*/
        v8 = v52 / 30; /*0x641224*/
        if ( *(_DWORD *)v43 / 60 < v2 ) /*0x641228*/
        {
          v47 = *(_DWORD *)v43 / 60; /*0x64122a*/
          v2 = *(_DWORD *)v43 / 60; /*0x64122e*/
        }
        if ( *(_DWORD *)v43 / 60 > v4 ) /*0x641232*/
          v4 = *(_DWORD *)v43 / 60; /*0x641234*/
        if ( v8 < v45 ) /*0x64123a*/
          v45 = v52 / 30; /*0x64123c*/
        if ( v8 > v42 ) /*0x641244*/
          v42 = v52 / 30; /*0x641246*/
      }
      v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x64124f*/
    }
    while ( v5 ); /*0x641256*/
    v3 = v42; /*0x64125c*/
  }
  v9 = v3 - v45; /*0x641266*/
  v10 = 2 * (v4 - v2); /*0x64126a*/
  if ( *(_DWORD *)v1->__pad_0 ) /*0x641268*/
    (***(void (__thiscall ****)(_DWORD, int))v1->__pad_0)(*(_DWORD *)v1->__pad_0, 1); /*0x641274*/
  v11 = (char *)__2_YAPAXI_Z(0x24u); /*0x641278*/
  if ( v11 ) /*0x641282*/
    v12 = DSurface::Construct(v11, v10, v9, 1, 0); /*0x64128c*/
  else
    v12 = 0; /*0x641293*/
  *(_DWORD *)v1->__pad_0 = v12; /*0x641295*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0); /*0x64129d*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x6412a5*/
  v13 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x6412b6*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)v1->__pad_0 + 92))(*(_DWORD *)v1->__pad_0, 0, 0); /*0x6412c0*/
  for ( ; v13; v13 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) ) /*0x6412c5*/
  {
    *(_DWORD *)v43 = *(_DWORD *)(v13 + 36); /*0x6412d0*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v43, 0) ) /*0x6412de*/
    {
      v44[3] = 0; /*0x6412fc*/
      v14 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v43); /*0x641301*/
      BridgeCellColor = GetBridgeCellColor(v14, &v44[3], 0); /*0x641312*/
      v42 = BridgeCellColor; /*0x641335*/
      *(_DWORD *)v41 = *(_DWORD *)v43; /*0x641339*/
      Coord::Subtract((Coord *)&v61, (v43[0] << 8) + 128, (v43[1] << 8) + 128, 0); /*0x64133d*/
      v39 = v62; /*0x641350*/
      v16 = CoordStruct::Set2(&v55, v41, 0); /*0x64135c*/
      IsoCoord::ToScreenOffset(*v16, v39, &v50, &v51); /*0x64136a*/
      v40 = 0; /*0x641385*/
      v17 = *(_DWORD *)(v13 + 68); /*0x6413aa*/
      v18 = 0; /*0x6413b1*/
      v60 = v51 / 30 - v45; /*0x6413b6*/
      v63 = 2 * (v50 / 60 - v2); /*0x6413ba*/
      v19 = 100; /*0x6413be*/
      if ( v17 == -1 ) /*0x6413c3*/
      {
        v26 = *(_DWORD *)(v13 + 228); /*0x6415e1*/
        if ( v26 && (*(int (__stdcall **)(int))(*(_DWORD *)(v26 + 4) + 12))(v26 + 4) == 36 ) /*0x6415fc*/
        {
          v40 = 1; /*0x641610*/
          v19 = 75; /*0x64161b*/
          v18 = (*(unsigned __int8 *)(*(_DWORD *)(v26 + 200) + 668) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x641662*/
              | (*(unsigned __int8 *)(*(_DWORD *)(v26 + 200) + 669) >> g_BitMask_Blue << g_BitMask_Green)
              | (*(unsigned __int8 *)(*(_DWORD *)(v26 + 200) + 670) >> g_BitMask_Red << g_BitShift_Blue);
        }
      }
      else
      {
        v20 = *(&dword_A83D84->ptr_0 + v17); /*0x6413d3*/
        RadarColor = OverlayTypeClass::GetRadarColor( /*0x6413e2*/
                       (OverlayTypeClass *)v20,
                       (int)&v52,
                       *(unsigned __int8 *)(v13 + 286));
        v48 = *(_WORD *)RadarColor; /*0x6413ea*/
        v49 = *(_BYTE *)(RadarColor + 2); /*0x6413f2*/
        if ( *(_BYTE *)(v20 + 681) ) /*0x6413f6*/
        {
          v22 = *(unsigned __int8 *)(v20 + 694) >> g_BitShift_Green_0; /*0x641425*/
          *(_DWORD *)v41 = (unsigned __int8)g_BitShift_Green_0; /*0x641427*/
          v18 = (*(unsigned __int8 *)(v20 + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x64146e*/
              | (*(unsigned __int8 *)(v20 + 695) >> g_BitMask_Blue << g_BitMask_Green)
              | (v22 << g_BitShift_Red);
          if ( v18 <= 5 ) /*0x641473*/
            v18 = (v49 >> g_BitMask_Red << g_BitShift_Blue) /*0x6414b7*/
                | (HIBYTE(v48) >> g_BitMask_Blue << g_BitMask_Green)
                | ((unsigned __int8)v48 >> SLOBYTE(v41[0]) << g_BitShift_Red);
          v23 = *(_BYTE *)(v13 + 286); /*0x6414b9*/
          v19 = 75; /*0x6414bf*/
          v40 = 1; /*0x6414c6*/
          if ( v23 >= 2u ) /*0x6414cb*/
          {
            if ( v23 < 5u ) /*0x6414d6*/
              v19 = 50; /*0x6414d8*/
          }
          else
          {
            v19 = 25; /*0x6414cd*/
          }
          v42 = (unsigned __int16)BlendMinimapPixel(v18, v42, v19); /*0x6414ee*/
        }
        else
        {
          *(_DWORD *)v41 = (unsigned __int8)g_BitShift_Green_0; /*0x641541*/
          v18 = (v49 >> g_BitMask_Red << g_BitShift_Blue) /*0x641582*/
              | (HIBYTE(v48) >> g_BitMask_Blue << g_BitMask_Green)
              | ((unsigned __int8)v48 >> g_BitShift_Green_0 << g_BitShift_Red);
          if ( v18 <= 5 ) /*0x641587*/
            v18 = (*(unsigned __int8 *)(v20 + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x6415cd*/
                | (*(unsigned __int8 *)(v20 + 695) >> g_BitMask_Blue << g_BitMask_Green)
                | (*(unsigned __int8 *)(v20 + 694) >> SLOBYTE(v41[0]) << g_BitShift_Red);
          if ( v18 ) /*0x6415d1*/
            v40 = 1; /*0x6415d7*/
        }
        BridgeCellColor = v42; /*0x6414f2*/
      }
      v24 = (unsigned __int16)BridgeCellColor; /*0x6414fc*/
      v25 = HIWORD(BridgeCellColor); /*0x641502*/
      if ( v40 ) /*0x641507*/
      {
        if ( v19 == 100 ) /*0x641510*/
        {
          v24 = v18; /*0x641516*/
          v25 = v18; /*0x641518*/
        }
        else
        {
          v24 = (unsigned __int16)BlendMinimapPixel(v18, v24, v19); /*0x64167d*/
          v25 = (unsigned __int16)BlendMinimapPixel(v18, v25, v19); /*0x641689*/
        }
      }
      if ( !v25 || !v24 ) /*0x641691*/
      {
        Debug::Log(); /*0x6416a4*/
        v25 = (128 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6416ed*/
            | (128 >> g_BitMask_Blue << g_BitMask_Green)
            | (128 >> g_BitMask_Red << g_BitShift_Blue);
        v24 = v25; /*0x6416ef*/
      }
      v27 = v46; /*0x6416f5*/
      v28 = v60; /*0x6416f9*/
      v53[0] = v63; /*0x6416fd*/
      v29 = *(_DWORD **)v46->__pad_0; /*0x641701*/
      v53[1] = v60; /*0x641703*/
      *(_DWORD *)v41 = *v29; /*0x641711*/
      v30 = (*(int (__thiscall **)(_DWORD *, char *))(*(_DWORD *)v41 + 120))(v29, v65); /*0x641715*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int, int))(*(_DWORD *)v41 + 136))( /*0x641725*/
        *(_DWORD *)v27->__pad_0,
        v53,
        v25,
        v30);
      v31 = *(int **)v27->__pad_0; /*0x64172f*/
      v54[1] = v28; /*0x641732*/
      v54[0] = v63 + 1; /*0x641736*/
      v32 = *v31; /*0x64173a*/
      v33 = (*(int (__thiscall **)(int *, char *))(*v31 + 120))(v31, v64); /*0x641744*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int))(v32 + 136))(*(_DWORD *)v27->__pad_0, v54, v24, v33); /*0x641750*/
      v2 = v47; /*0x641756*/
      v1 = v27; /*0x64175a*/
    }
  }
  v34 = 0; /*0x641770*/
  v46 = 0; /*0x641777*/
  do /*0x64188e*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v34) ) /*0x641782*/
    {
      v51 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v41, v34); /*0x6417a6*/
      IsoCoord::ToScreenOffset(((__int16)v51 << 8) + 128, (SHIWORD(v51) << 8) + 128, &v50, &v47); /*0x6417d1*/
      v57 = 4; /*0x6417ec*/
      v55.vfptr = (void *)(2 * (v50 / 60 - v2) - 1); /*0x641816*/
      v56 = v47 / 30 - v45 - 1; /*0x641821*/
      v58 = 4; /*0x64182f*/
      v35 = **(_DWORD **)v1->__pad_0; /*0x64183f*/
      v36 = (*(int (__thiscall **)(_DWORD, char *, CoordStruct *, int))(v35 + 120))( /*0x641874*/
              *(_DWORD *)v1->__pad_0,
              v64,
              &v55,
              240 >> g_BitShift_Green_0 << g_BitShift_Red);
      (*(void (__thiscall **)(_DWORD, int))(v35 + 16))(*(_DWORD *)v1->__pad_0, v36); /*0x64187a*/
      v34 = (int)v46; /*0x64187d*/
    }
    v46 = (MiniMap *)++v34; /*0x64188a*/
  }
  while ( v34 < 8 ); /*0x64188e*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v1->__pad_0 + 96))(*(_DWORD *)v1->__pad_0); /*0x64189b*/
}



// ==== 0x006418B0  MiniMap::SavePreviewToINI  this=MiniMap  sig=csp ====
bool __thiscall MiniMap::SavePreviewToINI(MiniMap *this, char *a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int i; // edi
  int v12; // ecx
  unsigned __int16 v13; // ax
  signed int v14; // ebx
  int v15; // eax
  char v17; // [esp+21h] [ebp-5Dh]
  __int16 v18; // [esp+22h] [ebp-5Ch]
  __int16 Src; // [esp+26h] [ebp-58h] BYREF
  char v20; // [esp+28h] [ebp-56h]
  _DWORD v21[4]; // [esp+2Ah] [ebp-54h] BYREF
  Pipe v22; // [esp+3Ah] [ebp-44h] BYREF
  int v23; // [esp+52h] [ebp-2Ch]
  Pipe v24; // [esp+56h] [ebp-28h] BYREF

  v17 = 0; /*0x6418b9*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x6418be*/
  {
    MiniMap::Render(this); /*0x6418c3*/
    v17 = 1; /*0x6418c8*/
  }
  INIClass::ClearSection((int *)a2, (int)aPreview, 0); /*0x6418db*/
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)this->__pad_0 + 120))( /*0x6418e9*/
                   *(_DWORD *)this->__pad_0,
                   v21);
  INIClass::SetRect(a2, (unsigned __int8 *)aPreview, (char *)g_Str_EVA_CannotDeployHere.Type, v3); /*0x6418fb*/
  v4 = 0; /*0x641906*/
  v5 = 0; /*0x641908*/
  v6 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x641918*/
  v7 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v6; /*0x64191f*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v7; /*0x64192d*/
  v9 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x64193a*/
         DSurface_Alternate,
         0,
         0);
  v22.Pipe_field_0x04 = 0; /*0x641943*/
  v22.Pipe_field_0x08 = 0; /*0x641947*/
  *(_DWORD *)v22.__pad_0 = &Pipe::`vftable'; /*0x64194b*/
  Buffer::Init((Buffer *)&v22.Pipe_field_0x0C, v9, v8); /*0x641953*/
  v23 = 0; /*0x641962*/
  *(_DWORD *)v22.__pad_0 = &BufferPipe::`vftable'; /*0x641966*/
  LZOPipe::Constructor((LZOPipe *)&v24, 0, 0x2000); /*0x64196e*/
  Pipe::SetDelegate(&v24, (int)&v22); /*0x64197c*/
  v10 = *(_DWORD *)this->__pad_0; /*0x641981*/
  Src = 0; /*0x641985*/
  v20 = 0; /*0x64198f*/
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 92))(v10, 0, 0); /*0x64199a*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 128))(*(_DWORD *)this->__pad_0) > 0 ) /*0x6419a9*/
  {
    do /*0x641a53*/
    {
      for ( i = 0; i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 124))(*(_DWORD *)this->__pad_0); ++i ) /*0x6419ba*/
      {
        v12 = *(_DWORD *)this->__pad_0; /*0x6419c0*/
        v21[0] = i; /*0x6419c2*/
        v21[1] = v5; /*0x6419c6*/
        v13 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v12 + 40))(v12, v21); /*0x6419d1*/
        LOBYTE(v18) = (unsigned __int8)(v13 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x6419f1*/
        HIBYTE(v18) = (unsigned __int8)(v13 >> g_BitMask_Green) << g_BitMask_Blue; /*0x641a12*/
        Src = v18; /*0x641a22*/
        v20 = (unsigned __int8)(v13 >> g_BitShift_Blue) << g_BitMask_Red; /*0x641a2b*/
        v4 += Compression::Read((int *)v24.__pad_0, (int)&Src, 3); /*0x641a36*/
      }
      ++v5; /*0x641a48*/
    }
    while ( v5 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 128))(*(_DWORD *)this->__pad_0) ); /*0x641a53*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 96))(*(_DWORD *)this->__pad_0); /*0x641a5d*/
  v14 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v24.__pad_0 + 4))(&v24) + v4; /*0x641a6f*/
  INIClass::ClearSection((int *)a2, (int)aPreviewpack, 0); /*0x641a7b*/
  if ( v14 > 0 ) /*0x641a82*/
  {
    v15 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x641a93*/
            DSurface_Alternate,
            0,
            0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aPreviewpack, v15, v14); /*0x641aa0*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641aad*/
  }
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641ab8*/
  if ( v17 ) /*0x641ac1*/
  {
    if ( *(_DWORD *)this->__pad_0 ) /*0x641ac3*/
      (***(void (__thiscall ****)(_DWORD, int))this->__pad_0)(*(_DWORD *)this->__pad_0, 1); /*0x641acd*/
    *(_DWORD *)this->__pad_0 = 0; /*0x641acf*/
  }
  LZOPipe::Destructor((LZOPipe *)&v24); /*0x641ad9*/
  Vector::Clear((int)&v22.Pipe_field_0x0C); /*0x641ae2*/
  Pipe::Dtor(&v22); /*0x641aeb*/
  return v14 > 0; /*0x641af0*/
}



// ==== 0x00641B00  ObjectClass::LoadMapPreviewImage  this=ObjectClass  sig=csp ====
char __thiscall LoadMapPreviewImage(ObjectClass *this, _DWORD *a2)
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
  int Base64Data; // edi
  int v13; // eax
  void *ptr_0; // ecx
  unsigned int v15; // edi
  void *v16; // eax
  char v18[8]; // [esp+20h] [ebp-5Ch] BYREF
  unsigned int v19; // [esp+28h] [ebp-54h] BYREF
  INIClass *v20; // [esp+2Ch] [ebp-50h]
  Straw v21; // [esp+38h] [ebp-44h] BYREF
  int v22; // [esp+40h] [ebp-3Ch]
  Buffer v23; // [esp+44h] [ebp-38h] BYREF
  INIClass *v24; // [esp+80h] [ebp+4h]

  INIClass::ResetSection((INIClass *)a2); /*0x641b0f*/
  if ( this->AbstractClass ) /*0x641b14*/
  {
    (**(void (__thiscall ***)(void *, int))this->AbstractClass)(this->AbstractClass, 1); /*0x641b20*/
    this->AbstractClass = 0; /*0x641b22*/
  }
  v3 = INIClass::ParseValue( /*0x641b3c*/
         (INIClass *)a2,
         (unsigned int *)&v21,
         (unsigned __int8 *)aPreview,
         (unsigned __int8 *)g_Str_EVA_CannotDeployHere.Type,
         (unsigned int *)&stru_87F5F0.__pad_58[668]);
  v19 = *v3; /*0x641b45*/
  v20 = (INIClass *)v3[1]; /*0x641b4c*/
  v4 = v3[2]; /*0x641b50*/
  v5 = v3[3]; /*0x641b53*/
  v6 = (char *)__2_YAPAXI_Z(0x24u); /*0x641b56*/
  if ( v6 ) /*0x641b60*/
    v7 = DSurface::Construct(v6, v4, v5, 1, 0); /*0x641b69*/
  else
    v7 = 0; /*0x641b70*/
  this->AbstractClass = v7; /*0x641b72*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v7 + 24))(v7, 0); /*0x641b79*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x641b90*/
  v9 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v8; /*0x641b97*/
  v10 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v9; /*0x641ba5*/
  v11 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x641bb4*/
          DSurface_Alternate,
          0,
          0);
  if ( !v11 ) /*0x641bb9*/
    return 1; /*0x641bb9*/
  Base64Data = INIClass::GetBase64Data((INIClass *)a2, aPreviewpack, v11, v10); /*0x641bd0*/
  if ( Base64Data <= 0 ) /*0x641bd4*/
  {
LABEL_14:
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d4e*/
    return 1; /*0x641d62*/
  }
  v13 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x641be6*/
          DSurface_Alternate,
          0,
          0);
  v21.Straw_field_0x04 = 0; /*0x641bef*/
  v22 = 0; /*0x641bf3*/
  *(_DWORD *)v21.__pad_0 = &Straw::`vftable'; /*0x641bf7*/
  Buffer::Init(&v23, v13, Base64Data); /*0x641bff*/
  v23.Buffer_field_0C = 0; /*0x641c0f*/
  *(_DWORD *)v21.__pad_0 = &BufferStraw::`vftable'; /*0x641c13*/
  LZOStraw::Constructor((LZOStraw *)&v23.Buffer_field_10, 1, 0x2000); /*0x641c1b*/
  Delegate::Set((Straw *)&v23.Buffer_field_10, (int)&v21); /*0x641c29*/
  ptr_0 = this->AbstractClass; /*0x641c2e*/
  v18[0] = 0; /*0x641c30*/
  v18[1] = 0; /*0x641c34*/
  v18[2] = 0; /*0x641c38*/
  (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)ptr_0 + 92))(ptr_0, 0, 0); /*0x641c42*/
  v24 = 0; /*0x641c47*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 128))(this->AbstractClass) <= 0 ) /*0x641c55*/
  {
LABEL_13:
    (*(void (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 96))(this->AbstractClass); /*0x641d1f*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d30*/
    LZOStraw::Destructor((LZOStraw *)&v23.Buffer_field_10); /*0x641d37*/
    Vector::Clear((int)&v23); /*0x641d40*/
    Straw::Dtor(&v21); /*0x641d49*/
    goto LABEL_14; /*0x641d49*/
  }
  while ( 1 ) /*0x641c5d*/
  {
    v15 = 0; /*0x641c5d*/
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 124))(this->AbstractClass) > 0 ) /*0x641c66*/
      break; /*0x641c66*/
LABEL_12:
    v24 = (INIClass *)((char *)v24 + 1); /*0x641d04*/
    if ( (int)v24 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 128))(this->AbstractClass) ) /*0x641d19*/
      goto LABEL_13; /*0x641d19*/
  }
  while ( LCW::Decompress((LZOStraw *)&v23.Buffer_field_10, v18, 3) == 3 ) /*0x641c7f*/
  {
    v20 = v24; /*0x641c91*/
    v16 = this->AbstractClass; /*0x641caf*/
    v19 = v15; /*0x641cb1*/
    (*(void (__thiscall **)(void *, unsigned int *, int))(*(_DWORD *)v16 + 36))( /*0x641cef*/
      v16,
      &v19,
      ((unsigned __int8)v18[0] >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((unsigned __int8)v18[1] >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned __int8)v18[2] >> g_BitMask_Red << g_BitShift_Blue));
    if ( (int)++v15 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 124))(this->AbstractClass) ) /*0x641cfc*/
      goto LABEL_12; /*0x641cfc*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 96))(this->AbstractClass); /*0x641d69*/
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d74*/
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d7f*/
  LZOStraw::Destructor((LZOStraw *)&v23.Buffer_field_10); /*0x641d86*/
  Vector::Clear((int)&v23); /*0x641d8f*/
  Straw::Dtor(&v21); /*0x641d98*/
  return 0; /*0x641d59*/
}



// ==== 0x00641DB0  Surface::LoadToSurfaceSHP  this=Surface  sig=csp ====
char __thiscall Surface::LoadToSurfaceSHP(Surface *this, char *Source)
{
  _DWORD *v3; // esi
  char *v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v8; // [esp+0h] [ebp-84h]
  CCFileClass v9; // [esp+18h] [ebp-6Ch] BYREF
  int v10[3]; // [esp+70h] [ebp-14h] BYREF
  int v11; // [esp+7Ch] [ebp-8h]

  CCFileClass::Construct(&v9, Source); /*0x641dc0*/
  if ( !(unsigned __int8)CCFileClass::Open(&v9, 0) ) /*0x641dcb*/
    goto LABEL_11; /*0x641dcb*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x641dd8*/
  {
    (***(void (__thiscall ****)(_DWORD, int))this->__pad_0)(*(_DWORD *)this->__pad_0, 1); /*0x641de2*/
    *(_DWORD *)this->__pad_0 = 0; /*0x641de4*/
  }
  v3 = DecodeFrameSHP((int)&v9, 0, 0, 0); /*0x641df9*/
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
    *(_DWORD *)this->__pad_0 = v6; /*0x641e57*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x641e5f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)this->__pad_0 + 4))( /*0x641e6b*/
      *(_DWORD *)this->__pad_0,
      v3,
      0,
      1);
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x641e74*/
    *(_DWORD *)v9.CDFileClass = &CCFileClass::`vftable'; /*0x641e7a*/
    v11 = 0; /*0x641e82*/
    Vector::Clear((int)v10); /*0x641e8a*/
    *(_DWORD *)v9.CDFileClass = &off_7E1668; /*0x641e93*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v9); /*0x641e9b*/
    return 1; /*0x641ea2*/
  }
  else
  {
LABEL_11:
    *(_DWORD *)v9.CDFileClass = &CCFileClass::`vftable'; /*0x641eaf*/
    v11 = 0; /*0x641eb7*/
    Vector::Clear((int)v10); /*0x641ebf*/
    *(_DWORD *)v9.CDFileClass = &off_7E1668; /*0x641ec8*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v9); /*0x641ed0*/
    return 0; /*0x641ed6*/
  }
}



// ==== 0x00641EE0  PreviewClass::ReadPreview  this=PreviewClass  sig=csp ====
char __thiscall PreviewClass::ReadPreview(PreviewClass *this, char *Source)
{
  int v2; // ebp
  void *v3; // esi
  signed int v4; // edi
  char *v5; // eax
  char *v6; // edi
  char v8; // [esp+13h] [ebp-13Dh]
  Straw v10; // [esp+18h] [ebp-138h] BYREF
  int v11; // [esp+20h] [ebp-130h]
  Buffer v12; // [esp+24h] [ebp-12Ch] BYREF
  int v13[3]; // [esp+8Ch] [ebp-C4h] BYREF
  int v14; // [esp+98h] [ebp-B8h]
  CCINIClass v15; // [esp+A0h] [ebp-B0h] BYREF
  INIClass v16; // [esp+F8h] [ebp-58h] BYREF
  char v17; // [esp+138h] [ebp-18h]

  CCFileClass::Construct((CCFileClass *)&v12.Buffer_field_10, Source); /*0x641efa*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v12.Buffer_field_10, 0) /*0x641f19*/
    && FileClass::Load((CCFileClass *)&v12.Buffer_field_10, (const CHAR *)1) )
  {
    INIClass::INIClass((INIClass *)&v15); /*0x641f2d*/
    v15.ownsFile = 0; /*0x641f41*/
    *(_DWORD *)v15.INIClass = &CCINIClass_Vtable; /*0x641f48*/
    CCINIClass::Load(&v15, (int)&v12.Buffer_field_10, 1, 0); /*0x641f53*/
    INIClass::ResetSection((INIClass *)&v15); /*0x641f5f*/
    PreviewClass::RenderMapPreview((PreviewClass *)dword_A8B230, &v15); /*0x641f72*/
    v2 = 0; /*0x641f77*/
    v3 = 0; /*0x641f79*/
    while ( 1 ) /*0x641f7f*/
    {
      v2 += 25; /*0x641f7f*/
      v4 = v2 * CCFileClass::GetSize((CCFileClass *)&v12.Buffer_field_10) / 100; /*0x641f9f*/
      if ( v3 ) /*0x641fa1*/
        __3_YAXPAX_Z(v3); /*0x641fa4*/
      v3 = (void *)__2_YAPAXI_Z(v4 + 1); /*0x641fb5*/
      if ( !v3 ) /*0x641fbc*/
        goto LABEL_10; /*0x641fbc*/
      BufferIOFileClass::Seek((CCFileClass *)&v12.Buffer_field_10, 0, 0); /*0x641fc4*/
      CCFileClass::Read((CCFileClass *)&v12.Buffer_field_10, v3, v4); /*0x641fcf*/
      *((_BYTE *)v3 + v4) = 0; /*0x641fda*/
      v5 = strstr((const char *)v3, aMap); /*0x641fdd*/
      v6 = v5; /*0x641fe2*/
      if ( v5 ) /*0x641fe9*/
        break; /*0x641fe9*/
      if ( v2 >= 100 ) /*0x641fee*/
      {
        __3_YAXPAX_Z(v3); /*0x641ff1*/
LABEL_10:
        HashTable::DestroyHashTableINIClass((INIClass *)&v15); /*0x641ff9*/
        goto LABEL_11; /*0x642000*/
      }
    }
    *v5 = 0; /*0x642047*/
    INIClass::INIClass(&v16); /*0x642049*/
    v17 = 0; /*0x642055*/
    *(_DWORD *)v16.__pad_0 = &CCINIClass_Vtable; /*0x64205e*/
    v10.Straw_field_0x04 = 0; /*0x642069*/
    v11 = 0; /*0x64206d*/
    Buffer::Init(&v12, (int)v3, v6 - (_BYTE *)v3 - 1); /*0x642079*/
    v12.Buffer_field_0C = 0; /*0x64208c*/
    *(_DWORD *)v10.__pad_0 = &BufferStraw::`vftable'; /*0x642090*/
    CCINIClass::LoadAndVerifyDigest((int *)v16.__pad_0, (int)&v10, 0, 0); /*0x642098*/
    v8 = LoadMapPreviewImage((ObjectClass *)this, &v16); /*0x6420af*/
    __3_YAXPAX_Z(v3); /*0x6420b3*/
    Vector::Clear((int)&v12); /*0x6420bf*/
    Straw::Dtor(&v10); /*0x6420c8*/
    HashTable::DestroyHashTableINIClass(&v16); /*0x6420d4*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v15); /*0x6420e0*/
    v12.Buffer_field_10 = (int)&CCFileClass::`vftable'; /*0x6420ec*/
    v14 = 0; /*0x6420f4*/
    Vector::Clear((int)v13); /*0x6420fb*/
    v12.Buffer_field_10 = (int)&off_7E1668; /*0x642104*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v12.Buffer_field_10); /*0x64210c*/
    return v8; /*0x642111*/
  }
  else
  {
LABEL_11:
    v12.Buffer_field_10 = (int)&CCFileClass::`vftable'; /*0x642005*/
    v14 = 0; /*0x642014*/
    Vector::Clear((int)v13); /*0x64201b*/
    v12.Buffer_field_10 = (int)&off_7E1668; /*0x642024*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v12.Buffer_field_10); /*0x64202c*/
    return 0; /*0x642034*/
  }
}



// ==== 0x00642130  Palette::Preview_Generate  this=Palette  sig=csp ====
int __thiscall Palette::Preview_Generate(Palette *this, char a2, int a3, size_t *a4)
{
  char v4; // si
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v12; // ebx
  int Width; // eax
  int v14; // ebp
  unsigned __int16 Pixel; // ax
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // ecx
  unsigned __int16 v29; // ax
  int v30; // ebp
  _WORD *v31; // edi
  int v32; // ecx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  size_t v38; // ebx
  int *v39; // ebp
  int v40; // eax
  char v41; // [esp-8h] [ebp-80h]
  int v42; // [esp+8h] [ebp-70h]
  _WORD *v43; // [esp+8h] [ebp-70h]
  int v44; // [esp+8h] [ebp-70h]
  int v45; // [esp+Ch] [ebp-6Ch]
  int v46; // [esp+Ch] [ebp-6Ch]
  char *Block; // [esp+10h] [ebp-68h]
  _WORD *Blocka; // [esp+10h] [ebp-68h]
  _DWORD *v49; // [esp+14h] [ebp-64h]
  int v50; // [esp+18h] [ebp-60h]
  _BYTE *v51; // [esp+1Ch] [ebp-5Ch]
  int v52; // [esp+20h] [ebp-58h]
  _BYTE *v53; // [esp+24h] [ebp-54h]
  _DWORD v54[2]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v55; // [esp+34h] [ebp-44h] BYREF
  int v56[3]; // [esp+38h] [ebp-40h] BYREF
  int v57; // [esp+44h] [ebp-34h] BYREF
  int v58; // [esp+48h] [ebp-30h]
  int v59; // [esp+4Ch] [ebp-2Ch]
  int Height; // [esp+50h] [ebp-28h]
  XSurface v61; // [esp+54h] [ebp-24h] BYREF

  if ( !*(_DWORD *)this->m_Colors ) /*0x642139*/
    return 0; /*0x642146*/
  v41 = v4; /*0x64214a*/
  v7 = *(_DWORD *)this->m_Colors; /*0x64214b*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 128))(v7); /*0x642153*/
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 124))(v7, v8 / 2); /*0x642163*/
  DSurface::Construct((char *)&v61.Width, v9 / 2, 0, 0, v41); /*0x642170*/
  v59 = 0; /*0x642181*/
  v10 = *(_DWORD *)this->m_Colors; /*0x642185*/
  Height = v61.Height; /*0x642187*/
  v58 = 0; /*0x64218b*/
  *(_DWORD *)v61.__pad_0 = v61.LockCount; /*0x64218f*/
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 120))(v10); /*0x64219c*/
  DSurface::BlitPart((DSurface *)&v61, (int)&v57, *(_DWORD *)this->m_Colors, v11, (int)v56, 0); /*0x6421ac*/
  v12 = (void *)__2_YAPAXI_Z(0x4000u); /*0x6421bb*/
  memset(v12, 0, 0x4000u); /*0x6421c6*/
  v49 = v12; /*0x6421cd*/
  Block = 0; /*0x6421d1*/
  DSurface::Lock((DSurface *)&v61, 0, 0); /*0x6421db*/
  v42 = 0; /*0x6421e4*/
  if ( v61.Height > 0 ) /*0x6421ea*/
  {
    Width = v61.Width; /*0x6421f0*/
    do /*0x6422f7*/
    {
      v14 = 0; /*0x6421f4*/
      if ( Width > 0 ) /*0x6421f8*/
      {
        do /*0x6422de*/
        {
          v55 = v14; /*0x64220b*/
          v56[0] = v42; /*0x64220f*/
          Pixel = XSurface::GetPixel(&v61, &v55); /*0x642213*/
          v54[0] = v14; /*0x64222c*/
          v16 = ((unsigned __int8)(Pixel >> g_BitShift_Red) << g_BitShift_Green_0) & 0xF0; /*0x642248*/
          v17 = ((unsigned __int8)(Pixel >> g_BitMask_Green) << g_BitMask_Blue) & 0xF0; /*0x64225c*/
          v54[1] = v42; /*0x642268*/
          v18 = ((unsigned __int8)(Pixel >> g_BitShift_Blue) << g_BitMask_Red) & 0xF0; /*0x64227f*/
          XSurface::SetPixel( /*0x6422b5*/
            &v61,
            v54,
            (v18 >> g_BitMask_Red << g_BitShift_Blue)
          | (v17 >> g_BitMask_Blue << g_BitMask_Green)
          | (v16 >> g_BitShift_Green_0 << g_BitShift_Red));
          v19 = v17 | (16 * v16) | (v18 >> 4); /*0x6422c6*/
          v20 = v49[v19]; /*0x6422c8*/
          if ( !v20 ) /*0x6422cd*/
            ++Block; /*0x6422cf*/
          ++v14; /*0x6422d4*/
          v49[v19] = v20 + 1; /*0x6422d5*/
          Width = v61.Width; /*0x6422d8*/
        }
        while ( v14 < v61.Width ); /*0x6422de*/
        v12 = v49; /*0x6422e4*/
      }
      ++v42; /*0x6422f3*/
    }
    while ( v42 < v61.Height ); /*0x6422f7*/
  }
  DSurface::Unlock((DSurface *)&v61); /*0x642301*/
  v21 = a2; /*0x642306*/
  v22 = __2_YAPAXI_Z(2 * a2); /*0x642311*/
  Blocka = (_WORD *)v22; /*0x642319*/
  v45 = 0; /*0x64231f*/
  if ( a2 > 0 ) /*0x642327*/
  {
    v43 = (_WORD *)v22; /*0x642329*/
    do /*0x642370*/
    {
      v23 = -1; /*0x64232d*/
      v24 = 0; /*0x642330*/
      v25 = 0; /*0x642332*/
      v26 = (int *)v12; /*0x642334*/
      do /*0x642349*/
      {
        if ( *v26 > v24 ) /*0x64233a*/
        {
          v24 = *v26; /*0x64233c*/
          v23 = v25; /*0x64233e*/
        }
        ++v25; /*0x642340*/
        ++v26; /*0x642341*/
      }
      while ( v25 < 4096 ); /*0x642349*/
      if ( v23 == -1 ) /*0x64234e*/
        break; /*0x64234e*/
      *((_DWORD *)v12 + v23) = 0; /*0x642358*/
      *v43 = v23; /*0x642360*/
      ++v45; /*0x642368*/
      ++v43; /*0x64236c*/
    }
    while ( v45 < a2 ); /*0x642370*/
  }
  v53 = (_BYTE *)__2_YAPAXI_Z(v61.Height * v61.Width); /*0x642384*/
  v51 = v53; /*0x642388*/
  DSurface::Lock((DSurface *)&v61, 0, 0); /*0x642396*/
  v44 = 0; /*0x64239f*/
  if ( v61.Height > 0 ) /*0x6423a9*/
  {
    v27 = v61.Width; /*0x6423af*/
    while ( 1 ) /*0x6423b3*/
    {
      v28 = 0; /*0x6423b3*/
      v52 = 0; /*0x6423b7*/
      if ( v27 > 0 ) /*0x6423bb*/
        break; /*0x6423bb*/
LABEL_37:
      if ( ++v44 >= v61.Height ) /*0x642529*/
        goto LABEL_38; /*0x642529*/
    }
    while ( 1 ) /*0x6423c1*/
    {
      v57 = v28; /*0x6423c1*/
      v58 = v44; /*0x6423cd*/
      v29 = XSurface::GetPixel(&v61, &v57); /*0x6423d6*/
      v30 = 0; /*0x6423ed*/
      v46 = -1; /*0x6423ef*/
      v50 = 0xFFFF; /*0x6423f7*/
      LOBYTE(v55) = (unsigned __int8)(v29 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x642408*/
      BYTE1(v55) = (unsigned __int8)(v29 >> g_BitMask_Green) << g_BitMask_Blue; /*0x642429*/
      BYTE2(v55) = (unsigned __int8)(v29 >> g_BitShift_Blue) << g_BitMask_Red; /*0x642431*/
      if ( v21 > 0 ) /*0x642435*/
      {
        v31 = Blocka; /*0x642447*/
        v32 = (unsigned __int8)v55; /*0x642451*/
        v54[0] = BYTE1(v55); /*0x642460*/
        while ( 1 ) /*0x642490*/
        {
          v33 = 16 * (*v31 & 0xF) - BYTE2(v55); /*0x642490*/
          v34 = (HIDWORD(v33) ^ v33) - HIDWORD(v33) + abs32((((unsigned __int16)*v31 >> 4) & 0xF0) - v32); /*0x642499*/
          v35 = (*v31 & 0xF0) - v54[0]; /*0x6424a4*/
          v36 = (HIDWORD(v35) ^ v35) - HIDWORD(v35) + v34; /*0x6424a9*/
          if ( !v36 ) /*0x6424ab*/
            break; /*0x6424ab*/
          if ( v36 < v50 ) /*0x6424b1*/
          {
            v50 = v36; /*0x6424b3*/
            v46 = v30; /*0x6424b7*/
          }
          ++v30; /*0x6424c2*/
          ++v31; /*0x6424c3*/
          if ( v30 >= a2 ) /*0x6424c8*/
          {
            v37 = v46; /*0x6424ca*/
            goto LABEL_31; /*0x6424ce*/
          }
          v32 = (unsigned __int8)v55; /*0x642466*/
        }
        v37 = v30; /*0x6424d0*/
LABEL_31:
        if ( v37 != -1 && v37 < 256 ) /*0x6424dc*/
        {
          v21 = a2; /*0x6424f3*/
          goto LABEL_36; /*0x6424f3*/
        }
        v21 = a2; /*0x6424de*/
      }
      LOBYTE(v37) = 0; /*0x6424ed*/
LABEL_36:
      *v51 = v37; /*0x6424fa*/
      v27 = v61.Width; /*0x642500*/
      ++v51; /*0x642505*/
      v28 = ++v52; /*0x64250d*/
      if ( v52 >= v61.Width ) /*0x642514*/
        goto LABEL_37; /*0x642514*/
    }
  }
LABEL_38:
  DSurface::Unlock((DSurface *)&v61); /*0x64252f*/
  v38 = 2 * v21 + 12 + v61.Height * v61.Width; /*0x642545*/
  v54[0] = 2 * v21 + 12; /*0x642547*/
  v39 = (int *)__2_YAPAXI_Z(v38); /*0x642551*/
  *v39 = v61.Width; /*0x64255b*/
  v39[1] = v61.Height; /*0x642562*/
  v39[2] = v21; /*0x64256a*/
  v40 = v54[0]; /*0x642570*/
  qmemcpy(v39 + 3, Blocka, 2 * v21); /*0x642577*/
  qmemcpy((char *)v39 + v40, v53, v61.Height * v61.Width); /*0x642595*/
  __3_YAXPAX_Z(Blocka); /*0x6425a3*/
  __3_YAXPAX_Z(v53); /*0x6425ad*/
  __3_YAXPAX_Z(v49); /*0x6425b7*/
  *(_DWORD *)a3 = v38; /*0x6425c9*/
  Debug::Log(); /*0x6425cb*/
  DSurface::Destroy((DSurface *)&v61); /*0x6425d7*/
  return (int)v39; /*0x64213f*/
}



// ==== 0x006425F0  ModemGame::RenderPaletteImage  this=ModemGame  sig=csp ====
int __thiscall ModemGame::RenderPaletteImage(ModemGame *this, int *a2)
{
  int v4; // ebx
  int *v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  char *v7; // eax
  char *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // edx
  unsigned int v12; // eax
  int *v13; // ecx
  unsigned int v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  unsigned __int8 *i; // [esp+1Ch] [ebp-24h]
  int *v20; // [esp+20h] [ebp-20h]
  int v21; // [esp+24h] [ebp-1Ch]
  _DWORD v22[2]; // [esp+28h] [ebp-18h] BYREF
  char v23[16]; // [esp+30h] [ebp-10h] BYREF
  int *v24; // [esp+44h] [ebp+4h]

  v4 = a2[1]; /*0x6425fd*/
  v5 = a2 + 2; /*0x642605*/
  v24 = (int *)*a2; /*0x642608*/
  v21 = v4; /*0x64260c*/
  v20 = v5; /*0x642612*/
  v18 = *v5; /*0x642616*/
  v6 = *(void (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x64261a*/
  if ( v6 ) /*0x64261f*/
    (**v6)(v6, 1); /*0x642625*/
  v7 = (char *)__2_YAPAXI_Z(0x24u); /*0x642629*/
  if ( v7 ) /*0x642633*/
    v8 = DSurface::Construct(v7, (int)v24, v4, 1, 0); /*0x642641*/
  else
    v8 = 0; /*0x642648*/
  *(_DWORD *)this->__pad_0 = v8; /*0x64264a*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v8 + 24))(v8, 0); /*0x642653*/
  result = v18; /*0x642656*/
  v17 = 0; /*0x64265a*/
  for ( i = (unsigned __int8 *)a2 + 2 * v18 + 12; v17 < v4; ++v17 ) /*0x64266c*/
  {
    v10 = 0; /*0x642676*/
    if ( (int)v24 > 0 ) /*0x64267a*/
    {
      do /*0x642718*/
      {
        v22[0] = v10; /*0x642686*/
        v11 = *i++; /*0x64268a*/
        v12 = *((unsigned __int16 *)v5 + v11 + 2); /*0x64269c*/
        v13 = *(int **)this->__pad_0; /*0x6426eb*/
        v14 = ((int)(16 * (v12 & 0xF)) >> g_BitMask_Red << g_BitShift_Blue) /*0x6426ee*/
            | ((unsigned __int8)(v12 & 0xF0) >> g_BitMask_Blue << g_BitMask_Green)
            | (((v12 >> 4) & 0xF0) >> g_BitShift_Green_0 << g_BitShift_Red);
        v22[1] = v17; /*0x6426f4*/
        v15 = *v13; /*0x6426f8*/
        v16 = (*(int (__thiscall **)(int *, char *))(*v13 + 120))(v13, v23); /*0x6426fa*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int, int))(v15 + 136))( /*0x642707*/
          *(_DWORD *)this->__pad_0,
          v22,
          v14,
          v16);
        v5 = v20; /*0x642711*/
        ++v10; /*0x642715*/
      }
      while ( v10 < (int)v24 ); /*0x642718*/
      v4 = v21; /*0x64271e*/
    }
    result = v17 + 1; /*0x642726*/
  }
  return result; /*0x642733*/
}



// ==== 0x00642740  CoordStruct::Set2  this=ParticleSystemClass  sig=csp ====
_DWORD *__thiscall CoordStruct::Set2(CoordStruct *this, __int16 *a2, int a3)
{
  int v4; // edx

  v4 = *a2 << 8; /*0x642756*/
  this->ptr_8 = (a2[1] << 8) + 128; /*0x642759*/
  this->ptr_C = a3; /*0x642766*/
  this->vfptr = (void *)(v4 + 128); /*0x642769*/
  return &this->vfptr; /*0x64276b*/
}



// ==== 0x00642770  sub_642770  this=-  sig=ida-proto ====
int sub_642770()
{
  dword_AC4F18 = 0; /*0x642772*/
  dword_AC4F1C = 0; /*0x642777*/
  dword_AC4F20 = 0; /*0x64277c*/
  dword_AC4F24 = 0; /*0x642781*/
  return 0; /*0x642786*/
}



// ==== 0x00642790  sub_642790  this=-  sig=ida-proto ====
void sub_642790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x64279c*/
  dbl_AC4F30 = Math::Sqrt(v0 + v0); /*0x6427ae*/
}



// ==== 0x006427C0  sub_6427C0  this=-  sig=ida-proto ====
void sub_6427C0()
{
  dbl_AC5008 = dbl_AC4F30 / 60.0; /*0x6427cc*/
}



// ==== 0x006427E0  sub_6427E0  this=-  sig=ida-proto ====
void sub_6427E0()
{
  dbl_AC4FF0 = 1.0 / dbl_AC5008; /*0x6427ec*/
}



// ==== 0x00642800  sub_642800  this=-  sig=ida-proto ====
void sub_642800()
{
  dbl_AC4FE8 = 0.0174532925199433 * 45.0; /*0x64280c*/
}



// ==== 0x00642820  sub_642820  this=-  sig=ida-proto ====
void sub_642820()
{
  dbl_AC4F38 = 0.0174532925199433 * 60.0; /*0x64282c*/
}



// ==== 0x00642840  sub_642840  this=-  sig=ida-proto ====
void sub_642840()
{
  dbl_AC4F10 = 0.0174532925199433 * 90.0; /*0x64284c*/
}



// ==== 0x00642860  sub_642860  this=-  sig=ida-proto ====
__int64 sub_642860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4F10 - dbl_AC4F38); /*0x642872*/
  result = Math::RoundToInt(v0 * dbl_AC4F30 * 0.5); /*0x642886*/
  dword_AC5010 = result; /*0x64288b*/
  return result; /*0x642890*/
}



// ==== 0x006428A0  sub_6428A0  this=-  sig=ida-proto ====
void sub_6428A0()
{
  dbl_AC4F40 = Math::ArcTan((double)dword_AC5010 * 0.00390625); /*0x6428b7*/
}



// ==== 0x006428D0  sub_6428D0  this=-  sig=ida-proto ====
void sub_6428D0()
{
  dbl_AC4FE0 = Math::ArcTan((double)(2 * dword_AC5010) / dbl_AC4F30); /*0x6428f2*/
}



// ==== 0x00642900  sub_642900  this=-  sig=ida-proto ====
__int64 sub_642900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC5010) + 0.5); /*0x64291b*/
  dword_AC5004 = result; /*0x642920*/
  return result; /*0x642926*/
}



// ==== 0x00642930  sub_642930  this=-  sig=ida-proto ====
int sub_642930()
{
  word_AC4F28 = 0; /*0x642932*/
  word_AC4F2A = 0; /*0x642938*/
  return 0; /*0x64293e*/
}



// ==== 0x00642940  sub_642940  this=-  sig=ida-proto ====
int sub_642940()
{
  dword_AC4F48 = 0; /*0x642942*/
  dword_AC4F4C = 0; /*0x642947*/
  dword_AC4F50 = 0; /*0x64294c*/
  return 0; /*0x642951*/
}



// ==== 0x00642960  sub_642960  this=-  sig=ida-proto ====
int sub_642960()
{
  dword_AC5000 = 0; /*0x642965*/
  dword_AC4FF8 = 128; /*0x64296f*/
  dword_AC4FFC = 128; /*0x642974*/
  return 128; /*0x642979*/
}



// ==== 0x00642980  sub_642980  this=-  sig=ida-proto ====
int sub_642980()
{
  sub_6429E0(dword_AC4F58); /*0x642985*/
  return atexit(sub_6429A0); /*0x642995*/
}



// ==== 0x006429A0  sub_6429A0  this=-  sig=ida-proto ====
void __cdecl sub_6429A0()
{
  dword_AC4F58[0] = (int)&ProgressScreenClass::`vftable'; /*0x6429a5*/
  if ( byte_AC4FB0 ) /*0x6429b1*/
  {
    __3_YAXPAX_Z(dword_AC4FAC); /*0x6429b9*/
    byte_AC4FB0 = 0; /*0x6429c1*/
  }
  dword_AC4FAC = 0; /*0x6429c8*/
}



// ==== 0x006429E0  ObjectClass::method_6429E0  this=ProgressScreenClass  sig=csp ====
_DWORD *__thiscall sub_6429E0(ObjectClass *this)
{
  this->ambientSoundController[3] = 0; /*0x6429e8*/
  this->ambientSoundController[4] = 0; /*0x6429eb*/
  this->customSound_controller[0] = 0; /*0x6429ee*/
  this->customSound_controller[1] = 0; /*0x6429f1*/
  LOBYTE(this->customSound_controller[2]) = 0; /*0x6429f4*/
  this->customSound_controller[3] = 0; /*0x6429f7*/
  LOBYTE(this->customSound_controller[4]) = 0; /*0x6429fa*/
  BYTE1(this->customSound_controller[4]) = 0; /*0x6429fd*/
  BYTE2(this->customSound_controller[4]) = 0; /*0x642a00*/
  this->customSound = 0; /*0x642a03*/
  *(_DWORD *)&this->bombVisible = 0; /*0x642a06*/
  this->health = 0; /*0x642a09*/
  this->spawnStatus = -1; /*0x642a0c*/
  *(_DWORD *)&this->needsRedraw = -1; /*0x642a0f*/
  LOBYTE(this->estimatedHealth) = 0; /*0x642a1d*/
  this->visibilityFlags = 0; /*0x642a20*/
  this->AbstractClass = &ProgressScreenClass::`vftable'; /*0x642a23*/
  memset(&this->?, 0, 0x40u); /*0x642a29*/
  return &this->AbstractClass; /*0x642a2d*/
}



// ==== 0x00642A60  ProgressAnim::Init  this=ProgressAnim  sig=csp ====
int __thiscall ProgressAnim_Init(int this, int a2, int a3, char a4, int a5)
{
  int v6; // ecx
  _DWORD *v7; // eax
  int result; // eax

  *(_DWORD *)(this + 72) = a2; /*0x642a6e*/
  *(_DWORD *)(this + 76) = a3; /*0x642a75*/
  v6 = 0; /*0x642a78*/
  *(_BYTE *)(this + 97) = a4; /*0x642a7c*/
  if ( a4 > 0 ) /*0x642a7f*/
  {
    v7 = (_DWORD *)(this + 8); /*0x642a81*/
    do /*0x642a93*/
    {
      *v7 = 0; /*0x642a84*/
      v7[1] = 0; /*0x642a86*/
      ++v6; /*0x642a8d*/
      v7 += 2; /*0x642a8e*/
    }
    while ( v6 < *(char *)(this + 97) ); /*0x642a93*/
  }
  result = a5; /*0x642a95*/
  *(_BYTE *)(this + 96) = 1; /*0x642a99*/
  if ( a5 ) /*0x642a9f*/
    *(_DWORD *)(this + 100) = a5; /*0x642aa1*/
  else
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x642abc*/
  *(_DWORD *)(this + 80) = 0; /*0x642aa4*/
  *(_DWORD *)(this + 124) = -1; /*0x642aa7*/
  return result; /*0x642aae*/
}



// ==== 0x00642AD0  Scenario::SetByte96  this=Scenario  sig=csp ====
void __thiscall Scenario::SetByte96(Scenario *this)
{
  LOBYTE(this->Scenario_field_0x60) = 0; /*0x642ad0*/
}



// ==== 0x00642B10  Scenario::SetDword32  this=Scenario  sig=csp ====
int __thiscall Scenario::SetDword32(Scenario *this, int a2)
{
  this->Scenario_field_0x80 = (void *)a2; /*0x642b14*/
  return a2; /*0x642b1a*/
}



// ==== 0x00642B20  LoadingScreen::GetValue  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::GetValue(LoadingScreen *this)
{
  return this->q020; /*0x642b26*/
}



// ==== 0x00642B30  LoadingScreen::FindLoadScreenAnim  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::FindLoadScreenAnim(LoadingScreen *this)
{
  if ( this->q020 ) /*0x642b30*/
    return FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x642b4e*/
  else
    return FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1); /*0x642b44*/
}



// ==== 0x00642B60  LoadingScreen::GetColorScheme  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::GetColorScheme(LoadingScreen *this)
{
  if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) && *(_DWORD *)(*dword_A8DA78 + 107) == -1 ) /*0x642b7a*/
    return FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x642b86*/
  if ( this->q020 ) /*0x642b8b*/
    return FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x642ba9*/
  return FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1);
}



// ==== 0x00642BB0  Render_Render_642BB0  this=-  sig=csp ====
int __stdcall sub_642BB0(unsigned int a1)
{
  int result; // eax
  unsigned int PlayerColor; // eax

  result = 0; /*0x642bba*/
  if ( (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) && *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * a1) + 107) == -1 ) /*0x642bd8*/
    return *((_DWORD *)dword_B054D4 + SessionClass::GetPlayerColorScheme(0xFFFFFFFE)); /*0x642bed*/
  if ( a1 < 8 ) /*0x642bf5*/
  {
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)(dword_A8DA78 + 4 * a1)); /*0x642bff*/
    return *((_DWORD *)dword_B054D4 + SessionClass::GetPlayerColorScheme(PlayerColor)); /*0x642c15*/
  }
  return result; /*0x642bec*/
}



// ==== 0x00642C20  SHPClass::Load  this=SHPClass  sig=csp ====
int __thiscall SHPClass::Load(int this, char *Source, char *a3, int a4)
{
  int result; // eax

  if ( Source ) /*0x642c2a*/
  {
    if ( *(_DWORD *)(this + 84) ) /*0x642c2c*/
    {
      if ( *(_BYTE *)(this + 88) ) /*0x642c33*/
      {
        __3_YAXPAX_Z(*(void **)(this + 84)); /*0x642c3b*/
        *(_BYTE *)(this + 88) = 0; /*0x642c43*/
      }
      *(_DWORD *)(this + 84) = 0; /*0x642c47*/
    }
    result = (int)LoadFileSHP(Source, (bool *)(this + 88)); /*0x642c53*/
    *(_DWORD *)(this + 84) = result; /*0x642c5a*/
    if ( result ) /*0x642c5d*/
    {
      if ( a3 ) /*0x642c65*/
      {
        *(_DWORD *)(this + 92) = a3; /*0x642c69*/
        Render_Load(a3); /*0x642c6c*/
      }
      *(_DWORD *)(this + 116) = a4; /*0x642c75*/
      return a4; /*0x642c71*/
    }
  }
  return result; /*0x642c78*/
}



// ==== 0x00642C80  TextRenderer::MeasureBuilding  this=TextRenderer  sig=csp ====
int __thiscall TextRenderer::MeasureBuilding(int *this, int a2, int a3, int a4, char a5, char a6)
{
  int result; // eax
  _DWORD *FoundationSize; // eax
  int v9; // ebx
  int Default; // edi
  int *v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // edi
  int *Viewport; // eax
  int v16; // kr04_4
  int Instance; // [esp+4h] [ebp-3Ch]
  int v18; // [esp+8h] [ebp-38h]
  int v19; // [esp+Ch] [ebp-34h]
  int v20; // [esp+18h] [ebp-28h]
  int v21[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v22; // [esp+3Eh] [ebp-2h]
  int v23; // [esp+44h] [ebp+4h]

  result = a2; /*0x642c80*/
  if ( a2 == -1 && a3 == -1 ) /*0x642c9a*/
  {
    v19 = *((char *)this + 97); /*0x642cb1*/
    FoundationSize = Building::GetFoundationSize(v21, 0); /*0x642cb5*/
    v9 = 0; /*0x642cbc*/
    Default = 0; /*0x642cc2*/
    v20 = FoundationSize[2]; /*0x642cce*/
    v18 = FoundationSize[3] + 6; /*0x642cd8*/
    if ( a5 ) /*0x642ce2*/
    {
      Default = BuildingType::FindDefault(0); /*0x642ceb*/
      if ( Default ) /*0x642cef*/
      {
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642cfc*/
        Default = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 128))(Default); /*0x642d04*/
      }
    }
    Instance = TextRenderer::GetInstance(); /*0x642d10*/
    v11 = v21; /*0x642d14*/
    v23 = 15; /*0x642d18*/
    do /*0x642d3d*/
    {
      *(_WORD *)v11 = *(_WORD *)CharToWideString(g_Str_W); /*0x642d2d*/
      v11 = (int *)((char *)v11 + 2); /*0x642d35*/
      --v23; /*0x642d39*/
    }
    while ( v23 ); /*0x642d3d*/
    v22 = 0; /*0x642d4c*/
    v12 = Text::MeasureWidth((int)v21, 0); /*0x642d53*/
    if ( v18 > Default ) /*0x642d6b*/
      Default = v18; /*0x642d6d*/
    if ( Default <= *(_DWORD *)(Instance + 28) ) /*0x642d71*/
      Default = *(_DWORD *)(Instance + 28); /*0x642d73*/
    v13 = v9 + v12 + v20 + 36; /*0x642d79*/
    v14 = Default + 4; /*0x642d7c*/
    if ( v19 > 1 ) /*0x642d82*/
      v14 *= v19; /*0x642d87*/
    Viewport = Display::GetViewport(v21); /*0x642d8d*/
    v16 = Viewport[2] - v13; /*0x642dac*/
    result = (Viewport[3] - v14) / 2; /*0x642db9*/
    *(this + 26) = v16 / 2; /*0x642dbb*/
    *(this + 27) = result; /*0x642dbe*/
  }
  else
  {
    *(this + 26) = a2; /*0x642dc4*/
    *(this + 27) = a3; /*0x642dc7*/
  }
  LOBYTE(result) = a6; /*0x642dd2*/
  this->u32_50 = a4; /*0x642dd6*/
  *((_BYTE *)this + 112) = a5; /*0x642dd9*/
  *((_BYTE *)this + 113) = a6; /*0x642ddc*/
  return result; /*0x642ddf*/
}



// ==== 0x00642DF0  Scenario::SetDword30  this=Scenario  sig=csp ====
int __thiscall Scenario::SetDword30(Scenario *this, int a2)
{
  this->Scenario_field_0x78 = (void *)a2; /*0x642df4*/
  return a2; /*0x642df7*/
}



// ==== 0x00642E00  UI_Render  this=-  sig=csp ====
_DWORD *__stdcall sub_642E00(_DWORD *a1, _DWORD *a2)
{
  _DWORD *FoundationSize; // eax
  int v3; // ecx
  _DWORD v5[4]; // [esp+10h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v5, 0); /*0x642e0d*/
  v3 = FoundationSize[3]; /*0x642e2b*/
  *a1 = FoundationSize[2] + 6; /*0x642e2e*/
  *a2 = v3 + 6; /*0x642e37*/
  return a2; /*0x642e39*/
}



// ==== 0x00642E40  UI_Render_642E40  this=-  sig=csp ====
int __stdcall sub_642E40(_DWORD *a1, int *a2)
{
  int Default; // eax
  int v3; // esi
  int result; // eax

  Default = BuildingType::FindDefault(0); /*0x642e43*/
  v3 = Default; /*0x642e48*/
  if ( Default ) /*0x642e4c*/
  {
    *a1 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642e69*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x642e6f*/
    *a2 = result; /*0x642e7a*/
  }
  else
  {
    *a1 = 0; /*0x642e56*/
    *a2 = 0; /*0x642e58*/
    return (int)a1; /*0x642e4e*/
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
    *v4++ = *(_WORD *)CharToWideString(g_Str_W); /*0x642eaf*/
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
int *__stdcall sub_642EF0(_DWORD *a1, int *a2, int a3, char a4)
{
  _DWORD *FoundationSize; // eax
  int v5; // ebp
  int v6; // edi
  int Default; // eax
  int v8; // esi
  int Instance; // ebx
  _WORD *v10; // esi
  int v11; // eax
  int v12; // ebx
  int *result; // eax
  int v14; // edi
  int v15; // [esp+10h] [ebp-34h]
  int v16; // [esp+1Ch] [ebp-28h]
  _DWORD v17[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v18; // [esp+42h] [ebp-2h]
  int v19; // [esp+54h] [ebp+10h]

  FoundationSize = Building::GetFoundationSize(v17, 0); /*0x642f01*/
  v5 = 0; /*0x642f08*/
  v6 = 0; /*0x642f0e*/
  v16 = FoundationSize[2]; /*0x642f1a*/
  v15 = FoundationSize[3] + 6; /*0x642f24*/
  if ( a4 ) /*0x642f2e*/
  {
    Default = BuildingType::FindDefault(0); /*0x642f32*/
    v8 = Default; /*0x642f37*/
    if ( Default ) /*0x642f3b*/
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642f44*/
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x642f50*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x642f5c*/
  v10 = v17; /*0x642f5e*/
  v19 = 15; /*0x642f62*/
  do /*0x642f86*/
  {
    *v10++ = *(_WORD *)CharToWideString(g_Str_W); /*0x642f7b*/
    --v19; /*0x642f82*/
  }
  while ( v19 ); /*0x642f86*/
  v18 = 0; /*0x642f91*/
  v11 = Text::MeasureWidth((int)v17, 0); /*0x642f98*/
  v12 = *(_DWORD *)(Instance + 28); /*0x642fa1*/
  *a1 = v5 + v11 + v16 + 26; /*0x642fb4*/
  if ( v15 > v6 ) /*0x642fb6*/
    v6 = v15; /*0x642fb8*/
  result = a2; /*0x642fba*/
  *a2 = v6; /*0x642fc0*/
  if ( v6 <= v12 ) /*0x642fc2*/
    v6 = v12; /*0x642fc4*/
  *a2 = v6; /*0x642fc6*/
  *a1 += 10; /*0x642fd1*/
  v14 = *a2 + 4; /*0x642fd5*/
  *a2 = v14; /*0x642fdb*/
  if ( a3 > 1 ) /*0x642fe3*/
    *a2 = a3 * v14; /*0x642fe8*/
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
    *v7++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643070*/
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
    *v5++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643144*/
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
    *v5++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643240*/
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
    *v5++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643340*/
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
    *v11++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643396*/
    --v12; /*0x64339c*/
  }
  while ( v12 ); /*0x64339d*/
  v16 = 0; /*0x6433a8*/
  Text::MeasureWidth((int)v15, 0); /*0x6433af*/
  return (v9 - *(_DWORD *)(v10 + 28)) / 2; /*0x6433bb*/
}



// ==== 0x006433D0  Progress::GetAverage  this=Progress  sig=csp ====
int __thiscall Progress::GetAverage(Progress *this)
{
  int result; // eax
  int v2; // edx
  double v3; // st7

  v2 = *((char *)this + 97); /*0x6433d1*/
  v3 = 0.0; /*0x6433d5*/
  if ( v2 > 0 ) /*0x6433e1*/
  {
    result = (int)&this->m_Values[2]; /*0x6433e3*/
    do /*0x6433ec*/
    {
      v3 = v3 + *(double *)result; /*0x6433e6*/
      result += 8; /*0x6433e8*/
      --v2; /*0x6433eb*/
    }
    while ( v2 ); /*0x6433ec*/
  }
  return result; /*0x6433f6*/
}



// ==== 0x00643400  LoadScreen::RenderProgressBackground  this=LoadScreen  sig=csp ====
void __thiscall LoadScreen::RenderProgressBackground(int this, double a2, double a3, int *a4, int a5)
{
  _DWORD *FoundationSize; // eax
  int v7; // edi
  int v8; // ebp
  int BuildingAnimByName; // eax
  int *v10; // ebx
  int v11; // eax
  unsigned __int8 v12; // dl
  int v13; // eax
  int v14; // eax
  struct tagRECT *v15; // [esp+0h] [ebp-58h]
  int v16; // [esp+4h] [ebp-54h]
  int v17; // [esp+8h] [ebp-50h]
  __int16 v18; // [esp+10h] [ebp-48h]
  int v19; // [esp+18h] [ebp-40h]
  _DWORD v20[4]; // [esp+28h] [ebp-30h] BYREF
  int v21[2]; // [esp+38h] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-18h]
  int v23; // [esp+44h] [ebp-14h]
  _DWORD v24[4]; // [esp+48h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v24, 0); /*0x643413*/
  v7 = FoundationSize[2]; /*0x643430*/
  v8 = FoundationSize[3]; /*0x64343c*/
  v20[1] = HIDWORD(a2) + 3; /*0x643446*/
  v19 = LODWORD(a2) + 3; /*0x64344e*/
  v20[0] = LODWORD(a2) + 3; /*0x643452*/
  v20[2] = v7; /*0x643456*/
  v20[3] = v8; /*0x64345a*/
  Rect::Inflate(v15, v16, v17); /*0x64345e*/
  BuildingAnimByName = a5; /*0x643463*/
  if ( a5 ) /*0x643469*/
  {
    LODWORD(a2) = *(_DWORD *)(a5 + 780); /*0x64348c*/
  }
  else
  {
    BuildingAnimByName = FindBuildingAnimByName(aDarkred, 1); /*0x643475*/
    LODWORD(a2) = dword_87F6C4; /*0x643480*/
  }
  if ( *(_DWORD *)(this + 116) ) /*0x643490*/
    LODWORD(a2) = *(_DWORD *)(this + 116); /*0x643497*/
  v10 = a4; /*0x64349e*/
  if ( *(_BYTE *)(this + 113) ) /*0x64349b*/
  {
    v11 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)&a5); /*0x6434b5*/
    v18 = *(_WORD *)v11; /*0x6434bd*/
    v12 = *(_BYTE *)(v11 + 2); /*0x6434c8*/
    v13 = *v10; /*0x6434cb*/
    v10 = a4; /*0x643521*/
    (*(void (__thiscall **)(int *, _DWORD *, int))(v13 + 88))( /*0x643529*/
      a4,
      v20,
      ((unsigned __int8)v18 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v18) >> g_BitMask_Blue << g_BitMask_Green)
    | (v12 >> g_BitMask_Red << g_BitShift_Blue));
  }
  v21[0] = v19; /*0x643538*/
  v21[1] = HIDWORD(a2) + 3; /*0x64353c*/
  v22 = v7; /*0x643544*/
  v23 = v8; /*0x643548*/
  LOWORD(v14) = Math::RoundToInt((double)v7 * a3); /*0x64354c*/
  v22 = v14; /*0x643551*/
  a3 = 0.0; /*0x64357f*/
  DrawToSurfaceSHP( /*0x643594*/
    (int)v10,
    SLODWORD(a2),
    *(_DWORD *)(this + 84),
    0,
    (int *)&a3,
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
  v7 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x643635*/
  if ( g_DSurface_Hidden ) /*0x643639*/
  {
    result = sub_4BAFE0((_DWORD *)g_DSurface_Hidden); /*0x64363b*/
    if ( !result ) /*0x643642*/
      return Surface::BlitTransparent(v8, g_DSurface_Hidden, a3, v7); /*0x64365b*/
  }
  return result; /*0x643660*/
}



// ==== 0x00643670  UI_Render  this=-  sig=csp ====
int *__stdcall sub_643670(int a1, int a2, size_t a3, int a4, int a5)
{
  int Instance; // ebx
  _WORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-38h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v13[30]; // [esp+24h] [ebp-20h] BYREF
  __int16 v14; // [esp+42h] [ebp-2h]

  Instance = TextRenderer::GetInstance(); /*0x643680*/
  v6 = v13; /*0x643682*/
  v7 = 15; /*0x643686*/
  do /*0x64369f*/
  {
    *v6++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643698*/
    --v7; /*0x64369e*/
  }
  while ( v7 ); /*0x64369f*/
  v14 = 0; /*0x6436ab*/
  v8 = Text::MeasureWidth((int)v13, 0); /*0x6436b0*/
  v9 = *(_DWORD *)(Instance + 28); /*0x6436b9*/
  if ( a5 != -1 ) /*0x6436bf*/
    v8 = a5; /*0x6436c1*/
  v12[2] = v8 + a1; /*0x6436d5*/
  v12[3] = v9 + a2; /*0x6436d9*/
  v12[0] = 0; /*0x6436fa*/
  v12[1] = 0; /*0x6436fe*/
  return TextRenderer::DrawText(&v11, a3, g_DSurface_Hidden, v12, (int)&a1, a4, 0, 25); /*0x64370a*/
}



// ==== 0x00643720  ObjectClass::RenderBuildingProductionButton  this=ObjectClass  sig=csp ====
int __thiscall RenderBuildingProductionButton(int this, int a2, int a3, int *a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  int *FoundationSize; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebp
  int v18; // ecx
  char v19; // dl
  int v20; // eax
  int Default; // eax
  int v22; // eax
  int v23; // edx
  int PlayerSide; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // eax
  __int16 v28; // di
  int v30; // [esp+10h] [ebp-4Ch] BYREF
  int v31; // [esp+14h] [ebp-48h] BYREF
  int v32; // [esp+18h] [ebp-44h] BYREF
  int v33; // [esp+1Ch] [ebp-40h] BYREF
  int v34; // [esp+20h] [ebp-3Ch] BYREF
  int v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  int v37; // [esp+2Ch] [ebp-30h]
  int v38; // [esp+30h] [ebp-2Ch]
  double v39; // [esp+34h] [ebp-28h]
  unsigned int v40[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v41; // [esp+4Ch] [ebp-10h]
  int v42; // [esp+50h] [ebp-Ch]
  int v43; // [esp+54h] [ebp-8h]
  int v44; // [esp+58h] [ebp-4h]
  int v45; // [esp+70h] [ebp+14h]

  if ( a5 < *(char *)(this + 97) ) /*0x643733*/
  {
    v39 = *(double *)(this + 8 * a5 + 8) / *(double *)(this + 72); /*0x64374c*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 76); /*0x643738*/
    LODWORD(v39) = *(_DWORD *)(this + 72); /*0x64373b*/
    HIDWORD(v39) = v7; /*0x64373f*/
  }
  v31 = a4[1]; /*0x643762*/
  v32 = 0; /*0x643770*/
  v30 = 0; /*0x643774*/
  TextRenderer::MeasureBuilding2(&v32, &v30, 1, a6); /*0x643778*/
  v8 = v31 + a5 * v30; /*0x643793*/
  FoundationSize = Building::GetFoundationSize(v40, 0); /*0x643795*/
  v41 = *FoundationSize; /*0x64379c*/
  v42 = FoundationSize[1]; /*0x6437a3*/
  v43 = FoundationSize[2]; /*0x6437aa*/
  v44 = FoundationSize[3]; /*0x6437b7*/
  v30 = 0; /*0x6437bb*/
  v32 = 0; /*0x6437bf*/
  if ( a6 ) /*0x6437c3*/
    UI_Render_642E40(&v30, &v32); /*0x6437d1*/
  v31 = 0; /*0x6437de*/
  v33 = 0; /*0x6437e2*/
  UI_Render_642E80(&v31, &v33); /*0x6437e6*/
  v32 = v30 + v31 + v43 + 36; /*0x643800*/
  if ( *(_DWORD *)(this + 120) != -1 ) /*0x64380a*/
    v32 = *(_DWORD *)(this + 120); /*0x64380c*/
  v10 = Building::GetFoundationSize(v40, 0); /*0x643819*/
  v11 = *v10; /*0x64381e*/
  v33 = 0; /*0x643820*/
  v41 = v11; /*0x643824*/
  v31 = 0; /*0x643828*/
  v42 = v10[1]; /*0x64382f*/
  v43 = v10[2]; /*0x643836*/
  v12 = a4[1]; /*0x64383a*/
  v13 = v10[3]; /*0x64383d*/
  v14 = *a4; /*0x643840*/
  v44 = v13; /*0x643843*/
  v40[0] = v14; /*0x64384b*/
  v40[1] = v12; /*0x64384f*/
  TextRenderer::MeasureBuilding2(&v33, &v31, 1, a6); /*0x643862*/
  v34 = 0; /*0x643873*/
  v30 = 0; /*0x643877*/
  UI_Render(&v34, &v30); /*0x64387b*/
  v40[0] += 5; /*0x643891*/
  v15 = *a4; /*0x6438a4*/
  v16 = a4[1]; /*0x6438a6*/
  v17 = v8 + (v31 - v30) / 2; /*0x6438a9*/
  v38 = v16; /*0x6438ab*/
  v18 = v15 + v43 + 21; /*0x6438af*/
  v19 = a6; /*0x6438b3*/
  v37 = v18; /*0x6438b9*/
  v41 = v18; /*0x6438bd*/
  v42 = v16; /*0x6438c1*/
  if ( a6 ) /*0x6438c5*/
  {
    v34 = 0; /*0x6438d6*/
    v31 = 0; /*0x6438da*/
    TextRenderer::MeasureBuilding2(&v34, &v31, 1, a6); /*0x6438de*/
    v33 = 0; /*0x6438ef*/
    v30 = 0; /*0x6438f3*/
    UI_Render_642E40(&v33, &v30); /*0x6438f7*/
    v18 = v37; /*0x643906*/
    v19 = a6; /*0x64390d*/
    v42 = v8 + (v31 - v30) / 2; /*0x643915*/
    v16 = v38; /*0x643919*/
  }
  v35 = v18; /*0x64391d*/
  v36 = v16; /*0x643930*/
  v34 = 0; /*0x643934*/
  v31 = 0; /*0x643938*/
  TextRenderer::MeasureBuilding2(&v34, &v31, 1, v19); /*0x64393c*/
  v33 = 0; /*0x643949*/
  v30 = 0; /*0x64394d*/
  UI_Render_642E80(&v33, &v30); /*0x643951*/
  v20 = (v31 - v30) / 2; /*0x643967*/
  v31 = v20; /*0x64396b*/
  if ( a6 ) /*0x64396f*/
  {
    Default = BuildingType::FindDefault(0); /*0x643973*/
    v34 = Default; /*0x64397a*/
    if ( Default ) /*0x64397e*/
    {
      v33 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64398f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 128))(v34); /*0x643995*/
      v22 = v33; /*0x64399b*/
    }
    else
    {
      v22 = 0; /*0x643980*/
    }
    v23 = v22 + v37 + 10; /*0x6439a3*/
    v20 = v31; /*0x6439a7*/
    v35 = v23; /*0x6439ab*/
  }
  v36 = v8 + v20; /*0x6439bb*/
  LoadScreen::RenderProgressBackground(COERCE_DOUBLE(__PAIR64__(v17, v40[0])), v39, g_DSurface_Hidden, a2); /*0x6439d3*/
  if ( a6 ) /*0x6439dc*/
  {
    PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)(dword_A8DA78 + 4 * a5)); /*0x6439ef*/
    if ( (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) && *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * a5) + 107) == -1 ) /*0x643a11*/
      PlayerSide = -3; /*0x643a13*/
    v45 = BuildingType::FindDefault((void *)PlayerSide); /*0x643a21*/
    if ( v45 ) /*0x643a25*/
    {
      v25 = BuildingType::FindDefault(0); /*0x643a2e*/
      if ( v25 ) /*0x643a32*/
      {
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x643a47*/
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 128))(v25); /*0x643a49*/
      }
      else
      {
        v26 = 0; /*0x643a34*/
        v27 = 0; /*0x643a36*/
      }
      Rect::Set(v40, v41, v42, v26, v27); /*0x643a5f*/
      v28 = PackRGB565(255); /*0x643a7b*/
      if ( g_DSurface_Hidden && !(unsigned __int8)sub_4BAFE0() ) /*0x643a81*/
        Surface::BlitTransparent((int *)v40, g_DSurface_Hidden, v45, v28); /*0x643aa0*/
    }
  }
  return UI_Render_643670(v35, v36, a3, a2, *a4 - v35 + v32 - 3); /*0x643ad1*/
}



// ==== 0x00643AE0  LoadScreen::Render  this=LoadScreen  sig=csp ====
int __userpurge LoadScreen::Render@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, double a4)
{
  int result; // eax
  HWND v6; // eax
  HWND DlgItem; // eax
  char v8; // dl
  int v9; // ecx
  char v10; // al
  signed int v11; // edi
  int BuildingAnimByName; // eax
  int v13; // eax
  int v14; // [esp+0h] [ebp-20h]
  int v15; // [esp+4h] [ebp-1Ch]
  double v16; // [esp+8h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF
  double v18; // [esp+24h] [ebp+4h]

  LOBYTE(result) = *(_BYTE *)(a1 + 96); /*0x643ae7*/
  if ( (_BYTE)result ) /*0x643aec*/
  {
    result = *(_DWORD *)(a1 + 84); /*0x643af2*/
    if ( result ) /*0x643af7*/
    {
      v6 = *(HWND *)(a1 + 100); /*0x643afd*/
      if ( v6 ) /*0x643b02*/
      {
        DlgItem = GetDlgItem(v6, 1593); /*0x643b0a*/
        ScreenDialogToClient(DlgItem, &Rect); /*0x643b16*/
        v8 = *(_BYTE *)(a1 + 97); /*0x643b1b*/
        v16 = *(double *)&Rect.left; /*0x643b26*/
        if ( v8 > 0 ) /*0x643b30*/
          v18 = *(double *)(a1 + 8) / *(double *)(a1 + 72); /*0x643b48*/
        else
          v18 = *(double *)(a1 + 72); /*0x643b38*/
        LoadScreen::RenderProgressBackground(a1, *(double *)&Rect.left, v18, (int *)DSurface_Alternate, 0); /*0x643b63*/
      }
      else
      {
        v16 = a4; /*0x643b7b*/
        if ( *(_QWORD *)&a4 == __PAIR64__(LODWORD(a4), -1) ) /*0x643b83*/
        {
          v9 = *(_DWORD *)(a1 + 108); /*0x643b8c*/
          LODWORD(v16) = *(_DWORD *)(a1 + 104); /*0x643b8f*/
          HIDWORD(v16) = v9; /*0x643b93*/
        }
        v10 = *(_BYTE *)(a1 + 97); /*0x643b97*/
        v11 = *(_DWORD *)(a1 + 80); /*0x643b9a*/
        if ( v10 == 1 ) /*0x643b9f*/
        {
          if ( dword_A8B238[0] ) /*0x643ba8*/
          {
            if ( !v11 ) /*0x643bdc*/
              v11 = *(_DWORD *)dword_A8DA78; /*0x643be4*/
            BuildingAnimByName = Render_Render_642BB0(0); /*0x643bea*/
          }
          else
          {
            if ( !v11 ) /*0x643bac*/
              v11 = (signed int)&g_TypeClass_DefaultString; /*0x643bae*/
            if ( *(_DWORD *)(a1 + 128) ) /*0x643bb3*/
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x643bd3*/
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1); /*0x643bc7*/
          }
          RenderBuildingProductionButton(a1, BuildingAnimByName, v11, (int *)&v16, 0, *(_BYTE *)(a1 + 112)); /*0x643bfe*/
        }
        else
        {
          v11 = 0; /*0x643c05*/
          if ( v10 > 0 ) /*0x643c09*/
          {
            do /*0x643c36*/
            {
              v13 = Render_Render_642BB0(v11); /*0x643c0e*/
              RenderBuildingProductionButton( /*0x643c2a*/
                a1,
                v13,
                *(_DWORD *)(dword_A8DA78 + 4 * v11),
                (int *)&v16,
                v11,
                *(_BYTE *)(a1 + 112));
              ++v11; /*0x643c33*/
            }
            while ( v11 < *(char *)(a1 + 97) ); /*0x643c36*/
          }
        }
        return Frame::Present((int)g_DSurface_Hidden, a2, a3, v11, 0, v14, v15, (int *)LODWORD(v16)); /*0x643c42*/
      }
    }
  }
  return result; /*0x643b68*/
}



// ==== 0x00643C50  Network::UpdateLatencyDisplay  this=Network  sig=csp ====
int __thiscall Network::UpdateLatencyDisplay(int this, int a2, double a3, double a4)
{
  int v4; // ebx
  double v6; // st7
  int v7; // ecx
  double *v8; // eax
  int result; // eax
  int v10; // edx
  double v11; // st7
  double v12; // st6
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  int v17; // ecx
  double v18; // st7
  double *v19; // eax
  int v20; // eax
  void (__thiscall ***v21)(_DWORD, int, _DWORD *); // ecx
  HWND v22; // eax
  _DWORD v23[2]; // [esp+8h] [ebp-8h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v6 = 0.0; /*0x643c5c*/
  v7 = *(char *)(this + 97); /*0x643c62*/
  if ( v7 > 0 ) /*0x643c6c*/
  {
    v8 = (double *)(this + 8); /*0x643c6e*/
    do /*0x643c77*/
    {
      v6 = v6 + *v8++; /*0x643c71*/
      --v7; /*0x643c76*/
    }
    while ( v7 ); /*0x643c77*/
  }
  LOWORD(result) = Math::RoundToInt(v6); /*0x643c88*/
  v10 = result; /*0x643c90*/
  v11 = *(double *)(this + 8 * a2 + 8); /*0x643c94*/
  v12 = *(double *)(this + 72) * 0.01 * a3; /*0x643ca1*/
  *(double *)(this + 8 * a2 + 8) = v12; /*0x643ca4*/
  if ( v12 > *(double *)(this + 72) ) /*0x643cb0*/
  {
    *(_DWORD *)(this + 8 * a2 + 8) = *(_DWORD *)(this + 72); /*0x643cb5*/
    result = *(_DWORD *)(this + 76); /*0x643cb9*/
    *(_DWORD *)(this + 8 * a2 + 12) = result; /*0x643cbc*/
  }
  v14 = v11 < *(double *)(this + 8 * a2 + 8); /*0x643cc0*/
  v15 = 0; /*0x643cc0*/
  v16 = v11 == *(double *)(this + 8 * a2 + 8); /*0x643cc0*/
  LOWORD(result) = v13; /*0x643cc4*/
  if ( v11 != *(double *)(this + 8 * a2 + 8) ) /*0x643cc9*/
  {
    v17 = *(char *)(this + 97); /*0x643ccf*/
    v18 = 0.0; /*0x643cd3*/
    if ( v17 > 0 ) /*0x643cdf*/
    {
      v19 = (double *)(this + 8); /*0x643ce1*/
      do /*0x643cea*/
      {
        v18 = v18 + *v19++; /*0x643ce4*/
        --v17; /*0x643ce9*/
      }
      while ( v17 ); /*0x643cea*/
    }
    v23[0] = v10; /*0x643cf0*/
    LOWORD(v20) = Math::RoundToInt(v18); /*0x643cff*/
    v21 = *(void (__thiscall ****)(_DWORD, int, _DWORD *))(this + 4); /*0x643d04*/
    v23[1] = v20; /*0x643d07*/
    if ( v21 && *(_BYTE *)(this + 96) ) /*0x643d11*/
      (**v21)(v21, 4526, v23); /*0x643d24*/
    v22 = *(HWND *)(this + 100); /*0x643d26*/
    if ( v22 ) /*0x643d2b*/
      return SendMessageA(v22, 0xFu, 0, 0); /*0x643d34*/
    else
      return LoadScreen::Render(this, v4, (int)&savedregs, a4); /*0x643d4b*/
  }
  return result; /*0x643d3a*/
}



// ==== 0x00643E60  LoadScreen::IsActive  this=LoadScreen  sig=csp ====
int __thiscall LoadScreen::IsActive(LoadScreen *this)
{
  return *((_DWORD *)this + 25) != 0; /*0x643e6a*/
}



// ==== 0x00643E70  VtableStub::643E70  this=VtableStub  sig=csp ====
void __thiscall VtableStub::643E70(_DWORD *this)
{
  *(this + 25) = 0; /*0x643e70*/
}



// ==== 0x00643E80  Function::643E80  this=Function  sig=csp ====
int __thiscall Function::Method_643E80(Function *this, int a2)
{
  this->Function_field_0x04 = a2; /*0x643e84*/
  return a2; /*0x643e87*/
}



// ==== 0x00643E90  Progress::GetWeighted  this=Progress  sig=csp ====
int __thiscall Progress::GetWeighted(int this, int a2)
{
  return a2; /*0x643e9f*/
}



// ==== 0x00643EB0  sub_643EB0  this=-  sig=ida-proto ====
void sub_643EB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x643ebc*/
  dbl_AC5028 = Math::Sqrt(v0 + v0); /*0x643ece*/
}



// ==== 0x00643EE0  sub_643EE0  this=-  sig=ida-proto ====
void sub_643EE0()
{
  dbl_AC5078 = dbl_AC5028 / 60.0; /*0x643eec*/
}



// ==== 0x00643F00  sub_643F00  this=-  sig=ida-proto ====
void sub_643F00()
{
  dbl_AC5060 = 1.0 / dbl_AC5078; /*0x643f0c*/
}



// ==== 0x00643F20  sub_643F20  this=-  sig=ida-proto ====
void sub_643F20()
{
  dbl_AC5058 = 0.0174532925199433 * 45.0; /*0x643f2c*/
}



// ==== 0x00643F40  sub_643F40  this=-  sig=ida-proto ====
void sub_643F40()
{
  dbl_AC5030 = 0.0174532925199433 * 60.0; /*0x643f4c*/
}



// ==== 0x00643F60  sub_643F60  this=-  sig=ida-proto ====
void sub_643F60()
{
  dbl_AC5018 = 0.0174532925199433 * 90.0; /*0x643f6c*/
}



// ==== 0x00643F80  sub_643F80  this=-  sig=ida-proto ====
__int64 sub_643F80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC5018 - dbl_AC5030); /*0x643f92*/
  result = Math::RoundToInt(v0 * dbl_AC5028 * 0.5); /*0x643fa6*/
  dword_AC5080 = result; /*0x643fab*/
  return result; /*0x643fb0*/
}



// ==== 0x00643FC0  sub_643FC0  this=-  sig=ida-proto ====
void sub_643FC0()
{
  dbl_AC5038 = Math::ArcTan((double)dword_AC5080 * 0.00390625); /*0x643fd7*/
}



// ==== 0x00643FF0  sub_643FF0  this=-  sig=ida-proto ====
void sub_643FF0()
{
  dbl_AC5050 = Math::ArcTan((double)(2 * dword_AC5080) / dbl_AC5028); /*0x644012*/
}



// ==== 0x00644020  sub_644020  this=-  sig=ida-proto ====
__int64 sub_644020()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC5080) + 0.5); /*0x64403b*/
  dword_AC5074 = result; /*0x644040*/
  return result; /*0x644046*/
}



// ==== 0x00644050  sub_644050  this=-  sig=ida-proto ====
int sub_644050()
{
  word_AC5020 = 0; /*0x644052*/
  word_AC5022 = 0; /*0x644058*/
  return 0; /*0x64405e*/
}



// ==== 0x00644060  sub_644060  this=-  sig=ida-proto ====
int sub_644060()
{
  dword_AC5040 = 0; /*0x644062*/
  dword_AC5044 = 0; /*0x644067*/
  dword_AC5048 = 0; /*0x64406c*/
  return 0; /*0x644071*/
}



// ==== 0x00644080  sub_644080  this=-  sig=ida-proto ====
int sub_644080()
{
  dword_AC5070 = 0; /*0x644085*/
  dword_AC5068 = 128; /*0x64408f*/
  dword_AC506C = 128; /*0x644094*/
  return 128; /*0x644099*/
}



// ==== 0x006440A0  OverlayTypeClass::Construct  this=ParticleSystemTypeClass  sig=csp ====
_DWORD *__thiscall OverlayTypeClass::Construct(OverlayTypeClass *this, char *Source)
{
  void *v3; // eax

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x6440a9*/
  this->LandType[0] = -1; /*0x6440b3*/
  *(_DWORD *)&this->RadarColor[2] = -1; /*0x6440b9*/
  this->q2B8 = -1; /*0x6440bf*/
  LOBYTE(this->CellAnim) = 0; /*0x6440c5*/
  this->DamageLevels = 1; /*0x6440cb*/
  this->Strength = 0; /*0x6440d5*/
  *(_DWORD *)&this->Wall = 50; /*0x6440db*/
  *(_DWORD *)&this->NoUseTileLandType = 0; /*0x6440e5*/
  *(_DWORD *)&this->Explodes = 0; /*0x6440eb*/
  *(_DWORD *)&this->IsRubble = 0; /*0x6440f1*/
  this->ParticleSystemTypeClass_field_2C0 = 0; /*0x6440fc*/
  this->MainVoxel = 0; /*0x644102*/
  this->ParticleSystemTypeClass_field_2C8 = 0; /*0x644108*/
  this->Beam = -1717986918; /*0x64410e*/
  this->q0B4 = -1717986918; /*0x644114*/
  this->q0B6 = 0; /*0x64411a*/
  this->q0B8 = 0; /*0x644120*/
  this->q2E8 = 0; /*0x644126*/
  this->q2F0 = 0; /*0x64412c*/
  this->q0BE = 0; /*0x644132*/
  this->q2CC = 1069128089; /*0x64413b*/
  this->ParticleSystemTypeClass_field_bool_2D4 = 1067030937; /*0x644145*/
  this->q0B7 = 1077477376; /*0x64414f*/
  this->q0B9 = 0; /*0x644159*/
  this->q2EC = 0; /*0x64415f*/
  this->q0BD = 0; /*0x644165*/
  this->q0BF = 0; /*0x64416b*/
  this->q300 = 0; /*0x644171*/
  this->q304 = 0; /*0x644177*/
  this->q308 = 0; /*0x64417d*/
  *((_BYTE *)this + 777) = 0; /*0x644183*/
  this->q30A = 0; /*0x644189*/
  this->u8_30B = 0; /*0x644190*/
  this->q0C3 = 0; /*0x644196*/
  this->ObjectTypeClass = &ParticleSystemTypeClass::`vftable'; /*0x64419c*/
  this->? = &ParticleSystemTypeClass::`vftable'; /*0x6441a2*/
  this->? = &ParticleSystemTypeClass::`vftable'; /*0x6441a8*/
  this->? = &ParticleSystemTypeClass::`vftable'; /*0x6441af*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x6441b6*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 < *(int *)&stru_A83D50.__pad_14[12] /*0x6441ef*/
    || (BYTE1(stru_A83D50.SuperClass_field_0x24) || !*(_DWORD *)&stru_A83D50.__pad_14[12])
    && (int)stru_A83D50.SuperClass_field_0x2C > 0
    && (*(unsigned __int8 (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_14[4] + 8))(
         &stru_A83D50.__pad_14[4],
         (char *)stru_A83D50.SuperClass_field_0x2C + *(_DWORD *)&stru_A83D50.__pad_14[12],
         0) )
  {
    v3 = stru_A83D50.SuperClass_field_0x28++; /*0x6441fc*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * (_DWORD)v3) = this; /*0x64420b*/
  }
  this->? = 1; /*0x64420e*/
  return &this->ObjectTypeClass; /*0x644217*/
}



// ==== 0x006442D0  ParticleSystemTypeClass::GetType  this=ParticleSystemTypeClass  sig=csp ====
char __thiscall ParticleSystemTypeClass::GetType(ParticleSystemTypeClass *this, unsigned __int8 ***a2)
{
  int v3; // eax
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int ParticleSystemTypeClass_field_0x2A8; // ecx
  int v8; // eax
  int ParticleSystemTypeClass_field_0x2B8; // edx
  bool v13; // zf
  int v14; // eax
  float *XYZFromINI; // eax
  double v16; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  IUnknown *ParticleSystemTypeClass_field_0x2E4; // eax
  unsigned int v22; // ecx
  double v24; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  char ParticleSystemTypeClass_field_0x308_high; // al
  int Coord; // eax
  int ParticleSystemTypeClass_field_0x300; // ecx
  int v33; // eax
  char v34; // al
  double v37; // [esp+0h] [ebp-68h]
  double v38; // [esp+0h] [ebp-68h]
  double v39; // [esp+0h] [ebp-68h]
  double v40; // [esp+0h] [ebp-68h]
  double v41; // [esp+0h] [ebp-68h]
  int ParticleSystemTypeClass_field_0x29C; // [esp+4h] [ebp-64h]
  int v43; // [esp+4h] [ebp-64h]
  int v44; // [esp+14h] [ebp-54h] BYREF
  int v45; // [esp+18h] [ebp-50h]
  float v46[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+28h] [ebp-40h] BYREF

  _ESI = this; /*0x6442de*/
  INIClass::ResetSection((INIClass *)a2); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)_ESI, a2) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    (INIClass *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v3 = BuildingTypeClass::FindOrCreateEx(Destination); /*0x644318*/
  v4 = _ESI->__pad_298[0]; /*0x64431d*/
  _ESI->ParticleSystemTypeClass_field_0x294 = (IUnknown *)v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int *)a2,
                     (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                     g_INI_Key_Spawns,
                     v4);
  ParticleSystemTypeClass_field_0x29C = (int)_ESI->ParticleSystemTypeClass_field_0x29C; /*0x64433f*/
  _ESI->__pad_298[0] = Bool_Overwrite; /*0x644346*/
  _ESI->ParticleSystemTypeClass_field_0x29C = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x644351*/
                                                            (bool *)a2,
                                                            (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                            aSpawnframes,
                                                            ParticleSystemTypeClass_field_0x29C);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (bool *)a2,
                    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                    aParticlecap,
                    LODWORD(_ESI->ParticleSystemTypeClass_field_0x2A4));
  ParticleSystemTypeClass_field_0x2A8 = _ESI->ParticleSystemTypeClass_field_0x2A8; /*0x64436b*/
  LODWORD(_ESI->ParticleSystemTypeClass_field_0x2A4) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (bool *)a2,
         (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
         aSpawnradius,
         ParticleSystemTypeClass_field_0x2A8);
  __asm { fld dword ptr [esi+2A0h] } /*0x644385*/
  _ESI->ParticleSystemTypeClass_field_0x2A8 = v8; /*0x644390*/
  __asm { fstp [esp+68h+var_68]; double } /*0x644396*/
  INIClass::ReadDouble_Overwrite( /*0x64439f*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSlowdown,
    v37);
  __asm { fstp dword ptr [esi+2A0h] } /*0x6443a4*/
  *(float *)&_ESI->ParticleSystemTypeClass_field_0x2A0 = _ET1; /*0x6443a4*/
  __asm { fld dword ptr [esi+2ACh] } /*0x6443aa*/
  __asm { fstp [esp+68h+var_68]; double }
  INIClass::ReadDouble_Overwrite( /*0x6443be*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawncutoff,
    v38);
  __asm { fstp dword ptr [esi+2ACh] } /*0x6443c3*/
  *(float *)&_ESI->ParticleSystemTypeClass_field_0x2AC = _ET1; /*0x6443c3*/
  __asm { fld dword ptr [esi+2B0h] } /*0x6443c9*/
  __asm { fstp [esp+68h+var_68]; double }
  INIClass::ReadDouble_Overwrite( /*0x6443dd*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawntransluce,
    v39);
  ParticleSystemTypeClass_field_0x2B8 = _ESI->ParticleSystemTypeClass_field_0x2B8; /*0x6443e2*/
  __asm { fstp dword ptr [esi+2B0h] } /*0x6443ea*/
  *(float *)&_ESI->DamageDelay = _ET1; /*0x6443ea*/
  _ESI->ParticleSystemTypeClass_field_0x2B8 = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                                                (bool *)a2,
                                                (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                aLifetime,
                                                ParticleSystemTypeClass_field_0x2B8);
  INIClass::GetString( /*0x644416*/
    (INIClass *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aBehaveslike,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v45 = 0; /*0x64441b*/
  v44 = (int)off_836EE0; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v13 = _strcmpi(Destination, *(char **)v44) == 0; /*0x64443f*/
    v14 = v45; /*0x644441*/
    if ( v13 ) /*0x644445*/
      break; /*0x644445*/
    ++v45; /*0x644448*/
    v44 += 4; /*0x644458*/
    if ( v44 >= (int)g_INI_Key_Railgun ) /*0x64445c*/
    {
      v14 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  _ESI->ParticleSystemTypeClass_field_0x2B4 = v14; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 (ParticleSystemTypeClass *)a2,
                 v46,
                 (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                 aSpawndirection,
                 (float *)&_ESI->ParticleSystemTypeClass_field_2C0);
  _ESI->ParticleSystemTypeClass_field_2C0 = *(int *)XYZFromINI; /*0x644482*/
  _ESI->StartScale = (int)XYZFromINI[1]; /*0x64448b*/
  v40 = *(double *)&_ESI->Beam; /*0x6444a1*/
  _ESI->ParticleSystemTypeClass_field_2C8 = (int)XYZFromINI[2]; /*0x6444aa*/
  INIClass::ReadDouble_Overwrite( /*0x6444b0*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aParticlesperco,
    v40);
  v16 = *(double *)&_ESI->ParticleSystemTypeClass_field_0x2D0; /*0x6444bb*/
  __asm { fstp qword ptr [esi+2C8h] } /*0x6444c1*/
  *(double *)&_ESI->Beam = _RT1; /*0x6444c1*/
  INIClass::ReadDouble_Overwrite( /*0x6444d1*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpiraldeltaper,
    v16);
  v18 = *(_DWORD *)&_ESI->__pad_2D8[4]; /*0x6444d6*/
  v19 = *(_DWORD *)_ESI->__pad_2D8; /*0x6444dc*/
  __asm { fstp qword ptr [esi+2D0h] } /*0x6444e2*/
  *(double *)&_ESI->ParticleSystemTypeClass_field_0x2D0 = _RT1; /*0x6444e2*/
  INIClass::ReadDouble_Overwrite( /*0x6444f2*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpiralradius,
    COERCE_DOUBLE(__PAIR64__(v18, v19)));
  ParticleSystemTypeClass_field_0x2E4 = _ESI->ParticleSystemTypeClass_field_0x2E4; /*0x6444f7*/
  v22 = *(_DWORD *)&_ESI->__pad_2D8[8]; /*0x6444fd*/
  __asm { fstp qword ptr [esi+2D8h] } /*0x644503*/
  *(double *)_ESI->__pad_2D8 = _RT1; /*0x644503*/
  INIClass::ReadDouble_Overwrite( /*0x644513*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aPositionpertur,
    COERCE_DOUBLE(__PAIR64__((unsigned int)ParticleSystemTypeClass_field_0x2E4, v22)));
  v24 = *(double *)&_ESI->ParticleSystemTypeClass_field_0x2E8; /*0x64451e*/
  __asm { fstp qword ptr [esi+2E0h] } /*0x644524*/
  *(double *)&_ESI->__pad_2D8[8] = _RT1; /*0x644524*/
  INIClass::ReadDouble_Overwrite( /*0x644534*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aMovementpertur,
    v24);
  v26 = *(_DWORD *)&_ESI->__pad_2EC[8]; /*0x644539*/
  v27 = *(_DWORD *)&_ESI->__pad_2EC[4]; /*0x64453f*/
  __asm { fstp qword ptr [esi+2E8h] } /*0x644545*/
  *(double *)&_ESI->ParticleSystemTypeClass_field_0x2E8 = _RT1; /*0x644545*/
  INIClass::ReadDouble_Overwrite( /*0x644555*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aVelocitypertur,
    COERCE_DOUBLE(__PAIR64__(v26, v27)));
  ParticleSystemTypeClass_field_0x308_high = HIBYTE(_ESI->ParticleSystemTypeClass_field_0x308); /*0x64455a*/
  __asm { fstp qword ptr [esi+2F0h] } /*0x644562*/
  *(double *)&_ESI->__pad_2EC[4] = _RT1; /*0x644562*/
  HIBYTE(_ESI->ParticleSystemTypeClass_field_0x308) = INIClass::ReadBool_Overwrite( /*0x644574*/
                                                        (int *)a2,
                                                        (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                        aLaser,
                                                        ParticleSystemTypeClass_field_0x308_high);
  Coord = INIClass::GetCoord( /*0x64458e*/
            (INIClass *)a2,
            (int)&v44,
            (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
            aLasercolor,
            (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x308);
  ParticleSystemTypeClass_field_0x300 = _ESI->ParticleSystemTypeClass_field_0x300; /*0x644596*/
  LOWORD(_ESI->ParticleSystemTypeClass_field_0x308) = *(_WORD *)Coord; /*0x64459c*/
  BYTE2(_ESI->ParticleSystemTypeClass_field_0x308) = *(_BYTE *)(Coord + 2); /*0x6445af*/
  v33 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
          aSparkspawnfram,
          ParticleSystemTypeClass_field_0x300);
  v43 = *(_DWORD *)_ESI->__pad_304; /*0x6445c2*/
  _ESI->ParticleSystemTypeClass_field_0x300 = v33; /*0x6445c9*/
  *(_DWORD *)_ESI->__pad_304 = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                                 (bool *)a2,
                                 (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                 aLightsize,
                                 v43);
  v34 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
          aOneframelight,
          (char)_ESI[1].ParticleSystemTypeClass_field_0x0);
  v41 = *(double *)&_ESI->__pad_2EC[12]; /*0x6445fb*/
  LOBYTE(_ESI[1].ParticleSystemTypeClass_field_0x0) = v34; /*0x644604*/
  INIClass::ReadDouble_Overwrite( /*0x64460a*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawnsparkperc,
    v41);
  __asm { fstp qword ptr [esi+2F8h] } /*0x64460f*/
  *(double *)&_ESI->__pad_2EC[12] = _RT1; /*0x64460f*/
  return 1; /*0x644617*/
}



// ==== 0x00644630  WarheadTypeClass::applyDamage  this=AbstractTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::applyDamage(char *Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax
  _DWORD *v4; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) || !strlen(Source) ) /*0x644649*/
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x64465e*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( (int)stru_A83D50.SuperClass_field_0x28 > 0 ) /*0x6446b0*/
    {
      for ( i = *(_DWORD **)&stru_A83D50.__pad_14[8]; (_DWORD *)*i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(Source, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/
}



// ==== 0x00644700  ParticleSystemTypeClass::PowerDrainUpdate  this=ParticleSystemTypeClass  sig=csp ====
int __thiscall ParticleSystemTypeClass::PowerDrainUpdate(ParticleSystemTypeClass *this, int *a2)
{
  int v3; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x644709*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x294); /*0x644717*/
  LOBYTE(v3) = this->__pad_298[0]; /*0x64471c*/
  Power::FlagProcess((Power *)a2, v3); /*0x644725*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x29C); /*0x644733*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->ParticleSystemTypeClass_field_0x2A0); /*0x644741*/
  Power::TimerProcess(LODWORD(this->ParticleSystemTypeClass_field_0x2A4)); /*0x64474f*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A8); /*0x64475d*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleSystemTypeClass_field_0x2AC); /*0x64476b*/
  Checksummer::Add_float((Checksummer *)a2, this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B4); /*0x644787*/
  return Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/
}



// ==== 0x006447A0  ParticleSystemTypeClass::GetClassIdentifier  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::GetClassIdentifier(ParticleSystemTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6447a6*/
    return -2147467261; /*0x6447a8*/
  *a2 = 1883112522; /*0x6447b6*/
  a2[1] = 298979249; /*0x6447be*/
  a2[2] = 1610642049; /*0x6447c7*/
  a2[3] = unk_7E96DC; /*0x6447d0*/
  return 0; /*0x6447ad*/
}



// ==== 0x006447E0  ParticleSystemTypeClass::SaveLoad_Prefix  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix(ParticleSystemTypeClass *this, int a2)
{
  if ( ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2) >= 0 && this ) /*0x6447f6*/
  {
    ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x6447ff*/
    this->ParticleSystemTypeClass_field_0x0 = &ParticleSystemTypeClass::`vftable'; /*0x644804*/
    this->ParticleSystemTypeClass_field_0x4 = &ParticleSystemTypeClass::`vftable'; /*0x64480a*/
    this->ParticleSystemTypeClass_field_0x8 = &ParticleSystemTypeClass::`vftable'; /*0x644811*/
    this->SpawnCount = &ParticleSystemTypeClass::`vftable'; /*0x644818*/
  }
  return 0; /*0x644821*/
}



// ==== 0x00644830  ParticleSystemTypeClass::SaveLoad_Prefix_0  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix_0(ParticleSystemTypeClass *this, int a2, int a3)
{
  AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x64483f*/
  return 0; /*0x644846*/
}



// ==== 0x00644850  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_644850(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x644855*/
  v3 = off_836EE0; /*0x644857*/
  while ( _strcmpi((char *)this, *v3) ) /*0x64486a*/
  {
    ++v3; /*0x64486c*/
    ++v2; /*0x64486f*/
    if ( (int)v3 >= (int)g_INI_Key_Railgun ) /*0x644876*/
      return -1; /*0x64487e*/
  }
  return v2; /*0x644878*/
}



// ==== 0x00644890  BuildingTypeClass::LoadOrGet  this=AbstractClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::LoadOrGet(char *Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x6448c1*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return OverlayTypeClass::Construct(v3, Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v2); /*0x6448ff*/
}



// ==== 0x00644920  ParticleSystemTypeClass::GetObjectSize  this=ParticleSystemTypeClass  sig=csp ====
int ParticleSystemTypeClass::GetObjectSize(ParticleSystemTypeClass *this)
{
  return 784; /*0x644925*/
}



// ==== 0x00644930  ParticleSystemTypeClass::GetTypeIdentifier  this=ParticleSystemTypeClass  sig=csp ====
int ParticleSystemTypeClass::GetTypeIdentifier(ParticleSystemTypeClass *this)
{
  return 25; /*0x644935*/
}



// ==== 0x00644940  ParticleSystemTypeClass::Stub  this=ParticleSystemTypeClass  sig=csp ====
char __stdcall ParticleSystemTypeClass::Stub(ParticleSystemTypeClass *this, int a2)
{
  return 0; /*0x644942*/
}



// ==== 0x00644950  ParticleSystemTypeClass::StubReturnFalse  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::StubReturnFalse(ParticleSystemTypeClass *this)
{
  return 0; /*0x644952*/
}



// ==== 0x00644960  ParticleSystemTypeClass::ddtor  this=ParticleSystemTypeClass  sig=csp ====
void **__thiscall ParticleSystemTypeClass::ddtor(ParticleSystemTypeClass *this, char a2)
{
  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ParticleSystemTypeClass_field_0x0 = &ParticleSystemTypeClass::`vftable'; /*0x644966*/
  this->ParticleSystemTypeClass_field_0x4 = &ParticleSystemTypeClass::`vftable'; /*0x64496c*/
  this->ParticleSystemTypeClass_field_0x8 = &ParticleSystemTypeClass::`vftable'; /*0x644973*/
  this->SpawnCount = &ParticleSystemTypeClass::`vftable'; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&this->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 = this; /*0x644996*/
  v3 = (*(int (__thiscall **)(char *, ParticleSystemTypeClass **))(*(_DWORD *)&stru_A83D50.__pad_14[4] + 16))( /*0x64499a*/
         &stru_A83D50.__pad_14[4],
         &v5);
  if ( v3 != -1 && v3 < (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6449aa*/
  {
    --stru_A83D50.SuperClass_field_0x28; /*0x6449af*/
    for ( ; /*0x6449b5*/
          v3 < (int)stru_A83D50.SuperClass_field_0x28;
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8]
                                                                                    + 4 * v3) )
    {
      ++v3; /*0x6449bd*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(this); /*0x6449de*/
  return &this->ParticleSystemTypeClass_field_0x0; /*0x6449e8*/
}



// ==== 0x006449F0  sub_6449F0  this=-  sig=ida-proto ====
void sub_6449F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6449fc*/
  dbl_AC5098 = Math::Sqrt(v0 + v0); /*0x644a0e*/
}



// ==== 0x00644A20  sub_644A20  this=-  sig=ida-proto ====
void sub_644A20()
{
  dbl_AC50E8 = dbl_AC5098 / 60.0; /*0x644a2c*/
}



// ==== 0x00644A40  sub_644A40  this=-  sig=ida-proto ====
void sub_644A40()
{
  dbl_AC50D0 = 1.0 / dbl_AC50E8; /*0x644a4c*/
}



// ==== 0x00644A60  sub_644A60  this=-  sig=ida-proto ====
void sub_644A60()
{
  dbl_AC50C8 = 0.0174532925199433 * 45.0; /*0x644a6c*/
}



// ==== 0x00644A80  sub_644A80  this=-  sig=ida-proto ====
void sub_644A80()
{
  dbl_AC50A0 = 0.0174532925199433 * 60.0; /*0x644a8c*/
}



// ==== 0x00644AA0  sub_644AA0  this=-  sig=ida-proto ====
void sub_644AA0()
{
  dbl_AC5088 = 0.0174532925199433 * 90.0; /*0x644aac*/
}



// ==== 0x00644AC0  sub_644AC0  this=-  sig=ida-proto ====
__int64 sub_644AC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC5088 - dbl_AC50A0); /*0x644ad2*/
  result = Math::RoundToInt(v0 * dbl_AC5098 * 0.5); /*0x644ae6*/
  dword_AC50F0 = result; /*0x644aeb*/
  return result; /*0x644af0*/
}



// ==== 0x00644B00  sub_644B00  this=-  sig=ida-proto ====
void sub_644B00()
{
  dbl_AC50A8 = Math::ArcTan((double)dword_AC50F0 * 0.00390625); /*0x644b17*/
}



// ==== 0x00644B30  sub_644B30  this=-  sig=ida-proto ====
void sub_644B30()
{
  dbl_AC50C0 = Math::ArcTan((double)(2 * dword_AC50F0) / dbl_AC5098); /*0x644b52*/
}



// ==== 0x00644B60  sub_644B60  this=-  sig=ida-proto ====
__int64 sub_644B60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC50F0) + 0.5); /*0x644b7b*/
  dword_AC50E4 = result; /*0x644b80*/
  return result; /*0x644b86*/
}



// ==== 0x00644B90  sub_644B90  this=-  sig=ida-proto ====
int sub_644B90()
{
  word_AC5090 = 0; /*0x644b92*/
  word_AC5092 = 0; /*0x644b98*/
  return 0; /*0x644b9e*/
}



// ==== 0x00644BA0  sub_644BA0  this=-  sig=ida-proto ====
int sub_644BA0()
{
  dword_AC50B0 = 0; /*0x644ba2*/
  dword_AC50B4 = 0; /*0x644ba7*/
  dword_AC50B8 = 0; /*0x644bac*/
  return 0; /*0x644bb1*/
}



// ==== 0x00644BC0  sub_644BC0  this=-  sig=ida-proto ====
int sub_644BC0()
{
  dword_AC50E0 = 0; /*0x644bc5*/
  dword_AC50D8 = 128; /*0x644bcf*/
  dword_AC50DC = 128; /*0x644bd4*/
  return 128; /*0x644bd9*/
}



// ==== 0x00644BE0  BuildingTypeClass::Construct  this=ParticleTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::Construct(BuildingTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x644beb*/
  this->? = 0; /*0x644bf8*/
  this->? = 0; /*0x644bfe*/
  *(_DWORD *)this->? = 0; /*0x644c04*/
  *(_DWORD *)&this->?[2] = 0; /*0x644c10*/
  *(_DWORD *)&this->?[4] = 1; /*0x644c19*/
  *(_DWORD *)&this->?[8] = 1; /*0x644c1f*/
  *(_DWORD *)&this->?[12] = 0; /*0x644c25*/
  *(_DWORD *)&this->?[16] = 1; /*0x644c2b*/
  *(_DWORD *)&this->?[6] = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&this->?[10], 0, 0); /*0x644c37*/
  this->?[1] = 10; /*0x644c3c*/
  this->?[0] = 0; /*0x644c43*/
  *(_DWORD *)&this->?[10] = &TypeList<RGBClass>::`vftable'; /*0x644c46*/
  this->?[1] = 0; /*0x644c4c*/
  LOBYTE(this->?[0]) = 0; /*0x644c66*/
  BYTE1(this->?[0]) = 0; /*0x644c6c*/
  BYTE1(this->?[1]) = -1; /*0x644c72*/
  BYTE2(this->?[1]) = -1; /*0x644c78*/
  this->?[1] = 0; /*0x644c81*/
  this->?[0] = 1; /*0x644c87*/
  this->?[1] = 0; /*0x644c8d*/
  this->?[0] = 0; /*0x644c93*/
  this->?[1] = 0; /*0x644c99*/
  this->?[0] = 1; /*0x644c9f*/
  this->?[1] = 0; /*0x644ca5*/
  this->? = 0; /*0x644cab*/
  this->?[0] = 0; /*0x644cb1*/
  this->?[0] = 0; /*0x644cb7*/
  this->?[1] = 0; /*0x644cbd*/
  LOBYTE(this->?[0]) = 0; /*0x644cc3*/
  BYTE1(this->?[0]) = 0; /*0x644cc9*/
  BYTE2(this->?[0]) = 0; /*0x644ccf*/
  HIBYTE(this->?[0]) = 4; /*0x644cd5*/
  LOBYTE(this->?[1]) = 0; /*0x644cdc*/
  HIBYTE(this->?[1]) = 0; /*0x644ce2*/
  this->? = -1; /*0x644ce8*/
  this->?[0] = -1; /*0x644cee*/
  this->TechnoTypeClass = &ParticleTypeClass::`vftable'; /*0x644cf4*/
  this->? = &ParticleTypeClass::`vftable'; /*0x644cfa*/
  this->? = &ParticleTypeClass::`vftable'; /*0x644d01*/
  this->? = &ParticleTypeClass::`vftable'; /*0x644d08*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] < *(int *)&stru_A83D50.__pad_3C[20] /*0x644d43*/
    || (stru_A83D50.__pad_3C[25] || !*(_DWORD *)&stru_A83D50.__pad_3C[20])
    && *(int *)&stru_A83D50.__pad_3C[32] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_3C[12] + 8))(
         &stru_A83D50.__pad_3C[12],
         *(_DWORD *)&stru_A83D50.__pad_3C[20] + *(_DWORD *)&stru_A83D50.__pad_3C[32],
         0) )
  {
    v3 = (*(_DWORD *)&stru_A83D50.__pad_3C[28])++; /*0x644d50*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v3) = this; /*0x644d5f*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x644d96*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x644da3*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x644db2*/
  }
  this->? = 0; /*0x644db5*/
  return &this->TechnoTypeClass; /*0x644dbd*/
}



// ==== 0x00644F50  ParticleTypeClass::LoadFromINI  this=ParticleTypeClass  sig=csp ====
char __thiscall ParticleTypeClass::LoadFromINI(ParticleTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  unsigned __int8 *inited; // eax
  int RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v9; // eax
  void *ParticleTypeClass_field_0x2E4; // ebp
  void *v11; // eax
  int v12; // eax
  int ParticleTypeClass_field_0x2F4; // ecx
  int v14; // eax
  int v15; // eax
  double v16; // st4
  int ParticleTypeClass_field_0x304; // eax
  int v18; // eax
  char v19; // cl
  char Bool_Overwrite; // al
  char v21; // al
  char v22; // al
  char v23; // cl
  char v24; // al
  double v25; // rax
  IUnknown *ParticleTypeClass_field_0x2A0; // ecx
  IUnknown *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int *Coord2; // eax
  int Coord; // eax
  int v33; // eax
  __int16 v34; // dx
  char v35; // al
  int v36; // ebp
  BuildingTypeClass *v37; // eax
  _DWORD *v38; // eax
  int v39; // ecx
  _DWORD *v40; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  unsigned __int8 *v45; // [esp-Ch] [ebp-F0h]
  unsigned __int8 *v46; // [esp-8h] [ebp-ECh]
  unsigned __int8 *p_ParticleTypeClass_field_0x24; // [esp-4h] [ebp-E8h]
  unsigned __int8 *v48; // [esp+0h] [ebp-E4h]
  int ParticleTypeClass_field_0x2F8; // [esp+4h] [ebp-E0h]
  int v50; // [esp+18h] [ebp-CCh] BYREF
  char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
  int v52[7]; // [esp+3Ch] [ebp-A8h] BYREF
  int v53[3]; // [esp+58h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor((ParticleTypeClass *)v44, 0, 0); /*0x644f85*/
  v44[0] = &TypeList<RGBClass>::`vftable'; /*0x644f8a*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)&this->ParticleTypeClass_field_0x24); /*0x644f9a*/
  RGBColorList = INIClass::ReadRGBColorList( /*0x644fac*/
                   (INIClass *)a2,
                   (int)v52,
                   inited,
                   aColorlist,
                   v44[0],
                   v44[1],
                   (int)v45,
                   (__int16)v46,
                   (int)p_ParticleTypeClass_field_0x24,
                   (int)v48,
                   ParticleTypeClass_field_0x2F8);
  ParticleTypeClass::EnsureCapacity((ParticleTypeClass *)&this->ParticleTypeClass_field_0x2B8, (_DWORD *)RGBColorList); /*0x644fb5*/
  this->ParticleTypeClass_field_0x2C8 = *(VectorClass **)(RGBColorList + 16); /*0x644fbd*/
  this->ParticleTypeClass_field_0x2CC = *(VectorClass **)(RGBColorList + 20); /*0x644fc6*/
  *(_DWORD *)this->__pad_2D0 = *(_DWORD *)(RGBColorList + 24); /*0x644fd3*/
  v52[0] = (int)&VectorClass<RGBClass>::`vftable'; /*0x644fd9*/
  FilePipe_38::ddtor((int)v52); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (bool *)a2,
                    (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                    aMaxdc,
                    this->ParticleTypeClass_field_0x2DC[0]);
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2E0[0]; /*0x645002*/
  v48 = aMaxec; /*0x645003*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645008*/
  this->ParticleTypeClass_field_0x2DC[0] = Int_Overwrite; /*0x645009*/
  this->ParticleTypeClass_field_0x2E0[0] = INIClass::ReadInt_Overwrite( /*0x645014*/
                                             (bool *)a2,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v9 = INIClass::ReadInt_Overwrite( /*0x645029*/
         (bool *)a2,
         (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
         g_INI_Key_Damage,
         this->ParticleTypeClass_field_0x2E8[0]);
  ParticleTypeClass_field_0x2E4 = this->ParticleTypeClass_field_0x2E4; /*0x64502e*/
  ParticleTypeClass_field_0x2F8 = 128; /*0x645038*/
  v48 = (unsigned __int8 *)Destination; /*0x64503d*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&g_INI_DefaultBuffer; /*0x64503e*/
  v46 = g_INI_Key_Warhead; /*0x645043*/
  v45 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645048*/
  this->ParticleTypeClass_field_0x2E8[0] = v9; /*0x64504b*/
  if ( INIClass::GetString( /*0x645051*/
         (INIClass *)a2,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2F8) )
  {
    v11 = (void *)WarheadTypeClass::FindOrCreate(Destination); /*0x64505e*/
  }
  else
  {
    v11 = ParticleTypeClass_field_0x2E4; /*0x645065*/
  }
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2EC[0]; /*0x64506f*/
  v48 = aStartframe; /*0x645070*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645075*/
  this->ParticleTypeClass_field_0x2E4 = v11; /*0x645076*/
  this->ParticleTypeClass_field_0x2EC[0] = INIClass::ReadInt_Overwrite( /*0x645081*/
                                             (bool *)a2,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v12 = INIClass::ReadInt_Overwrite( /*0x645096*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aNumloopframes,
          this->ParticleTypeClass_field_0x2F0[0]);
  ParticleTypeClass_field_0x2F4 = this->ParticleTypeClass_field_0x2F4; /*0x64509b*/
  this->ParticleTypeClass_field_0x2F0[0] = v12; /*0x6450a1*/
  v14 = INIClass::ReadInt_Overwrite( /*0x6450b0*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aTranslucency,
          ParticleTypeClass_field_0x2F4);
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2F8; /*0x6450bd*/
  v48 = aWindeffect; /*0x6450be*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x6450c3*/
  this->ParticleTypeClass_field_0x2F4 = v14; /*0x6450c4*/
  v15 = INIClass::ReadInt_Overwrite((bool *)a2, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6450ca*/
  v16 = *(float *)this->__pad_2FC; /*0x6450cf*/
  this->ParticleTypeClass_field_0x2F8 = v15; /*0x6450da*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&this->ParticleTypeClass_field_0x24, aVelocity, v16); /*0x6450e9*/
  *(float *)this->__pad_2FC = v2; /*0x6450ee*/
  INIClass::ReadDouble_Overwrite( /*0x645108*/
    (double *)a2,
    (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
    aDeacc,
    *(float *)&this->ParticleTypeClass_field_0x300);
  ParticleTypeClass_field_0x304 = this->ParticleTypeClass_field_0x304; /*0x64510d*/
  *(float *)&this->ParticleTypeClass_field_0x300 = v3; /*0x645115*/
  v18 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aRadius,
          ParticleTypeClass_field_0x304);
  v19 = this->__pad_308[0]; /*0x645127*/
  this->ParticleTypeClass_field_0x304 = v18; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int *)a2,
                     (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                     aDeleteonstatel,
                     v19);
  ParticleTypeClass_field_0x2F8 = this->__pad_308[1]; /*0x645148*/
  v48 = aEndstateai; /*0x645149*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64514e*/
  this->__pad_308[0] = Bool_Overwrite; /*0x645151*/
  this->__pad_308[1] = INIClass::ReadInt_Overwrite( /*0x64515c*/
                         (bool *)a2,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  v21 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aStartstateai,
          this->__pad_308[2]);
  ParticleTypeClass_field_0x2F8 = this->__pad_308[3]; /*0x64517e*/
  v48 = aStateaiadvance; /*0x64517f*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645184*/
  this->__pad_308[2] = v21; /*0x645187*/
  this->__pad_308[3] = INIClass::ReadInt_Overwrite( /*0x645192*/
                         (bool *)a2,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  this->__pad_308[6] = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                         (bool *)a2,
                         (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                         aTranslucent50s,
                         (unsigned __int8)this->__pad_308[6]);
  v22 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aTranslucent25s,
          (unsigned __int8)this->__pad_308[5]);
  v23 = this->__pad_308[7]; /*0x6451ca*/
  this->__pad_308[5] = v22; /*0x6451d0*/
  v24 = INIClass::ReadBool_Overwrite( /*0x6451df*/
          (int *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          g_INI_Key_Normalized,
          v23);
  HIDWORD(v25) = this->ParticleTypeClass_field_0x2B4; /*0x6451e4*/
  this->__pad_308[7] = v24; /*0x6451ea*/
  LODWORD(v25) = this->ParticleTypeClass_field_0x2B0; /*0x6451f0*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&this->ParticleTypeClass_field_0x24, aColorspeed, v25); /*0x645200*/
  ParticleTypeClass_field_0x2A0 = this->ParticleTypeClass_field_0x2A0; /*0x645205*/
  *(double *)&this->ParticleTypeClass_field_0x2B0 = v4; /*0x64520b*/
  v27 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x64521a*/
                      (bool *)a2,
                      (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                      aXvelocity,
                      (int)ParticleTypeClass_field_0x2A0);
  ParticleTypeClass_field_0x2F8 = (int)this->ParticleTypeClass_field_0x2A4; /*0x645227*/
  v48 = aYvelocity; /*0x645228*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64522d*/
  this->ParticleTypeClass_field_0x2A0 = v27; /*0x64522e*/
  this->ParticleTypeClass_field_0x2A4 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x645239*/
                                                      (bool *)a2,
                                                      p_ParticleTypeClass_field_0x24,
                                                      v48,
                                                      ParticleTypeClass_field_0x2F8);
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aMinzvelocity,
          this->ParticleTypeClass_field_0x2A8[0]);
  v29 = this->ParticleTypeClass_field_0x2AC[0]; /*0x645253*/
  this->ParticleTypeClass_field_0x2A8[0] = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aZvelocityrange,
          v29);
  ParticleTypeClass_field_0x2F8 = (int)&this->__pad_248[76]; /*0x645277*/
  v48 = aNextparticleof; /*0x645278*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64527d*/
  v46 = (unsigned __int8 *)v53; /*0x64527e*/
  this->ParticleTypeClass_field_0x2AC[0] = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2( /*0x645287*/
             (INIClass *)a2,
             (int *)v46,
             p_ParticleTypeClass_field_0x24,
             v48,
             (int *)ParticleTypeClass_field_0x2F8);
  *(_DWORD *)&this->__pad_248[76] = *Coord2; /*0x64528e*/
  *(_DWORD *)&this->__pad_248[80] = Coord2[1]; /*0x645298*/
  *(_DWORD *)&this->__pad_248[84] = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            (INIClass *)a2,
            (int)&v50,
            (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
            aStartcolor1,
            (unsigned __int8 *)&this->ParticleTypeClass_field_0x2D4);
  LOWORD(this->ParticleTypeClass_field_0x2D4) = *(_WORD *)Coord; /*0x6452bd*/
  BYTE2(this->ParticleTypeClass_field_0x2D4) = *(_BYTE *)(Coord + 2); /*0x6452c4*/
  v33 = INIClass::GetCoord( /*0x6452d7*/
          (INIClass *)a2,
          (int)&v50,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aStartcolor2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x2D4 + 3);
  v34 = *(_WORD *)v33; /*0x6452e3*/
  ParticleTypeClass_field_0x2F8 = this->__pad_308[1]; /*0x6452e6*/
  *(_WORD *)((char *)&this->ParticleTypeClass_field_0x2D4 + 3) = v34; /*0x6452e7*/
  v48 = aFinaldamagesta; /*0x6452eb*/
  LOBYTE(v33) = *(_BYTE *)(v33 + 2); /*0x6452f0*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x6452f3*/
  this->__pad_2D8[1] = v33; /*0x6452f6*/
  v35 = INIClass::ReadInt_Overwrite((bool *)a2, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6452f9*/
  ParticleTypeClass_field_0x2F8 = 32; /*0x645302*/
  v48 = (unsigned __int8 *)Source; /*0x645304*/
  p_ParticleTypeClass_field_0x24 = 0; /*0x645305*/
  v46 = aNextparticle; /*0x645307*/
  v45 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64530c*/
  this->__pad_308[4] = v35; /*0x64530f*/
  if ( INIClass::GetString( /*0x645315*/
         (INIClass *)a2,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2F8) )
  {
    if ( _strcmpi(Source, g_Str__none_) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v38 = BuildingTypeClass::Construct(v37, Source); /*0x645383*/
        else
          v38 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v40 = *(_DWORD **)&stru_A83D50.__pad_3C[16]; /*0x645398*/
          while ( (_DWORD *)*v40 != v38 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            ++v40; /*0x6453a3*/
            if ( v39 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi(Source, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v36) + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645369*/
            goto LABEL_10; /*0x645369*/
        }
      }
    }
    else
    {
      v36 = -1; /*0x6453b1*/
    }
    this->ParticleTypeClass_field_0x310 = v36; /*0x6453b4*/
  }
  Source[0] = 0; /*0x6453cb*/
  INIClass::GetString( /*0x6453d0*/
    (INIClass *)a2,
    (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
    aBehaveslike,
    0,
    Source,
    32);
  v41 = 0; /*0x6453d5*/
  v42 = off_8370BC; /*0x6453d7*/
  while ( _strcmpi(Source, *v42) ) /*0x6453ee*/
  {
    ++v42; /*0x6453f0*/
    ++v41; /*0x6453f3*/
    if ( (int)v42 >= (int)&ParticleTypeClass `RTTI Type Descriptor' ) /*0x6453fa*/
    {
      v41 = -1; /*0x6453fc*/
      break; /*0x6453fc*/
    }
  }
  this->ParticleTypeClass_field_0x314 = v41; /*0x6453ff*/
  return 1; /*0x645407*/
}



// ==== 0x00645430  BuildingTypeClass::FindOrCreateEx  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindOrCreateEx(char *Source)
{
  int v2; // esi
  BuildingTypeClass *v3; // eax
  _DWORD *v4; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x64544f*/
  {
LABEL_5:
    v3 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&stru_A83D50.__pad_3C[28] > 0 ) /*0x6454a0*/
    {
      for ( i = *(_DWORD **)&stru_A83D50.__pad_3C[16]; (_DWORD *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}



// ==== 0x006454E0  ParticleTypeClass::ProcessPower  this=ParticleTypeClass  sig=csp ====
int __thiscall ParticleTypeClass::ProcessPower(ParticleTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6454e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2DC[0]); /*0x6454f7*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E0[0]); /*0x645505*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E8[0]); /*0x645513*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2EC[0]); /*0x645521*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F0[0]); /*0x64552f*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F4); /*0x64553d*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F8); /*0x64554b*/
  Checksummer::Add_float((Checksummer *)a2, *(_DWORD *)this->__pad_2FC); /*0x645559*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleTypeClass_field_0x300); /*0x645567*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x304); /*0x645575*/
  LOBYTE(v3) = this->__pad_308[0]; /*0x64557a*/
  Power::FlagProcess((Power *)a2, v3); /*0x645583*/
  LOBYTE(v4) = this->__pad_308[1]; /*0x645588*/
  v5 = Power::FinalizeDrain((Power *)a2, v4); /*0x645591*/
  LOBYTE(v5) = this->__pad_308[2]; /*0x645596*/
  Power::FinalizeDrain((Power *)a2, v5); /*0x64559f*/
  LOBYTE(v6) = this->__pad_308[3]; /*0x6455a4*/
  Power::FinalizeDrain((Power *)a2, v6); /*0x6455ad*/
  Power::TimerProcess((unsigned __int8)this->__pad_308[5]); /*0x6455bd*/
  Power::TimerProcess((unsigned __int8)this->__pad_308[6]); /*0x6455cd*/
  LOBYTE(v7) = this->__pad_308[7]; /*0x6455d2*/
  Power::FlagProcess((Power *)a2, v7); /*0x6455db*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x310); /*0x6455e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x314); /*0x6455f7*/
  return Checksummer::Add_double( /*0x645611*/
           (Checksummer *)a2,
           (int)this->ParticleTypeClass_field_0x2B0,
           (int)this->ParticleTypeClass_field_0x2B4);
}



// ==== 0x00645620  ParticleTypeClass::ddtor  this=ParticleTypeClass  sig=csp ====
int __stdcall C07F0188::ddtor(ParticleTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x645626*/
    return -2147467261; /*0x645628*/
  *a2 = 1883112523; /*0x645636*/
  a2[1] = 298979249; /*0x64563e*/
  a2[2] = 1610642049; /*0x645647*/
  a2[3] = unk_7E971C; /*0x645650*/
  return 0; /*0x64562d*/
}



// ==== 0x00645660  ParticleTypeClass::SaveLoad_Prefix  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::SaveLoad_Prefix(ParticleTypeClass *this, int a2)
{
  int *v2; // ebp
  ParticleTypeClass *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int ParticleTypeClass_field_0x2CC; // eax
  VectorClass *ParticleTypeClass_field_0x2C8; // eax
  VectorClass *v10; // ecx
  int v11; // edx
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  char *v13; // edx
  int v14; // [esp+28h] [ebp-4h]

  v2 = (int *)a2; /*0x645663*/
  v3 = this; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((ParticleTypeClass *)&v3->ParticleTypeClass_field_0x2B8, 0, 0); /*0x645698*/
      v3->ParticleTypeClass_field_0x2B8 = (VectorClass *)&TypeList<RGBClass>::`vftable'; /*0x64569d*/
      v3->ArrayIndex = &ParticleTypeClass::`vftable'; /*0x6456a3*/
      v3->ParticleTypeClass_field_28C = &ParticleTypeClass::`vftable'; /*0x6456a9*/
      v3->BehavesLike = &ParticleTypeClass::`vftable'; /*0x6456b0*/
      v3->ParticleTypeClass_field_0xC = &ParticleTypeClass::`vftable'; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->ParticleTypeClass_field_0x2E4); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    this = 0; /*0x6456db*/
    result = (*(int (__stdcall **)(int *, ParticleTypeClass **, int, _DWORD))(v5 + 12))(v2, &this, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( (int)this <= 0 ) /*0x6456f4*/
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
          v7 = *(_DWORD *)v3->__pad_2C0; /*0x645719*/
          if ( (int)v3->ParticleTypeClass_field_0x2C8 < v7 /*0x645747*/
            || (v3->__pad_2C0[5] || !v7)
            && (ParticleTypeClass_field_0x2CC = (int)v3->ParticleTypeClass_field_0x2CC, ParticleTypeClass_field_0x2CC > 0)
            && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v3->ParticleTypeClass_field_0x2B8->Capacity)(
                 &v3->ParticleTypeClass_field_0x2B8,
                 v7 + ParticleTypeClass_field_0x2CC,
                 0) )
          {
            ParticleTypeClass_field_0x2C8 = v3->ParticleTypeClass_field_0x2C8; /*0x64574e*/
            v10 = (VectorClass *)((char *)&ParticleTypeClass_field_0x2C8->ptr_0 + 1); /*0x645751*/
            v11 = 3 * (_DWORD)ParticleTypeClass_field_0x2C8; /*0x645754*/
            ParticleTypeClass_field_0x2BC = v3->ParticleTypeClass_field_0x2BC; /*0x645757*/
            v3->ParticleTypeClass_field_0x2C8 = v10; /*0x64575a*/
            v13 = (char *)ParticleTypeClass_field_0x2BC + v11; /*0x64575d*/
            *(_WORD *)v13 = a2; /*0x645764*/
            v13[2] = BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= (int)this ) /*0x64577d*/
            goto LABEL_14; /*0x64577d*/
        }
      }
    }
  }
  return result; /*0x64578c*/
}



// ==== 0x006457A0  ParticleTypeClass::SaveLoad_Prefix_0  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::SaveLoad_Prefix_0(ParticleTypeClass *this, int a2, int ParticleTypeClass_field_0x2C8)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, ParticleTypeClass_field_0x2C8); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(_DWORD *)a2; /*0x6457c2*/
    ParticleTypeClass_field_0x2C8 = (int)this->ParticleTypeClass_field_0x2C8; /*0x6457ce*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v4 + 16))(a2, &ParticleTypeClass_field_0x2C8, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( ParticleTypeClass_field_0x2C8 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 16))( /*0x6457fa*/
                 a2,
                 (char *)this->ParticleTypeClass_field_0x2BC + v6,
                 3,
                 0) < 0 )
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < ParticleTypeClass_field_0x2C8 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/
}



// ==== 0x00645820  NetworkEventClass::Process  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall NetworkEventClass::Process(char *Source)
{
  int v2; // esi
  BuildingTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x64583c*/
    return 0; /*0x64589f*/
  v2 = 0; /*0x64584d*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645851*/
  {
LABEL_6:
    v3 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x645876*/
    if ( v3 ) /*0x645885*/
      return BuildingTypeClass::Construct(v3, Source); /*0x645891*/
    return 0; /*0x645885*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36), Source) ) /*0x64586a*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645874*/
      goto LABEL_6; /*0x645874*/
  }
  return *(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v2); /*0x64588f*/
}



// ==== 0x006458B0  ParticleTypeClass::GetType  this=ParticleTypeClass  sig=csp ====
int __thiscall ParticleTypeClass::GetType(ParticleTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = (int)this->ParticleTypeClass_field_0x2E4; /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    this->ParticleTypeClass_field_0x2E4 = 0; /*0x6458be*/
  return result; /*0x6458c8*/
}



// ==== 0x006458D0  ObjectClass::method_6458D0  this=ObjectClass  sig=csp ====
int __thiscall sub_6458D0(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x6458d5*/
  v3 = off_8370BC; /*0x6458d7*/
  while ( _strcmpi((char *)this, *v3) ) /*0x6458ea*/
  {
    ++v3; /*0x6458ec*/
    ++v2; /*0x6458ef*/
    if ( (int)v3 >= (int)&ParticleTypeClass `RTTI Type Descriptor' ) /*0x6458f6*/
      return -1; /*0x6458fe*/
  }
  return v2; /*0x6458f8*/
}



// ==== 0x00645910  ParticleTypeClass::GetObjectSize  this=ParticleTypeClass  sig=csp ====
int ParticleTypeClass::GetObjectSize(ParticleTypeClass *this)
{
  return 792; /*0x645915*/
}



// ==== 0x00645920  ParticleTypeClass::GetTypeIdentifier  this=ParticleTypeClass  sig=csp ====
int ParticleTypeClass::GetTypeIdentifier(ParticleTypeClass *this)
{
  return 23; /*0x645925*/
}



// ==== 0x00645930  ParticleTypeClass::Stub  this=ParticleTypeClass  sig=csp ====
char __stdcall ParticleTypeClass::Stub(ParticleTypeClass *this, int a2)
{
  return 0; /*0x645932*/
}



// ==== 0x00645940  ParticleTypeClass::StubReturnFalse  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::StubReturnFalse(ParticleTypeClass *this)
{
  return 0; /*0x645942*/
}



// ==== 0x00645950  ParticleTypeClass::ddtor  this=ParticleTypeClass  sig=csp ====
void **__thiscall ParticleTypeClass::ddtor(ParticleTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  ParticleTypeClass *v7; // [esp+4h] [ebp-4h] BYREF

  this->ArrayIndex = &ParticleTypeClass::`vftable'; /*0x645956*/
  this->ParticleTypeClass_field_28C = &ParticleTypeClass::`vftable'; /*0x64595c*/
  this->BehavesLike = &ParticleTypeClass::`vftable'; /*0x645963*/
  this->ParticleTypeClass_field_0xC = &ParticleTypeClass::`vftable'; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(&this->ArrayIndex, 1); /*0x645971*/
  v7 = this; /*0x645986*/
  v3 = (*(int (__thiscall **)(int *, ParticleTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x64598a*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x64599a*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x64599f*/
    for ( ; /*0x6459a5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x6459ad*/
    }
  }
  v7 = this; /*0x6459cf*/
  v4 = (*(int (__thiscall **)(char *, ParticleTypeClass **))(*(_DWORD *)&stru_A83D50.__pad_3C[12] + 16))( /*0x6459d3*/
         &stru_A83D50.__pad_3C[12],
         &v7);
  if ( v4 != -1 && v4 < *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6459e3*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_3C[28]; /*0x6459e8*/
    for ( ; /*0x6459ee*/
          v4 < *(int *)&stru_A83D50.__pad_3C[28];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16]
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x6459f6*/
    }
  }
  ParticleTypeClass_field_0x2BC = this->ParticleTypeClass_field_0x2BC; /*0x645a08*/
  this->ParticleTypeClass_field_0x2B8 = (VectorClass *)&VectorClass<RGBClass>::`vftable'; /*0x645a0e*/
  if ( ParticleTypeClass_field_0x2BC && this->__pad_2C0[5] ) /*0x645a1c*/
  {
    __3_YAXPAX_Z(ParticleTypeClass_field_0x2BC); /*0x645a27*/
    this->ParticleTypeClass_field_0x2BC = 0; /*0x645a2f*/
  }
  this->__pad_2C0[5] = 0; /*0x645a3b*/
  *(_DWORD *)this->__pad_2C0 = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)this); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    __3_YAXPAX_Z(this); /*0x645a59*/
  return &this->ArrayIndex; /*0x645a63*/
}



// ==== 0x00645A70  ParticleTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall ParticleTypeClass::Constructor(ParticleTypeClass *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->ParticleTypeClass_field_28C = 0; /*0x645a7d*/
  this->BehavesLike = (void *)a2; /*0x645a80*/
  LOBYTE(this->ParticleTypeClass_field_0xC) = 1; /*0x645a83*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x645a87*/
  this->ArrayIndex = &VectorClass<RGBClass>::`vftable'; /*0x645a8a*/
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
      this->ParticleTypeClass_field_28C = (void *)a3; /*0x645ab3*/
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
      this->ParticleTypeClass_field_28C = v6; /*0x645ae5*/
      BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x645ae8*/
    }
  }
  this->ArrayIndex = &DynamicVectorClass<RGBClass>::`vftable'; /*0x645aec*/
  this->Damage = 10; /*0x645af2*/
  this->ParticleTypeClass_field_0x10 = 0; /*0x645af9*/
  return &this->ArrayIndex; /*0x645afe*/
}



// ==== 0x00645B10  ?$DynamicVectorClass@VRGBClass@@::getTeamIndex  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_645B10(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x645b13*/
  *Block = &VectorClass<RGBClass>::`vftable'; /*0x645b16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x645b20*/
  {
    __3_YAXPAX_Z(v3); /*0x645b28*/
    *(Block + 1) = 0; /*0x645b30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x645b3b*/
  *(Block + 2) = 0; /*0x645b41*/
  if ( (a2 & 1) != 0 ) /*0x645b48*/
    __3_YAXPAX_Z(Block); /*0x645b4b*/
  return Block; /*0x645b55*/
}



// ==== 0x00645B60  ObjectClass::method_645B60  this=ObjectClass  sig=csp ====
int __thiscall sub_645B60(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x645b65*/
  v3 = off_7F0248; /*0x645b67*/
  while ( _strcmpi((char *)this, *v3) ) /*0x645b7a*/
  {
    ++v3; /*0x645b7c*/
    ++v2; /*0x645b7f*/
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
int __thiscall GetSuperWeaponTypeFlag(ObjectClass *this)
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
_DWORD *__thiscall Int4::Set(Int4 *this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x645c3a*/
  this->Int4_field_0x04 = a3; /*0x645c40*/
  *((_DWORD *)this + 2) = a4; /*0x645c47*/
  *((_DWORD *)this + 3) = a5; /*0x645c4a*/
  return this->__pad_0; /*0x645c4d*/
}



// ==== 0x00645C50  Int4::Set2  this=Int4  sig=csp ====
int __thiscall Int4::Set2(Int4 *this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x645c58*/
  this->Int4_field_0x04 = a3; /*0x645c5e*/
  *((_DWORD *)this + 2) = a4; /*0x645c65*/
  *((_DWORD *)this + 3) = a5; /*0x645c68*/
  return a4; /*0x645c6b*/
}



// ==== 0x00645CD0  ObjectClass::method_645CD0  this=ObjectClass  sig=csp ====
void __thiscall sub_645CD0(ObjectClass *this, float a2)
{
  *(float *)&this->AbstractClass = a2 * *(float *)&this->AbstractClass; /*0x645cd6*/
  *(float *)&this->? = a2 * *(float *)&this->?; /*0x645cdf*/
  *(float *)&this->? = a2 * *(float *)&this->?; /*0x645ce9*/
  *(float *)&this->? = a2 * *(float *)&this->?; /*0x645cf3*/
}



// ==== 0x00645D00  Function::645D00  this=Function  sig=csp ====
char *__thiscall Function::645D00(char *this, int a2)
{
  return this + 4 * a2; /*0x645d07*/
}



// ==== 0x00645D20  Float4::Copy  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_645D20(float *this, _DWORD *a2, float *a3)
{
  *this = *a3; /*0x645d27*/
  this->ptr_8 = a3[1]; /*0x645d2c*/
  this->ptr_C = a3[2]; /*0x645d32*/
  this->ptr_10 = a3[3]; /*0x645d3c*/
  *a2 = *(_DWORD *)this; /*0x645d43*/
  a2[1] = this->ptr_8; /*0x645d48*/
  a2[2] = this->ptr_C; /*0x645d4e*/
  a2[3] = this->ptr_10; /*0x645d55*/
  return a2; /*0x645d54*/
}



// ==== 0x00645D60  ObjectClass::method_645D60  this=ObjectClass  sig=csp ====
float *__thiscall sub_645D60(ObjectClass *this, float *a2)
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
  void *v12; // edx
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3
  int v17; // [esp+0h] [ebp-78h]
  int v18; // [esp+4h] [ebp-74h]
  int v19; // [esp+8h] [ebp-70h]
  int v20; // [esp+Ch] [ebp-6Ch]
  void *ptr_0; // [esp+18h] [ebp-60h] BYREF
  void *ptr_4; // [esp+1Ch] [ebp-5Ch]
  void *ptr_8; // [esp+20h] [ebp-58h]
  void *ptr_C; // [esp+24h] [ebp-54h]
  int v25; // [esp+28h] [ebp-50h]
  int v26; // [esp+2Ch] [ebp-4Ch]
  int v27; // [esp+30h] [ebp-48h]
  int v28; // [esp+34h] [ebp-44h]
  float v29[4]; // [esp+38h] [ebp-40h] BYREF
  Int4 v30[2]; // [esp+48h] [ebp-30h] BYREF
  float v31[4]; // [esp+58h] [ebp-20h] BYREF
  float v32[4]; // [esp+68h] [ebp-10h] BYREF

  ptr_0 = this->AbstractClass; /*0x645d6f*/
  ptr_4 = this->?; /*0x645d76*/
  ptr_8 = this->?; /*0x645d7d*/
  ptr_C = this->?; /*0x645d88*/
  v3 = sub_6460C0(v29, a2); /*0x645d8e*/
  v4 = QuaternionMathMultiply((float *)v30[0].__pad_0, (float *)&ptr_0, v3); /*0x645d9c*/
  v5 = *(float *)&this->?; /*0x645da3*/
  v6 = *((_DWORD *)v4 + 1); /*0x645da6*/
  v25 = *(_DWORD *)v4; /*0x645da9*/
  v7 = *((_DWORD *)v4 + 2); /*0x645daf*/
  v26 = v6; /*0x645db2*/
  v27 = v7; /*0x645db7*/
  *(float *)&v20 = -v5; /*0x645dbe*/
  v8 = *(float *)&this->?; /*0x645dc1*/
  v28 = *((_DWORD *)v4 + 3); /*0x645dc5*/
  *(float *)&v19 = -v8; /*0x645dcb*/
  *(float *)&v18 = -*(float *)&this->?; /*0x645dd4*/
  *(float *)&v17 = -*(float *)&this->AbstractClass; /*0x645de0*/
  v9 = (float *)Int4::Set(v30, v17, v18, v19, v20); /*0x645de3*/
  v29[0] = *v9; /*0x645dea*/
  v29[1] = v9[1]; /*0x645df1*/
  v29[2] = v9[2]; /*0x645df8*/
  v29[3] = v9[3]; /*0x645e03*/
  v10 = sub_6460C0(v31, a2); /*0x645e09*/
  v11 = QuaternionMathMultiply(v32, v29, v10); /*0x645e17*/
  ptr_0 = *(void **)v11; /*0x645e1e*/
  ptr_4 = (void *)*((_DWORD *)v11 + 1); /*0x645e25*/
  v12 = (void *)*((_DWORD *)v11 + 3); /*0x645e30*/
  ptr_8 = (void *)*((_DWORD *)v11 + 2); /*0x645e33*/
  ptr_C = v12; /*0x645e3b*/
  if ( !(v14 | v15) ) /*0x645e97*/
  {
    *(float *)&this->AbstractClass = -*(float *)&this->AbstractClass; /*0x645ea2*/
    *(float *)&this->? = -*(float *)&this->?; /*0x645ea9*/
    *(float *)&this->? = -*(float *)&this->?; /*0x645eb1*/
    *(float *)&this->? = -*(float *)&this->?; /*0x645eb9*/
  }
  return (float *)this; /*0x645ebe*/
}



// ==== 0x00645ED0  QuaternionMathMultiply  this=-  sig=csp ====
float *__fastcall Math_QuaternionMultiply(float *a1, float *a2, float *a3)
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
  float v21; // [esp+48h] [ebp+4h]

  v11 = *a3; /*0x645eea*/
  v13 = a3[1]; /*0x645ef4*/
  v15 = a3[2]; /*0x645efb*/
  v21 = a3[3]; /*0x645eff*/
  v17 = a2[1] * v21; /*0x645f0f*/
  v18 = a2[2] * v21; /*0x645f1b*/
  v4 = a2[3]; /*0x645f1f*/
  v12 = v4 * v11; /*0x645f28*/
  v14 = v13 * v4; /*0x645f32*/
  v16 = v15 * v4; /*0x645f3c*/
  v19 = a2[2] * *a3 - a3[2] * *a2; /*0x645f5c*/
  v20 = a3[1] * *a2 - a2[1] * *a3; /*0x645f6c*/
  v7 = a2[1] * a3[2] - a2[2] * a3[1] + v12 + *a2 * v21; /*0x645f76*/
  v8 = v17 + v14 + v19; /*0x645f88*/
  v9 = v18 + v16 + v20; /*0x645f98*/
  v10 = v4 * a3[3] - (a2[2] * a3[2] + a2[1] * a3[1] + *a2 * *a3); /*0x645fb9*/
  v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7; /*0x645fe1*/
  if ( 0.0 != v5 ) /*0x645ff0*/
  {
    v7 = v7 / v5; /*0x645ff8*/
    v8 = v8 / v5; /*0x646002*/
    v9 = v9 / v5; /*0x64600c*/
    v10 = v10 / v5; /*0x646016*/
  }
  *a1 = v7; /*0x646022*/
  a1[1] = v8; /*0x646028*/
  a1[2] = v9; /*0x64602f*/
  a1[3] = v10; /*0x646036*/
  return a1; /*0x646039*/
}



// ==== 0x00646040  sub_646040  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_646040(_DWORD *a1, float *a2, float *a3)
{
  double v4; // st7
  float *v5; // eax
  float v7; // [esp+4h] [ebp-20h] BYREF
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = -*a3; /*0x64604e*/
  v8 = -a3[1]; /*0x646057*/
  v9 = -a3[2]; /*0x646064*/
  v4 = a3[3]; /*0x646068*/
  v11[1] = v8; /*0x64606f*/
  v11[0] = v7; /*0x646073*/
  v10 = v4; /*0x64607b*/
  v11[2] = v9; /*0x646083*/
  v11[3] = v10; /*0x64608b*/
  v5 = QuaternionMathMultiply(&v7, a2, v11); /*0x646094*/
  *a1 = *(_DWORD *)v5; /*0x64609d*/
  a1[1] = *((_DWORD *)v5 + 1); /*0x6460a2*/
  a1[2] = *((_DWORD *)v5 + 2); /*0x6460a8*/
  a1[3] = *((_DWORD *)v5 + 3); /*0x6460ae*/
  return a1; /*0x6460b3*/
}



// ==== 0x006460C0  sub_6460C0  this=Int4  sig=csp ====
float *__fastcall sub_6460C0(float *a1, float *a2)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*a2; /*0x6460c7*/
  v4 = -a2[1]; /*0x6460d0*/
  v5 = -a2[2]; /*0x6460d9*/
  v6 = a2[3]; /*0x6460e6*/
  *a1 = v3; /*0x6460ea*/
  a1[1] = v4; /*0x6460f0*/
  a1[2] = v5; /*0x6460f7*/
  a1[3] = v6; /*0x6460fe*/
  return a1; /*0x646101*/
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
int __userpurge sub_646464@<eax>(ObjectClass *this, int a2@<ecx>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax

  *(_DWORD *)(a2 + 12) = v8; /*0x646464*/
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
  dbl_AC6650 = Math::Sqrt(v0 + v0); /*0x646a9e*/
}



// ==== 0x00646AB0  sub_646AB0  this=-  sig=ida-proto ====
void sub_646AB0()
{
  dbl_AFA460 = dbl_AC6650 / 60.0; /*0x646abc*/
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
  dbl_AC5208 = 0.0174532925199433 * 90.0; /*0x646b3c*/
}



// ==== 0x00646B50  sub_646B50  this=-  sig=ida-proto ====
__int64 sub_646B50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC5208 - dbl_AFA260); /*0x646b62*/
  result = Math::RoundToInt(v0 * dbl_AC6650 * 0.5); /*0x646b76*/
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
  dbl_AFA330 = Math::ArcTan((double)(2 * dword_B0446C) / dbl_AC6650); /*0x646be2*/
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
  dword_AC6640 = 0; /*0x646c22*/
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
  dword_AC6630 = 0; /*0x646c72*/
  dword_AC6634 = 0; /*0x646c77*/
  dword_AC6638 = 0; /*0x646c7c*/
  dword_AC663C = 0; /*0x646c81*/
  return 0; /*0x646c86*/
}



// ==== 0x00646D00  ObjectClass::method_646D00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_646D00(ObjectClass *this)
{
  this->AbstractClass = (void *)-1; /*0x646d04*/
  this->? = 0; /*0x646d0a*/
  this->? = 0; /*0x646d0d*/
  this->? = 0; /*0x646d10*/
  this->? = 0; /*0x646d13*/
  this->? = 0; /*0x646d16*/
  return &this->AbstractClass; /*0x646d19*/
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

  if ( dword_A8B238[0] == 4 ) /*0x646d77*/
    return Network::Disconnect(unk_A8E9C0); /*0x646d7e*/
  return result; /*0x646d83*/
}



// ==== 0x00646D90  sub_646D90  this=-  sig=ida-proto ====
int sub_646D90()
{
  dword_AC6648 = Timer::GetTicks(); /*0x646d9f*/
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
char __fastcall sub_646E90(char a1, int a2, int a3, char a4, int a5)
{
  char *v5; // eax
  char v7[112]; // [esp+8h] [ebp-70h] BYREF

  v5 = ScriptAction::InitActionFields( /*0x646ef0*/
         v7,
         *((_DWORD *)dword_A83D4C + 12),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a3,
         0);
  if ( dword_A802C8 >= 128 ) /*0x646eff*/
    return 0; /*0x646f59*/
  qmemcpy(&byte_A802D4[111 * dword_A802D0], v5, 0x6Fu); /*0x646f1b*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x646f2c*/
  ++dword_A802C8; /*0x646f43*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x646f48*/
  return 1; /*0x646f50*/
}



// ==== 0x00646F70  sub_646F70  this=-  sig=ida-proto ====
char __fastcall sub_646F70(char a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
  char *v7; // eax
  char v9[112]; // [esp+8h] [ebp-70h] BYREF

  v7 = sub_4C68E0( /*0x646fcd*/
         v9,
         *((_DWORD *)dword_A83D4C + 12),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a6,
         a7);
  if ( dword_A802C8 >= 128 ) /*0x646fdc*/
    return 0; /*0x647036*/
  qmemcpy(&byte_A802D4[111 * dword_A802D0], v7, 0x6Fu); /*0x646ff8*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x647009*/
  ++dword_A802C8; /*0x647020*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x647025*/
  return 1; /*0x64702d*/
}



// ==== 0x00647040  ObjectClass::UI_Create  this=ObjectClass  sig=csp ====
char UI_Create(ObjectClass *this)
{
  char *v1; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  if ( dword_A83D4C->__pad_140[183] ) /*0x647048*/
    return 0; /*0x647048*/
  if ( dword_A83D4C->__pad_140[184] ) /*0x647056*/
    return 0; /*0x647056*/
  if ( dword_A83D4C->__pad_140[182] ) /*0x647060*/
    return 0; /*0x647060*/
  v1 = EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0xCu); /*0x647074*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x647083*/
    return 0; /*0x6470dc*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x6470a1*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6470b4*/
  ++stru_A80220.lineTrailer; /*0x6470cb*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6470d0*/
  return 1; /*0x6470d8*/
}



// ==== 0x006470F0  ObjectClass::UI_Add  this=ObjectClass  sig=csp ====
char UI_Add(ObjectClass *this)
{
  char *v1; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  if ( dword_A83D4C->__pad_140[183] ) /*0x6470f8*/
    return 0; /*0x6470f8*/
  if ( dword_A83D4C->__pad_140[184] ) /*0x647106*/
    return 0; /*0x647106*/
  if ( dword_A83D4C->__pad_140[182] ) /*0x647110*/
    return 0; /*0x647110*/
  v1 = EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0x22u); /*0x647124*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x647133*/
    return 0; /*0x64718c*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x647151*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x647164*/
  ++stru_A80220.lineTrailer; /*0x64717b*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x647180*/
  return 1; /*0x647188*/
}



// ==== 0x006471A0  Network::AddFrameEvent  this=Network  sig=csp ====
char Network::AddFrameEvent(Network *this)
{
  char *v1; // eax
  unsigned __int8 v3; // [esp+0h] [ebp-74h]
  char v4[112]; // [esp+4h] [ebp-70h] BYREF

  v3 = 19; /*0x6471a8*/
  if ( *(_DWORD *)&dword_A8B238 == 4 /*0x6471cb*/
    && byte_A8DBA0
    && dword_A8DA84 > 2
    && SessionClass::IsValidHouse((int)&dword_A8B238, 0) )
  {
    v3 = 39; /*0x6471d4*/
  }
  v1 = EventClass::AddEvent(v4, (int)dword_A83D4C->Object_field_0x30, v3); /*0x6471ec*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x6471fb*/
    return 0; /*0x647254*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x647219*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x64722c*/
  ++stru_A80220.lineTrailer; /*0x647243*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x647248*/
  return 1; /*0x647250*/
}



// ==== 0x00647260  ObjectClass::ProcessNetworkEvents  this=ObjectClass  sig=csp ====
void ProcessNetworkEvents(ObjectClass *this)
{
  int v1; // ecx
  int v2; // ebx
  char *v3; // edi
  char *v4; // esi
  char *v5; // edi
  TechnoClass *v6; // [esp+0h] [ebp-84h]
  int Buffer; // [esp+10h] [ebp-74h] BYREF
  _BYTE v8[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v9; // [esp+80h] [ebp-4h]
  char v10; // [esp+82h] [ebp-2h]

  if ( (dword_A8D5F8 & 2) != 0 ) /*0x64726e*/
  {
    v8[0] = 0; /*0x64727a*/
    if ( EventQueue::Process((EventQueue *)dword_87F770) ) /*0x64727f*/
    {
      if ( EventQueue::Read((EventQueue *)dword_87F770) == 27 || (dword_A8D5F8 & 4) != 0 ) /*0x6472a5*/
      {
        byte_A8E9A0 = 0; /*0x6472aa*/
        return; /*0x6472b5*/
      }
    }
    else if ( (dword_A8D5F8 & 4) != 0 /*0x6472eb*/
           && (int)dword_A8ED84 > 0
           && (dword_AC50F8 != (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640)
            || dword_AC5200 != (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640)) )
    {
      byte_A8E9A0 = 0; /*0x6472f0*/
      return; /*0x6472fb*/
    }
    dword_AC50F8 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x64730d*/
    dword_AC5200 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x647317*/
    ComputeNetworkFrameCRC(v6); /*0x64731c*/
    v1 = (int)dword_A8ED84; /*0x647321*/
    dword_B04474[(unsigned __int8)dword_A8ED84] = *(_DWORD *)dword_AC51FC; /*0x647334*/
    if ( v1 >= dword_A8E30C ) /*0x647342*/
    {
      if ( byte_B04880 ) /*0x64734b*/
        LogMultiplayToSync_MPDEBUG(v1 % 256, 0); /*0x64735f*/
      else
        Multiplay::LogToSYNC_NOMPDEBUG(0); /*0x647368*/
      GameClass::Shutdown((GameClass *)v6); /*0x64736d*/
      ExitProgram(0); /*0x647374*/
    }
    if ( v1 ) /*0x647386*/
    {
      if ( *(_DWORD *)&dword_A8B238 /*0x6473b7*/
        && *(_DWORD *)&dword_A8B238 != 5
        && dword_A8B24C == 2
        && v1 != dword_A8B554 * ((unsigned int)(dword_A8B554 + v1 - 1) / dword_A8B554) )
      {
        return; /*0x6473b7*/
      }
    }
    else if ( *(_DWORD *)&dword_A8B238 ) /*0x64738a*/
    {
      return; /*0x64738a*/
    }
    if ( CCFileClass::Read(&dword_A8D58C, &Buffer, 4) != 4 ) /*0x6473cf*/
      goto LABEL_30; /*0x6473cf*/
    v2 = 0; /*0x6473d9*/
    if ( Buffer > 0 ) /*0x6473dd*/
    {
      while ( CCFileClass::Read(&dword_A8D58C, v8, 111) == 111 ) /*0x6473fd*/
      {
        v8[1] &= ~1u; /*0x647414*/
        if ( dword_8B41F8 < 0x4000 ) /*0x647418*/
        {
          v3 = &byte_8B4204[111 * dword_8B4200]; /*0x64742e*/
          qmemcpy(v3, v8, 0x6Cu); /*0x647435*/
          v3 += 108; /*0x647435*/
          *(_WORD *)v3 = v9; /*0x647437*/
          v3[2] = v10; /*0x647439*/
          dword_A70204[dword_8B4200] = timeGetTime(); /*0x647442*/
          dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64745c*/
          ++dword_8B41F8; /*0x647462*/
        }
        if ( ++v2 >= Buffer ) /*0x64746e*/
          goto LABEL_29; /*0x64746e*/
      }
      goto LABEL_30; /*0x6473fd*/
    }
LABEL_29:
    if ( !Network::ProcessEventList(0, 0, 0) ) /*0x6474a0*/
    {
LABEL_30:
      byte_A8E9A0 = 0; /*0x6474a9*/
      return; /*0x6474b7*/
    }
LABEL_31:
    Network_Process_64D990(v6); /*0x6474b8*/
  }
  else
  {
    switch ( *(_DWORD *)&dword_A8B238 ) /*0x6474d5*/
    {
      case 0: /*0x6474d5*/
      case 5: /*0x6474d5*/
        while ( dword_A802C8 ) /*0x6474e3*/
        {
          byte_A802D5[111 * dword_A802CC] &= ~1u; /*0x647504*/
          if ( dword_8B41F8 < 0x4000 ) /*0x647515*/
          {
            v4 = &byte_A802D4[111 * dword_A802CC]; /*0x647522*/
            v5 = &byte_8B4204[111 * dword_8B4200]; /*0x647539*/
            qmemcpy(v5, v4, 0x6Cu); /*0x647540*/
            v4 += 108; /*0x647540*/
            v5 += 108; /*0x647540*/
            *(_WORD *)v5 = *(_WORD *)v4; /*0x647542*/
            v5[2] = v4[2]; /*0x647544*/
            dword_A70204[dword_8B4200] = timeGetTime(); /*0x64754d*/
            dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64755f*/
            ++dword_8B41F8; /*0x64756a*/
          }
          Network_Process_652540((ObjectClass *)&dword_A802C8); /*0x647574*/
        }
        if ( (dword_A8D5F8 & 1) != 0 ) /*0x64758d*/
          Network_Process_64D9E0(v6); /*0x64758f*/
        if ( Network::ProcessEventList(0, 0, 0) ) /*0x6475ae*/
          goto LABEL_31; /*0x6475b5*/
        byte_A8E9A0 = 0; /*0x6475be*/
        break; /*0x6475c7*/
      case 1: /*0x6474d5*/
      case 2: /*0x6474d5*/
      case 3: /*0x6474d5*/
      case 4: /*0x6474d5*/
        Network::QueueProcessingLoop((Network *)v6); /*0x6475c8*/
        break; /*0x6475c8*/
      default:
        return;
    }
  }
}



// ==== 0x006475F0  Network::QueueProcessingLoop  this=Network  sig=csp ====
void Network::QueueProcessingLoop(Network *this)
{
  int v1; // eax
  Network *v2; // ebp
  int v3; // ecx
  int v4; // esi
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned int v8; // eax
  Network *TextBufferEntry; // esi
  char *v10; // edi
  _DWORD *v11; // eax
  int v12; // edx
  Performance *v13; // edi
  int *v14; // eax
  int v15; // ecx
  int v16; // esi
  char v17; // bl
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // edx
  int v23; // esi
  int v24; // esi
  int v25; // ecx
  _DWORD *v26; // edx
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int updated; // esi
  unsigned int v32; // ebx
  int v33; // edi
  unsigned int *v34; // ebp
  unsigned int v35; // esi
  int v36; // ebp
  int v37; // edi
  char *v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // esi
  char Object_field_0x30; // al
  int ptr_0; // edx
  char *v44; // edi
  int v45; // eax
  char *v46; // edi
  int v4... [21708 chars total]



// ==== 0x00648340  nullsub_32  this=-  sig=ida-proto ====
void __cdecl nullsub_32()
{
  ; /*0x648340*/
}



// ==== 0x00648350  ObjectClass::RunNetworkGameLoop  this=ObjectClass  sig=csp ====
void RunNetworkGameLoop(ObjectClass *this)
{
  int v1; // eax
  void *v2; // ebx
  IPXManagerClass *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int *v12; // ebp
  void *v13; // [esp+10h] [ebp-60h]
  unsigned int v14; // [esp+18h] [ebp-58h] BYREF
  int v15; // [esp+1Ch] [ebp-54h] BYREF
  SyncDelayClass v16; // [esp+20h] [ebp-50h] BYREF
  int v17; // [esp+24h] [ebp-4Ch] BYREF
  int v18; // [esp+28h] [ebp-48h] BYREF
  int v19; // [esp+2Ch] [ebp-44h] BYREF
  int Ticks; // [esp+34h] [ebp-3Ch]
  int v21; // [esp+38h] [ebp-38h]
  int v22; // [esp+3Ch] [ebp-34h]
  int v23; // [esp+40h] [ebp-30h]
  int v24; // [esp+44h] [ebp-2Ch]
  int v25; // [esp+48h] [ebp-28h]
  int v26; // [esp+4Ch] [ebp-24h]
  int v27; // [esp+50h] [ebp-20h]
  int v28; // [esp+54h] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-18h]
  int v30; // [esp+5Ch] [ebp-14h]
  int v31; // [esp+60h] [ebp-10h]
  int v32; // [esp+64h] [ebp-Ch]
  int v33; // [esp+68h] [ebp-8h]
  int v34; // [esp+6Ch] [ebp-4h]

  Debug::Log(); /*0x64835c*/
  if ( *(int *)&dword_A8B238 < 3 || *(int *)&dword_A8B238 > 4 ) /*0x648371*/
  {
    v13 = (void *)dword_A8EA74; /*0x648393*/
    v3 = (IPXManagerClass *)&unk_A8EA70; /*0x648397*/
    v2 = (void *)dword_A8EA74; /*0x64839c*/
    v1 = dword_A8EA78 - 14; /*0x6483a0*/
  }
  else
  {
    v1 = dword_A8DA40; /*0x648373*/
    v2 = &unk_A8D812; /*0x648378*/
    v13 = &unk_A8D812; /*0x64837d*/
    v3 = &unk_A8E9C0; /*0x648381*/
  }
  LOWORD(dword_AFA400) = BuildNetworkEventPacket((int)v3, (int)v2, v1, (int)dword_A8B550, dword_AFA400) + dword_AFA400; /*0x6483c1*/
  Ticks = Timer::GetTicks(); /*0x6483d5*/
  v22 = 15; /*0x6483d9*/
  v23 = Timer::GetTicks(); /*0x6483ea*/
  v25 = 600; /*0x6483ee*/
  v19 = Timer::GetTicks(); /*0x6483fb*/
  Debug::Log(); /*0x648404*/
  while ( 2 ) /*0x64840c*/
  {
    EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x64840c*/
    v4 = v22; /*0x64841b*/
    if ( Ticks == -1 ) /*0x648424*/
    {
LABEL_9:
      if ( v4 ) /*0x64843b*/
        goto LABEL_11; /*0x64843b*/
      goto LABEL_10; /*0x64843b*/
    }
    v5 = Timer::GetTicks() - Ticks; /*0x64842f*/
    if ( v5 < v4 ) /*0x648435*/
    {
      v4 -= v5; /*0x648437*/
      goto LABEL_9; /*0x648437*/
    }
LABEL_10:
    v26 = Timer::GetTicks(); /*0x64843d*/
    v28 = 15; /*0x648458*/
    Ticks = v26; /*0x64845c*/
    v21 = v27; /*0x648460*/
    v22 = 15; /*0x648464*/
    Debug::Log(); /*0x648468*/
    SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x64847e*/
LABEL_11:
    (*(void (__thiscall **)(IPXManagerClass *))(v3->Socket + 4))(v3); /*0x648483*/
    v6 = v25; /*0x64848e*/
    if ( v23 != -1 ) /*0x648494*/
    {
      v7 = Timer::GetTicks() - v23; /*0x64849f*/
      if ( v7 >= v6 ) /*0x6484a5*/
      {
LABEL_33:
        Debug::Log(); /*0x648664*/
        return; /*0x648678*/
      }
      v6 -= v7; /*0x6484ab*/
    }
    if ( !v6 ) /*0x6484af*/
      goto LABEL_33; /*0x6484af*/
    v8 = 1; /*0x6484b5*/
    do /*0x64858f*/
    {
      if ( !(*(int (__thiscall **)(IPXManagerClass *, void *, unsigned int *, int *))(v3->Socket + 12))( /*0x6484c9*/
              v3,
              v2,
              &v14,
              &v15) )
        break; /*0x6484ce*/
      EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x6484da*/
      if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x6484ec*/
      {
        switch ( ProcessNetworkMessage((int)v2, 0) ) /*0x648528*/
        {
          case 0: /*0x648528*/
            goto LABEL_23;
          case 4: /*0x648528*/
            (*(void (__thiscall **)(IPXManagerClass *))(v3->Socket + 4))(v3); /*0x648533*/
            v29 = Timer::GetTicks(); /*0x648544*/
            Ticks = v29; /*0x648548*/
            v31 = 15; /*0x648550*/
            v22 = 15; /*0x648554*/
            v21 = v30; /*0x64855c*/
            v32 = Timer::GetTicks(); /*0x64856e*/
            v34 = 600; /*0x648572*/
            v23 = v32; /*0x648576*/
            v24 = v33; /*0x64857a*/
            v25 = 600; /*0x64857e*/
            goto LABEL_23; /*0x64857e*/
          default:
            return;
        }
        return;
      }
      if ( ProcessNetworkFrameSync((int)v3, (int)v2, v15, v14, (int)&dword_AFA358, &v19) == 3 ) /*0x64850e*/
        goto LABEL_33; /*0x64850e*/
LABEL_23:
      (*(void (__thiscall **)(IPXManagerClass *))(v3->Socket + 4))(v3); /*0x648586*/
      v9 = v8++; /*0x648589*/
    }
    while ( v9 < 64 ); /*0x64858f*/
    Event::Dispatch(); /*0x648595*/
    if ( !*(_DWORD *)&stru_A8EB00.?[444] ) /*0x6485a1*/
    {
      InputManager_ProcessEvents::Vtable((GScreenClass *)&stru_87F5F0.__pad_58[416], &v16, &v18, &v17); /*0x6485b7*/
      SyncDelayClass::ProcessNetworkSync(&v16); /*0x6485c0*/
      (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x6485cd*/
      TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x6485d5*/
    }
    v10 = *(_DWORD *)&stru_A8EB00.?[416] + 1000; /*0x6485e7*/
    v11 = 0; /*0x6485ed*/
    if ( (*(int (__thiscall **)(IPXManagerClass *))(v3->Socket + 16))(v3) > 0 ) /*0x6485f4*/
    {
      v12 = &dword_AFA358; /*0x6485f6*/
      do /*0x648615*/
      {
        if ( *v12 < v10 ) /*0x648600*/
          v10 = *v12; /*0x648602*/
        ++v11; /*0x64860c*/
        v12 += 6; /*0x64860d*/
      }
      while ( v11 < (*(int (__thiscall **)(IPXManagerClass *))(v3->Socket + 16))(v3) ); /*0x648615*/
    }
    if ( v10 + dword_A8B554 < *(int *)&stru_A8EB00.?[416] ) /*0x64862a*/
    {
      Debug::Log(); /*0x64863e*/
      v2 = v13; /*0x648643*/
      continue; /*0x64864a*/
    }
    break;
  }
  Debug::Log(); /*0x64867f*/
  Debug::Log(); /*0x648689*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x64869f*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x6486b2*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x6486c5*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x6486d8*/
}



// ==== 0x00648710  QueueNetworkProcessor  this=WinModemClass  sig=csp ====
int __fastcall QueueNetworkProcessor(int a1, int *a2, int a3, int a4, int a5, int a6, __int16 a7, int *a8)
{
  int *v8; // ebx
  int v9; // esi
  int v10; // ebp
  DWORD Time; // edi
  DWORD *v12; // ebp
  int v13; // edi
  int v14; // esi
  int v15; // eax
  char *v16; // eax
  int v17; // esi
  _DWORD *v18; // eax
  _WORD *v19; // edi
  void *v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // eax
  BOOL v28; // edi
  int v29; // esi
  char *v30; // eax
  int v31; // ebp
  char *v32; // esi
  char *v33; // edi
  HWND DialogIndirect; // eax
  int RemainingMs; // kr04_4
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  HWND v38; // esi
  int v39; // ebp
  int v40; // eax
  int v41; // edx
  int *v42; // edi
  int ConnectionSpeed; // eax
  int v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *... [36437 chars total]



// ==== 0x00649CA0  BuildNetworkEventPacket  this=Network  sig=csp ====
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

  v6 = dword_A802C8; /*0x649caf*/
  v26 = a1; /*0x649cc4*/
  v25 = 0; /*0x649cc8*/
  v22 = dword_A802C8; /*0x649ccc*/
  if ( dword_A802C8 > 0x2000 - dword_8B41F8 ) /*0x649cd0*/
    v22 = 0x2000 - dword_8B41F8; /*0x649cd2*/
  v28 = dword_A802C8; /*0x649cd6*/
  while ( 1 )
  {
    if ( !v22 || !v6 || (v24 = 1, dword_A8B54C == 1) ) /*0x649cf9*/
      v24 = 0; /*0x649cfb*/
    *(_BYTE *)a2 = 28; /*0x649cff*/
    v27 = 0; /*0x649d0a*/
    v8 = a4; /*0x649d1b*/
    *(_DWORD *)(a2 + 3) = dword_A8B24C == 2
                        ? (wchar_t *)(dword_A8B554
                                    * (((unsigned int)dword_A8ED84 + dword_A8B554 + a4 - 1)
                                     / dword_A8B554))
                        : (wchar_t *)((char *)dword_A8ED84 + a4);
    *(_BYTE *)(a2 + 2) = *((_BYTE *)dword_A83D4C + 48); /*0x649d49*/
    *(_DWORD *)(a2 + 7) = *(_DWORD *)dword_AC51FC; /*0x649d57*/
    *(_WORD *)(a2 + 11) = a5; /*0x649d5a*/
    *(_BYTE *)(a2 + 13) = a4; /*0x649d5e*/
    v9 = dword_A8B24C != 0 ? 14 : 111;
    if ( dword_A8B24C )
    {
      v9 = dword_A8B24C <= 0 || dword_A8B24C > 2
         ? 0
         : CompressNetworkMegaMission(a2, a3, a4, dword_A8B24C != 0 ? 14 : 111, v22, &v27);
    }
    else
    {
      v23 = 0; /*0x649da7*/
      if ( dword_A802C8 )
      {
        v10 = dword_A802CC; /*0x649db7*/
        while ( v23 < v22 )
        {
          v11 = 37 * v10; /*0x649dcf*/
          v12 = byte_A802D4[3 * v11] == 31 ? *(int *)((char *)&dword_A802DF + 3 * v11) + 111 : 111;
          if ( v9 + v12 > a3 ) /*0x649df5*/
            break; /*0x649df5*/
          *(int *)((char *)&dword_A802D7 + 3 * v11) = (int)dword_A8ED84 + v8; /*0x649e03*/
          byte_A802D6[111 * dword_A802CC] = *((_BYTE *)dword_A83D4C + 48); /*0x649e1e*/
          byte_A802D5[111 * dword_A802CC] &= ~1u; /*0x649e3a*/
          if ( dword_8B41F8 >= 0x4000 ) /*0x649e4b*/
            break; /*0x649e4b*/
          v13 = &byte_A802D4[111 * dword_A802CC]; /*0x649e61*/
          v14 = &byte_8B4204[111 * dword_8B4200]; /*0x649e73*/
          qmemcpy(v14, v13, 0x6Cu); /*0x649e7a*/
          v13 += 108; /*0x649e7a*/
          v14 += 108; /*0x649e7a*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x649e7c*/
          v14[2] = v13[2]; /*0x649e7e*/
          dword_A70204[dword_8B4200] = timeGetTime(); /*0x649e8e*/
          ++dword_8B41F8; /*0x649eae*/
          dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x649eb7*/
          v15 = &byte_A802D4[111 * dword_A802CC]; /*0x649ec5*/
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
              *(const void **)((char *)&dword_A802DB + 111 * dword_A802CC),
              *(int *)((char *)&dword_A802DF + 111 * dword_A802CC));
            v19 = dword_A802CC; /*0x649f09*/
            v9 = *(int *)((char *)&dword_A802DF + 111 * dword_A802CC) + v18; /*0x649f14*/
          }
          else
          {
            v19 = dword_A802CC; /*0x649f1d*/
            v9 += 111; /*0x649f22*/
          }
          ++v23; /*0x649f32*/
          if ( !dword_A802C8 || (v10 = (v19 + 1) & 0x7F, dword_A802CC = v10, --dword_A802C8, !dword_A802C8) ) /*0x649f48*/
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
    v6 = dword_A802C8; /*0x649fb8*/
    if ( !dword_A802C8 || dword_A802C8 > v28 ) /*0x649fc6*/
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



// ==== 0x0064A000  SendNetworkFrameSync  this=Network  sig=csp ====
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
  if ( dword_A8B24C == 2 ) /*0x64a027*/
    *(_DWORD *)&v6[3] = dword_A8B554 /*0x64a04a*/
                      * (((unsigned int)dword_A8ED84 + (int)dword_A8B550 + dword_A8B554 - 1)
                       / dword_A8B554);
  else
    *(_DWORD *)&v6[3] = (char *)dword_A8ED84 + (_DWORD)dword_A8B550; /*0x64a05f*/
  v3 = *((_BYTE *)dword_A83D4C + 48); /*0x64a06e*/
  *(_DWORD *)&v6[7] = dword_A8E7A8; /*0x64a076*/
  v6[2] = v3; /*0x64a07a*/
  v4 = *a1; /*0x64a07e*/
  v6[13] = (_BYTE)dword_A8B550; /*0x64a084*/
  *(_WORD *)&v6[11] = a2; /*0x64a08b*/
  (*(void (__thiscall **)(int *, _BYTE *, int, _DWORD, int))(v4 + 8))(a1, v6, 14, 0, -1); /*0x64a090*/
  ((void (*)(const char *, ...))Debug::Log)(aSentFramesyncO); /*0x64a098*/
  return ++dword_B0487C; /*0x64a0a6*/
}



// ==== 0x0064A0C0  ProcessNetworkFrameSync  this=Network  sig=csp ====
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
  if ( byte_A8DBA0 ) /*0x64a0f0*/
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
                if ( Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)) ) /*0x64a1fd*/
                {
                  Class = (char *)Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)); /*0x64a213*/
                  ToWideStringChar(Class); /*0x64a21a*/
                  Debug::Log(); /*0x64a225*/
                }
              }
              else
              {
                *v16 = v15; /*0x64a189*/
                Network_Process_652110(a5, v14); /*0x64a194*/
                if ( Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)) ) /*0x64a1a3*/
                {
                  v17 = (char *)Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)); /*0x64a1b9*/
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
          else if ( *v12 == *((_DWORD *)dword_A83D4C + 12) ) /*0x64a263*/
          {
            dword_A8E2D4 = *(_DWORD *)(v12 + 2); /*0x64a268*/
            Debug::Log(); /*0x64a289*/
          }
          else
          {
            v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *v12); /*0x64a29d*/
            if ( v20 != -1 ) /*0x64a2a3*/
            {
              v21 = *(_DWORD *)(v12 + 2); /*0x64a2b0*/
              *(_DWORD *)(a5 + 24 * v20 + 16) = v21; /*0x64a2b6*/
              dword_AC5210[v20] = v21; /*0x64a2ba*/
              if ( v34 <= v21 ) /*0x64a2c5*/
                v34 = v21; /*0x64a2c7*/
              if ( v12[1] ) /*0x64a2cb*/
              {
                if ( SessionClass::IsValidHouse((int)dword_A8B238, 0) ) /*0x64a2dd*/
                {
                  if ( dword_A8E2CC != *v12 ) /*0x64a2ef*/
                  {
                    v22 = EventClass::Add2(v43, *((_DWORD *)dword_A83D4C + 12), 0x28u, *v12); /*0x64a301*/
                    if ( dword_A802C8 < 128 ) /*0x64a310*/
                    {
                      qmemcpy(&byte_A802D4[111 * dword_A802D0], v22, 0x6Fu); /*0x64a32c*/
                      v6 = a2; /*0x64a33d*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x64a341*/
                      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x64a358*/
                      ++dword_A802C8; /*0x64a35e*/
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
        dword_A8E2C4 = v7; /*0x64a396*/
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
    if ( dword_A8B238[0] == 4 || dword_A8B238[0] == 3 ) /*0x64a5b0*/
    {
      Network::GetClass(unk_A8E9C0, a3); /*0x64a5ca*/
      Debug::Log(); /*0x64a5d5*/
    }
    if ( *(_DWORD *)(v6 + 7) != dword_A8E7A8 ) /*0x64a5e8*/
      return 2; /*0x64a5f9*/
    v24[3] = Timer::GetTicks() - *a6; /*0x64a60d*/
    return v41; /*0x64a60d*/
  }
  v26 = 0; /*0x64a417*/
  if ( dword_A8B24C ) /*0x64a41b*/
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
    qmemcpy(&byte_8B4204[111 * dword_8B4200], v29, 0x6Fu); /*0x64a4c0*/
    v6 = a2; /*0x64a4d1*/
    dword_A70204[dword_8B4200] = timeGetTime(); /*0x64a4d5*/
    dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64a4ee*/
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
    v7 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x64a68e*/
    if ( !((int (__stdcall *)(wchar_t *, int, wchar_t *, int))ScrollingText::AddLine)( /*0x64a6a1*/
            (wchar_t *)v5,
            *(unsigned __int8 *)(v2 + 24),
            (wchar_t *)(v2 + 25),
            v7) )
    {
      v8 = CharToWideString((_BYTE *)(v2 + 4)); /*0x64a6b1*/
      v9 = *(unsigned __int8 *)(v2 + 24); /*0x64a6cb*/
      v10 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x64a6cd*/
      MessageListClass::AddMessage(unk_A8BC60, (wchar_t *)v8, v9, v6, v9, 16454, v10, 0); /*0x64a6e1*/
      PlayVocClass(dword_8871E0->MovieOn, 0x2000, 1.0, 0); /*0x64a6fe*/
    }
    if ( wcslen(v6) ) /*0x64a704*/
      wcscpy((wchar_t *)&dword_A8D110 + 1, v6); /*0x64a718*/
    MapClass::MarkForRedraw(&dword_87F7E8, 2); /*0x64a727*/
    return 4; /*0x64a727*/
  }
  if ( v3 == 120 ) /*0x64a737*/
  {
    if ( (_BYTE)dword_A8D110 && dword_A8B238[0] == 3 || BYTE1(dword_A8D110) && dword_A8B238[0] == 4 ) /*0x64a759*/
    {
      LOBYTE(a1) = *(_BYTE *)(a1 + 25); /*0x64a75b*/
      ((void (__thiscall *)(int))PlayTauntClass)(a1); /*0x64a75e*/
      return 4; /*0x64a76a*/
    }
    return 4; /*0x64a733*/
  }
  if ( v3 >= 100 && v3 < 109 || v3 >= 110 && v3 <= 116 || dword_A8B54C == 1 || !*(_BYTE *)a1 || *(_BYTE *)a1 >= 0x2Fu ) /*0x64a790*/
    return 4; /*0x64a790*/
  v11 = -(*((_DWORD *)dword_A83D4C + 12) != *(char *)(a1 + 2)); /*0x64a7a4*/
  LOBYTE(v11) = v11 & 0xFA; /*0x64a7a7*/
  return v11 + 6; /*0x64a660*/
}



// ==== 0x0064A7B0  ObjectClass::RenderPlayerLatencyBars  this=ObjectClass  sig=csp ====
int __thiscall RenderPlayerLatencyBars(ObjectClass *this)
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
  void (__thiscall **DSurface_field_0x0)(DSurface *, int); // edi
  int v13; // eax
  void (__thiscall **v14)(DSurface *, int); // edi
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

  result = dword_A8DA84; /*0x64a7b3*/
  v2 = 0; /*0x64a7b9*/
  for ( i = 0; v2 < dword_A8DA84; i = v2 )
  {
    DlgItem = GetDlgItem((HWND)this, dword_837320[v2]); /*0x64a7df*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x64a7e9*/
    v4 = Rect.right - Rect.left; /*0x64a7fc*/
    left = Rect.left; /*0x64a802*/
    v24[0] = Rect.left; /*0x64a806*/
    top = Rect.top; /*0x64a812*/
    v21 = Rect.bottom - Rect.top; /*0x64a816*/
    v24[1] = Rect.top; /*0x64a81a*/
    v24[2] = Rect.right - Rect.left; /*0x64a824*/
    v24[3] = Rect.bottom - Rect.top; /*0x64a828*/
    if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x64a83a*/
    {
      v17 = 0; /*0x64a84d*/
      v5 = 0; /*0x64a855*/
    }
    else
    {
      v5 = IPXManagerClass::send(&unk_A8E9C0, *(_DWORD *)(dword_A8DA78[v2] + 111)); /*0x64a842*/
      v17 = v5; /*0x64a847*/
    }
    if ( v2 ) /*0x64a85b*/
      v6 = dword_AFA418 - dword_AFA284[6 * v5]; /*0x64a86a*/
    else
      v6 = 0; /*0x64a85d*/
    v7 = 200 >> g_BitMask_Blue << g_BitMask_Green; /*0x64a8ac*/
    if ( v6 > 0xF0 ) /*0x64a8b4*/
    {
      v7 = (200 >> g_BitMask_Blue << g_BitMask_Green) | (200 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x64a8d1*/
      if ( v6 > 0x1E0 ) /*0x64a8d9*/
      {
        v7 = 200 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x64a8f3*/
        v8 = (60 * timeGetTime() - 60 * dword_AFA28C[6 * v17]) / 0x3E8; /*0x64a924*/
        if ( v8 < 0x1A4 ) /*0x64a92d*/
        {
          v6 = v8; /*0x64a942*/
          v7 = 200 >> g_BitMask_Red << g_BitShift_Blue; /*0x64a948*/
        }
      }
      v2 = i; /*0x64a96e*/
    }
    v9 = 25 * v6; /*0x64a97b*/
    v10 = 6; /*0x64a97f*/
    v11 = ((int)(100 - 4 * v9 / 0x4B0u) <= 0 ? 0 : 100 - 4 * v9 / 0x4B0u) * v4;
    if ( v11 / 100 >= 6 ) /*0x64a9b4*/
      v10 = v11 / 100; /*0x64a9b6*/
    DSurface_field_0x0 = (void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0; /*0x64aa0b*/
    v13 = (*((int (__thiscall **)(DSurface *, char *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x64aa1a*/
            DSurface_Alternate,
            v25,
            v24,
            (byte_A8EAE4 >> g_BitShift_Green_0 << g_BitShift_Red)
          | (word_A8EAE5 >> g_BitMask_Blue << g_BitMask_Green)
          | (MEMORY[0xA8EAE6] >> g_BitMask_Red << g_BitShift_Blue));
    DSurface_field_0x0[21](DSurface_Alternate, v13); /*0x64aa24*/
    v22[2] = v10 - 4; /*0x64aa45*/
    v22[1] = top + 2; /*0x64aa55*/
    v22[3] = v21 - 4; /*0x64aa59*/
    v22[0] = left + 2; /*0x64aa61*/
    v14 = (void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0; /*0x64aa65*/
    v15 = (*((int (__thiscall **)(DSurface *, char *, _DWORD *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x64aa6e*/
            DSurface_Alternate,
            v26,
            v22,
            (unsigned __int16)v7);
    v14[4](DSurface_Alternate, v15); /*0x64aa78*/
    result = dword_A8DA84; /*0x64aa7b*/
    ++v2; /*0x64aa80*/
  }
  return result; /*0x64aa90*/
}



// ==== 0x0064AAA0  ObjectClass::method_64AAA0  this=ObjectClass  sig=csp ====
int __thiscall sub_64AAA0(ObjectClass *this)
{
  LRESULT v2; // esi

  v2 = SendMessageA((HWND)this, 0x18Bu, 0, 0); /*0x64aab7*/
  if ( v2 > 50 ) /*0x64aabc*/
  {
    SendMessageA((HWND)this, 0x182u, 0, 0); /*0x64aac8*/
    --v2; /*0x64aaca*/
  }
  return SendMessageA((HWND)this, 0x197u, v2 - 1, 0); /*0x64aad7*/
}



// ==== 0x0064AAE0  KickNetworkPlayer  this=-  sig=csp ====
int __fastcall KickNetworkPlayer(HWND hDlg, LPARAM lParam)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // esi
  wchar_t *StringCSF; // eax
  LRESULT (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebx
  LRESULT v9; // edi
  wchar_t *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // esi
  HWND v14; // [esp-4h] [ebp-1D8h]
  int v15; // [esp+Ch] [ebp-1C8h] BYREF
  char Destination[43]; // [esp+10h] [ebp-1C4h] BYREF
  int i; // [esp+3Bh] [ebp-199h]
  int v18; // [esp+3Fh] [ebp-195h]

  if ( lParam >= 0 && lParam < dword_A8DA84 ) /*0x64aafb*/
  {
    Debug::Log(); /*0x64ab16*/
    DlgItem = GetDlgItem(hDlg, 1617); /*0x64ab24*/
    v6 = DlgItem; /*0x64ab2c*/
    if ( !lParam ) /*0x64ab2e*/
    {
      v14 = DlgItem; /*0x64ab30*/
      StringCSF = GetStringCSF(aTxtReconnectKi_0, 0, g_Str_File_Queue_CPP, 3375); /*0x64ab42*/
      DrawDialogText(-1, StringCSF, v14); /*0x64ab4c*/
      v8 = SendMessageA; /*0x64ab51*/
      v9 = SendMessageA(v6, 0x18Bu, 0, 0); /*0x64ab61*/
      if ( v9 > 50 ) /*0x64ab66*/
        goto LABEL_9; /*0x64ab66*/
      return v8(v6, 0x197u, v9 - 1, 0); /*0x64ab66*/
    }
    if ( dword_A8B238[0] == 4 && *(_DWORD *)dword_B779C4 ) /*0x64ab7a*/
    {
      v10 = GetStringCSF(aTxtCantKick, 0, g_Str_File_Queue_CPP, 3385); /*0x64ab8e*/
      DrawDialogText(-1, v10, v6); /*0x64ab98*/
      v8 = SendMessageA; /*0x64ab9d*/
      v9 = SendMessageA(v6, 0x18Bu, 0, 0); /*0x64abaf*/
      if ( v9 > 50 ) /*0x64abb4*/
      {
LABEL_9:
        v8(v6, 0x182u, 0, 0); /*0x64abb6*/
        --v9; /*0x64abc2*/
      }
      return v8(v6, 0x197u, v9 - 1, 0); /*0x64abd8*/
    }
    v15 = 28; /*0x64abdf*/
    v11 = ToWideStringChar(*(char **)dword_A8DA78); /*0x64abeb*/
    strncpy(Destination, v11, 0x14u); /*0x64abf6*/
    v12 = dword_A8DA78; /*0x64abfb*/
    v13 = 1; /*0x64ac00*/
    v18 = *(_DWORD *)(*(_DWORD *)dword_A8DA78 + 111); /*0x64ac0d*/
    for ( i = *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * lParam) + 111); v13 < dword_A8DA84; v12 = dword_A8DA78 ) /*0x64ac23*/
    {
      Debug::Log(); /*0x64ac2e*/
      Network::SendMessage((int)unk_A8E9C0, (int)&v15, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * v13++) + 40, 0, 0); /*0x64ac58*/
    }
    return Network_Process_64AD10(*(_DWORD *)(*(_DWORD *)v12 + 111), *(_DWORD *)(*(_DWORD *)(v12 + 4 * lParam) + 111)); /*0x64ac77*/
  }
  return result; /*0x64abcf*/
}



// ==== 0x0064AC90  Network::syncGameState  this=Network  sig=csp ====
int __thiscall Network::syncGameState(Network *this)
{
  int v2; // ebx
  int result; // eax

  v2 = __2_YAPAXI_Z(0x1C7u); /*0x64ac9f*/
  qmemcpy((void *)v2, this, 0x1C4u); /*0x64acab*/
  this = (Network *)((char *)this + 452); /*0x64acab*/
  *(_WORD *)(v2 + 452) = this->Network_field_0x0; /*0x64acad*/
  *(_BYTE *)(v2 + 454) = BYTE2(this->Network_field_0x0); /*0x64acaf*/
  result = *(_DWORD *)stru_A8BB1C.__pad_14; /*0x64acb0*/
  if ( *(int *)&stru_A8BB1C.__pad_14[8] < *(int *)stru_A8BB1C.__pad_14 /*0x64aceb*/
    || (stru_A8BB1C.__pad_14[5] || !*(_DWORD *)stru_A8BB1C.__pad_14)
    && *(int *)&stru_A8BB1C.__pad_14[12] > 0
    && (result = (*((int (__thiscall **)(void **, int, _DWORD))stru_A8BB1C.Network_field_0xC + 2))(
                   &stru_A8BB1C.Network_field_0xC,
                   *(_DWORD *)stru_A8BB1C.__pad_14 + *(_DWORD *)&stru_A8BB1C.__pad_14[12],
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&stru_A8BB1C.__pad_14[8])++; /*0x64acf3*/
    *((_DWORD *)stru_A8BB1C.Network_field_0x10 + result) = v2; /*0x64ad02*/
  }
  return result; /*0x64ad05*/
}



// ==== 0x0064AD10  Network_Process_64AD10  this=-  sig=ida-proto ====
LRESULT __fastcall Network_Process_64AD10(int a1, int a2)
{
  LRESULT v3; // edi
  LRESULT result; // eax
  char *v5; // edx
  const wchar_t *Class; // edi
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND DlgItem; // esi
  LRESULT v10; // edi
  int v11; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  v3 = 0; /*0x64ad1b*/
  result = *(_DWORD *)&stru_A8BB1C.Network_field_0x22[4 * a2 + 2]; /*0x64ad1d*/
  if ( result <= 0 ) /*0x64ad26*/
  {
LABEL_5:
    *(_DWORD *)&stru_A8BB1C.__pad_34[32 * a2 + 16 + 4 * result] = a1; /*0x64ad41*/
    ++*(_DWORD *)&stru_A8BB1C.Network_field_0x22[4 * a2 + 2]; /*0x64ad53*/
    result = *(_DWORD *)&dword_A8B238; /*0x64ad5a*/
    if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x64ad67*/
    {
      Class = (const wchar_t *)Network::GetClass((Network *)&unk_A8E9C0, a1); /*0x64ad78*/
      if ( !Class ) /*0x64ad7c*/
        Class = (const wchar_t *)*dword_A8DA78; /*0x64ad84*/
      Network::GetClass((Network *)&unk_A8E9C0, a2); /*0x64ad8c*/
      Debug::Log(); /*0x64ad98*/
      v11 = Network::GetClass((Network *)&unk_A8E9C0, a2); /*0x64adb2*/
      StringCSF = GetStringCSF(aTxtReconnectKi, 0, g_Str_File_Queue_CPP, 3485); /*0x64adbe*/
      swprintf(Buffer, (const size_t)StringCSF, Class, v11); /*0x64adc9*/
      Current = (HWND)Dialog::GetCurrent(); /*0x64add1*/
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
    v5 = &stru_A8BB1C.__pad_34[32 * a2 + 16]; /*0x64ad2b*/
    while ( *(_DWORD *)v5 != a1 ) /*0x64ad33*/
    {
      ++v3; /*0x64ad39*/
      v5 += 4; /*0x64ad3a*/
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
int __stdcall NetworkScore_DlgProc(HWND hWnd, UINT a2, HWND a3, char *a4)
{
  HWND v4; // ebp
  _DWORD *WindowLongA; // esi
  int result; // eax
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
        for ( i = 0; i < 8; ++i ) /*0x64b0fd*/
        {
          DlgItem = GetDlgItem(v4, dword_837300[i]); /*0x64b107*/
          EnableWindow(DlgItem, 0); /*0x64b10c*/
          v10 = GetDlgItem(v4, dword_837320[i]); /*0x64b116*/
          EnableWindow(v10, 0); /*0x64b11b*/
        }
        v11 = 0; /*0x64b125*/
        while ( 1 ) /*0x64b13f*/
        {
          v12 = GetDlgItem(v4, dword_837300[v11]); /*0x64b13f*/
          a3 = GetDlgItem(hWnd, dword_837320[v11]); /*0x64b149*/
          if ( v11 >= dword_A8DA84 ) /*0x64b154*/
          {
            DestroyWindow(v12); /*0x64b185*/
            DestroyWindow(a3); /*0x64b18c*/
          }
          else
          {
            SendMessageA(v12, 0x4B2u, 0, *(_DWORD *)(dword_A8DA78 + 4 * v11)); /*0x64b168*/
            EnableWindow(v12, 1); /*0x64b171*/
            EnableWindow(a3, 1); /*0x64b17a*/
          }
          if ( ++v11 >= 8 ) /*0x64b192*/
            break; /*0x64b192*/
          v4 = hWnd; /*0x64b129*/
        }
        if ( dword_A8B238 == 4 ) /*0x64b19d*/
        {
          *(_DWORD *)dword_B77780 = 0; /*0x64b1ae*/
          *(_DWORD *)dword_B77CE0 = 0; /*0x64b1b3*/
          byte_B0488C = 0; /*0x64b1b8*/
          byte_B0488D = 0; /*0x64b1bd*/
          dword_B04890 = 0; /*0x64b1c2*/
          byte_B04878 = 0; /*0x64b1c7*/
          SetTimer(hWnd, 1u, 0x3E8u, 0); /*0x64b1cc*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x64b1da*/
      }
      return 0; /*0x64b1df*/
    }
    if ( a2 >= 0x132 ) /*0x64afcc*/
      return (int)GetStockObject(4); /*0x64b0db*/
    if ( a2 != 275 || dword_A8B238 != 4 || a3 != (HWND)1 || !g_UIPointerTable ) /*0x64affc*/
      return 0; /*0x64affc*/
    if ( *(int *)dword_B77780 < 5 ) /*0x64b00f*/
    {
      (*(void (__stdcall **)(LPVOID, void *, int, HWND *))(*(_DWORD *)g_UIPointerTable + 24))( /*0x64b023*/
        g_UIPointerTable,
        &unk_B77930,
        1000,
        &hWnd);
      ++*(_DWORD *)dword_B77780; /*0x64b026*/
    }
    v7 = ++dword_B04890; /*0x64b037*/
    if ( !*(_DWORD *)dword_B779C4 ) /*0x64b03f*/
      goto LABEL_45; /*0x64b03f*/
    if ( byte_B0488C || v7 <= 5 || *(_DWORD *)dword_B77CE0 ) /*0x64b057*/
    {
      if ( !byte_B0488D && v7 > 10 && !*(_DWORD *)dword_B77CE0 ) /*0x64b07e*/
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



// ==== 0x0064B240  KickNetworkPlayerNow  this=Network  sig=csp ====
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
    *(_BYTE *)(*((_DWORD *)dword_A8022C + v6) + 520) = 1; /*0x64b2cc*/
    if ( Network::CountDisconnectedHouses(*((_DWORD *)dword_A8022C + v6)) == 1 && dword_A8B238[0] == 4 && !byte_A8F900 ) /*0x64b2f4*/
    {
      Timer::UpdateDelta(); /*0x64b2f6*/
      byte_B0BD78 = 1; /*0x64b2ff*/
      if ( !v13 ) /*0x64b307*/
        byte_A8B8C1 = 1; /*0x64b309*/
      for ( i = 0; i < dword_A80238; ++i ) /*0x64b318*/
      {
        v8 = (_BYTE *)*((_DWORD *)dword_A8022C + i); /*0x64b320*/
        if ( v8 && !v8[501] && v8[492] ) /*0x64b331*/
          v8[520] = 1; /*0x64b33b*/
      }
      ProcessGameResults(0); /*0x64b34d*/
    }
    if ( Network::CountDisconnectedHouses(*((_DWORD *)dword_A8022C + v6)) > 1 && !v13 ) /*0x64b369*/
      *(_BYTE *)(*((_DWORD *)dword_A8022C + v6) + 583) = 1; /*0x64b374*/
    v14 = a2; /*0x64b37f*/
    if ( a2 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b389*/
    {
      v9 = 4 * a2 + 11057984; /*0x64b394*/
      v10 = &dword_A8BB60[8 * a2]; /*0x64b39e*/
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



// ==== 0x0064B410  Network_Process_64B410  this=Network  sig=csp ====
int __fastcall Network_Process_64B410(int a1, int *a2)
{
  int *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+8h] [ebp-8h]

  v2 = a2; /*0x64b419*/
  if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x64b42a*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x64b491*/
    {
      ++dword_A8DAB4; /*0x64b498*/
      if ( !Network_Process_5F0120(v7) ) /*0x64b49e*/
      {
        --dword_A8DAB4; /*0x64b4ae*/
        return 0; /*0x64b4b9*/
      }
      --dword_A8DAB4; /*0x64b4bb*/
    }
    return 1; /*0x64b4bb*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 ) /*0x64b434*/
    return 1; /*0x64b4c1*/
  v4 = 0; /*0x64b43e*/
  v5 = 0x7FFFFFFF; /*0x64b442*/
  v8 = 0; /*0x64b447*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) > 0 ) /*0x64b450*/
  {
    do /*0x64b46c*/
    {
      if ( *v2 < v5 ) /*0x64b457*/
      {
        v5 = *v2; /*0x64b459*/
        v8 = v4; /*0x64b45b*/
      }
      ++v4; /*0x64b463*/
      v2 += 6; /*0x64b464*/
    }
    while ( v4 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ); /*0x64b46c*/
    v2 = a2; /*0x64b46e*/
  }
  KickNetworkPlayerNow(a1, v8, (int)v2, 1u); /*0x64b47b*/
  return 1; /*0x64b487*/
}



// ==== 0x0064B4D0  DictionaryCompressLookup  this=-  sig=csp ====
int __fastcall DictionaryCompressLookup(unsigned __int8 *a1, _DWORD *a2, _BYTE *a3, const void *a4, char a5)
{
  int result; // eax
  unsigned __int8 v6; // dl
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  int *v12; // esi
  int v13; // ecx
  char *v14; // ecx
  char v15; // [esp+10h] [ebp-14h]
  int v17; // [esp+18h] [ebp-Ch]
  unsigned __int8 v18; // [esp+1Ch] [ebp-8h]

  v6 = *a1; /*0x64b4d8*/
  v18 = *a1; /*0x64b4e4*/
  if ( *a1 > 1u ) /*0x64b4e8*/
  {
    v15 = 0; /*0x64b4ec*/
    v7 = v6; /*0x64b4f4*/
    v8 = (char *)&unk_AC5235; /*0x64b4fa*/
    v17 = v6; /*0x64b4ff*/
    result = (int)dword_AFA338; /*0x64b503*/
    do /*0x64b508*/
    {
      if ( v7 == *(_DWORD *)result ) /*0x64b50c*/
      {
        if ( !memcmp(v8 - 5, a3, 5u) && !memcmp(v8, a4, 5 * *(_DWORD *)result - 5) ) /*0x64b52e*/
        {
          if ( a5 ) /*0x64b59c*/
          {
            result = (int)a2; /*0x64b5ac*/
            *a2 += 5 - 5 * v17; /*0x64b5b0*/
          }
          LOBYTE(result) = 1; /*0x64b5b4*/
          if ( a5 ) /*0x64b5b6*/
          {
            *a1 = 0; /*0x64b5c6*/
            a3[6] = v15; /*0x64b5cf*/
          }
          return result; /*0x64b5d5*/
        }
        v7 = v17; /*0x64b530*/
        v6 = v18; /*0x64b534*/
      }
      result += 4; /*0x64b53c*/
      v8 += 640; /*0x64b540*/
      ++v15; /*0x64b54b*/
    }
    while ( result < (int)&dword_AFA358 ); /*0x64b508*/
  }
  if ( a5 && v6 > 1u ) /*0x64b560*/
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
      if ( (int)dword_A8ED84 - v13 > v10 ) /*0x64b582*/
      {
        v10 = (int)dword_A8ED84 - v13; /*0x64b584*/
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
    dword_AFA42C[v9] = (int)dword_A8ED84; /*0x64b600*/
    v14 = (char *)&unk_AC5230 + 640 * v9; /*0x64b60f*/
    *(_DWORD *)v14 = *(_DWORD *)a3; /*0x64b61d*/
    v14[4] = a3[4]; /*0x64b626*/
    result = 5 * *a1 - 5; /*0x64b635*/
    qmemcpy((char *)&unk_AC5235 + 640 * v9, a4, result); /*0x64b63a*/
    dword_AFA338[v9] = *a1; /*0x64b647*/
    a3[6] = v9; /*0x64b64e*/
  }
  LOBYTE(result) = 0; /*0x64b651*/
  return result; /*0x64b5c4*/
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
  if ( byte_A8ED74 ) /*0x64b6ad*/
    Debug::Log(); /*0x64b6ba*/
  if ( dword_A802C8 ) /*0x64b6c8*/
  {
    v7 = dword_A802CC; /*0x64b6ce*/
    while ( v28 < a5 ) /*0x64b6d4*/
    {
      v8 = byte_A802D4[111 * v7]; /*0x64b6ef*/
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
            if ( byte_A8ED74 ) /*0x64b7a5*/
            {
              FromNameIndex(v24); /*0x64b821*/
              Debug::Log(); /*0x64b82d*/
              v7 = dword_A802CC; /*0x64b832*/
            }
            v9 = 5; /*0x64b83f*/
            v10 = 5; /*0x64b846*/
            LOBYTE(v23) = v23 + 1; /*0x64b848*/
            v22 = 1; /*0x64b84c*/
          }
          else
          {
            if ( byte_A8ED74 ) /*0x64b85d*/
              Debug::Log(); /*0x64b864*/
            Debug::Log(); /*0x64b87c*/
            DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b89b*/
            ++v10; /*0x64b8a0*/
            v22 = 0; /*0x64b8a9*/
            *v25 = v23; /*0x64b8ae*/
            LOBYTE(v23) = 1; /*0x64b8b7*/
            v7 = dword_A802CC; /*0x64b8c0*/
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
          v7 = dword_A802CC; /*0x64b919*/
          LOBYTE(v23) = 0; /*0x64b91f*/
        }
      }
      else if ( v8 == 4 ) /*0x64b928*/
      {
        if ( byte_A8ED74 ) /*0x64b931*/
        {
          Debug::Log(); /*0x64b938*/
          v7 = dword_A802CC; /*0x64b93d*/
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
      if ( dword_A8B24C == 2 ) /*0x64b981*/
        v12 = dword_A8B554 * (((unsigned int)dword_A8ED84 + dword_A8B554 + a3 - 1) / dword_A8B554); /*0x64b9a0*/
      else
        v12 = (unsigned int)dword_A8ED84 + a3; /*0x64b9b1*/
      v13 = dword_A83D4C; /*0x64b9b9*/
      *(int *)((char *)&dword_A802D7 + 111 * v7) = v12; /*0x64b9bf*/
      byte_A802D6[111 * dword_A802CC] = *((_BYTE *)v13 + 48); /*0x64b9d4*/
      byte_A802D5[111 * dword_A802CC] &= ~1u; /*0x64b9f0*/
      if ( dword_8B41F8 >= 0x4000 ) /*0x64ba01*/
        break; /*0x64ba01*/
      v14 = dword_A83A54[dword_A802CC]; /*0x64ba12*/
      v15 = &byte_A802D4[111 * dword_A802CC]; /*0x64ba19*/
      v16 = &byte_8B4204[111 * dword_8B4200]; /*0x64ba2c*/
      qmemcpy(v16, v15, 0x6Cu); /*0x64ba38*/
      v15 += 108; /*0x64ba38*/
      v16 += 108; /*0x64ba38*/
      *(_WORD *)v16 = *(_WORD *)v15; /*0x64ba3a*/
      v16[2] = v15[2]; /*0x64ba3c*/
      dword_A70204[dword_8B4200] = v14; /*0x64ba43*/
      dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64ba5b*/
      ++dword_8B41F8; /*0x64ba6a*/
      switch ( (_BYTE)v29 ) /*0x64ba70*/
      {
        case 4: /*0x64ba70*/
          *v25 = v23; /*0x64bbc1*/
          if ( v22 ) /*0x64bbc3*/
          {
            qmemcpy((void *)(a1 + a4), (char *)&dword_A802DB + 111 * dword_A802CC, v9); /*0x64bbec*/
            a4 += v9; /*0x64bc06*/
            if ( dword_A802C8 == 1 || v28 == a5 - 1 ) /*0x64bc1d*/
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
          qmemcpy(v18, (char *)&dword_A802DB + 111 * dword_A802CC, v9); /*0x64bce2*/
          v26 = &v18[v9]; /*0x64bcf5*/
          v17 = a4 + v9 + 2; /*0x64bcf9*/
          break;
        case 0x1B: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 27; /*0x64bb6d*/
          qmemcpy((void *)(a1 + a4 + 1), (const void *)(111 * dword_A802CC + 11010785), v9); /*0x64bb93*/
          a4 += v9 + 1; /*0x64bba7*/
          goto LABEL_47; /*0x64bbae*/
        case 0x1F: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 31; /*0x64bad9*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DF + 111 * dword_A802CC, v9); /*0x64baff*/
          a4 += v9 + 1; /*0x64bb18*/
          qmemcpy( /*0x64bb3b*/
            (void *)(a1 + a4),
            *(const void **)((char *)&dword_A802DB + 111 * dword_A802CC),
            *(int *)((char *)&dword_A802DF + 111 * dword_A802CC));
          v17 = *(int *)((char *)&dword_A802DF + 111 * dword_A802CC) + a4; /*0x64bb5d*/
          break;
        default:
          *(_BYTE *)(a1 + a4) = v29; /*0x64ba89*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DB + 111 * dword_A802CC, v9); /*0x64bab0*/
          a4 += v9 + 1; /*0x64bac4*/
          goto LABEL_47; /*0x64bacb*/
      }
      a4 = v17; /*0x64bcfd*/
LABEL_47:
      ++v28; /*0x64bd04*/
      v19 = &byte_A802D4[111 * dword_A802CC]; /*0x64bd22*/
      v20 = dword_A802C8; /*0x64bd29*/
      qmemcpy(v31, v19, sizeof(v31)); /*0x64bd2e*/
      v19 += 108; /*0x64bd2e*/
      v32 = *(_WORD *)v19; /*0x64bd30*/
      v33 = v19[2]; /*0x64bd34*/
      if ( dword_A802C8 ) /*0x64bd35*/
      {
        v7 = ((_BYTE)dword_A802CC + 1) & 0x7F; /*0x64bd3a*/
        dword_A802CC = v7; /*0x64bd3e*/
        --dword_A802C8; /*0x64bd44*/
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
  v6 = dword_8B4200; /*0x64be1a*/
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
          v6 = dword_8B4200; /*0x64c250*/
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
      dword_AC50FC[v17] = 1; /*0x64bf97*/
      if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64bfac*/
        Debug::Log(); /*0x64bfba*/
      v36 = &a1[v3]; /*0x64bfe0*/
      v42 = (char *)&unk_AFA46D + 640 * v17; /*0x64bfe4*/
      while ( dword_8B41F8 < 0x4000 ) /*0x64bff2*/
      {
        v19 = &byte_8B4204[111 * dword_8B4200]; /*0x64c00c*/
        qmemcpy(v19, v45, 0x6Cu); /*0x64c013*/
        v19 += 108; /*0x64c013*/
        *(_WORD *)v19 = v45[27]; /*0x64c015*/
        v19[2] = BYTE2(v45[27]); /*0x64c017*/
        dword_A70204[dword_8B4200] = timeGetTime(); /*0x64c028*/
        dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64c047*/
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
        dword_AC50FC[v17] = v43; /*0x64c091*/
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
      v6 = dword_8B4200; /*0x64c276*/
    }
    if ( dword_8B41F8 >= 0x4000 ) /*0x64c289*/
    {
      if ( LOBYTE(v45[0]) == 31 ) /*0x64c357*/
        __3_YAXPAX_Z(v14); /*0x64c35a*/
      return -1; /*0x64c35a*/
    }
    v30 = &byte_8B4204[111 * v6]; /*0x64c29e*/
    qmemcpy(v30, v45, 0x6Cu); /*0x64c2a5*/
    v30 += 108; /*0x64c2a5*/
    *(_WORD *)v30 = v45[27]; /*0x64c2a7*/
    v30[2] = BYTE2(v45[27]); /*0x64c2a9*/
    dword_A70204[dword_8B4200] = timeGetTime(); /*0x64c2bd*/
    v6 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64c2d6*/
    v3 += v38 + 1; /*0x64c2de*/
    v29 = -1 - v38 + v34 == 0; /*0x64c2e8*/
    dword_8B4200 = v6; /*0x64c2ea*/
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
  v33 = dword_AC50FC[v22]; /*0x64c11c*/
  v34 += -1 - v11; /*0x64c126*/
  v23 = (char *)&unk_AFA468 + 640 * v22; /*0x64c130*/
  v14 = *(char **)v23; /*0x64c136*/
  *(_DWORD *)((char *)&v45[1] + 3) = *(_DWORD *)v23; /*0x64c138*/
  HIBYTE(v45[2]) = v23[4]; /*0x64c13f*/
  if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c151*/
  {
    Debug::Log(); /*0x64c165*/
    v6 = dword_8B4200; /*0x64c16a*/
  }
  if ( !v33 ) /*0x64c179*/
    goto LABEL_40; /*0x64c179*/
  v24 = (void **)((char *)&unk_AFA46D + 640 * v22); /*0x64c185*/
  while ( dword_8B41F8 < 0x4000 ) /*0x64c19b*/
  {
    v25 = &byte_8B4204[111 * v6]; /*0x64c1b0*/
    qmemcpy(v25, v45, 0x6Cu); /*0x64c1b7*/
    v25 += 108; /*0x64c1b7*/
    *(_WORD *)v25 = v45[27]; /*0x64c1b9*/
    v25[2] = BYTE2(v45[27]); /*0x64c1bb*/
    v26 = v24; /*0x64c1cc*/
    dword_A70204[dword_8B4200] = timeGetTime(); /*0x64c1d1*/
    v41 = (void **)((char *)v24 + 5); /*0x64c1e8*/
    v6 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64c1ec*/
    ++dword_8B41F8; /*0x64c1f3*/
    v27 = v33 - 1; /*0x64c1fd*/
    dword_8B4200 = v6; /*0x64c200*/
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
  int nextArrayIndex; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int i; // esi
  int v10; // eax
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
  EventClass *v21; // ecx
  char *v22; // esi
  char *v23; // edi
  int *ptr_C; // eax
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
  int *v43; // eax
  wchar_t *v44; // [esp-10h] [ebp-60h]
  HouseClass *v45; // [esp+0h] [ebp-50h]
  int v46; // [esp+10h] [ebp-40h]
  int v47; // [esp+14h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-3Ch]
  int v49; // [esp+18h] [ebp-38h]
  int v50; // [esp+1Ch] [ebp-34h]
  int v51; // [esp+20h] [ebp-30h]
  int v52; // [esp+24h] [ebp-2Ch]
  int v53; // [esp+28h] [ebp-28h]
  char v54; // [esp+2Ch] [ebp-24h]
  int v55; // [esp+30h] [ebp-20h]
  char v56; // [esp+34h] [ebp-1Ch]
  char Destination[20]; // [esp+38h] [ebp-18h] BYREF
  char v58; // [esp+4Ch] [ebp-4h]

  nextArrayIndex = dword_A80238; /*0x64c384*/
  v4 = dword_8B41F8; /*0x64c38d*/
  v5 = 0; /*0x64c395*/
  v50 = dword_8B41F8; /*0x64c399*/
  v51 = dword_A80238; /*0x64c39d*/
  if ( dword_8B41F8 > 0 ) /*0x64c3a1*/
  {
    v6 = dword_A8B1DC; /*0x64c3a3*/
    do /*0x64c40b*/
    {
      if ( byte_8B4204[111 * (((_WORD)v5 + (_WORD)dword_8B41FC) & 0x3FFF)] != 28 ) /*0x64c3c3*/
      {
        v7 = *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)v5 + (_WORD)dword_8B41FC) & 0x3FFF)); /*0x64c3c5*/
        if ( v7 > dword_A8B1F8 && v7 < v6 ) /*0x64c3d8*/
        {
          Debug::Log(); /*0x64c3e1*/
          v6 = dword_A8B1DC; /*0x64c3fb*/
          *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)v5 + (_WORD)dword_8B41FC) & 0x3FFF)) = dword_A8B1DC; /*0x64c401*/
        }
      }
      ++v5; /*0x64c408*/
    }
    while ( v5 < v4 ); /*0x64c40b*/
  }
  if ( dword_A8E2D8 ) /*0x64c413*/
  {
    v8 = dword_A8E2DC; /*0x64c419*/
    if ( dword_A8E2DC ) /*0x64c421*/
    {
      if ( dword_A8E2E0 != -1 ) /*0x64c42e*/
      {
        for ( i = 0; i < v4; ++i ) /*0x64c438*/
        {
          if ( byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)i) & 0x3FFF)] == 19 /*0x64c466*/
            && byte_8B4206[111 * (((_WORD)dword_8B41FC + (_WORD)i) & 0x3FFF)] == dword_A8E2E0 )
          {
            v10 = *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)dword_8B41FC + (_WORD)i) & 0x3FFF)); /*0x64c468*/
            if ( v10 > dword_A8E2D8 && v10 < v8 ) /*0x64c47b*/
            {
              Debug::Log(); /*0x64c484*/
              v8 = dword_A8E2DC; /*0x64c49e*/
              *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)i + (_WORD)dword_8B41FC) & 0x3FFF)) = dword_A8E2DC; /*0x64c4a4*/
            }
          }
        }
        if ( (int)dword_A8ED84 > v8 ) /*0x64c4b8*/
        {
          dword_A8E2D8 = 0; /*0x64c4ba*/
          dword_A8E2DC = 0; /*0x64c4c0*/
          dword_A8E2E0 = -1; /*0x64c4c6*/
        }
      }
    }
  }
  v46 = 0; /*0x64c4d2*/
  if ( nextArrayIndex <= 0 ) /*0x64c4d6*/
    return 1; /*0x64cc5e*/
  v11 = dword_A83ED4; /*0x64c4dc*/
  while ( 1 ) /*0x64c4ec*/
  {
    v12 = *(&dword_A8022C->ptr_0 + v46); /*0x64c4ec*/
    v47 = v12; /*0x64c4f1*/
    if ( v12 ) /*0x64c4f5*/
    {
      if ( *(_BYTE *)(v12 + 492) || *(_BYTE *)(v12 + 493) ) /*0x64c505*/
        break; /*0x64c505*/
    }
LABEL_119:
    if ( ++v46 >= v51 ) /*0x64cc4c*/
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
    if ( dword_A83ED0 > 0 ) /*0x64cafe*/
    {
      while ( 1 ) /*0x64cb0a*/
      {
        v36 = 0; /*0x64cb0a*/
        if ( v34 != -1 ) /*0x64cb0f*/
        {
          v36 = byte_A83EE8[111 * (unsigned __int8)(v11 + v33)] != (char)v34; /*0x64cb28*/
          if ( byte_A83EEE[111 * (unsigned __int8)(v11 + v33)] != v35 /*0x64cb5e*/
            || *(int *)((char *)&dword_A83EEA + 111 * (unsigned __int8)(v11 + v33)) != v55
            || byte_A83EF3[111 * (unsigned __int8)(v11 + v33)] != v54
            || *(int *)((char *)&dword_A83EEF + 111 * (unsigned __int8)(v11 + v33)) != v53 )
          {
            v36 = 1; /*0x64cb60*/
          }
        }
        v34 = byte_A83EE8[111 * (unsigned __int8)(v11 + v33)]; /*0x64cb72*/
        v37 = (char *)&dword_A83EEA + 111 * (unsigned __int8)(v11 + v33); /*0x64cb7a*/
        v38 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v11 + v33); /*0x64cb81*/
        v55 = *(_DWORD *)v37; /*0x64cb8a*/
        v56 = v37[4]; /*0x64cb91*/
        v53 = *(_DWORD *)v38; /*0x64cb97*/
        v54 = v38[4]; /*0x64cb9e*/
        if ( v36 ) /*0x64cba2*/
        {
          if ( v33 - v48 > 1 ) /*0x64cbaf*/
          {
            ProcessNetworkMapEvent(v48, v33 - v48); /*0x64cbb1*/
            v11 = dword_A83ED4; /*0x64cbb6*/
          }
          v48 = v33; /*0x64cbbc*/
        }
        else if ( v33 == dword_A83ED0 - 1 ) /*0x64cbcb*/
        {
          v39 = v33 - v48 + 1; /*0x64cbd5*/
          if ( v39 > 1 ) /*0x64cbd9*/
          {
            ProcessNetworkMapEvent(v48, v39); /*0x64cbdb*/
            v11 = dword_A83ED4; /*0x64cbe0*/
          }
        }
        if ( ++v33 >= dword_A83ED0 ) /*0x64cbee*/
          break; /*0x64cbee*/
        v35 = v56; /*0x64cb06*/
      }
    }
    if ( dword_A83ED0 ) /*0x64cbfb*/
    {
      while ( 1 ) /*0x64cc0a*/
      {
        EventClass::ProcessEvent((EventClass *)((char *)&unk_A83EDC + 111 * v11)); /*0x64cc0a*/
        if ( !dword_A83ED0 ) /*0x64cc16*/
          break; /*0x64cc16*/
        v11 = (unsigned __int8)(dword_A83ED4 + 1); /*0x64cc21*/
        dword_A83ED4 = v11; /*0x64cc28*/
        if ( !--dword_A83ED0 ) /*0x64cc33*/
          goto LABEL_119; /*0x64cc33*/
      }
      v11 = dword_A83ED4; /*0x64cc37*/
    }
    goto LABEL_119; /*0x64cc37*/
  }
  v14 = a1; /*0x64c525*/
  while ( 1 ) /*0x64c536*/
  {
    v15 = ((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c536*/
    v52 = byte_8B4206[111 * v15]; /*0x64c54c*/
    if ( v52 != *(_DWORD *)(v47 + 48) ) /*0x64c550*/
      goto LABEL_96; /*0x64c550*/
    v16 = *(int *)((char *)&dword_8B4207 + 111 * v15); /*0x64c556*/
    if ( (int)dword_A8ED84 < v16 || (byte_8B4205[111 * v15] & 1) != 0 ) /*0x64c573*/
      goto LABEL_96; /*0x64c573*/
    if ( (int)dword_A8ED84 <= v16 /*0x64c5a9*/
      || byte_8B4204[111 * v15] == 28
      || !*(_DWORD *)&dword_A8B238
      || *(_DWORD *)&dword_A8B238 == 5 )
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
    v11 = dword_A83ED4; /*0x64c632*/
LABEL_96:
    v49 = ++v13; /*0x64cade*/
    if ( v13 >= v50 ) /*0x64cae2*/
      goto LABEL_97; /*0x64cae2*/
  }
  v17 = byte_8B4204[111 * v15]; /*0x64c63d*/
  if ( v17 == 19 ) /*0x64c647*/
  {
    ptr_C = &dword_A8022C->ptr_0; /*0x64c7bf*/
    v25 = 0; /*0x64c7cc*/
    while ( 1 ) /*0x64c7d3*/
    {
      v26 = *ptr_C; /*0x64c7d3*/
      if ( *ptr_C ) /*0x64c7d3*/
      {
        if ( *(_DWORD *)(v26 + 48) == v52 ) /*0x64c7dc*/
          break; /*0x64c7dc*/
      }
      ++v25; /*0x64c7de*/
      ++ptr_C; /*0x64c7df*/
      if ( v25 >= v51 ) /*0x64c7e3*/
        goto LABEL_57; /*0x64c7e3*/
    }
    *(_BYTE *)(v26 + 584) = 1; /*0x64c7e7*/
LABEL_57:
    if ( Network::CountDisconnectedHouses((Network *)v26) == 1 ) /*0x64c7f8*/
    {
      if ( *(_DWORD *)&dword_A8B238 != 4 || byte_A8F900 ) /*0x64c809*/
      {
LABEL_66:
        if ( !Network::processQueue((Network *)v26) ) /*0x64c852*/
          Network::SendOffer((Network *)v26); /*0x64c85d*/
        goto LABEL_68; /*0x64c85d*/
      }
      byte_A8B8C1 = 1; /*0x64c80b*/
      Timer::UpdateDelta(); /*0x64c812*/
      ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x64c819*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 && !byte_A8F900 && dword_A83D4C && dword_A83D4C == (Object *)v26 ) /*0x64c83a*/
    {
      Debug::Log(); /*0x64c841*/
      ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x64c84b*/
    }
    goto LABEL_66; /*0x64c84b*/
  }
  if ( v17 == 12 || v17 == 34 ) /*0x64c659*/
  {
LABEL_68:
    if ( byte_A8ED74 && byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c885*/
      Debug::Log(); /*0x64c8b3*/
    v27 = ((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c8cd*/
    if ( byte_8B4206[111 * v27] != dword_A83D4C->Object_field_0x30 ) /*0x64c8e2*/
    {
      if ( byte_8B4204[111 * v27] == 19 ) /*0x64c923*/
      {
        Debug::Log(); /*0x64c935*/
        if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x64c94a*/
        {
          HandlePlayerDisconnection(v46, 0); /*0x64c9be*/
        }
        else if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x64c954*/
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
              HandleNetworkPlayerDisconnect(v46, 0); /*0x64c9b1*/
            }
          }
        }
        if ( (dword_A8D5F8 & 2) != 0 && byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c9ea*/
        {
          v31 = v47; /*0x64c9f0*/
          *(_BYTE *)(v47 + 492) = 0; /*0x64c9f4*/
          *(_DWORD *)(v47 + 588) = *(_DWORD *)&dword_8871E0->__pad_13BC[120]; /*0x64ca07*/
          HouseClass::CanDetect(v45); /*0x64ca0d*/
          if ( g_INI_Key_Computer ) /*0x64ca19*/
          {
            strncpy(Destination, g_INI_Key_Computer, 0x14u); /*0x64ca2d*/
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
          StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Queue_CPP, 5672); /*0x64ca6b*/
          wcsncpy((wchar_t *)(v31 + 90154), StringCSF, 0x15u); /*0x64ca78*/
          *(_WORD *)(v31 + 90194) = 0; /*0x64ca8c*/
          Debug::Log(); /*0x64ca95*/
          --dword_A8B54C; /*0x64caa3*/
        }
      }
      goto LABEL_95; /*0x64caa3*/
    }
    v28 = dword_A70204[v27]; /*0x64c8e4*/
    dword_8373A0 = timeGetTime() - v28; /*0x64c8f3*/
    v21 = (EventClass *)&byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)]; /*0x64c90a*/
LABEL_73:
    EventClass::ProcessEvent(v21); /*0x64c911*/
    goto LABEL_95; /*0x64c916*/
  }
  if ( v17 != 28 ) /*0x64c662*/
  {
    v20 = dword_A70204[v15]; /*0x64c6fd*/
    dword_8373A0 = timeGetTime() - v20; /*0x64c70c*/
    v21 = (EventClass *)&byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)]; /*0x64c723*/
    if ( LOBYTE(v21->EventClass_field_0x0) == 4 ) /*0x64c733*/
    {
      if ( dword_A83ED0 < 256 ) /*0x64c743*/
      {
        v22 = &byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)]; /*0x64c762*/
        v23 = (char *)&unk_A83EDC + 111 * dword_A83ED8; /*0x64c774*/
        qmemcpy(v23, v22, 0x6Cu); /*0x64c77b*/
        v22 += 108; /*0x64c77b*/
        v23 += 108; /*0x64c77b*/
        *(_WORD *)v23 = *(_WORD *)v22; /*0x64c77d*/
        v23[2] = v22[2]; /*0x64c77f*/
        dword_A8ADDC[dword_A83ED8] = timeGetTime(); /*0x64c78c*/
        dword_A83ED8 = (unsigned __int8)(dword_A83ED8 + 1); /*0x64c7a6*/
        ++dword_A83ED0; /*0x64c7ac*/
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
    if ( (int)dword_A8ED84 - v18 < v19 ) /*0x64c683*/
    {
      v19 -= (int)dword_A8ED84 - v18; /*0x64c685*/
LABEL_43:
      if ( v19 ) /*0x64c689*/
        goto LABEL_95; /*0x64c689*/
    }
  }
  if ( *(wchar_t **)((char *)&dword_8B4207 + 111 * v15) != dword_A8ED84 /*0x64c6f2*/
    || dword_B04474[(unsigned __int8)(*(int *)((char *)&dword_8B4207
                                             + 111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF))
                                    - byte_8B4211[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)])] == *(int *)((char *)&dword_8B420B + 111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)) )
  {
LABEL_95:
    v14 = a1; /*0x64caa8*/
    byte_8B4205[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)] |= 1u; /*0x64caca*/
    v11 = dword_A83ED4; /*0x64cad1*/
    goto LABEL_96; /*0x64cad1*/
  }
  if ( byte_B04880 ) /*0x64cc68*/
  {
    v41 = 0; /*0x64cc6e*/
    v42 = 256; /*0x64cc70*/
    do /*0x64cc9f*/
    {
      LogMultiplayToSync_MPDEBUG( /*0x64cc98*/
        v41++,
        (unsigned __int8 *)&byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)v49) & 0x3FFF)]);
      --v42; /*0x64cc9e*/
    }
    while ( v42 ); /*0x64cc9f*/
  }
  else
  {
    Multiplay::LogToSYNC_NOMPDEBUG((Multiplay *)&byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)]); /*0x64ccba*/
  }
  ++dword_A8DAB4; /*0x64ccdd*/
  v44 = GetStringCSF(aTxtStop, 0, g_Str_File_Queue_CPP, 5723); /*0x64ccf7*/
  v43 = (int *)GetStringCSF(aTxtOutOfSync, 0, g_Str_File_Queue_CPP, 5722); /*0x64cd02*/
  Dialog::ShowMessageBox(v43, v44, 0, 0, 0, (int)v45); /*0x64cd0c*/
  --dword_A8DAB4; /*0x64cd1b*/
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
    while ( a4 != byte_A83EE7[111 * (unsigned __int8)(dword_A83ED4 + a1)] /*0x64cd67*/
         || a3 != *(int *)((char *)&dword_A83EE3 + 111 * (unsigned __int8)(dword_A83ED4 + a1)) )
    {
      if ( ++a1 > v5 ) /*0x64cd6c*/
        return; /*0x64cd6c*/
    }
    v6 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(dword_A83ED4 + a1); /*0x64cd7e*/
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
  if ( byte_A83EF3[111 * (unsigned __int8)(a1 + dword_A83ED4)] == 11 ) /*0x64cdd3*/
  {
    v4 = (_DWORD *)Network_Process_6E7C20((char *)&dword_A83EEF + 111 * (unsigned __int8)(a1 + dword_A83ED4)); /*0x64cde9*/
    if ( v4 ) /*0x64cdf0*/
    {
      if ( v4 != unk_ABDC50 ) /*0x64cdfb*/
      {
        v73 = (_DWORD *)v4[9]; /*0x64ce0b*/
        if ( v73 != (_DWORD *)dword_AC6640 ) /*0x64ce0f*/
        {
          ObjectVector::Construct(&v77, 0, 0); /*0x64ce2b*/
          v5 = v2 + a2; /*0x64ce30*/
          v77 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x64ce33*/
          v82 = 10; /*0x64ce3d*/
          v81 = 0; /*0x64ce45*/
          v6 = v2; /*0x64ce4d*/
          for ( i = v2 + a2; v6 < v5; ++v6 ) /*0x64ce53*/
          {
            v7 = BuildingLoadQueue::Find((_BYTE *)&dword_A83EE3 + 111 * (unsigned __int8)(v6 + dword_A83ED4)); /*0x64ce72*/
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
            v100 = &DynamicVectorClass<Cell>::`vftable'; /*0x64d07c*/
            v105 = 10; /*0x64d087*/
            v104 = 0; /*0x64d08e*/
            BoolVector::Construct(0, 0); /*0x64d095*/
            v99 = 10; /*0x64d09a*/
            v22 = 0; /*0x64d09e*/
            v23 = NumOfElements; /*0x64d0a0*/
            v94 = &DynamicVectorClass<bool>::`vftable'; /*0x64d0a4*/
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
                  v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73); /*0x64d235*/
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
                        v63 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v76); /*0x64d7da*/
                        ScriptAction::GetWaypointCoords(&v125, v63); /*0x64d7e7*/
                        WaypointCoords = ScriptAction::GetWaypointCoords(v134, *((_DWORD **)Block + v28)); /*0x64d7fb*/
                        v128 = *(_DWORD *)WaypointCoords; /*0x64d802*/
                        v65 = v2; /*0x64d809*/
                        if ( v2 <= i ) /*0x64d814*/
                        {
                          while ( WaypointCoords[4] != byte_A83EE7[111 * (unsigned __int8)(v65 + dword_A83ED4)] /*0x64d841*/
                               || v128 != *(int *)((char *)&dword_A83EE3 + 111 * (unsigned __int8)(v65 + dword_A83ED4)) )
                          {
                            if ( ++v65 > i ) /*0x64d84a*/
                              goto LABEL_94; /*0x64d84a*/
                          }
                          v66 = v126; /*0x64d863*/
                          v67 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v65 + dword_A83ED4); /*0x64d86a*/
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
              v35 = (*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73) + 80) >> 8) & 1; /*0x64d2c2*/
              v36 = *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73) + 283) + 4 * v35; /*0x64d2df*/
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
              TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&v73, *(_DWORD *)(v127 + 1460), 1); /*0x64d42c*/
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
                v42 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v75); /*0x64d4df*/
                if ( !LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v75, 1) ) /*0x64d4f0*/
                  goto LABEL_75; /*0x64d4f0*/
                v43 = MapClass::GetTileIndex( /*0x64d520*/
                        &dword_87F7E8,
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
                  v51 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73) + 80) >> 8; /*0x64d61d*/
                  LOBYTE(v51) = v51 & 1; /*0x64d620*/
                  v71 = v51; /*0x64d623*/
                  v52 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v75) + 80) >> 8; /*0x64d639*/
                  LOBYTE(v52) = v52 & 1; /*0x64d63c*/
                  Pathfinding::CalcDistance((int)unk_87E8B8, (__int16 *)&v75, (__int16 *)&v73, (int)v29, v52, v71, -1); /*0x64d64b*/
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
                v53 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v76); /*0x64d6a9*/
                ScriptAction::GetWaypointCoords(&v123, v53); /*0x64d6b6*/
                v54 = ScriptAction::GetWaypointCoords(v133, v29); /*0x64d6c3*/
                v129 = *(_DWORD *)v54; /*0x64d6ca*/
                v55 = v84; /*0x64d6d1*/
                if ( v84 <= i ) /*0x64d6de*/
                {
                  while ( v54[4] != byte_A83EE7[111 * (unsigned __int8)(v55 + dword_A83ED4)] /*0x64d70b*/
                       || v129 != *(int *)((char *)&dword_A83EE3 + 111 * (unsigned __int8)(v55 + dword_A83ED4)) )
                  {
                    if ( ++v55 > i ) /*0x64d714*/
                      goto LABEL_83; /*0x64d714*/
                  }
                  v56 = v124; /*0x64d72d*/
                  v57 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v55 + dword_A83ED4); /*0x64d734*/
                  *(_DWORD *)v57 = v123; /*0x64d73b*/
                  v57[4] = v56; /*0x64d73d*/
                }
LABEL_83:
                v58 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v76); /*0x64d740*/
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
              v69 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v101 + 2 * k); /*0x64d8c1*/
              v70 = v69[80]; /*0x64d8c6*/
              BYTE1(v70) &= ~0x80u; /*0x64d8d1*/
              ++k; /*0x64d8d4*/
            }
            v94 = &VectorClass<bool>::`vftable'; /*0x64d8e6*/
            if ( v95 && BYTE1(v97) ) /*0x64d8f8*/
            {
              __3_YAXPAX_Z(v95); /*0x64d8fb*/
              v95 = 0; /*0x64d903*/
            }
            BYTE1(v97) = 0; /*0x64d90e*/
            v96 = 0; /*0x64d915*/
            v100 = &VectorClass<Cell>::`vftable'; /*0x64d919*/
            if ( v101 && BYTE1(v103) ) /*0x64d92f*/
            {
              __3_YAXPAX_Z(v101); /*0x64d932*/
              v101 = 0; /*0x64d93a*/
            }
            BYTE1(v103) = 0; /*0x64d945*/
            v102 = 0; /*0x64d94e*/
            __3_YAXPAX_Z(Base); /*0x64d955*/
          }
          v77 = &VectorClass<ObjectClass *>::`vftable'; /*0x64d963*/
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
void Network_Process_64D990(ObjectClass *this)
{
  int v1; // edx
  int grindingAnimHandle; // eax

  v1 = *(_DWORD *)&FootClass_Array.?; /*0x64d990*/
  if ( *(_DWORD *)&FootClass_Array.? ) /*0x64d999*/
  {
    grindingAnimHandle = FootClass_Array.?; /*0x64d9a1*/
    do /*0x64d9d5*/
    {
      if ( (*((_BYTE *)&FootClass_Array.?[1] + 111 * grindingAnimHandle + 1) & 1) == 0 /*0x64d9bd*/
        && *(int *)&stru_A8EB00.?[416] <= *(int *)((char *)&FootClass_Array.?[1] + 111 * grindingAnimHandle + 3) )
      {
        break; /*0x64d9bd*/
      }
      if ( !v1 ) /*0x64d9c1*/
        break; /*0x64d9c1*/
      grindingAnimHandle = ((_WORD)grindingAnimHandle + 1) & 0x3FFF; /*0x64d9c4*/
      --v1; /*0x64d9c9*/
      FootClass_Array.? = grindingAnimHandle; /*0x64d9ca*/
      *(_DWORD *)&FootClass_Array.? = v1; /*0x64d9cf*/
    }
    while ( v1 ); /*0x64d9d5*/
  }
}



// ==== 0x0064D9E0  ObjectClass::Network_Process_64D9E0  this=ObjectClass  sig=csp ====
int Network_Process_64D9E0(ObjectClass *this)
{
  int result; // eax
  int v2; // edi
  __int16 grindingAnimHandle; // cx
  int v4; // esi
  int i; // esi
  int Buffer; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)&stru_A8EB00.?[416] || (result = *(_DWORD *)&dword_A8B238) == 0 ) /*0x64d9f4*/
  {
    v2 = 0; /*0x64da00*/
    Buffer = 0; /*0x64da06*/
    if ( *(int *)&FootClass_Array.? > 0 ) /*0x64da0a*/
    {
      grindingAnimHandle = FootClass_Array.?; /*0x64da0c*/
      v4 = *(_DWORD *)&FootClass_Array.?; /*0x64da13*/
      do /*0x64da37*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] == *(int *)((char *)&FootClass_Array.?[1] /*0x64da32*/
                                                      + 111 * (grindingAnimHandle & 0x3FFF)
                                                      + 3)
          && (*((_BYTE *)&FootClass_Array.?[1] + 111 * (grindingAnimHandle & 0x3FFF) + 1) & 1) == 0 )
        {
          ++v2; /*0x64da34*/
        }
        ++grindingAnimHandle; /*0x64da35*/
        --v4; /*0x64da36*/
      }
      while ( v4 ); /*0x64da37*/
      Buffer = v2; /*0x64da39*/
    }
    FileClass::Write(&dword_A8D58C, &Buffer, 4u); /*0x64da4a*/
    result = *(_DWORD *)&FootClass_Array.?; /*0x64da4f*/
    for ( i = 0; i < *(int *)&FootClass_Array.?; ++i ) /*0x64da59*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] == *(int *)((char *)&FootClass_Array.?[1] /*0x64da85*/
                                                    + 111 * ((LOWORD(FootClass_Array.?) + (_WORD)i) & 0x3FFF)
                                                    + 3)
        && (*((_BYTE *)&FootClass_Array.?[1] + 111 * ((LOWORD(FootClass_Array.?) + (_WORD)i) & 0x3FFF) + 1) & 1) == 0 )
      {
        FileClass::Write( /*0x64da96*/
          &dword_A8D58C,
          (char *)&FootClass_Array.?[1] + 111 * ((LOWORD(FootClass_Array.?) + (_WORD)i) & 0x3FFF),
          0x6Fu);
        --Buffer; /*0x64da9b*/
      }
      result = *(_DWORD *)&FootClass_Array.?; /*0x64da9f*/
    }
  }
  return result; /*0x64daa9*/
}



// ==== 0x0064DAB0  ObjectClass::ComputeNetworkFrameCRC  this=ObjectClass  sig=csp ====
int ComputeNetworkFrameCRC(TechnoClass *this)
{
  unsigned int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int i; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  _DWORD *Value; // eax
  int j; // esi
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  HouseClass *v16; // edx
  int ptr_0; // ecx
  int *v18; // ebp
  int v19; // edi
  bool v20; // cc
  _DWORD *v21; // esi
  int v22; // edi
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  int k; // ebp
  _DWORD *v27; // esi
  int v28; // edi
  int v29; // ebx
  int v30; // edx
  int v32; // [esp+10h] [ebp-14h] BYREF
  _DWORD v33[2]; // [esp+14h] [ebp-10h] BYREF
  int v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]

  v1 = 0; /*0x64dab9*/
  v2 = 0; /*0x64dabe*/
  for ( *(_DWORD *)dword_AC51FC = 0; v2 < dword_A83DF8; *(_DWORD *)dword_AC51FC = v1 ) /*0x64dac8*/
  {
    v3 = *((_DWORD *)dword_A83DEC + v2); /*0x64dad3*/
    v4 = *(_DWORD *)(v3 + 156); /*0x64dadc*/
    v5 = *(_DWORD *)(v3 + 160); /*0x64dae2*/
    v35 = *(_DWORD *)(v3 + 164); /*0x64daf3*/
    v1 = v4 / 10 /*0x64db41*/
       + ((v5 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &v32) >> 7) + 1) >> 1)
       + (*(_DWORD *)dword_AC51FC >> 31)
       + 2 * *(_DWORD *)dword_AC51FC;
    ++v2; /*0x64db49*/
  }
  for ( i = 0; i < dword_8B4118; *(_DWORD *)dword_AC51FC = v1 ) /*0x64db61*/
  {
    v7 = *((_DWORD *)dword_8B410C + i); /*0x64db6d*/
    v8 = *(_DWORD *)(v7 + 156); /*0x64db76*/
    v34 = *(_DWORD *)(v7 + 160); /*0x64db7f*/
    v35 = *(_DWORD *)(v7 + 164); /*0x64db8a*/
    v9 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v7 + 904), &v32) >> 7) + 1) >> 1); /*0x64dbad*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(v7 + 928), v33); /*0x64dbb3*/
    v1 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1) /*0x64dc09*/
       + v9
       + ((v34 / 10) << 16)
       + v8 / 10
       + (*(_DWORD *)dword_AC51FC >> 31)
       + 2 * *(_DWORD *)dword_AC51FC;
    ++i; /*0x64dc0b*/
  }
  for ( j = 0; j < dword_A8EB50; *(_DWORD *)dword_AC51FC = v1 ) /*0x64dc23*/
  {
    v12 = *((_DWORD *)dword_A8EB44 + j); /*0x64dc2f*/
    v13 = *(_DWORD *)(v12 + 156); /*0x64dc38*/
    v14 = *(_DWORD *)(v12 + 160); /*0x64dc3e*/
    v35 = *(_DWORD *)(v12 + 164); /*0x64dc48*/
    v1 = v13 / 10 /*0x64dc9d*/
       + ((v14 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v12 + 904), v33) >> 7) + 1) >> 1)
       + (*(_DWORD *)dword_AC51FC >> 31)
       + 2 * *(_DWORD *)dword_AC51FC;
    ++j; /*0x64dca5*/
  }
  v15 = dword_A80238; /*0x64dcb3*/
  if ( dword_A80238 > 0 ) /*0x64dcbb*/
  {
    v16 = dword_A8022C; /*0x64dcbd*/
    do /*0x64dce2*/
    {
      ptr_0 = v16->ptr_0; /*0x64dcc3*/
      v16 = (HouseClass *)((char *)v16 + 4); /*0x64dcc7*/
      v1 = *(unsigned __int8 *)(ptr_0 + 577) + (v1 >> 31) + 2 * v1; /*0x64dcda*/
      --v15; /*0x64dcdc*/
      *(_DWORD *)dword_AC51FC = v1; /*0x64dcdd*/
    }
    while ( v15 ); /*0x64dce2*/
  }
  v18 = dword_8A0370; /*0x64dce4*/
  do /*0x64dd92*/
  {
    v19 = 0; /*0x64dcec*/
    v20 = *v18 <= 0; /*0x64dcee*/
    v32 = 0; /*0x64dcf0*/
    if ( !v20 ) /*0x64dcf4*/
    {
      do /*0x64dd83*/
      {
        v21 = *(_DWORD **)(*(v18 - 3) + 4 * v19); /*0x64dcfd*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v21 + 44))(v21) != 4 /*0x64dd19*/
          || (*(int (__stdcall **)(_DWORD *))(v21[1] + 16))(v21 + 1) != -2 )
        {
          v22 = v21[39]; /*0x64dd23*/
          v23 = v21[40]; /*0x64dd25*/
          v24 = *v21; /*0x64dd2b*/
          v35 = v21[41]; /*0x64dd2d*/
          v25 = v22 / 10 + ((v23 / 10) << 16) + (*(int (__thiscall **)(_DWORD *))(v24 + 44))(v21); /*0x64dd5d*/
          v19 = v32; /*0x64dd67*/
          *(_DWORD *)dword_AC51FC = v25 + (*(_DWORD *)dword_AC51FC >> 31) + 2 * *(_DWORD *)dword_AC51FC; /*0x64dd73*/
        }
        v20 = ++v19 < *v18; /*0x64dd7d*/
        v32 = v19; /*0x64dd7f*/
      }
      while ( v20 ); /*0x64dd83*/
    }
    v18 += 6; /*0x64dd89*/
  }
  while ( (int)v18 < (int)&dword_8A03E8 ); /*0x64dd92*/
  for ( k = 0; k < dword_87F788; ++k ) /*0x64dda1*/
  {
    v27 = (_DWORD *)*((_DWORD *)dword_87F77C + k); /*0x64ddad*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v27 + 44))(v27) != 4 /*0x64ddc9*/
      || (*(int (__stdcall **)(_DWORD *))(v27[1] + 16))(v27 + 1) != -2 )
    {
      v28 = v27[39]; /*0x64ddd3*/
      v29 = v27[40]; /*0x64ddd5*/
      v30 = *v27; /*0x64dddb*/
      v35 = v27[41]; /*0x64dddd*/
      *(_DWORD *)dword_AC51FC = v28 / 10 /*0x64de1f*/
                              + ((v29 / 10) << 16)
                              + (*(int (__thiscall **)(_DWORD *))(v30 + 44))(v27)
                              + (*(_DWORD *)dword_AC51FC >> 31)
                              + 2 * *(_DWORD *)dword_AC51FC;
    }
  }
  *(_DWORD *)dword_AC51FC = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) /*0x64de54*/
                          + (*(_DWORD *)dword_AC51FC >> 31)
                          + 2 * *(_DWORD *)dword_AC51FC;
  return AllocateTriggerLog((int)dword_A8ED84 % 256); /*0x64de75*/
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
void __thiscall Multiplay::LogToSYNC_NOMPDEBUG(Multiplay *this)
{
  FILE *v1; // eax
  FILE *v2; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  char *v5; // eax
  char *v6; // eax
  char *Name; // eax
  int v8; // eax
  int i; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // ebp
  int *v13; // edi
  int nextArrayIndex; // eax
  int j; // ebp
  int v16; // edi
  int v17; // ebx
  char *v18; // eax
  int v19; // ecx
  int v20; // ebp
  int v21; // eax
  _DWORD *v22; // edi
  int v23; // ebp
  int v24; // ecx
  int *v25; // ebp
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  void *v30; // eax
  int *v31; // ebp
  int v32; // edx
  int v33; // eax
  char *v34; // edx
  int v35; // eax
  void *v36; // eax
  unsigned int v37; // ebp
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // ecx
  int v44; // ebp
  int v45; // eax
  _DWORD *v46; // edi
  int v47; // ebp
  ... [79251 chars total]



// ==== 0x006403A0  PowerClass::getDrain  this=PowerClass  sig=csp ====
char __thiscall PowerClass::getDrain(PowerClass *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch] BYREF
  int v4; // [esp+8h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+10h] [ebp-10h]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  char v9; // [esp+1Ch] [ebp-4h]

  RadarClass::Destru_vt34((RadarClass *)this); /*0x6403a3*/
  v1 = 0; /*0x6403ae*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6403b2*/
  {
    v4 = 0; /*0x6403bf*/
    v5 = 0; /*0x6403c3*/
    v6 = 0; /*0x6403c7*/
    v7 = 0; /*0x6403cb*/
    v9 = 0; /*0x6403cf*/
    v3 = 999; /*0x6403d3*/
    v8 = 0; /*0x6403db*/
    if ( !dword_A8B230[374].NeedsSaveOrLink ) /*0x6403df*/
      v1 = 5; /*0x6403e9*/
    v4 = v1 + DSurface_SidebarBounds; /*0x6403fb*/
    v5 = g_DSurface_SidebarBounds + 69; /*0x640417*/
    v6 = 8; /*0x64041b*/
    v7 = dword_B0B504; /*0x640423*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 999); /*0x640427*/
    LOBYTE(v1) = CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v3); /*0x640437*/
  }
  return v1; /*0x64043d*/
}



// ==== 0x00640450  PowerClass::getAvailable  this=PowerClass  sig=csp ====
wchar_t *__thiscall PowerClass::getAvailable(PowerClass *this, int a2)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-4h] [ebp-4h]

  if ( a2 != 999 ) /*0x640459*/
    return RadarClass::Destru_vt33((RadarClass *)this, a2); /*0x64049b*/
  v5 = *(_DWORD *)&dword_A83D4C[31].__pad_140[264]; /*0x64046c*/
  v4 = *(const wchar_t **)&dword_A83D4C[31].__pad_140[260]; /*0x64046d*/
  StringCSF = GetStringCSF(aTxtPowerDrain, 0, aDRa2mdpostPowe, 670); /*0x64047f*/
  swprintf((wchar_t *const)&stru_AC4B30.__pad_EC[276], (const size_t)StringCSF, v4, v5); /*0x64048a*/
  return (wchar_t *)&stru_AC4B30.__pad_EC[276]; /*0x640497*/
}



// ==== 0x006404B0  PowerClass::Initialize  this=PowerClass  sig=csp ====
_DWORD *__thiscall PowerClass::Initialize(PowerClass *this, char a2)
{
  RadarClass::Destruct((RadarClass *)this); /*0x6404b3*/
  if ( (a2 & 1) != 0 ) /*0x6404bd*/
    __3_YAXPAX_Z(this); /*0x6404c0*/
  return this->__pad_0; /*0x6404ca*/
}



// ==== 0x006404D0  sub_6404D0  this=-  sig=ida-proto ====
int sub_6404D0()
{
  dword_AC4E98 = 0; /*0x6404d2*/
  dword_AC4E9C = 0; /*0x6404d7*/
  dword_AC4EA0 = 0; /*0x6404dc*/
  dword_AC4EA4 = 0; /*0x6404e1*/
  return 0; /*0x6404e6*/
}



// ==== 0x006404F0  sub_6404F0  this=-  sig=ida-proto ====
void sub_6404F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6404fc*/
  dbl_AC4EB0 = Math::Sqrt(v0 + v0); /*0x64050e*/
}



// ==== 0x00640520  sub_640520  this=-  sig=ida-proto ====
void sub_640520()
{
  dbl_AC4F00 = dbl_AC4EB0 / 60.0; /*0x64052c*/
}



// ==== 0x00640540  sub_640540  this=-  sig=ida-proto ====
void sub_640540()
{
  dbl_AC4EE8 = 1.0 / dbl_AC4F00; /*0x64054c*/
}



// ==== 0x00640560  sub_640560  this=-  sig=ida-proto ====
void sub_640560()
{
  dbl_AC4EE0 = 0.0174532925199433 * 45.0; /*0x64056c*/
}



// ==== 0x00640580  sub_640580  this=-  sig=ida-proto ====
void sub_640580()
{
  dbl_AC4EB8 = 0.0174532925199433 * 60.0; /*0x64058c*/
}



// ==== 0x006405A0  sub_6405A0  this=-  sig=ida-proto ====
void sub_6405A0()
{
  dbl_AC4E88 = 0.0174532925199433 * 90.0; /*0x6405ac*/
}



// ==== 0x006405C0  sub_6405C0  this=-  sig=ida-proto ====
__int64 sub_6405C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4E88 - dbl_AC4EB8); /*0x6405d2*/
  result = Math::RoundToInt(v0 * dbl_AC4EB0 * 0.5); /*0x6405e6*/
  dword_AC4F08 = result; /*0x6405eb*/
  return result; /*0x6405f0*/
}



// ==== 0x00640600  sub_640600  this=-  sig=ida-proto ====
void sub_640600()
{
  dbl_AC4EC0 = Math::ArcTan((double)dword_AC4F08 * 0.00390625); /*0x640617*/
}



// ==== 0x00640630  sub_640630  this=-  sig=ida-proto ====
void sub_640630()
{
  dbl_AC4ED8 = Math::ArcTan((double)(2 * dword_AC4F08) / dbl_AC4EB0); /*0x640652*/
}



// ==== 0x00640660  sub_640660  this=-  sig=ida-proto ====
__int64 sub_640660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4F08) + 0.5); /*0x64067b*/
  dword_AC4EFC = result; /*0x640680*/
  return result; /*0x640686*/
}



// ==== 0x00640690  sub_640690  this=-  sig=ida-proto ====
int sub_640690()
{
  word_AC4EA8 = 0; /*0x640692*/
  word_AC4EAA = 0; /*0x640698*/
  return 0; /*0x64069e*/
}



// ==== 0x006406A0  sub_6406A0  this=-  sig=ida-proto ====
int sub_6406A0()
{
  dword_AC4EC8 = 0; /*0x6406a2*/
  dword_AC4ECC = 0; /*0x6406a7*/
  dword_AC4ED0 = 0; /*0x6406ac*/
  return 0; /*0x6406b1*/
}



// ==== 0x006406C0  sub_6406C0  this=-  sig=ida-proto ====
int sub_6406C0()
{
  dword_AC4EF8 = 0; /*0x6406c5*/
  dword_AC4EF0 = 128; /*0x6406cf*/
  dword_AC4EF4 = 128; /*0x6406d4*/
  return 128; /*0x6406d9*/
}



// ==== 0x006406E0  ObjectClass::unknown_libname_27  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_27(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6406e2*/
  return &this->AbstractClass; /*0x6406e8*/
}



// ==== 0x006406F0  ComPtr::Dtor  this=ComPtr  sig=csp ====
int __thiscall ComPtr::Dtor(ComPtr *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x6406f3*/
  if ( v2 ) /*0x6406f7*/
  {
    result = (**v2)(v2, 1); /*0x6406fd*/
    *(_DWORD *)this->__pad_0 = 0; /*0x6406ff*/
  }
  return result; /*0x640705*/
}



// ==== 0x00640710  Skirmish::RenderPreview  this=Skirmish  sig=csp ====
int __thiscall Skirmish::RenderPreview(Skirmish *this, HWND hWnd)
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
  void (__thiscall **DSurface_field_0x0)(DSurface *, int *, _DWORD, int); // esi
  int v13; // eax
  int BuildingAnimByName; // eax
  AbstractClass *v15; // ecx
  int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp+24h] [ebp-80h] BYREF
  int v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v25; // [esp+30h] [ebp-74h]
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

  result = ValidateRect(hWnd, 0); /*0x640726*/
  if ( *(_DWORD *)this ) /*0x64072c*/
  {
    DlgItem = GetDlgItem(hWnd, 1128); /*0x64073f*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x640749*/
    left = Rect.left; /*0x64075a*/
    top = Rect.top; /*0x640764*/
    v5 = *(_DWORD *)this; /*0x64076a*/
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
    v25 = v10 / 2000; /*0x6407e7*/
    v32 = left + v30 / 2 - v10 / 2000; /*0x6407fc*/
    v33 = top + v31 / 2 - v11 / 2000; /*0x640822*/
    v34 = v10 / 1000; /*0x640842*/
    v35 = v11 / 1000; /*0x640856*/
    (*((void (__thiscall **)(DSurface *, LONG *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 5))( /*0x64085d*/
      DSurface_Alternate,
      &left,
      0);
    DSurface_field_0x0 = (void (__thiscall **)(DSurface *, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0; /*0x64086c*/
    v13 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD))(**(_DWORD **)this + 120))(*(_DWORD *)this, v27, 0, 0); /*0x640875*/
    DSurface_field_0x0[2](DSurface_Alternate, &v34, *(_DWORD *)this, v13); /*0x640887*/
    HIBYTE(v23) = 0; /*0x640896*/
    if ( (stru_AC4B30.__pad_EC[628] & 1) == 0 ) /*0x64089b*/
    {
      stru_AC4B30.__pad_EC[628] |= 1u; /*0x6408a8*/
      *(_DWORD *)&stru_AC4B30.__pad_EC[612] = LoadFileSHP(aStartbutShp, (bool *)&v23 + 3); /*0x6408b2*/
    }
    v25 = VtableStub_72E280(); /*0x6408c3*/
    BuildingAnimByName = FindBuildingAnimByName(&stru_820320.?[12], 1); /*0x6408c7*/
    v15 = dword_A8B230; /*0x6408cc*/
    v16 = BuildingAnimByName; /*0x6408d2*/
    result = dword_A8B230[122].abstractFlags; /*0x6408d4*/
    if ( result > 0 && result <= 8 ) /*0x6408e5*/
    {
      v17 = 0; /*0x6408eb*/
      do /*0x640a29*/
      {
        v18 = v32 /*0x640944*/
            + v34
            * ((signed int)(1000 * (*(&v15[122].nextArrayIndex + 2 * v17) - (unsigned int)v15[122].ptr_4))
             / (int)v15[122].ptr_C)
            / 1000;
        v19 = v33 /*0x64097a*/
            + v35
            * ((signed int)(1000 * (*(&v15[122].referenceCount + 2 * v17) - (unsigned int)v15[122].ptr_8))
             / v15[122].uniqueId)
            / 1000;
        v20 = v19; /*0x64097e*/
        if ( *(_DWORD *)&stru_AC4B30.__pad_EC[612] ) /*0x640980*/
        {
          v24[0] = v18 - 9; /*0x640994*/
          v24[1] = v19 - 6; /*0x6409a3*/
          v21 = (int *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x6409b6*/
                         DSurface_Alternate,
                         v37);
          DrawToSurfaceSHP( /*0x6409d2*/
            (int)DSurface_Alternate,
            v25,
            *(int *)&stru_AC4B30.__pad_EC[612],
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
        v22 = (_DWORD *)(*((int (__thiscall **)(DSurface *, char *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x640a01*/
                          DSurface_Alternate,
                          v38);
        result = (int)TextRenderer::DrawText( /*0x640a15*/
                        v27,
                        (size_t)g_Str_Fmt_PctD,
                        (int)DSurface_Alternate,
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = dword_A8B230; /*0x640a1a*/
      }
      while ( v17 < dword_A8B230[122].abstractFlags ); /*0x640a29*/
    }
  }
  return result; /*0x640a2f*/
}



// ==== 0x00640A40  Tactical::Radar_Render  this=Tactical  sig=csp ====
int *__userpurge Tactical::Radar_Render@<eax>(
        Tactical *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        char a6,
        int a7,
        int *a8)
{
  int **v8; // ecx
  int *result; // eax
  int v10; // ebp
  int v11; // ebx
  int i; // eax
  _DWORD *v13; // esi
  int v14; // esi
  int v15; // edi
  int v16; // edx
  signed int v17; // esi
  signed int j; // edi
  signed int v19; // ebx
  int v20; // esi
  int v21; // edi
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int *v28; // ecx
  int *v29; // eax
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  char *v33; // eax
  char *v34; // esi
  _DWORD *v35; // edi
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  char *v39; // ecx
  int v40; // ebp
  int v41; // edi
  int v42; // edx
  int v43; // edx
  int v44; // eax
  int *v45; // eax
  int *v46; // edi
  int v47; // ebx
  int v48; // eax
  int v52; // [esp+2Ch] [ebp-88h]
  signed int k; // [esp+2Ch] [ebp-88h]
  int **v54; // [esp+34h] [ebp-80h]
  int v55; // [esp+38h] [ebp-7Ch] BYREF
  _DWORD *v56; // [esp+3Ch] [ebp-78h] BYREF
  int FileSHP; // [esp+40h] [ebp-74h] BYREF
  int v58; // [esp+44h] [ebp-70h]
  int v59; // [esp+48h] [ebp-6Ch] BYREF
  int v60; // [esp+4Ch] [ebp-68h]
  int v61; // [esp+50h] [ebp-64h]
  int v62; // [esp+54h] [ebp-60h] BYREF
  int v63; // [esp+58h] [ebp-5Ch] BYREF
  int v64; // [esp+5Ch] [ebp-58h]
  int v65; // [esp+60h] [ebp-54h] BYREF
  int v66; // [esp+64h] [ebp-50h] BYREF
  int v67; // [esp+68h] [ebp-4Ch]
  int v68; // [esp+6Ch] [ebp-48h] BYREF
  int v69[3]; // [esp+70h] [ebp-44h] BYREF
  int v70; // [esp+7Ch] [ebp-38h]
  int v71; // [esp+80h] [ebp-34h] BYREF
  int v72; // [esp+84h] [ebp-30h] BYREF
  int v73; // [esp+88h] [ebp-2Ch]
  int v74; // [esp+8Ch] [ebp-28h] BYREF
  _DWORD v75[2]; // [esp+90h] [ebp-24h] BYREF
  int v76; // [esp+98h] [ebp-1Ch] BYREF
  int v77; // [esp+9Ch] [ebp-18h]
  _DWORD v78[3]; // [esp+A0h] [ebp-14h] BYREF
  _BYTE v79[8]; // [esp+ACh] [ebp-8h] BYREF

  result = *v8; /*0x640a46*/
  v54 = v8; /*0x640a4b*/
  if ( *v8 ) /*0x640a46*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x640a5d*/
    v10 = 10000; /*0x640a62*/
    v64 = 10000; /*0x640a6c*/
    v58 = 10000; /*0x640a70*/
    v52 = 0; /*0x640a74*/
    v11 = 0; /*0x640a7c*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x640a85*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v13 = (_DWORD *)(i + 36); /*0x640a8b*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea( /*0x640a96*/
                              (LayerClass *)&stru_87F5F0.__pad_58[416],
                              (__int16 *)(i + 36),
                              0) )
      {
        v56 = (_DWORD *)*v13; /*0x640aa7*/
        v14 = (SHIWORD(v56) << 8) + 128; /*0x640ab9*/
        v15 = ((__int16)v56 << 8) + 128; /*0x640ac3*/
        Coord::Subtract((Coord *)&v66, v15, v14, 0); /*0x640acb*/
        Coord::Subtract((Coord *)&v71, v15, v14, 0); /*0x640ad8*/
        IsoCoord::ToScreenOffset(v71, v67, &v55, &v59); /*0x640af7*/
        v16 = v59 / 30; /*0x640b2a*/
        if ( v55 / 60 < v10 ) /*0x640b2e*/
        {
          v64 = v55 / 60; /*0x640b30*/
          v10 = v55 / 60; /*0x640b34*/
        }
        if ( v55 / 60 > v52 ) /*0x640b3a*/
          v52 = v55 / 60; /*0x640b3c*/
        if ( v16 < v58 ) /*0x640b44*/
          v58 = v59 / 30; /*0x640b46*/
        if ( v16 > v11 ) /*0x640b4c*/
          v11 = v59 / 30; /*0x640b4e*/
      }
    }
    v17 = 0; /*0x640b62*/
    for ( j = 0; j < 8; ++j ) /*0x640b64*/
    {
      if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, j) ) /*0x640b71*/
        ++v17; /*0x640b7a*/
    }
    v19 = 0; /*0x640b81*/
    v59 = j; /*0x640b83*/
    for ( k = v17; v19 < v17; ++v19 ) /*0x640b8d*/
    {
      if ( (!v19 || v19 <= j) && (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v19) ) /*0x640ba6*/
      {
        v56 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v65, v19); /*0x640bc8*/
        v20 = (SHIWORD(v56) << 8) + 128; /*0x640bde*/
        v21 = ((__int16)v56 << 8) + 128; /*0x640be4*/
        Coord::Subtract((Coord *)&v71, v21, v20, 0); /*0x640bec*/
        Coord::Subtract((Coord *)&v66, v21, v20, 0); /*0x640bf9*/
        IsoCoord::ToScreenOffset(v66, v72, &v55, &FileSHP); /*0x640c18*/
        v76 = 4; /*0x640c61*/
        v75[1] = FileSHP / 30 - v58 - 1; /*0x640c65*/
        v77 = 4; /*0x640c6d*/
        v75[0] = 2 * (v55 / 60 - v10) - 1; /*0x640c74*/
        v22 = **v54; /*0x640c8a*/
        v23 = (*(int (__thiscall **)(int *, _DWORD *, _DWORD *, _DWORD))(v22 + 120))(*v54, v78, v75, 0); /*0x640cc4*/
        (*(void (__thiscall **)(_DWORD, int))(v22 + 16))(*v56, v23); /*0x640cce*/
        v17 = k; /*0x640cd1*/
        j = v59; /*0x640cd5*/
      }
    }
    if ( g_DisplayWidth == (LoadingScreen *)800 ) /*0x640cef*/
    {
      v24 = 499; /*0x640cf1*/
      v25 = 379; /*0x640cf6*/
      v26 = 216; /*0x640cfb*/
      v27 = 166; /*0x640d00*/
    }
    else if ( g_DisplayWidth == (LoadingScreen *)1024 ) /*0x640d0d*/
    {
      v24 = 570; /*0x640d0f*/
      v25 = 424; /*0x640d14*/
      v26 = 300; /*0x640d19*/
      v27 = 260; /*0x640d1e*/
    }
    else
    {
      v26 = 200; /*0x640d25*/
      v24 = 385; /*0x640d2a*/
      v25 = 270; /*0x640d2f*/
      v27 = 200; /*0x640d34*/
    }
    v61 = v25; /*0x640d36*/
    v60 = v24; /*0x640d3e*/
    v62 = v26; /*0x640d42*/
    v28 = *v54; /*0x640d46*/
    v63 = v27; /*0x640d48*/
    v29 = (int *)(*(int (__thiscall **)(int *, _DWORD *, int, int, int))(*v28 + 120))(v28, v78, a4, a3, a2); /*0x640d56*/
    v77 = *v29; /*0x640d5f*/
    v78[0] = v29[1]; /*0x640d6a*/
    v30 = v29[2]; /*0x640d6e*/
    v31 = v29[3]; /*0x640d71*/
    v32 = 1000 * v66 / v31; /*0x640d83*/
    if ( v32 >= 1000 * v65 / v30 ) /*0x640d96*/
      v32 = 1000 * v65 / v30; /*0x640d98*/
    v70 = (v65 - v32 * v30 / 1000) / 2; /*0x640dd6*/
    v71 = (v66 - v32 * v31 / 1000) / 2; /*0x640ddf*/
    v72 = v65 - 2 * v70; /*0x640dea*/
    v73 = v66 - 2 * v71; /*0x640dee*/
    v33 = (char *)__2_YAPAXI_Z(0x24u); /*0x640df2*/
    if ( v33 ) /*0x640dfc*/
      v34 = DSurface::Construct(v33, v65, v66, 1, 0); /*0x640e13*/
    else
      v34 = 0; /*0x640e17*/
    v35 = (_DWORD *)FileSHP; /*0x640e19*/
    v36 = *(_DWORD *)v34; /*0x640e1d*/
    v37 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD, _DWORD))(**(_DWORD **)FileSHP + 120))( /*0x640e2f*/
            *(_DWORD *)FileSHP,
            v79,
            0,
            0);
    (*(void (__thiscall **)(char *, int *, _DWORD, int))(v36 + 8))(v34, &v72, *v35, v37); /*0x640e3d*/
    HIBYTE(v56) = 0; /*0x640e49*/
    FileSHP = (int)LoadFileSHP(aMmpbShp, (bool *)&v56 + 3); /*0x640e53*/
    v38 = 0; /*0x640e5b*/
    v58 = 0; /*0x640e5f*/
    if ( v55 > 0 ) /*0x640e63*/
    {
      v39 = (char *)dword_A8B230; /*0x640e69*/
      v40 = 4480; /*0x640e6f*/
      v59 = 4480; /*0x640e74*/
      do /*0x64106b*/
      {
        if ( v40 == 4480 || v38 <= v62 ) /*0x640e84*/
        {
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v39, v38) ) /*0x640e8b*/
          {
            v60 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a5, v38); /*0x640eb0*/
            v41 = (SHIWORD(v60) << 8) + 128; /*0x640ec2*/
            Coord::Subtract((Coord *)&v74, ((__int16)v60 << 8) + 128, v41, 0); /*0x640ed4*/
            IsoCoord::ToScreenOffset(v74, v41, &v76, &v68); /*0x640eef*/
            v39 = (char *)dword_A8B230; /*0x640f32*/
            v42 = *(int *)((char *)&dword_A8B230->ptr_0 + v40); /*0x640f3a*/
            if ( v42 != -1 ) /*0x640f40*/
            {
              v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x640f66*/
                                          + 4 * *(_DWORD *)(*((_DWORD *)stru_A80220.? + v42) + 90196))
                              + 780);
              v60 = v43; /*0x640f6c*/
              if ( FileSHP ) /*0x640f70*/
              {
                if ( v43 ) /*0x640f78*/
                {
                  v69[0] = v72 * (1000000 * (v76 / 60 - v67) / (int)dword_A8B230[122].ptr_C) / 1000000 + v70 - 3; /*0x640fd6*/
                  v44 = *(_DWORD *)v34; /*0x641015*/
                  v69[1] = v73 * (1000000 * (v68 / 30 - v61) / dword_A8B230[122].uniqueId) / 1000000 + v71 - 2; /*0x641025*/
                  v45 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(v44 + 120))(v34, v79); /*0x641029*/
                  DrawToSurfaceSHP((int)v34, v60, FileSHP, 0, v69, v45, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x64103e*/
                  v39 = (char *)dword_A8B230; /*0x641043*/
                  v38 = v58; /*0x641049*/
                }
              }
            }
          }
          else
          {
            v39 = (char *)dword_A8B230; /*0x64104f*/
          }
        }
        ++v38; /*0x64105d*/
        v40 = v59 + 4; /*0x64105e*/
        v58 = v38; /*0x641063*/
        v59 += 4; /*0x641067*/
      }
      while ( v38 < v55 ); /*0x64106b*/
    }
    v46 = (int *)a7; /*0x641071*/
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a7 + 20))(a7, &v63, 0); /*0x641083*/
    v47 = *v46; /*0x641088*/
    v48 = (*(int (__thiscall **)(char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v34 + 120))(v34, v79, 0, 0); /*0x641098*/
    result = (int *)(*(int (__thiscall **)(int *, int *, char *, int))(v47 + 8))(v46, &v62, v34, v48); /*0x6410a4*/
    if ( v34 ) /*0x6410ac*/
      return (**(int *(__thiscall ***)(char *, int))v34)(v34, 1); /*0x6410b4*/
  }
  return result; /*0x6410b6*/
}



// ==== 0x00641140  MiniMap::Render  this=MiniMap  sig=csp ====
int __thiscall MiniMap::Render(MiniMap *this)
{
  MiniMap *v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // esi
  int *v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  int v13; // ebp
  ObjectClass *v14; // eax
  unsigned int BridgeCellColor; // edi
  int *v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ebx
  int v20; // edi
  int RadarColor; // eax
  int v22; // esi
  unsigned __int8 v23; // al
  int v24; // ebp
  unsigned int v25; // edi
  int v26; // ebp
  MiniMap *v27; // esi
  int v28; // ebx
  _DWORD *v29; // ecx
  int v30; // eax
  int *v31; // ecx
  int v32; // edi
  int v33; // eax
  int v34; // esi
  int v35; // esi
  int v36; // eax
  int v38; // [esp+10h] [ebp-B8h]
  int v39; // [esp+10h] [ebp-B8h]
  char v40; // [esp+2Fh] [ebp-99h]
  __int16 v41[2]; // [esp+30h] [ebp-98h] BYREF
  int v42; // [esp+34h] [ebp-94h]
  __int16 v43[2]; // [esp+38h] [ebp-90h] BYREF
  _BYTE v44[4]; // [esp+3Ch] [ebp-8Ch] BYREF
  int v45; // [esp+40h] [ebp-88h]
  MiniMap *v46; // [esp+44h] [ebp-84h]
  int v47; // [esp+48h] [ebp-80h] BYREF
  __int16 v48; // [esp+4Ch] [ebp-7Ch]
  unsigned __int8 v49; // [esp+4Eh] [ebp-7Ah]
  int v50; // [esp+54h] [ebp-74h] BYREF
  int v51; // [esp+58h] [ebp-70h] BYREF
  int v52; // [esp+5Ch] [ebp-6Ch] BYREF
  _DWORD v53[2]; // [esp+60h] [ebp-68h] BYREF
  _DWORD v54[2]; // [esp+68h] [ebp-60h] BYREF
  CoordStruct v55; // [esp+70h] [ebp-58h] BYREF
  int v56; // [esp+74h] [ebp-54h]
  int v57; // [esp+78h] [ebp-50h]
  int v58; // [esp+7Ch] [ebp-4Ch]
  int v59; // [esp+80h] [ebp-48h] BYREF
  int v60; // [esp+84h] [ebp-44h]
  CoordStruct v61; // [esp+8Ch] [ebp-3Ch] BYREF
  int v62; // [esp+90h] [ebp-38h]
  int v63; // [esp+98h] [ebp-30h]
  char v64[16]; // [esp+A8h] [ebp-20h] BYREF
  char v65[16]; // [esp+B8h] [ebp-10h] BYREF

  v1 = this; /*0x64114a*/
  v46 = this; /*0x641151*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x641155*/
  v2 = 10000; /*0x64115a*/
  v3 = 0; /*0x64115f*/
  v47 = 10000; /*0x641166*/
  v45 = 10000; /*0x64116a*/
  v4 = 0; /*0x64116e*/
  v42 = 0; /*0x641170*/
  v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x641174*/
  if ( v5 ) /*0x64117b*/
  {
    do /*0x641256*/
    {
      v6 = (_DWORD *)(v5 + 36); /*0x641181*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)(v5 + 36), 0) ) /*0x64118c*/
      {
        *(_DWORD *)v41 = *v6; /*0x64119d*/
        Coord::Subtract((Coord *)&v59, (v41[0] << 8) + 128, (v41[1] << 8) + 128, 0); /*0x6411c1*/
        v38 = v60; /*0x6411d4*/
        v7 = CoordStruct::Set2(&v61, v41, 0); /*0x6411e3*/
        IsoCoord::ToScreenOffset(*v7, v38, (int *)v43, &v52); /*0x6411f1*/
        v8 = v52 / 30; /*0x641224*/
        if ( *(_DWORD *)v43 / 60 < v2 ) /*0x641228*/
        {
          v47 = *(_DWORD *)v43 / 60; /*0x64122a*/
          v2 = *(_DWORD *)v43 / 60; /*0x64122e*/
        }
        if ( *(_DWORD *)v43 / 60 > v4 ) /*0x641232*/
          v4 = *(_DWORD *)v43 / 60; /*0x641234*/
        if ( v8 < v45 ) /*0x64123a*/
          v45 = v52 / 30; /*0x64123c*/
        if ( v8 > v42 ) /*0x641244*/
          v42 = v52 / 30; /*0x641246*/
      }
      v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x64124f*/
    }
    while ( v5 ); /*0x641256*/
    v3 = v42; /*0x64125c*/
  }
  v9 = v3 - v45; /*0x641266*/
  v10 = 2 * (v4 - v2); /*0x64126a*/
  if ( *(_DWORD *)v1->__pad_0 ) /*0x641268*/
    (***(void (__thiscall ****)(_DWORD, int))v1->__pad_0)(*(_DWORD *)v1->__pad_0, 1); /*0x641274*/
  v11 = (char *)__2_YAPAXI_Z(0x24u); /*0x641278*/
  if ( v11 ) /*0x641282*/
    v12 = DSurface::Construct(v11, v10, v9, 1, 0); /*0x64128c*/
  else
    v12 = 0; /*0x641293*/
  *(_DWORD *)v1->__pad_0 = v12; /*0x641295*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0); /*0x64129d*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x6412a5*/
  v13 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x6412b6*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)v1->__pad_0 + 92))(*(_DWORD *)v1->__pad_0, 0, 0); /*0x6412c0*/
  for ( ; v13; v13 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) ) /*0x6412c5*/
  {
    *(_DWORD *)v43 = *(_DWORD *)(v13 + 36); /*0x6412d0*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v43, 0) ) /*0x6412de*/
    {
      v44[3] = 0; /*0x6412fc*/
      v14 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v43); /*0x641301*/
      BridgeCellColor = GetBridgeCellColor(v14, &v44[3], 0); /*0x641312*/
      v42 = BridgeCellColor; /*0x641335*/
      *(_DWORD *)v41 = *(_DWORD *)v43; /*0x641339*/
      Coord::Subtract((Coord *)&v61, (v43[0] << 8) + 128, (v43[1] << 8) + 128, 0); /*0x64133d*/
      v39 = v62; /*0x641350*/
      v16 = CoordStruct::Set2(&v55, v41, 0); /*0x64135c*/
      IsoCoord::ToScreenOffset(*v16, v39, &v50, &v51); /*0x64136a*/
      v40 = 0; /*0x641385*/
      v17 = *(_DWORD *)(v13 + 68); /*0x6413aa*/
      v18 = 0; /*0x6413b1*/
      v60 = v51 / 30 - v45; /*0x6413b6*/
      v63 = 2 * (v50 / 60 - v2); /*0x6413ba*/
      v19 = 100; /*0x6413be*/
      if ( v17 == -1 ) /*0x6413c3*/
      {
        v26 = *(_DWORD *)(v13 + 228); /*0x6415e1*/
        if ( v26 && (*(int (__stdcall **)(int))(*(_DWORD *)(v26 + 4) + 12))(v26 + 4) == 36 ) /*0x6415fc*/
        {
          v40 = 1; /*0x641610*/
          v19 = 75; /*0x64161b*/
          v18 = (*(unsigned __int8 *)(*(_DWORD *)(v26 + 200) + 668) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x641662*/
              | (*(unsigned __int8 *)(*(_DWORD *)(v26 + 200) + 669) >> g_BitMask_Blue << g_BitMask_Green)
              | (*(unsigned __int8 *)(*(_DWORD *)(v26 + 200) + 670) >> g_BitMask_Red << g_BitShift_Blue);
        }
      }
      else
      {
        v20 = *(&dword_A83D84->ptr_0 + v17); /*0x6413d3*/
        RadarColor = OverlayTypeClass::GetRadarColor( /*0x6413e2*/
                       (OverlayTypeClass *)v20,
                       (int)&v52,
                       *(unsigned __int8 *)(v13 + 286));
        v48 = *(_WORD *)RadarColor; /*0x6413ea*/
        v49 = *(_BYTE *)(RadarColor + 2); /*0x6413f2*/
        if ( *(_BYTE *)(v20 + 681) ) /*0x6413f6*/
        {
          v22 = *(unsigned __int8 *)(v20 + 694) >> g_BitShift_Green_0; /*0x641425*/
          *(_DWORD *)v41 = (unsigned __int8)g_BitShift_Green_0; /*0x641427*/
          v18 = (*(unsigned __int8 *)(v20 + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x64146e*/
              | (*(unsigned __int8 *)(v20 + 695) >> g_BitMask_Blue << g_BitMask_Green)
              | (v22 << g_BitShift_Red);
          if ( v18 <= 5 ) /*0x641473*/
            v18 = (v49 >> g_BitMask_Red << g_BitShift_Blue) /*0x6414b7*/
                | (HIBYTE(v48) >> g_BitMask_Blue << g_BitMask_Green)
                | ((unsigned __int8)v48 >> SLOBYTE(v41[0]) << g_BitShift_Red);
          v23 = *(_BYTE *)(v13 + 286); /*0x6414b9*/
          v19 = 75; /*0x6414bf*/
          v40 = 1; /*0x6414c6*/
          if ( v23 >= 2u ) /*0x6414cb*/
          {
            if ( v23 < 5u ) /*0x6414d6*/
              v19 = 50; /*0x6414d8*/
          }
          else
          {
            v19 = 25; /*0x6414cd*/
          }
          v42 = (unsigned __int16)BlendMinimapPixel(v18, v42, v19); /*0x6414ee*/
        }
        else
        {
          *(_DWORD *)v41 = (unsigned __int8)g_BitShift_Green_0; /*0x641541*/
          v18 = (v49 >> g_BitMask_Red << g_BitShift_Blue) /*0x641582*/
              | (HIBYTE(v48) >> g_BitMask_Blue << g_BitMask_Green)
              | ((unsigned __int8)v48 >> g_BitShift_Green_0 << g_BitShift_Red);
          if ( v18 <= 5 ) /*0x641587*/
            v18 = (*(unsigned __int8 *)(v20 + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x6415cd*/
                | (*(unsigned __int8 *)(v20 + 695) >> g_BitMask_Blue << g_BitMask_Green)
                | (*(unsigned __int8 *)(v20 + 694) >> SLOBYTE(v41[0]) << g_BitShift_Red);
          if ( v18 ) /*0x6415d1*/
            v40 = 1; /*0x6415d7*/
        }
        BridgeCellColor = v42; /*0x6414f2*/
      }
      v24 = (unsigned __int16)BridgeCellColor; /*0x6414fc*/
      v25 = HIWORD(BridgeCellColor); /*0x641502*/
      if ( v40 ) /*0x641507*/
      {
        if ( v19 == 100 ) /*0x641510*/
        {
          v24 = v18; /*0x641516*/
          v25 = v18; /*0x641518*/
        }
        else
        {
          v24 = (unsigned __int16)BlendMinimapPixel(v18, v24, v19); /*0x64167d*/
          v25 = (unsigned __int16)BlendMinimapPixel(v18, v25, v19); /*0x641689*/
        }
      }
      if ( !v25 || !v24 ) /*0x641691*/
      {
        Debug::Log(); /*0x6416a4*/
        v25 = (128 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6416ed*/
            | (128 >> g_BitMask_Blue << g_BitMask_Green)
            | (128 >> g_BitMask_Red << g_BitShift_Blue);
        v24 = v25; /*0x6416ef*/
      }
      v27 = v46; /*0x6416f5*/
      v28 = v60; /*0x6416f9*/
      v53[0] = v63; /*0x6416fd*/
      v29 = *(_DWORD **)v46->__pad_0; /*0x641701*/
      v53[1] = v60; /*0x641703*/
      *(_DWORD *)v41 = *v29; /*0x641711*/
      v30 = (*(int (__thiscall **)(_DWORD *, char *))(*(_DWORD *)v41 + 120))(v29, v65); /*0x641715*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int, int))(*(_DWORD *)v41 + 136))( /*0x641725*/
        *(_DWORD *)v27->__pad_0,
        v53,
        v25,
        v30);
      v31 = *(int **)v27->__pad_0; /*0x64172f*/
      v54[1] = v28; /*0x641732*/
      v54[0] = v63 + 1; /*0x641736*/
      v32 = *v31; /*0x64173a*/
      v33 = (*(int (__thiscall **)(int *, char *))(*v31 + 120))(v31, v64); /*0x641744*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int))(v32 + 136))(*(_DWORD *)v27->__pad_0, v54, v24, v33); /*0x641750*/
      v2 = v47; /*0x641756*/
      v1 = v27; /*0x64175a*/
    }
  }
  v34 = 0; /*0x641770*/
  v46 = 0; /*0x641777*/
  do /*0x64188e*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v34) ) /*0x641782*/
    {
      v51 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v41, v34); /*0x6417a6*/
      IsoCoord::ToScreenOffset(((__int16)v51 << 8) + 128, (SHIWORD(v51) << 8) + 128, &v50, &v47); /*0x6417d1*/
      v57 = 4; /*0x6417ec*/
      v55.vfptr = (void *)(2 * (v50 / 60 - v2) - 1); /*0x641816*/
      v56 = v47 / 30 - v45 - 1; /*0x641821*/
      v58 = 4; /*0x64182f*/
      v35 = **(_DWORD **)v1->__pad_0; /*0x64183f*/
      v36 = (*(int (__thiscall **)(_DWORD, char *, CoordStruct *, int))(v35 + 120))( /*0x641874*/
              *(_DWORD *)v1->__pad_0,
              v64,
              &v55,
              240 >> g_BitShift_Green_0 << g_BitShift_Red);
      (*(void (__thiscall **)(_DWORD, int))(v35 + 16))(*(_DWORD *)v1->__pad_0, v36); /*0x64187a*/
      v34 = (int)v46; /*0x64187d*/
    }
    v46 = (MiniMap *)++v34; /*0x64188a*/
  }
  while ( v34 < 8 ); /*0x64188e*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v1->__pad_0 + 96))(*(_DWORD *)v1->__pad_0); /*0x64189b*/
}



// ==== 0x006418B0  MiniMap::SavePreviewToINI  this=MiniMap  sig=csp ====
bool __thiscall MiniMap::SavePreviewToINI(MiniMap *this, char *a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int i; // edi
  int v12; // ecx
  unsigned __int16 v13; // ax
  signed int v14; // ebx
  int v15; // eax
  char v17; // [esp+21h] [ebp-5Dh]
  __int16 v18; // [esp+22h] [ebp-5Ch]
  __int16 Src; // [esp+26h] [ebp-58h] BYREF
  char v20; // [esp+28h] [ebp-56h]
  _DWORD v21[4]; // [esp+2Ah] [ebp-54h] BYREF
  Pipe v22; // [esp+3Ah] [ebp-44h] BYREF
  int v23; // [esp+52h] [ebp-2Ch]
  Pipe v24; // [esp+56h] [ebp-28h] BYREF

  v17 = 0; /*0x6418b9*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x6418be*/
  {
    MiniMap::Render(this); /*0x6418c3*/
    v17 = 1; /*0x6418c8*/
  }
  INIClass::ClearSection((int *)a2, (int)aPreview, 0); /*0x6418db*/
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)this->__pad_0 + 120))( /*0x6418e9*/
                   *(_DWORD *)this->__pad_0,
                   v21);
  INIClass::SetRect(a2, (unsigned __int8 *)aPreview, (char *)g_Str_EVA_CannotDeployHere.Type, v3); /*0x6418fb*/
  v4 = 0; /*0x641906*/
  v5 = 0; /*0x641908*/
  v6 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x641918*/
  v7 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v6; /*0x64191f*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v7; /*0x64192d*/
  v9 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x64193a*/
         DSurface_Alternate,
         0,
         0);
  v22.Pipe_field_0x04 = 0; /*0x641943*/
  v22.Pipe_field_0x08 = 0; /*0x641947*/
  *(_DWORD *)v22.__pad_0 = &Pipe::`vftable'; /*0x64194b*/
  Buffer::Init((Buffer *)&v22.Pipe_field_0x0C, v9, v8); /*0x641953*/
  v23 = 0; /*0x641962*/
  *(_DWORD *)v22.__pad_0 = &BufferPipe::`vftable'; /*0x641966*/
  LZOPipe::Constructor((LZOPipe *)&v24, 0, 0x2000); /*0x64196e*/
  Pipe::SetDelegate(&v24, (int)&v22); /*0x64197c*/
  v10 = *(_DWORD *)this->__pad_0; /*0x641981*/
  Src = 0; /*0x641985*/
  v20 = 0; /*0x64198f*/
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 92))(v10, 0, 0); /*0x64199a*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 128))(*(_DWORD *)this->__pad_0) > 0 ) /*0x6419a9*/
  {
    do /*0x641a53*/
    {
      for ( i = 0; i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 124))(*(_DWORD *)this->__pad_0); ++i ) /*0x6419ba*/
      {
        v12 = *(_DWORD *)this->__pad_0; /*0x6419c0*/
        v21[0] = i; /*0x6419c2*/
        v21[1] = v5; /*0x6419c6*/
        v13 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v12 + 40))(v12, v21); /*0x6419d1*/
        LOBYTE(v18) = (unsigned __int8)(v13 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x6419f1*/
        HIBYTE(v18) = (unsigned __int8)(v13 >> g_BitMask_Green) << g_BitMask_Blue; /*0x641a12*/
        Src = v18; /*0x641a22*/
        v20 = (unsigned __int8)(v13 >> g_BitShift_Blue) << g_BitMask_Red; /*0x641a2b*/
        v4 += Compression::Read((int *)v24.__pad_0, (int)&Src, 3); /*0x641a36*/
      }
      ++v5; /*0x641a48*/
    }
    while ( v5 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 128))(*(_DWORD *)this->__pad_0) ); /*0x641a53*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 96))(*(_DWORD *)this->__pad_0); /*0x641a5d*/
  v14 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v24.__pad_0 + 4))(&v24) + v4; /*0x641a6f*/
  INIClass::ClearSection((int *)a2, (int)aPreviewpack, 0); /*0x641a7b*/
  if ( v14 > 0 ) /*0x641a82*/
  {
    v15 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x641a93*/
            DSurface_Alternate,
            0,
            0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aPreviewpack, v15, v14); /*0x641aa0*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641aad*/
  }
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641ab8*/
  if ( v17 ) /*0x641ac1*/
  {
    if ( *(_DWORD *)this->__pad_0 ) /*0x641ac3*/
      (***(void (__thiscall ****)(_DWORD, int))this->__pad_0)(*(_DWORD *)this->__pad_0, 1); /*0x641acd*/
    *(_DWORD *)this->__pad_0 = 0; /*0x641acf*/
  }
  LZOPipe::Destructor((LZOPipe *)&v24); /*0x641ad9*/
  Vector::Clear((int)&v22.Pipe_field_0x0C); /*0x641ae2*/
  Pipe::Dtor(&v22); /*0x641aeb*/
  return v14 > 0; /*0x641af0*/
}



// ==== 0x00641B00  ObjectClass::LoadMapPreviewImage  this=ObjectClass  sig=csp ====
char __thiscall LoadMapPreviewImage(ObjectClass *this, _DWORD *a2)
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
  int Base64Data; // edi
  int v13; // eax
  void *ptr_0; // ecx
  unsigned int v15; // edi
  void *v16; // eax
  char v18[8]; // [esp+20h] [ebp-5Ch] BYREF
  unsigned int v19; // [esp+28h] [ebp-54h] BYREF
  INIClass *v20; // [esp+2Ch] [ebp-50h]
  Straw v21; // [esp+38h] [ebp-44h] BYREF
  int v22; // [esp+40h] [ebp-3Ch]
  Buffer v23; // [esp+44h] [ebp-38h] BYREF
  INIClass *v24; // [esp+80h] [ebp+4h]

  INIClass::ResetSection((INIClass *)a2); /*0x641b0f*/
  if ( this->AbstractClass ) /*0x641b14*/
  {
    (**(void (__thiscall ***)(void *, int))this->AbstractClass)(this->AbstractClass, 1); /*0x641b20*/
    this->AbstractClass = 0; /*0x641b22*/
  }
  v3 = INIClass::ParseValue( /*0x641b3c*/
         (INIClass *)a2,
         (unsigned int *)&v21,
         (unsigned __int8 *)aPreview,
         (unsigned __int8 *)g_Str_EVA_CannotDeployHere.Type,
         (unsigned int *)&stru_87F5F0.__pad_58[668]);
  v19 = *v3; /*0x641b45*/
  v20 = (INIClass *)v3[1]; /*0x641b4c*/
  v4 = v3[2]; /*0x641b50*/
  v5 = v3[3]; /*0x641b53*/
  v6 = (char *)__2_YAPAXI_Z(0x24u); /*0x641b56*/
  if ( v6 ) /*0x641b60*/
    v7 = DSurface::Construct(v6, v4, v5, 1, 0); /*0x641b69*/
  else
    v7 = 0; /*0x641b70*/
  this->AbstractClass = v7; /*0x641b72*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v7 + 24))(v7, 0); /*0x641b79*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x641b90*/
  v9 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v8; /*0x641b97*/
  v10 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v9; /*0x641ba5*/
  v11 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x641bb4*/
          DSurface_Alternate,
          0,
          0);
  if ( !v11 ) /*0x641bb9*/
    return 1; /*0x641bb9*/
  Base64Data = INIClass::GetBase64Data((INIClass *)a2, aPreviewpack, v11, v10); /*0x641bd0*/
  if ( Base64Data <= 0 ) /*0x641bd4*/
  {
LABEL_14:
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d4e*/
    return 1; /*0x641d62*/
  }
  v13 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x641be6*/
          DSurface_Alternate,
          0,
          0);
  v21.Straw_field_0x04 = 0; /*0x641bef*/
  v22 = 0; /*0x641bf3*/
  *(_DWORD *)v21.__pad_0 = &Straw::`vftable'; /*0x641bf7*/
  Buffer::Init(&v23, v13, Base64Data); /*0x641bff*/
  v23.Buffer_field_0C = 0; /*0x641c0f*/
  *(_DWORD *)v21.__pad_0 = &BufferStraw::`vftable'; /*0x641c13*/
  LZOStraw::Constructor((LZOStraw *)&v23.Buffer_field_10, 1, 0x2000); /*0x641c1b*/
  Delegate::Set((Straw *)&v23.Buffer_field_10, (int)&v21); /*0x641c29*/
  ptr_0 = this->AbstractClass; /*0x641c2e*/
  v18[0] = 0; /*0x641c30*/
  v18[1] = 0; /*0x641c34*/
  v18[2] = 0; /*0x641c38*/
  (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)ptr_0 + 92))(ptr_0, 0, 0); /*0x641c42*/
  v24 = 0; /*0x641c47*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 128))(this->AbstractClass) <= 0 ) /*0x641c55*/
  {
LABEL_13:
    (*(void (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 96))(this->AbstractClass); /*0x641d1f*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d30*/
    LZOStraw::Destructor((LZOStraw *)&v23.Buffer_field_10); /*0x641d37*/
    Vector::Clear((int)&v23); /*0x641d40*/
    Straw::Dtor(&v21); /*0x641d49*/
    goto LABEL_14; /*0x641d49*/
  }
  while ( 1 ) /*0x641c5d*/
  {
    v15 = 0; /*0x641c5d*/
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 124))(this->AbstractClass) > 0 ) /*0x641c66*/
      break; /*0x641c66*/
LABEL_12:
    v24 = (INIClass *)((char *)v24 + 1); /*0x641d04*/
    if ( (int)v24 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 128))(this->AbstractClass) ) /*0x641d19*/
      goto LABEL_13; /*0x641d19*/
  }
  while ( LCW::Decompress((LZOStraw *)&v23.Buffer_field_10, v18, 3) == 3 ) /*0x641c7f*/
  {
    v20 = v24; /*0x641c91*/
    v16 = this->AbstractClass; /*0x641caf*/
    v19 = v15; /*0x641cb1*/
    (*(void (__thiscall **)(void *, unsigned int *, int))(*(_DWORD *)v16 + 36))( /*0x641cef*/
      v16,
      &v19,
      ((unsigned __int8)v18[0] >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((unsigned __int8)v18[1] >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned __int8)v18[2] >> g_BitMask_Red << g_BitShift_Blue));
    if ( (int)++v15 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 124))(this->AbstractClass) ) /*0x641cfc*/
      goto LABEL_12; /*0x641cfc*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this->AbstractClass + 96))(this->AbstractClass); /*0x641d69*/
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d74*/
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x641d7f*/
  LZOStraw::Destructor((LZOStraw *)&v23.Buffer_field_10); /*0x641d86*/
  Vector::Clear((int)&v23); /*0x641d8f*/
  Straw::Dtor(&v21); /*0x641d98*/
  return 0; /*0x641d59*/
}



// ==== 0x00641DB0  Surface::LoadToSurfaceSHP  this=Surface  sig=csp ====
char __thiscall Surface::LoadToSurfaceSHP(Surface *this, char *Source)
{
  _DWORD *v3; // esi
  char *v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v8; // [esp+0h] [ebp-84h]
  CCFileClass v9; // [esp+18h] [ebp-6Ch] BYREF
  int v10[3]; // [esp+70h] [ebp-14h] BYREF
  int v11; // [esp+7Ch] [ebp-8h]

  CCFileClass::Construct(&v9, Source); /*0x641dc0*/
  if ( !(unsigned __int8)CCFileClass::Open(&v9, 0) ) /*0x641dcb*/
    goto LABEL_11; /*0x641dcb*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x641dd8*/
  {
    (***(void (__thiscall ****)(_DWORD, int))this->__pad_0)(*(_DWORD *)this->__pad_0, 1); /*0x641de2*/
    *(_DWORD *)this->__pad_0 = 0; /*0x641de4*/
  }
  v3 = DecodeFrameSHP((int)&v9, 0, 0, 0); /*0x641df9*/
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
    *(_DWORD *)this->__pad_0 = v6; /*0x641e57*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x641e5f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)this->__pad_0 + 4))( /*0x641e6b*/
      *(_DWORD *)this->__pad_0,
      v3,
      0,
      1);
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x641e74*/
    *(_DWORD *)v9.CDFileClass = &CCFileClass::`vftable'; /*0x641e7a*/
    v11 = 0; /*0x641e82*/
    Vector::Clear((int)v10); /*0x641e8a*/
    *(_DWORD *)v9.CDFileClass = &off_7E1668; /*0x641e93*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v9); /*0x641e9b*/
    return 1; /*0x641ea2*/
  }
  else
  {
LABEL_11:
    *(_DWORD *)v9.CDFileClass = &CCFileClass::`vftable'; /*0x641eaf*/
    v11 = 0; /*0x641eb7*/
    Vector::Clear((int)v10); /*0x641ebf*/
    *(_DWORD *)v9.CDFileClass = &off_7E1668; /*0x641ec8*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v9); /*0x641ed0*/
    return 0; /*0x641ed6*/
  }
}



// ==== 0x00641EE0  PreviewClass::ReadPreview  this=PreviewClass  sig=csp ====
char __thiscall PreviewClass::ReadPreview(PreviewClass *this, char *Source)
{
  int v2; // ebp
  void *v3; // esi
  signed int v4; // edi
  char *v5; // eax
  char *v6; // edi
  char v8; // [esp+13h] [ebp-13Dh]
  Straw v10; // [esp+18h] [ebp-138h] BYREF
  int v11; // [esp+20h] [ebp-130h]
  Buffer v12; // [esp+24h] [ebp-12Ch] BYREF
  int v13[3]; // [esp+8Ch] [ebp-C4h] BYREF
  int v14; // [esp+98h] [ebp-B8h]
  CCINIClass v15; // [esp+A0h] [ebp-B0h] BYREF
  INIClass v16; // [esp+F8h] [ebp-58h] BYREF
  char v17; // [esp+138h] [ebp-18h]

  CCFileClass::Construct((CCFileClass *)&v12.Buffer_field_10, Source); /*0x641efa*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v12.Buffer_field_10, 0) /*0x641f19*/
    && FileClass::Load((CCFileClass *)&v12.Buffer_field_10, (const CHAR *)1) )
  {
    INIClass::INIClass((INIClass *)&v15); /*0x641f2d*/
    v15.ownsFile = 0; /*0x641f41*/
    *(_DWORD *)v15.INIClass = &CCINIClass_Vtable; /*0x641f48*/
    CCINIClass::Load(&v15, (int)&v12.Buffer_field_10, 1, 0); /*0x641f53*/
    INIClass::ResetSection((INIClass *)&v15); /*0x641f5f*/
    PreviewClass::RenderMapPreview((PreviewClass *)dword_A8B230, &v15); /*0x641f72*/
    v2 = 0; /*0x641f77*/
    v3 = 0; /*0x641f79*/
    while ( 1 ) /*0x641f7f*/
    {
      v2 += 25; /*0x641f7f*/
      v4 = v2 * CCFileClass::GetSize((CCFileClass *)&v12.Buffer_field_10) / 100; /*0x641f9f*/
      if ( v3 ) /*0x641fa1*/
        __3_YAXPAX_Z(v3); /*0x641fa4*/
      v3 = (void *)__2_YAPAXI_Z(v4 + 1); /*0x641fb5*/
      if ( !v3 ) /*0x641fbc*/
        goto LABEL_10; /*0x641fbc*/
      BufferIOFileClass::Seek((CCFileClass *)&v12.Buffer_field_10, 0, 0); /*0x641fc4*/
      CCFileClass::Read((CCFileClass *)&v12.Buffer_field_10, v3, v4); /*0x641fcf*/
      *((_BYTE *)v3 + v4) = 0; /*0x641fda*/
      v5 = strstr((const char *)v3, aMap); /*0x641fdd*/
      v6 = v5; /*0x641fe2*/
      if ( v5 ) /*0x641fe9*/
        break; /*0x641fe9*/
      if ( v2 >= 100 ) /*0x641fee*/
      {
        __3_YAXPAX_Z(v3); /*0x641ff1*/
LABEL_10:
        HashTable::DestroyHashTableINIClass((INIClass *)&v15); /*0x641ff9*/
        goto LABEL_11; /*0x642000*/
      }
    }
    *v5 = 0; /*0x642047*/
    INIClass::INIClass(&v16); /*0x642049*/
    v17 = 0; /*0x642055*/
    *(_DWORD *)v16.__pad_0 = &CCINIClass_Vtable; /*0x64205e*/
    v10.Straw_field_0x04 = 0; /*0x642069*/
    v11 = 0; /*0x64206d*/
    Buffer::Init(&v12, (int)v3, v6 - (_BYTE *)v3 - 1); /*0x642079*/
    v12.Buffer_field_0C = 0; /*0x64208c*/
    *(_DWORD *)v10.__pad_0 = &BufferStraw::`vftable'; /*0x642090*/
    CCINIClass::LoadAndVerifyDigest((int *)v16.__pad_0, (int)&v10, 0, 0); /*0x642098*/
    v8 = LoadMapPreviewImage((ObjectClass *)this, &v16); /*0x6420af*/
    __3_YAXPAX_Z(v3); /*0x6420b3*/
    Vector::Clear((int)&v12); /*0x6420bf*/
    Straw::Dtor(&v10); /*0x6420c8*/
    HashTable::DestroyHashTableINIClass(&v16); /*0x6420d4*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v15); /*0x6420e0*/
    v12.Buffer_field_10 = (int)&CCFileClass::`vftable'; /*0x6420ec*/
    v14 = 0; /*0x6420f4*/
    Vector::Clear((int)v13); /*0x6420fb*/
    v12.Buffer_field_10 = (int)&off_7E1668; /*0x642104*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v12.Buffer_field_10); /*0x64210c*/
    return v8; /*0x642111*/
  }
  else
  {
LABEL_11:
    v12.Buffer_field_10 = (int)&CCFileClass::`vftable'; /*0x642005*/
    v14 = 0; /*0x642014*/
    Vector::Clear((int)v13); /*0x64201b*/
    v12.Buffer_field_10 = (int)&off_7E1668; /*0x642024*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v12.Buffer_field_10); /*0x64202c*/
    return 0; /*0x642034*/
  }
}



// ==== 0x00642130  Palette::Preview_Generate  this=Palette  sig=csp ====
int __thiscall Palette::Preview_Generate(Palette *this, char a2, int a3, size_t *a4)
{
  char v4; // si
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v12; // ebx
  int Width; // eax
  int v14; // ebp
  unsigned __int16 Pixel; // ax
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // ecx
  unsigned __int16 v29; // ax
  int v30; // ebp
  _WORD *v31; // edi
  int v32; // ecx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  size_t v38; // ebx
  int *v39; // ebp
  int v40; // eax
  char v41; // [esp-8h] [ebp-80h]
  int v42; // [esp+8h] [ebp-70h]
  _WORD *v43; // [esp+8h] [ebp-70h]
  int v44; // [esp+8h] [ebp-70h]
  int v45; // [esp+Ch] [ebp-6Ch]
  int v46; // [esp+Ch] [ebp-6Ch]
  char *Block; // [esp+10h] [ebp-68h]
  _WORD *Blocka; // [esp+10h] [ebp-68h]
  _DWORD *v49; // [esp+14h] [ebp-64h]
  int v50; // [esp+18h] [ebp-60h]
  _BYTE *v51; // [esp+1Ch] [ebp-5Ch]
  int v52; // [esp+20h] [ebp-58h]
  _BYTE *v53; // [esp+24h] [ebp-54h]
  _DWORD v54[2]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v55; // [esp+34h] [ebp-44h] BYREF
  int v56[3]; // [esp+38h] [ebp-40h] BYREF
  int v57; // [esp+44h] [ebp-34h] BYREF
  int v58; // [esp+48h] [ebp-30h]
  int v59; // [esp+4Ch] [ebp-2Ch]
  int Height; // [esp+50h] [ebp-28h]
  XSurface v61; // [esp+54h] [ebp-24h] BYREF

  if ( !*(_DWORD *)this->m_Colors ) /*0x642139*/
    return 0; /*0x642146*/
  v41 = v4; /*0x64214a*/
  v7 = *(_DWORD *)this->m_Colors; /*0x64214b*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 128))(v7); /*0x642153*/
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 124))(v7, v8 / 2); /*0x642163*/
  DSurface::Construct((char *)&v61.Width, v9 / 2, 0, 0, v41); /*0x642170*/
  v59 = 0; /*0x642181*/
  v10 = *(_DWORD *)this->m_Colors; /*0x642185*/
  Height = v61.Height; /*0x642187*/
  v58 = 0; /*0x64218b*/
  *(_DWORD *)v61.__pad_0 = v61.LockCount; /*0x64218f*/
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 120))(v10); /*0x64219c*/
  DSurface::BlitPart((DSurface *)&v61, (int)&v57, *(_DWORD *)this->m_Colors, v11, (int)v56, 0); /*0x6421ac*/
  v12 = (void *)__2_YAPAXI_Z(0x4000u); /*0x6421bb*/
  memset(v12, 0, 0x4000u); /*0x6421c6*/
  v49 = v12; /*0x6421cd*/
  Block = 0; /*0x6421d1*/
  DSurface::Lock((DSurface *)&v61, 0, 0); /*0x6421db*/
  v42 = 0; /*0x6421e4*/
  if ( v61.Height > 0 ) /*0x6421ea*/
  {
    Width = v61.Width; /*0x6421f0*/
    do /*0x6422f7*/
    {
      v14 = 0; /*0x6421f4*/
      if ( Width > 0 ) /*0x6421f8*/
      {
        do /*0x6422de*/
        {
          v55 = v14; /*0x64220b*/
          v56[0] = v42; /*0x64220f*/
          Pixel = XSurface::GetPixel(&v61, &v55); /*0x642213*/
          v54[0] = v14; /*0x64222c*/
          v16 = ((unsigned __int8)(Pixel >> g_BitShift_Red) << g_BitShift_Green_0) & 0xF0; /*0x642248*/
          v17 = ((unsigned __int8)(Pixel >> g_BitMask_Green) << g_BitMask_Blue) & 0xF0; /*0x64225c*/
          v54[1] = v42; /*0x642268*/
          v18 = ((unsigned __int8)(Pixel >> g_BitShift_Blue) << g_BitMask_Red) & 0xF0; /*0x64227f*/
          XSurface::SetPixel( /*0x6422b5*/
            &v61,
            v54,
            (v18 >> g_BitMask_Red << g_BitShift_Blue)
          | (v17 >> g_BitMask_Blue << g_BitMask_Green)
          | (v16 >> g_BitShift_Green_0 << g_BitShift_Red));
          v19 = v17 | (16 * v16) | (v18 >> 4); /*0x6422c6*/
          v20 = v49[v19]; /*0x6422c8*/
          if ( !v20 ) /*0x6422cd*/
            ++Block; /*0x6422cf*/
          ++v14; /*0x6422d4*/
          v49[v19] = v20 + 1; /*0x6422d5*/
          Width = v61.Width; /*0x6422d8*/
        }
        while ( v14 < v61.Width ); /*0x6422de*/
        v12 = v49; /*0x6422e4*/
      }
      ++v42; /*0x6422f3*/
    }
    while ( v42 < v61.Height ); /*0x6422f7*/
  }
  DSurface::Unlock((DSurface *)&v61); /*0x642301*/
  v21 = a2; /*0x642306*/
  v22 = __2_YAPAXI_Z(2 * a2); /*0x642311*/
  Blocka = (_WORD *)v22; /*0x642319*/
  v45 = 0; /*0x64231f*/
  if ( a2 > 0 ) /*0x642327*/
  {
    v43 = (_WORD *)v22; /*0x642329*/
    do /*0x642370*/
    {
      v23 = -1; /*0x64232d*/
      v24 = 0; /*0x642330*/
      v25 = 0; /*0x642332*/
      v26 = (int *)v12; /*0x642334*/
      do /*0x642349*/
      {
        if ( *v26 > v24 ) /*0x64233a*/
        {
          v24 = *v26; /*0x64233c*/
          v23 = v25; /*0x64233e*/
        }
        ++v25; /*0x642340*/
        ++v26; /*0x642341*/
      }
      while ( v25 < 4096 ); /*0x642349*/
      if ( v23 == -1 ) /*0x64234e*/
        break; /*0x64234e*/
      *((_DWORD *)v12 + v23) = 0; /*0x642358*/
      *v43 = v23; /*0x642360*/
      ++v45; /*0x642368*/
      ++v43; /*0x64236c*/
    }
    while ( v45 < a2 ); /*0x642370*/
  }
  v53 = (_BYTE *)__2_YAPAXI_Z(v61.Height * v61.Width); /*0x642384*/
  v51 = v53; /*0x642388*/
  DSurface::Lock((DSurface *)&v61, 0, 0); /*0x642396*/
  v44 = 0; /*0x64239f*/
  if ( v61.Height > 0 ) /*0x6423a9*/
  {
    v27 = v61.Width; /*0x6423af*/
    while ( 1 ) /*0x6423b3*/
    {
      v28 = 0; /*0x6423b3*/
      v52 = 0; /*0x6423b7*/
      if ( v27 > 0 ) /*0x6423bb*/
        break; /*0x6423bb*/
LABEL_37:
      if ( ++v44 >= v61.Height ) /*0x642529*/
        goto LABEL_38; /*0x642529*/
    }
    while ( 1 ) /*0x6423c1*/
    {
      v57 = v28; /*0x6423c1*/
      v58 = v44; /*0x6423cd*/
      v29 = XSurface::GetPixel(&v61, &v57); /*0x6423d6*/
      v30 = 0; /*0x6423ed*/
      v46 = -1; /*0x6423ef*/
      v50 = 0xFFFF; /*0x6423f7*/
      LOBYTE(v55) = (unsigned __int8)(v29 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x642408*/
      BYTE1(v55) = (unsigned __int8)(v29 >> g_BitMask_Green) << g_BitMask_Blue; /*0x642429*/
      BYTE2(v55) = (unsigned __int8)(v29 >> g_BitShift_Blue) << g_BitMask_Red; /*0x642431*/
      if ( v21 > 0 ) /*0x642435*/
      {
        v31 = Blocka; /*0x642447*/
        v32 = (unsigned __int8)v55; /*0x642451*/
        v54[0] = BYTE1(v55); /*0x642460*/
        while ( 1 ) /*0x642490*/
        {
          v33 = 16 * (*v31 & 0xF) - BYTE2(v55); /*0x642490*/
          v34 = (HIDWORD(v33) ^ v33) - HIDWORD(v33) + abs32((((unsigned __int16)*v31 >> 4) & 0xF0) - v32); /*0x642499*/
          v35 = (*v31 & 0xF0) - v54[0]; /*0x6424a4*/
          v36 = (HIDWORD(v35) ^ v35) - HIDWORD(v35) + v34; /*0x6424a9*/
          if ( !v36 ) /*0x6424ab*/
            break; /*0x6424ab*/
          if ( v36 < v50 ) /*0x6424b1*/
          {
            v50 = v36; /*0x6424b3*/
            v46 = v30; /*0x6424b7*/
          }
          ++v30; /*0x6424c2*/
          ++v31; /*0x6424c3*/
          if ( v30 >= a2 ) /*0x6424c8*/
          {
            v37 = v46; /*0x6424ca*/
            goto LABEL_31; /*0x6424ce*/
          }
          v32 = (unsigned __int8)v55; /*0x642466*/
        }
        v37 = v30; /*0x6424d0*/
LABEL_31:
        if ( v37 != -1 && v37 < 256 ) /*0x6424dc*/
        {
          v21 = a2; /*0x6424f3*/
          goto LABEL_36; /*0x6424f3*/
        }
        v21 = a2; /*0x6424de*/
      }
      LOBYTE(v37) = 0; /*0x6424ed*/
LABEL_36:
      *v51 = v37; /*0x6424fa*/
      v27 = v61.Width; /*0x642500*/
      ++v51; /*0x642505*/
      v28 = ++v52; /*0x64250d*/
      if ( v52 >= v61.Width ) /*0x642514*/
        goto LABEL_37; /*0x642514*/
    }
  }
LABEL_38:
  DSurface::Unlock((DSurface *)&v61); /*0x64252f*/
  v38 = 2 * v21 + 12 + v61.Height * v61.Width; /*0x642545*/
  v54[0] = 2 * v21 + 12; /*0x642547*/
  v39 = (int *)__2_YAPAXI_Z(v38); /*0x642551*/
  *v39 = v61.Width; /*0x64255b*/
  v39[1] = v61.Height; /*0x642562*/
  v39[2] = v21; /*0x64256a*/
  v40 = v54[0]; /*0x642570*/
  qmemcpy(v39 + 3, Blocka, 2 * v21); /*0x642577*/
  qmemcpy((char *)v39 + v40, v53, v61.Height * v61.Width); /*0x642595*/
  __3_YAXPAX_Z(Blocka); /*0x6425a3*/
  __3_YAXPAX_Z(v53); /*0x6425ad*/
  __3_YAXPAX_Z(v49); /*0x6425b7*/
  *(_DWORD *)a3 = v38; /*0x6425c9*/
  Debug::Log(); /*0x6425cb*/
  DSurface::Destroy((DSurface *)&v61); /*0x6425d7*/
  return (int)v39; /*0x64213f*/
}



// ==== 0x006425F0  ModemGame::RenderPaletteImage  this=ModemGame  sig=csp ====
int __thiscall ModemGame::RenderPaletteImage(ModemGame *this, int *a2)
{
  int v4; // ebx
  int *v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  char *v7; // eax
  char *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // edx
  unsigned int v12; // eax
  int *v13; // ecx
  unsigned int v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  unsigned __int8 *i; // [esp+1Ch] [ebp-24h]
  int *v20; // [esp+20h] [ebp-20h]
  int v21; // [esp+24h] [ebp-1Ch]
  _DWORD v22[2]; // [esp+28h] [ebp-18h] BYREF
  char v23[16]; // [esp+30h] [ebp-10h] BYREF
  int *v24; // [esp+44h] [ebp+4h]

  v4 = a2[1]; /*0x6425fd*/
  v5 = a2 + 2; /*0x642605*/
  v24 = (int *)*a2; /*0x642608*/
  v21 = v4; /*0x64260c*/
  v20 = v5; /*0x642612*/
  v18 = *v5; /*0x642616*/
  v6 = *(void (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x64261a*/
  if ( v6 ) /*0x64261f*/
    (**v6)(v6, 1); /*0x642625*/
  v7 = (char *)__2_YAPAXI_Z(0x24u); /*0x642629*/
  if ( v7 ) /*0x642633*/
    v8 = DSurface::Construct(v7, (int)v24, v4, 1, 0); /*0x642641*/
  else
    v8 = 0; /*0x642648*/
  *(_DWORD *)this->__pad_0 = v8; /*0x64264a*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v8 + 24))(v8, 0); /*0x642653*/
  result = v18; /*0x642656*/
  v17 = 0; /*0x64265a*/
  for ( i = (unsigned __int8 *)a2 + 2 * v18 + 12; v17 < v4; ++v17 ) /*0x64266c*/
  {
    v10 = 0; /*0x642676*/
    if ( (int)v24 > 0 ) /*0x64267a*/
    {
      do /*0x642718*/
      {
        v22[0] = v10; /*0x642686*/
        v11 = *i++; /*0x64268a*/
        v12 = *((unsigned __int16 *)v5 + v11 + 2); /*0x64269c*/
        v13 = *(int **)this->__pad_0; /*0x6426eb*/
        v14 = ((int)(16 * (v12 & 0xF)) >> g_BitMask_Red << g_BitShift_Blue) /*0x6426ee*/
            | ((unsigned __int8)(v12 & 0xF0) >> g_BitMask_Blue << g_BitMask_Green)
            | (((v12 >> 4) & 0xF0) >> g_BitShift_Green_0 << g_BitShift_Red);
        v22[1] = v17; /*0x6426f4*/
        v15 = *v13; /*0x6426f8*/
        v16 = (*(int (__thiscall **)(int *, char *))(*v13 + 120))(v13, v23); /*0x6426fa*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int, int))(v15 + 136))( /*0x642707*/
          *(_DWORD *)this->__pad_0,
          v22,
          v14,
          v16);
        v5 = v20; /*0x642711*/
        ++v10; /*0x642715*/
      }
      while ( v10 < (int)v24 ); /*0x642718*/
      v4 = v21; /*0x64271e*/
    }
    result = v17 + 1; /*0x642726*/
  }
  return result; /*0x642733*/
}



// ==== 0x00642740  CoordStruct::Set2  this=ParticleSystemClass  sig=csp ====
_DWORD *__thiscall CoordStruct::Set2(CoordStruct *this, __int16 *a2, int a3)
{
  int v4; // edx

  v4 = *a2 << 8; /*0x642756*/
  this->ptr_8 = (a2[1] << 8) + 128; /*0x642759*/
  this->ptr_C = a3; /*0x642766*/
  this->vfptr = (void *)(v4 + 128); /*0x642769*/
  return &this->vfptr; /*0x64276b*/
}



// ==== 0x00642770  sub_642770  this=-  sig=ida-proto ====
int sub_642770()
{
  dword_AC4F18 = 0; /*0x642772*/
  dword_AC4F1C = 0; /*0x642777*/
  dword_AC4F20 = 0; /*0x64277c*/
  dword_AC4F24 = 0; /*0x642781*/
  return 0; /*0x642786*/
}



// ==== 0x00642790  sub_642790  this=-  sig=ida-proto ====
void sub_642790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x64279c*/
  dbl_AC4F30 = Math::Sqrt(v0 + v0); /*0x6427ae*/
}



// ==== 0x006427C0  sub_6427C0  this=-  sig=ida-proto ====
void sub_6427C0()
{
  dbl_AC5008 = dbl_AC4F30 / 60.0; /*0x6427cc*/
}



// ==== 0x006427E0  sub_6427E0  this=-  sig=ida-proto ====
void sub_6427E0()
{
  dbl_AC4FF0 = 1.0 / dbl_AC5008; /*0x6427ec*/
}



// ==== 0x00642800  sub_642800  this=-  sig=ida-proto ====
void sub_642800()
{
  dbl_AC4FE8 = 0.0174532925199433 * 45.0; /*0x64280c*/
}



// ==== 0x00642820  sub_642820  this=-  sig=ida-proto ====
void sub_642820()
{
  dbl_AC4F38 = 0.0174532925199433 * 60.0; /*0x64282c*/
}



// ==== 0x00642840  sub_642840  this=-  sig=ida-proto ====
void sub_642840()
{
  dbl_AC4F10 = 0.0174532925199433 * 90.0; /*0x64284c*/
}



// ==== 0x00642860  sub_642860  this=-  sig=ida-proto ====
__int64 sub_642860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4F10 - dbl_AC4F38); /*0x642872*/
  result = Math::RoundToInt(v0 * dbl_AC4F30 * 0.5); /*0x642886*/
  dword_AC5010 = result; /*0x64288b*/
  return result; /*0x642890*/
}



// ==== 0x006428A0  sub_6428A0  this=-  sig=ida-proto ====
void sub_6428A0()
{
  dbl_AC4F40 = Math::ArcTan((double)dword_AC5010 * 0.00390625); /*0x6428b7*/
}



// ==== 0x006428D0  sub_6428D0  this=-  sig=ida-proto ====
void sub_6428D0()
{
  dbl_AC4FE0 = Math::ArcTan((double)(2 * dword_AC5010) / dbl_AC4F30); /*0x6428f2*/
}



// ==== 0x00642900  sub_642900  this=-  sig=ida-proto ====
__int64 sub_642900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC5010) + 0.5); /*0x64291b*/
  dword_AC5004 = result; /*0x642920*/
  return result; /*0x642926*/
}



// ==== 0x00642930  sub_642930  this=-  sig=ida-proto ====
int sub_642930()
{
  word_AC4F28 = 0; /*0x642932*/
  word_AC4F2A = 0; /*0x642938*/
  return 0; /*0x64293e*/
}



// ==== 0x00642940  sub_642940  this=-  sig=ida-proto ====
int sub_642940()
{
  dword_AC4F48 = 0; /*0x642942*/
  dword_AC4F4C = 0; /*0x642947*/
  dword_AC4F50 = 0; /*0x64294c*/
  return 0; /*0x642951*/
}



// ==== 0x00642960  sub_642960  this=-  sig=ida-proto ====
int sub_642960()
{
  dword_AC5000 = 0; /*0x642965*/
  dword_AC4FF8 = 128; /*0x64296f*/
  dword_AC4FFC = 128; /*0x642974*/
  return 128; /*0x642979*/
}



// ==== 0x00642980  sub_642980  this=-  sig=ida-proto ====
int sub_642980()
{
  sub_6429E0(dword_AC4F58); /*0x642985*/
  return atexit(sub_6429A0); /*0x642995*/
}



// ==== 0x006429A0  sub_6429A0  this=-  sig=ida-proto ====
void __cdecl sub_6429A0()
{
  dword_AC4F58[0] = (int)&ProgressScreenClass::`vftable'; /*0x6429a5*/
  if ( byte_AC4FB0 ) /*0x6429b1*/
  {
    __3_YAXPAX_Z(dword_AC4FAC); /*0x6429b9*/
    byte_AC4FB0 = 0; /*0x6429c1*/
  }
  dword_AC4FAC = 0; /*0x6429c8*/
}



// ==== 0x006429E0  ObjectClass::method_6429E0  this=ProgressScreenClass  sig=csp ====
_DWORD *__thiscall sub_6429E0(ObjectClass *this)
{
  this->ambientSoundController[3] = 0; /*0x6429e8*/
  this->ambientSoundController[4] = 0; /*0x6429eb*/
  this->customSound_controller[0] = 0; /*0x6429ee*/
  this->customSound_controller[1] = 0; /*0x6429f1*/
  LOBYTE(this->customSound_controller[2]) = 0; /*0x6429f4*/
  this->customSound_controller[3] = 0; /*0x6429f7*/
  LOBYTE(this->customSound_controller[4]) = 0; /*0x6429fa*/
  BYTE1(this->customSound_controller[4]) = 0; /*0x6429fd*/
  BYTE2(this->customSound_controller[4]) = 0; /*0x642a00*/
  this->customSound = 0; /*0x642a03*/
  *(_DWORD *)&this->bombVisible = 0; /*0x642a06*/
  this->health = 0; /*0x642a09*/
  this->spawnStatus = -1; /*0x642a0c*/
  *(_DWORD *)&this->needsRedraw = -1; /*0x642a0f*/
  LOBYTE(this->estimatedHealth) = 0; /*0x642a1d*/
  this->visibilityFlags = 0; /*0x642a20*/
  this->AbstractClass = &ProgressScreenClass::`vftable'; /*0x642a23*/
  memset(&this->?, 0, 0x40u); /*0x642a29*/
  return &this->AbstractClass; /*0x642a2d*/
}



// ==== 0x00642A60  ProgressAnim::Init  this=ProgressAnim  sig=csp ====
int __thiscall ProgressAnim_Init(int this, int a2, int a3, char a4, int a5)
{
  int v6; // ecx
  _DWORD *v7; // eax
  int result; // eax

  *(_DWORD *)(this + 72) = a2; /*0x642a6e*/
  *(_DWORD *)(this + 76) = a3; /*0x642a75*/
  v6 = 0; /*0x642a78*/
  *(_BYTE *)(this + 97) = a4; /*0x642a7c*/
  if ( a4 > 0 ) /*0x642a7f*/
  {
    v7 = (_DWORD *)(this + 8); /*0x642a81*/
    do /*0x642a93*/
    {
      *v7 = 0; /*0x642a84*/
      v7[1] = 0; /*0x642a86*/
      ++v6; /*0x642a8d*/
      v7 += 2; /*0x642a8e*/
    }
    while ( v6 < *(char *)(this + 97) ); /*0x642a93*/
  }
  result = a5; /*0x642a95*/
  *(_BYTE *)(this + 96) = 1; /*0x642a99*/
  if ( a5 ) /*0x642a9f*/
    *(_DWORD *)(this + 100) = a5; /*0x642aa1*/
  else
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x642abc*/
  *(_DWORD *)(this + 80) = 0; /*0x642aa4*/
  *(_DWORD *)(this + 124) = -1; /*0x642aa7*/
  return result; /*0x642aae*/
}



// ==== 0x00642AD0  Scenario::SetByte96  this=Scenario  sig=csp ====
void __thiscall Scenario::SetByte96(Scenario *this)
{
  LOBYTE(this->Scenario_field_0x60) = 0; /*0x642ad0*/
}



// ==== 0x00642B10  Scenario::SetDword32  this=Scenario  sig=csp ====
int __thiscall Scenario::SetDword32(Scenario *this, int a2)
{
  this->Scenario_field_0x80 = (void *)a2; /*0x642b14*/
  return a2; /*0x642b1a*/
}



// ==== 0x00642B20  LoadingScreen::GetValue  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::GetValue(LoadingScreen *this)
{
  return this->q020; /*0x642b26*/
}



// ==== 0x00642B30  LoadingScreen::FindLoadScreenAnim  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::FindLoadScreenAnim(LoadingScreen *this)
{
  if ( this->q020 ) /*0x642b30*/
    return FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x642b4e*/
  else
    return FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1); /*0x642b44*/
}



// ==== 0x00642B60  LoadingScreen::GetColorScheme  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::GetColorScheme(LoadingScreen *this)
{
  if ( (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) && *(_DWORD *)(*dword_A8DA78 + 107) == -1 ) /*0x642b7a*/
    return FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x642b86*/
  if ( this->q020 ) /*0x642b8b*/
    return FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x642ba9*/
  return FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1);
}



// ==== 0x00642BB0  Render_Render_642BB0  this=-  sig=csp ====
int __stdcall sub_642BB0(unsigned int a1)
{
  int result; // eax
  unsigned int PlayerColor; // eax

  result = 0; /*0x642bba*/
  if ( (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) && *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * a1) + 107) == -1 ) /*0x642bd8*/
    return *((_DWORD *)dword_B054D4 + SessionClass::GetPlayerColorScheme(0xFFFFFFFE)); /*0x642bed*/
  if ( a1 < 8 ) /*0x642bf5*/
  {
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)(dword_A8DA78 + 4 * a1)); /*0x642bff*/
    return *((_DWORD *)dword_B054D4 + SessionClass::GetPlayerColorScheme(PlayerColor)); /*0x642c15*/
  }
  return result; /*0x642bec*/
}



// ==== 0x00642C20  SHPClass::Load  this=SHPClass  sig=csp ====
int __thiscall SHPClass::Load(int this, char *Source, char *a3, int a4)
{
  int result; // eax

  if ( Source ) /*0x642c2a*/
  {
    if ( *(_DWORD *)(this + 84) ) /*0x642c2c*/
    {
      if ( *(_BYTE *)(this + 88) ) /*0x642c33*/
      {
        __3_YAXPAX_Z(*(void **)(this + 84)); /*0x642c3b*/
        *(_BYTE *)(this + 88) = 0; /*0x642c43*/
      }
      *(_DWORD *)(this + 84) = 0; /*0x642c47*/
    }
    result = (int)LoadFileSHP(Source, (bool *)(this + 88)); /*0x642c53*/
    *(_DWORD *)(this + 84) = result; /*0x642c5a*/
    if ( result ) /*0x642c5d*/
    {
      if ( a3 ) /*0x642c65*/
      {
        *(_DWORD *)(this + 92) = a3; /*0x642c69*/
        Render_Load(a3); /*0x642c6c*/
      }
      *(_DWORD *)(this + 116) = a4; /*0x642c75*/
      return a4; /*0x642c71*/
    }
  }
  return result; /*0x642c78*/
}



// ==== 0x00642C80  TextRenderer::MeasureBuilding  this=TextRenderer  sig=csp ====
int __thiscall TextRenderer::MeasureBuilding(int *this, int a2, int a3, int a4, char a5, char a6)
{
  int result; // eax
  _DWORD *FoundationSize; // eax
  int v9; // ebx
  int Default; // edi
  int *v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // edi
  int *Viewport; // eax
  int v16; // kr04_4
  int Instance; // [esp+4h] [ebp-3Ch]
  int v18; // [esp+8h] [ebp-38h]
  int v19; // [esp+Ch] [ebp-34h]
  int v20; // [esp+18h] [ebp-28h]
  int v21[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v22; // [esp+3Eh] [ebp-2h]
  int v23; // [esp+44h] [ebp+4h]

  result = a2; /*0x642c80*/
  if ( a2 == -1 && a3 == -1 ) /*0x642c9a*/
  {
    v19 = *((char *)this + 97); /*0x642cb1*/
    FoundationSize = Building::GetFoundationSize(v21, 0); /*0x642cb5*/
    v9 = 0; /*0x642cbc*/
    Default = 0; /*0x642cc2*/
    v20 = FoundationSize[2]; /*0x642cce*/
    v18 = FoundationSize[3] + 6; /*0x642cd8*/
    if ( a5 ) /*0x642ce2*/
    {
      Default = BuildingType::FindDefault(0); /*0x642ceb*/
      if ( Default ) /*0x642cef*/
      {
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642cfc*/
        Default = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 128))(Default); /*0x642d04*/
      }
    }
    Instance = TextRenderer::GetInstance(); /*0x642d10*/
    v11 = v21; /*0x642d14*/
    v23 = 15; /*0x642d18*/
    do /*0x642d3d*/
    {
      *(_WORD *)v11 = *(_WORD *)CharToWideString(g_Str_W); /*0x642d2d*/
      v11 = (int *)((char *)v11 + 2); /*0x642d35*/
      --v23; /*0x642d39*/
    }
    while ( v23 ); /*0x642d3d*/
    v22 = 0; /*0x642d4c*/
    v12 = Text::MeasureWidth((int)v21, 0); /*0x642d53*/
    if ( v18 > Default ) /*0x642d6b*/
      Default = v18; /*0x642d6d*/
    if ( Default <= *(_DWORD *)(Instance + 28) ) /*0x642d71*/
      Default = *(_DWORD *)(Instance + 28); /*0x642d73*/
    v13 = v9 + v12 + v20 + 36; /*0x642d79*/
    v14 = Default + 4; /*0x642d7c*/
    if ( v19 > 1 ) /*0x642d82*/
      v14 *= v19; /*0x642d87*/
    Viewport = Display::GetViewport(v21); /*0x642d8d*/
    v16 = Viewport[2] - v13; /*0x642dac*/
    result = (Viewport[3] - v14) / 2; /*0x642db9*/
    *(this + 26) = v16 / 2; /*0x642dbb*/
    *(this + 27) = result; /*0x642dbe*/
  }
  else
  {
    *(this + 26) = a2; /*0x642dc4*/
    *(this + 27) = a3; /*0x642dc7*/
  }
  LOBYTE(result) = a6; /*0x642dd2*/
  this->u32_50 = a4; /*0x642dd6*/
  *((_BYTE *)this + 112) = a5; /*0x642dd9*/
  *((_BYTE *)this + 113) = a6; /*0x642ddc*/
  return result; /*0x642ddf*/
}



// ==== 0x00642DF0  Scenario::SetDword30  this=Scenario  sig=csp ====
int __thiscall Scenario::SetDword30(Scenario *this, int a2)
{
  this->Scenario_field_0x78 = (void *)a2; /*0x642df4*/
  return a2; /*0x642df7*/
}



// ==== 0x00642E00  UI_Render  this=-  sig=csp ====
_DWORD *__stdcall sub_642E00(_DWORD *a1, _DWORD *a2)
{
  _DWORD *FoundationSize; // eax
  int v3; // ecx
  _DWORD v5[4]; // [esp+10h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v5, 0); /*0x642e0d*/
  v3 = FoundationSize[3]; /*0x642e2b*/
  *a1 = FoundationSize[2] + 6; /*0x642e2e*/
  *a2 = v3 + 6; /*0x642e37*/
  return a2; /*0x642e39*/
}



// ==== 0x00642E40  UI_Render_642E40  this=-  sig=csp ====
int __stdcall sub_642E40(_DWORD *a1, int *a2)
{
  int Default; // eax
  int v3; // esi
  int result; // eax

  Default = BuildingType::FindDefault(0); /*0x642e43*/
  v3 = Default; /*0x642e48*/
  if ( Default ) /*0x642e4c*/
  {
    *a1 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642e69*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x642e6f*/
    *a2 = result; /*0x642e7a*/
  }
  else
  {
    *a1 = 0; /*0x642e56*/
    *a2 = 0; /*0x642e58*/
    return (int)a1; /*0x642e4e*/
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
    *v4++ = *(_WORD *)CharToWideString(g_Str_W); /*0x642eaf*/
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
int *__stdcall sub_642EF0(_DWORD *a1, int *a2, int a3, char a4)
{
  _DWORD *FoundationSize; // eax
  int v5; // ebp
  int v6; // edi
  int Default; // eax
  int v8; // esi
  int Instance; // ebx
  _WORD *v10; // esi
  int v11; // eax
  int v12; // ebx
  int *result; // eax
  int v14; // edi
  int v15; // [esp+10h] [ebp-34h]
  int v16; // [esp+1Ch] [ebp-28h]
  _DWORD v17[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v18; // [esp+42h] [ebp-2h]
  int v19; // [esp+54h] [ebp+10h]

  FoundationSize = Building::GetFoundationSize(v17, 0); /*0x642f01*/
  v5 = 0; /*0x642f08*/
  v6 = 0; /*0x642f0e*/
  v16 = FoundationSize[2]; /*0x642f1a*/
  v15 = FoundationSize[3] + 6; /*0x642f24*/
  if ( a4 ) /*0x642f2e*/
  {
    Default = BuildingType::FindDefault(0); /*0x642f32*/
    v8 = Default; /*0x642f37*/
    if ( Default ) /*0x642f3b*/
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642f44*/
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x642f50*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x642f5c*/
  v10 = v17; /*0x642f5e*/
  v19 = 15; /*0x642f62*/
  do /*0x642f86*/
  {
    *v10++ = *(_WORD *)CharToWideString(g_Str_W); /*0x642f7b*/
    --v19; /*0x642f82*/
  }
  while ( v19 ); /*0x642f86*/
  v18 = 0; /*0x642f91*/
  v11 = Text::MeasureWidth((int)v17, 0); /*0x642f98*/
  v12 = *(_DWORD *)(Instance + 28); /*0x642fa1*/
  *a1 = v5 + v11 + v16 + 26; /*0x642fb4*/
  if ( v15 > v6 ) /*0x642fb6*/
    v6 = v15; /*0x642fb8*/
  result = a2; /*0x642fba*/
  *a2 = v6; /*0x642fc0*/
  if ( v6 <= v12 ) /*0x642fc2*/
    v6 = v12; /*0x642fc4*/
  *a2 = v6; /*0x642fc6*/
  *a1 += 10; /*0x642fd1*/
  v14 = *a2 + 4; /*0x642fd5*/
  *a2 = v14; /*0x642fdb*/
  if ( a3 > 1 ) /*0x642fe3*/
    *a2 = a3 * v14; /*0x642fe8*/
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
    *v7++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643070*/
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
    *v5++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643144*/
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
    *v5++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643240*/
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
    *v5++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643340*/
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
    *v11++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643396*/
    --v12; /*0x64339c*/
  }
  while ( v12 ); /*0x64339d*/
  v16 = 0; /*0x6433a8*/
  Text::MeasureWidth((int)v15, 0); /*0x6433af*/
  return (v9 - *(_DWORD *)(v10 + 28)) / 2; /*0x6433bb*/
}



// ==== 0x006433D0  Progress::GetAverage  this=Progress  sig=csp ====
int __thiscall Progress::GetAverage(Progress *this)
{
  int result; // eax
  int v2; // edx
  double v3; // st7

  v2 = *((char *)this + 97); /*0x6433d1*/
  v3 = 0.0; /*0x6433d5*/
  if ( v2 > 0 ) /*0x6433e1*/
  {
    result = (int)&this->m_Values[2]; /*0x6433e3*/
    do /*0x6433ec*/
    {
      v3 = v3 + *(double *)result; /*0x6433e6*/
      result += 8; /*0x6433e8*/
      --v2; /*0x6433eb*/
    }
    while ( v2 ); /*0x6433ec*/
  }
  return result; /*0x6433f6*/
}



// ==== 0x00643400  LoadScreen::RenderProgressBackground  this=LoadScreen  sig=csp ====
void __thiscall LoadScreen::RenderProgressBackground(int this, double a2, double a3, int *a4, int a5)
{
  _DWORD *FoundationSize; // eax
  int v7; // edi
  int v8; // ebp
  int BuildingAnimByName; // eax
  int *v10; // ebx
  int v11; // eax
  unsigned __int8 v12; // dl
  int v13; // eax
  int v14; // eax
  struct tagRECT *v15; // [esp+0h] [ebp-58h]
  int v16; // [esp+4h] [ebp-54h]
  int v17; // [esp+8h] [ebp-50h]
  __int16 v18; // [esp+10h] [ebp-48h]
  int v19; // [esp+18h] [ebp-40h]
  _DWORD v20[4]; // [esp+28h] [ebp-30h] BYREF
  int v21[2]; // [esp+38h] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-18h]
  int v23; // [esp+44h] [ebp-14h]
  _DWORD v24[4]; // [esp+48h] [ebp-10h] BYREF

  FoundationSize = Building::GetFoundationSize(v24, 0); /*0x643413*/
  v7 = FoundationSize[2]; /*0x643430*/
  v8 = FoundationSize[3]; /*0x64343c*/
  v20[1] = HIDWORD(a2) + 3; /*0x643446*/
  v19 = LODWORD(a2) + 3; /*0x64344e*/
  v20[0] = LODWORD(a2) + 3; /*0x643452*/
  v20[2] = v7; /*0x643456*/
  v20[3] = v8; /*0x64345a*/
  Rect::Inflate(v15, v16, v17); /*0x64345e*/
  BuildingAnimByName = a5; /*0x643463*/
  if ( a5 ) /*0x643469*/
  {
    LODWORD(a2) = *(_DWORD *)(a5 + 780); /*0x64348c*/
  }
  else
  {
    BuildingAnimByName = FindBuildingAnimByName(aDarkred, 1); /*0x643475*/
    LODWORD(a2) = dword_87F6C4; /*0x643480*/
  }
  if ( *(_DWORD *)(this + 116) ) /*0x643490*/
    LODWORD(a2) = *(_DWORD *)(this + 116); /*0x643497*/
  v10 = a4; /*0x64349e*/
  if ( *(_BYTE *)(this + 113) ) /*0x64349b*/
  {
    v11 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)&a5); /*0x6434b5*/
    v18 = *(_WORD *)v11; /*0x6434bd*/
    v12 = *(_BYTE *)(v11 + 2); /*0x6434c8*/
    v13 = *v10; /*0x6434cb*/
    v10 = a4; /*0x643521*/
    (*(void (__thiscall **)(int *, _DWORD *, int))(v13 + 88))( /*0x643529*/
      a4,
      v20,
      ((unsigned __int8)v18 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (HIBYTE(v18) >> g_BitMask_Blue << g_BitMask_Green)
    | (v12 >> g_BitMask_Red << g_BitShift_Blue));
  }
  v21[0] = v19; /*0x643538*/
  v21[1] = HIDWORD(a2) + 3; /*0x64353c*/
  v22 = v7; /*0x643544*/
  v23 = v8; /*0x643548*/
  LOWORD(v14) = Math::RoundToInt((double)v7 * a3); /*0x64354c*/
  v22 = v14; /*0x643551*/
  a3 = 0.0; /*0x64357f*/
  DrawToSurfaceSHP( /*0x643594*/
    (int)v10,
    SLODWORD(a2),
    *(_DWORD *)(this + 84),
    0,
    (int *)&a3,
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
  v7 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x643635*/
  if ( g_DSurface_Hidden ) /*0x643639*/
  {
    result = sub_4BAFE0((_DWORD *)g_DSurface_Hidden); /*0x64363b*/
    if ( !result ) /*0x643642*/
      return Surface::BlitTransparent(v8, g_DSurface_Hidden, a3, v7); /*0x64365b*/
  }
  return result; /*0x643660*/
}



// ==== 0x00643670  UI_Render  this=-  sig=csp ====
int *__stdcall sub_643670(int a1, int a2, size_t a3, int a4, int a5)
{
  int Instance; // ebx
  _WORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-38h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v13[30]; // [esp+24h] [ebp-20h] BYREF
  __int16 v14; // [esp+42h] [ebp-2h]

  Instance = TextRenderer::GetInstance(); /*0x643680*/
  v6 = v13; /*0x643682*/
  v7 = 15; /*0x643686*/
  do /*0x64369f*/
  {
    *v6++ = *(_WORD *)CharToWideString(g_Str_W); /*0x643698*/
    --v7; /*0x64369e*/
  }
  while ( v7 ); /*0x64369f*/
  v14 = 0; /*0x6436ab*/
  v8 = Text::MeasureWidth((int)v13, 0); /*0x6436b0*/
  v9 = *(_DWORD *)(Instance + 28); /*0x6436b9*/
  if ( a5 != -1 ) /*0x6436bf*/
    v8 = a5; /*0x6436c1*/
  v12[2] = v8 + a1; /*0x6436d5*/
  v12[3] = v9 + a2; /*0x6436d9*/
  v12[0] = 0; /*0x6436fa*/
  v12[1] = 0; /*0x6436fe*/
  return TextRenderer::DrawText(&v11, a3, g_DSurface_Hidden, v12, (int)&a1, a4, 0, 25); /*0x64370a*/
}



// ==== 0x00643720  ObjectClass::RenderBuildingProductionButton  this=ObjectClass  sig=csp ====
int __thiscall RenderBuildingProductionButton(int this, int a2, int a3, int *a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  int *FoundationSize; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebp
  int v18; // ecx
  char v19; // dl
  int v20; // eax
  int Default; // eax
  int v22; // eax
  int v23; // edx
  int PlayerSide; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // eax
  __int16 v28; // di
  int v30; // [esp+10h] [ebp-4Ch] BYREF
  int v31; // [esp+14h] [ebp-48h] BYREF
  int v32; // [esp+18h] [ebp-44h] BYREF
  int v33; // [esp+1Ch] [ebp-40h] BYREF
  int v34; // [esp+20h] [ebp-3Ch] BYREF
  int v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  int v37; // [esp+2Ch] [ebp-30h]
  int v38; // [esp+30h] [ebp-2Ch]
  double v39; // [esp+34h] [ebp-28h]
  unsigned int v40[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v41; // [esp+4Ch] [ebp-10h]
  int v42; // [esp+50h] [ebp-Ch]
  int v43; // [esp+54h] [ebp-8h]
  int v44; // [esp+58h] [ebp-4h]
  int v45; // [esp+70h] [ebp+14h]

  if ( a5 < *(char *)(this + 97) ) /*0x643733*/
  {
    v39 = *(double *)(this + 8 * a5 + 8) / *(double *)(this + 72); /*0x64374c*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 76); /*0x643738*/
    LODWORD(v39) = *(_DWORD *)(this + 72); /*0x64373b*/
    HIDWORD(v39) = v7; /*0x64373f*/
  }
  v31 = a4[1]; /*0x643762*/
  v32 = 0; /*0x643770*/
  v30 = 0; /*0x643774*/
  TextRenderer::MeasureBuilding2(&v32, &v30, 1, a6); /*0x643778*/
  v8 = v31 + a5 * v30; /*0x643793*/
  FoundationSize = Building::GetFoundationSize(v40, 0); /*0x643795*/
  v41 = *FoundationSize; /*0x64379c*/
  v42 = FoundationSize[1]; /*0x6437a3*/
  v43 = FoundationSize[2]; /*0x6437aa*/
  v44 = FoundationSize[3]; /*0x6437b7*/
  v30 = 0; /*0x6437bb*/
  v32 = 0; /*0x6437bf*/
  if ( a6 ) /*0x6437c3*/
    UI_Render_642E40(&v30, &v32); /*0x6437d1*/
  v31 = 0; /*0x6437de*/
  v33 = 0; /*0x6437e2*/
  UI_Render_642E80(&v31, &v33); /*0x6437e6*/
  v32 = v30 + v31 + v43 + 36; /*0x643800*/
  if ( *(_DWORD *)(this + 120) != -1 ) /*0x64380a*/
    v32 = *(_DWORD *)(this + 120); /*0x64380c*/
  v10 = Building::GetFoundationSize(v40, 0); /*0x643819*/
  v11 = *v10; /*0x64381e*/
  v33 = 0; /*0x643820*/
  v41 = v11; /*0x643824*/
  v31 = 0; /*0x643828*/
  v42 = v10[1]; /*0x64382f*/
  v43 = v10[2]; /*0x643836*/
  v12 = a4[1]; /*0x64383a*/
  v13 = v10[3]; /*0x64383d*/
  v14 = *a4; /*0x643840*/
  v44 = v13; /*0x643843*/
  v40[0] = v14; /*0x64384b*/
  v40[1] = v12; /*0x64384f*/
  TextRenderer::MeasureBuilding2(&v33, &v31, 1, a6); /*0x643862*/
  v34 = 0; /*0x643873*/
  v30 = 0; /*0x643877*/
  UI_Render(&v34, &v30); /*0x64387b*/
  v40[0] += 5; /*0x643891*/
  v15 = *a4; /*0x6438a4*/
  v16 = a4[1]; /*0x6438a6*/
  v17 = v8 + (v31 - v30) / 2; /*0x6438a9*/
  v38 = v16; /*0x6438ab*/
  v18 = v15 + v43 + 21; /*0x6438af*/
  v19 = a6; /*0x6438b3*/
  v37 = v18; /*0x6438b9*/
  v41 = v18; /*0x6438bd*/
  v42 = v16; /*0x6438c1*/
  if ( a6 ) /*0x6438c5*/
  {
    v34 = 0; /*0x6438d6*/
    v31 = 0; /*0x6438da*/
    TextRenderer::MeasureBuilding2(&v34, &v31, 1, a6); /*0x6438de*/
    v33 = 0; /*0x6438ef*/
    v30 = 0; /*0x6438f3*/
    UI_Render_642E40(&v33, &v30); /*0x6438f7*/
    v18 = v37; /*0x643906*/
    v19 = a6; /*0x64390d*/
    v42 = v8 + (v31 - v30) / 2; /*0x643915*/
    v16 = v38; /*0x643919*/
  }
  v35 = v18; /*0x64391d*/
  v36 = v16; /*0x643930*/
  v34 = 0; /*0x643934*/
  v31 = 0; /*0x643938*/
  TextRenderer::MeasureBuilding2(&v34, &v31, 1, v19); /*0x64393c*/
  v33 = 0; /*0x643949*/
  v30 = 0; /*0x64394d*/
  UI_Render_642E80(&v33, &v30); /*0x643951*/
  v20 = (v31 - v30) / 2; /*0x643967*/
  v31 = v20; /*0x64396b*/
  if ( a6 ) /*0x64396f*/
  {
    Default = BuildingType::FindDefault(0); /*0x643973*/
    v34 = Default; /*0x64397a*/
    if ( Default ) /*0x64397e*/
    {
      v33 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64398f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 128))(v34); /*0x643995*/
      v22 = v33; /*0x64399b*/
    }
    else
    {
      v22 = 0; /*0x643980*/
    }
    v23 = v22 + v37 + 10; /*0x6439a3*/
    v20 = v31; /*0x6439a7*/
    v35 = v23; /*0x6439ab*/
  }
  v36 = v8 + v20; /*0x6439bb*/
  LoadScreen::RenderProgressBackground(COERCE_DOUBLE(__PAIR64__(v17, v40[0])), v39, g_DSurface_Hidden, a2); /*0x6439d3*/
  if ( a6 ) /*0x6439dc*/
  {
    PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)(dword_A8DA78 + 4 * a5)); /*0x6439ef*/
    if ( (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) && *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * a5) + 107) == -1 ) /*0x643a11*/
      PlayerSide = -3; /*0x643a13*/
    v45 = BuildingType::FindDefault((void *)PlayerSide); /*0x643a21*/
    if ( v45 ) /*0x643a25*/
    {
      v25 = BuildingType::FindDefault(0); /*0x643a2e*/
      if ( v25 ) /*0x643a32*/
      {
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x643a47*/
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 128))(v25); /*0x643a49*/
      }
      else
      {
        v26 = 0; /*0x643a34*/
        v27 = 0; /*0x643a36*/
      }
      Rect::Set(v40, v41, v42, v26, v27); /*0x643a5f*/
      v28 = PackRGB565(255); /*0x643a7b*/
      if ( g_DSurface_Hidden && !(unsigned __int8)sub_4BAFE0() ) /*0x643a81*/
        Surface::BlitTransparent((int *)v40, g_DSurface_Hidden, v45, v28); /*0x643aa0*/
    }
  }
  return UI_Render_643670(v35, v36, a3, a2, *a4 - v35 + v32 - 3); /*0x643ad1*/
}



// ==== 0x00643AE0  LoadScreen::Render  this=LoadScreen  sig=csp ====
int __userpurge LoadScreen::Render@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, double a4)
{
  int result; // eax
  HWND v6; // eax
  HWND DlgItem; // eax
  char v8; // dl
  int v9; // ecx
  char v10; // al
  signed int v11; // edi
  int BuildingAnimByName; // eax
  int v13; // eax
  int v14; // [esp+0h] [ebp-20h]
  int v15; // [esp+4h] [ebp-1Ch]
  double v16; // [esp+8h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF
  double v18; // [esp+24h] [ebp+4h]

  LOBYTE(result) = *(_BYTE *)(a1 + 96); /*0x643ae7*/
  if ( (_BYTE)result ) /*0x643aec*/
  {
    result = *(_DWORD *)(a1 + 84); /*0x643af2*/
    if ( result ) /*0x643af7*/
    {
      v6 = *(HWND *)(a1 + 100); /*0x643afd*/
      if ( v6 ) /*0x643b02*/
      {
        DlgItem = GetDlgItem(v6, 1593); /*0x643b0a*/
        ScreenDialogToClient(DlgItem, &Rect); /*0x643b16*/
        v8 = *(_BYTE *)(a1 + 97); /*0x643b1b*/
        v16 = *(double *)&Rect.left; /*0x643b26*/
        if ( v8 > 0 ) /*0x643b30*/
          v18 = *(double *)(a1 + 8) / *(double *)(a1 + 72); /*0x643b48*/
        else
          v18 = *(double *)(a1 + 72); /*0x643b38*/
        LoadScreen::RenderProgressBackground(a1, *(double *)&Rect.left, v18, (int *)DSurface_Alternate, 0); /*0x643b63*/
      }
      else
      {
        v16 = a4; /*0x643b7b*/
        if ( *(_QWORD *)&a4 == __PAIR64__(LODWORD(a4), -1) ) /*0x643b83*/
        {
          v9 = *(_DWORD *)(a1 + 108); /*0x643b8c*/
          LODWORD(v16) = *(_DWORD *)(a1 + 104); /*0x643b8f*/
          HIDWORD(v16) = v9; /*0x643b93*/
        }
        v10 = *(_BYTE *)(a1 + 97); /*0x643b97*/
        v11 = *(_DWORD *)(a1 + 80); /*0x643b9a*/
        if ( v10 == 1 ) /*0x643b9f*/
        {
          if ( dword_A8B238[0] ) /*0x643ba8*/
          {
            if ( !v11 ) /*0x643bdc*/
              v11 = *(_DWORD *)dword_A8DA78; /*0x643be4*/
            BuildingAnimByName = Render_Render_642BB0(0); /*0x643bea*/
          }
          else
          {
            if ( !v11 ) /*0x643bac*/
              v11 = (signed int)&g_TypeClass_DefaultString; /*0x643bae*/
            if ( *(_DWORD *)(a1 + 128) ) /*0x643bb3*/
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_SovietLoad, 1); /*0x643bd3*/
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_AlliedLoad, 1); /*0x643bc7*/
          }
          RenderBuildingProductionButton(a1, BuildingAnimByName, v11, (int *)&v16, 0, *(_BYTE *)(a1 + 112)); /*0x643bfe*/
        }
        else
        {
          v11 = 0; /*0x643c05*/
          if ( v10 > 0 ) /*0x643c09*/
          {
            do /*0x643c36*/
            {
              v13 = Render_Render_642BB0(v11); /*0x643c0e*/
              RenderBuildingProductionButton( /*0x643c2a*/
                a1,
                v13,
                *(_DWORD *)(dword_A8DA78 + 4 * v11),
                (int *)&v16,
                v11,
                *(_BYTE *)(a1 + 112));
              ++v11; /*0x643c33*/
            }
            while ( v11 < *(char *)(a1 + 97) ); /*0x643c36*/
          }
        }
        return Frame::Present((int)g_DSurface_Hidden, a2, a3, v11, 0, v14, v15, (int *)LODWORD(v16)); /*0x643c42*/
      }
    }
  }
  return result; /*0x643b68*/
}



// ==== 0x00643C50  Network::UpdateLatencyDisplay  this=Network  sig=csp ====
int __thiscall Network::UpdateLatencyDisplay(int this, int a2, double a3, double a4)
{
  int v4; // ebx
  double v6; // st7
  int v7; // ecx
  double *v8; // eax
  int result; // eax
  int v10; // edx
  double v11; // st7
  double v12; // st6
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  int v17; // ecx
  double v18; // st7
  double *v19; // eax
  int v20; // eax
  void (__thiscall ***v21)(_DWORD, int, _DWORD *); // ecx
  HWND v22; // eax
  _DWORD v23[2]; // [esp+8h] [ebp-8h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v6 = 0.0; /*0x643c5c*/
  v7 = *(char *)(this + 97); /*0x643c62*/
  if ( v7 > 0 ) /*0x643c6c*/
  {
    v8 = (double *)(this + 8); /*0x643c6e*/
    do /*0x643c77*/
    {
      v6 = v6 + *v8++; /*0x643c71*/
      --v7; /*0x643c76*/
    }
    while ( v7 ); /*0x643c77*/
  }
  LOWORD(result) = Math::RoundToInt(v6); /*0x643c88*/
  v10 = result; /*0x643c90*/
  v11 = *(double *)(this + 8 * a2 + 8); /*0x643c94*/
  v12 = *(double *)(this + 72) * 0.01 * a3; /*0x643ca1*/
  *(double *)(this + 8 * a2 + 8) = v12; /*0x643ca4*/
  if ( v12 > *(double *)(this + 72) ) /*0x643cb0*/
  {
    *(_DWORD *)(this + 8 * a2 + 8) = *(_DWORD *)(this + 72); /*0x643cb5*/
    result = *(_DWORD *)(this + 76); /*0x643cb9*/
    *(_DWORD *)(this + 8 * a2 + 12) = result; /*0x643cbc*/
  }
  v14 = v11 < *(double *)(this + 8 * a2 + 8); /*0x643cc0*/
  v15 = 0; /*0x643cc0*/
  v16 = v11 == *(double *)(this + 8 * a2 + 8); /*0x643cc0*/
  LOWORD(result) = v13; /*0x643cc4*/
  if ( v11 != *(double *)(this + 8 * a2 + 8) ) /*0x643cc9*/
  {
    v17 = *(char *)(this + 97); /*0x643ccf*/
    v18 = 0.0; /*0x643cd3*/
    if ( v17 > 0 ) /*0x643cdf*/
    {
      v19 = (double *)(this + 8); /*0x643ce1*/
      do /*0x643cea*/
      {
        v18 = v18 + *v19++; /*0x643ce4*/
        --v17; /*0x643ce9*/
      }
      while ( v17 ); /*0x643cea*/
    }
    v23[0] = v10; /*0x643cf0*/
    LOWORD(v20) = Math::RoundToInt(v18); /*0x643cff*/
    v21 = *(void (__thiscall ****)(_DWORD, int, _DWORD *))(this + 4); /*0x643d04*/
    v23[1] = v20; /*0x643d07*/
    if ( v21 && *(_BYTE *)(this + 96) ) /*0x643d11*/
      (**v21)(v21, 4526, v23); /*0x643d24*/
    v22 = *(HWND *)(this + 100); /*0x643d26*/
    if ( v22 ) /*0x643d2b*/
      return SendMessageA(v22, 0xFu, 0, 0); /*0x643d34*/
    else
      return LoadScreen::Render(this, v4, (int)&savedregs, a4); /*0x643d4b*/
  }
  return result; /*0x643d3a*/
}



// ==== 0x00643E60  LoadScreen::IsActive  this=LoadScreen  sig=csp ====
int __thiscall LoadScreen::IsActive(LoadScreen *this)
{
  return *((_DWORD *)this + 25) != 0; /*0x643e6a*/
}



// ==== 0x00643E70  VtableStub::643E70  this=VtableStub  sig=csp ====
void __thiscall VtableStub::643E70(_DWORD *this)
{
  *(this + 25) = 0; /*0x643e70*/
}



// ==== 0x00643E80  Function::643E80  this=Function  sig=csp ====
int __thiscall Function::Method_643E80(Function *this, int a2)
{
  this->Function_field_0x04 = a2; /*0x643e84*/
  return a2; /*0x643e87*/
}



// ==== 0x00643E90  Progress::GetWeighted  this=Progress  sig=csp ====
int __thiscall Progress::GetWeighted(int this, int a2)
{
  return a2; /*0x643e9f*/
}



// ==== 0x00643EB0  sub_643EB0  this=-  sig=ida-proto ====
void sub_643EB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x643ebc*/
  dbl_AC5028 = Math::Sqrt(v0 + v0); /*0x643ece*/
}



// ==== 0x00643EE0  sub_643EE0  this=-  sig=ida-proto ====
void sub_643EE0()
{
  dbl_AC5078 = dbl_AC5028 / 60.0; /*0x643eec*/
}



// ==== 0x00643F00  sub_643F00  this=-  sig=ida-proto ====
void sub_643F00()
{
  dbl_AC5060 = 1.0 / dbl_AC5078; /*0x643f0c*/
}



// ==== 0x00643F20  sub_643F20  this=-  sig=ida-proto ====
void sub_643F20()
{
  dbl_AC5058 = 0.0174532925199433 * 45.0; /*0x643f2c*/
}



// ==== 0x00643F40  sub_643F40  this=-  sig=ida-proto ====
void sub_643F40()
{
  dbl_AC5030 = 0.0174532925199433 * 60.0; /*0x643f4c*/
}



// ==== 0x00643F60  sub_643F60  this=-  sig=ida-proto ====
void sub_643F60()
{
  dbl_AC5018 = 0.0174532925199433 * 90.0; /*0x643f6c*/
}



// ==== 0x00643F80  sub_643F80  this=-  sig=ida-proto ====
__int64 sub_643F80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC5018 - dbl_AC5030); /*0x643f92*/
  result = Math::RoundToInt(v0 * dbl_AC5028 * 0.5); /*0x643fa6*/
  dword_AC5080 = result; /*0x643fab*/
  return result; /*0x643fb0*/
}



// ==== 0x00643FC0  sub_643FC0  this=-  sig=ida-proto ====
void sub_643FC0()
{
  dbl_AC5038 = Math::ArcTan((double)dword_AC5080 * 0.00390625); /*0x643fd7*/
}



// ==== 0x00643FF0  sub_643FF0  this=-  sig=ida-proto ====
void sub_643FF0()
{
  dbl_AC5050 = Math::ArcTan((double)(2 * dword_AC5080) / dbl_AC5028); /*0x644012*/
}



// ==== 0x00644020  sub_644020  this=-  sig=ida-proto ====
__int64 sub_644020()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC5080) + 0.5); /*0x64403b*/
  dword_AC5074 = result; /*0x644040*/
  return result; /*0x644046*/
}



// ==== 0x00644050  sub_644050  this=-  sig=ida-proto ====
int sub_644050()
{
  word_AC5020 = 0; /*0x644052*/
  word_AC5022 = 0; /*0x644058*/
  return 0; /*0x64405e*/
}



// ==== 0x00644060  sub_644060  this=-  sig=ida-proto ====
int sub_644060()
{
  dword_AC5040 = 0; /*0x644062*/
  dword_AC5044 = 0; /*0x644067*/
  dword_AC5048 = 0; /*0x64406c*/
  return 0; /*0x644071*/
}



// ==== 0x00644080  sub_644080  this=-  sig=ida-proto ====
int sub_644080()
{
  dword_AC5070 = 0; /*0x644085*/
  dword_AC5068 = 128; /*0x64408f*/
  dword_AC506C = 128; /*0x644094*/
  return 128; /*0x644099*/
}



// ==== 0x006440A0  OverlayTypeClass::Construct  this=ParticleSystemTypeClass  sig=csp ====
_DWORD *__thiscall OverlayTypeClass::Construct(OverlayTypeClass *this, char *Source)
{
  void *v3; // eax

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x6440a9*/
  this->LandType[0] = -1; /*0x6440b3*/
  *(_DWORD *)&this->RadarColor[2] = -1; /*0x6440b9*/
  this->q2B8 = -1; /*0x6440bf*/
  LOBYTE(this->CellAnim) = 0; /*0x6440c5*/
  this->DamageLevels = 1; /*0x6440cb*/
  this->Strength = 0; /*0x6440d5*/
  *(_DWORD *)&this->Wall = 50; /*0x6440db*/
  *(_DWORD *)&this->NoUseTileLandType = 0; /*0x6440e5*/
  *(_DWORD *)&this->Explodes = 0; /*0x6440eb*/
  *(_DWORD *)&this->IsRubble = 0; /*0x6440f1*/
  this->ParticleSystemTypeClass_field_2C0 = 0; /*0x6440fc*/
  this->MainVoxel = 0; /*0x644102*/
  this->ParticleSystemTypeClass_field_2C8 = 0; /*0x644108*/
  this->Beam = -1717986918; /*0x64410e*/
  this->q0B4 = -1717986918; /*0x644114*/
  this->q0B6 = 0; /*0x64411a*/
  this->q0B8 = 0; /*0x644120*/
  this->q2E8 = 0; /*0x644126*/
  this->q2F0 = 0; /*0x64412c*/
  this->q0BE = 0; /*0x644132*/
  this->q2CC = 1069128089; /*0x64413b*/
  this->ParticleSystemTypeClass_field_bool_2D4 = 1067030937; /*0x644145*/
  this->q0B7 = 1077477376; /*0x64414f*/
  this->q0B9 = 0; /*0x644159*/
  this->q2EC = 0; /*0x64415f*/
  this->q0BD = 0; /*0x644165*/
  this->q0BF = 0; /*0x64416b*/
  this->q300 = 0; /*0x644171*/
  this->q304 = 0; /*0x644177*/
  this->q308 = 0; /*0x64417d*/
  *((_BYTE *)this + 777) = 0; /*0x644183*/
  this->q30A = 0; /*0x644189*/
  this->u8_30B = 0; /*0x644190*/
  this->q0C3 = 0; /*0x644196*/
  this->ObjectTypeClass = &ParticleSystemTypeClass::`vftable'; /*0x64419c*/
  this->? = &ParticleSystemTypeClass::`vftable'; /*0x6441a2*/
  this->? = &ParticleSystemTypeClass::`vftable'; /*0x6441a8*/
  this->? = &ParticleSystemTypeClass::`vftable'; /*0x6441af*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x6441b6*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 < *(int *)&stru_A83D50.__pad_14[12] /*0x6441ef*/
    || (BYTE1(stru_A83D50.SuperClass_field_0x24) || !*(_DWORD *)&stru_A83D50.__pad_14[12])
    && (int)stru_A83D50.SuperClass_field_0x2C > 0
    && (*(unsigned __int8 (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_14[4] + 8))(
         &stru_A83D50.__pad_14[4],
         (char *)stru_A83D50.SuperClass_field_0x2C + *(_DWORD *)&stru_A83D50.__pad_14[12],
         0) )
  {
    v3 = stru_A83D50.SuperClass_field_0x28++; /*0x6441fc*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * (_DWORD)v3) = this; /*0x64420b*/
  }
  this->? = 1; /*0x64420e*/
  return &this->ObjectTypeClass; /*0x644217*/
}



// ==== 0x006442D0  ParticleSystemTypeClass::GetType  this=ParticleSystemTypeClass  sig=csp ====
char __thiscall ParticleSystemTypeClass::GetType(ParticleSystemTypeClass *this, unsigned __int8 ***a2)
{
  int v3; // eax
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int ParticleSystemTypeClass_field_0x2A8; // ecx
  int v8; // eax
  int ParticleSystemTypeClass_field_0x2B8; // edx
  bool v13; // zf
  int v14; // eax
  float *XYZFromINI; // eax
  double v16; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  IUnknown *ParticleSystemTypeClass_field_0x2E4; // eax
  unsigned int v22; // ecx
  double v24; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  char ParticleSystemTypeClass_field_0x308_high; // al
  int Coord; // eax
  int ParticleSystemTypeClass_field_0x300; // ecx
  int v33; // eax
  char v34; // al
  double v37; // [esp+0h] [ebp-68h]
  double v38; // [esp+0h] [ebp-68h]
  double v39; // [esp+0h] [ebp-68h]
  double v40; // [esp+0h] [ebp-68h]
  double v41; // [esp+0h] [ebp-68h]
  int ParticleSystemTypeClass_field_0x29C; // [esp+4h] [ebp-64h]
  int v43; // [esp+4h] [ebp-64h]
  int v44; // [esp+14h] [ebp-54h] BYREF
  int v45; // [esp+18h] [ebp-50h]
  float v46[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+28h] [ebp-40h] BYREF

  _ESI = this; /*0x6442de*/
  INIClass::ResetSection((INIClass *)a2); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)_ESI, a2) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    (INIClass *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v3 = BuildingTypeClass::FindOrCreateEx(Destination); /*0x644318*/
  v4 = _ESI->__pad_298[0]; /*0x64431d*/
  _ESI->ParticleSystemTypeClass_field_0x294 = (IUnknown *)v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int *)a2,
                     (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                     g_INI_Key_Spawns,
                     v4);
  ParticleSystemTypeClass_field_0x29C = (int)_ESI->ParticleSystemTypeClass_field_0x29C; /*0x64433f*/
  _ESI->__pad_298[0] = Bool_Overwrite; /*0x644346*/
  _ESI->ParticleSystemTypeClass_field_0x29C = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x644351*/
                                                            (bool *)a2,
                                                            (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                            aSpawnframes,
                                                            ParticleSystemTypeClass_field_0x29C);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (bool *)a2,
                    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                    aParticlecap,
                    LODWORD(_ESI->ParticleSystemTypeClass_field_0x2A4));
  ParticleSystemTypeClass_field_0x2A8 = _ESI->ParticleSystemTypeClass_field_0x2A8; /*0x64436b*/
  LODWORD(_ESI->ParticleSystemTypeClass_field_0x2A4) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (bool *)a2,
         (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
         aSpawnradius,
         ParticleSystemTypeClass_field_0x2A8);
  __asm { fld dword ptr [esi+2A0h] } /*0x644385*/
  _ESI->ParticleSystemTypeClass_field_0x2A8 = v8; /*0x644390*/
  __asm { fstp [esp+68h+var_68]; double } /*0x644396*/
  INIClass::ReadDouble_Overwrite( /*0x64439f*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSlowdown,
    v37);
  __asm { fstp dword ptr [esi+2A0h] } /*0x6443a4*/
  *(float *)&_ESI->ParticleSystemTypeClass_field_0x2A0 = _ET1; /*0x6443a4*/
  __asm { fld dword ptr [esi+2ACh] } /*0x6443aa*/
  __asm { fstp [esp+68h+var_68]; double }
  INIClass::ReadDouble_Overwrite( /*0x6443be*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawncutoff,
    v38);
  __asm { fstp dword ptr [esi+2ACh] } /*0x6443c3*/
  *(float *)&_ESI->ParticleSystemTypeClass_field_0x2AC = _ET1; /*0x6443c3*/
  __asm { fld dword ptr [esi+2B0h] } /*0x6443c9*/
  __asm { fstp [esp+68h+var_68]; double }
  INIClass::ReadDouble_Overwrite( /*0x6443dd*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawntransluce,
    v39);
  ParticleSystemTypeClass_field_0x2B8 = _ESI->ParticleSystemTypeClass_field_0x2B8; /*0x6443e2*/
  __asm { fstp dword ptr [esi+2B0h] } /*0x6443ea*/
  *(float *)&_ESI->DamageDelay = _ET1; /*0x6443ea*/
  _ESI->ParticleSystemTypeClass_field_0x2B8 = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                                                (bool *)a2,
                                                (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                aLifetime,
                                                ParticleSystemTypeClass_field_0x2B8);
  INIClass::GetString( /*0x644416*/
    (INIClass *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aBehaveslike,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v45 = 0; /*0x64441b*/
  v44 = (int)off_836EE0; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v13 = _strcmpi(Destination, *(char **)v44) == 0; /*0x64443f*/
    v14 = v45; /*0x644441*/
    if ( v13 ) /*0x644445*/
      break; /*0x644445*/
    ++v45; /*0x644448*/
    v44 += 4; /*0x644458*/
    if ( v44 >= (int)g_INI_Key_Railgun ) /*0x64445c*/
    {
      v14 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  _ESI->ParticleSystemTypeClass_field_0x2B4 = v14; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 (ParticleSystemTypeClass *)a2,
                 v46,
                 (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                 aSpawndirection,
                 (float *)&_ESI->ParticleSystemTypeClass_field_2C0);
  _ESI->ParticleSystemTypeClass_field_2C0 = *(int *)XYZFromINI; /*0x644482*/
  _ESI->StartScale = (int)XYZFromINI[1]; /*0x64448b*/
  v40 = *(double *)&_ESI->Beam; /*0x6444a1*/
  _ESI->ParticleSystemTypeClass_field_2C8 = (int)XYZFromINI[2]; /*0x6444aa*/
  INIClass::ReadDouble_Overwrite( /*0x6444b0*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aParticlesperco,
    v40);
  v16 = *(double *)&_ESI->ParticleSystemTypeClass_field_0x2D0; /*0x6444bb*/
  __asm { fstp qword ptr [esi+2C8h] } /*0x6444c1*/
  *(double *)&_ESI->Beam = _RT1; /*0x6444c1*/
  INIClass::ReadDouble_Overwrite( /*0x6444d1*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpiraldeltaper,
    v16);
  v18 = *(_DWORD *)&_ESI->__pad_2D8[4]; /*0x6444d6*/
  v19 = *(_DWORD *)_ESI->__pad_2D8; /*0x6444dc*/
  __asm { fstp qword ptr [esi+2D0h] } /*0x6444e2*/
  *(double *)&_ESI->ParticleSystemTypeClass_field_0x2D0 = _RT1; /*0x6444e2*/
  INIClass::ReadDouble_Overwrite( /*0x6444f2*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpiralradius,
    COERCE_DOUBLE(__PAIR64__(v18, v19)));
  ParticleSystemTypeClass_field_0x2E4 = _ESI->ParticleSystemTypeClass_field_0x2E4; /*0x6444f7*/
  v22 = *(_DWORD *)&_ESI->__pad_2D8[8]; /*0x6444fd*/
  __asm { fstp qword ptr [esi+2D8h] } /*0x644503*/
  *(double *)_ESI->__pad_2D8 = _RT1; /*0x644503*/
  INIClass::ReadDouble_Overwrite( /*0x644513*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aPositionpertur,
    COERCE_DOUBLE(__PAIR64__((unsigned int)ParticleSystemTypeClass_field_0x2E4, v22)));
  v24 = *(double *)&_ESI->ParticleSystemTypeClass_field_0x2E8; /*0x64451e*/
  __asm { fstp qword ptr [esi+2E0h] } /*0x644524*/
  *(double *)&_ESI->__pad_2D8[8] = _RT1; /*0x644524*/
  INIClass::ReadDouble_Overwrite( /*0x644534*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aMovementpertur,
    v24);
  v26 = *(_DWORD *)&_ESI->__pad_2EC[8]; /*0x644539*/
  v27 = *(_DWORD *)&_ESI->__pad_2EC[4]; /*0x64453f*/
  __asm { fstp qword ptr [esi+2E8h] } /*0x644545*/
  *(double *)&_ESI->ParticleSystemTypeClass_field_0x2E8 = _RT1; /*0x644545*/
  INIClass::ReadDouble_Overwrite( /*0x644555*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aVelocitypertur,
    COERCE_DOUBLE(__PAIR64__(v26, v27)));
  ParticleSystemTypeClass_field_0x308_high = HIBYTE(_ESI->ParticleSystemTypeClass_field_0x308); /*0x64455a*/
  __asm { fstp qword ptr [esi+2F0h] } /*0x644562*/
  *(double *)&_ESI->__pad_2EC[4] = _RT1; /*0x644562*/
  HIBYTE(_ESI->ParticleSystemTypeClass_field_0x308) = INIClass::ReadBool_Overwrite( /*0x644574*/
                                                        (int *)a2,
                                                        (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                        aLaser,
                                                        ParticleSystemTypeClass_field_0x308_high);
  Coord = INIClass::GetCoord( /*0x64458e*/
            (INIClass *)a2,
            (int)&v44,
            (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
            aLasercolor,
            (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x308);
  ParticleSystemTypeClass_field_0x300 = _ESI->ParticleSystemTypeClass_field_0x300; /*0x644596*/
  LOWORD(_ESI->ParticleSystemTypeClass_field_0x308) = *(_WORD *)Coord; /*0x64459c*/
  BYTE2(_ESI->ParticleSystemTypeClass_field_0x308) = *(_BYTE *)(Coord + 2); /*0x6445af*/
  v33 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (bool *)a2,
          (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
          aSparkspawnfram,
          ParticleSystemTypeClass_field_0x300);
  v43 = *(_DWORD *)_ESI->__pad_304; /*0x6445c2*/
  _ESI->ParticleSystemTypeClass_field_0x300 = v33; /*0x6445c9*/
  *(_DWORD *)_ESI->__pad_304 = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                                 (bool *)a2,
                                 (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                 aLightsize,
                                 v43);
  v34 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int *)a2,
          (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
          aOneframelight,
          (char)_ESI[1].ParticleSystemTypeClass_field_0x0);
  v41 = *(double *)&_ESI->__pad_2EC[12]; /*0x6445fb*/
  LOBYTE(_ESI[1].ParticleSystemTypeClass_field_0x0) = v34; /*0x644604*/
  INIClass::ReadDouble_Overwrite( /*0x64460a*/
    (double *)a2,
    (unsigned __int8 *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawnsparkperc,
    v41);
  __asm { fstp qword ptr [esi+2F8h] } /*0x64460f*/
  *(double *)&_ESI->__pad_2EC[12] = _RT1; /*0x64460f*/
  return 1; /*0x644617*/
}



// ==== 0x00644630  WarheadTypeClass::applyDamage  this=AbstractTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::applyDamage(char *Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax
  _DWORD *v4; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) || !strlen(Source) ) /*0x644649*/
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x64465e*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( (int)stru_A83D50.SuperClass_field_0x28 > 0 ) /*0x6446b0*/
    {
      for ( i = *(_DWORD **)&stru_A83D50.__pad_14[8]; (_DWORD *)*i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(Source, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/
}



// ==== 0x00644700  ParticleSystemTypeClass::PowerDrainUpdate  this=ParticleSystemTypeClass  sig=csp ====
int __thiscall ParticleSystemTypeClass::PowerDrainUpdate(ParticleSystemTypeClass *this, int *a2)
{
  int v3; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x644709*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x294); /*0x644717*/
  LOBYTE(v3) = this->__pad_298[0]; /*0x64471c*/
  Power::FlagProcess((Power *)a2, v3); /*0x644725*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x29C); /*0x644733*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->ParticleSystemTypeClass_field_0x2A0); /*0x644741*/
  Power::TimerProcess(LODWORD(this->ParticleSystemTypeClass_field_0x2A4)); /*0x64474f*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A8); /*0x64475d*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleSystemTypeClass_field_0x2AC); /*0x64476b*/
  Checksummer::Add_float((Checksummer *)a2, this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B4); /*0x644787*/
  return Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/
}



// ==== 0x006447A0  ParticleSystemTypeClass::GetClassIdentifier  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::GetClassIdentifier(ParticleSystemTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6447a6*/
    return -2147467261; /*0x6447a8*/
  *a2 = 1883112522; /*0x6447b6*/
  a2[1] = 298979249; /*0x6447be*/
  a2[2] = 1610642049; /*0x6447c7*/
  a2[3] = unk_7E96DC; /*0x6447d0*/
  return 0; /*0x6447ad*/
}



// ==== 0x006447E0  ParticleSystemTypeClass::SaveLoad_Prefix  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix(ParticleSystemTypeClass *this, int a2)
{
  if ( ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2) >= 0 && this ) /*0x6447f6*/
  {
    ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x6447ff*/
    this->ParticleSystemTypeClass_field_0x0 = &ParticleSystemTypeClass::`vftable'; /*0x644804*/
    this->ParticleSystemTypeClass_field_0x4 = &ParticleSystemTypeClass::`vftable'; /*0x64480a*/
    this->ParticleSystemTypeClass_field_0x8 = &ParticleSystemTypeClass::`vftable'; /*0x644811*/
    this->SpawnCount = &ParticleSystemTypeClass::`vftable'; /*0x644818*/
  }
  return 0; /*0x644821*/
}



// ==== 0x00644830  ParticleSystemTypeClass::SaveLoad_Prefix_0  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix_0(ParticleSystemTypeClass *this, int a2, int a3)
{
  AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x64483f*/
  return 0; /*0x644846*/
}



// ==== 0x00644850  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_644850(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x644855*/
  v3 = off_836EE0; /*0x644857*/
  while ( _strcmpi((char *)this, *v3) ) /*0x64486a*/
  {
    ++v3; /*0x64486c*/
    ++v2; /*0x64486f*/
    if ( (int)v3 >= (int)g_INI_Key_Railgun ) /*0x644876*/
      return -1; /*0x64487e*/
  }
  return v2; /*0x644878*/
}



// ==== 0x00644890  BuildingTypeClass::LoadOrGet  this=AbstractClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::LoadOrGet(char *Source)
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x6448c1*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return OverlayTypeClass::Construct(v3, Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v2); /*0x6448ff*/
}



// ==== 0x00644920  ParticleSystemTypeClass::GetObjectSize  this=ParticleSystemTypeClass  sig=csp ====
int ParticleSystemTypeClass::GetObjectSize(ParticleSystemTypeClass *this)
{
  return 784; /*0x644925*/
}



// ==== 0x00644930  ParticleSystemTypeClass::GetTypeIdentifier  this=ParticleSystemTypeClass  sig=csp ====
int ParticleSystemTypeClass::GetTypeIdentifier(ParticleSystemTypeClass *this)
{
  return 25; /*0x644935*/
}



// ==== 0x00644940  ParticleSystemTypeClass::Stub  this=ParticleSystemTypeClass  sig=csp ====
char __stdcall ParticleSystemTypeClass::Stub(ParticleSystemTypeClass *this, int a2)
{
  return 0; /*0x644942*/
}



// ==== 0x00644950  ParticleSystemTypeClass::StubReturnFalse  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::StubReturnFalse(ParticleSystemTypeClass *this)
{
  return 0; /*0x644952*/
}



// ==== 0x00644960  ParticleSystemTypeClass::ddtor  this=ParticleSystemTypeClass  sig=csp ====
void **__thiscall ParticleSystemTypeClass::ddtor(ParticleSystemTypeClass *this, char a2)
{
  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ParticleSystemTypeClass_field_0x0 = &ParticleSystemTypeClass::`vftable'; /*0x644966*/
  this->ParticleSystemTypeClass_field_0x4 = &ParticleSystemTypeClass::`vftable'; /*0x64496c*/
  this->ParticleSystemTypeClass_field_0x8 = &ParticleSystemTypeClass::`vftable'; /*0x644973*/
  this->SpawnCount = &ParticleSystemTypeClass::`vftable'; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&this->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 = this; /*0x644996*/
  v3 = (*(int (__thiscall **)(char *, ParticleSystemTypeClass **))(*(_DWORD *)&stru_A83D50.__pad_14[4] + 16))( /*0x64499a*/
         &stru_A83D50.__pad_14[4],
         &v5);
  if ( v3 != -1 && v3 < (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6449aa*/
  {
    --stru_A83D50.SuperClass_field_0x28; /*0x6449af*/
    for ( ; /*0x6449b5*/
          v3 < (int)stru_A83D50.SuperClass_field_0x28;
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8]
                                                                                    + 4 * v3) )
    {
      ++v3; /*0x6449bd*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(this); /*0x6449de*/
  return &this->ParticleSystemTypeClass_field_0x0; /*0x6449e8*/
}



// ==== 0x006449F0  sub_6449F0  this=-  sig=ida-proto ====
void sub_6449F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6449fc*/
  dbl_AC5098 = Math::Sqrt(v0 + v0); /*0x644a0e*/
}



// ==== 0x00644A20  sub_644A20  this=-  sig=ida-proto ====
void sub_644A20()
{
  dbl_AC50E8 = dbl_AC5098 / 60.0; /*0x644a2c*/
}



// ==== 0x00644A40  sub_644A40  this=-  sig=ida-proto ====
void sub_644A40()
{
  dbl_AC50D0 = 1.0 / dbl_AC50E8; /*0x644a4c*/
}



// ==== 0x00644A60  sub_644A60  this=-  sig=ida-proto ====
void sub_644A60()
{
  dbl_AC50C8 = 0.0174532925199433 * 45.0; /*0x644a6c*/
}



// ==== 0x00644A80  sub_644A80  this=-  sig=ida-proto ====
void sub_644A80()
{
  dbl_AC50A0 = 0.0174532925199433 * 60.0; /*0x644a8c*/
}



// ==== 0x00644AA0  sub_644AA0  this=-  sig=ida-proto ====
void sub_644AA0()
{
  dbl_AC5088 = 0.0174532925199433 * 90.0; /*0x644aac*/
}



// ==== 0x00644AC0  sub_644AC0  this=-  sig=ida-proto ====
__int64 sub_644AC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC5088 - dbl_AC50A0); /*0x644ad2*/
  result = Math::RoundToInt(v0 * dbl_AC5098 * 0.5); /*0x644ae6*/
  dword_AC50F0 = result; /*0x644aeb*/
  return result; /*0x644af0*/
}



// ==== 0x00644B00  sub_644B00  this=-  sig=ida-proto ====
void sub_644B00()
{
  dbl_AC50A8 = Math::ArcTan((double)dword_AC50F0 * 0.00390625); /*0x644b17*/
}



// ==== 0x00644B30  sub_644B30  this=-  sig=ida-proto ====
void sub_644B30()
{
  dbl_AC50C0 = Math::ArcTan((double)(2 * dword_AC50F0) / dbl_AC5098); /*0x644b52*/
}



// ==== 0x00644B60  sub_644B60  this=-  sig=ida-proto ====
__int64 sub_644B60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC50F0) + 0.5); /*0x644b7b*/
  dword_AC50E4 = result; /*0x644b80*/
  return result; /*0x644b86*/
}



// ==== 0x00644B90  sub_644B90  this=-  sig=ida-proto ====
int sub_644B90()
{
  word_AC5090 = 0; /*0x644b92*/
  word_AC5092 = 0; /*0x644b98*/
  return 0; /*0x644b9e*/
}



// ==== 0x00644BA0  sub_644BA0  this=-  sig=ida-proto ====
int sub_644BA0()
{
  dword_AC50B0 = 0; /*0x644ba2*/
  dword_AC50B4 = 0; /*0x644ba7*/
  dword_AC50B8 = 0; /*0x644bac*/
  return 0; /*0x644bb1*/
}



// ==== 0x00644BC0  sub_644BC0  this=-  sig=ida-proto ====
int sub_644BC0()
{
  dword_AC50E0 = 0; /*0x644bc5*/
  dword_AC50D8 = 128; /*0x644bcf*/
  dword_AC50DC = 128; /*0x644bd4*/
  return 128; /*0x644bd9*/
}



// ==== 0x00644BE0  BuildingTypeClass::Construct  this=ParticleTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::Construct(BuildingTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x644beb*/
  this->? = 0; /*0x644bf8*/
  this->? = 0; /*0x644bfe*/
  *(_DWORD *)this->? = 0; /*0x644c04*/
  *(_DWORD *)&this->?[2] = 0; /*0x644c10*/
  *(_DWORD *)&this->?[4] = 1; /*0x644c19*/
  *(_DWORD *)&this->?[8] = 1; /*0x644c1f*/
  *(_DWORD *)&this->?[12] = 0; /*0x644c25*/
  *(_DWORD *)&this->?[16] = 1; /*0x644c2b*/
  *(_DWORD *)&this->?[6] = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&this->?[10], 0, 0); /*0x644c37*/
  this->?[1] = 10; /*0x644c3c*/
  this->?[0] = 0; /*0x644c43*/
  *(_DWORD *)&this->?[10] = &TypeList<RGBClass>::`vftable'; /*0x644c46*/
  this->?[1] = 0; /*0x644c4c*/
  LOBYTE(this->?[0]) = 0; /*0x644c66*/
  BYTE1(this->?[0]) = 0; /*0x644c6c*/
  BYTE1(this->?[1]) = -1; /*0x644c72*/
  BYTE2(this->?[1]) = -1; /*0x644c78*/
  this->?[1] = 0; /*0x644c81*/
  this->?[0] = 1; /*0x644c87*/
  this->?[1] = 0; /*0x644c8d*/
  this->?[0] = 0; /*0x644c93*/
  this->?[1] = 0; /*0x644c99*/
  this->?[0] = 1; /*0x644c9f*/
  this->?[1] = 0; /*0x644ca5*/
  this->? = 0; /*0x644cab*/
  this->?[0] = 0; /*0x644cb1*/
  this->?[0] = 0; /*0x644cb7*/
  this->?[1] = 0; /*0x644cbd*/
  LOBYTE(this->?[0]) = 0; /*0x644cc3*/
  BYTE1(this->?[0]) = 0; /*0x644cc9*/
  BYTE2(this->?[0]) = 0; /*0x644ccf*/
  HIBYTE(this->?[0]) = 4; /*0x644cd5*/
  LOBYTE(this->?[1]) = 0; /*0x644cdc*/
  HIBYTE(this->?[1]) = 0; /*0x644ce2*/
  this->? = -1; /*0x644ce8*/
  this->?[0] = -1; /*0x644cee*/
  this->TechnoTypeClass = &ParticleTypeClass::`vftable'; /*0x644cf4*/
  this->? = &ParticleTypeClass::`vftable'; /*0x644cfa*/
  this->? = &ParticleTypeClass::`vftable'; /*0x644d01*/
  this->? = &ParticleTypeClass::`vftable'; /*0x644d08*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] < *(int *)&stru_A83D50.__pad_3C[20] /*0x644d43*/
    || (stru_A83D50.__pad_3C[25] || !*(_DWORD *)&stru_A83D50.__pad_3C[20])
    && *(int *)&stru_A83D50.__pad_3C[32] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_3C[12] + 8))(
         &stru_A83D50.__pad_3C[12],
         *(_DWORD *)&stru_A83D50.__pad_3C[20] + *(_DWORD *)&stru_A83D50.__pad_3C[32],
         0) )
  {
    v3 = (*(_DWORD *)&stru_A83D50.__pad_3C[28])++; /*0x644d50*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v3) = this; /*0x644d5f*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x644d96*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x644da3*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x644db2*/
  }
  this->? = 0; /*0x644db5*/
  return &this->TechnoTypeClass; /*0x644dbd*/
}



// ==== 0x00644F50  ParticleTypeClass::LoadFromINI  this=ParticleTypeClass  sig=csp ====
char __thiscall ParticleTypeClass::LoadFromINI(ParticleTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  unsigned __int8 *inited; // eax
  int RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v9; // eax
  void *ParticleTypeClass_field_0x2E4; // ebp
  void *v11; // eax
  int v12; // eax
  int ParticleTypeClass_field_0x2F4; // ecx
  int v14; // eax
  int v15; // eax
  double v16; // st4
  int ParticleTypeClass_field_0x304; // eax
  int v18; // eax
  char v19; // cl
  char Bool_Overwrite; // al
  char v21; // al
  char v22; // al
  char v23; // cl
  char v24; // al
  double v25; // rax
  IUnknown *ParticleTypeClass_field_0x2A0; // ecx
  IUnknown *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int *Coord2; // eax
  int Coord; // eax
  int v33; // eax
  __int16 v34; // dx
  char v35; // al
  int v36; // ebp
  BuildingTypeClass *v37; // eax
  _DWORD *v38; // eax
  int v39; // ecx
  _DWORD *v40; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  unsigned __int8 *v45; // [esp-Ch] [ebp-F0h]
  unsigned __int8 *v46; // [esp-8h] [ebp-ECh]
  unsigned __int8 *p_ParticleTypeClass_field_0x24; // [esp-4h] [ebp-E8h]
  unsigned __int8 *v48; // [esp+0h] [ebp-E4h]
  int ParticleTypeClass_field_0x2F8; // [esp+4h] [ebp-E0h]
  int v50; // [esp+18h] [ebp-CCh] BYREF
  char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
  int v52[7]; // [esp+3Ch] [ebp-A8h] BYREF
  int v53[3]; // [esp+58h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor((ParticleTypeClass *)v44, 0, 0); /*0x644f85*/
  v44[0] = &TypeList<RGBClass>::`vftable'; /*0x644f8a*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)&this->ParticleTypeClass_field_0x24); /*0x644f9a*/
  RGBColorList = INIClass::ReadRGBColorList( /*0x644fac*/
                   (INIClass *)a2,
                   (int)v52,
                   inited,
                   aColorlist,
                   v44[0],
                   v44[1],
                   (int)v45,
                   (__int16)v46,
                   (int)p_ParticleTypeClass_field_0x24,
                   (int)v48,
                   ParticleTypeClass_field_0x2F8);
  ParticleTypeClass::EnsureCapacity((ParticleTypeClass *)&this->ParticleTypeClass_field_0x2B8, (_DWORD *)RGBColorList); /*0x644fb5*/
  this->ParticleTypeClass_field_0x2C8 = *(VectorClass **)(RGBColorList + 16); /*0x644fbd*/
  this->ParticleTypeClass_field_0x2CC = *(VectorClass **)(RGBColorList + 20); /*0x644fc6*/
  *(_DWORD *)this->__pad_2D0 = *(_DWORD *)(RGBColorList + 24); /*0x644fd3*/
  v52[0] = (int)&VectorClass<RGBClass>::`vftable'; /*0x644fd9*/
  FilePipe_38::ddtor((int)v52); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (bool *)a2,
                    (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                    aMaxdc,
                    this->ParticleTypeClass_field_0x2DC[0]);
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2E0[0]; /*0x645002*/
  v48 = aMaxec; /*0x645003*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645008*/
  this->ParticleTypeClass_field_0x2DC[0] = Int_Overwrite; /*0x645009*/
  this->ParticleTypeClass_field_0x2E0[0] = INIClass::ReadInt_Overwrite( /*0x645014*/
                                             (bool *)a2,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v9 = INIClass::ReadInt_Overwrite( /*0x645029*/
         (bool *)a2,
         (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
         g_INI_Key_Damage,
         this->ParticleTypeClass_field_0x2E8[0]);
  ParticleTypeClass_field_0x2E4 = this->ParticleTypeClass_field_0x2E4; /*0x64502e*/
  ParticleTypeClass_field_0x2F8 = 128; /*0x645038*/
  v48 = (unsigned __int8 *)Destination; /*0x64503d*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&g_INI_DefaultBuffer; /*0x64503e*/
  v46 = g_INI_Key_Warhead; /*0x645043*/
  v45 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645048*/
  this->ParticleTypeClass_field_0x2E8[0] = v9; /*0x64504b*/
  if ( INIClass::GetString( /*0x645051*/
         (INIClass *)a2,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2F8) )
  {
    v11 = (void *)WarheadTypeClass::FindOrCreate(Destination); /*0x64505e*/
  }
  else
  {
    v11 = ParticleTypeClass_field_0x2E4; /*0x645065*/
  }
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2EC[0]; /*0x64506f*/
  v48 = aStartframe; /*0x645070*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645075*/
  this->ParticleTypeClass_field_0x2E4 = v11; /*0x645076*/
  this->ParticleTypeClass_field_0x2EC[0] = INIClass::ReadInt_Overwrite( /*0x645081*/
                                             (bool *)a2,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v12 = INIClass::ReadInt_Overwrite( /*0x645096*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aNumloopframes,
          this->ParticleTypeClass_field_0x2F0[0]);
  ParticleTypeClass_field_0x2F4 = this->ParticleTypeClass_field_0x2F4; /*0x64509b*/
  this->ParticleTypeClass_field_0x2F0[0] = v12; /*0x6450a1*/
  v14 = INIClass::ReadInt_Overwrite( /*0x6450b0*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aTranslucency,
          ParticleTypeClass_field_0x2F4);
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2F8; /*0x6450bd*/
  v48 = aWindeffect; /*0x6450be*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x6450c3*/
  this->ParticleTypeClass_field_0x2F4 = v14; /*0x6450c4*/
  v15 = INIClass::ReadInt_Overwrite((bool *)a2, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6450ca*/
  v16 = *(float *)this->__pad_2FC; /*0x6450cf*/
  this->ParticleTypeClass_field_0x2F8 = v15; /*0x6450da*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&this->ParticleTypeClass_field_0x24, aVelocity, v16); /*0x6450e9*/
  *(float *)this->__pad_2FC = v2; /*0x6450ee*/
  INIClass::ReadDouble_Overwrite( /*0x645108*/
    (double *)a2,
    (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
    aDeacc,
    *(float *)&this->ParticleTypeClass_field_0x300);
  ParticleTypeClass_field_0x304 = this->ParticleTypeClass_field_0x304; /*0x64510d*/
  *(float *)&this->ParticleTypeClass_field_0x300 = v3; /*0x645115*/
  v18 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aRadius,
          ParticleTypeClass_field_0x304);
  v19 = this->__pad_308[0]; /*0x645127*/
  this->ParticleTypeClass_field_0x304 = v18; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int *)a2,
                     (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                     aDeleteonstatel,
                     v19);
  ParticleTypeClass_field_0x2F8 = this->__pad_308[1]; /*0x645148*/
  v48 = aEndstateai; /*0x645149*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64514e*/
  this->__pad_308[0] = Bool_Overwrite; /*0x645151*/
  this->__pad_308[1] = INIClass::ReadInt_Overwrite( /*0x64515c*/
                         (bool *)a2,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  v21 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aStartstateai,
          this->__pad_308[2]);
  ParticleTypeClass_field_0x2F8 = this->__pad_308[3]; /*0x64517e*/
  v48 = aStateaiadvance; /*0x64517f*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x645184*/
  this->__pad_308[2] = v21; /*0x645187*/
  this->__pad_308[3] = INIClass::ReadInt_Overwrite( /*0x645192*/
                         (bool *)a2,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  this->__pad_308[6] = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                         (bool *)a2,
                         (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                         aTranslucent50s,
                         (unsigned __int8)this->__pad_308[6]);
  v22 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aTranslucent25s,
          (unsigned __int8)this->__pad_308[5]);
  v23 = this->__pad_308[7]; /*0x6451ca*/
  this->__pad_308[5] = v22; /*0x6451d0*/
  v24 = INIClass::ReadBool_Overwrite( /*0x6451df*/
          (int *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          g_INI_Key_Normalized,
          v23);
  HIDWORD(v25) = this->ParticleTypeClass_field_0x2B4; /*0x6451e4*/
  this->__pad_308[7] = v24; /*0x6451ea*/
  LODWORD(v25) = this->ParticleTypeClass_field_0x2B0; /*0x6451f0*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)&this->ParticleTypeClass_field_0x24, aColorspeed, v25); /*0x645200*/
  ParticleTypeClass_field_0x2A0 = this->ParticleTypeClass_field_0x2A0; /*0x645205*/
  *(double *)&this->ParticleTypeClass_field_0x2B0 = v4; /*0x64520b*/
  v27 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x64521a*/
                      (bool *)a2,
                      (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
                      aXvelocity,
                      (int)ParticleTypeClass_field_0x2A0);
  ParticleTypeClass_field_0x2F8 = (int)this->ParticleTypeClass_field_0x2A4; /*0x645227*/
  v48 = aYvelocity; /*0x645228*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64522d*/
  this->ParticleTypeClass_field_0x2A0 = v27; /*0x64522e*/
  this->ParticleTypeClass_field_0x2A4 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x645239*/
                                                      (bool *)a2,
                                                      p_ParticleTypeClass_field_0x24,
                                                      v48,
                                                      ParticleTypeClass_field_0x2F8);
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aMinzvelocity,
          this->ParticleTypeClass_field_0x2A8[0]);
  v29 = this->ParticleTypeClass_field_0x2AC[0]; /*0x645253*/
  this->ParticleTypeClass_field_0x2A8[0] = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (bool *)a2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aZvelocityrange,
          v29);
  ParticleTypeClass_field_0x2F8 = (int)&this->__pad_248[76]; /*0x645277*/
  v48 = aNextparticleof; /*0x645278*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64527d*/
  v46 = (unsigned __int8 *)v53; /*0x64527e*/
  this->ParticleTypeClass_field_0x2AC[0] = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2( /*0x645287*/
             (INIClass *)a2,
             (int *)v46,
             p_ParticleTypeClass_field_0x24,
             v48,
             (int *)ParticleTypeClass_field_0x2F8);
  *(_DWORD *)&this->__pad_248[76] = *Coord2; /*0x64528e*/
  *(_DWORD *)&this->__pad_248[80] = Coord2[1]; /*0x645298*/
  *(_DWORD *)&this->__pad_248[84] = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            (INIClass *)a2,
            (int)&v50,
            (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
            aStartcolor1,
            (unsigned __int8 *)&this->ParticleTypeClass_field_0x2D4);
  LOWORD(this->ParticleTypeClass_field_0x2D4) = *(_WORD *)Coord; /*0x6452bd*/
  BYTE2(this->ParticleTypeClass_field_0x2D4) = *(_BYTE *)(Coord + 2); /*0x6452c4*/
  v33 = INIClass::GetCoord( /*0x6452d7*/
          (INIClass *)a2,
          (int)&v50,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
          aStartcolor2,
          (unsigned __int8 *)&this->ParticleTypeClass_field_0x2D4 + 3);
  v34 = *(_WORD *)v33; /*0x6452e3*/
  ParticleTypeClass_field_0x2F8 = this->__pad_308[1]; /*0x6452e6*/
  *(_WORD *)((char *)&this->ParticleTypeClass_field_0x2D4 + 3) = v34; /*0x6452e7*/
  v48 = aFinaldamagesta; /*0x6452eb*/
  LOBYTE(v33) = *(_BYTE *)(v33 + 2); /*0x6452f0*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x6452f3*/
  this->__pad_2D8[1] = v33; /*0x6452f6*/
  v35 = INIClass::ReadInt_Overwrite((bool *)a2, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6452f9*/
  ParticleTypeClass_field_0x2F8 = 32; /*0x645302*/
  v48 = (unsigned __int8 *)Source; /*0x645304*/
  p_ParticleTypeClass_field_0x24 = 0; /*0x645305*/
  v46 = aNextparticle; /*0x645307*/
  v45 = (unsigned __int8 *)&this->ParticleTypeClass_field_0x24; /*0x64530c*/
  this->__pad_308[4] = v35; /*0x64530f*/
  if ( INIClass::GetString( /*0x645315*/
         (INIClass *)a2,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2F8) )
  {
    if ( _strcmpi(Source, g_Str__none_) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v38 = BuildingTypeClass::Construct(v37, Source); /*0x645383*/
        else
          v38 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v40 = *(_DWORD **)&stru_A83D50.__pad_3C[16]; /*0x645398*/
          while ( (_DWORD *)*v40 != v38 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            ++v40; /*0x6453a3*/
            if ( v39 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi(Source, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v36) + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645369*/
            goto LABEL_10; /*0x645369*/
        }
      }
    }
    else
    {
      v36 = -1; /*0x6453b1*/
    }
    this->ParticleTypeClass_field_0x310 = v36; /*0x6453b4*/
  }
  Source[0] = 0; /*0x6453cb*/
  INIClass::GetString( /*0x6453d0*/
    (INIClass *)a2,
    (unsigned __int8 *)&this->ParticleTypeClass_field_0x24,
    aBehaveslike,
    0,
    Source,
    32);
  v41 = 0; /*0x6453d5*/
  v42 = off_8370BC; /*0x6453d7*/
  while ( _strcmpi(Source, *v42) ) /*0x6453ee*/
  {
    ++v42; /*0x6453f0*/
    ++v41; /*0x6453f3*/
    if ( (int)v42 >= (int)&ParticleTypeClass `RTTI Type Descriptor' ) /*0x6453fa*/
    {
      v41 = -1; /*0x6453fc*/
      break; /*0x6453fc*/
    }
  }
  this->ParticleTypeClass_field_0x314 = v41; /*0x6453ff*/
  return 1; /*0x645407*/
}



// ==== 0x00645430  BuildingTypeClass::FindOrCreateEx  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindOrCreateEx(char *Source)
{
  int v2; // esi
  BuildingTypeClass *v3; // eax
  _DWORD *v4; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x64544f*/
  {
LABEL_5:
    v3 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&stru_A83D50.__pad_3C[28] > 0 ) /*0x6454a0*/
    {
      for ( i = *(_DWORD **)&stru_A83D50.__pad_3C[16]; (_DWORD *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}



// ==== 0x006454E0  ParticleTypeClass::ProcessPower  this=ParticleTypeClass  sig=csp ====
int __thiscall ParticleTypeClass::ProcessPower(ParticleTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6454e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2DC[0]); /*0x6454f7*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E0[0]); /*0x645505*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E8[0]); /*0x645513*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2EC[0]); /*0x645521*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F0[0]); /*0x64552f*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F4); /*0x64553d*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F8); /*0x64554b*/
  Checksummer::Add_float((Checksummer *)a2, *(_DWORD *)this->__pad_2FC); /*0x645559*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleTypeClass_field_0x300); /*0x645567*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x304); /*0x645575*/
  LOBYTE(v3) = this->__pad_308[0]; /*0x64557a*/
  Power::FlagProcess((Power *)a2, v3); /*0x645583*/
  LOBYTE(v4) = this->__pad_308[1]; /*0x645588*/
  v5 = Power::FinalizeDrain((Power *)a2, v4); /*0x645591*/
  LOBYTE(v5) = this->__pad_308[2]; /*0x645596*/
  Power::FinalizeDrain((Power *)a2, v5); /*0x64559f*/
  LOBYTE(v6) = this->__pad_308[3]; /*0x6455a4*/
  Power::FinalizeDrain((Power *)a2, v6); /*0x6455ad*/
  Power::TimerProcess((unsigned __int8)this->__pad_308[5]); /*0x6455bd*/
  Power::TimerProcess((unsigned __int8)this->__pad_308[6]); /*0x6455cd*/
  LOBYTE(v7) = this->__pad_308[7]; /*0x6455d2*/
  Power::FlagProcess((Power *)a2, v7); /*0x6455db*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x310); /*0x6455e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x314); /*0x6455f7*/
  return Checksummer::Add_double( /*0x645611*/
           (Checksummer *)a2,
           (int)this->ParticleTypeClass_field_0x2B0,
           (int)this->ParticleTypeClass_field_0x2B4);
}



// ==== 0x00645620  ParticleTypeClass::ddtor  this=ParticleTypeClass  sig=csp ====
int __stdcall C07F0188::ddtor(ParticleTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x645626*/
    return -2147467261; /*0x645628*/
  *a2 = 1883112523; /*0x645636*/
  a2[1] = 298979249; /*0x64563e*/
  a2[2] = 1610642049; /*0x645647*/
  a2[3] = unk_7E971C; /*0x645650*/
  return 0; /*0x64562d*/
}



// ==== 0x00645660  ParticleTypeClass::SaveLoad_Prefix  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::SaveLoad_Prefix(ParticleTypeClass *this, int a2)
{
  int *v2; // ebp
  ParticleTypeClass *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int ParticleTypeClass_field_0x2CC; // eax
  VectorClass *ParticleTypeClass_field_0x2C8; // eax
  VectorClass *v10; // ecx
  int v11; // edx
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  char *v13; // edx
  int v14; // [esp+28h] [ebp-4h]

  v2 = (int *)a2; /*0x645663*/
  v3 = this; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((ParticleTypeClass *)&v3->ParticleTypeClass_field_0x2B8, 0, 0); /*0x645698*/
      v3->ParticleTypeClass_field_0x2B8 = (VectorClass *)&TypeList<RGBClass>::`vftable'; /*0x64569d*/
      v3->ArrayIndex = &ParticleTypeClass::`vftable'; /*0x6456a3*/
      v3->ParticleTypeClass_field_28C = &ParticleTypeClass::`vftable'; /*0x6456a9*/
      v3->BehavesLike = &ParticleTypeClass::`vftable'; /*0x6456b0*/
      v3->ParticleTypeClass_field_0xC = &ParticleTypeClass::`vftable'; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->ParticleTypeClass_field_0x2E4); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    this = 0; /*0x6456db*/
    result = (*(int (__stdcall **)(int *, ParticleTypeClass **, int, _DWORD))(v5 + 12))(v2, &this, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( (int)this <= 0 ) /*0x6456f4*/
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
          v7 = *(_DWORD *)v3->__pad_2C0; /*0x645719*/
          if ( (int)v3->ParticleTypeClass_field_0x2C8 < v7 /*0x645747*/
            || (v3->__pad_2C0[5] || !v7)
            && (ParticleTypeClass_field_0x2CC = (int)v3->ParticleTypeClass_field_0x2CC, ParticleTypeClass_field_0x2CC > 0)
            && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v3->ParticleTypeClass_field_0x2B8->Capacity)(
                 &v3->ParticleTypeClass_field_0x2B8,
                 v7 + ParticleTypeClass_field_0x2CC,
                 0) )
          {
            ParticleTypeClass_field_0x2C8 = v3->ParticleTypeClass_field_0x2C8; /*0x64574e*/
            v10 = (VectorClass *)((char *)&ParticleTypeClass_field_0x2C8->ptr_0 + 1); /*0x645751*/
            v11 = 3 * (_DWORD)ParticleTypeClass_field_0x2C8; /*0x645754*/
            ParticleTypeClass_field_0x2BC = v3->ParticleTypeClass_field_0x2BC; /*0x645757*/
            v3->ParticleTypeClass_field_0x2C8 = v10; /*0x64575a*/
            v13 = (char *)ParticleTypeClass_field_0x2BC + v11; /*0x64575d*/
            *(_WORD *)v13 = a2; /*0x645764*/
            v13[2] = BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= (int)this ) /*0x64577d*/
            goto LABEL_14; /*0x64577d*/
        }
      }
    }
  }
  return result; /*0x64578c*/
}



// ==== 0x006457A0  ParticleTypeClass::SaveLoad_Prefix_0  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::SaveLoad_Prefix_0(ParticleTypeClass *this, int a2, int ParticleTypeClass_field_0x2C8)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, ParticleTypeClass_field_0x2C8); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(_DWORD *)a2; /*0x6457c2*/
    ParticleTypeClass_field_0x2C8 = (int)this->ParticleTypeClass_field_0x2C8; /*0x6457ce*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v4 + 16))(a2, &ParticleTypeClass_field_0x2C8, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( ParticleTypeClass_field_0x2C8 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 16))( /*0x6457fa*/
                 a2,
                 (char *)this->ParticleTypeClass_field_0x2BC + v6,
                 3,
                 0) < 0 )
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < ParticleTypeClass_field_0x2C8 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/
}



// ==== 0x00645820  NetworkEventClass::Process  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall NetworkEventClass::Process(char *Source)
{
  int v2; // esi
  BuildingTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x64583c*/
    return 0; /*0x64589f*/
  v2 = 0; /*0x64584d*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645851*/
  {
LABEL_6:
    v3 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x645876*/
    if ( v3 ) /*0x645885*/
      return BuildingTypeClass::Construct(v3, Source); /*0x645891*/
    return 0; /*0x645885*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36), Source) ) /*0x64586a*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645874*/
      goto LABEL_6; /*0x645874*/
  }
  return *(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v2); /*0x64588f*/
}



// ==== 0x006458B0  ParticleTypeClass::GetType  this=ParticleTypeClass  sig=csp ====
int __thiscall ParticleTypeClass::GetType(ParticleTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = (int)this->ParticleTypeClass_field_0x2E4; /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    this->ParticleTypeClass_field_0x2E4 = 0; /*0x6458be*/
  return result; /*0x6458c8*/
}



// ==== 0x006458D0  ObjectClass::method_6458D0  this=ObjectClass  sig=csp ====
int __thiscall sub_6458D0(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x6458d5*/
  v3 = off_8370BC; /*0x6458d7*/
  while ( _strcmpi((char *)this, *v3) ) /*0x6458ea*/
  {
    ++v3; /*0x6458ec*/
    ++v2; /*0x6458ef*/
    if ( (int)v3 >= (int)&ParticleTypeClass `RTTI Type Descriptor' ) /*0x6458f6*/
      return -1; /*0x6458fe*/
  }
  return v2; /*0x6458f8*/
}



// ==== 0x00645910  ParticleTypeClass::GetObjectSize  this=ParticleTypeClass  sig=csp ====
int ParticleTypeClass::GetObjectSize(ParticleTypeClass *this)
{
  return 792; /*0x645915*/
}



// ==== 0x00645920  ParticleTypeClass::GetTypeIdentifier  this=ParticleTypeClass  sig=csp ====
int ParticleTypeClass::GetTypeIdentifier(ParticleTypeClass *this)
{
  return 23; /*0x645925*/
}



// ==== 0x00645930  ParticleTypeClass::Stub  this=ParticleTypeClass  sig=csp ====
char __stdcall ParticleTypeClass::Stub(ParticleTypeClass *this, int a2)
{
  return 0; /*0x645932*/
}



// ==== 0x00645940  ParticleTypeClass::StubReturnFalse  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::StubReturnFalse(ParticleTypeClass *this)
{
  return 0; /*0x645942*/
}



// ==== 0x00645950  ParticleTypeClass::ddtor  this=ParticleTypeClass  sig=csp ====
void **__thiscall ParticleTypeClass::ddtor(ParticleTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  ParticleTypeClass *v7; // [esp+4h] [ebp-4h] BYREF

  this->ArrayIndex = &ParticleTypeClass::`vftable'; /*0x645956*/
  this->ParticleTypeClass_field_28C = &ParticleTypeClass::`vftable'; /*0x64595c*/
  this->BehavesLike = &ParticleTypeClass::`vftable'; /*0x645963*/
  this->ParticleTypeClass_field_0xC = &ParticleTypeClass::`vftable'; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(&this->ArrayIndex, 1); /*0x645971*/
  v7 = this; /*0x645986*/
  v3 = (*(int (__thiscall **)(int *, ParticleTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x64598a*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x64599a*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x64599f*/
    for ( ; /*0x6459a5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x6459ad*/
    }
  }
  v7 = this; /*0x6459cf*/
  v4 = (*(int (__thiscall **)(char *, ParticleTypeClass **))(*(_DWORD *)&stru_A83D50.__pad_3C[12] + 16))( /*0x6459d3*/
         &stru_A83D50.__pad_3C[12],
         &v7);
  if ( v4 != -1 && v4 < *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6459e3*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_3C[28]; /*0x6459e8*/
    for ( ; /*0x6459ee*/
          v4 < *(int *)&stru_A83D50.__pad_3C[28];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16]
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x6459f6*/
    }
  }
  ParticleTypeClass_field_0x2BC = this->ParticleTypeClass_field_0x2BC; /*0x645a08*/
  this->ParticleTypeClass_field_0x2B8 = (VectorClass *)&VectorClass<RGBClass>::`vftable'; /*0x645a0e*/
  if ( ParticleTypeClass_field_0x2BC && this->__pad_2C0[5] ) /*0x645a1c*/
  {
    __3_YAXPAX_Z(ParticleTypeClass_field_0x2BC); /*0x645a27*/
    this->ParticleTypeClass_field_0x2BC = 0; /*0x645a2f*/
  }
  this->__pad_2C0[5] = 0; /*0x645a3b*/
  *(_DWORD *)this->__pad_2C0 = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)this); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    __3_YAXPAX_Z(this); /*0x645a59*/
  return &this->ArrayIndex; /*0x645a63*/
}



// ==== 0x00645A70  ParticleTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall ParticleTypeClass::Constructor(ParticleTypeClass *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->ParticleTypeClass_field_28C = 0; /*0x645a7d*/
  this->BehavesLike = (void *)a2; /*0x645a80*/
  LOBYTE(this->ParticleTypeClass_field_0xC) = 1; /*0x645a83*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x645a87*/
  this->ArrayIndex = &VectorClass<RGBClass>::`vftable'; /*0x645a8a*/
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
      this->ParticleTypeClass_field_28C = (void *)a3; /*0x645ab3*/
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
      this->ParticleTypeClass_field_28C = v6; /*0x645ae5*/
      BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x645ae8*/
    }
  }
  this->ArrayIndex = &DynamicVectorClass<RGBClass>::`vftable'; /*0x645aec*/
  this->Damage = 10; /*0x645af2*/
  this->ParticleTypeClass_field_0x10 = 0; /*0x645af9*/
  return &this->ArrayIndex; /*0x645afe*/
}



// ==== 0x00645B10  ?$DynamicVectorClass@VRGBClass@@::getTeamIndex  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_645B10(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x645b13*/
  *Block = &VectorClass<RGBClass>::`vftable'; /*0x645b16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x645b20*/
  {
    __3_YAXPAX_Z(v3); /*0x645b28*/
    *(Block + 1) = 0; /*0x645b30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x645b3b*/
  *(Block + 2) = 0; /*0x645b41*/
  if ( (a2 & 1) != 0 ) /*0x645b48*/
    __3_YAXPAX_Z(Block); /*0x645b4b*/
  return Block; /*0x645b55*/
}



// ==== 0x00645B60  ObjectClass::method_645B60  this=ObjectClass  sig=csp ====
int __thiscall sub_645B60(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x645b65*/
  v3 = off_7F0248; /*0x645b67*/
  while ( _strcmpi((char *)this, *v3) ) /*0x645b7a*/
  {
    ++v3; /*0x645b7c*/
    ++v2; /*0x645b7f*/
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
int __thiscall GetSuperWeaponTypeFlag(ObjectClass *this)
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
_DWORD *__thiscall Int4::Set(Int4 *this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x645c3a*/
  this->Int4_field_0x04 = a3; /*0x645c40*/
  *((_DWORD *)this + 2) = a4; /*0x645c47*/
  *((_DWORD *)this + 3) = a5; /*0x645c4a*/
  return this->__pad_0; /*0x645c4d*/
}



// ==== 0x00645C50  Int4::Set2  this=Int4  sig=csp ====
int __thiscall Int4::Set2(Int4 *this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x645c58*/
  this->Int4_field_0x04 = a3; /*0x645c5e*/
  *((_DWORD *)this + 2) = a4; /*0x645c65*/
  *((_DWORD *)this + 3) = a5; /*0x645c68*/
  return a4; /*0x645c6b*/
}



// ==== 0x00645CD0  ObjectClass::method_645CD0  this=ObjectClass  sig=csp ====
void __thiscall sub_645CD0(ObjectClass *this, float a2)
{
  *(float *)&this->AbstractClass = a2 * *(float *)&this->AbstractClass; /*0x645cd6*/
  *(float *)&this->? = a2 * *(float *)&this->?; /*0x645cdf*/
  *(float *)&this->? = a2 * *(float *)&this->?; /*0x645ce9*/
  *(float *)&this->? = a2 * *(float *)&this->?; /*0x645cf3*/
}



// ==== 0x00645D00  Function::645D00  this=Function  sig=csp ====
char *__thiscall Function::645D00(char *this, int a2)
{
  return this + 4 * a2; /*0x645d07*/
}



// ==== 0x00645D20  Float4::Copy  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_645D20(float *this, _DWORD *a2, float *a3)
{
  *this = *a3; /*0x645d27*/
  this->ptr_8 = a3[1]; /*0x645d2c*/
  this->ptr_C = a3[2]; /*0x645d32*/
  this->ptr_10 = a3[3]; /*0x645d3c*/
  *a2 = *(_DWORD *)this; /*0x645d43*/
  a2[1] = this->ptr_8; /*0x645d48*/
  a2[2] = this->ptr_C; /*0x645d4e*/
  a2[3] = this->ptr_10; /*0x645d55*/
  return a2; /*0x645d54*/
}



// ==== 0x00645D60  ObjectClass::method_645D60  this=ObjectClass  sig=csp ====
float *__thiscall sub_645D60(ObjectClass *this, float *a2)
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
  void *v12; // edx
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3
  int v17; // [esp+0h] [ebp-78h]
  int v18; // [esp+4h] [ebp-74h]
  int v19; // [esp+8h] [ebp-70h]
  int v20; // [esp+Ch] [ebp-6Ch]
  void *ptr_0; // [esp+18h] [ebp-60h] BYREF
  void *ptr_4; // [esp+1Ch] [ebp-5Ch]
  void *ptr_8; // [esp+20h] [ebp-58h]
  void *ptr_C; // [esp+24h] [ebp-54h]
  int v25; // [esp+28h] [ebp-50h]
  int v26; // [esp+2Ch] [ebp-4Ch]
  int v27; // [esp+30h] [ebp-48h]
  int v28; // [esp+34h] [ebp-44h]
  float v29[4]; // [esp+38h] [ebp-40h] BYREF
  Int4 v30[2]; // [esp+48h] [ebp-30h] BYREF
  float v31[4]; // [esp+58h] [ebp-20h] BYREF
  float v32[4]; // [esp+68h] [ebp-10h] BYREF

  ptr_0 = this->AbstractClass; /*0x645d6f*/
  ptr_4 = this->?; /*0x645d76*/
  ptr_8 = this->?; /*0x645d7d*/
  ptr_C = this->?; /*0x645d88*/
  v3 = sub_6460C0(v29, a2); /*0x645d8e*/
  v4 = QuaternionMathMultiply((float *)v30[0].__pad_0, (float *)&ptr_0, v3); /*0x645d9c*/
  v5 = *(float *)&this->?; /*0x645da3*/
  v6 = *((_DWORD *)v4 + 1); /*0x645da6*/
  v25 = *(_DWORD *)v4; /*0x645da9*/
  v7 = *((_DWORD *)v4 + 2); /*0x645daf*/
  v26 = v6; /*0x645db2*/
  v27 = v7; /*0x645db7*/
  *(float *)&v20 = -v5; /*0x645dbe*/
  v8 = *(float *)&this->?; /*0x645dc1*/
  v28 = *((_DWORD *)v4 + 3); /*0x645dc5*/
  *(float *)&v19 = -v8; /*0x645dcb*/
  *(float *)&v18 = -*(float *)&this->?; /*0x645dd4*/
  *(float *)&v17 = -*(float *)&this->AbstractClass; /*0x645de0*/
  v9 = (float *)Int4::Set(v30, v17, v18, v19, v20); /*0x645de3*/
  v29[0] = *v9; /*0x645dea*/
  v29[1] = v9[1]; /*0x645df1*/
  v29[2] = v9[2]; /*0x645df8*/
  v29[3] = v9[3]; /*0x645e03*/
  v10 = sub_6460C0(v31, a2); /*0x645e09*/
  v11 = QuaternionMathMultiply(v32, v29, v10); /*0x645e17*/
  ptr_0 = *(void **)v11; /*0x645e1e*/
  ptr_4 = (void *)*((_DWORD *)v11 + 1); /*0x645e25*/
  v12 = (void *)*((_DWORD *)v11 + 3); /*0x645e30*/
  ptr_8 = (void *)*((_DWORD *)v11 + 2); /*0x645e33*/
  ptr_C = v12; /*0x645e3b*/
  if ( !(v14 | v15) ) /*0x645e97*/
  {
    *(float *)&this->AbstractClass = -*(float *)&this->AbstractClass; /*0x645ea2*/
    *(float *)&this->? = -*(float *)&this->?; /*0x645ea9*/
    *(float *)&this->? = -*(float *)&this->?; /*0x645eb1*/
    *(float *)&this->? = -*(float *)&this->?; /*0x645eb9*/
  }
  return (float *)this; /*0x645ebe*/
}



// ==== 0x00645ED0  QuaternionMathMultiply  this=-  sig=csp ====
float *__fastcall Math_QuaternionMultiply(float *a1, float *a2, float *a3)
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
  float v21; // [esp+48h] [ebp+4h]

  v11 = *a3; /*0x645eea*/
  v13 = a3[1]; /*0x645ef4*/
  v15 = a3[2]; /*0x645efb*/
  v21 = a3[3]; /*0x645eff*/
  v17 = a2[1] * v21; /*0x645f0f*/
  v18 = a2[2] * v21; /*0x645f1b*/
  v4 = a2[3]; /*0x645f1f*/
  v12 = v4 * v11; /*0x645f28*/
  v14 = v13 * v4; /*0x645f32*/
  v16 = v15 * v4; /*0x645f3c*/
  v19 = a2[2] * *a3 - a3[2] * *a2; /*0x645f5c*/
  v20 = a3[1] * *a2 - a2[1] * *a3; /*0x645f6c*/
  v7 = a2[1] * a3[2] - a2[2] * a3[1] + v12 + *a2 * v21; /*0x645f76*/
  v8 = v17 + v14 + v19; /*0x645f88*/
  v9 = v18 + v16 + v20; /*0x645f98*/
  v10 = v4 * a3[3] - (a2[2] * a3[2] + a2[1] * a3[1] + *a2 * *a3); /*0x645fb9*/
  v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7; /*0x645fe1*/
  if ( 0.0 != v5 ) /*0x645ff0*/
  {
    v7 = v7 / v5; /*0x645ff8*/
    v8 = v8 / v5; /*0x646002*/
    v9 = v9 / v5; /*0x64600c*/
    v10 = v10 / v5; /*0x646016*/
  }
  *a1 = v7; /*0x646022*/
  a1[1] = v8; /*0x646028*/
  a1[2] = v9; /*0x64602f*/
  a1[3] = v10; /*0x646036*/
  return a1; /*0x646039*/
}



// ==== 0x00646040  sub_646040  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_646040(_DWORD *a1, float *a2, float *a3)
{
  double v4; // st7
  float *v5; // eax
  float v7; // [esp+4h] [ebp-20h] BYREF
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = -*a3; /*0x64604e*/
  v8 = -a3[1]; /*0x646057*/
  v9 = -a3[2]; /*0x646064*/
  v4 = a3[3]; /*0x646068*/
  v11[1] = v8; /*0x64606f*/
  v11[0] = v7; /*0x646073*/
  v10 = v4; /*0x64607b*/
  v11[2] = v9; /*0x646083*/
  v11[3] = v10; /*0x64608b*/
  v5 = QuaternionMathMultiply(&v7, a2, v11); /*0x646094*/
  *a1 = *(_DWORD *)v5; /*0x64609d*/
  a1[1] = *((_DWORD *)v5 + 1); /*0x6460a2*/
  a1[2] = *((_DWORD *)v5 + 2); /*0x6460a8*/
  a1[3] = *((_DWORD *)v5 + 3); /*0x6460ae*/
  return a1; /*0x6460b3*/
}



// ==== 0x006460C0  sub_6460C0  this=Int4  sig=csp ====
float *__fastcall sub_6460C0(float *a1, float *a2)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*a2; /*0x6460c7*/
  v4 = -a2[1]; /*0x6460d0*/
  v5 = -a2[2]; /*0x6460d9*/
  v6 = a2[3]; /*0x6460e6*/
  *a1 = v3; /*0x6460ea*/
  a1[1] = v4; /*0x6460f0*/
  a1[2] = v5; /*0x6460f7*/
  a1[3] = v6; /*0x6460fe*/
  return a1; /*0x646101*/
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
int __userpurge sub_646464@<eax>(ObjectClass *this, int a2@<ecx>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax

  *(_DWORD *)(a2 + 12) = v8; /*0x646464*/
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
  dbl_AC6650 = Math::Sqrt(v0 + v0); /*0x646a9e*/
}



// ==== 0x00646AB0  sub_646AB0  this=-  sig=ida-proto ====
void sub_646AB0()
{
  dbl_AFA460 = dbl_AC6650 / 60.0; /*0x646abc*/
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
  dbl_AC5208 = 0.0174532925199433 * 90.0; /*0x646b3c*/
}



// ==== 0x00646B50  sub_646B50  this=-  sig=ida-proto ====
__int64 sub_646B50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC5208 - dbl_AFA260); /*0x646b62*/
  result = Math::RoundToInt(v0 * dbl_AC6650 * 0.5); /*0x646b76*/
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
  dbl_AFA330 = Math::ArcTan((double)(2 * dword_B0446C) / dbl_AC6650); /*0x646be2*/
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
  dword_AC6640 = 0; /*0x646c22*/
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
  dword_AC6630 = 0; /*0x646c72*/
  dword_AC6634 = 0; /*0x646c77*/
  dword_AC6638 = 0; /*0x646c7c*/
  dword_AC663C = 0; /*0x646c81*/
  return 0; /*0x646c86*/
}



// ==== 0x00646D00  ObjectClass::method_646D00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_646D00(ObjectClass *this)
{
  this->AbstractClass = (void *)-1; /*0x646d04*/
  this->? = 0; /*0x646d0a*/
  this->? = 0; /*0x646d0d*/
  this->? = 0; /*0x646d10*/
  this->? = 0; /*0x646d13*/
  this->? = 0; /*0x646d16*/
  return &this->AbstractClass; /*0x646d19*/
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

  if ( dword_A8B238[0] == 4 ) /*0x646d77*/
    return Network::Disconnect(unk_A8E9C0); /*0x646d7e*/
  return result; /*0x646d83*/
}



// ==== 0x00646D90  sub_646D90  this=-  sig=ida-proto ====
int sub_646D90()
{
  dword_AC6648 = Timer::GetTicks(); /*0x646d9f*/
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
char __fastcall sub_646E90(char a1, int a2, int a3, char a4, int a5)
{
  char *v5; // eax
  char v7[112]; // [esp+8h] [ebp-70h] BYREF

  v5 = ScriptAction::InitActionFields( /*0x646ef0*/
         v7,
         *((_DWORD *)dword_A83D4C + 12),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a3,
         0);
  if ( dword_A802C8 >= 128 ) /*0x646eff*/
    return 0; /*0x646f59*/
  qmemcpy(&byte_A802D4[111 * dword_A802D0], v5, 0x6Fu); /*0x646f1b*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x646f2c*/
  ++dword_A802C8; /*0x646f43*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x646f48*/
  return 1; /*0x646f50*/
}



// ==== 0x00646F70  sub_646F70  this=-  sig=ida-proto ====
char __fastcall sub_646F70(char a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
  char *v7; // eax
  char v9[112]; // [esp+8h] [ebp-70h] BYREF

  v7 = sub_4C68E0( /*0x646fcd*/
         v9,
         *((_DWORD *)dword_A83D4C + 12),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a6,
         a7);
  if ( dword_A802C8 >= 128 ) /*0x646fdc*/
    return 0; /*0x647036*/
  qmemcpy(&byte_A802D4[111 * dword_A802D0], v7, 0x6Fu); /*0x646ff8*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x647009*/
  ++dword_A802C8; /*0x647020*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x647025*/
  return 1; /*0x64702d*/
}



// ==== 0x00647040  ObjectClass::UI_Create  this=ObjectClass  sig=csp ====
char UI_Create(ObjectClass *this)
{
  char *v1; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  if ( dword_A83D4C->__pad_140[183] ) /*0x647048*/
    return 0; /*0x647048*/
  if ( dword_A83D4C->__pad_140[184] ) /*0x647056*/
    return 0; /*0x647056*/
  if ( dword_A83D4C->__pad_140[182] ) /*0x647060*/
    return 0; /*0x647060*/
  v1 = EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0xCu); /*0x647074*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x647083*/
    return 0; /*0x6470dc*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x6470a1*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6470b4*/
  ++stru_A80220.lineTrailer; /*0x6470cb*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6470d0*/
  return 1; /*0x6470d8*/
}



// ==== 0x006470F0  ObjectClass::UI_Add  this=ObjectClass  sig=csp ====
char UI_Add(ObjectClass *this)
{
  char *v1; // eax
  char v3[112]; // [esp+0h] [ebp-70h] BYREF

  if ( dword_A83D4C->__pad_140[183] ) /*0x6470f8*/
    return 0; /*0x6470f8*/
  if ( dword_A83D4C->__pad_140[184] ) /*0x647106*/
    return 0; /*0x647106*/
  if ( dword_A83D4C->__pad_140[182] ) /*0x647110*/
    return 0; /*0x647110*/
  v1 = EventClass::AddEvent(v3, (int)dword_A83D4C->Object_field_0x30, 0x22u); /*0x647124*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x647133*/
    return 0; /*0x64718c*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x647151*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x647164*/
  ++stru_A80220.lineTrailer; /*0x64717b*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x647180*/
  return 1; /*0x647188*/
}



// ==== 0x006471A0  Network::AddFrameEvent  this=Network  sig=csp ====
char Network::AddFrameEvent(Network *this)
{
  char *v1; // eax
  unsigned __int8 v3; // [esp+0h] [ebp-74h]
  char v4[112]; // [esp+4h] [ebp-70h] BYREF

  v3 = 19; /*0x6471a8*/
  if ( *(_DWORD *)&dword_A8B238 == 4 /*0x6471cb*/
    && byte_A8DBA0
    && dword_A8DA84 > 2
    && SessionClass::IsValidHouse((int)&dword_A8B238, 0) )
  {
    v3 = 39; /*0x6471d4*/
  }
  v1 = EventClass::AddEvent(v4, (int)dword_A83D4C->Object_field_0x30, v3); /*0x6471ec*/
  if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x6471fb*/
    return 0; /*0x647254*/
  qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v1, 0x6Fu); /*0x647219*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x64722c*/
  ++stru_A80220.lineTrailer; /*0x647243*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x647248*/
  return 1; /*0x647250*/
}



// ==== 0x00647260  ObjectClass::ProcessNetworkEvents  this=ObjectClass  sig=csp ====
void ProcessNetworkEvents(ObjectClass *this)
{
  int v1; // ecx
  int v2; // ebx
  char *v3; // edi
  char *v4; // esi
  char *v5; // edi
  TechnoClass *v6; // [esp+0h] [ebp-84h]
  int Buffer; // [esp+10h] [ebp-74h] BYREF
  _BYTE v8[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v9; // [esp+80h] [ebp-4h]
  char v10; // [esp+82h] [ebp-2h]

  if ( (dword_A8D5F8 & 2) != 0 ) /*0x64726e*/
  {
    v8[0] = 0; /*0x64727a*/
    if ( EventQueue::Process((EventQueue *)dword_87F770) ) /*0x64727f*/
    {
      if ( EventQueue::Read((EventQueue *)dword_87F770) == 27 || (dword_A8D5F8 & 4) != 0 ) /*0x6472a5*/
      {
        byte_A8E9A0 = 0; /*0x6472aa*/
        return; /*0x6472b5*/
      }
    }
    else if ( (dword_A8D5F8 & 4) != 0 /*0x6472eb*/
           && (int)dword_A8ED84 > 0
           && (dword_AC50F8 != (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640)
            || dword_AC5200 != (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640)) )
    {
      byte_A8E9A0 = 0; /*0x6472f0*/
      return; /*0x6472fb*/
    }
    dword_AC50F8 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x64730d*/
    dword_AC5200 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x647317*/
    ComputeNetworkFrameCRC(v6); /*0x64731c*/
    v1 = (int)dword_A8ED84; /*0x647321*/
    dword_B04474[(unsigned __int8)dword_A8ED84] = *(_DWORD *)dword_AC51FC; /*0x647334*/
    if ( v1 >= dword_A8E30C ) /*0x647342*/
    {
      if ( byte_B04880 ) /*0x64734b*/
        LogMultiplayToSync_MPDEBUG(v1 % 256, 0); /*0x64735f*/
      else
        Multiplay::LogToSYNC_NOMPDEBUG(0); /*0x647368*/
      GameClass::Shutdown((GameClass *)v6); /*0x64736d*/
      ExitProgram(0); /*0x647374*/
    }
    if ( v1 ) /*0x647386*/
    {
      if ( *(_DWORD *)&dword_A8B238 /*0x6473b7*/
        && *(_DWORD *)&dword_A8B238 != 5
        && dword_A8B24C == 2
        && v1 != dword_A8B554 * ((unsigned int)(dword_A8B554 + v1 - 1) / dword_A8B554) )
      {
        return; /*0x6473b7*/
      }
    }
    else if ( *(_DWORD *)&dword_A8B238 ) /*0x64738a*/
    {
      return; /*0x64738a*/
    }
    if ( CCFileClass::Read(&dword_A8D58C, &Buffer, 4) != 4 ) /*0x6473cf*/
      goto LABEL_30; /*0x6473cf*/
    v2 = 0; /*0x6473d9*/
    if ( Buffer > 0 ) /*0x6473dd*/
    {
      while ( CCFileClass::Read(&dword_A8D58C, v8, 111) == 111 ) /*0x6473fd*/
      {
        v8[1] &= ~1u; /*0x647414*/
        if ( dword_8B41F8 < 0x4000 ) /*0x647418*/
        {
          v3 = &byte_8B4204[111 * dword_8B4200]; /*0x64742e*/
          qmemcpy(v3, v8, 0x6Cu); /*0x647435*/
          v3 += 108; /*0x647435*/
          *(_WORD *)v3 = v9; /*0x647437*/
          v3[2] = v10; /*0x647439*/
          dword_A70204[dword_8B4200] = timeGetTime(); /*0x647442*/
          dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64745c*/
          ++dword_8B41F8; /*0x647462*/
        }
        if ( ++v2 >= Buffer ) /*0x64746e*/
          goto LABEL_29; /*0x64746e*/
      }
      goto LABEL_30; /*0x6473fd*/
    }
LABEL_29:
    if ( !Network::ProcessEventList(0, 0, 0) ) /*0x6474a0*/
    {
LABEL_30:
      byte_A8E9A0 = 0; /*0x6474a9*/
      return; /*0x6474b7*/
    }
LABEL_31:
    Network_Process_64D990(v6); /*0x6474b8*/
  }
  else
  {
    switch ( *(_DWORD *)&dword_A8B238 ) /*0x6474d5*/
    {
      case 0: /*0x6474d5*/
      case 5: /*0x6474d5*/
        while ( dword_A802C8 ) /*0x6474e3*/
        {
          byte_A802D5[111 * dword_A802CC] &= ~1u; /*0x647504*/
          if ( dword_8B41F8 < 0x4000 ) /*0x647515*/
          {
            v4 = &byte_A802D4[111 * dword_A802CC]; /*0x647522*/
            v5 = &byte_8B4204[111 * dword_8B4200]; /*0x647539*/
            qmemcpy(v5, v4, 0x6Cu); /*0x647540*/
            v4 += 108; /*0x647540*/
            v5 += 108; /*0x647540*/
            *(_WORD *)v5 = *(_WORD *)v4; /*0x647542*/
            v5[2] = v4[2]; /*0x647544*/
            dword_A70204[dword_8B4200] = timeGetTime(); /*0x64754d*/
            dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64755f*/
            ++dword_8B41F8; /*0x64756a*/
          }
          Network_Process_652540((ObjectClass *)&dword_A802C8); /*0x647574*/
        }
        if ( (dword_A8D5F8 & 1) != 0 ) /*0x64758d*/
          Network_Process_64D9E0(v6); /*0x64758f*/
        if ( Network::ProcessEventList(0, 0, 0) ) /*0x6475ae*/
          goto LABEL_31; /*0x6475b5*/
        byte_A8E9A0 = 0; /*0x6475be*/
        break; /*0x6475c7*/
      case 1: /*0x6474d5*/
      case 2: /*0x6474d5*/
      case 3: /*0x6474d5*/
      case 4: /*0x6474d5*/
        Network::QueueProcessingLoop((Network *)v6); /*0x6475c8*/
        break; /*0x6475c8*/
      default:
        return;
    }
  }
}



// ==== 0x006475F0  Network::QueueProcessingLoop  this=Network  sig=csp ====
void Network::QueueProcessingLoop(Network *this)
{
  int v1; // eax
  Network *v2; // ebp
  int v3; // ecx
  int v4; // esi
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned int v8; // eax
  Network *TextBufferEntry; // esi
  char *v10; // edi
  _DWORD *v11; // eax
  int v12; // edx
  Performance *v13; // edi
  int *v14; // eax
  int v15; // ecx
  int v16; // esi
  char v17; // bl
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // edx
  int v23; // esi
  int v24; // esi
  int v25; // ecx
  _DWORD *v26; // edx
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int updated; // esi
  unsigned int v32; // ebx
  int v33; // edi
  unsigned int *v34; // ebp
  unsigned int v35; // esi
  int v36; // ebp
  int v37; // edi
  char *v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // esi
  char Object_field_0x30; // al
  int ptr_0; // edx
  char *v44; // edi
  int v45; // eax
  char *v46; // edi
  int v4... [21708 chars total]



// ==== 0x00648340  nullsub_32  this=-  sig=ida-proto ====
void __cdecl nullsub_32()
{
  ; /*0x648340*/
}



// ==== 0x00648350  ObjectClass::RunNetworkGameLoop  this=ObjectClass  sig=csp ====
void RunNetworkGameLoop(ObjectClass *this)
{
  int v1; // eax
  void *v2; // ebx
  IPXManagerClass *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int *v12; // ebp
  void *v13; // [esp+10h] [ebp-60h]
  unsigned int v14; // [esp+18h] [ebp-58h] BYREF
  int v15; // [esp+1Ch] [ebp-54h] BYREF
  SyncDelayClass v16; // [esp+20h] [ebp-50h] BYREF
  int v17; // [esp+24h] [ebp-4Ch] BYREF
  int v18; // [esp+28h] [ebp-48h] BYREF
  int v19; // [esp+2Ch] [ebp-44h] BYREF
  int Ticks; // [esp+34h] [ebp-3Ch]
  int v21; // [esp+38h] [ebp-38h]
  int v22; // [esp+3Ch] [ebp-34h]
  int v23; // [esp+40h] [ebp-30h]
  int v24; // [esp+44h] [ebp-2Ch]
  int v25; // [esp+48h] [ebp-28h]
  int v26; // [esp+4Ch] [ebp-24h]
  int v27; // [esp+50h] [ebp-20h]
  int v28; // [esp+54h] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-18h]
  int v30; // [esp+5Ch] [ebp-14h]
  int v31; // [esp+60h] [ebp-10h]
  int v32; // [esp+64h] [ebp-Ch]
  int v33; // [esp+68h] [ebp-8h]
  int v34; // [esp+6Ch] [ebp-4h]

  Debug::Log(); /*0x64835c*/
  if ( *(int *)&dword_A8B238 < 3 || *(int *)&dword_A8B238 > 4 ) /*0x648371*/
  {
    v13 = (void *)dword_A8EA74; /*0x648393*/
    v3 = (IPXManagerClass *)&unk_A8EA70; /*0x648397*/
    v2 = (void *)dword_A8EA74; /*0x64839c*/
    v1 = dword_A8EA78 - 14; /*0x6483a0*/
  }
  else
  {
    v1 = dword_A8DA40; /*0x648373*/
    v2 = &unk_A8D812; /*0x648378*/
    v13 = &unk_A8D812; /*0x64837d*/
    v3 = &unk_A8E9C0; /*0x648381*/
  }
  LOWORD(dword_AFA400) = BuildNetworkEventPacket((int)v3, (int)v2, v1, (int)dword_A8B550, dword_AFA400) + dword_AFA400; /*0x6483c1*/
  Ticks = Timer::GetTicks(); /*0x6483d5*/
  v22 = 15; /*0x6483d9*/
  v23 = Timer::GetTicks(); /*0x6483ea*/
  v25 = 600; /*0x6483ee*/
  v19 = Timer::GetTicks(); /*0x6483fb*/
  Debug::Log(); /*0x648404*/
  while ( 2 ) /*0x64840c*/
  {
    EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x64840c*/
    v4 = v22; /*0x64841b*/
    if ( Ticks == -1 ) /*0x648424*/
    {
LABEL_9:
      if ( v4 ) /*0x64843b*/
        goto LABEL_11; /*0x64843b*/
      goto LABEL_10; /*0x64843b*/
    }
    v5 = Timer::GetTicks() - Ticks; /*0x64842f*/
    if ( v5 < v4 ) /*0x648435*/
    {
      v4 -= v5; /*0x648437*/
      goto LABEL_9; /*0x648437*/
    }
LABEL_10:
    v26 = Timer::GetTicks(); /*0x64843d*/
    v28 = 15; /*0x648458*/
    Ticks = v26; /*0x64845c*/
    v21 = v27; /*0x648460*/
    v22 = 15; /*0x648464*/
    Debug::Log(); /*0x648468*/
    SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x64847e*/
LABEL_11:
    (*(void (__thiscall **)(IPXManagerClass *))(v3->Socket + 4))(v3); /*0x648483*/
    v6 = v25; /*0x64848e*/
    if ( v23 != -1 ) /*0x648494*/
    {
      v7 = Timer::GetTicks() - v23; /*0x64849f*/
      if ( v7 >= v6 ) /*0x6484a5*/
      {
LABEL_33:
        Debug::Log(); /*0x648664*/
        return; /*0x648678*/
      }
      v6 -= v7; /*0x6484ab*/
    }
    if ( !v6 ) /*0x6484af*/
      goto LABEL_33; /*0x6484af*/
    v8 = 1; /*0x6484b5*/
    do /*0x64858f*/
    {
      if ( !(*(int (__thiscall **)(IPXManagerClass *, void *, unsigned int *, int *))(v3->Socket + 12))( /*0x6484c9*/
              v3,
              v2,
              &v14,
              &v15) )
        break; /*0x6484ce*/
      EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x6484da*/
      if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x6484ec*/
      {
        switch ( ProcessNetworkMessage((int)v2, 0) ) /*0x648528*/
        {
          case 0: /*0x648528*/
            goto LABEL_23;
          case 4: /*0x648528*/
            (*(void (__thiscall **)(IPXManagerClass *))(v3->Socket + 4))(v3); /*0x648533*/
            v29 = Timer::GetTicks(); /*0x648544*/
            Ticks = v29; /*0x648548*/
            v31 = 15; /*0x648550*/
            v22 = 15; /*0x648554*/
            v21 = v30; /*0x64855c*/
            v32 = Timer::GetTicks(); /*0x64856e*/
            v34 = 600; /*0x648572*/
            v23 = v32; /*0x648576*/
            v24 = v33; /*0x64857a*/
            v25 = 600; /*0x64857e*/
            goto LABEL_23; /*0x64857e*/
          default:
            return;
        }
        return;
      }
      if ( ProcessNetworkFrameSync((int)v3, (int)v2, v15, v14, (int)&dword_AFA358, &v19) == 3 ) /*0x64850e*/
        goto LABEL_33; /*0x64850e*/
LABEL_23:
      (*(void (__thiscall **)(IPXManagerClass *))(v3->Socket + 4))(v3); /*0x648586*/
      v9 = v8++; /*0x648589*/
    }
    while ( v9 < 64 ); /*0x64858f*/
    Event::Dispatch(); /*0x648595*/
    if ( !*(_DWORD *)&stru_A8EB00.?[444] ) /*0x6485a1*/
    {
      InputManager_ProcessEvents::Vtable((GScreenClass *)&stru_87F5F0.__pad_58[416], &v16, &v18, &v17); /*0x6485b7*/
      SyncDelayClass::ProcessNetworkSync(&v16); /*0x6485c0*/
      (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x6485cd*/
      TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x6485d5*/
    }
    v10 = *(_DWORD *)&stru_A8EB00.?[416] + 1000; /*0x6485e7*/
    v11 = 0; /*0x6485ed*/
    if ( (*(int (__thiscall **)(IPXManagerClass *))(v3->Socket + 16))(v3) > 0 ) /*0x6485f4*/
    {
      v12 = &dword_AFA358; /*0x6485f6*/
      do /*0x648615*/
      {
        if ( *v12 < v10 ) /*0x648600*/
          v10 = *v12; /*0x648602*/
        ++v11; /*0x64860c*/
        v12 += 6; /*0x64860d*/
      }
      while ( v11 < (*(int (__thiscall **)(IPXManagerClass *))(v3->Socket + 16))(v3) ); /*0x648615*/
    }
    if ( v10 + dword_A8B554 < *(int *)&stru_A8EB00.?[416] ) /*0x64862a*/
    {
      Debug::Log(); /*0x64863e*/
      v2 = v13; /*0x648643*/
      continue; /*0x64864a*/
    }
    break;
  }
  Debug::Log(); /*0x64867f*/
  Debug::Log(); /*0x648689*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x64869f*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x6486b2*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x6486c5*/
  SendNetworkFrameSync(&v3->Socket, dword_AFA400); /*0x6486d8*/
}



// ==== 0x00648710  QueueNetworkProcessor  this=WinModemClass  sig=csp ====
int __fastcall QueueNetworkProcessor(int a1, int *a2, int a3, int a4, int a5, int a6, __int16 a7, int *a8)
{
  int *v8; // ebx
  int v9; // esi
  int v10; // ebp
  DWORD Time; // edi
  DWORD *v12; // ebp
  int v13; // edi
  int v14; // esi
  int v15; // eax
  char *v16; // eax
  int v17; // esi
  _DWORD *v18; // eax
  _WORD *v19; // edi
  void *v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // eax
  BOOL v28; // edi
  int v29; // esi
  char *v30; // eax
  int v31; // ebp
  char *v32; // esi
  char *v33; // edi
  HWND DialogIndirect; // eax
  int RemainingMs; // kr04_4
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  HWND v38; // esi
  int v39; // ebp
  int v40; // eax
  int v41; // edx
  int *v42; // edi
  int ConnectionSpeed; // eax
  int v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *... [36437 chars total]



// ==== 0x00649CA0  BuildNetworkEventPacket  this=Network  sig=csp ====
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

  v6 = dword_A802C8; /*0x649caf*/
  v26 = a1; /*0x649cc4*/
  v25 = 0; /*0x649cc8*/
  v22 = dword_A802C8; /*0x649ccc*/
  if ( dword_A802C8 > 0x2000 - dword_8B41F8 ) /*0x649cd0*/
    v22 = 0x2000 - dword_8B41F8; /*0x649cd2*/
  v28 = dword_A802C8; /*0x649cd6*/
  while ( 1 )
  {
    if ( !v22 || !v6 || (v24 = 1, dword_A8B54C == 1) ) /*0x649cf9*/
      v24 = 0; /*0x649cfb*/
    *(_BYTE *)a2 = 28; /*0x649cff*/
    v27 = 0; /*0x649d0a*/
    v8 = a4; /*0x649d1b*/
    *(_DWORD *)(a2 + 3) = dword_A8B24C == 2
                        ? (wchar_t *)(dword_A8B554
                                    * (((unsigned int)dword_A8ED84 + dword_A8B554 + a4 - 1)
                                     / dword_A8B554))
                        : (wchar_t *)((char *)dword_A8ED84 + a4);
    *(_BYTE *)(a2 + 2) = *((_BYTE *)dword_A83D4C + 48); /*0x649d49*/
    *(_DWORD *)(a2 + 7) = *(_DWORD *)dword_AC51FC; /*0x649d57*/
    *(_WORD *)(a2 + 11) = a5; /*0x649d5a*/
    *(_BYTE *)(a2 + 13) = a4; /*0x649d5e*/
    v9 = dword_A8B24C != 0 ? 14 : 111;
    if ( dword_A8B24C )
    {
      v9 = dword_A8B24C <= 0 || dword_A8B24C > 2
         ? 0
         : CompressNetworkMegaMission(a2, a3, a4, dword_A8B24C != 0 ? 14 : 111, v22, &v27);
    }
    else
    {
      v23 = 0; /*0x649da7*/
      if ( dword_A802C8 )
      {
        v10 = dword_A802CC; /*0x649db7*/
        while ( v23 < v22 )
        {
          v11 = 37 * v10; /*0x649dcf*/
          v12 = byte_A802D4[3 * v11] == 31 ? *(int *)((char *)&dword_A802DF + 3 * v11) + 111 : 111;
          if ( v9 + v12 > a3 ) /*0x649df5*/
            break; /*0x649df5*/
          *(int *)((char *)&dword_A802D7 + 3 * v11) = (int)dword_A8ED84 + v8; /*0x649e03*/
          byte_A802D6[111 * dword_A802CC] = *((_BYTE *)dword_A83D4C + 48); /*0x649e1e*/
          byte_A802D5[111 * dword_A802CC] &= ~1u; /*0x649e3a*/
          if ( dword_8B41F8 >= 0x4000 ) /*0x649e4b*/
            break; /*0x649e4b*/
          v13 = &byte_A802D4[111 * dword_A802CC]; /*0x649e61*/
          v14 = &byte_8B4204[111 * dword_8B4200]; /*0x649e73*/
          qmemcpy(v14, v13, 0x6Cu); /*0x649e7a*/
          v13 += 108; /*0x649e7a*/
          v14 += 108; /*0x649e7a*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x649e7c*/
          v14[2] = v13[2]; /*0x649e7e*/
          dword_A70204[dword_8B4200] = timeGetTime(); /*0x649e8e*/
          ++dword_8B41F8; /*0x649eae*/
          dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x649eb7*/
          v15 = &byte_A802D4[111 * dword_A802CC]; /*0x649ec5*/
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
              *(const void **)((char *)&dword_A802DB + 111 * dword_A802CC),
              *(int *)((char *)&dword_A802DF + 111 * dword_A802CC));
            v19 = dword_A802CC; /*0x649f09*/
            v9 = *(int *)((char *)&dword_A802DF + 111 * dword_A802CC) + v18; /*0x649f14*/
          }
          else
          {
            v19 = dword_A802CC; /*0x649f1d*/
            v9 += 111; /*0x649f22*/
          }
          ++v23; /*0x649f32*/
          if ( !dword_A802C8 || (v10 = (v19 + 1) & 0x7F, dword_A802CC = v10, --dword_A802C8, !dword_A802C8) ) /*0x649f48*/
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
    v6 = dword_A802C8; /*0x649fb8*/
    if ( !dword_A802C8 || dword_A802C8 > v28 ) /*0x649fc6*/
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



// ==== 0x0064A000  SendNetworkFrameSync  this=Network  sig=csp ====
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
  if ( dword_A8B24C == 2 ) /*0x64a027*/
    *(_DWORD *)&v6[3] = dword_A8B554 /*0x64a04a*/
                      * (((unsigned int)dword_A8ED84 + (int)dword_A8B550 + dword_A8B554 - 1)
                       / dword_A8B554);
  else
    *(_DWORD *)&v6[3] = (char *)dword_A8ED84 + (_DWORD)dword_A8B550; /*0x64a05f*/
  v3 = *((_BYTE *)dword_A83D4C + 48); /*0x64a06e*/
  *(_DWORD *)&v6[7] = dword_A8E7A8; /*0x64a076*/
  v6[2] = v3; /*0x64a07a*/
  v4 = *a1; /*0x64a07e*/
  v6[13] = (_BYTE)dword_A8B550; /*0x64a084*/
  *(_WORD *)&v6[11] = a2; /*0x64a08b*/
  (*(void (__thiscall **)(int *, _BYTE *, int, _DWORD, int))(v4 + 8))(a1, v6, 14, 0, -1); /*0x64a090*/
  ((void (*)(const char *, ...))Debug::Log)(aSentFramesyncO); /*0x64a098*/
  return ++dword_B0487C; /*0x64a0a6*/
}



// ==== 0x0064A0C0  ProcessNetworkFrameSync  this=Network  sig=csp ====
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
  if ( byte_A8DBA0 ) /*0x64a0f0*/
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
                if ( Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)) ) /*0x64a1fd*/
                {
                  Class = (char *)Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)); /*0x64a213*/
                  ToWideStringChar(Class); /*0x64a21a*/
                  Debug::Log(); /*0x64a225*/
                }
              }
              else
              {
                *v16 = v15; /*0x64a189*/
                Network_Process_652110(a5, v14); /*0x64a194*/
                if ( Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)) ) /*0x64a1a3*/
                {
                  v17 = (char *)Network::GetClass(unk_A8E9C0, *(char *)(v13 + 11)); /*0x64a1b9*/
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
          else if ( *v12 == *((_DWORD *)dword_A83D4C + 12) ) /*0x64a263*/
          {
            dword_A8E2D4 = *(_DWORD *)(v12 + 2); /*0x64a268*/
            Debug::Log(); /*0x64a289*/
          }
          else
          {
            v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *v12); /*0x64a29d*/
            if ( v20 != -1 ) /*0x64a2a3*/
            {
              v21 = *(_DWORD *)(v12 + 2); /*0x64a2b0*/
              *(_DWORD *)(a5 + 24 * v20 + 16) = v21; /*0x64a2b6*/
              dword_AC5210[v20] = v21; /*0x64a2ba*/
              if ( v34 <= v21 ) /*0x64a2c5*/
                v34 = v21; /*0x64a2c7*/
              if ( v12[1] ) /*0x64a2cb*/
              {
                if ( SessionClass::IsValidHouse((int)dword_A8B238, 0) ) /*0x64a2dd*/
                {
                  if ( dword_A8E2CC != *v12 ) /*0x64a2ef*/
                  {
                    v22 = EventClass::Add2(v43, *((_DWORD *)dword_A83D4C + 12), 0x28u, *v12); /*0x64a301*/
                    if ( dword_A802C8 < 128 ) /*0x64a310*/
                    {
                      qmemcpy(&byte_A802D4[111 * dword_A802D0], v22, 0x6Fu); /*0x64a32c*/
                      v6 = a2; /*0x64a33d*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x64a341*/
                      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x64a358*/
                      ++dword_A802C8; /*0x64a35e*/
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
        dword_A8E2C4 = v7; /*0x64a396*/
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
    if ( dword_A8B238[0] == 4 || dword_A8B238[0] == 3 ) /*0x64a5b0*/
    {
      Network::GetClass(unk_A8E9C0, a3); /*0x64a5ca*/
      Debug::Log(); /*0x64a5d5*/
    }
    if ( *(_DWORD *)(v6 + 7) != dword_A8E7A8 ) /*0x64a5e8*/
      return 2; /*0x64a5f9*/
    v24[3] = Timer::GetTicks() - *a6; /*0x64a60d*/
    return v41; /*0x64a60d*/
  }
  v26 = 0; /*0x64a417*/
  if ( dword_A8B24C ) /*0x64a41b*/
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
    qmemcpy(&byte_8B4204[111 * dword_8B4200], v29, 0x6Fu); /*0x64a4c0*/
    v6 = a2; /*0x64a4d1*/
    dword_A70204[dword_8B4200] = timeGetTime(); /*0x64a4d5*/
    dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64a4ee*/
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
    v7 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x64a68e*/
    if ( !((int (__stdcall *)(wchar_t *, int, wchar_t *, int))ScrollingText::AddLine)( /*0x64a6a1*/
            (wchar_t *)v5,
            *(unsigned __int8 *)(v2 + 24),
            (wchar_t *)(v2 + 25),
            v7) )
    {
      v8 = CharToWideString((_BYTE *)(v2 + 4)); /*0x64a6b1*/
      v9 = *(unsigned __int8 *)(v2 + 24); /*0x64a6cb*/
      v10 = Math::RoundToInt(*(double *)&dword_8871E0[1].__pad_A0 * 900.0); /*0x64a6cd*/
      MessageListClass::AddMessage(unk_A8BC60, (wchar_t *)v8, v9, v6, v9, 16454, v10, 0); /*0x64a6e1*/
      PlayVocClass(dword_8871E0->MovieOn, 0x2000, 1.0, 0); /*0x64a6fe*/
    }
    if ( wcslen(v6) ) /*0x64a704*/
      wcscpy((wchar_t *)&dword_A8D110 + 1, v6); /*0x64a718*/
    MapClass::MarkForRedraw(&dword_87F7E8, 2); /*0x64a727*/
    return 4; /*0x64a727*/
  }
  if ( v3 == 120 ) /*0x64a737*/
  {
    if ( (_BYTE)dword_A8D110 && dword_A8B238[0] == 3 || BYTE1(dword_A8D110) && dword_A8B238[0] == 4 ) /*0x64a759*/
    {
      LOBYTE(a1) = *(_BYTE *)(a1 + 25); /*0x64a75b*/
      ((void (__thiscall *)(int))PlayTauntClass)(a1); /*0x64a75e*/
      return 4; /*0x64a76a*/
    }
    return 4; /*0x64a733*/
  }
  if ( v3 >= 100 && v3 < 109 || v3 >= 110 && v3 <= 116 || dword_A8B54C == 1 || !*(_BYTE *)a1 || *(_BYTE *)a1 >= 0x2Fu ) /*0x64a790*/
    return 4; /*0x64a790*/
  v11 = -(*((_DWORD *)dword_A83D4C + 12) != *(char *)(a1 + 2)); /*0x64a7a4*/
  LOBYTE(v11) = v11 & 0xFA; /*0x64a7a7*/
  return v11 + 6; /*0x64a660*/
}



// ==== 0x0064A7B0  ObjectClass::RenderPlayerLatencyBars  this=ObjectClass  sig=csp ====
int __thiscall RenderPlayerLatencyBars(ObjectClass *this)
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
  void (__thiscall **DSurface_field_0x0)(DSurface *, int); // edi
  int v13; // eax
  void (__thiscall **v14)(DSurface *, int); // edi
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

  result = dword_A8DA84; /*0x64a7b3*/
  v2 = 0; /*0x64a7b9*/
  for ( i = 0; v2 < dword_A8DA84; i = v2 )
  {
    DlgItem = GetDlgItem((HWND)this, dword_837320[v2]); /*0x64a7df*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x64a7e9*/
    v4 = Rect.right - Rect.left; /*0x64a7fc*/
    left = Rect.left; /*0x64a802*/
    v24[0] = Rect.left; /*0x64a806*/
    top = Rect.top; /*0x64a812*/
    v21 = Rect.bottom - Rect.top; /*0x64a816*/
    v24[1] = Rect.top; /*0x64a81a*/
    v24[2] = Rect.right - Rect.left; /*0x64a824*/
    v24[3] = Rect.bottom - Rect.top; /*0x64a828*/
    if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x64a83a*/
    {
      v17 = 0; /*0x64a84d*/
      v5 = 0; /*0x64a855*/
    }
    else
    {
      v5 = IPXManagerClass::send(&unk_A8E9C0, *(_DWORD *)(dword_A8DA78[v2] + 111)); /*0x64a842*/
      v17 = v5; /*0x64a847*/
    }
    if ( v2 ) /*0x64a85b*/
      v6 = dword_AFA418 - dword_AFA284[6 * v5]; /*0x64a86a*/
    else
      v6 = 0; /*0x64a85d*/
    v7 = 200 >> g_BitMask_Blue << g_BitMask_Green; /*0x64a8ac*/
    if ( v6 > 0xF0 ) /*0x64a8b4*/
    {
      v7 = (200 >> g_BitMask_Blue << g_BitMask_Green) | (200 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x64a8d1*/
      if ( v6 > 0x1E0 ) /*0x64a8d9*/
      {
        v7 = 200 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x64a8f3*/
        v8 = (60 * timeGetTime() - 60 * dword_AFA28C[6 * v17]) / 0x3E8; /*0x64a924*/
        if ( v8 < 0x1A4 ) /*0x64a92d*/
        {
          v6 = v8; /*0x64a942*/
          v7 = 200 >> g_BitMask_Red << g_BitShift_Blue; /*0x64a948*/
        }
      }
      v2 = i; /*0x64a96e*/
    }
    v9 = 25 * v6; /*0x64a97b*/
    v10 = 6; /*0x64a97f*/
    v11 = ((int)(100 - 4 * v9 / 0x4B0u) <= 0 ? 0 : 100 - 4 * v9 / 0x4B0u) * v4;
    if ( v11 / 100 >= 6 ) /*0x64a9b4*/
      v10 = v11 / 100; /*0x64a9b6*/
    DSurface_field_0x0 = (void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0; /*0x64aa0b*/
    v13 = (*((int (__thiscall **)(DSurface *, char *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x64aa1a*/
            DSurface_Alternate,
            v25,
            v24,
            (byte_A8EAE4 >> g_BitShift_Green_0 << g_BitShift_Red)
          | (word_A8EAE5 >> g_BitMask_Blue << g_BitMask_Green)
          | (MEMORY[0xA8EAE6] >> g_BitMask_Red << g_BitShift_Blue));
    DSurface_field_0x0[21](DSurface_Alternate, v13); /*0x64aa24*/
    v22[2] = v10 - 4; /*0x64aa45*/
    v22[1] = top + 2; /*0x64aa55*/
    v22[3] = v21 - 4; /*0x64aa59*/
    v22[0] = left + 2; /*0x64aa61*/
    v14 = (void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0; /*0x64aa65*/
    v15 = (*((int (__thiscall **)(DSurface *, char *, _DWORD *, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x64aa6e*/
            DSurface_Alternate,
            v26,
            v22,
            (unsigned __int16)v7);
    v14[4](DSurface_Alternate, v15); /*0x64aa78*/
    result = dword_A8DA84; /*0x64aa7b*/
    ++v2; /*0x64aa80*/
  }
  return result; /*0x64aa90*/
}



// ==== 0x0064AAA0  ObjectClass::method_64AAA0  this=ObjectClass  sig=csp ====
int __thiscall sub_64AAA0(ObjectClass *this)
{
  LRESULT v2; // esi

  v2 = SendMessageA((HWND)this, 0x18Bu, 0, 0); /*0x64aab7*/
  if ( v2 > 50 ) /*0x64aabc*/
  {
    SendMessageA((HWND)this, 0x182u, 0, 0); /*0x64aac8*/
    --v2; /*0x64aaca*/
  }
  return SendMessageA((HWND)this, 0x197u, v2 - 1, 0); /*0x64aad7*/
}



// ==== 0x0064AAE0  KickNetworkPlayer  this=-  sig=csp ====
int __fastcall KickNetworkPlayer(HWND hDlg, LPARAM lParam)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // esi
  wchar_t *StringCSF; // eax
  LRESULT (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebx
  LRESULT v9; // edi
  wchar_t *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // esi
  HWND v14; // [esp-4h] [ebp-1D8h]
  int v15; // [esp+Ch] [ebp-1C8h] BYREF
  char Destination[43]; // [esp+10h] [ebp-1C4h] BYREF
  int i; // [esp+3Bh] [ebp-199h]
  int v18; // [esp+3Fh] [ebp-195h]

  if ( lParam >= 0 && lParam < dword_A8DA84 ) /*0x64aafb*/
  {
    Debug::Log(); /*0x64ab16*/
    DlgItem = GetDlgItem(hDlg, 1617); /*0x64ab24*/
    v6 = DlgItem; /*0x64ab2c*/
    if ( !lParam ) /*0x64ab2e*/
    {
      v14 = DlgItem; /*0x64ab30*/
      StringCSF = GetStringCSF(aTxtReconnectKi_0, 0, g_Str_File_Queue_CPP, 3375); /*0x64ab42*/
      DrawDialogText(-1, StringCSF, v14); /*0x64ab4c*/
      v8 = SendMessageA; /*0x64ab51*/
      v9 = SendMessageA(v6, 0x18Bu, 0, 0); /*0x64ab61*/
      if ( v9 > 50 ) /*0x64ab66*/
        goto LABEL_9; /*0x64ab66*/
      return v8(v6, 0x197u, v9 - 1, 0); /*0x64ab66*/
    }
    if ( dword_A8B238[0] == 4 && *(_DWORD *)dword_B779C4 ) /*0x64ab7a*/
    {
      v10 = GetStringCSF(aTxtCantKick, 0, g_Str_File_Queue_CPP, 3385); /*0x64ab8e*/
      DrawDialogText(-1, v10, v6); /*0x64ab98*/
      v8 = SendMessageA; /*0x64ab9d*/
      v9 = SendMessageA(v6, 0x18Bu, 0, 0); /*0x64abaf*/
      if ( v9 > 50 ) /*0x64abb4*/
      {
LABEL_9:
        v8(v6, 0x182u, 0, 0); /*0x64abb6*/
        --v9; /*0x64abc2*/
      }
      return v8(v6, 0x197u, v9 - 1, 0); /*0x64abd8*/
    }
    v15 = 28; /*0x64abdf*/
    v11 = ToWideStringChar(*(char **)dword_A8DA78); /*0x64abeb*/
    strncpy(Destination, v11, 0x14u); /*0x64abf6*/
    v12 = dword_A8DA78; /*0x64abfb*/
    v13 = 1; /*0x64ac00*/
    v18 = *(_DWORD *)(*(_DWORD *)dword_A8DA78 + 111); /*0x64ac0d*/
    for ( i = *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * lParam) + 111); v13 < dword_A8DA84; v12 = dword_A8DA78 ) /*0x64ac23*/
    {
      Debug::Log(); /*0x64ac2e*/
      Network::SendMessage((int)unk_A8E9C0, (int)&v15, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * v13++) + 40, 0, 0); /*0x64ac58*/
    }
    return Network_Process_64AD10(*(_DWORD *)(*(_DWORD *)v12 + 111), *(_DWORD *)(*(_DWORD *)(v12 + 4 * lParam) + 111)); /*0x64ac77*/
  }
  return result; /*0x64abcf*/
}



// ==== 0x0064AC90  Network::syncGameState  this=Network  sig=csp ====
int __thiscall Network::syncGameState(Network *this)
{
  int v2; // ebx
  int result; // eax

  v2 = __2_YAPAXI_Z(0x1C7u); /*0x64ac9f*/
  qmemcpy((void *)v2, this, 0x1C4u); /*0x64acab*/
  this = (Network *)((char *)this + 452); /*0x64acab*/
  *(_WORD *)(v2 + 452) = this->Network_field_0x0; /*0x64acad*/
  *(_BYTE *)(v2 + 454) = BYTE2(this->Network_field_0x0); /*0x64acaf*/
  result = *(_DWORD *)stru_A8BB1C.__pad_14; /*0x64acb0*/
  if ( *(int *)&stru_A8BB1C.__pad_14[8] < *(int *)stru_A8BB1C.__pad_14 /*0x64aceb*/
    || (stru_A8BB1C.__pad_14[5] || !*(_DWORD *)stru_A8BB1C.__pad_14)
    && *(int *)&stru_A8BB1C.__pad_14[12] > 0
    && (result = (*((int (__thiscall **)(void **, int, _DWORD))stru_A8BB1C.Network_field_0xC + 2))(
                   &stru_A8BB1C.Network_field_0xC,
                   *(_DWORD *)stru_A8BB1C.__pad_14 + *(_DWORD *)&stru_A8BB1C.__pad_14[12],
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&stru_A8BB1C.__pad_14[8])++; /*0x64acf3*/
    *((_DWORD *)stru_A8BB1C.Network_field_0x10 + result) = v2; /*0x64ad02*/
  }
  return result; /*0x64ad05*/
}



// ==== 0x0064AD10  Network_Process_64AD10  this=-  sig=ida-proto ====
LRESULT __fastcall Network_Process_64AD10(int a1, int a2)
{
  LRESULT v3; // edi
  LRESULT result; // eax
  char *v5; // edx
  const wchar_t *Class; // edi
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND DlgItem; // esi
  LRESULT v10; // edi
  int v11; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  v3 = 0; /*0x64ad1b*/
  result = *(_DWORD *)&stru_A8BB1C.Network_field_0x22[4 * a2 + 2]; /*0x64ad1d*/
  if ( result <= 0 ) /*0x64ad26*/
  {
LABEL_5:
    *(_DWORD *)&stru_A8BB1C.__pad_34[32 * a2 + 16 + 4 * result] = a1; /*0x64ad41*/
    ++*(_DWORD *)&stru_A8BB1C.Network_field_0x22[4 * a2 + 2]; /*0x64ad53*/
    result = *(_DWORD *)&dword_A8B238; /*0x64ad5a*/
    if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x64ad67*/
    {
      Class = (const wchar_t *)Network::GetClass((Network *)&unk_A8E9C0, a1); /*0x64ad78*/
      if ( !Class ) /*0x64ad7c*/
        Class = (const wchar_t *)*dword_A8DA78; /*0x64ad84*/
      Network::GetClass((Network *)&unk_A8E9C0, a2); /*0x64ad8c*/
      Debug::Log(); /*0x64ad98*/
      v11 = Network::GetClass((Network *)&unk_A8E9C0, a2); /*0x64adb2*/
      StringCSF = GetStringCSF(aTxtReconnectKi, 0, g_Str_File_Queue_CPP, 3485); /*0x64adbe*/
      swprintf(Buffer, (const size_t)StringCSF, Class, v11); /*0x64adc9*/
      Current = (HWND)Dialog::GetCurrent(); /*0x64add1*/
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
    v5 = &stru_A8BB1C.__pad_34[32 * a2 + 16]; /*0x64ad2b*/
    while ( *(_DWORD *)v5 != a1 ) /*0x64ad33*/
    {
      ++v3; /*0x64ad39*/
      v5 += 4; /*0x64ad3a*/
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
int __stdcall NetworkScore_DlgProc(HWND hWnd, UINT a2, HWND a3, char *a4)
{
  HWND v4; // ebp
  _DWORD *WindowLongA; // esi
  int result; // eax
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
        for ( i = 0; i < 8; ++i ) /*0x64b0fd*/
        {
          DlgItem = GetDlgItem(v4, dword_837300[i]); /*0x64b107*/
          EnableWindow(DlgItem, 0); /*0x64b10c*/
          v10 = GetDlgItem(v4, dword_837320[i]); /*0x64b116*/
          EnableWindow(v10, 0); /*0x64b11b*/
        }
        v11 = 0; /*0x64b125*/
        while ( 1 ) /*0x64b13f*/
        {
          v12 = GetDlgItem(v4, dword_837300[v11]); /*0x64b13f*/
          a3 = GetDlgItem(hWnd, dword_837320[v11]); /*0x64b149*/
          if ( v11 >= dword_A8DA84 ) /*0x64b154*/
          {
            DestroyWindow(v12); /*0x64b185*/
            DestroyWindow(a3); /*0x64b18c*/
          }
          else
          {
            SendMessageA(v12, 0x4B2u, 0, *(_DWORD *)(dword_A8DA78 + 4 * v11)); /*0x64b168*/
            EnableWindow(v12, 1); /*0x64b171*/
            EnableWindow(a3, 1); /*0x64b17a*/
          }
          if ( ++v11 >= 8 ) /*0x64b192*/
            break; /*0x64b192*/
          v4 = hWnd; /*0x64b129*/
        }
        if ( dword_A8B238 == 4 ) /*0x64b19d*/
        {
          *(_DWORD *)dword_B77780 = 0; /*0x64b1ae*/
          *(_DWORD *)dword_B77CE0 = 0; /*0x64b1b3*/
          byte_B0488C = 0; /*0x64b1b8*/
          byte_B0488D = 0; /*0x64b1bd*/
          dword_B04890 = 0; /*0x64b1c2*/
          byte_B04878 = 0; /*0x64b1c7*/
          SetTimer(hWnd, 1u, 0x3E8u, 0); /*0x64b1cc*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x64b1da*/
      }
      return 0; /*0x64b1df*/
    }
    if ( a2 >= 0x132 ) /*0x64afcc*/
      return (int)GetStockObject(4); /*0x64b0db*/
    if ( a2 != 275 || dword_A8B238 != 4 || a3 != (HWND)1 || !g_UIPointerTable ) /*0x64affc*/
      return 0; /*0x64affc*/
    if ( *(int *)dword_B77780 < 5 ) /*0x64b00f*/
    {
      (*(void (__stdcall **)(LPVOID, void *, int, HWND *))(*(_DWORD *)g_UIPointerTable + 24))( /*0x64b023*/
        g_UIPointerTable,
        &unk_B77930,
        1000,
        &hWnd);
      ++*(_DWORD *)dword_B77780; /*0x64b026*/
    }
    v7 = ++dword_B04890; /*0x64b037*/
    if ( !*(_DWORD *)dword_B779C4 ) /*0x64b03f*/
      goto LABEL_45; /*0x64b03f*/
    if ( byte_B0488C || v7 <= 5 || *(_DWORD *)dword_B77CE0 ) /*0x64b057*/
    {
      if ( !byte_B0488D && v7 > 10 && !*(_DWORD *)dword_B77CE0 ) /*0x64b07e*/
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



// ==== 0x0064B240  KickNetworkPlayerNow  this=Network  sig=csp ====
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
    *(_BYTE *)(*((_DWORD *)dword_A8022C + v6) + 520) = 1; /*0x64b2cc*/
    if ( Network::CountDisconnectedHouses(*((_DWORD *)dword_A8022C + v6)) == 1 && dword_A8B238[0] == 4 && !byte_A8F900 ) /*0x64b2f4*/
    {
      Timer::UpdateDelta(); /*0x64b2f6*/
      byte_B0BD78 = 1; /*0x64b2ff*/
      if ( !v13 ) /*0x64b307*/
        byte_A8B8C1 = 1; /*0x64b309*/
      for ( i = 0; i < dword_A80238; ++i ) /*0x64b318*/
      {
        v8 = (_BYTE *)*((_DWORD *)dword_A8022C + i); /*0x64b320*/
        if ( v8 && !v8[501] && v8[492] ) /*0x64b331*/
          v8[520] = 1; /*0x64b33b*/
      }
      ProcessGameResults(0); /*0x64b34d*/
    }
    if ( Network::CountDisconnectedHouses(*((_DWORD *)dword_A8022C + v6)) > 1 && !v13 ) /*0x64b369*/
      *(_BYTE *)(*((_DWORD *)dword_A8022C + v6) + 583) = 1; /*0x64b374*/
    v14 = a2; /*0x64b37f*/
    if ( a2 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b389*/
    {
      v9 = 4 * a2 + 11057984; /*0x64b394*/
      v10 = &dword_A8BB60[8 * a2]; /*0x64b39e*/
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



// ==== 0x0064B410  Network_Process_64B410  this=Network  sig=csp ====
int __fastcall Network_Process_64B410(int a1, int *a2)
{
  int *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+8h] [ebp-8h]

  v2 = a2; /*0x64b419*/
  if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x64b42a*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x64b491*/
    {
      ++dword_A8DAB4; /*0x64b498*/
      if ( !Network_Process_5F0120(v7) ) /*0x64b49e*/
      {
        --dword_A8DAB4; /*0x64b4ae*/
        return 0; /*0x64b4b9*/
      }
      --dword_A8DAB4; /*0x64b4bb*/
    }
    return 1; /*0x64b4bb*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 ) /*0x64b434*/
    return 1; /*0x64b4c1*/
  v4 = 0; /*0x64b43e*/
  v5 = 0x7FFFFFFF; /*0x64b442*/
  v8 = 0; /*0x64b447*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) > 0 ) /*0x64b450*/
  {
    do /*0x64b46c*/
    {
      if ( *v2 < v5 ) /*0x64b457*/
      {
        v5 = *v2; /*0x64b459*/
        v8 = v4; /*0x64b45b*/
      }
      ++v4; /*0x64b463*/
      v2 += 6; /*0x64b464*/
    }
    while ( v4 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ); /*0x64b46c*/
    v2 = a2; /*0x64b46e*/
  }
  KickNetworkPlayerNow(a1, v8, (int)v2, 1u); /*0x64b47b*/
  return 1; /*0x64b487*/
}



// ==== 0x0064B4D0  DictionaryCompressLookup  this=-  sig=csp ====
int __fastcall DictionaryCompressLookup(unsigned __int8 *a1, _DWORD *a2, _BYTE *a3, const void *a4, char a5)
{
  int result; // eax
  unsigned __int8 v6; // dl
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  int *v12; // esi
  int v13; // ecx
  char *v14; // ecx
  char v15; // [esp+10h] [ebp-14h]
  int v17; // [esp+18h] [ebp-Ch]
  unsigned __int8 v18; // [esp+1Ch] [ebp-8h]

  v6 = *a1; /*0x64b4d8*/
  v18 = *a1; /*0x64b4e4*/
  if ( *a1 > 1u ) /*0x64b4e8*/
  {
    v15 = 0; /*0x64b4ec*/
    v7 = v6; /*0x64b4f4*/
    v8 = (char *)&unk_AC5235; /*0x64b4fa*/
    v17 = v6; /*0x64b4ff*/
    result = (int)dword_AFA338; /*0x64b503*/
    do /*0x64b508*/
    {
      if ( v7 == *(_DWORD *)result ) /*0x64b50c*/
      {
        if ( !memcmp(v8 - 5, a3, 5u) && !memcmp(v8, a4, 5 * *(_DWORD *)result - 5) ) /*0x64b52e*/
        {
          if ( a5 ) /*0x64b59c*/
          {
            result = (int)a2; /*0x64b5ac*/
            *a2 += 5 - 5 * v17; /*0x64b5b0*/
          }
          LOBYTE(result) = 1; /*0x64b5b4*/
          if ( a5 ) /*0x64b5b6*/
          {
            *a1 = 0; /*0x64b5c6*/
            a3[6] = v15; /*0x64b5cf*/
          }
          return result; /*0x64b5d5*/
        }
        v7 = v17; /*0x64b530*/
        v6 = v18; /*0x64b534*/
      }
      result += 4; /*0x64b53c*/
      v8 += 640; /*0x64b540*/
      ++v15; /*0x64b54b*/
    }
    while ( result < (int)&dword_AFA358 ); /*0x64b508*/
  }
  if ( a5 && v6 > 1u ) /*0x64b560*/
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
      if ( (int)dword_A8ED84 - v13 > v10 ) /*0x64b582*/
      {
        v10 = (int)dword_A8ED84 - v13; /*0x64b584*/
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
    dword_AFA42C[v9] = (int)dword_A8ED84; /*0x64b600*/
    v14 = (char *)&unk_AC5230 + 640 * v9; /*0x64b60f*/
    *(_DWORD *)v14 = *(_DWORD *)a3; /*0x64b61d*/
    v14[4] = a3[4]; /*0x64b626*/
    result = 5 * *a1 - 5; /*0x64b635*/
    qmemcpy((char *)&unk_AC5235 + 640 * v9, a4, result); /*0x64b63a*/
    dword_AFA338[v9] = *a1; /*0x64b647*/
    a3[6] = v9; /*0x64b64e*/
  }
  LOBYTE(result) = 0; /*0x64b651*/
  return result; /*0x64b5c4*/
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
  if ( byte_A8ED74 ) /*0x64b6ad*/
    Debug::Log(); /*0x64b6ba*/
  if ( dword_A802C8 ) /*0x64b6c8*/
  {
    v7 = dword_A802CC; /*0x64b6ce*/
    while ( v28 < a5 ) /*0x64b6d4*/
    {
      v8 = byte_A802D4[111 * v7]; /*0x64b6ef*/
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
            if ( byte_A8ED74 ) /*0x64b7a5*/
            {
              FromNameIndex(v24); /*0x64b821*/
              Debug::Log(); /*0x64b82d*/
              v7 = dword_A802CC; /*0x64b832*/
            }
            v9 = 5; /*0x64b83f*/
            v10 = 5; /*0x64b846*/
            LOBYTE(v23) = v23 + 1; /*0x64b848*/
            v22 = 1; /*0x64b84c*/
          }
          else
          {
            if ( byte_A8ED74 ) /*0x64b85d*/
              Debug::Log(); /*0x64b864*/
            Debug::Log(); /*0x64b87c*/
            DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b89b*/
            ++v10; /*0x64b8a0*/
            v22 = 0; /*0x64b8a9*/
            *v25 = v23; /*0x64b8ae*/
            LOBYTE(v23) = 1; /*0x64b8b7*/
            v7 = dword_A802CC; /*0x64b8c0*/
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
          v7 = dword_A802CC; /*0x64b919*/
          LOBYTE(v23) = 0; /*0x64b91f*/
        }
      }
      else if ( v8 == 4 ) /*0x64b928*/
      {
        if ( byte_A8ED74 ) /*0x64b931*/
        {
          Debug::Log(); /*0x64b938*/
          v7 = dword_A802CC; /*0x64b93d*/
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
      if ( dword_A8B24C == 2 ) /*0x64b981*/
        v12 = dword_A8B554 * (((unsigned int)dword_A8ED84 + dword_A8B554 + a3 - 1) / dword_A8B554); /*0x64b9a0*/
      else
        v12 = (unsigned int)dword_A8ED84 + a3; /*0x64b9b1*/
      v13 = dword_A83D4C; /*0x64b9b9*/
      *(int *)((char *)&dword_A802D7 + 111 * v7) = v12; /*0x64b9bf*/
      byte_A802D6[111 * dword_A802CC] = *((_BYTE *)v13 + 48); /*0x64b9d4*/
      byte_A802D5[111 * dword_A802CC] &= ~1u; /*0x64b9f0*/
      if ( dword_8B41F8 >= 0x4000 ) /*0x64ba01*/
        break; /*0x64ba01*/
      v14 = dword_A83A54[dword_A802CC]; /*0x64ba12*/
      v15 = &byte_A802D4[111 * dword_A802CC]; /*0x64ba19*/
      v16 = &byte_8B4204[111 * dword_8B4200]; /*0x64ba2c*/
      qmemcpy(v16, v15, 0x6Cu); /*0x64ba38*/
      v15 += 108; /*0x64ba38*/
      v16 += 108; /*0x64ba38*/
      *(_WORD *)v16 = *(_WORD *)v15; /*0x64ba3a*/
      v16[2] = v15[2]; /*0x64ba3c*/
      dword_A70204[dword_8B4200] = v14; /*0x64ba43*/
      dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64ba5b*/
      ++dword_8B41F8; /*0x64ba6a*/
      switch ( (_BYTE)v29 ) /*0x64ba70*/
      {
        case 4: /*0x64ba70*/
          *v25 = v23; /*0x64bbc1*/
          if ( v22 ) /*0x64bbc3*/
          {
            qmemcpy((void *)(a1 + a4), (char *)&dword_A802DB + 111 * dword_A802CC, v9); /*0x64bbec*/
            a4 += v9; /*0x64bc06*/
            if ( dword_A802C8 == 1 || v28 == a5 - 1 ) /*0x64bc1d*/
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
          qmemcpy(v18, (char *)&dword_A802DB + 111 * dword_A802CC, v9); /*0x64bce2*/
          v26 = &v18[v9]; /*0x64bcf5*/
          v17 = a4 + v9 + 2; /*0x64bcf9*/
          break;
        case 0x1B: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 27; /*0x64bb6d*/
          qmemcpy((void *)(a1 + a4 + 1), (const void *)(111 * dword_A802CC + 11010785), v9); /*0x64bb93*/
          a4 += v9 + 1; /*0x64bba7*/
          goto LABEL_47; /*0x64bbae*/
        case 0x1F: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 31; /*0x64bad9*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DF + 111 * dword_A802CC, v9); /*0x64baff*/
          a4 += v9 + 1; /*0x64bb18*/
          qmemcpy( /*0x64bb3b*/
            (void *)(a1 + a4),
            *(const void **)((char *)&dword_A802DB + 111 * dword_A802CC),
            *(int *)((char *)&dword_A802DF + 111 * dword_A802CC));
          v17 = *(int *)((char *)&dword_A802DF + 111 * dword_A802CC) + a4; /*0x64bb5d*/
          break;
        default:
          *(_BYTE *)(a1 + a4) = v29; /*0x64ba89*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DB + 111 * dword_A802CC, v9); /*0x64bab0*/
          a4 += v9 + 1; /*0x64bac4*/
          goto LABEL_47; /*0x64bacb*/
      }
      a4 = v17; /*0x64bcfd*/
LABEL_47:
      ++v28; /*0x64bd04*/
      v19 = &byte_A802D4[111 * dword_A802CC]; /*0x64bd22*/
      v20 = dword_A802C8; /*0x64bd29*/
      qmemcpy(v31, v19, sizeof(v31)); /*0x64bd2e*/
      v19 += 108; /*0x64bd2e*/
      v32 = *(_WORD *)v19; /*0x64bd30*/
      v33 = v19[2]; /*0x64bd34*/
      if ( dword_A802C8 ) /*0x64bd35*/
      {
        v7 = ((_BYTE)dword_A802CC + 1) & 0x7F; /*0x64bd3a*/
        dword_A802CC = v7; /*0x64bd3e*/
        --dword_A802C8; /*0x64bd44*/
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
  v6 = dword_8B4200; /*0x64be1a*/
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
          v6 = dword_8B4200; /*0x64c250*/
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
      dword_AC50FC[v17] = 1; /*0x64bf97*/
      if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64bfac*/
        Debug::Log(); /*0x64bfba*/
      v36 = &a1[v3]; /*0x64bfe0*/
      v42 = (char *)&unk_AFA46D + 640 * v17; /*0x64bfe4*/
      while ( dword_8B41F8 < 0x4000 ) /*0x64bff2*/
      {
        v19 = &byte_8B4204[111 * dword_8B4200]; /*0x64c00c*/
        qmemcpy(v19, v45, 0x6Cu); /*0x64c013*/
        v19 += 108; /*0x64c013*/
        *(_WORD *)v19 = v45[27]; /*0x64c015*/
        v19[2] = BYTE2(v45[27]); /*0x64c017*/
        dword_A70204[dword_8B4200] = timeGetTime(); /*0x64c028*/
        dword_8B4200 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64c047*/
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
        dword_AC50FC[v17] = v43; /*0x64c091*/
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
      v6 = dword_8B4200; /*0x64c276*/
    }
    if ( dword_8B41F8 >= 0x4000 ) /*0x64c289*/
    {
      if ( LOBYTE(v45[0]) == 31 ) /*0x64c357*/
        __3_YAXPAX_Z(v14); /*0x64c35a*/
      return -1; /*0x64c35a*/
    }
    v30 = &byte_8B4204[111 * v6]; /*0x64c29e*/
    qmemcpy(v30, v45, 0x6Cu); /*0x64c2a5*/
    v30 += 108; /*0x64c2a5*/
    *(_WORD *)v30 = v45[27]; /*0x64c2a7*/
    v30[2] = BYTE2(v45[27]); /*0x64c2a9*/
    dword_A70204[dword_8B4200] = timeGetTime(); /*0x64c2bd*/
    v6 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64c2d6*/
    v3 += v38 + 1; /*0x64c2de*/
    v29 = -1 - v38 + v34 == 0; /*0x64c2e8*/
    dword_8B4200 = v6; /*0x64c2ea*/
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
  v33 = dword_AC50FC[v22]; /*0x64c11c*/
  v34 += -1 - v11; /*0x64c126*/
  v23 = (char *)&unk_AFA468 + 640 * v22; /*0x64c130*/
  v14 = *(char **)v23; /*0x64c136*/
  *(_DWORD *)((char *)&v45[1] + 3) = *(_DWORD *)v23; /*0x64c138*/
  HIBYTE(v45[2]) = v23[4]; /*0x64c13f*/
  if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c151*/
  {
    Debug::Log(); /*0x64c165*/
    v6 = dword_8B4200; /*0x64c16a*/
  }
  if ( !v33 ) /*0x64c179*/
    goto LABEL_40; /*0x64c179*/
  v24 = (void **)((char *)&unk_AFA46D + 640 * v22); /*0x64c185*/
  while ( dword_8B41F8 < 0x4000 ) /*0x64c19b*/
  {
    v25 = &byte_8B4204[111 * v6]; /*0x64c1b0*/
    qmemcpy(v25, v45, 0x6Cu); /*0x64c1b7*/
    v25 += 108; /*0x64c1b7*/
    *(_WORD *)v25 = v45[27]; /*0x64c1b9*/
    v25[2] = BYTE2(v45[27]); /*0x64c1bb*/
    v26 = v24; /*0x64c1cc*/
    dword_A70204[dword_8B4200] = timeGetTime(); /*0x64c1d1*/
    v41 = (void **)((char *)v24 + 5); /*0x64c1e8*/
    v6 = ((_WORD)dword_8B4200 + 1) & 0x3FFF; /*0x64c1ec*/
    ++dword_8B41F8; /*0x64c1f3*/
    v27 = v33 - 1; /*0x64c1fd*/
    dword_8B4200 = v6; /*0x64c200*/
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
  int nextArrayIndex; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int i; // esi
  int v10; // eax
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
  EventClass *v21; // ecx
  char *v22; // esi
  char *v23; // edi
  int *ptr_C; // eax
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
  int *v43; // eax
  wchar_t *v44; // [esp-10h] [ebp-60h]
  HouseClass *v45; // [esp+0h] [ebp-50h]
  int v46; // [esp+10h] [ebp-40h]
  int v47; // [esp+14h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-3Ch]
  int v49; // [esp+18h] [ebp-38h]
  int v50; // [esp+1Ch] [ebp-34h]
  int v51; // [esp+20h] [ebp-30h]
  int v52; // [esp+24h] [ebp-2Ch]
  int v53; // [esp+28h] [ebp-28h]
  char v54; // [esp+2Ch] [ebp-24h]
  int v55; // [esp+30h] [ebp-20h]
  char v56; // [esp+34h] [ebp-1Ch]
  char Destination[20]; // [esp+38h] [ebp-18h] BYREF
  char v58; // [esp+4Ch] [ebp-4h]

  nextArrayIndex = dword_A80238; /*0x64c384*/
  v4 = dword_8B41F8; /*0x64c38d*/
  v5 = 0; /*0x64c395*/
  v50 = dword_8B41F8; /*0x64c399*/
  v51 = dword_A80238; /*0x64c39d*/
  if ( dword_8B41F8 > 0 ) /*0x64c3a1*/
  {
    v6 = dword_A8B1DC; /*0x64c3a3*/
    do /*0x64c40b*/
    {
      if ( byte_8B4204[111 * (((_WORD)v5 + (_WORD)dword_8B41FC) & 0x3FFF)] != 28 ) /*0x64c3c3*/
      {
        v7 = *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)v5 + (_WORD)dword_8B41FC) & 0x3FFF)); /*0x64c3c5*/
        if ( v7 > dword_A8B1F8 && v7 < v6 ) /*0x64c3d8*/
        {
          Debug::Log(); /*0x64c3e1*/
          v6 = dword_A8B1DC; /*0x64c3fb*/
          *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)v5 + (_WORD)dword_8B41FC) & 0x3FFF)) = dword_A8B1DC; /*0x64c401*/
        }
      }
      ++v5; /*0x64c408*/
    }
    while ( v5 < v4 ); /*0x64c40b*/
  }
  if ( dword_A8E2D8 ) /*0x64c413*/
  {
    v8 = dword_A8E2DC; /*0x64c419*/
    if ( dword_A8E2DC ) /*0x64c421*/
    {
      if ( dword_A8E2E0 != -1 ) /*0x64c42e*/
      {
        for ( i = 0; i < v4; ++i ) /*0x64c438*/
        {
          if ( byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)i) & 0x3FFF)] == 19 /*0x64c466*/
            && byte_8B4206[111 * (((_WORD)dword_8B41FC + (_WORD)i) & 0x3FFF)] == dword_A8E2E0 )
          {
            v10 = *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)dword_8B41FC + (_WORD)i) & 0x3FFF)); /*0x64c468*/
            if ( v10 > dword_A8E2D8 && v10 < v8 ) /*0x64c47b*/
            {
              Debug::Log(); /*0x64c484*/
              v8 = dword_A8E2DC; /*0x64c49e*/
              *(int *)((char *)&dword_8B4207 + 111 * (((_WORD)i + (_WORD)dword_8B41FC) & 0x3FFF)) = dword_A8E2DC; /*0x64c4a4*/
            }
          }
        }
        if ( (int)dword_A8ED84 > v8 ) /*0x64c4b8*/
        {
          dword_A8E2D8 = 0; /*0x64c4ba*/
          dword_A8E2DC = 0; /*0x64c4c0*/
          dword_A8E2E0 = -1; /*0x64c4c6*/
        }
      }
    }
  }
  v46 = 0; /*0x64c4d2*/
  if ( nextArrayIndex <= 0 ) /*0x64c4d6*/
    return 1; /*0x64cc5e*/
  v11 = dword_A83ED4; /*0x64c4dc*/
  while ( 1 ) /*0x64c4ec*/
  {
    v12 = *(&dword_A8022C->ptr_0 + v46); /*0x64c4ec*/
    v47 = v12; /*0x64c4f1*/
    if ( v12 ) /*0x64c4f5*/
    {
      if ( *(_BYTE *)(v12 + 492) || *(_BYTE *)(v12 + 493) ) /*0x64c505*/
        break; /*0x64c505*/
    }
LABEL_119:
    if ( ++v46 >= v51 ) /*0x64cc4c*/
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
    if ( dword_A83ED0 > 0 ) /*0x64cafe*/
    {
      while ( 1 ) /*0x64cb0a*/
      {
        v36 = 0; /*0x64cb0a*/
        if ( v34 != -1 ) /*0x64cb0f*/
        {
          v36 = byte_A83EE8[111 * (unsigned __int8)(v11 + v33)] != (char)v34; /*0x64cb28*/
          if ( byte_A83EEE[111 * (unsigned __int8)(v11 + v33)] != v35 /*0x64cb5e*/
            || *(int *)((char *)&dword_A83EEA + 111 * (unsigned __int8)(v11 + v33)) != v55
            || byte_A83EF3[111 * (unsigned __int8)(v11 + v33)] != v54
            || *(int *)((char *)&dword_A83EEF + 111 * (unsigned __int8)(v11 + v33)) != v53 )
          {
            v36 = 1; /*0x64cb60*/
          }
        }
        v34 = byte_A83EE8[111 * (unsigned __int8)(v11 + v33)]; /*0x64cb72*/
        v37 = (char *)&dword_A83EEA + 111 * (unsigned __int8)(v11 + v33); /*0x64cb7a*/
        v38 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v11 + v33); /*0x64cb81*/
        v55 = *(_DWORD *)v37; /*0x64cb8a*/
        v56 = v37[4]; /*0x64cb91*/
        v53 = *(_DWORD *)v38; /*0x64cb97*/
        v54 = v38[4]; /*0x64cb9e*/
        if ( v36 ) /*0x64cba2*/
        {
          if ( v33 - v48 > 1 ) /*0x64cbaf*/
          {
            ProcessNetworkMapEvent(v48, v33 - v48); /*0x64cbb1*/
            v11 = dword_A83ED4; /*0x64cbb6*/
          }
          v48 = v33; /*0x64cbbc*/
        }
        else if ( v33 == dword_A83ED0 - 1 ) /*0x64cbcb*/
        {
          v39 = v33 - v48 + 1; /*0x64cbd5*/
          if ( v39 > 1 ) /*0x64cbd9*/
          {
            ProcessNetworkMapEvent(v48, v39); /*0x64cbdb*/
            v11 = dword_A83ED4; /*0x64cbe0*/
          }
        }
        if ( ++v33 >= dword_A83ED0 ) /*0x64cbee*/
          break; /*0x64cbee*/
        v35 = v56; /*0x64cb06*/
      }
    }
    if ( dword_A83ED0 ) /*0x64cbfb*/
    {
      while ( 1 ) /*0x64cc0a*/
      {
        EventClass::ProcessEvent((EventClass *)((char *)&unk_A83EDC + 111 * v11)); /*0x64cc0a*/
        if ( !dword_A83ED0 ) /*0x64cc16*/
          break; /*0x64cc16*/
        v11 = (unsigned __int8)(dword_A83ED4 + 1); /*0x64cc21*/
        dword_A83ED4 = v11; /*0x64cc28*/
        if ( !--dword_A83ED0 ) /*0x64cc33*/
          goto LABEL_119; /*0x64cc33*/
      }
      v11 = dword_A83ED4; /*0x64cc37*/
    }
    goto LABEL_119; /*0x64cc37*/
  }
  v14 = a1; /*0x64c525*/
  while ( 1 ) /*0x64c536*/
  {
    v15 = ((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c536*/
    v52 = byte_8B4206[111 * v15]; /*0x64c54c*/
    if ( v52 != *(_DWORD *)(v47 + 48) ) /*0x64c550*/
      goto LABEL_96; /*0x64c550*/
    v16 = *(int *)((char *)&dword_8B4207 + 111 * v15); /*0x64c556*/
    if ( (int)dword_A8ED84 < v16 || (byte_8B4205[111 * v15] & 1) != 0 ) /*0x64c573*/
      goto LABEL_96; /*0x64c573*/
    if ( (int)dword_A8ED84 <= v16 /*0x64c5a9*/
      || byte_8B4204[111 * v15] == 28
      || !*(_DWORD *)&dword_A8B238
      || *(_DWORD *)&dword_A8B238 == 5 )
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
    v11 = dword_A83ED4; /*0x64c632*/
LABEL_96:
    v49 = ++v13; /*0x64cade*/
    if ( v13 >= v50 ) /*0x64cae2*/
      goto LABEL_97; /*0x64cae2*/
  }
  v17 = byte_8B4204[111 * v15]; /*0x64c63d*/
  if ( v17 == 19 ) /*0x64c647*/
  {
    ptr_C = &dword_A8022C->ptr_0; /*0x64c7bf*/
    v25 = 0; /*0x64c7cc*/
    while ( 1 ) /*0x64c7d3*/
    {
      v26 = *ptr_C; /*0x64c7d3*/
      if ( *ptr_C ) /*0x64c7d3*/
      {
        if ( *(_DWORD *)(v26 + 48) == v52 ) /*0x64c7dc*/
          break; /*0x64c7dc*/
      }
      ++v25; /*0x64c7de*/
      ++ptr_C; /*0x64c7df*/
      if ( v25 >= v51 ) /*0x64c7e3*/
        goto LABEL_57; /*0x64c7e3*/
    }
    *(_BYTE *)(v26 + 584) = 1; /*0x64c7e7*/
LABEL_57:
    if ( Network::CountDisconnectedHouses((Network *)v26) == 1 ) /*0x64c7f8*/
    {
      if ( *(_DWORD *)&dword_A8B238 != 4 || byte_A8F900 ) /*0x64c809*/
      {
LABEL_66:
        if ( !Network::processQueue((Network *)v26) ) /*0x64c852*/
          Network::SendOffer((Network *)v26); /*0x64c85d*/
        goto LABEL_68; /*0x64c85d*/
      }
      byte_A8B8C1 = 1; /*0x64c80b*/
      Timer::UpdateDelta(); /*0x64c812*/
      ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x64c819*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 && !byte_A8F900 && dword_A83D4C && dword_A83D4C == (Object *)v26 ) /*0x64c83a*/
    {
      Debug::Log(); /*0x64c841*/
      ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x64c84b*/
    }
    goto LABEL_66; /*0x64c84b*/
  }
  if ( v17 == 12 || v17 == 34 ) /*0x64c659*/
  {
LABEL_68:
    if ( byte_A8ED74 && byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c885*/
      Debug::Log(); /*0x64c8b3*/
    v27 = ((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c8cd*/
    if ( byte_8B4206[111 * v27] != dword_A83D4C->Object_field_0x30 ) /*0x64c8e2*/
    {
      if ( byte_8B4204[111 * v27] == 19 ) /*0x64c923*/
      {
        Debug::Log(); /*0x64c935*/
        if ( *(_DWORD *)&dword_A8B238 == 1 || *(_DWORD *)&dword_A8B238 == 2 ) /*0x64c94a*/
        {
          HandlePlayerDisconnection(v46, 0); /*0x64c9be*/
        }
        else if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x64c954*/
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
              HandleNetworkPlayerDisconnect(v46, 0); /*0x64c9b1*/
            }
          }
        }
        if ( (dword_A8D5F8 & 2) != 0 && byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)] == 19 ) /*0x64c9ea*/
        {
          v31 = v47; /*0x64c9f0*/
          *(_BYTE *)(v47 + 492) = 0; /*0x64c9f4*/
          *(_DWORD *)(v47 + 588) = *(_DWORD *)&dword_8871E0->__pad_13BC[120]; /*0x64ca07*/
          HouseClass::CanDetect(v45); /*0x64ca0d*/
          if ( g_INI_Key_Computer ) /*0x64ca19*/
          {
            strncpy(Destination, g_INI_Key_Computer, 0x14u); /*0x64ca2d*/
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
          StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Queue_CPP, 5672); /*0x64ca6b*/
          wcsncpy((wchar_t *)(v31 + 90154), StringCSF, 0x15u); /*0x64ca78*/
          *(_WORD *)(v31 + 90194) = 0; /*0x64ca8c*/
          Debug::Log(); /*0x64ca95*/
          --dword_A8B54C; /*0x64caa3*/
        }
      }
      goto LABEL_95; /*0x64caa3*/
    }
    v28 = dword_A70204[v27]; /*0x64c8e4*/
    dword_8373A0 = timeGetTime() - v28; /*0x64c8f3*/
    v21 = (EventClass *)&byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)]; /*0x64c90a*/
LABEL_73:
    EventClass::ProcessEvent(v21); /*0x64c911*/
    goto LABEL_95; /*0x64c916*/
  }
  if ( v17 != 28 ) /*0x64c662*/
  {
    v20 = dword_A70204[v15]; /*0x64c6fd*/
    dword_8373A0 = timeGetTime() - v20; /*0x64c70c*/
    v21 = (EventClass *)&byte_8B4204[111 * (((_WORD)v13 + (_WORD)dword_8B41FC) & 0x3FFF)]; /*0x64c723*/
    if ( LOBYTE(v21->EventClass_field_0x0) == 4 ) /*0x64c733*/
    {
      if ( dword_A83ED0 < 256 ) /*0x64c743*/
      {
        v22 = &byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)]; /*0x64c762*/
        v23 = (char *)&unk_A83EDC + 111 * dword_A83ED8; /*0x64c774*/
        qmemcpy(v23, v22, 0x6Cu); /*0x64c77b*/
        v22 += 108; /*0x64c77b*/
        v23 += 108; /*0x64c77b*/
        *(_WORD *)v23 = *(_WORD *)v22; /*0x64c77d*/
        v23[2] = v22[2]; /*0x64c77f*/
        dword_A8ADDC[dword_A83ED8] = timeGetTime(); /*0x64c78c*/
        dword_A83ED8 = (unsigned __int8)(dword_A83ED8 + 1); /*0x64c7a6*/
        ++dword_A83ED0; /*0x64c7ac*/
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
    if ( (int)dword_A8ED84 - v18 < v19 ) /*0x64c683*/
    {
      v19 -= (int)dword_A8ED84 - v18; /*0x64c685*/
LABEL_43:
      if ( v19 ) /*0x64c689*/
        goto LABEL_95; /*0x64c689*/
    }
  }
  if ( *(wchar_t **)((char *)&dword_8B4207 + 111 * v15) != dword_A8ED84 /*0x64c6f2*/
    || dword_B04474[(unsigned __int8)(*(int *)((char *)&dword_8B4207
                                             + 111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF))
                                    - byte_8B4211[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)])] == *(int *)((char *)&dword_8B420B + 111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)) )
  {
LABEL_95:
    v14 = a1; /*0x64caa8*/
    byte_8B4205[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)] |= 1u; /*0x64caca*/
    v11 = dword_A83ED4; /*0x64cad1*/
    goto LABEL_96; /*0x64cad1*/
  }
  if ( byte_B04880 ) /*0x64cc68*/
  {
    v41 = 0; /*0x64cc6e*/
    v42 = 256; /*0x64cc70*/
    do /*0x64cc9f*/
    {
      LogMultiplayToSync_MPDEBUG( /*0x64cc98*/
        v41++,
        (unsigned __int8 *)&byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)v49) & 0x3FFF)]);
      --v42; /*0x64cc9e*/
    }
    while ( v42 ); /*0x64cc9f*/
  }
  else
  {
    Multiplay::LogToSYNC_NOMPDEBUG((Multiplay *)&byte_8B4204[111 * (((_WORD)dword_8B41FC + (_WORD)v13) & 0x3FFF)]); /*0x64ccba*/
  }
  ++dword_A8DAB4; /*0x64ccdd*/
  v44 = GetStringCSF(aTxtStop, 0, g_Str_File_Queue_CPP, 5723); /*0x64ccf7*/
  v43 = (int *)GetStringCSF(aTxtOutOfSync, 0, g_Str_File_Queue_CPP, 5722); /*0x64cd02*/
  Dialog::ShowMessageBox(v43, v44, 0, 0, 0, (int)v45); /*0x64cd0c*/
  --dword_A8DAB4; /*0x64cd1b*/
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
    while ( a4 != byte_A83EE7[111 * (unsigned __int8)(dword_A83ED4 + a1)] /*0x64cd67*/
         || a3 != *(int *)((char *)&dword_A83EE3 + 111 * (unsigned __int8)(dword_A83ED4 + a1)) )
    {
      if ( ++a1 > v5 ) /*0x64cd6c*/
        return; /*0x64cd6c*/
    }
    v6 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(dword_A83ED4 + a1); /*0x64cd7e*/
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
  if ( byte_A83EF3[111 * (unsigned __int8)(a1 + dword_A83ED4)] == 11 ) /*0x64cdd3*/
  {
    v4 = (_DWORD *)Network_Process_6E7C20((char *)&dword_A83EEF + 111 * (unsigned __int8)(a1 + dword_A83ED4)); /*0x64cde9*/
    if ( v4 ) /*0x64cdf0*/
    {
      if ( v4 != unk_ABDC50 ) /*0x64cdfb*/
      {
        v73 = (_DWORD *)v4[9]; /*0x64ce0b*/
        if ( v73 != (_DWORD *)dword_AC6640 ) /*0x64ce0f*/
        {
          ObjectVector::Construct(&v77, 0, 0); /*0x64ce2b*/
          v5 = v2 + a2; /*0x64ce30*/
          v77 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x64ce33*/
          v82 = 10; /*0x64ce3d*/
          v81 = 0; /*0x64ce45*/
          v6 = v2; /*0x64ce4d*/
          for ( i = v2 + a2; v6 < v5; ++v6 ) /*0x64ce53*/
          {
            v7 = BuildingLoadQueue::Find((_BYTE *)&dword_A83EE3 + 111 * (unsigned __int8)(v6 + dword_A83ED4)); /*0x64ce72*/
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
            v100 = &DynamicVectorClass<Cell>::`vftable'; /*0x64d07c*/
            v105 = 10; /*0x64d087*/
            v104 = 0; /*0x64d08e*/
            BoolVector::Construct(0, 0); /*0x64d095*/
            v99 = 10; /*0x64d09a*/
            v22 = 0; /*0x64d09e*/
            v23 = NumOfElements; /*0x64d0a0*/
            v94 = &DynamicVectorClass<bool>::`vftable'; /*0x64d0a4*/
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
                  v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73); /*0x64d235*/
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
                        v63 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v76); /*0x64d7da*/
                        ScriptAction::GetWaypointCoords(&v125, v63); /*0x64d7e7*/
                        WaypointCoords = ScriptAction::GetWaypointCoords(v134, *((_DWORD **)Block + v28)); /*0x64d7fb*/
                        v128 = *(_DWORD *)WaypointCoords; /*0x64d802*/
                        v65 = v2; /*0x64d809*/
                        if ( v2 <= i ) /*0x64d814*/
                        {
                          while ( WaypointCoords[4] != byte_A83EE7[111 * (unsigned __int8)(v65 + dword_A83ED4)] /*0x64d841*/
                               || v128 != *(int *)((char *)&dword_A83EE3 + 111 * (unsigned __int8)(v65 + dword_A83ED4)) )
                          {
                            if ( ++v65 > i ) /*0x64d84a*/
                              goto LABEL_94; /*0x64d84a*/
                          }
                          v66 = v126; /*0x64d863*/
                          v67 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v65 + dword_A83ED4); /*0x64d86a*/
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
              v35 = (*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73) + 80) >> 8) & 1; /*0x64d2c2*/
              v36 = *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73) + 283) + 4 * v35; /*0x64d2df*/
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
              TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&v73, *(_DWORD *)(v127 + 1460), 1); /*0x64d42c*/
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
                v42 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v75); /*0x64d4df*/
                if ( !LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v75, 1) ) /*0x64d4f0*/
                  goto LABEL_75; /*0x64d4f0*/
                v43 = MapClass::GetTileIndex( /*0x64d520*/
                        &dword_87F7E8,
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
                  v51 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v73) + 80) >> 8; /*0x64d61d*/
                  LOBYTE(v51) = v51 & 1; /*0x64d620*/
                  v71 = v51; /*0x64d623*/
                  v52 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v75) + 80) >> 8; /*0x64d639*/
                  LOBYTE(v52) = v52 & 1; /*0x64d63c*/
                  Pathfinding::CalcDistance((int)unk_87E8B8, (__int16 *)&v75, (__int16 *)&v73, (int)v29, v52, v71, -1); /*0x64d64b*/
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
                v53 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v76); /*0x64d6a9*/
                ScriptAction::GetWaypointCoords(&v123, v53); /*0x64d6b6*/
                v54 = ScriptAction::GetWaypointCoords(v133, v29); /*0x64d6c3*/
                v129 = *(_DWORD *)v54; /*0x64d6ca*/
                v55 = v84; /*0x64d6d1*/
                if ( v84 <= i ) /*0x64d6de*/
                {
                  while ( v54[4] != byte_A83EE7[111 * (unsigned __int8)(v55 + dword_A83ED4)] /*0x64d70b*/
                       || v129 != *(int *)((char *)&dword_A83EE3 + 111 * (unsigned __int8)(v55 + dword_A83ED4)) )
                  {
                    if ( ++v55 > i ) /*0x64d714*/
                      goto LABEL_83; /*0x64d714*/
                  }
                  v56 = v124; /*0x64d72d*/
                  v57 = (char *)&dword_A83EEF + 111 * (unsigned __int8)(v55 + dword_A83ED4); /*0x64d734*/
                  *(_DWORD *)v57 = v123; /*0x64d73b*/
                  v57[4] = v56; /*0x64d73d*/
                }
LABEL_83:
                v58 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v76); /*0x64d740*/
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
              v69 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v101 + 2 * k); /*0x64d8c1*/
              v70 = v69[80]; /*0x64d8c6*/
              BYTE1(v70) &= ~0x80u; /*0x64d8d1*/
              ++k; /*0x64d8d4*/
            }
            v94 = &VectorClass<bool>::`vftable'; /*0x64d8e6*/
            if ( v95 && BYTE1(v97) ) /*0x64d8f8*/
            {
              __3_YAXPAX_Z(v95); /*0x64d8fb*/
              v95 = 0; /*0x64d903*/
            }
            BYTE1(v97) = 0; /*0x64d90e*/
            v96 = 0; /*0x64d915*/
            v100 = &VectorClass<Cell>::`vftable'; /*0x64d919*/
            if ( v101 && BYTE1(v103) ) /*0x64d92f*/
            {
              __3_YAXPAX_Z(v101); /*0x64d932*/
              v101 = 0; /*0x64d93a*/
            }
            BYTE1(v103) = 0; /*0x64d945*/
            v102 = 0; /*0x64d94e*/
            __3_YAXPAX_Z(Base); /*0x64d955*/
          }
          v77 = &VectorClass<ObjectClass *>::`vftable'; /*0x64d963*/
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
void Network_Process_64D990(ObjectClass *this)
{
  int v1; // edx
  int grindingAnimHandle; // eax

  v1 = *(_DWORD *)&FootClass_Array.?; /*0x64d990*/
  if ( *(_DWORD *)&FootClass_Array.? ) /*0x64d999*/
  {
    grindingAnimHandle = FootClass_Array.?; /*0x64d9a1*/
    do /*0x64d9d5*/
    {
      if ( (*((_BYTE *)&FootClass_Array.?[1] + 111 * grindingAnimHandle + 1) & 1) == 0 /*0x64d9bd*/
        && *(int *)&stru_A8EB00.?[416] <= *(int *)((char *)&FootClass_Array.?[1] + 111 * grindingAnimHandle + 3) )
      {
        break; /*0x64d9bd*/
      }
      if ( !v1 ) /*0x64d9c1*/
        break; /*0x64d9c1*/
      grindingAnimHandle = ((_WORD)grindingAnimHandle + 1) & 0x3FFF; /*0x64d9c4*/
      --v1; /*0x64d9c9*/
      FootClass_Array.? = grindingAnimHandle; /*0x64d9ca*/
      *(_DWORD *)&FootClass_Array.? = v1; /*0x64d9cf*/
    }
    while ( v1 ); /*0x64d9d5*/
  }
}



// ==== 0x0064D9E0  ObjectClass::Network_Process_64D9E0  this=ObjectClass  sig=csp ====
int Network_Process_64D9E0(ObjectClass *this)
{
  int result; // eax
  int v2; // edi
  __int16 grindingAnimHandle; // cx
  int v4; // esi
  int i; // esi
  int Buffer; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)&stru_A8EB00.?[416] || (result = *(_DWORD *)&dword_A8B238) == 0 ) /*0x64d9f4*/
  {
    v2 = 0; /*0x64da00*/
    Buffer = 0; /*0x64da06*/
    if ( *(int *)&FootClass_Array.? > 0 ) /*0x64da0a*/
    {
      grindingAnimHandle = FootClass_Array.?; /*0x64da0c*/
      v4 = *(_DWORD *)&FootClass_Array.?; /*0x64da13*/
      do /*0x64da37*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] == *(int *)((char *)&FootClass_Array.?[1] /*0x64da32*/
                                                      + 111 * (grindingAnimHandle & 0x3FFF)
                                                      + 3)
          && (*((_BYTE *)&FootClass_Array.?[1] + 111 * (grindingAnimHandle & 0x3FFF) + 1) & 1) == 0 )
        {
          ++v2; /*0x64da34*/
        }
        ++grindingAnimHandle; /*0x64da35*/
        --v4; /*0x64da36*/
      }
      while ( v4 ); /*0x64da37*/
      Buffer = v2; /*0x64da39*/
    }
    FileClass::Write(&dword_A8D58C, &Buffer, 4u); /*0x64da4a*/
    result = *(_DWORD *)&FootClass_Array.?; /*0x64da4f*/
    for ( i = 0; i < *(int *)&FootClass_Array.?; ++i ) /*0x64da59*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] == *(int *)((char *)&FootClass_Array.?[1] /*0x64da85*/
                                                    + 111 * ((LOWORD(FootClass_Array.?) + (_WORD)i) & 0x3FFF)
                                                    + 3)
        && (*((_BYTE *)&FootClass_Array.?[1] + 111 * ((LOWORD(FootClass_Array.?) + (_WORD)i) & 0x3FFF) + 1) & 1) == 0 )
      {
        FileClass::Write( /*0x64da96*/
          &dword_A8D58C,
          (char *)&FootClass_Array.?[1] + 111 * ((LOWORD(FootClass_Array.?) + (_WORD)i) & 0x3FFF),
          0x6Fu);
        --Buffer; /*0x64da9b*/
      }
      result = *(_DWORD *)&FootClass_Array.?; /*0x64da9f*/
    }
  }
  return result; /*0x64daa9*/
}



// ==== 0x0064DAB0  ObjectClass::ComputeNetworkFrameCRC  this=ObjectClass  sig=csp ====
int ComputeNetworkFrameCRC(TechnoClass *this)
{
  unsigned int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int i; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  _DWORD *Value; // eax
  int j; // esi
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  HouseClass *v16; // edx
  int ptr_0; // ecx
  int *v18; // ebp
  int v19; // edi
  bool v20; // cc
  _DWORD *v21; // esi
  int v22; // edi
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  int k; // ebp
  _DWORD *v27; // esi
  int v28; // edi
  int v29; // ebx
  int v30; // edx
  int v32; // [esp+10h] [ebp-14h] BYREF
  _DWORD v33[2]; // [esp+14h] [ebp-10h] BYREF
  int v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]

  v1 = 0; /*0x64dab9*/
  v2 = 0; /*0x64dabe*/
  for ( *(_DWORD *)dword_AC51FC = 0; v2 < dword_A83DF8; *(_DWORD *)dword_AC51FC = v1 ) /*0x64dac8*/
  {
    v3 = *((_DWORD *)dword_A83DEC + v2); /*0x64dad3*/
    v4 = *(_DWORD *)(v3 + 156); /*0x64dadc*/
    v5 = *(_DWORD *)(v3 + 160); /*0x64dae2*/
    v35 = *(_DWORD *)(v3 + 164); /*0x64daf3*/
    v1 = v4 / 10 /*0x64db41*/
       + ((v5 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &v32) >> 7) + 1) >> 1)
       + (*(_DWORD *)dword_AC51FC >> 31)
       + 2 * *(_DWORD *)dword_AC51FC;
    ++v2; /*0x64db49*/
  }
  for ( i = 0; i < dword_8B4118; *(_DWORD *)dword_AC51FC = v1 ) /*0x64db61*/
  {
    v7 = *((_DWORD *)dword_8B410C + i); /*0x64db6d*/
    v8 = *(_DWORD *)(v7 + 156); /*0x64db76*/
    v34 = *(_DWORD *)(v7 + 160); /*0x64db7f*/
    v35 = *(_DWORD *)(v7 + 164); /*0x64db8a*/
    v9 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v7 + 904), &v32) >> 7) + 1) >> 1); /*0x64dbad*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(v7 + 928), v33); /*0x64dbb3*/
    v1 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1) /*0x64dc09*/
       + v9
       + ((v34 / 10) << 16)
       + v8 / 10
       + (*(_DWORD *)dword_AC51FC >> 31)
       + 2 * *(_DWORD *)dword_AC51FC;
    ++i; /*0x64dc0b*/
  }
  for ( j = 0; j < dword_A8EB50; *(_DWORD *)dword_AC51FC = v1 ) /*0x64dc23*/
  {
    v12 = *((_DWORD *)dword_A8EB44 + j); /*0x64dc2f*/
    v13 = *(_DWORD *)(v12 + 156); /*0x64dc38*/
    v14 = *(_DWORD *)(v12 + 160); /*0x64dc3e*/
    v35 = *(_DWORD *)(v12 + 164); /*0x64dc48*/
    v1 = v13 / 10 /*0x64dc9d*/
       + ((v14 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v12 + 904), v33) >> 7) + 1) >> 1)
       + (*(_DWORD *)dword_AC51FC >> 31)
       + 2 * *(_DWORD *)dword_AC51FC;
    ++j; /*0x64dca5*/
  }
  v15 = dword_A80238; /*0x64dcb3*/
  if ( dword_A80238 > 0 ) /*0x64dcbb*/
  {
    v16 = dword_A8022C; /*0x64dcbd*/
    do /*0x64dce2*/
    {
      ptr_0 = v16->ptr_0; /*0x64dcc3*/
      v16 = (HouseClass *)((char *)v16 + 4); /*0x64dcc7*/
      v1 = *(unsigned __int8 *)(ptr_0 + 577) + (v1 >> 31) + 2 * v1; /*0x64dcda*/
      --v15; /*0x64dcdc*/
      *(_DWORD *)dword_AC51FC = v1; /*0x64dcdd*/
    }
    while ( v15 ); /*0x64dce2*/
  }
  v18 = dword_8A0370; /*0x64dce4*/
  do /*0x64dd92*/
  {
    v19 = 0; /*0x64dcec*/
    v20 = *v18 <= 0; /*0x64dcee*/
    v32 = 0; /*0x64dcf0*/
    if ( !v20 ) /*0x64dcf4*/
    {
      do /*0x64dd83*/
      {
        v21 = *(_DWORD **)(*(v18 - 3) + 4 * v19); /*0x64dcfd*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v21 + 44))(v21) != 4 /*0x64dd19*/
          || (*(int (__stdcall **)(_DWORD *))(v21[1] + 16))(v21 + 1) != -2 )
        {
          v22 = v21[39]; /*0x64dd23*/
          v23 = v21[40]; /*0x64dd25*/
          v24 = *v21; /*0x64dd2b*/
          v35 = v21[41]; /*0x64dd2d*/
          v25 = v22 / 10 + ((v23 / 10) << 16) + (*(int (__thiscall **)(_DWORD *))(v24 + 44))(v21); /*0x64dd5d*/
          v19 = v32; /*0x64dd67*/
          *(_DWORD *)dword_AC51FC = v25 + (*(_DWORD *)dword_AC51FC >> 31) + 2 * *(_DWORD *)dword_AC51FC; /*0x64dd73*/
        }
        v20 = ++v19 < *v18; /*0x64dd7d*/
        v32 = v19; /*0x64dd7f*/
      }
      while ( v20 ); /*0x64dd83*/
    }
    v18 += 6; /*0x64dd89*/
  }
  while ( (int)v18 < (int)&dword_8A03E8 ); /*0x64dd92*/
  for ( k = 0; k < dword_87F788; ++k ) /*0x64dda1*/
  {
    v27 = (_DWORD *)*((_DWORD *)dword_87F77C + k); /*0x64ddad*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v27 + 44))(v27) != 4 /*0x64ddc9*/
      || (*(int (__stdcall **)(_DWORD *))(v27[1] + 16))(v27 + 1) != -2 )
    {
      v28 = v27[39]; /*0x64ddd3*/
      v29 = v27[40]; /*0x64ddd5*/
      v30 = *v27; /*0x64dddb*/
      v35 = v27[41]; /*0x64dddd*/
      *(_DWORD *)dword_AC51FC = v28 / 10 /*0x64de1f*/
                              + ((v29 / 10) << 16)
                              + (*(int (__thiscall **)(_DWORD *))(v30 + 44))(v27)
                              + (*(_DWORD *)dword_AC51FC >> 31)
                              + 2 * *(_DWORD *)dword_AC51FC;
    }
  }
  *(_DWORD *)dword_AC51FC = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) /*0x64de54*/
                          + (*(_DWORD *)dword_AC51FC >> 31)
                          + 2 * *(_DWORD *)dword_AC51FC;
  return AllocateTriggerLog((int)dword_A8ED84 % 256); /*0x64de75*/
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
void __thiscall Multiplay::LogToSYNC_NOMPDEBUG(Multiplay *this)
{
  FILE *v1; // eax
  FILE *v2; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  char *v5; // eax
  char *v6; // eax
  char *Name; // eax
  int v8; // eax
  int i; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // ebp
  int *v13; // edi
  int nextArrayIndex; // eax
  int j; // ebp
  int v16; // edi
  int v17; // ebx
  char *v18; // eax
  int v19; // ecx
  int v20; // ebp
  int v21; // eax
  _DWORD *v22; // edi
  int v23; // ebp
  int v24; // ecx
  int *v25; // ebp
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  void *v30; // eax
  int *v31; // ebp
  int v32; // edx
  int v33; // eax
  char *v34; // edx
  int v35; // eax
  void *v36; // eax
  unsigned int v37; // ebp
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // eax
  int v43; // ecx
  int v44; // ebp
  int v45; // eax
  _DWORD *v46; // edi
  int v47; // ebp
  ... [79251 chars total]


