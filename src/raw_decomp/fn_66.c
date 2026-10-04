// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00660000  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int Render_Render_660000(ObjectClass *this)
{
  int result; // eax
  int i; // edi
  int v3; // ecx
  int v4; // esi
  int v5; // eax

  result = stru_B04DA8.LoadGame_field_0x10; /*0x660000*/
  for ( i = 0; i < stru_B04DA8.LoadGame_field_0x10; ++i ) /*0x660006*/
  {
    v3 = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x660012*/
    v4 = *(_DWORD *)(v3 + 48); /*0x660015*/
    v5 = *(_DWORD *)(v3 + 56); /*0x660018*/
    if ( v4 != -1 ) /*0x66001e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x66002a*/
        goto LABEL_6; /*0x66002a*/
      v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x66002c*/
    }
    if ( v5 > 0 ) /*0x660030*/
      goto LABEL_7; /*0x660030*/
LABEL_6:
    if ( *(_BYTE *)(v3 + 60) ) /*0x660032*/
LABEL_7:
      RenderGradientTrapezoid((float *)v3); /*0x660039*/
    result = stru_B04DA8.LoadGame_field_0x10; /*0x66003e*/
  }
  return result; /*0x660049*/
}



// ==== 0x00660050  ObjectClass::RenderGradientTrapezoid  this=ObjectClass  sig=csp ====
char __thiscall RenderGradientTrapezoid(float *this)
{
  __int16 v2; // ax
  char v3; // cl
  _BYTE *v4; // eax
  _BYTE *v5; // ecx
  _BYTE *v6; // edx
  int v7; // eax
  __int16 v8; // ax
  char v9; // cl
  _BYTE *v10; // eax
  _BYTE *v11; // ecx
  _BYTE *v12; // edx
  int *v13; // eax
  int v14; // edx
  int v15; // esi
  int *v16; // eax
  int v17; // ecx
  int v18; // ebx
  signed int v19; // ecx
  int v20; // eax
  int *v21; // ebx
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  int *v26; // edi
  int v27; // esi
  _DWORD *v28; // esi
  int v29; // edi
  _DWORD *v30; // eax
  int *v31; // eax
  int *v33; // [esp+4h] [ebp-A4h]
  const RECT *v34; // [esp+8h] [ebp-A0h]
  const RECT *v35; // [esp+Ch] [ebp-9Ch]
  int v36; // [esp+18h] [ebp-90h] BYREF
  __int16 v37; // [esp+1Ch] [ebp-8Ch] BYREF
  char v38; // [esp+1Eh] [ebp-8Ah]
  __int16 v39; // [esp+20h] [ebp-88h] BYREF
  char v40; // [esp+22h] [ebp-86h]
  _DWORD v41[2]; // [esp+24h] [ebp-84h] BYREF
  char v42[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  float v43; // [esp+30h] [ebp-78h] BYREF
  int v44; // [esp+34h] [ebp-74h] BYREF
  struct tagRECT rcDst; // [esp+38h] [ebp-70h] BYREF
  _DWORD v46[2]; // [esp+48h] [ebp-60h] BYREF
  int v47; // [esp+50h] [ebp-58h] BYREF
  _DWORD v48[7]; // [esp+54h] [ebp-54h] BYREF
  int v49; // [esp+70h] [ebp-38h] BYREF
  int v50[4]; // [esp+78h] [ebp-30h] BYREF
  int v51[4]; // [esp+88h] [ebp-20h] BYREF

  switch ( *(_DWORD *)this ) /*0x660070*/
  {
    case 0: /*0x660070*/
    case 3: /*0x660070*/
    case 4: /*0x660070*/
      LOWORD(v36) = 255; /*0x660077*/
      v2 = 255; /*0x660081*/
      v3 = -1; /*0x660086*/
      break; /*0x660089*/
    case 1: /*0x660070*/
    case 2: /*0x660070*/
    case 0xB: /*0x660070*/
    case 0xC: /*0x660070*/
      v4 = Palette::SixBitTo16Bit(&v36, 255, 255, 0); /*0x66009b*/
      goto LABEL_6; /*0x66009b*/
    case 5: /*0x660070*/
      v5 = Palette::SixBitTo16Bit(v42, 0, 255, 255); /*0x6600b2*/
      v2 = *(_WORD *)v5; /*0x6600b4*/
      v3 = v5[2]; /*0x6600b7*/
      break; /*0x6600ba*/
    default:
      v4 = Palette::SixBitTo16Bit(v41, 0, 0, 0); /*0x6600c6*/
LABEL_6:
      v6 = v4; /*0x6600cb*/
      v2 = *(_WORD *)v4; /*0x6600cd*/
      v3 = v6[2]; /*0x6600d0*/
      break; /*0x6600d0*/
  }
  v37 = v2; /*0x6600d3*/
  v7 = *(_DWORD *)this; /*0x6600d8*/
  v38 = v3; /*0x6600dd*/
  switch ( v7 ) /*0x6600eb*/
  {
    case 0: /*0x6600eb*/
    case 3: /*0x6600eb*/
    case 4: /*0x6600eb*/
      LOWORD(v36) = 128; /*0x6600f2*/
      v8 = 128; /*0x6600fc*/
      v9 = 0x80; /*0x660101*/
      break; /*0x660103*/
    case 1: /*0x6600eb*/
    case 2: /*0x6600eb*/
    case 11: /*0x6600eb*/
    case 12: /*0x6600eb*/
      v10 = Palette::SixBitTo16Bit(v41, 128, 128, 0); /*0x660115*/
      goto LABEL_12; /*0x660115*/
    case 5: /*0x6600eb*/
      v11 = Palette::SixBitTo16Bit(v42, 0, 128, 128); /*0x66012c*/
      v8 = *(_WORD *)v11; /*0x66012e*/
      v9 = v11[2]; /*0x660131*/
      break; /*0x660134*/
    default:
      v10 = Palette::SixBitTo16Bit(&v36, 0, 0, 0); /*0x660140*/
LABEL_12:
      v12 = v10; /*0x660145*/
      v8 = *(_WORD *)v10; /*0x660147*/
      v9 = v12[2]; /*0x66014a*/
      break; /*0x66014a*/
  }
  v39 = v8; /*0x66014d*/
  v40 = v9; /*0x660158*/
  if ( v37 || (LOBYTE(v13) = v38) != 0 ) /*0x66016c*/
  {
    Render_Render_660730(this, &v47); /*0x660179*/
    v14 = this->vtable2; /*0x66017e*/
    v15 = this->vtable3; /*0x660181*/
    v16 = &v47; /*0x660184*/
    v17 = 4; /*0x660188*/
    do /*0x6601a0*/
    {
      v18 = *v16; /*0x66018d*/
      v16 += 2; /*0x66018f*/
      *(v16 - 2) = v14 + v18; /*0x660194*/
      --v17; /*0x66019c*/
      *(v16 - 1) += v15; /*0x66019d*/
    }
    while ( v17 ); /*0x6601a0*/
    v44 = this->nextArrayIndex; /*0x6601a9*/
    v19 = abs32(v48[0] - v48[2]); /*0x6601bc*/
    v41[0] = abs32(v47 - v48[1]); /*0x6601cb*/
    if ( v41[0] <= v19 ) /*0x6601cf*/
      v41[0] = v19; /*0x6601d1*/
    v20 = 0; /*0x6601da*/
    v21 = &v47; /*0x6601dc*/
    v43 = (this->vtable4 + this->vtable4) * 0.7071067811865475 / (double)v41[0] * this->referenceCount; /*0x6601ed*/
    do /*0x660242*/
    {
      v22 = v20 + 1; /*0x6601fb*/
      v23 = *(_DWORD *)dword_880A04; /*0x6601ff*/
      v24 = (*(int (__stdcall **)(struct tagRECT *, int *, _DWORD *, __int16 *, __int16 *, float *, int *))(*(_DWORD *)dword_880A04 + 120))( /*0x66022a*/
              &rcDst,
              v21,
              &v48[2 * ((v20 + 1) % 4) - 1],
              &v37,
              &v39,
              &v43,
              &v44);
      (*(void (__thiscall **)(int, int))(v23 + 144))(dword_880A04, v24); /*0x660234*/
      v20 = v22; /*0x66023a*/
      v21 += 2; /*0x66023c*/
    }
    while ( v22 < 4 ); /*0x660242*/
    v25 = 0; /*0x660244*/
    v26 = &v47; /*0x660246*/
    do /*0x66027f*/
    {
      v27 = v25 + 1; /*0x660250*/
      v33 = (int *)(*(int (__thiscall **)(int, struct tagRECT *))(*(_DWORD *)dword_880A04 + 120))(dword_880A04, &rcDst); /*0x66025d*/
      ClipLine(v26, &v48[2 * (v27 % 4) - 1], v33); /*0x660272*/
      v25 = v27; /*0x660277*/
      v26 += 2; /*0x660279*/
    }
    while ( v27 < 4 ); /*0x66027f*/
    LOBYTE(v13) = dword_880C98; /*0x660281*/
    if ( dword_880C98 == 1 && dword_880C94 == 1 ) /*0x660299*/
    {
      v28 = v48; /*0x66029f*/
      v29 = 4; /*0x6602a3*/
      do /*0x660356*/
      {
        v41[1] = dword_880C88; /*0x6602b3*/
        v46[1] = *v28; /*0x6602b9*/
        v41[0] = dword_880C84; /*0x6602c2*/
        v46[0] = *(v28 - 1); /*0x6602d4*/
        v30 = Coord2D::Add(v46, &v49, v41); /*0x6602d8*/
        rcDst = *(struct tagRECT *)Rect::Construct(v50, v30, 1, 1); /*0x6602e9*/
        v31 = (int *)Rect::Union(&rcDst, v34, v35); /*0x660313*/
        v13 = ClipRectIntersection(v51, v31, &dword_880C84, 0, 0); /*0x66032a*/
        v28 += 2; /*0x660331*/
        dword_8809F4 = *v13; /*0x660334*/
        --v29; /*0x66033a*/
        dword_8809F8 = v13[1]; /*0x66033e*/
        dword_8809FC = v13[2]; /*0x660347*/
        dword_880A00 = v13[3]; /*0x660350*/
      }
      while ( v29 ); /*0x660356*/
    }
  }
  return (char)v13; /*0x66035c*/
}



// ==== 0x006603B0  ObjectClass::Render_Render_6603B0  this=ObjectClass  sig=csp ====
void Render_Render_6603B0(ObjectClass *this)
{
  int v1; // ebx
  int LoadGame_field_0x04; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  void *v6; // esi
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v1 = stru_B04DA8.LoadGame_field_0x10 - 1; /*0x6603b7*/
  if ( stru_B04DA8.LoadGame_field_0x10 - 1 >= 0 ) /*0x6603bc*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x6603c4*/
    do /*0x6603ca*/
    {
      v3 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v1); /*0x6603ca*/
      v4 = *(_DWORD *)(v3 + 36); /*0x6603cd*/
      v5 = *(_DWORD *)(v3 + 44); /*0x6603d0*/
      if ( v4 != -1 ) /*0x6603d6*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x6603e2*/
          goto LABEL_7; /*0x6603e2*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x6603e4*/
      }
      if ( !v5 ) /*0x6603e8*/
      {
LABEL_7:
        if ( !*(_BYTE *)(v3 + 60) ) /*0x6603ea*/
        {
          v6 = *(void **)(LoadGame_field_0x04 + 4 * v1); /*0x6603f1*/
          if ( v6 ) /*0x6603f6*/
          {
            v8 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v1); /*0x660408*/
            v7 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v8); /*0x66040c*/
            if ( v7 != -1 && v7 < stru_B04DA8.LoadGame_field_0x10 ) /*0x66041c*/
            {
              --stru_B04DA8.LoadGame_field_0x10; /*0x660421*/
              for ( ; /*0x660427*/
                    v7 < stru_B04DA8.LoadGame_field_0x10;
                    *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v7 - 4) = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04
                                                                                          + 4 * v7) )
              {
                ++v7; /*0x66042f*/
              }
            }
            __3_YAXPAX_Z(v6); /*0x660442*/
            LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660447*/
          }
        }
      }
      --v1; /*0x660450*/
    }
    while ( v1 >= 0 ); /*0x6603ca*/
  }
}



// ==== 0x00660530  Render_Render_660530  this=-  sig=ida-proto ====
bool sub_660530()
{
  return dword_B04DB8 == 0; /*0x66053a*/
}



// ==== 0x00660540  ObjectClass::Map_Helper  this=ObjectClass  sig=csp ====
int __thiscall Map_Helper_660540(ObjectClass *this)
{
  void *vtable1; // edx
  char *vtable2; // esi
  int *v4; // eax
  int v5; // ecx
  char *v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int *v13; // edi
  int v14; // esi
  int result; // eax
  int v16; // ebp
  int v17; // esi
  int *v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // eax
  bool v27; // zf
  int *v28; // [esp+4h] [ebp-7Ch]
  int *v29; // [esp+18h] [ebp-68h]
  int v30; // [esp+1Ch] [ebp-64h]
  int v31; // [esp+20h] [ebp-60h] BYREF
  int v32; // [esp+24h] [ebp-5Ch]
  int v33; // [esp+28h] [ebp-58h]
  int v34; // [esp+2Ch] [ebp-54h]
  int v35; // [esp+38h] [ebp-48h]
  _BYTE v36[12]; // [esp+40h] [ebp-40h] BYREF
  int v37; // [esp+4Ch] [ebp-34h]
  int v38[4]; // [esp+50h] [ebp-30h] BYREF
  int v39; // [esp+60h] [ebp-20h] BYREF
  int v40[7]; // [esp+64h] [ebp-1Ch] BYREF

  Render_Render_660730((float *)this, &v39); /*0x66054e*/
  vtable1 = this->?; /*0x660553*/
  vtable2 = (char *)this->?; /*0x660556*/
  v4 = &v39; /*0x660559*/
  v5 = 4; /*0x66055d*/
  do /*0x660574*/
  {
    v6 = &vtable2[v4[1]]; /*0x660569*/
    *v4 += (int)vtable1; /*0x66056b*/
    v4[1] = (int)v6; /*0x66056d*/
    v4 += 2; /*0x660570*/
    --v5; /*0x660573*/
  }
  while ( v5 ); /*0x660574*/
  v7 = 0; /*0x660576*/
  v8 = &v39; /*0x660578*/
  do /*0x6605bb*/
  {
    v9 = v7 + 1; /*0x660582*/
    v10 = **(_DWORD **)&stru_87F5F0.__pad_E12[1538]; /*0x66058c*/
    v11 = (*(int (__stdcall **)(_BYTE *, int *, int *, void (__thiscall *)(ObjectClass *)))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] /*0x6605a6*/
                                                                                          + 120))(
            v36,
            v8,
            &v40[2 * ((v7 + 1) % 4) - 1],
            sub_65FB60);
    (*(void (__thiscall **)(_DWORD, int))(v10 + 68))(*(_DWORD *)&stru_87F5F0.__pad_E12[1538], v11); /*0x6605b0*/
    v7 = v9; /*0x6605b3*/
    v8 += 2; /*0x6605b5*/
  }
  while ( v9 < 4 ); /*0x6605bb*/
  v12 = 0; /*0x6605bd*/
  v13 = &v39; /*0x6605bf*/
  do /*0x6605f8*/
  {
    v14 = v12 + 1; /*0x6605c9*/
    v28 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x6605d6*/
                   *(_DWORD *)&stru_87F5F0.__pad_E12[1538],
                   v36);
    ClipLine(v13, &v40[2 * (v14 % 4) - 1], v28); /*0x6605eb*/
    v12 = v14; /*0x6605f0*/
    v13 += 2; /*0x6605f2*/
  }
  while ( v14 < 4 ); /*0x6605f8*/
  result = 1; /*0x660600*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[2198] == 1 && *(_DWORD *)&stru_87F5F0.__pad_E12[2194] == 1 ) /*0x660613*/
  {
    v16 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x660619*/
    v17 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x66061f*/
    v18 = v40; /*0x660625*/
    v37 = 1; /*0x660629*/
    v29 = v40; /*0x66062d*/
    v30 = 4; /*0x660631*/
    do /*0x66071c*/
    {
      v19 = *(v18 - 1); /*0x660644*/
      v20 = v19 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x660649*/
      v21 = *v18 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x66064b*/
      if ( v17 <= 0 || v16 <= 0 ) /*0x660653*/
      {
        v31 = v19 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x6606ba*/
        v32 = v21; /*0x6606be*/
        v33 = 1; /*0x6606cb*/
        v34 = v37; /*0x6606cf*/
      }
      else
      {
        v22 = *(_DWORD *)&stru_87F5F0.__pad_E12[1522]; /*0x660655*/
        v23 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x66065b*/
        v35 = v17; /*0x660663*/
        v24 = v16; /*0x660667*/
        if ( *(int *)&stru_87F5F0.__pad_E12[1522] > v20 ) /*0x660669*/
        {
          v17 += *(_DWORD *)&stru_87F5F0.__pad_E12[1522] - v20; /*0x66066d*/
          v22 = v20; /*0x66066f*/
          v35 = v17; /*0x660671*/
        }
        if ( *(int *)&stru_87F5F0.__pad_E12[1526] > v21 ) /*0x660677*/
        {
          v24 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526] - v21 + v16; /*0x66067b*/
          v23 = v21; /*0x66067d*/
        }
        if ( v22 + v17 >= v20 + 1 ) /*0x660686*/
          v25 = v35; /*0x66068f*/
        else
          v25 = v20 - v22 + 2; /*0x66068a*/
        if ( v24 + v23 < v21 + 1 ) /*0x66069b*/
          v24 = v21 - v23 + 2; /*0x6606a2*/
        v32 = v23; /*0x6606a4*/
        v18 = v29; /*0x6606a8*/
        v31 = v22; /*0x6606ac*/
        v33 = v25; /*0x6606b0*/
        v34 = v24; /*0x6606b4*/
      }
      v26 = ClipRectIntersection(v38, &v31, (int *)&stru_87F5F0.__pad_E12[2178], 0, 0); /*0x6606e4*/
      v18 += 2; /*0x6606eb*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1522] = *v26; /*0x6606ee*/
      v29 = v18; /*0x6606f4*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1526] = v26[1]; /*0x6606fb*/
      v17 = v26[2]; /*0x660701*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1530] = v17; /*0x660704*/
      v16 = v26[3]; /*0x66070a*/
      result = v30 - 1; /*0x660711*/
      v27 = v30 == 1; /*0x660711*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1534] = v16; /*0x660712*/
      --v30; /*0x660718*/
    }
    while ( !v27 ); /*0x66071c*/
  }
  return result; /*0x660722*/
}



// ==== 0x00660730  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int __thiscall sub_660730(float *this, _DWORD *a2)
{
  float *v3; // eax
  int v4; // esi
  int result; // eax
  int v6; // esi
  float v7; // [esp+4h] [ebp-48h] BYREF
  float v8; // [esp+8h] [ebp-44h]
  int v9; // [esp+Ch] [ebp-40h]
  float v10[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v11[12]; // [esp+1Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v11); /*0x66073a*/
  Matrix2D::Rotate(v11, this->vtable2); /*0x660747*/
  v7 = this->vtable4; /*0x66075c*/
  v8 = 0.0; /*0x660760*/
  v9 = 0; /*0x660768*/
  v3 = TransformMatrix3x4Point(v10, v11, &v7); /*0x660770*/
  v7 = *v3; /*0x660777*/
  v8 = v3[1]; /*0x660782*/
  v9 = *((_DWORD *)v3 + 2); /*0x660789*/
  v4 = Math::RoundToInt(v7); /*0x660796*/
  result = Math::RoundToInt(v8); /*0x660798*/
  a2[2] = -result; /*0x6607a5*/
  *a2 = v4; /*0x6607a8*/
  a2[3] = v4; /*0x6607aa*/
  a2[6] = result; /*0x6607ad*/
  v6 = -v4; /*0x6607b0*/
  a2[4] = v6; /*0x6607b2*/
  a2[7] = v6; /*0x6607b5*/
  a2[1] = result; /*0x6607b8*/
  a2[5] = -result; /*0x6607bb*/
  return result; /*0x6607be*/
}



// ==== 0x006607D0  SaveGame::SaveTriggerEvents  this=SaveGame  sig=csp ====
bool __thiscall SaveGame::SaveTriggerEvents(SaveGame *this)
{
  int v2; // ecx
  int v4; // edi
  int LoadGame_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->__pad_0; /*0x6607e0*/
  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x6607e6*/
  if ( (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v2 + 16))(this, &LoadGame_field_0x10, 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( LoadGame_field_0x10 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (__stdcall **)(SaveGame *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x660817*/
              this,
              *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= LoadGame_field_0x10 ) /*0x660820*/
        return (*(int (__stdcall **)(SaveGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x660820*/
                 this,
                 &word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660817*/
  }
  return (*(int (__stdcall **)(SaveGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x6607f1*/
           this,
           &word_B04D78,
           4,
           0) >= 0;
}



// ==== 0x00660840  LoadGame::LoadTriggerEvents  this=LoadGame  sig=csp ====
bool __thiscall LoadGame::LoadTriggerEvents(LoadGame *this)
{
  int LoadGame_field_0x10; // edx
  int v2; // edi
  int LoadGame_field_0x04; // ecx
  void *v5; // esi
  int v6; // eax
  int v7; // eax
  int v9; // esi
  ObjectClass *v10; // eax
  _DWORD *_65FB80; // eax
  int v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF

  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x660840*/
  v2 = stru_B04DA8.LoadGame_field_0x10 - 1; /*0x66084d*/
  if ( stru_B04DA8.LoadGame_field_0x10 - 1 >= 0 ) /*0x660856*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660858*/
    do /*0x6608cb*/
    {
      v5 = *(void **)(LoadGame_field_0x04 + 4 * v2); /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v2); /*0x660875*/
        v6 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          LoadGame::RemoveItem(&stru_B04DA8, v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660892*/
        LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x660898*/
      }
      if ( v2 < LoadGame_field_0x10 ) /*0x6608a3*/
      {
        --LoadGame_field_0x10; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
        for ( stru_B04DA8.LoadGame_field_0x10 = LoadGame_field_0x10; v7 < stru_B04DA8.LoadGame_field_0x10; ++v7 ) /*0x6608b0*/
        {
          *(_DWORD *)(LoadGame_field_0x04 + 4 * v7) = *(_DWORD *)(LoadGame_field_0x04 + 4 * v7 + 4); /*0x6608b6*/
          LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x6608b9*/
          LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x6608bf*/
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  if ( (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = (ObjectClass *)__2_YAPAXI_Z(0x40u); /*0x6608f5*/
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        _65FB80 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        _65FB80 = 0; /*0x66091b*/
      }
      if ( (*(int (__stdcall **)(LoadGame *, _DWORD *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x660929*/
             this,
             _65FB80,
             64,
             0) < 0 )
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (__stdcall **)(LoadGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x660932*/
                 this,
                 &word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660929*/
  }
  return (*(int (__stdcall **)(LoadGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x6608df*/
           this,
           &word_B04D78,
           4,
           0) >= 0;
}



// ==== 0x00660AD0  ObjectClass::method_660AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AD0(ObjectClass *this)
{
  return dword_7F099C[4 * (int)this->AbstractClass]; /*0x660adb*/
}



// ==== 0x00660AE0  ObjectClass::method_660AE0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AE0(ObjectClass *this)
{
  return dword_7F09A0[4 * (int)this->AbstractClass]; /*0x660aeb*/
}



// ==== 0x00660AF0  ObjectClass::method_660AF0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AF0(ObjectClass *this)
{
  return dword_7F0998[4 * (int)this->AbstractClass]; /*0x660afb*/
}



// ==== 0x00660B00  ObjectClass::Map_Load_660B00  this=ObjectClass  sig=csp ====
void Map_Load_660B00(ObjectClass *this)
{
  int i; // edi
  void *v2; // esi
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = stru_B04DA8.LoadGame_field_0x10 - 1; i >= 0; --i ) /*0x660b0c*/
  {
    v2 = *(void **)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x660b15*/
    if ( v2 ) /*0x660b1a*/
    {
      v4 = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x660b2b*/
      v3 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v4); /*0x660b2f*/
      if ( v3 != -1 && v3 < stru_B04DA8.LoadGame_field_0x10 ) /*0x660b3f*/
      {
        --stru_B04DA8.LoadGame_field_0x10; /*0x660b44*/
        for ( ; /*0x660b4a*/
              v3 < stru_B04DA8.LoadGame_field_0x10;
              *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x660b52*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x660b65*/
    }
  }
}



// ==== 0x00660B80  ScriptActionQueue::PushNext  this=ScriptActionQueue  sig=csp ====
int __thiscall ScriptActionQueue::PushNext(ScriptActionQueue *this)
{
  int result; // eax

  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x660b92*/
  result = dword_B04D88; /*0x660b91*/
  dword_B04D48[dword_B04D88] = (int)*this; /*0x660b99*/
  dword_B04DD8 = result; /*0x660ba0*/
  return result; /*0x660ba5*/
}



// ==== 0x00660BB0  ObjectClass::UI_Create_734120_Create  this=ObjectClass  sig=csp ====
int *__thiscall UI_Create_734120_Create(ObjectClass *this)
{
  int *result; // eax
  void *v2; // edx

  result = (int *)this; /*0x660bb0*/
  if ( dword_B04D88 == -1 ) /*0x660bbb*/
  {
    this->AbstractClass = (void *)dword_B04D68; /*0x660bc3*/
  }
  else
  {
    v2 = (void *)dword_B04D48[dword_B04D88]; /*0x660bc6*/
    dword_B04DD8 = dword_B04D88; /*0x660bcd*/
    this->AbstractClass = v2; /*0x660bd3*/
  }
  return result; /*0x660bc5*/
}



// ==== 0x00660BE0  ObjectClass::UI_Create_734120_Create_660BE0  this=ObjectClass  sig=csp ====
int *__thiscall UI_Create_734120_Create_660BE0(ObjectClass *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // ecx
  int v4; // edx

  result = (int *)this; /*0x660bea*/
  if ( dword_B04D88 == -1 )
  {
    this->AbstractClass = (void *)dword_B04D68; /*0x660bf5*/
  }
  else
  {
    v2 = dword_B04DD8 - 1 + (dword_B04DD8 - 1 < 0 ? 8 : 0);
    if ( __PAIR32__(HIWORD(dword_B04D48[v2]), dword_B04D48[v2]) == dword_B04D68 )
    {
      v3 = dword_B04D48[dword_B04D88]; /*0x660c28*/
      dword_B04DD8 = dword_B04D88; /*0x660c2f*/
      *result = v3; /*0x660c35*/
    }
    else
    {
      v4 = dword_B04D48[v2]; /*0x660c39*/
      dword_B04DD8 = dword_B04DD8 - 1 + (dword_B04DD8 - 1 < 0 ? 8 : 0);
      *result = v4; /*0x660c46*/
    }
  }
  return result; /*0x660bf4*/
}



// ==== 0x00660C50  Map_Reset_660C50  this=-  sig=ida-proto ====
int sub_660C50()
{
  dword_B04D88 = -1; /*0x660c54*/
  dword_B04DD8 = -1; /*0x660c59*/
  memset32(dword_B04D48, dword_B04D68, 8u); /*0x660c6d*/
  return dword_B04D68; /*0x660c6f*/
}



// ==== 0x00660C80  VectorClass_ptr_RadarEventClass::Destroy  this=VectorClass_ptr_RadarEventClass  sig=csp ====
void __thiscall VectorClass_ptr_RadarEventClass::Destroy(VectorClass_ptr_RadarEventClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x660c86*/
  this->Count = 0; /*0x660c89*/
  if ( Items && this->IsAllocated ) /*0x660c90*/
  {
    __3_YAXPAX_Z(Items); /*0x660c96*/
    this->Items = 0; /*0x660c9e*/
  }
  this->IsAllocated = 0; /*0x660ca1*/
  this->Capacity = 0; /*0x660ca4*/
}



// ==== 0x00660CB0  VectorClass_ptr_RadarEventClass::GetItemIndex  this=VectorClass_ptr_RadarEventClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadarEventClass::GetItemIndex(VectorClass_ptr_RadarEventClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x660cb0*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x660cc5*/
  else
    return 0; /*0x660cb7*/
}



// ==== 0x00660CD0  _VectorClass_PAVRadarEventClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::Get(_VectorClass_PAVRadarEventClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x660cda*/
}



// ==== 0x00660CE0  _VectorClass_PAVRadarEventClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::Add(_VectorClass_PAVRadarEventClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x660ce2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x660ced*/
  {
    v3 = 0; /*0x660cef*/
    if ( m_8 <= 0 ) /*0x660cf3*/
      return 1; /*0x660d13*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x660cf5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x660cfb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x660d04*/
    {
      ++v3; /*0x660d06*/
      ++v4; /*0x660d07*/
      if ( v3 >= m_8 ) /*0x660d0c*/
        return 1; /*0x660d0c*/
    }
  }
  return 0; /*0x660d0e*/
}



// ==== 0x00660D20  _VectorClass_PAVRadarEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::Release(_VectorClass_PAVRadarEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x660d2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x660d36*/
    if ( a3 ) /*0x660d3c*/
      v4 = a3; /*0x660d52*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x660d4e*/
    LOBYTE(this->m_C) = 1; /*0x660d56*/
    if ( v4 ) /*0x660d5a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x660d65*/
      {
        m_8 = this->m_8; /*0x660d6c*/
        if ( a2 < m_8 ) /*0x660d71*/
          m_8 = a2; /*0x660d73*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x660d79*/
          ++i; /*0x660d7e*/
        if ( BYTE1(this->m_C) ) /*0x660d8b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x660d96*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x660d9e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x660da7*/
      this->m_8 = a2; /*0x660daf*/
      BYTE1(this->m_C) = a3 == 0; /*0x660db2*/
      return 1; /*0x660db8*/
    }
    else
    {
      return 0; /*0x660d5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVRadarEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x660dc2*/
    return 1; /*0x660dc8*/
  }
}



// ==== 0x00660DD0  _VectorClass_PAVRadarEventClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadarEventClass::Remove(_VectorClass_PAVRadarEventClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x660ddd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x660de3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x660deb*/
  }
  BYTE1(this->m_C) = 0; /*0x660dee*/
  this->m_8 = 0; /*0x660df1*/
}



// ==== 0x00660E00  _VectorClass_PAVRadarEventClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::GetSize(_VectorClass_PAVRadarEventClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x660e00*/
    return 0; /*0x660e08*/
  m_8 = this->m_8; /*0x660e0e*/
  result = 0; /*0x660e11*/
  if ( m_8 <= 0 ) /*0x660e15*/
    return -1; /*0x660e2c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x660e1b*/
  {
    if ( ++result >= m_8 ) /*0x660e2a*/
      return -1; /*0x660e2a*/
  }
  return result; /*0x660e0a*/
}



// ==== 0x00660E40  _VectorClass_PAVRadarEventClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadarEventClass::GetCapacity(_VectorClass_PAVRadarEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x660e40*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x660e55*/
  else
    return 0; /*0x660e47*/
}



// ==== 0x00660E60  VectorClass_ptr_RadarEventClass::SetCapacity  this=VectorClass_ptr_RadarEventClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::SetCapacity(VectorClass_ptr_RadarEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x660e6c*/
  {
    this->IsInitialized = 0; /*0x660e72*/
    if ( a3 ) /*0x660e78*/
      v4 = a3; /*0x660e8e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x660e8a*/
    this->IsInitialized = 1; /*0x660e92*/
    if ( !v4 ) /*0x660e96*/
      return 0; /*0x660f0a*/
    if ( this->Items ) /*0x660e98*/
    {
      Capacity = this->Capacity; /*0x660e9f*/
      if ( a2 < (int)Capacity ) /*0x660ea4*/
        Capacity = (void *)a2; /*0x660ea6*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x660eac*/
        ++i; /*0x660eb1*/
      if ( this->IsAllocated ) /*0x660ebe*/
      {
        __3_YAXPAX_Z(this->Items); /*0x660ec9*/
        this->Items = 0; /*0x660ed1*/
      }
    }
    this->Items = v4; /*0x660eda*/
    this->Capacity = (void *)a2; /*0x660ee2*/
    this->IsAllocated = a3 == 0; /*0x660ee5*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_RadarEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x660eee*/
  }
  v7 = this->Capacity; /*0x660ef1*/
  if ( (int)v7 < (int)this->Count ) /*0x660ef9*/
    this->Count = v7; /*0x660efb*/
  return 1; /*0x660efe*/
}



// ==== 0x00660F10  LoadGame::RemoveItem  this=LoadGame  sig=csp ====
char __thiscall LoadGame::RemoveItem(LoadGame *this, int a2)
{
  int LoadGame_field_0x10; // edx
  int v3; // eax
  int v4; // edx

  LoadGame_field_0x10 = this->LoadGame_field_0x10; /*0x660f10*/
  v3 = a2; /*0x660f13*/
  if ( a2 >= LoadGame_field_0x10 ) /*0x660f19*/
    return 0; /*0x660f3c*/
  v4 = LoadGame_field_0x10 - 1; /*0x660f1b*/
  this->LoadGame_field_0x10 = v4; /*0x660f1e*/
  if ( a2 < v4 ) /*0x660f21*/
  {
    do /*0x660f34*/
    {
      ++v3; /*0x660f27*/
      *(_DWORD *)(this->LoadGame_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(this->LoadGame_field_0x04 + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < this->LoadGame_field_0x10 ); /*0x660f34*/
  }
  return 1; /*0x660f39*/
}



// ==== 0x00660F50  VectorClass_ptr_RadarEventClass::FindItemIndex  this=VectorClass_ptr_RadarEventClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::FindItemIndex(VectorClass_ptr_RadarEventClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x660f50*/
  result = 0; /*0x660f53*/
  if ( (int)Count <= 0 ) /*0x660f58*/
    return -1; /*0x660f6f*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x660f5e*/
  {
    if ( ++result >= (int)Count ) /*0x660f6d*/
      return -1; /*0x660f6d*/
  }
  return result; /*0x660f72*/
}



// ==== 0x00660F80  _VectorClass_PAVRadarEventClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadarEventClass::QueryInterface(_VectorClass_PAVRadarEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x660f83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadarEventClass *>::`vftable'; /*0x660f86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x660f90*/
  {
    __3_YAXPAX_Z(v3); /*0x660f98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x660fa0*/
  }
  BYTE1(this->m_C) = 0; /*0x660fab*/
  this->m_8 = 0; /*0x660fb1*/
  if ( (a2 & 1) != 0 ) /*0x660fb8*/
    __3_YAXPAX_Z(this); /*0x660fbb*/
  return this->__pad_0; /*0x660fc5*/
}



// ==== 0x00661020  Color::Lerp2  this=Color  sig=csp ====
_BYTE *__thiscall Color::Lerp2(Color *this, int a2, int a3, float a4)
{
  double v4; // st7
  double v6; // st7

  v4 = 1.0 - a4; /*0x661028*/
  LOBYTE(this->Color_field_00) = Math::RoundToInt(v4); /*0x66109d*/
  BYTE1(this->Color_field_00) = Math::RoundToInt(v4); /*0x661105*/
  v6 = v4 * (double)*(unsigned __int8 *)(a2 + 2) + (double)*(unsigned __int8 *)(a3 + 2) * a4; /*0x661124*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661142*/
  {
    if ( v6 > 255.0 ) /*0x661169*/
      v6 = 255.0; /*0x66116d*/
    BYTE2(this->Color_field_00) = Math::RoundToInt(v6); /*0x661178*/
    return this; /*0x66117b*/
  }
  else
  {
    BYTE2(this->Color_field_00) = Math::RoundToInt(0.0); /*0x661151*/
    return this; /*0x661154*/
  }
}



// ==== 0x00661190  Color::ScaleRGB  this=Color  sig=csp ====
_BYTE *__thiscall Color::ScaleRGB(Color *this, unsigned __int8 *a2, float a3)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7

  v4 = (double)*a2 * a3; /*0x6611a4*/
  if ( v4 > 255.0 || v4 >= 0.0 ) /*0x6611c4*/
  {
    if ( v4 > 255.0 ) /*0x6611dd*/
      v4 = 255.0; /*0x6611e1*/
  }
  else
  {
    v4 = 0.0; /*0x6611c8*/
  }
  LOBYTE(this->Color_field_00) = Math::RoundToInt(v4); /*0x6611ee*/
  v5 = (double)a2[1] * a3; /*0x6611fb*/
  if ( v5 > 255.0 || v5 >= 0.0 ) /*0x66121b*/
  {
    if ( v5 > 255.0 ) /*0x661234*/
      v5 = 255.0; /*0x661238*/
  }
  else
  {
    v5 = 0.0; /*0x66121f*/
  }
  BYTE1(this->Color_field_00) = Math::RoundToInt(v5); /*0x661245*/
  v6 = (double)a2[2] * a3; /*0x661253*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661273*/
  {
    if ( v6 > 255.0 ) /*0x661299*/
      v6 = 255.0; /*0x66129d*/
    BYTE2(this->Color_field_00) = Math::RoundToInt(v6); /*0x6612a8*/
    return this; /*0x6612ab*/
  }
  else
  {
    BYTE2(this->Color_field_00) = Math::RoundToInt(0.0); /*0x661282*/
    return this; /*0x661285*/
  }
}



// ==== 0x006612C0  Color::Lerp  this=Color  sig=csp ====
unsigned int __thiscall Color::Lerp(Color *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  char v4; // al
  unsigned __int8 v5; // bl
  unsigned int result; // eax

  v3 = BYTE1(this->Color_field_00); /*0x6612f2*/
  LOBYTE(this->Color_field_00) += a2 * (*a3 - LOBYTE(this->Color_field_00)) / 256; /*0x6612f5*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x661315*/
  v5 = BYTE2(this->Color_field_00); /*0x661317*/
  BYTE1(this->Color_field_00) = v4; /*0x66131a*/
  result = a2 * (a3[2] - v5) / 256; /*0x66133a*/
  LOBYTE(result) = v5 + result; /*0x66133d*/
  BYTE2(this->Color_field_00) = result; /*0x661340*/
  return result; /*0x66132a*/
}



// ==== 0x00661350  Palette::CalcColorDistance  this=Palette  sig=csp ====
int __thiscall Palette::CalcColorDistance(Palette *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = LOBYTE(this->m_Colors[0]) - *a2; /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *a2 - LOBYTE(this->m_Colors[0]); /*0x661364*/
  v3 = BYTE1(this->m_Colors[0]) - a2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2[1] - BYTE1(this->m_Colors[0]); /*0x661374*/
  v4 = BYTE2(this->m_Colors[0]) - a2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2[2] - BYTE2(this->m_Colors[0]); /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/
}



// ==== 0x006613A0  ComputeColorSaturation  this=-  sig=csp ====
int __fastcall Color_ComputeSaturation(unsigned int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  __int16 v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v3 = *(unsigned __int8 *)a1; /*0x6613ad*/
  v4 = *(unsigned __int8 *)(a1 + 2); /*0x6613b4*/
  v5 = *(unsigned __int8 *)(a1 + 1); /*0x6613b7*/
  LOBYTE(a1) = 0; /*0x6613b9*/
  v13 = v4; /*0x6613bd*/
  v6 = v3; /*0x6613c1*/
  if ( v3 <= v5 ) /*0x6613c3*/
    v6 = v5; /*0x6613c5*/
  if ( v4 > v6 ) /*0x6613c9*/
    v6 = v4; /*0x6613cb*/
  v12 = v3; /*0x6613cf*/
  if ( v3 >= v5 ) /*0x6613d3*/
    v12 = v5; /*0x6613d5*/
  if ( v4 < v12 ) /*0x6613dd*/
    v12 = v4; /*0x6613df*/
  LOBYTE(v15) = 0; /*0x6613e5*/
  if ( v6 ) /*0x6613e9*/
  {
    v7 = v6 - v12; /*0x6613f5*/
    v15 = 255 * (v6 - v12) / v6; /*0x661403*/
    if ( v15 ) /*0x661407*/
    {
      v8 = (255 * v6 - 255 * v4) / v7; /*0x66144f*/
      if ( v6 == v3 ) /*0x661453*/
      {
        if ( v12 == v5 ) /*0x661459*/
        {
          v9 = v8 + 1280; /*0x66145b*/
LABEL_23:
          a1 = v9 / 6; /*0x6614ae*/
          goto LABEL_24; /*0x6614b7*/
        }
        v8 = (255 * v6 - 255 * v5) / v7; /*0x661463*/
        v10 = 256; /*0x661467*/
      }
      else if ( v6 == v5 ) /*0x661470*/
      {
        if ( v12 == v13 ) /*0x66147c*/
        {
          v9 = (255 * v6 - 255 * v3) / v7 + 256; /*0x661482*/
          goto LABEL_23; /*0x661488*/
        }
        v10 = 768; /*0x66148a*/
      }
      else
      {
        if ( v12 == v3 ) /*0x661495*/
        {
          v9 = (255 * v6 - 255 * v5) / v7 + 768; /*0x66149b*/
          goto LABEL_23; /*0x6614a1*/
        }
        v8 = (255 * v6 - 255 * v3) / v7; /*0x6614a3*/
        v10 = 1280; /*0x6614a7*/
      }
      v9 = v10 - v8; /*0x6614ac*/
      goto LABEL_23; /*0x6614ac*/
    }
  }
LABEL_24:
  LOBYTE(v14) = a1; /*0x6614ba*/
  HIBYTE(v14) = v15; /*0x6614c8*/
  *(_WORD *)a3 = v14; /*0x6614d1*/
  *(_BYTE *)(a3 + 2) = v6; /*0x6614d7*/
  return a3; /*0x6614d4*/
}



// ==== 0x006614F0  RulesClass::readGeneralSection  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readGeneralSection(RulesClass *this, int a2)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this, 3, 0); /*0x6614ff*/
}



// ==== 0x00661510  RulesClass::readCombatDamage  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readCombatDamage(RulesClass *this, int a2)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/
}



// ==== 0x00661530  Map_Append  this=-  sig=csp ====
int __stdcall sub_661530(_BYTE *a1, _BYTE *a2, int a3)
{
  int v5; // edi
  int result; // eax
  int v7; // ecx
  _BYTE *v9; // esi

  v5 = a3; /*0x66153a*/
  result = 0; /*0x66153e*/
  while ( v5 > 0 ) /*0x661542*/
  {
    if ( *a1 ) /*0x661545*/
    {
      if ( a2 ) /*0x66157d*/
        *a2++ = *a1; /*0x66157f*/
      ++a1; /*0x661582*/
      ++result; /*0x661583*/
      --v5; /*0x661584*/
    }
    else
    {
      v7 = 0; /*0x66154b*/
      do /*0x661558*/
      {
        if ( v7 > v5 ) /*0x66154f*/
          break; /*0x66154f*/
      }
      while ( !a1[++v7] ); /*0x661558*/
      if ( v7 >= 255 ) /*0x661560*/
        v7 = 255; /*0x661562*/
      if ( a2 ) /*0x661569*/
      {
        *a2 = 0; /*0x66156b*/
        v9 = a2 + 1; /*0x66156e*/
        *v9 = v7; /*0x66156f*/
        a2 = v9 + 1; /*0x661571*/
      }
      result += 2; /*0x661572*/
      a1 += v7; /*0x661575*/
      v5 -= v7; /*0x661577*/
    }
  }
  return result; /*0x66158a*/
}



// ==== 0x00661590  Map_Append  this=-  sig=csp ====
int __stdcall sub_661590(_BYTE *a1, int a2, int a3)
{
  int result; // eax

  if ( !a2 ) /*0x661597*/
    return Map_Append_661530(a1, 0, a3) + 2; /*0x6615c7*/
  result = Map_Append_661530(a1, (_BYTE *)(a2 + 2), a3) + 2; /*0x6615ac*/
  *(_WORD *)a2 = result; /*0x6615af*/
  return result; /*0x6615b2*/
}



// ==== 0x006615D0  sub_6615D0  this=-  sig=csp ====
_BYTE *__stdcall sub_6615D0(char *a1, _BYTE *a2, int a3)
{
  int v4; // ebx
  _BYTE *v5; // edi
  char v6; // al
  unsigned int v7; // eax
  _BYTE *v9; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x6615d6*/
  v5 = a2; /*0x6615db*/
  v9 = a2; /*0x6615e1*/
  if ( a3 > 0 ) /*0x6615e5*/
  {
    while ( 1 ) /*0x6615e9*/
    {
      v6 = *a1++; /*0x6615e9*/
      --v4; /*0x6615ec*/
      if ( v6 ) /*0x6615ef*/
        break; /*0x6615ef*/
      v7 = (unsigned __int8)*a1++; /*0x6615f3*/
      --v4; /*0x6615f8*/
      if ( v7 ) /*0x6615fb*/
      {
        memset(v5, 0, v7); /*0x661606*/
        v5 = &v9[v7]; /*0x661613*/
LABEL_6:
        v9 = v5; /*0x66161a*/
      }
      if ( v4 <= 0 ) /*0x661620*/
        return (_BYTE *)(v5 - a2); /*0x661620*/
    }
    *v5++ = v6; /*0x661617*/
    goto LABEL_6; /*0x661619*/
  }
  return (_BYTE *)(v5 - a2); /*0x66162a*/
}



// ==== 0x00661640  sub_661640  this=-  sig=csp ====
_BYTE *__stdcall sub_661640(unsigned __int16 *a1, _BYTE *a2)
{
  _BYTE *v2; // edi
  int v3; // edx
  char *v4; // esi
  char v5; // al
  unsigned int v6; // ebx
  _BYTE *v8; // [esp+Ch] [ebp+4h]

  v2 = a2; /*0x66164b*/
  v3 = *a1 - 2; /*0x66164f*/
  v4 = (char *)(a1 + 1); /*0x661652*/
  v8 = a2; /*0x661657*/
  if ( v3 > 0 ) /*0x66165b*/
  {
    while ( 1 ) /*0x66165f*/
    {
      v5 = *v4++; /*0x66165f*/
      --v3; /*0x661662*/
      if ( v5 ) /*0x661665*/
        break; /*0x661665*/
      v6 = (unsigned __int8)*v4++; /*0x661669*/
      --v3; /*0x66166c*/
      if ( v6 ) /*0x66166f*/
      {
        memset(v2, 0, v6); /*0x66167a*/
        v2 = &v8[v6]; /*0x661687*/
LABEL_6:
        v8 = v2; /*0x66168e*/
      }
      if ( v3 <= 0 ) /*0x661694*/
        return (_BYTE *)(v2 - a2); /*0x661694*/
    }
    *v2++ = v5; /*0x66168b*/
    goto LABEL_6; /*0x66168d*/
  }
  return (_BYTE *)(v2 - a2); /*0x66169e*/
}



// ==== 0x006616B0  Straw::method_6616B0  this=Straw  sig=csp ====
_DWORD *__thiscall sub_6616B0(Straw *this)
{
  int v2; // ebp
  ObjectClass *v3; // ebx

  v2 = 32; /*0x6616b8*/
  this->Straw_field_0x04 = 0; /*0x6616bd*/
  *((_DWORD *)this + 2) = 0; /*0x6616c0*/
  *(_DWORD *)this->__pad_0 = &Straw::`vftable'; /*0x6616c3*/
  *((_DWORD *)this + 3) = 0; /*0x6616c9*/
  this->q004 = 0; /*0x6616cc*/
  v3 = (ObjectClass *)((char *)this + 20); /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 = (ObjectClass *)((char *)v3 + 8); /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  *((_DWORD *)this + 3) = 0; /*0x6616e1*/
  this->q004 = 0; /*0x6616e4*/
  *(_DWORD *)this->__pad_0 = &RandomStraw::`vftable'; /*0x6616f1*/
  memset((char *)this + 20, 0, 0x100u); /*0x6616f7*/
  return this->__pad_0; /*0x6616fb*/
}



// ==== 0x00661770  ObjectClass::SHA1TickRNG  this=ObjectClass  sig=csp ====
void *__thiscall SHA1TickRNG(ObjectClass *this, char a2)
{
  int vtable3; // ecx
  _BYTE *v4; // eax
  void *result; // eax
  int *p_abstractFlags; // ebx
  unsigned int v7; // esi
  int *v8; // edi
  size_t v9; // eax
  char Src[20]; // [esp+4h] [ebp-88h] BYREF
  SHA1 v11; // [esp+18h] [ebp-74h] BYREF
  int v12; // [esp+30h] [ebp-5Ch]
  int v13; // [esp+34h] [ebp-58h]
  int v14; // [esp+38h] [ebp-54h]
  int v15; // [esp+3Ch] [ebp-50h]
  int v16; // [esp+40h] [ebp-4Ch]
  int v17; // [esp+44h] [ebp-48h]
  int v18; // [esp+48h] [ebp-44h]

  vtable3 = (int)this->?; /*0x661779*/
  if ( (a2 & 1) != 0 ) /*0x66179a*/
  {
    v4 = (char *)&this->? + (unsigned __int8)(vtable3 / 8); /*0x661796*/
    *v4 ^= 1 << (vtable3 & 7); /*0x6617a3*/
  }
  result = (char *)this->? + 1; /*0x6617a9*/
  this->? = result; /*0x6617ab*/
  if ( result == (void *)2048 ) /*0x6617b3*/
  {
    p_abstractFlags = &this->?; /*0x6617bc*/
    v11.__pad_0[0] = 0; /*0x6617c0*/
    v17 = 0; /*0x6617c4*/
    v18 = 0; /*0x6617c8*/
    v12 = 1732584193; /*0x6617cc*/
    v13 = -271733879; /*0x6617d4*/
    v14 = -1732584194; /*0x6617dc*/
    v15 = 271733878; /*0x6617e4*/
    v16 = -1009589776; /*0x6617ec*/
    v7 = 0; /*0x6617f4*/
    v8 = &this->?; /*0x6617f6*/
    do /*0x66183d*/
    {
      SHA1::Process(&v11, (int)p_abstractFlags, 256); /*0x661802*/
      SHA1::Compute(&v11, Src); /*0x661810*/
      v9 = 256 - v7; /*0x66181a*/
      if ( 256 - v7 > 0x14 ) /*0x66181f*/
        v9 = 20; /*0x661821*/
      result = memcpy(v8, Src, v9); /*0x66182d*/
      ++v7; /*0x661835*/
      v8 = (int *)((char *)v8 + 1); /*0x661836*/
    }
    while ( v7 < 0x100 ); /*0x66183d*/
  }
  return result; /*0x661841*/
}



// ==== 0x00661850  Random::AdvanceRandomBytes  this=Random  sig=csp ====
int __thiscall sub_661850(char *this, char a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v12[29]; // [esp+28h] [ebp-74h] BYREF

  v10 = 8; /*0x66185c*/
  do /*0x661940*/
  {
    if ( (a2 & 1) != 0 ) /*0x661885*/
    {
      v3 = this + (unsigned __int8)(this->q00C / 8) + 20; /*0x661881*/
      *v3 ^= 1 << (this->q00C & 7); /*0x66188e*/
    }
    v4 = this->q00C + 1; /*0x661894*/
    this->q00C = v4; /*0x661896*/
    if ( v4 == 2048 ) /*0x66189e*/
    {
      v5 = 0; /*0x6618a4*/
      LOBYTE(v12[0]) = 0; /*0x6618a9*/
      v12[11] = 0; /*0x6618ae*/
      v12[12] = 0; /*0x6618b2*/
      v12[6] = 1732584193; /*0x6618b6*/
      v12[7] = -271733879; /*0x6618be*/
      v12[8] = -1732584194; /*0x6618c6*/
      v12[9] = 271733878; /*0x6618ce*/
      v12[10] = -1009589776; /*0x6618d6*/
      v6 = this + 20; /*0x6618de*/
      do /*0x661925*/
      {
        SHA1::Process(v12, (int)(this + 20), 256); /*0x6618ea*/
        SHA1::Compute(v12, Src); /*0x6618f8*/
        v7 = 256 - v5; /*0x661902*/
        if ( 256 - v5 > 0x14 ) /*0x661907*/
          v7 = 20; /*0x661909*/
        memcpy(v6, Src, v7); /*0x661915*/
        ++v5; /*0x66191d*/
        ++v6; /*0x66191e*/
      }
      while ( v5 < 0x100 ); /*0x661925*/
    }
    result = v10 - 1; /*0x661934*/
    v8 = v10 == 1; /*0x661934*/
    a2 >>= 1; /*0x661935*/
    --v10; /*0x66193c*/
  }
  while ( !v8 ); /*0x661940*/
  return result; /*0x661946*/
}



// ==== 0x00661960  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_661960(ObjectClass *this, __int16 a2)
{
  _BYTE *v3; // eax
  char *v4; // eax
  unsigned int v5; // esi
  int *p_abstractFlags; // ebp
  size_t v7; // eax
  int result; // eax
  int v9; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  SHA1 v11; // [esp+28h] [ebp-74h] BYREF
  int v12; // [esp+40h] [ebp-5Ch]
  int v13; // [esp+44h] [ebp-58h]
  int v14; // [esp+48h] [ebp-54h]
  int v15; // [esp+4Ch] [ebp-50h]
  int v16; // [esp+50h] [ebp-4Ch]
  int v17; // [esp+54h] [ebp-48h]
  int v18; // [esp+58h] [ebp-44h]

  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      v3 = (char *)&this->? + (unsigned __int8)((int)this->? / 8); /*0x661991*/
      *v3 ^= 1 << ((int)this->? & 7); /*0x66199e*/
    }
    v4 = (char *)this->? + 1; /*0x6619a4*/
    this->? = v4; /*0x6619a6*/
    if ( v4 == (char *)2048 ) /*0x6619ae*/
    {
      v5 = 0; /*0x6619b4*/
      v11.__pad_0[0] = 0; /*0x6619b9*/
      v17 = 0; /*0x6619be*/
      v18 = 0; /*0x6619c2*/
      v12 = 1732584193; /*0x6619c6*/
      v13 = -271733879; /*0x6619ce*/
      v14 = -1732584194; /*0x6619d6*/
      v15 = 271733878; /*0x6619de*/
      v16 = -1009589776; /*0x6619e6*/
      p_abstractFlags = &this->?; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(&v11, (int)&this->?, 256); /*0x6619fa*/
        SHA1::Compute(&v11, Src); /*0x661a08*/
        v7 = 256 - v5; /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661a2e*/
      }
      while ( v5 < 0x100 ); /*0x661a35*/
    }
    a2 >>= 1; /*0x661a3b*/
    result = --v9; /*0x661a43*/
  }
  while ( v9 ); /*0x661a48*/
  return result; /*0x661a4e*/
}



// ==== 0x00661A60  ObjectClass::method_661A60  this=ObjectClass  sig=csp ====
int __thiscall sub_661A60(ObjectClass *this, int a2)
{
  _BYTE *v3; // eax
  char *v4; // eax
  unsigned int v5; // esi
  int *p_abstractFlags; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  SHA1 v12; // [esp+28h] [ebp-74h] BYREF
  int v13; // [esp+40h] [ebp-5Ch]
  int v14; // [esp+44h] [ebp-58h]
  int v15; // [esp+48h] [ebp-54h]
  int v16; // [esp+4Ch] [ebp-50h]
  int v17; // [esp+50h] [ebp-4Ch]
  int v18; // [esp+54h] [ebp-48h]
  int v19; // [esp+58h] [ebp-44h]

  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      v3 = (char *)&this->? + (unsigned __int8)((int)this->? / 8); /*0x661a91*/
      *v3 ^= 1 << ((int)this->? & 7); /*0x661a9e*/
    }
    v4 = (char *)this->? + 1; /*0x661aa4*/
    this->? = v4; /*0x661aa6*/
    if ( v4 == (char *)2048 ) /*0x661aae*/
    {
      v5 = 0; /*0x661ab4*/
      v12.__pad_0[0] = 0; /*0x661ab9*/
      v18 = 0; /*0x661abe*/
      v19 = 0; /*0x661ac2*/
      v13 = 1732584193; /*0x661ac6*/
      v14 = -271733879; /*0x661ace*/
      v15 = -1732584194; /*0x661ad6*/
      v16 = 271733878; /*0x661ade*/
      v17 = -1009589776; /*0x661ae6*/
      p_abstractFlags = &this->?; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(&v12, (int)&this->?, 256); /*0x661afa*/
        SHA1::Compute(&v12, Src); /*0x661b08*/
        v7 = 256 - v5; /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661b2e*/
      }
      while ( v5 < 0x100 ); /*0x661b35*/
    }
    result = v10 - 1; /*0x661b44*/
    v8 = v10 == 1; /*0x661b44*/
    a2 >>= 1; /*0x661b45*/
    --v10; /*0x661b4c*/
  }
  while ( !v8 ); /*0x661b50*/
  return result; /*0x661b56*/
}



// ==== 0x00661B70  ObjectClass::method_661B70  this=ObjectClass  sig=csp ====
void *__thiscall sub_661B70(ObjectClass *this)
{
  int *p_abstractFlags; // ebx
  unsigned int v2; // esi
  int *v3; // edi
  size_t v4; // eax
  void *result; // eax
  char Src[20]; // [esp+Ch] [ebp-88h] BYREF
  SHA1 v7; // [esp+20h] [ebp-74h] BYREF
  int v8; // [esp+38h] [ebp-5Ch]
  int v9; // [esp+3Ch] [ebp-58h]
  int v10; // [esp+40h] [ebp-54h]
  int v11; // [esp+44h] [ebp-50h]
  int v12; // [esp+48h] [ebp-4Ch]
  int v13; // [esp+4Ch] [ebp-48h]
  int v14; // [esp+50h] [ebp-44h]

  p_abstractFlags = &this->?; /*0x661b7a*/
  v7.__pad_0[0] = 0; /*0x661b7e*/
  v13 = 0; /*0x661b82*/
  v14 = 0; /*0x661b86*/
  v8 = 1732584193; /*0x661b8a*/
  v9 = -271733879; /*0x661b92*/
  v10 = -1732584194; /*0x661b9a*/
  v11 = 271733878; /*0x661ba2*/
  v12 = -1009589776; /*0x661baa*/
  v2 = 0; /*0x661bb2*/
  v3 = &this->?; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(&v7, (int)p_abstractFlags, 256); /*0x661bc0*/
    SHA1::Compute(&v7, Src); /*0x661bce*/
    v4 = 256 - v2; /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    v3 = (int *)((char *)v3 + 1); /*0x661bf4*/
  }
  while ( v2 < 0x100 ); /*0x661bfb*/
  return result; /*0x661bfd*/
}



// ==== 0x00661C10  RandomStraw::Release  this=RandomStraw  sig=csp ====
int __thiscall RandomStraw::Release(RandomStraw *this, int a2, int a3)
{
  int v3; // ebx
  _BYTE *v4; // edi
  int v6; // eax

  v3 = a3; /*0x661c11*/
  v4 = (_BYTE *)a2; /*0x661c17*/
  if ( !a2 || a3 < 1 ) /*0x661c24*/
    return Delegate::Invoke((Straw *)this, a2, a3); /*0x661c5d*/
  do /*0x661c4d*/
  {
    v6 = this->q004; /*0x661c30*/
    this->q004 = v6 + 1; /*0x661c38*/
    *v4++ = RandomStraw::AdvanceState((RandomStraw *)((char *)this + 8 * v6 + 20)); /*0x661c40*/
    --v3; /*0x661c49*/
    this->q004 &= 0x1Fu; /*0x661c4a*/
  }
  while ( v3 ); /*0x661c4d*/
  return a3; /*0x661c53*/
}



// ==== 0x00661C70  RandomStraw::QueryInterface  this=RandomStraw  sig=csp ====
int *__thiscall RandomStraw::QueryInterface(RandomStraw *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &RandomStraw::`vftable'; /*0x661c7e*/
  *((_DWORD *)this + 3) = 0; /*0x661c84*/
  this->q004 = 0; /*0x661c87*/
  memset((char *)this + 20, 0, 0x100u); /*0x661c8a*/
  Straw::Dtor((Straw *)this); /*0x661c8e*/
  if ( (a2 & 1) != 0 ) /*0x661c98*/
    __3_YAXPAX_Z(this); /*0x661c9b*/
  return (int *)this->__pad_0; /*0x661ca5*/
}



// ==== 0x00661CB0  sub_661CB0  this=-  sig=ida-proto ====
void sub_661CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x661cbc*/
  dbl_B04E20 = Math::Sqrt(v0 + v0); /*0x661cce*/
}



// ==== 0x00661CE0  sub_661CE0  this=-  sig=ida-proto ====
void sub_661CE0()
{
  dbl_B04E70 = dbl_B04E20 / 60.0; /*0x661cec*/
}



// ==== 0x00661D00  sub_661D00  this=-  sig=ida-proto ====
void sub_661D00()
{
  dbl_B04E58 = 1.0 / dbl_B04E70; /*0x661d0c*/
}



// ==== 0x00661D20  sub_661D20  this=-  sig=ida-proto ====
void sub_661D20()
{
  dbl_B04E50 = 0.0174532925199433 * 45.0; /*0x661d2c*/
}



// ==== 0x00661D40  sub_661D40  this=-  sig=ida-proto ====
void sub_661D40()
{
  dbl_B04E28 = 0.0174532925199433 * 60.0; /*0x661d4c*/
}



// ==== 0x00661D60  sub_661D60  this=-  sig=ida-proto ====
void sub_661D60()
{
  dbl_B04E00 = 0.0174532925199433 * 90.0; /*0x661d6c*/
}



// ==== 0x00661D80  Animation::UpdateBobOffset  this=Animation  sig=ida-proto ====
__int64 Animation_UpdateBobOffset()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04E00 - dbl_B04E28); /*0x661d92*/
  result = Math::RoundToInt(v0 * dbl_B04E20 * 0.5); /*0x661da6*/
  dword_B04E78 = result; /*0x661dab*/
  return result; /*0x661db0*/
}



// ==== 0x00661DC0  sub_661DC0  this=-  sig=ida-proto ====
void sub_661DC0()
{
  dbl_B04E30 = Math::ArcTan((double)dword_B04E78 * 0.00390625); /*0x661dd7*/
}



// ==== 0x00661DF0  sub_661DF0  this=-  sig=ida-proto ====
void sub_661DF0()
{
  dbl_B04E48 = Math::ArcTan((double)(2 * dword_B04E78) / dbl_B04E20); /*0x661e12*/
}



// ==== 0x00661E20  sub_661E20  this=-  sig=ida-proto ====
__int64 sub_661E20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04E78) + 0.5); /*0x661e3b*/
  dword_B04E6C = result; /*0x661e40*/
  return result; /*0x661e46*/
}



// ==== 0x00661E50  sub_661E50  this=-  sig=ida-proto ====
int sub_661E50()
{
  word_B04E18 = 0; /*0x661e52*/
  word_B04E1A = 0; /*0x661e58*/
  return 0; /*0x661e5e*/
}



// ==== 0x00661E60  sub_661E60  this=-  sig=ida-proto ====
int sub_661E60()
{
  dword_B04E38 = 0; /*0x661e62*/
  dword_B04E3C = 0; /*0x661e67*/
  dword_B04E40 = 0; /*0x661e6c*/
  return 0; /*0x661e71*/
}



// ==== 0x00661E80  sub_661E80  this=-  sig=ida-proto ====
int sub_661E80()
{
  dword_B04E68 = 0; /*0x661e85*/
  dword_B04E60 = 128; /*0x661e8f*/
  dword_B04E64 = 128; /*0x661e94*/
  return 128; /*0x661e99*/
}



// ==== 0x00661EA0  sub_661EA0  this=-  sig=ida-proto ====
int sub_661EA0()
{
  dword_B04E08 = 0; /*0x661ea2*/
  dword_B04E0C = 0; /*0x661ea7*/
  dword_B04E10 = 0; /*0x661eac*/
  dword_B04E14 = 0; /*0x661eb1*/
  return 0; /*0x661eb6*/
}



// ==== 0x00661EC0  RocketLocomotionClass::RocketLocomotionClass  this=RocketLocomotionClass  sig=csp ====
int __thiscall RocketLocomotionClass::RocketLocomotionClass(RocketLocomotionClass *this)
{
  int v2; // ecx

  LocomotionClass::Init((LocomotionClass *)this); /*0x661ec3*/
  this->MovingDestination[0] = dword_B04E38; /*0x661ed1*/
  this->MovingDestination[1] = dword_B04E3C; /*0x661eda*/
  this->MovingDestination[2] = dword_B04E40; /*0x661ee3*/
  this->MissionTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x661eee*/
  this->MissionTimer[2] = 0; /*0x661ef1*/
  this->MissionTimer[3] = 0; /*0x661ef4*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x661ef7*/
  this->TrailerTimer[2] = 0; /*0x661efd*/
  this->TrailerTimer[0] = v2; /*0x661f00*/
  this->CurrentSpeed[0] = 0; /*0x661f03*/
  this->MissionState = 0; /*0x661f06*/
  this->CurrentSpeed[1] = 0; /*0x661f09*/
  this->SpawnerIsElite = 0; /*0x661f0c*/
  this->CurrentPitch = 0.0; /*0x661f0f*/
  this->RocketLocomotionClass_field_58 = 0; /*0x661f12*/
  this->RocketLocomotionClass_field_bool_4C = 1; /*0x661f15*/
  *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x661f1f*/
  return (int)this->LocomotionClass; /*0x661f28*/
}



// ==== 0x00661F30  RocketLocomotionClass::method_661F30  this=RocketLocomotionClass  sig=csp ====
void __thiscall sub_661F30(RocketLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x661f30*/
  *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x661f36*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x661f3d*/
}



// ==== 0x00661F50  JumpjetLocomotionClass::HasFieldStateChanged  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::HasFieldStateChanged(JumpjetLocomotionClass *this)
{
  return this->? != dword_B04E38 || this->TurnRate != dword_B04E3C || this->Speed != dword_B04E40; /*0x661f7d*/
}



// ==== 0x00661F90  RocketLocomotionClass::CheckCompositeState_0  this=RocketLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckCompositeState_0(RocketLocomotionClass *this)
{
  int v1; // eax

  v1 = this->TrailerTimer[2]; /*0x661f94*/
  return v1 >= 3 && v1 <= 5; /*0x661fa3*/
}



// ==== 0x00661FB0  JumpjetLocomotionClass::GetCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinate_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int TurnRate; // edx
  int Speed; // eax

  TurnRate = this->TurnRate; /*0x661fbd*/
  Speed = this->Speed; /*0x661fc0*/
  *a2 = this->?; /*0x661fc5*/
  a2[1] = TurnRate; /*0x661fc7*/
  a2[2] = Speed; /*0x661fca*/
  return a2; /*0x661fcf*/
}



// ==== 0x006620F0  BulletClass::ComputeImpactTrajectory  this=BulletClass  sig=csp ====
char __userpurge BulletClass::ComputeImpactTrajectory@<al>(TechnoClass *this@<ecx>, double a2@<st0>, int a3)
{
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  void *NeedsSaveOrLink; // ebx
  double v11; // [esp+0h] [ebp-38h]
  double v12; // [esp+0h] [ebp-38h]
  int v13; // [esp+18h] [ebp-20h]
  double v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h] BYREF
  _DWORD v17[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int v18; // [esp+34h] [ebp-4h]

  _ESI = this; /*0x6620fe*/
  v15 = *(_DWORD *)(a3 + 40); /*0x662107*/
  __asm { fld dword ptr [esi+54h] } /*0x66210b*/
  v4 = (char *)this->? + 156; /*0x66210e*/
  __asm { fstp [esp+38h+var_38]; double } /*0x662119*/
  v5 = *((_DWORD *)this->? + 40); /*0x66211c*/
  v17[0] = *v4; /*0x66211f*/
  v17[1] = v5; /*0x662123*/
  v18 = v4[2]; /*0x66212a*/
  Math::ArcTan2(v11); /*0x66212e*/
  __asm { fstp st } /*0x662144*/
  v13 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)_ESI->? + 904), &v16) - 0x3FFF; /*0x662154*/
  __asm /*0x662158*/
  {
    fild dword ptr [esp+30h+var_20]
    fmul ds:dbl_7E2810
    fstp [esp+30h+var_20]
  }
  Math::SinCos(v14); /*0x662170*/
  __asm { fstp st } /*0x662177*/
  Math::ArcTan2(v14); /*0x662179*/
  __asm /*0x66217e*/
  {
    fstp st
    fld dword ptr [esi+54h]
  }
  __asm { fstp [esp+38h+var_38]; double }
  Math::SinCos(v12); /*0x662189*/
  __asm { fimul [esp+38h+var_14] } /*0x66218e*/
  __asm { fiadd [esp+30h+var_4] }
  LOWORD(v6) = Math::RoundToInt(a2); /*0x662199*/
  v7 = v6; /*0x66219e*/
  if ( v6 > (int)_ESI->? ) /*0x6621a5*/
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)_ESI->? + 444))(_ESI->?); /*0x6621be*/
    if ( !v8 /*0x6621f1*/
      || (v8[80] & 0x100) == 0
      || (NeedsSaveOrLink = _ESI->?,
          *(void **)((*(int (__thiscall **)(_DWORD *, _DWORD *))(*v8 + 72))(v8, v17) + 8) != NeedsSaveOrLink)
      || v7 > (int)NeedsSaveOrLink + dword_B04E6C )
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)_ESI->? + 456))(_ESI->?) > 0 ) /*0x662212*/
        return 0; /*0x662228*/
    }
  }
  TechnoClass::CalculateDamage(_ESI); /*0x662216*/
  return 1; /*0x6621b0*/
}



// ==== 0x00662240  ObjectClass::method  this=ObjectClass  sig=csp ====
double __thiscall sub_662240(ObjectClass *this)
{
  int v1; // eax
  int v2; // edx
  double result; // st7
  double v5; // [esp+0h] [ebp-20h]
  double v6; // [esp+8h] [ebp-18h]
  int v7; // [esp+10h] [ebp-10h]
  char *v8; // [esp+1Ch] [ebp-4h]

  v1 = this->? - *((_DWORD *)this->? + 39); /*0x66225b*/
  v2 = this->? - *((_DWORD *)this->? + 40); /*0x662263*/
  v8 = (char *)this->? - *((_DWORD *)this->? + 41); /*0x662267*/
  v7 = v2 * v2 + v1 * v1; /*0x662277*/
  __asm /*0x66227b*/
  {
    fild [esp+20h+var_10]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v5); /*0x662282*/
  __asm { fcom ds:dbl_7E2800 } /*0x662287*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4100) != 0 ) /*0x662297*/
  {
    __asm /*0x6622b3*/
    {
      fstp st
      fld ds:dbl_7F0C10
    }
  }
  else
  {
    __asm { fild [esp+10h+var_4] } /*0x662299*/
    __asm
    {
      fdiv st, st(1)
      fstp [esp+18h+var_18]; double
      fstp st
    }
    Math::ArcTan(v6); /*0x6622a7*/
  }
  return result; /*0x6622af*/
}



// ==== 0x006622C0  RocketLocomotionClass::UpdateBullets  this=RocketLocomotionClass  sig=csp ====
char __stdcall UpdateBullets(RocketLocomotionClass *this)
{
  double v1; // st7
  FootClass *Owner; // ecx
  void *vtable1; // edx
  int v5; // eax
  TechnoClass *spawnOwner; // eax
  bool v8; // al
  int v9; // edx
  int v10; // eax
  AnimClass *v11; // ebx
  int *location; // eax
  int Index; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  TechnoClass *v22; // ecx
  bool v23; // al
  int *v24; // ebx
  int v25; // edi
  int v26; // edx
  int v27; // eax
  AnimClass *v28; // edi
  int *v29; // eax
  int v30; // eax
  int *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  _WORD *v40; // eax
  FootClass *v41; // ecx
  int v42; // eax
  int v43; // edx
  TechnoClass *v44; // eax
  bool v45; // al
  int v46; // edx
  int v47; // eax
  _WORD *v51; // eax
  AnimClass *v52; // edi
  int *v53; // ecx
  int v54; // eax
  FootClass *v55; // ecx
  int v56; ... [32816 chars total]



// ==== 0x00663030  TechnoClass::CalculateDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalculateDamage(TechnoClass *this)
{
  double v1; // st7
  _DWORD *vtable3; // edx
  int v4; // ecx
  int v5; // ecx
  int *v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  void *WarheadVersusMultiplier; // eax
  double v16; // [esp+0h] [ebp-68h]
  double v17; // [esp+0h] [ebp-68h]
  __int64 v18; // [esp+0h] [ebp-68h]
  int v19; // [esp+18h] [ebp-50h]
  _DWORD *v20; // [esp+1Ch] [ebp-4Ch]
  int v21; // [esp+20h] [ebp-48h]
  int v22; // [esp+20h] [ebp-48h]
  double v23; // [esp+20h] [ebp-48h]
  int v24; // [esp+28h] [ebp-40h]
  double v25; // [esp+28h] [ebp-40h]
  AnimClass *v26; // [esp+28h] [ebp-40h]
  __int16 v27[2]; // [esp+30h] [ebp-38h] BYREF
  int v28; // [esp+34h] [ebp-34h] BYREF
  int v30; // [esp+40h] [ebp-28h]
  int v32; // [esp+50h] [ebp-18h] BYREF
  int v33; // [esp+54h] [ebp-14h]
  unsigned int v34; // [esp+58h] [ebp-10h]
  int v35; // [esp+5Ch] [ebp-Ch]
  int v36; // [esp+60h] [ebp-8h]
  int v37; // [esp+64h] [ebp-4h]

  _ESI = this; /*0x66303b*/
  GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, (int)this->?); /*0x663047*/
  vtable3 = _ESI->?; /*0x66304c*/
  v4 = vtable3[433]; /*0x663054*/
  if ( v4 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x663062*/
  {
    v20 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200); /*0x66306a*/
    if ( BYTE1(_ESI->?[0]) ) /*0x66306e*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4024); /*0x66307b*/
      goto LABEL_13; /*0x66307f*/
    }
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4016); /*0x663081*/
  }
  else if ( v4 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x66308f*/
  {
    v20 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1304); /*0x663097*/
    if ( BYTE1(_ESI->?[0]) ) /*0x66309b*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4036); /*0x6630a8*/
      goto LABEL_13; /*0x6630ac*/
    }
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4032); /*0x6630ae*/
  }
  else
  {
    v20 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252); /*0x6630bc*/
    if ( BYTE1(_ESI->?[0]) ) /*0x6630c0*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4028); /*0x6630cd*/
      goto LABEL_13; /*0x6630d1*/
    }
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4020); /*0x6630d3*/
  }
  v19 = v5; /*0x6630d9*/
LABEL_13:
  v6 = vtable3 + 39; /*0x6630dd*/
  v21 = v20[10]; /*0x6630ef*/
  v35 = *v6; /*0x6630f3*/
  __asm { fild dword ptr [esp+68h+var_48] } /*0x6630f7*/
  v36 = v6[1]; /*0x6630fe*/
  __asm /*0x663102*/
  {
    fstp [esp+68h+var_20]
    fld dword ptr [esi+54h]
  }
  __asm { fstp [esp+68h+var_68]; double }
  v37 = v6[2]; /*0x66310f*/
  Math::ArcTan2(v16); /*0x663113*/
  __asm { fmul [esp+68h+var_20] } /*0x663118*/
  LOWORD(v7) = Math::RoundToInt(v1); /*0x66311f*/
  v24 = v7; /*0x663127*/
  v22 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)_ESI->? + 904), &v28) - 0x3FFF; /*0x663144*/
  __asm /*0x663148*/
  {
    fild dword ptr [esp+60h+var_48]
    fmul ds:dbl_7E2810
    fstp [esp+60h+var_48]
    fild [esp+60h+var_40]
  }
  __asm
  {
    fstp [esp+68h+var_30]
    fild [esp+68h+var_8]
    fstp qword ptr [esp+68h+var_40]
  }
  Math::SinCos(v23); /*0x663170*/
  __asm /*0x663175*/
  {
    fmul [esp+68h+var_30]
    fsubr qword ptr [esp+68h+var_40]
  }
  LOWORD(v8) = Math::RoundToInt(v1); /*0x66317d*/
  LODWORD(v25) = v8; /*0x663184*/
  Math::ArcTan2(v23); /*0x663188*/
  __asm /*0x66318d*/
  {
    fmul [esp+70h+var_30]
    fiadd [esp+70h+var_C]
  }
  LOWORD(v9) = Math::RoundToInt(v1); /*0x663195*/
  __asm { fld dword ptr [esi+54h] } /*0x66319a*/
  __asm { fstp [esp+70h+var_68]; double }
  v10 = v9; /*0x6631ac*/
  v30 = v37; /*0x6631ae*/
  Math::SinCos(v17); /*0x6631b2*/
  __asm { fmul [esp+68h+var_20] } /*0x6631b7*/
  __asm { fiadd [esp+60h+var_4] }
  LOWORD(v11) = Math::RoundToInt(v1); /*0x6631c2*/
  v34 = v11; /*0x6631c7*/
  v32 = v10; /*0x6631d4*/
  v33 = LODWORD(v25); /*0x6631da*/
  LOWORD(v23) = v10 / 256; /*0x6631e1*/
  WORD1(v23) = SLODWORD(v25) / 256; /*0x6631f4*/
  *(_DWORD *)v27 = LODWORD(v23); /*0x6631fd*/
  if ( BYTE1(_ESI->?[0]) ) /*0x663201*/
    v12 = v20[9]; /*0x66320c*/
  else
    v12 = v20[8]; /*0x663215*/
  v26 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x663225*/
  if ( v26 ) /*0x66322b*/
  {
    v13 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27) + 59); /*0x663240*/
    v18 = v34; /*0x66325a*/
    LODWORD(v18) = Return::HRESULT_Fail(v32, v33, v34); /*0x663266*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v12, v19, v13, &v32); /*0x66327d*/
    AnimClass::ctor(v26, WarheadVersusMultiplier, &v32, 0, 1, (void *)0x2600, (void *)v18, SBYTE4(v18)); /*0x663287*/
  }
  CreateSmokeEffectAt(v12, v19, v32, v33, v34, 0, 0); /*0x6632af*/
  PlaySoundEffectAt(&v32, v12, (_DWORD *)_ESI->?, v19, 1, 0); /*0x6632c7*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)_ESI->? + 248))(_ESI->?); /*0x6632d9*/
}



// ==== 0x006632E0  RocketLocomotionClass::ComputeFloatExpression_3  this=RocketLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ComputeFloatExpression_3(RocketLocomotionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  void *vtable1; // edx
  int v6; // edx
  bool v7; // zf
  int v8; // esi
  int v9; // [esp+Ch] [ebp-Ch]

  result = (int)this; /*0x6632e0*/
  vtable1 = this->?[1].?; /*0x6632ec*/
  if ( vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6632fe*/
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200; /*0x663300*/
  }
  else
  {
    v7 = vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352); /*0x66330e*/
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1304; /*0x663310*/
    if ( !v7 ) /*0x663316*/
      v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252; /*0x663318*/
  }
  if ( this->? == dword_B04E38 /*0x66334a*/
    && this->MovingDestination[0] == dword_B04E3C
    && this->MovingDestination[1] == dword_B04E40 )
  {
    if ( *(_DWORD *)v6 ) /*0x66334c*/
    {
      this->TrailerTimer[2] = 1; /*0x663353*/
      v8 = *(_DWORD *)v6; /*0x663360*/
    }
    else
    {
      this->TrailerTimer[2] = 2; /*0x66336e*/
      v8 = *(_DWORD *)(v6 + 4); /*0x66337b*/
    }
    this->MovingDestination[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x663365*/
    this->MissionTimer[0] = v9; /*0x663388*/
    this->MissionTimer[1] = v8; /*0x66338b*/
    this->MissionTimer[2] = v8; /*0x66338e*/
    *(float *)&this->RocketLocomotionClass_field_bool_4C = *(float *)(v6 + 8) * 1.570796326794897; /*0x6633a3*/
    this->? = a2; /*0x6633aa*/
    this->MovingDestination[0] = a3; /*0x6633ac*/
    this->MovingDestination[1] = a4; /*0x6633af*/
    return a2; /*0x6633a6*/
  }
  return result; /*0x6633b2*/
}



// ==== 0x006633C0  RocketLocomotionClass::nullsub_224  this=RocketLocomotionClass  sig=csp ====
void __stdcall nullsub_224(RocketLocomotionClass *this)
{
  ; /*0x6633c0*/
}



// ==== 0x006633D0  RocketLocomotionClass::ddtor  this=RocketLocomotionClass  sig=csp ====
int __stdcall RocketLocomotionClass::ddtor(RocketLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *(IID *)a2 = g_CLSID_ShipLocomotion; /*0x6633e6*/
  a2[3] = unk_7E9ADC; /*0x663400*/
  return 0; /*0x6633dd*/
}



// ==== 0x00663410  RocketLocomotionClass::BeginMove  this=RocketLocomotionClass  sig=csp ====
int __stdcall RocketLocomotionClass::BeginMove(RocketLocomotionClass *this, int *a2)
{
  int result; // eax
  int v3; // ecx

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( this ) /*0x663426*/
    {
      *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x663428*/
      *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x66342e*/
      v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x663435*/
      this->TrailerTimer[2] = 0; /*0x66343b*/
      this->TrailerTimer[0] = v3; /*0x663442*/
      *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x663445*/
      *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}



// ==== 0x00663460  RocketLocomotionClass::SmallStub  this=RocketLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_663460(RocketLocomotionClass *this)
{
  return 3; /*0x663465*/
}



// ==== 0x00663470  JumpjetLocomotionClass::ComputePitchYaw  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputePitchYaw(JumpjetLocomotionClass *this, float *a2, int *a3)
{
  JumpjetLocomotionClass *v3; // esi
  int *v4; // edi
  void *vtable1; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float *result; // eax
  float v10; // [esp+0h] [ebp-40h]
  float v11; // [esp+0h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-34h] BYREF
  Matrix3x4 v13; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x663479*/
  v3 = this; /*0x66347e*/
  this = (JumpjetLocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v12) >> 10) /*0x6634a3*/
                                                   + 1) >> 1)
                                   & 0x1F)
                                  - 8);
  v10 = (double)(int)this * -0.1963495408493621; /*0x6634b6*/
  Matrix2D::Rotate(v13.m_Data, v10); /*0x6634b9*/
  v4 = a3; /*0x6634c7*/
  if ( *(float *)v3->__pad_50 == 0.0 ) /*0x6634d0*/
  {
LABEL_13:
    if ( v4 ) /*0x663565*/
      *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->?->?, &this) >> 10) + 1) >> 1) & 0x1F; /*0x663589*/
    goto LABEL_15; /*0x663589*/
  }
  v11 = -*(float *)v3->__pad_50; /*0x6634e0*/
  Matrix3D::RotateZ(v13.m_Data, v11); /*0x6634e3*/
  vtable1 = v3->?[1].?; /*0x6634f0*/
  if ( vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6634fe*/
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200; /*0x663500*/
  }
  else if ( vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x66350d*/
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1304; /*0x66350f*/
  }
  else
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252; /*0x663516*/
  }
  *(float *)&this = *(float *)(v6 + 12) * 1.570796326794897; /*0x663526*/
  if ( v4 ) /*0x66352a*/
  {
    if ( *(float *)(v6 + 8) * 1.570796326794897 == *(float *)v3->__pad_50 ) /*0x66353d*/
    {
      v7 = *v4; /*0x66353f*/
      LOBYTE(v7) = *v4 | 0x20; /*0x663541*/
      *v4 = v7; /*0x663543*/
    }
    else if ( *(float *)v3->__pad_50 == *(float *)&this ) /*0x663553*/
    {
      v8 = *v4; /*0x663555*/
      LOBYTE(v8) = *v4 | 0x40; /*0x663557*/
      *v4 = v8; /*0x663559*/
    }
    else
    {
      *v4 = -1; /*0x66355d*/
    }
    goto LABEL_13; /*0x663545*/
  }
LABEL_15:
  result = a2; /*0x66358b*/
  qmemcpy(a2, &v13, 0x30u); /*0x66359a*/
  return result; /*0x66359c*/
}



// ==== 0x006635B0  RocketLocomotionClass::StubReturn96  this=RocketLocomotionClass  sig=csp ====
int RocketLocomotionClass::StubReturn96(RocketLocomotionClass *this)
{
  return 96; /*0x6635b5*/
}



// ==== 0x006635C0  RocketLocomotionClass::ProcessMove  this=RocketLocomotionClass  sig=csp ====
_DWORD *__thiscall RocketLocomotionClass::ProcessMove(RocketLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x6635c3*/
  *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x6635c9*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    __3_YAXPAX_Z(this); /*0x6635dd*/
  return this->LocomotionClass; /*0x6635e7*/
}



// ==== 0x006635F0  sub_6635F0  this=-  sig=ida-proto ====
void sub_6635F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6635fc*/
  dbl_B052A0 = Math::Sqrt(v0 + v0); /*0x66360e*/
}



// ==== 0x00663620  sub_663620  this=-  sig=ida-proto ====
void sub_663620()
{
  dbl_B05328 = dbl_B052A0 / 60.0; /*0x66362c*/
}



// ==== 0x00663640  sub_663640  this=-  sig=ida-proto ====
void sub_663640()
{
  dbl_B05310 = 1.0 / dbl_B05328; /*0x66364c*/
}



// ==== 0x00663660  sub_663660  this=-  sig=ida-proto ====
void sub_663660()
{
  dbl_B05308 = 0.0174532925199433 * 45.0; /*0x66366c*/
}



// ==== 0x00663680  sub_663680  this=-  sig=ida-proto ====
void sub_663680()
{
  dbl_B052B0 = 0.0174532925199433 * 60.0; /*0x66368c*/
}



// ==== 0x006636A0  sub_6636A0  this=-  sig=ida-proto ====
void sub_6636A0()
{
  dbl_B04E80 = 0.0174532925199433 * 90.0; /*0x6636ac*/
}



// ==== 0x006636C0  sub_6636C0  this=-  sig=ida-proto ====
__int64 sub_6636C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04E80 - dbl_B052B0); /*0x6636d2*/
  result = Math::RoundToInt(v0 * dbl_B052A0 * 0.5); /*0x6636e6*/
  dword_B05330 = result; /*0x6636eb*/
  return result; /*0x6636f0*/
}



// ==== 0x00663700  sub_663700  this=-  sig=ida-proto ====
void sub_663700()
{
  dbl_B052B8 = Math::ArcTan((double)dword_B05330 * 0.00390625); /*0x663717*/
}



// ==== 0x00663730  sub_663730  this=-  sig=ida-proto ====
void sub_663730()
{
  dbl_B05300 = Math::ArcTan((double)(2 * dword_B05330) / dbl_B052A0); /*0x663752*/
}



// ==== 0x00663760  sub_663760  this=-  sig=ida-proto ====
__int64 sub_663760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05330) + 0.5); /*0x66377b*/
  dword_B05324 = result; /*0x663780*/
  return result; /*0x663786*/
}



// ==== 0x00663790  sub_663790  this=-  sig=ida-proto ====
int sub_663790()
{
  word_B04E98 = 0; /*0x663792*/
  word_B04E9A = 0; /*0x663798*/
  return 0; /*0x66379e*/
}



// ==== 0x006637A0  sub_6637A0  this=-  sig=ida-proto ====
int sub_6637A0()
{
  unk_B052F0 = 0; /*0x6637a2*/
  unk_B052F4 = 0; /*0x6637a7*/
  dword_B052F8 = 0; /*0x6637ac*/
  return 0; /*0x6637b1*/
}



// ==== 0x006637C0  sub_6637C0  this=-  sig=ida-proto ====
int sub_6637C0()
{
  dword_B05320 = 0; /*0x6637c5*/
  dword_B05318 = 128; /*0x6637cf*/
  dword_B0531C = 128; /*0x6637d4*/
  return 128; /*0x6637d9*/
}



// ==== 0x006637E0  sub_6637E0  this=-  sig=ida-proto ====
int sub_6637E0()
{
  dword_B04E88 = 0; /*0x6637e2*/
  dword_B04E8C = 0; /*0x6637e7*/
  dword_B04E90 = 0; /*0x6637ec*/
  dword_B04E94 = 0; /*0x6637f1*/
  return 0; /*0x6637f6*/
}



// ==== 0x00663800  sub_663800  this=-  sig=ida-proto ====
int sub_663800()
{
  unk_B052D4 = 0; /*0x663807*/
  unk_B052D8 = 0; /*0x66380c*/
  unk_B052DC = 1; /*0x663811*/
  unk_B052DD = 0; /*0x663818*/
  unk_B052D0 = (int)&DynamicVectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x66381d*/
  unk_B052E4 = 10; /*0x663827*/
  unk_B052E0 = 0; /*0x663831*/
  unk_B052E8 = 0; /*0x663836*/
  unk_B052EC = 0; /*0x66383b*/
  return atexit(sub_663850); /*0x663846*/
}



// ==== 0x00663850  sub_663850  this=-  sig=ida-proto ====
void __cdecl sub_663850()
{
  bool v0; // zf
  int v1; // eax

  if ( unk_B052E0 ) /*0x66385a*/
  {
    do /*0x66389d*/
    {
      __3_YAXPAX_Z(*(void **)unk_B052D4); /*0x663864*/
      v0 = unk_B052E0 == 0; /*0x663872*/
      if ( unk_B052E0 > 0 ) /*0x663874*/
      {
        v1 = 0; /*0x663877*/
        v0 = unk_B052E0-- == 1; /*0x663879*/
        if ( unk_B052E0 > 0 ) /*0x663881*/
        {
          do /*0x663899*/
          {
            ++v1; /*0x663889*/
            *((_DWORD *)unk_B052D4 + v1 - 1) = *((_DWORD *)unk_B052D4 + v1); /*0x66388d*/
          }
          while ( v1 < unk_B052E0 ); /*0x663899*/
          v0 = unk_B052E0 == 0; /*0x66389b*/
        }
      }
    }
    while ( !v0 ); /*0x66389d*/
  }
  unk_B052D0 = (int)&VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x6638a4*/
  if ( unk_B052D4 && unk_B052DD ) /*0x6638b8*/
  {
    __3_YAXPAX_Z(unk_B052D4); /*0x6638bb*/
    unk_B052D4 = 0; /*0x6638c3*/
  }
  unk_B052DD = 0; /*0x6638c9*/
  unk_B052D8 = 0; /*0x6638cf*/
}



// ==== 0x006638E0  ObjectClass::method_6638E0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall sub_6638E0(ObjectClass *this)
{
  this->? = 0; /*0x6638e4*/
  this->? = 0; /*0x6638e7*/
  LOBYTE(this->?) = 1; /*0x6638ea*/
  BYTE1(this->?) = 0; /*0x6638ee*/
  this->AbstractClass = &DynamicVectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x6638f1*/
  this->? = 10; /*0x6638f7*/
  this->? = 0; /*0x6638fe*/
  LOBYTE(this->?) = 0; /*0x663901*/
  this->? = 0; /*0x663904*/
  return &this->AbstractClass; /*0x663907*/
}



// ==== 0x00663910  Network::validatePacket  this=Network  sig=csp ====
void __thiscall Network::validatePacket(Network *this)
{
  char *Network_field_0x10; // eax
  char *v3; // ecx
  int v4; // eax

  while ( this->Network_field_0x10 ) /*0x663916*/
  {
    __3_YAXPAX_Z(*(void **)this->Network_field_0x4); /*0x663921*/
    Network_field_0x10 = (char *)this->Network_field_0x10; /*0x663926*/
    if ( (int)Network_field_0x10 > 0 ) /*0x66392e*/
    {
      v3 = Network_field_0x10 - 1; /*0x663930*/
      v4 = 0; /*0x663933*/
      for ( this->Network_field_0x10 = v3; /*0x66393a*/
            v4 < (int)this->Network_field_0x10;
            *((_DWORD *)this->Network_field_0x4 + v4 - 1) = *((_DWORD *)this->Network_field_0x4 + v4) )
      {
        ++v4; /*0x66393f*/
      }
    }
  }
  this->__pad_14[4] = 0; /*0x663953*/
  *(_DWORD *)&this->__pad_14[8] = 0; /*0x663956*/
}



// ==== 0x00663960  VectorClass::sub  this=VectorClass  sig=csp ====
void __thiscall sub_663960(DynamicVectorClass *this)
{
  int Count; // eax
  int v3; // ecx
  int v4; // eax
  void *Items; // eax

  while ( this->Count ) /*0x663966*/
  {
    __3_YAXPAX_Z(*(void **)this->Items); /*0x663971*/
    Count = this->Count; /*0x663976*/
    if ( Count > 0 ) /*0x66397e*/
    {
      v3 = Count - 1; /*0x663980*/
      v4 = 0; /*0x663983*/
      for ( this->Count = v3; v4 < this->Count; *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) ) /*0x66398a*/
        ++v4; /*0x66398f*/
    }
  }
  Items = (void *)this->Items; /*0x6639a3*/
  this->vtable0 = (int)&VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x6639a6*/
  if ( Items && this->IsAllocated[0] ) /*0x6639b0*/
  {
    __3_YAXPAX_Z(Items); /*0x6639b6*/
    this->Items = 0; /*0x6639be*/
  }
  this->IsAllocated[0] = 0; /*0x6639c1*/
  this->Capacity = 0; /*0x6639c4*/
}



// ==== 0x006639D0  Network::SendMasterPlayerList  this=Network  sig=csp ====
char __thiscall Network::SendMasterPlayerList(Network *this)
{
  Network *v1; // esi
  int v2; // ebp
  int Network_field_0x10; // eax
  _BYTE *v5; // ebx
  const void **Network_field_0x4; // eax
  int v7; // esi
  int v8; // eax
  int Ticks; // [esp+10h] [ebp-16Ch]
  int v11[85]; // [esp+28h] [ebp-154h] BYREF

  v1 = this; /*0x6639d8*/
  memset(v11, 0, 338); /*0x6639e6*/
  Timer::GetTicks(); /*0x6639f6*/
  v2 = 0; /*0x663a02*/
  if ( !this->__pad_14[4] ) /*0x6639ff*/
    return 0; /*0x663a0e*/
  Debug::Log(); /*0x663a1d*/
  Network_field_0x10 = (int)v1->Network_field_0x10; /*0x663a22*/
  LOBYTE(v11[0]) = 1; /*0x663a2a*/
  BYTE1(v11[0]) = Network_field_0x10; /*0x663a2f*/
  if ( Network_field_0x10 > 0 ) /*0x663a33*/
  {
    v5 = (char *)&v11[10] + 3; /*0x663a36*/
    while ( 1 ) /*0x663a40*/
    {
      Network_field_0x4 = (const void **)v1->Network_field_0x4; /*0x663a40*/
      qmemcpy(v5 - 41, Network_field_0x4[v2], 0x2Au); /*0x663a51*/
      if ( IPXManagerClass::send(&unk_A8E9C0, *(char *)Network_field_0x4[v2]) == -1 /*0x663a80*/
        && dword_A83D4C->Object_field_0x30 != (void *)**((char **)this->Network_field_0x4 + v2) )
      {
        Debug::Log(); /*0x663a89*/
        *v5 = 0; /*0x663a8e*/
        *(v5 - 2) = 0; /*0x663a94*/
      }
      ++v2; /*0x663a9c*/
      v5 += 42; /*0x663a9d*/
      if ( v2 >= (int)this->Network_field_0x10 ) /*0x663aa3*/
        break; /*0x663aa3*/
      v1 = this; /*0x663a3c*/
    }
  }
  Network::SendPacket(&unk_A8E9C0.Socket, (int)v11, 338, 1u); /*0x663ab7*/
  Debug::Log(); /*0x663ac1*/
  Ticks = Timer::GetTicks(); /*0x663ae4*/
  while ( HouseClass::GetUpgradeValue(&unk_A8E9C0) > 0 ) /*0x663af3*/
  {
    v7 = 900; /*0x663afc*/
    if ( Ticks != -1 ) /*0x663b02*/
    {
      v8 = Timer::GetTicks() - Ticks; /*0x663b0d*/
      if ( v8 >= 900 ) /*0x663b13*/
        return 1; /*0x663b13*/
      v7 = 900 - v8; /*0x663b15*/
    }
    if ( !v7 ) /*0x663b19*/
      break; /*0x663b19*/
    Event::Dispatch(); /*0x663b1b*/
  }
  return 1; /*0x663a0c*/
}



// ==== 0x00663B40  SessionClass::BuildLobbyPlayerList  this=SessionClass  sig=csp ====
int __thiscall SessionClass::BuildLobbyPlayerList(SessionClass *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ebx
  int v7; // edi
  char *v8; // eax
  int v9; // ebp
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int i; // [esp+8h] [ebp-14h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h] BYREF

  while ( this->unknown_10[0] ) /*0x663b46*/
  {
    __3_YAXPAX_Z(*(void **)this->MPGameMode[0]); /*0x663b53*/
    v2 = this->unknown_10[0]; /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( this->unknown_10[0] = v3; /*0x663b6a*/
            v4 < this->unknown_10[0];
            *(_DWORD *)(this->MPGameMode[0] + 4 * v4 - 4) = *(_DWORD *)(this->MPGameMode[0] + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = stru_A80220.?; /*0x663b85*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x663b94*/
  {
    v6 = *((_DWORD *)stru_A80220.? + i); /*0x663ba6*/
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)v6) && !*(_BYTE *)(v6 + 502) ) /*0x663bbc*/
    {
      v7 = __2_YAPAXI_Z(0x2Au); /*0x663bd8*/
      *(_BYTE *)v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy((char *)(v7 + 1), v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( dword_A8DA84 > 0 ) /*0x663bff*/
      {
        v10 = dword_A8DA78; /*0x663c01*/
        while ( *(_DWORD *)(*v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          ++v10; /*0x663c15*/
          if ( v9 >= dword_A8DA84 ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((Network *)(dword_A8DA78[v9] + 40), &v16, (int)&v17); /*0x663c34*/
        *(_DWORD *)(v7 + 33) = v17; /*0x663c3d*/
        *(_WORD *)(v7 + 37) = *(&dword_A8E2B2 + v9); /*0x663c48*/
      }
LABEL_15:
      *(_BYTE *)(v7 + 41) = 1; /*0x663c50*/
      *(_BYTE *)(v7 + 39) = dword_A8E2AC == *(_DWORD *)(v6 + 48); /*0x663c6a*/
      *(_BYTE *)(v7 + 40) = 1 << i; /*0x663c6d*/
      v11 = this->unknown_08[0]; /*0x663c70*/
      if ( this->unknown_10[0] < v11 /*0x663c93*/
        || (BYTE1(this->unknown_0C[0]) || !v11)
        && (v12 = this->unknown_14[0], v12 > 0)
        && (*(unsigned __int8 (__thiscall **)(SessionClass *, int, _DWORD))(this->GameMode[0] + 8))(this, v11 + v12, 0) )
      {
        v13 = this->unknown_10[0]; /*0x663c9a*/
        v14 = this->MPGameMode[0]; /*0x663c9d*/
        this->unknown_10[0] = v13 + 1; /*0x663ca3*/
        *(_DWORD *)(v14 + 4 * v13) = v7; /*0x663ca6*/
      }
    }
    result = i + 1; /*0x663cb3*/
  }
  return result; /*0x663cc3*/
}



// ==== 0x00663CD0  ObjectClass::method_663CD0  this=ObjectClass  sig=csp ====
char __thiscall sub_663CD0(ObjectClass *this, _BYTE *a2)
{
  Network *v2; // edi
  char v5; // bl
  int uniqueId; // ecx
  int v7; // eax
  _DWORD *vtable1; // esi
  _DWORD *i; // edx
  int v10; // [esp+8h] [ebp-8h] BYREF

  v2 = (Network *)a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( Network::IsBroadcastAddr((Network *)a2) ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  v5 = 0; /*0x663d0c*/
  Network::CopyAddress(v2, &a2, (int)&v10); /*0x663d0e*/
  uniqueId = this->?; /*0x663d13*/
  v7 = 0; /*0x663d16*/
  if ( uniqueId > 0 ) /*0x663d1a*/
  {
    vtable1 = this->?; /*0x663d1c*/
    for ( i = vtable1; v10 != *(_DWORD *)(*i + 33); ++i ) /*0x663d23*/
    {
      if ( ++v7 >= uniqueId ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(_BYTE *)(vtable1[v7] + 40); /*0x663d43*/
  }
  return v5; /*0x663cdf*/
}



// ==== 0x00663D60  Factory::GetLinkedIndex  this=DynamicVector  sig=csp ====
int __thiscall Factory::GetLinkedIndex(Factory *this, int a2)
{
  int result; // eax
  void *v3; // edx
  char **v4; // esi
  char **i; // ecx

  if ( a2 == -1 ) /*0x663d68*/
  {
    LOBYTE(result) = -1; /*0x663d6a*/
  }
  else
  {
    v3 = this->field_10; /*0x663d70*/
    result = 0; /*0x663d73*/
    if ( (int)v3 <= 0 ) /*0x663d79*/
      goto LABEL_9; /*0x663d79*/
    v4 = (char **)this->field_4; /*0x663d7b*/
    for ( i = v4; a2 != **i; ++i ) /*0x663d7e*/
    {
      if ( ++result >= (int)v3 ) /*0x663d8f*/
      {
        LOBYTE(result) = -1; /*0x663d93*/
        return result; /*0x663d96*/
      }
    }
    result = (int)v4[result]; /*0x663d99*/
    LOBYTE(result) = *(_BYTE *)(result + 40); /*0x663d9c*/
    if ( !(_BYTE)result ) /*0x663da1*/
LABEL_9:
      LOBYTE(result) = -1; /*0x663da3*/
  }
  return result; /*0x663d6c*/
}



// ==== 0x00663DB0  ObjectClass::LaunchMultiplayerHost  this=DynamicVector  sig=csp ====
bool __thiscall LaunchMultiplayerHost(bool *this, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // eax
  Network *v5; // esi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  NetworkID *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned __int8 v12; // [esp+4h] [ebp-584h] BYREF
  unsigned __int8 v13; // [esp+5h] [ebp-583h]
  unsigned __int8 v14; // [esp+6h] [ebp-582h]
  unsigned __int8 v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  int Ticks; // [esp+10h] [ebp-578h]
  int v18; // [esp+14h] [ebp-574h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  Waypoint v23; // [esp+28h] [ebp-560h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v25[1024]; // [esp+188h] [ebp-400h] BYREF

  Ticks = Timer::GetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  Waypoint::InitInvalid(&v23); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA((LPSTARTUPINFOA)&v23.__pad_0[28]); /*0x663de9*/
  if ( !(*(int (__thiscall **)(_DWORD *))(*dword_887628 + 72))(dword_887628) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2 ) /*0x663e15*/
  {
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *a2, a2[1], a2[2], a2[3]); /*0x663f0e*/
    if ( *dword_A8DA78 == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    Network::CopyAddress((Network *)(*dword_A8DA78 + 40), &v20, (int)&v12); /*0x663f31*/
    v6 = a2[2]; /*0x663f39*/
    v7 = *a2; /*0x663f3c*/
    v13 = a2[1]; /*0x663f3e*/
    v14 = v6; /*0x663f42*/
    v12 = v7; /*0x663f4a*/
    v15 = a2[3]; /*0x663f5e*/
    NetworkID::Assign(&qword_A8DBB0, &v20, (int)&v12, 0); /*0x663f62*/
    Network::SetPort((Network *)&qword_A8DBB0, *(_WORD *)(*dword_A8DA78 + 40)); /*0x663f78*/
    dword_A8DBBC = *(_WORD *)(*dword_A8DA78 + 40); /*0x663f88*/
    v8 = (NetworkID *)(*dword_A8DA78 + 40); /*0x663f91*/
    qword_A8DBA4 = *v8; /*0x663f96*/
    dword_A8DBAC = *(_DWORD *)v8[1].__pad_0; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !dword_A8DA84 ) /*0x663e22*/
  {
    v4 = (unsigned __int8 *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*dword_887628 + 76))(dword_887628, 0); /*0x663e2d*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *v4, v4[1], v4[2], v4[3]); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (Network *)(*dword_A8DA78 + 40); /*0x663e69*/
  if ( *dword_A8DA78 != -40 ) /*0x663e6c*/
  {
    Network::CopyAddress(v5, &v20, (int)&v12); /*0x663e7e*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", v12, v13, v14, v15); /*0x663ebb*/
    qword_A8DBB0 = *(NetworkID *)&v5->Network_field_0x0; /*0x663ec5*/
    dword_A8DBB8 = v5->Network_field_0x8; /*0x663ed6*/
    dword_A8DBBC = 0; /*0x663edc*/
LABEL_10:
    Network::FormatAddress((Network *)&qword_A8DBB0, 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
LABEL_11:
  if ( CreateProcessA( /*0x663fed*/
         ApplicationName,
         CommandLine,
         0,
         0,
         0,
         0x200u,
         0,
         0,
         (LPSTARTUPINFOA)&v23.__pad_0[28],
         (LPPROCESS_INFORMATION)&v23.__pad_0[12]) )
  {
    this->q01C = *(_DWORD *)&v23.__pad_0[12]; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    Ticks = Timer::GetTicks(); /*0x664053*/
    v18 = v16; /*0x664057*/
    v19 = 1800; /*0x66405b*/
    v10 = 0; /*0x66405f*/
    while ( 1 ) /*0x664067*/
    {
      if ( Ticks != -1 ) /*0x66406c*/
      {
        v11 = Timer::GetTicks() - Ticks; /*0x664077*/
        if ( v11 >= v9 ) /*0x66407d*/
          return v10 != 0; /*0x66407d*/
        v9 -= v11; /*0x66407f*/
      }
      if ( !v9 ) /*0x664083*/
        break; /*0x664083*/
      Event::Dispatch(); /*0x664085*/
      if ( Network::SendPacketThunk2((Network *)&unk_A8E9C0, (int)v25, (int)v22, (int)&v23, (int)v21) && v25[0] == 4 ) /*0x6640b7*/
      {
        v10 = 1; /*0x6640be*/
        Debug::Log(); /*0x6640c3*/
        this->q018 = 1; /*0x6640cb*/
        return v10 != 0; /*0x6640cb*/
      }
      v9 = v19; /*0x664063*/
    }
    return v10 != 0; /*0x6640cf*/
  }
  else
  {
    GetLastError(); /*0x663ffa*/
    Debug::Log(); /*0x664006*/
    return 0; /*0x664012*/
  }
}



// ==== 0x006640E0  Network::ProcessAddressChange  this=Network  sig=csp ====
wchar_t *Network::ProcessAddressChange(Network *this)
{
  wchar_t *result; // eax
  char v2; // si
  char *inited; // eax
  _WORD v4[5]; // [esp+2h] [ebp-9Ah] BYREF
  int v5; // [esp+Ch] [ebp-90h] BYREF
  Waypoint v6; // [esp+10h] [ebp-8Ch] BYREF

  Waypoint::InitInvalid((Waypoint *)&v6.__pad_0[12]); /*0x6640ea*/
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6640ef*/
  if ( *(int *)&stru_A8EB00.?[416] > 0 ) /*0x6640f6*/
  {
    for ( result = (wchar_t *)Network::SendPacketThunk2( /*0x66411c*/
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.__pad_0[12],
                                (int)v4);
          result;
          result = (wchar_t *)Network::SendPacketThunk2(
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.__pad_0[12],
                                (int)v4) )
    {
      if ( (_BYTE)dword_B04E9C == 5 ) /*0x664132*/
      {
        Debug::Log(); /*0x664151*/
        v2 = BYTE1(dword_B04E9C); /*0x66415e*/
        *(_DWORD *)&v4[1] = *(int *)((char *)&dword_B04E9C + 2); /*0x664169*/
        v4[3] = 0; /*0x664174*/
        Waypoint::InitInvalid(&v6); /*0x664179*/
        NetworkID::Assign((NetworkID *)&v6, &v6.__pad_0[24], (int)&v4[1], 0); /*0x66418e*/
        inited = Network::initConnection(&v6.__pad_0[28], (int)dword_A83D4C->Object_field_0x30, &v6, v2); /*0x6641a7*/
        if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6641b6*/
        {
          qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, inited, 0x6Fu); /*0x6641d2*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6641df*/
          dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6641f6*/
          ++stru_A80220.lineTrailer; /*0x6641fc*/
        }
      }
      else
      {
        Debug::Log(); /*0x66413f*/
      }
    }
  }
  return result; /*0x66422a*/
}



// ==== 0x00664240  NetworkManager::SetPlayerAddress  this=NetworkManager  sig=csp ====
int __thiscall NetworkManager::SetPlayerAddress(NetworkManager *this, int a2, _DWORD *a3)
{
  int v4; // edx
  int result; // eax
  int NetworkManager_field_0x04; // esi
  char **i; // ecx
  int v8; // edx
  int v9; // [esp+Ch] [ebp-8h] BYREF

  Network::CopyAddress((Network *)a3, &a3, (int)&v9); /*0x664256*/
  v4 = this->q004; /*0x66425b*/
  result = 0; /*0x66425e*/
  if ( v4 > 0 ) /*0x664262*/
  {
    NetworkManager_field_0x04 = this->NetworkManager_field_0x04; /*0x664264*/
    for ( i = (char **)NetworkManager_field_0x04; **i != a2; ++i ) /*0x66426b*/
    {
      if ( ++result >= v4 ) /*0x66427c*/
        return result; /*0x66427c*/
    }
    v8 = *(_DWORD *)(NetworkManager_field_0x04 + 4 * result); /*0x664287*/
    result = v9; /*0x66428a*/
    *(_DWORD *)(v8 + 33) = v9; /*0x66428e*/
  }
  return result; /*0x66427e*/
}



// ==== 0x006642A0  Network::processAcknowledgment  this=Network  sig=csp ====
char *__thiscall Network::processAcknowledgment(Network *this, void *a2)
{
  int v3; // esi
  int v5; // [esp+Ch] [ebp-10h] BYREF
  __int16 v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h] BYREF

  if ( (byte_B052A8 & 1) == 0 ) /*0x6642b2*/
  {
    byte_B052A8 |= 1u; /*0x6642bd*/
    Waypoint::InitInvalid(&stru_B052C0); /*0x6642c3*/
    atexit(nullsub_33); /*0x6642cd*/
  }
  v5 = 0; /*0x6642db*/
  v6 = 0; /*0x6642e5*/
  Struct::Copy6Bytes(stru_B052C0.__pad_0, (int)&v5); /*0x6642ea*/
  Network::SetPort((Network *)&stru_B052C0, 0); /*0x6642f6*/
  v3 = 0; /*0x6642fe*/
  if ( (int)this->Network_field_0x10 > 0 ) /*0x664302*/
  {
    while ( _strcmpi((char *)(*((_DWORD *)this->Network_field_0x4 + v3) + 1), (char *)a2) ) /*0x66431b*/
    {
      if ( ++v3 >= (int)this->Network_field_0x10 ) /*0x664323*/
        return (char *)&stru_B052C0; /*0x664330*/
    }
    v7 = *(_DWORD *)(*((_DWORD *)this->Network_field_0x4 + v3) + 33); /*0x664346*/
    Struct::Copy6Bytes(stru_B052C0.__pad_0, (int)&v7); /*0x66434a*/
    Network::SetPort((Network *)&stru_B052C0, *(_WORD *)(*((_DWORD *)this->Network_field_0x4 + v3) + 37)); /*0x66435f*/
  }
  return (char *)&stru_B052C0; /*0x664325*/
}



// ==== 0x00664380  nullsub_33  this=-  sig=ida-proto ====
void __cdecl nullsub_33()
{
  ; /*0x664380*/
}



// ==== 0x00664390  Network::handleDisconnect  this=Network  sig=csp ====
__int16 __thiscall Network::handleDisconnect(Network *this, void *a2)
{
  int v3; // esi

  v3 = 0; /*0x664395*/
  if ( (int)this->Network_field_0x10 <= 0 ) /*0x66439c*/
    return 0; /*0x6643bf*/
  while ( _strcmpi((char *)(*((_DWORD *)this->Network_field_0x4 + v3) + 1), (char *)a2) ) /*0x6643b5*/
  {
    if ( ++v3 >= (int)this->Network_field_0x10 ) /*0x6643bd*/
      return 0; /*0x6643bd*/
  }
  return *(_WORD *)(*((_DWORD *)this->Network_field_0x4 + v3) + 37); /*0x6643bf*/
}



// ==== 0x006643E0  Network::checkTimeout  this=Network  sig=csp ====
int __thiscall Network::checkTimeout(Network *this, int a2)
{
  if ( a2 >= (int)this->Network_field_0x10 ) /*0x6643e9*/
    return 0; /*0x6643f5*/
  else
    return *((_DWORD *)this->Network_field_0x4 + a2) + 1; /*0x6643f1*/
}



// ==== 0x00664400  Network::reconnect  this=Network  sig=csp ====
char *__thiscall Network::reconnect(Network *this, int a2, __int16 a3)
{
  char *Network_field_0x10; // edx
  char *result; // eax
  char **Network_field_0x4; // esi
  char **i; // ecx

  Network_field_0x10 = (char *)this->Network_field_0x10; /*0x664400*/
  result = 0; /*0x664404*/
  if ( (int)Network_field_0x10 > 0 ) /*0x66440a*/
  {
    Network_field_0x4 = (char **)this->Network_field_0x4; /*0x66440c*/
    for ( i = Network_field_0x4; **i != a2; ++i ) /*0x664413*/
    {
      if ( (int)++result >= (int)Network_field_0x10 ) /*0x664424*/
        return result; /*0x664424*/
    }
    result = Network_field_0x4[(_DWORD)result]; /*0x66442c*/
    *(_WORD *)(result + 37) = a3; /*0x664434*/
  }
  return result; /*0x664426*/
}



// ==== 0x00664440  EventClass::validateEventType  this=EventClass  sig=csp ====
int __thiscall EventClass::validateEventType(EventClass *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  char *v8; // eax
  Network *v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 v14[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = dword_A8E2CC; /*0x664444*/
  if ( dword_A8E2CC == -1 ) /*0x664451*/
  {
    v3 = *(_DWORD *)this->__pad_10; /*0x664453*/
    v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        v5 = *(char **)(this->EventClass_field_0x4 + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < *(_DWORD *)this->__pad_10 ); /*0x66447c*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_10; /*0x664480*/
    v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        v8 = *(char **)(this->EventClass_field_0x4 + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < *(_DWORD *)this->__pad_10 ); /*0x6644a7*/
    }
  }
  if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0) /*0x6644d2*/
    || v1 == -1
    || v1 != dword_A83D4C->Object_field_0x30
    || dword_A8DA84 <= 2 )
  {
    return v1; /*0x664526*/
  }
  v9 = 0; /*0x6644d4*/
  v10 = 0; /*0x6644d6*/
  if ( dword_A8DA84 > 0 ) /*0x6644db*/
  {
    v11 = dword_A8DA78; /*0x6644dd*/
    while ( *(_DWORD *)(*v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      ++v11; /*0x6644eb*/
      if ( v10 >= dword_A8DA84 ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (Network *)(dword_A8DA78[v10] + 40); /*0x6644fd*/
  }
LABEL_23:
  Network::CopyAddress(v9, &v13, (int)v14); /*0x664500*/
  LaunchMultiplayerHost((bool *)this, v14); /*0x664516*/
  return v1; /*0x66451c*/
}



// ==== 0x00664530  NetworkEventQueueClass::WaitForResponse  this=NetworkEventQueueClass  sig=csp ====
int __thiscall NetworkEventQueueClass::WaitForResponse(NetworkEventQueueClass *this)
{
  int result; // eax
  int v3; // esi
  int Ticks; // [esp+8h] [ebp-16Ch]
  _BYTE v5[340]; // [esp+20h] [ebp-154h] BYREF

  memset(v5, 0, 338); /*0x664545*/
  result = Timer::GetTicks(); /*0x664551*/
  LOBYTE(result) = *((_BYTE *)this + 24); /*0x66455a*/
  if ( (_BYTE)result ) /*0x664567*/
  {
    result = *((_DWORD *)this + 7); /*0x66456d*/
    if ( result ) /*0x664572*/
    {
      v5[0] = 3; /*0x664589*/
      Network::SendPacket(&unk_A8E9C0.Socket, (int)v5, 338, 1u); /*0x66458e*/
      Ticks = Timer::GetTicks(); /*0x6645ae*/
      for ( result = HouseClass::GetUpgradeValue(&unk_A8E9C0); result > 0; result = HouseClass::GetUpgradeValue(&unk_A8E9C0) ) /*0x6645bd*/
      {
        result = Ticks; /*0x6645c2*/
        v3 = 900; /*0x6645c6*/
        if ( Ticks != -1 ) /*0x6645cc*/
        {
          result = Timer::GetTicks() - Ticks; /*0x6645d7*/
          if ( result >= 900 ) /*0x6645dd*/
            return result; /*0x6645dd*/
          v3 = 900 - result; /*0x6645df*/
        }
        if ( !v3 ) /*0x6645e3*/
          break; /*0x6645e3*/
        Event::Dispatch(); /*0x6645e5*/
      }
    }
  }
  return result; /*0x6645f8*/
}



// ==== 0x00664610  Process::WaitForExit  this=Process  sig=csp ====
bool __thiscall Process::WaitForExit(Process *this, DWORD dwMilliseconds, char a3)
{
  const HANDLE *v3; // esi
  BOOL v5; // eax

  v3 = (const HANDLE *)(this + 7); /*0x664614*/
  Debug::Log(); /*0x66461d*/
  if ( !*v3 ) /*0x664629*/
    return 1; /*0x664629*/
  if ( WaitForMultipleObjects(1u, v3, 0, dwMilliseconds) != 258 ) /*0x664644*/
  {
    Debug::Log(); /*0x6646a7*/
    *v3 = 0; /*0x6646af*/
    return 1; /*0x6646b5*/
  }
  if ( !a3 ) /*0x66464c*/
    return 0; /*0x66464e*/
  Debug::Log(); /*0x66465a*/
  v5 = TerminateProcess(*v3, 0); /*0x664667*/
  if ( v5 ) /*0x664671*/
  {
    *v3 = 0; /*0x664694*/
    return v5; /*0x66469b*/
  }
  else
  {
    GetLastError(); /*0x664674*/
    Debug::Log(); /*0x664680*/
    return 0; /*0x66468c*/
  }
}



// ==== 0x006646C0  NetworkManager::RemovePlayer  this=DynamicVector  sig=csp ====
char __thiscall NetworkManager::RemovePlayer(int this, int a2)
{
  int i; // esi
  char *v3; // eax
  char result; // al
  _BYTE v5[340]; // [esp+Ch] [ebp-154h] BYREF

  memset(v5, 0, 338); /*0x6646d8*/
  for ( i = 0; i < *(_DWORD *)(this + 16); ++i ) /*0x6646eb*/
  {
    v3 = *(char **)(*(_DWORD *)(this + 4) + 4 * i); /*0x6646f0*/
    if ( *v3 == a2 ) /*0x6646f8*/
    {
      v3[41] = 0; /*0x6646fa*/
      v3[39] = 0; /*0x6646fd*/
    }
  }
  result = *(_BYTE *)(this + 24); /*0x664708*/
  if ( result ) /*0x664710*/
  {
    v5[0] = 2; /*0x664717*/
    v5[1] = a2; /*0x66471c*/
    Debug::Log(); /*0x664720*/
    return Network::SendPacket((int)unk_A8E9C0, (int)v5, 338, 1u); /*0x664739*/
  }
  return result; /*0x66470b*/
}



// ==== 0x00664750  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_664750(ObjectClass *this, char a2)
{
  char result; // al
  _BYTE v3[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v3, 0, 338); /*0x664764*/
  result = this->?; /*0x66476c*/
  if ( result ) /*0x664772*/
  {
    v3[0] = 6; /*0x664780*/
    v3[1] = a2; /*0x664785*/
    Debug::Log(); /*0x664789*/
    return Network::SendPacket(&unk_A8E9C0.Socket, (int)v3, 338, 1u); /*0x6647a2*/
  }
  return result; /*0x66476f*/
}



// ==== 0x006647B0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall RocketLocomotionClass_17::ddtor(_DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6647b6*/
  this->m_10 = 0; /*0x6647b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6647c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6647c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6647ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6647d1*/
  this->m_8 = 0; /*0x6647d4*/
}



// ==== 0x006647E0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::BeginMove  this=DynamicVector  sig=csp ====
unsigned int __thiscall RocketLocomotionClass_17::BeginMove(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6647e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/
}



// ==== 0x00664800  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::UpdateMovement  this=VectorClass  sig=csp ====
int __thiscall RocketLocomotionClass_17::UpdateMovement(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x66480a*/
}



// ==== 0x00664810  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall RocketLocomotionClass_17::AddRef(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x664812*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( m_8 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x664825*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x66482b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= m_8 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/
}



// ==== 0x00664850  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall RocketLocomotionClass_17::SetCapacity(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
    LOBYTE(this->m_C) = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x66487e*/
    LOBYTE(this->m_C) = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x664895*/
      {
        m_8 = this->m_8; /*0x66489c*/
        if ( a2 < m_8 ) /*0x6648a1*/
          m_8 = a2; /*0x6648a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( BYTE1(this->m_C) ) /*0x6648bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6648c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6648ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6648d7*/
      this->m_8 = a2; /*0x6648df*/
      BYTE1(this->m_C) = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }
}



// ==== 0x00664900  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall RocketLocomotionClass_17::Destroy(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x66490d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x664913*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x66491b*/
  }
  BYTE1(this->m_C) = 0; /*0x66491e*/
  this->m_8 = 0; /*0x664921*/
}



// ==== 0x00664930  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall RocketLocomotionClass_17::IndexOf(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x664930*/
    return 0; /*0x664938*/
  m_8 = this->m_8; /*0x66493e*/
  result = 0; /*0x664941*/
  if ( m_8 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= m_8 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/
}



// ==== 0x00664970  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall RocketLocomotionClass_17::PointerToIndex(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x664970*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x664985*/
  else
    return 0; /*0x664977*/
}



// ==== 0x00664990  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::Release  this=DynamicVector  sig=csp ====
char __thiscall RocketLocomotionClass_17::Release(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6649ba*/
    LOBYTE(this->m_C) = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6649c8*/
    {
      m_8 = this->m_8; /*0x6649cf*/
      if ( a2 < m_8 ) /*0x6649d4*/
        m_8 = a2; /*0x6649d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( BYTE1(this->m_C) ) /*0x6649ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6649f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x664a01*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x664a0a*/
    this->m_8 = a2; /*0x664a12*/
    BYTE1(this->m_C) = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x664a1e*/
  }
  v7 = this->m_8; /*0x664a21*/
  if ( v7 < this->m_10 ) /*0x664a29*/
    this->m_10 = v7; /*0x664a2b*/
  return 1; /*0x664a2e*/
}



// ==== 0x00664A40  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::Launch  this=DynamicVector  sig=csp ====
int __thiscall RocketLocomotionClass_17::Launch(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( m_10 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= m_10 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/
}



// ==== 0x00664A70  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall RocketLocomotionClass_17::Constructor(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x664a73*/
  *(_DWORD *)this->__pad_0 = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664a76*/
  if ( v3 && BYTE1(this->m_C) ) /*0x664a80*/
  {
    __3_YAXPAX_Z(v3); /*0x664a88*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x664a90*/
  }
  BYTE1(this->m_C) = 0; /*0x664a9b*/
  this->m_8 = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    __3_YAXPAX_Z(this); /*0x664aab*/
  return this->__pad_0; /*0x664ab5*/
}



// ==== 0x00664AC0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RocketLocomotionClass_17::QueryInterface(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x664ac3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664ac6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x664ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x664ad8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x664ae0*/
  }
  BYTE1(this->m_C) = 0; /*0x664aeb*/
  this->m_8 = 0; /*0x664af1*/
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    __3_YAXPAX_Z(this); /*0x664afb*/
  return this->__pad_0; /*0x664b05*/
}



// ==== 0x00664B10  sub_664B10  this=-  sig=ida-proto ====
void sub_664B10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x664b1c*/
  dbl_B05358 = Math::Sqrt(v0 + v0); /*0x664b2e*/
}



// ==== 0x00664B40  sub_664B40  this=-  sig=ida-proto ====
void sub_664B40()
{
  dbl_B053A8 = dbl_B05358 / 60.0; /*0x664b4c*/
}



// ==== 0x00664B60  sub_664B60  this=-  sig=ida-proto ====
void sub_664B60()
{
  dbl_B05390 = 1.0 / dbl_B053A8; /*0x664b6c*/
}



// ==== 0x00664B80  sub_664B80  this=-  sig=ida-proto ====
void sub_664B80()
{
  dbl_B05388 = 0.0174532925199433 * 45.0; /*0x664b8c*/
}



// ==== 0x00664BA0  sub_664BA0  this=-  sig=ida-proto ====
void sub_664BA0()
{
  dbl_B05360 = 0.0174532925199433 * 60.0; /*0x664bac*/
}



// ==== 0x00664BC0  sub_664BC0  this=-  sig=ida-proto ====
void sub_664BC0()
{
  dbl_B05338 = 0.0174532925199433 * 90.0; /*0x664bcc*/
}



// ==== 0x00664BE0  sub_664BE0  this=-  sig=ida-proto ====
__int64 sub_664BE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05338 - dbl_B05360); /*0x664bf2*/
  result = Math::RoundToInt(v0 * dbl_B05358 * 0.5); /*0x664c06*/
  dword_B053B0 = result; /*0x664c0b*/
  return result; /*0x664c10*/
}



// ==== 0x00664C20  sub_664C20  this=-  sig=ida-proto ====
void sub_664C20()
{
  dbl_B05368 = Math::ArcTan((double)dword_B053B0 * 0.00390625); /*0x664c37*/
}



// ==== 0x00664C50  sub_664C50  this=-  sig=ida-proto ====
void sub_664C50()
{
  dbl_B05380 = Math::ArcTan((double)(2 * dword_B053B0) / dbl_B05358); /*0x664c72*/
}



// ==== 0x00664C80  sub_664C80  this=-  sig=ida-proto ====
__int64 sub_664C80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B053B0) + 0.5); /*0x664c9b*/
  dword_B053A4 = result; /*0x664ca0*/
  return result; /*0x664ca6*/
}



// ==== 0x00664CB0  sub_664CB0  this=-  sig=ida-proto ====
int sub_664CB0()
{
  word_B05350 = 0; /*0x664cb2*/
  word_B05352 = 0; /*0x664cb8*/
  return 0; /*0x664cbe*/
}



// ==== 0x00664CC0  sub_664CC0  this=-  sig=ida-proto ====
int sub_664CC0()
{
  dword_B05370 = 0; /*0x664cc2*/
  dword_B05374 = 0; /*0x664cc7*/
  dword_B05378 = 0; /*0x664ccc*/
  return 0; /*0x664cd1*/
}



// ==== 0x00664CE0  sub_664CE0  this=-  sig=ida-proto ====
int sub_664CE0()
{
  dword_B053A0 = 0; /*0x664ce5*/
  dword_B05398 = 128; /*0x664cef*/
  dword_B0539C = 128; /*0x664cf4*/
  return 128; /*0x664cf9*/
}



// ==== 0x00664D00  sub_664D00  this=-  sig=ida-proto ====
int sub_664D00()
{
  dword_B05340 = 0; /*0x664d02*/
  dword_B05344 = 0; /*0x664d07*/
  dword_B05348 = 0; /*0x664d0c*/
  dword_B0534C = 0; /*0x664d11*/
  return 0; /*0x664d16*/
}



// ==== 0x00664D20  HouseClass::InitTypeVectors  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::InitTypeVectors(HouseClass *this, int a2)
{
  int *p_repairStationsCapacity; // edi

  p_repairStationsCapacity = &this->repairStationsCapacity; /*0x664d26*/
  DynamicVector::Constructor_VoxelAnim((DynamicVector *)&this->repairStationsCapacity, 0, 0); /*0x664d2d*/
  *p_repairStationsCapacity = (int)&TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x664d32*/
  DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&this->rofMultiplier[1], 0, 0); /*0x664d44*/
  this->rofMultiplier[1] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x664d49*/
  DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)this->buildDelay, 0, 0); /*0x664d5b*/
  this->buildDelay[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x664d60*/
  DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)this->__pad_13C, 0, 0); /*0x664d72*/
  *(_DWORD *)this->__pad_13C = &TypeList<AnimTypeClass const *>::`vftable'; /*0x664d77*/
  DynamicVectorClass::AnimTy... [19775 chars total]



// ==== 0x00665650  RulesClass::RulesClass  this=RulesClass  sig=csp ====
int __thiscall RulesClass::RulesClass(RulesClass *this)
{
  float *p_RadarEventColorSpeed; // ebp
  char *v3; // ecx
  char *v4; // ebp
  int v5; // edx
  int v6; // eax
  char *v7; // edi

  this->DetailMinFrameRateNormal = 15; /*0x665665*/
  this->DetailMinFrameRateMovie = 20; /*0x66566b*/
  this->DetailBufferZoneWidth = 5; /*0x665672*/
  this->AmmoCrateDamage = 100; /*0x665675*/
  this->LargeVisceroid = 0; /*0x66567c*/
  this->SmallVisceroid = 0; /*0x66567f*/
  this->AttackingAircraftSightRange = 5; /*0x665682*/
  this->TunnelSpeed[0] = 0; /*0x665685*/
  this->TunnelSpeed[1] = 1072693248; /*0x665688*/
  this->TiberiumHeal[0] = 286331153; /*0x66568f*/
  this->TiberiumHeal[1] = 1066471697; /*0x66569b*/
  this->SelfHealInfantryFrames = 1000; /*0x6656a7*/
  this->SelfHealInfantryAmount = 1; /*0x6656aa*/
  this->SelfHealUnitFrames = 1000; /*0x6656ad*/
  this->SelfHealUnitAmount = 1; /*0x6656b0*/
  this->FreeMCV = 0; /*0x6656b3*/
  this->BerzerkAllowed = 0; /*0x6656b6*/
  this->PoseDir = ... [67687 chars total]



// ==== 0x00667A30  RulesClass::DTOR  this=RulesClass  sig=csp ====
int __thiscall RulesClass::DTOR(RulesClass *this)
{
  char *v2; // ecx
  void *Harvester; // eax
  void *Production; // eax
  void *v5; // eax
  UnitTypeClass *UnitCrateType; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *AirstripLimit; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *IronCurtainDuration; // eax
  void *IvanDamage; // eax
  WarheadTypeClass *MutateExplosionWarhead; // eax
  InfantryTypeClass *Technician; // eax
  void *SpyPowerBlackout; // eax
  void *ChronoDistanceFactor; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *ChuteSound; // eax
  void *v30; // eax
  void *RevealTriggerRadius; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *v35; // eax
  void *v36; // eax
  void *v37; // eax
  void *v38; // eax
  void *v39; // eax
  void *v40; // eax
  vo... [28941 chars total]



// ==== 0x006686C0  ObjectClass::ResetRules  this=ObjectClass  sig=csp ====
int __thiscall ResetRules(ObjectClass *this)
{
  void *v2; // edi
  char *v3; // ebp
  char *v4; // eax
  int v5; // ecx
  char *v6; // esi
  int v7; // esi
  int KeyCount; // ebx
  unsigned __int8 *StringByIndex; // eax
  int Coord; // eax
  char *v11; // edx
  char v12; // cl
  ObjectClass *v14; // [esp+40h] [ebp-E0h]
  unsigned __int8 v15[2]; // [esp+50h] [ebp-D0h] BYREF
  char v16; // [esp+52h] [ebp-CEh]
  RulesClass *v17; // [esp+54h] [ebp-CCh]
  char v18[4]; // [esp+58h] [ebp-C8h] BYREF
  CCINIClass v19; // [esp+5Ch] [ebp-C4h] BYREF
  CCFileClass v20; // [esp+B4h] [ebp-6Ch] BYREF
  char v21[12]; // [esp+10Ch] [ebp-14h] BYREF
  int v22; // [esp+118h] [ebp-8h]
  INIClass *v23; // [esp+124h] [ebp+4h]

  v17 = (RulesClass *)this; /*0x6686d3*/
  while ( *(_DWORD *)stru_B054D0.__tail_10 ) /*0x6686d7*/
  {
    v2 = **(void ***)&stru_B054D0.m_1[3]; /*0x6686de*/
    if ( **(_DWORD **)&stru_B054D0.m_1[3] ) /*0x6686de*/
    {
      ColorScheme::Destructor(**(ColorScheme ***)&stru_B054D0.m_1[3]); /*0x6686e6*/
      __3_YAXPAX_Z(v2); /*0x6686ec*/
    }
  }
  *(_DWORD *)stru_B054D0.__tail_10 = 0; /*0x668702*/
  VectorClass_ptr_ColorScheme::Remove(&stru_B054D0); /*0x66870c*/
  System_Reset(v14); /*0x668711*/
  while ( *(_DWORD *)&stru_A8EB00.?[204] ) /*0x66871d*/
  {
    if ( **(_DWORD **)&stru_A8EB00.?[192] ) /*0x668725*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A8EB00.?[192] + 32))( /*0x66872f*/
        **(_DWORD **)&stru_A8EB00.?[192],
        1);
  }
  while ( dword_A8E8E0 ) /*0x668742*/
  {
    if ( *(_DWORD *)dword_A8E8D4 ) /*0x668749*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E8D4 + 32))(*(_DWORD *)dword_A8E8D4, 1); /*0x668753*/
  }
  while ( *(_DWORD *)&FootClass_Array.? ) /*0x668766*/
  {
    if ( *(_DWORD *)FootClass_Array.?[5] ) /*0x66876d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)FootClass_Array.?[5] + 32))(*(_DWORD *)FootClass_Array.?[5], 1); /*0x668777*/
  }
  while ( *(_DWORD *)&stru_A83D50.__pad_3C[4] ) /*0x66878a*/
  {
    if ( **(_DWORD **)stru_A83D50.__pad_34 ) /*0x668791*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)stru_A83D50.__pad_34 + 32))( /*0x66879b*/
        **(_DWORD **)stru_A83D50.__pad_34,
        1);
  }
  while ( *(_DWORD *)&stru_A8EB00.?[68] ) /*0x6687ae*/
  {
    if ( **(_DWORD **)&stru_A8EB00.?[56] ) /*0x6687b5*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A8EB00.?[56] + 32))(**(_DWORD **)&stru_A8EB00.?[56], 1); /*0x6687bf*/
  }
  while ( dword_A8E328 ) /*0x6687d2*/
  {
    if ( *(_DWORD *)dword_A8E31C ) /*0x6687d9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E31C + 32))(*(_DWORD *)dword_A8E31C, 1); /*0x6687e3*/
  }
  while ( dword_A8E358 ) /*0x6687f6*/
  {
    if ( *(_DWORD *)dword_A8E34C ) /*0x6687fd*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E34C + 32))(*(_DWORD *)dword_A8E34C, 1); /*0x668807*/
  }
  while ( dword_A83CF0 ) /*0x66881a*/
  {
    if ( *(_DWORD *)dword_A83CE4 ) /*0x668821*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83CE4 + 32))(*(_DWORD *)dword_A83CE4, 1); /*0x66882b*/
  }
  while ( dword_A8B228 ) /*0x66883e*/
  {
    if ( *(_DWORD *)dword_A8B21C ) /*0x668845*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8B21C + 32))(*(_DWORD *)dword_A8B21C, 1); /*0x66884f*/
  }
  while ( dword_A83C90 ) /*0x668862*/
  {
    if ( *(_DWORD *)dword_A83C84 ) /*0x668869*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C84 + 32))(*(_DWORD *)dword_A83C84, 1); /*0x668873*/
  }
  while ( dword_A83C78 ) /*0x668886*/
  {
    if ( *(_DWORD *)dword_A83C6C ) /*0x66888d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C6C + 32))(*(_DWORD *)dword_A83C6C, 1); /*0x668897*/
  }
  while ( dword_A8E340 ) /*0x6688aa*/
  {
    if ( *(_DWORD *)dword_A8E334 ) /*0x6688b1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E334 + 32))(*(_DWORD *)dword_A8E334, 1); /*0x6688bb*/
  }
  while ( FootClass_Array.?[0] ) /*0x6688ce*/
  {
    if ( *(_DWORD *)FootClass_Array.?[3] ) /*0x6688d5*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)FootClass_Array.?[3] + 32))(*(_DWORD *)FootClass_Array.?[3], 1); /*0x6688df*/
  }
  while ( g_WeaponTypePool ) /*0x6688f2*/
  {
    if ( *(_DWORD *)g_WeaponTypeConfig ) /*0x6688f9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_WeaponTypeConfig + 32))(*(_DWORD *)g_WeaponTypeConfig, 1); /*0x668903*/
  }
  while ( g_WarheadTypePool ) /*0x668916*/
  {
    if ( *(_DWORD *)dword_8874C4 ) /*0x66891d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8874C4 + 32))(*(_DWORD *)dword_8874C4, 1); /*0x668927*/
  }
  while ( stru_A8EB00.ObjectTypeClass[14] ) /*0x66893a*/
  {
    if ( *(_DWORD *)stru_A8EB00.ObjectTypeClass[11] ) /*0x668941*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)stru_A8EB00.ObjectTypeClass[11] + 32))( /*0x66894b*/
        *(_DWORD *)stru_A8EB00.ObjectTypeClass[11],
        1);
  }
  while ( *(_DWORD *)&stru_A83D50.__pad_3C[28] ) /*0x66895e*/
  {
    if ( **(_DWORD **)&stru_A83D50.__pad_3C[16] ) /*0x668965*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A83D50.__pad_3C[16] + 32))( /*0x66896f*/
        **(_DWORD **)&stru_A83D50.__pad_3C[16],
        1);
  }
  while ( stru_A83D50.SuperClass_field_0x28 ) /*0x668982*/
  {
    if ( **(_DWORD **)&stru_A83D50.__pad_14[8] ) /*0x668989*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A83D50.__pad_14[8] + 32))( /*0x668993*/
        **(_DWORD **)&stru_A83D50.__pad_14[8],
        1);
  }
  while ( stru_A80220.? ) /*0x6689a6*/
  {
    if ( *(_DWORD *)stru_A80220.? ) /*0x6689ad*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)stru_A80220.? + 32))(*(_DWORD *)stru_A80220.?, 1); /*0x6689b7*/
  }
  while ( dword_A83CA8 ) /*0x6689ca*/
  {
    if ( *(_DWORD *)dword_A83C9C ) /*0x6689d1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C9C + 32))(*(_DWORD *)dword_A83C9C, 1); /*0x6689db*/
  }
  if ( INIClass::BinarySearchSection((int)v23, (unsigned __int8 *)aMaximums) ) /*0x6689f6*/
    *((_DWORD *)this + 1332) = INIClass::ReadInt_Overwrite( /*0x668a1e*/
                                 (bool *)v23->__pad_0,
                                 (unsigned __int8 *)aMaximums,
                                 aPlayers,
                                 *((_DWORD *)this + 1332));
  RulesClass::Addition((RulesClass *)this); /*0x668a27*/
  v3 = (char *)this + 6260; /*0x668a2e*/
  v15[0] = 0; /*0x668a34*/
  v15[1] = 0; /*0x668a39*/
  v4 = v3; /*0x668a43*/
  v5 = 16; /*0x668a45*/
  do /*0x668a56*/
  {
    v6 = v4; /*0x668a4a*/
    v4 += 3; /*0x668a4c*/
    --v5; /*0x668a4f*/
    *(_WORD *)v6 = 0; /*0x668a50*/
    v6[2] = 0; /*0x668a53*/
  }
  while ( v5 ); /*0x668a56*/
  CCFileClass::Construct(&v20, aLangruleIni); /*0x668a61*/
  v7 = 0; /*0x668a66*/
  if ( (unsigned __int8)CCFileClass::Open(&v20, 0) == 1 ) /*0x668a74*/
  {
    v19.?[0] = 0; /*0x668a7e*/
    v19.?[1] = 0; /*0x668a82*/
    GenericNode::Constructor((GenericNode *)v19.?); /*0x668a86*/
    GenericNode::Constructor((GenericNode *)&v19.?); /*0x668a8f*/
    LinkedList::Prepend((LinkedList *)v19.?, (int)&v19.?); /*0x668aa5*/
    v19.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x668ab6*/
    memset(&v19.?[8], 0, 13); /*0x668abe*/
    memset(&v19.?, 0, 9); /*0x668acf*/
    *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x668adc*/
    if ( CCINIClass::Load(&v19, (int)&v20, 1, 0) > 1 ) /*0x668aec*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x668af2*/
      goto LABEL_99; /*0x668af7*/
    }
    RulesClass::Addition(v17); /*0x668b05*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x668b0e*/
  }
  if ( INIClass::BinarySearchSection((int)v23, (unsigned __int8 *)aColoradd) ) /*0x668b1b*/
  {
    KeyCount = INIClass::GetKeyCount(v23->__pad_0, (unsigned __int8 *)aColoradd); /*0x668b37*/
    if ( KeyCount > 0 ) /*0x668b3b*/
    {
      do /*0x668b8a*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v23->__pad_0, (unsigned __int8 *)aColoradd, v7); /*0x668b47*/
        v15[0] = 0; /*0x668b60*/
        v15[1] = 0; /*0x668b65*/
        v16 = 0; /*0x668b6a*/
        Coord = INIClass::GetCoord(v23, (int)v18, (unsigned __int8 *)aColoradd, StringByIndex, v15); /*0x668b6f*/
        v11 = v3; /*0x668b76*/
        ++v7; /*0x668b78*/
        v3 += 3; /*0x668b79*/
        v12 = *(_BYTE *)(Coord + 2); /*0x668b81*/
        *(_WORD *)v11 = *(_WORD *)Coord; /*0x668b84*/
        v11[2] = v12; /*0x668b87*/
      }
      while ( v7 < KeyCount ); /*0x668b8a*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 && dword_A8B23C ) /*0x668b9e*/
  {
    GameConfig::Constructor((GameConfig *)dword_A8B23C); /*0x668ba0*/
    RulesClass::Addition(v17); /*0x668baa*/
  }
LABEL_99:
  *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x668baf*/
  v22 = 0; /*0x668bbe*/
  Vector::Clear((int)v21); /*0x668bc5*/
  *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x668bce*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x668bdb*/
}



// ==== 0x00668BF0  RulesClass::Addition  this=RulesClass  sig=csp ====
int __thiscall RulesClass::Addition(RulesClass *this)
{
  INIClass *v1; // esi
  int v3; // ebx
  char *v4; // ebp
  unsigned __int8 *v5; // eax
  int Coord; // eax
  char *v7; // edx
  char v8; // cl
  bool v9; // cc
  int v10; // ebp
  int i; // ebx
  unsigned __int8 *v12; // eax
  int v13; // ebp
  int j; // ebx
  unsigned __int8 *v15; // eax
  int v16; // ebp
  int k; // ebx
  unsigned __int8 *v18; // eax
  int v19; // ebp
  int m; // ebx
  unsigned __int8 *v21; // eax
  int v22; // ebp
  int n; // ebx
  unsigned __int8 *v24; // eax
  int v25; // ebp
  int ii; // ebx
  unsigned __int8 *v27; // eax
  char v29[4]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int8 *StringByIndex; // [esp+14h] [ebp-28h]
  int KeyCount; // [esp+18h] [ebp-24h]
  char Destination[32]; // [esp+1Ch] [ebp-20h] BYREF
  Palette v33; // [esp+40h] [ebp+4h] BYREF

  v1 = *(INIClass **)v33.m_Colors; /*0x668bf6*/
  RulesClass::ReadColors(this); /*0x668bfe*/
  if ( INIEntry::Exists((INIEntry *)v1, (unsigned __int8 *)aColoradd, 0) ) /*0x668c0d*/
  {
    v3 = 0; /*0x668c24*/
    KeyCount = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aColoradd); /*0x668c26*/
    if ( KeyCount > 0 ) /*0x668c2c*/
    {
      v4 = (char *)this + 6260; /*0x668c2e*/
      do /*0x668c89*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aColoradd, v3); /*0x668c4d*/
        v5 = Palette::SixBitTo16Bit(&v33, 0, 0, 0); /*0x668c51*/
        Coord = INIClass::GetCoord(v1, (int)v29, (unsigned __int8 *)aColoradd, StringByIndex, v5); /*0x668c6a*/
        v7 = v4; /*0x668c71*/
        ++v3; /*0x668c73*/
        v4 += 3; /*0x668c74*/
        v8 = *(_BYTE *)(Coord + 2); /*0x668c7a*/
        *(_WORD *)v7 = *(_WORD *)Coord; /*0x668c7d*/
        v9 = v3 < KeyCount; /*0x668c84*/
        v7[2] = v8; /*0x668c86*/
      }
      while ( v9 ); /*0x668c89*/
    }
  }
  v10 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aCountries); /*0x668c98*/
  for ( i = 0; i < v10; ++i ) /*0x668c9e*/
  {
    v12 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aCountries, i); /*0x668cb6*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aCountries, v12, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668cc4*/
      WeaponTypeClass::Create(Destination); /*0x668cd1*/
  }
  RulesClass::ReadDataList(this); /*0x668cde*/
  v13 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aOverlaytypes); /*0x668cf1*/
  for ( j = 0; j < v13; ++j ) /*0x668cf7*/
  {
    v15 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aOverlaytypes, j); /*0x668d0e*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aOverlaytypes, v15, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668d1d*/
      BuildingTypeClass::FindOrCreate2(Destination); /*0x668d2a*/
  }
  v16 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aSuperweapontyp); /*0x668d42*/
  for ( k = 0; k < v16; ++k ) /*0x668d48*/
  {
    v18 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aSuperweapontyp, k); /*0x668d60*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aSuperweapontyp, v18, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668d6f*/
      WeaponTypeClass::Process(Destination); /*0x668d7c*/
  }
  v19 = INIClass::GetKeyCount(v1->__pad_0, g_INI_Key_Warheads); /*0x668d92*/
  for ( m = 0; m < v19; ++m ) /*0x668d98*/
  {
    v21 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, g_INI_Key_Warheads, m); /*0x668dae*/
    if ( INIClass::GetString(v1, g_INI_Key_Warheads, v21, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668dbb*/
      WarheadTypeClass::FindOrCreate(Destination); /*0x668dc8*/
  }
  v22 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aSmudgetypes); /*0x668de0*/
  for ( n = 0; n < v22; ++n ) /*0x668de6*/
  {
    v24 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aSmudgetypes, n); /*0x668dfd*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aSmudgetypes, v24, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668e0c*/
      FactoryClass::FindOrCreate(Destination); /*0x668e19*/
  }
  v25 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aTerraintypes); /*0x668e31*/
  for ( ii = 0; ii < v25; ++ii ) /*0x668e37*/
  {
    v27 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aTerraintypes, ii); /*0x668e4f*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aTerraintypes, v27, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668e5e*/
      TerrainTypeClass::FindOrCreate(Destination); /*0x668e6b*/
  }
  RulesClass::LoadBuildingTypes(this); /*0x668e78*/
  CCINIClass::LoadBuildingTypes((CCINIClass *)this); /*0x668e80*/
  RulesClass::readRadiation(this); /*0x668e88*/
  RulesClass::readCrateRules(this); /*0x668e90*/
  RulesClass::LoadAnimTypes(this); /*0x668e98*/
  CCINIClass::LoadUnitTypes((CCINIClass *)this); /*0x668ea0*/
  RulesClass::readColors(this); /*0x668ea8*/
  CCINIClass::ReadBuildingSettings((CCINIClass *)this); /*0x668eb0*/
  RulesClass::readDifficulty(this); /*0x668eb8*/
  Dialog::ReadMultiplayerDialogSettings((Dialog *)this); /*0x668ec0*/
  RulesClass::ReadMultiplayerDefaults(this); /*0x668ec8*/
  RulesClass::ReadPowerupsSection(this); /*0x668ed0*/
  RulesClass::LoadSpeedTypes(this); /*0x668ed8*/
  RulesClass::ReadIQSection(this); /*0x668ee0*/
  RulesClass::LoadFromINI(this); /*0x668ee8*/
  SideClass::LoadAllFromINI(v1); /*0x668ef0*/
  INIClass::ReadDifficultyModifiers(v1); /*0x668f02*/
  INIClass::ReadDifficultyModifiers(v1); /*0x668f14*/
  INIClass::ReadDifficultyModifiers(v1); /*0x668f26*/
  ReadCrateRulesINI((TechnoClass *)this); /*0x668f2e*/
  Rules::ReadCombatINI((Rules *)this); /*0x668f36*/
  RulesClass::ReadCountryList(this); /*0x668f3e*/
  RulesClass::readAudioVisual(this); /*0x668f46*/
  RulesClass::readSpecialWeapons(this); /*0x668f4e*/
  Rules::ReadMiscINI((Rules *)this); /*0x668f56*/
  RulesClass::LoadSpecialWeapons(this); /*0x668f5e*/
  SmallFunc_721D10(v1); /*0x668f65*/
  return SidebarClass::ReadButtonList((SidebarClass *)this); /*0x668f86*/
}



// ==== 0x00668FB0  RulesClass::LoadSpecialWeapons  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadSpecialWeapons(RulesClass *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // eax
  _BYTE *v5; // ebx
  _BYTE *v6; // eax
  _BYTE *v7; // ebx
  _BYTE *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  _BYTE *v15; // ebx
  _BYTE *v16; // eax
  int i; // esi
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  unsigned __int8 ***v19; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)aSpecialweapons); /*0x668fc9*/
  if ( result ) /*0x668fd5*/
  {
    v3 = *(_DWORD *)&this->__pad_C3C[848]; /*0x668fe2*/
    if ( INIClass::GetString( /*0x668fff*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aNukewarhead,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v4 = WarheadTypeClass::FindOrCreate(Destination); /*0x66900c*/
    }
    else
    {
      v4 = v3; /*0x669013*/
    }
    *(_DWORD *)&this->__pad_C3C[848] = v4; /*0x669015*/
    v5 = *(_BYTE **)&this->__pad_C3C[852]; /*0x669021*/
    if ( INIClass::GetString( /*0x66903e*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aNukeprojectile,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v6 = ObjectTypeClass::FindOrCreate(Destination); /*0x66904b*/
    }
    else
    {
      v6 = v5; /*0x669052*/
    }
    v7 = *(_BYTE **)&this->__pad_C3C[856]; /*0x669054*/
    *(_DWORD *)&this->__pad_C3C[852] = v6; /*0x669063*/
    if ( INIClass::GetString( /*0x66907c*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aNukedown,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v8 = ObjectTypeClass::FindOrCreate(Destination); /*0x669089*/
    }
    else
    {
      v8 = v7; /*0x669090*/
    }
    v9 = *(_DWORD *)&this->__pad_C3C[860]; /*0x669092*/
    *(_DWORD *)&this->__pad_C3C[856] = v8; /*0x6690a1*/
    if ( INIClass::GetString( /*0x6690bb*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aMutatewarhead,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v10 = WarheadTypeClass::FindOrCreate(Destination); /*0x6690c8*/
    }
    else
    {
      v10 = v9; /*0x6690cf*/
    }
    *(_DWORD *)&this->__pad_C3C[860] = v10; /*0x6690d1*/
    v11 = *(_DWORD *)&this->__pad_C3C[864]; /*0x6690dd*/
    if ( INIClass::GetString( /*0x6690fa*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aMutateexplosio,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v12 = WarheadTypeClass::FindOrCreate(Destination); /*0x669107*/
    }
    else
    {
      v12 = v11; /*0x66910e*/
    }
    v13 = *(_DWORD *)&this->__pad_C3C[868]; /*0x669110*/
    *(_DWORD *)&this->__pad_C3C[864] = v12; /*0x66911f*/
    if ( INIClass::GetString( /*0x669138*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aEmpulsewarhead,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v14 = WarheadTypeClass::FindOrCreate(Destination); /*0x669145*/
    }
    else
    {
      v14 = v13; /*0x66914c*/
    }
    v15 = *(_BYTE **)&this->__pad_C3C[872]; /*0x66914e*/
    *(_DWORD *)&this->__pad_C3C[868] = v14; /*0x66915d*/
    if ( INIClass::GetString( /*0x669177*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aEmpulseproject,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v16 = ObjectTypeClass::FindOrCreate(Destination); /*0x669184*/
    }
    else
    {
      v16 = v15; /*0x66918b*/
    }
    *(_DWORD *)&this->__pad_C3C[872] = v16; /*0x66918d*/
    result = g_WarheadTypePool; /*0x669193*/
    for ( i = 0; i < g_WarheadTypePool; ++i ) /*0x66919d*/
    {
      (*(void (__thiscall **)(_DWORD, unsigned __int8 ***))(**((_DWORD **)dword_8874C4 + i) + 100))( /*0x6691aa*/
        *((_DWORD *)dword_8874C4 + i),
        v19);
      result = g_WarheadTypePool; /*0x6691ad*/
    }
    LOBYTE(result) = 1; /*0x6691b8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6691c5*/
  }
  return result; /*0x6691b7*/
}



// ==== 0x006691E0  Rules::ReadMiscINI  this=RulesClass  sig=csp ====
int __thiscall Rules::ReadMiscINI(Rules *this)
{
  double v1; // st7
  int result; // eax
  int Int_Overwrite; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *m_C; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  int Index; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  int v49; // ebx
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  in... [74313 chars total]



// ==== 0x0066B900  ObjectClass::ReadCrateRulesINI  this=ObjectClass  sig=csp ====
int __thiscall ReadCrateRulesINI(TechnoClass *this)
{
  int result; // eax
  int v3; // ebx
  _DWORD *v4; // eax
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  int Index; // eax
  int v11; // edx
  int Int_Overwrite; // eax
  int v13; // ecx
  double Coord; // st7
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  int Alt; // eax
  int v19; // ecx
  int StringValue; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  double v24; // [esp-Ch] [ebp-94h]
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  int *v26; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v26, (unsigned __int8 *)aCraterules); /*0x66b919*/
  if ( result ) /*0x66b925*/
  {
    LOBYTE(this->ambientSoundController[1]) = INIClass::ReadBool_Overwrite( /*0x66b943*/
                                                v26,
                                                (unsigned __int8 *)aCraterules,
                                                aFreemcv,
                                                this->ambientSoundController[1]);
    v3 = this->animation[0]; /*0x66b94c*/
    if ( INIClass::GetString( /*0x66b969*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aWoodcrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v4 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b976*/
    }
    else
    {
      v4 = (_DWORD *)v3; /*0x66b97d*/
    }
    v5 = this->animation[1]; /*0x66b97f*/
    this->animation[0] = (int)v4; /*0x66b98e*/
    if ( INIClass::GetString( /*0x66b9a7*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aCrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v6 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b9b4*/
    }
    else
    {
      v6 = (_DWORD *)v5; /*0x66b9bb*/
    }
    v7 = this->animation[2]; /*0x66b9bd*/
    this->animation[1] = (int)v6; /*0x66b9cc*/
    if ( INIClass::GetString( /*0x66b9e6*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aWatercrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v8 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b9f3*/
    }
    else
    {
      v8 = (_DWORD *)v7; /*0x66b9fa*/
    }
    this->animation[2] = (int)v8; /*0x66b9fc*/
    v9 = *((_DWORD *)this + 454); /*0x66ba08*/
    if ( !INIClass::GetString( /*0x66ba3a*/
            (INIClass *)v26,
            (unsigned __int8 *)aCraterules,
            aHealcratesound,
            &g_INI_DefaultBuffer,
            Destination,
            128)
      || (Index = VocClass::FindIndex((VocClass *)Destination), Index == -1) )
    {
      Index = v9; /*0x66ba3c*/
    }
    v11 = *((_DWORD *)this + 1308); /*0x66ba3e*/
    *((_DWORD *)this + 454) = Index; /*0x66ba44*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v26, (unsigned __int8 *)aCraterules, aCrateminimum, v11); /*0x66ba58*/
    v13 = *((_DWORD *)this + 1309); /*0x66ba5d*/
    *((_DWORD *)this + 1308) = Int_Overwrite; /*0x66ba63*/
    *((_DWORD *)this + 1309) = INIClass::ReadInt_Overwrite( /*0x66ba7d*/
                                 (bool *)v26,
                                 (unsigned __int8 *)aCraterules,
                                 aCratemaximum,
                                 v13);
    Coord = INIClass::ReadCoord(v26, aCraterules, aCrateradius, *((_DWORD *)this + 1483)); /*0x66ba98*/
    v15 = *((_DWORD *)this + 1439); /*0x66ba9d*/
    *((_DWORD *)this + 1483) = v16; /*0x66baa3*/
    HIDWORD(v24) = v15; /*0x66bab5*/
    LODWORD(v24) = *((_DWORD *)this + 1438); /*0x66bab6*/
    INIClass::ReadDouble_Overwrite((double *)v26, (unsigned __int8 *)aCraterules, aCrateregen, v24); /*0x66babf*/
    *((double *)this + 719) = Coord; /*0x66bac4*/
    v17 = *((_DWORD *)this + 1106); /*0x66bacf*/
    if ( INIClass::GetString( /*0x66baec*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aUnitcratetype,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      Alt = BuildingTypeClass::FindOrCreateAlt(Destination); /*0x66baf9*/
    }
    else
    {
      Alt = v17; /*0x66bb00*/
    }
    v19 = *((_DWORD *)this + 1104); /*0x66bb02*/
    *((_DWORD *)this + 1106) = Alt; /*0x66bb08*/
    *((_DWORD *)this + 1104) = INIClass::ReadInt_Overwrite( /*0x66bb22*/
                                 (bool *)v26,
                                 (unsigned __int8 *)aCraterules,
                                 aSolocratemoney,
                                 v19);
    StringValue = INIClass::ReadStringValue( /*0x66bb3d*/
                    (INIClass *)v26,
                    (unsigned __int8 *)aCraterules,
                    aSilvercrate,
                    *((_DWORD *)this + 1305));
    v21 = *((_DWORD *)this + 1306); /*0x66bb42*/
    *((_DWORD *)this + 1305) = StringValue; /*0x66bb48*/
    v22 = INIClass::ReadStringValue((INIClass *)v26, (unsigned __int8 *)aCraterules, aWoodcrate, v21); /*0x66bb5c*/
    v23 = *((_DWORD *)this + 1307); /*0x66bb61*/
    *((_DWORD *)this + 1306) = v22; /*0x66bb67*/
    result = INIClass::ReadStringValue((INIClass *)v26, (unsigned __int8 *)aCraterules, aWatercrate, v23); /*0x66bb7c*/
    *((_DWORD *)this + 1307) = result; /*0x66bb82*/
    LOBYTE(result) = 1; /*0x66bb89*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66bb96*/
  }
  return result; /*0x66bb88*/
}



// ==== 0x0066BBB0  Rules::ReadCombatINI  this=RulesClass  sig=csp ====
int __thiscall Rules::ReadCombatINI(Rules *this)
{
  double v1; // st7
  int result; // eax
  int Int_Overwrite; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  char *j; // eax
  int Count; // ecx
  int v11; // edx
  void *v12; // eax
  char *k; // eax
  int v14; // edx
  int v15; // ecx
  void *v16; // eax
  char *m; // eax
  int v18; // ecx
  int v19; // edx
  void *v20; // eax
  char *n; // eax
  int v22; // ecx
  int v23; // edx
  void *v24; // eax
  char *ii; // eax
  int v26; // edx
  int v27; // ecx
  void *v28; // eax
  int m_C; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  char Bool_Overwrite; // al
  int v50; // ebx
  i... [43328 chars total]



// ==== 0x0066CF70  RulesClass::ReadCountryList  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadCountryList(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int OreTwinkleChance; // edx
  int v5; // eax
  AnimTypeClass *OreTwinkle; // ecx
  int v7; // eax
  int v8; // edx
  double v9; // rax
  double v11; // rax
  int Coord; // eax
  int v15; // ebx
  double v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp+8h] [ebp-84h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
  INIClass *v19; // [esp+90h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v19, aRadiation); /*0x66cf89*/
  if ( result ) /*0x66cf95*/
  {
    *(_DWORD *)&this->LineTrailColorOverride[1] = INIClass::ReadInt_Overwrite( /*0x66cfb6*/
                                                    (bool *)v19->__pad_0,
                                                    aRadiation,
                                                    aRaddurationmul,
                                                    *(_DWORD *)&this->LineTrailColorOverride[1]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66cfd1*/
                      (bool *)v19->__pad_0,
                      aRadiation,
                      aRadapplication,
                      *(_DWORD *)&this->ChronoBeamColor[2]);
    OreTwinkleChance = this->OreTwinkleChance; /*0x66cfd6*/
    *(_DWORD *)&this->ChronoBeamColor[2] = Int_Overwrite; /*0x66cfdc*/
    v5 = INIClass::ReadInt_Overwrite((bool *)v19->__pad_0, aRadiation, aRadlevelmax, OreTwinkleChance); /*0x66cff0*/
    OreTwinkle = this->OreTwinkle; /*0x66cff5*/
    this->OreTwinkleChance = v5; /*0x66cffb*/
    this->OreTwinkle = (AnimTypeClass *)INIClass::ReadInt_Overwrite( /*0x66d015*/
                                          (bool *)v19->__pad_0,
                                          aRadiation,
                                          aRadleveldelay,
                                          (int)OreTwinkle);
    v7 = INIClass::ReadInt_Overwrite((bool *)v19->__pad_0, aRadiation, aRadlightdelay, this->ColorAdd[0]); /*0x66d030*/
    v8 = this->ColorAdd[2]; /*0x66d035*/
    this->ColorAdd[0] = v7; /*0x66d03b*/
    HIDWORD(v16) = v8; /*0x66d04d*/
    LODWORD(v16) = this->ColorAdd[1]; /*0x66d04e*/
    INIClass::ReadDouble_Overwrite((double *)v19->__pad_0, aRadiation, aRadlevelfactor, v16); /*0x66d057*/
    v9 = *(double *)&this->ColorAdd[3]; /*0x66d062*/
    __asm { fstp qword ptr [esi+1818h] } /*0x66d068*/
    *(double *)&this->ColorAdd[1] = _RT1; /*0x66d068*/
    INIClass::ReadDouble_Overwrite((double *)v19->__pad_0, aRadiation, aRadlightfactor, v9); /*0x66d07e*/
    v11 = *(double *)&this->ColorAdd[5]; /*0x66d089*/
    __asm { fstp qword ptr [esi+1820h] } /*0x66d08f*/
    *(double *)&this->ColorAdd[3] = _RT1; /*0x66d08f*/
    INIClass::ReadDouble_Overwrite((double *)v19->__pad_0, aRadiation, aRadtintfactor, v11); /*0x66d0a5*/
    __asm { fstp qword ptr [esi+1828h] } /*0x66d0aa*/
    *(double *)&this->ColorAdd[5] = _RT1; /*0x66d0aa*/
    Coord = INIClass::GetCoord(v19, (int)&v17, aRadiation, aRadcolor, (unsigned __int8 *)&this->ColorAdd[7]); /*0x66d0ca*/
    LOWORD(this->ColorAdd[7]) = *(_WORD *)Coord; /*0x66d0d2*/
    BYTE2(this->ColorAdd[7]) = *(_BYTE *)(Coord + 2); /*0x66d0e1*/
    v15 = this->ColorAdd[8]; /*0x66d0ea*/
    if ( INIClass::GetString(v19, aRadiation, aRadsitewarhead, &g_INI_DefaultBuffer, Destination, 128) ) /*0x66d0fe*/
    {
      result = WarheadTypeClass::FindOrCreate(Destination); /*0x66d10b*/
      this->ColorAdd[8] = result; /*0x66d111*/
    }
    else
    {
      result = v15; /*0x66d124*/
      this->ColorAdd[8] = v15; /*0x66d127*/
    }
    LOBYTE(result) = 1; /*0x66d118*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d13b*/
  }
  return result; /*0x66d117*/
}



// ==== 0x0066D150  RulesClass::readAudioVisual  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAudioVisual(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  int BerserkColor; // eax
  int IronCurtainColor; // ecx
  double v9; // [esp-8h] [ebp-10h]
  bool *v10; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v10, (unsigned __int8 *)aElevationmodel); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v10,
                      (unsigned __int8 *)aElevationmodel,
                      aElevationincre,
                      this->ColorAdd[9]);
    v4 = this->ColorAdd[11]; /*0x66d188*/
    this->ColorAdd[9] = Int_Overwrite; /*0x66d18e*/
    HIDWORD(v9) = this->LaserTargetColor; /*0x66d1a0*/
    LODWORD(v9) = v4; /*0x66d1a1*/
    INIClass::ReadDouble_Overwrite((double *)v10, (unsigned __int8 *)aElevationmodel, aElevationincre_0, v9); /*0x66d1aa*/
    BerserkColor = this->BerserkColor; /*0x66d1af*/
    IronCurtainColor = this->IronCurtainColor; /*0x66d1b5*/
    __asm { fstp qword ptr [esi+1840h] } /*0x66d1bb*/
    *(double *)&this->ColorAdd[11] = _RT1; /*0x66d1bb*/
    result = INIClass::ReadDouble_Overwrite( /*0x66d1d1*/
               (double *)v10,
               (unsigned __int8 *)aElevationmodel,
               aElevationbonus,
               COERCE_DOUBLE(__PAIR64__(BerserkColor, IronCurtainColor)));
    __asm { fstp qword ptr [esi+1848h] } /*0x66d1d6*/
    *(double *)&this->IronCurtainColor = _RT1; /*0x66d1d6*/
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}



// ==== 0x0066D1F0  RulesClass::readSpecialWeapons  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readSpecialWeapons(RulesClass *this)
{
  int result; // eax
  char Bool_Overwrite; // al
  float FallBackCoefficient; // ecx
  double v6; // [esp-8h] [ebp-10h]
  int *v7; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)aWallmodel); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v7,
                       (unsigned __int8 *)aWallmodel,
                       aAlliedwalltran,
                       this->ForceShieldColor);
    FallBackCoefficient = this->FallBackCoefficient; /*0x66d228*/
    LOBYTE(this->ForceShieldColor) = Bool_Overwrite; /*0x66d22e*/
    HIDWORD(v6) = this->CrewCount; /*0x66d240*/
    *(float *)&v6 = FallBackCoefficient; /*0x66d241*/
    result = INIClass::ReadDouble_Overwrite((double *)v7, (unsigned __int8 *)aWallmodel, aWallpenetrator, v6); /*0x66d24a*/
    __asm { fstp qword ptr [esi+1858h] } /*0x66d24f*/
    *(double *)&this->FallBackCoefficient = _RT1; /*0x66d24f*/
    LOBYTE(result) = 1; /*0x66d256*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d25d*/
  }
  return result; /*0x66d255*/
}



// ==== 0x0066D270  INIClass::ReadDifficultyModifiers  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadDifficultyModifiers(INIClass *this)
{
  int v1; // edx
  int v2; // edi
  int result; // eax
  unsigned __int8 *v14; // [esp+10h] [ebp+4h]

  v2 = v1; /*0x66d277*/
  result = INIClass::BinarySearchSection((int)this, v14); /*0x66d27c*/
  LOBYTE(result) = result != 0; /*0x66d283*/
  if ( (_BYTE)result ) /*0x66d288*/
  {
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aFirepower_0, 1.0); /*0x66d29d*/
    __asm { fstp qword ptr [edi] } /*0x66d2a2*/
    *(double *)v2 = _RT1; /*0x66d2a2*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aGroundspeed, 1.0); /*0x66d2b3*/
    __asm { fstp qword ptr [edi+8] } /*0x66d2b8*/
    *(double *)(v2 + 8) = _RT1; /*0x66d2b8*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aAirspeed, 1.0); /*0x66d2ca*/
    __asm { fstp qword ptr [edi+10h] } /*0x66d2cf*/
    *(double *)(v2 + 16) = _RT1; /*0x66d2cf*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, g_INI_Key_Armor, 1.0); /*0x66d2e1*/
    __asm { fstp qword ptr [edi+18h] } /*0x66d2e6*/
    *(double *)(v2 + 24) = _RT1; /*0x66d2e6*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, &off_825478, 1.0); /*0x66d2f8*/
    __asm { fstp qword ptr [edi+20h] } /*0x66d2fd*/
    *(double *)(v2 + 32) = _RT1; /*0x66d2fd*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, g_INI_Key_Cost, 1.0); /*0x66d30f*/
    __asm { fstp qword ptr [edi+28h] } /*0x66d314*/
    *(double *)(v2 + 40) = _RT1; /*0x66d314*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aRepairdelay, 0.02); /*0x66d329*/
    __asm { fstp qword ptr [edi+38h] } /*0x66d32e*/
    *(double *)(v2 + 56) = _RT1; /*0x66d32e*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aBuilddelay, 0.03); /*0x66d343*/
    __asm { fstp qword ptr [edi+40h] } /*0x66d348*/
    *(double *)(v2 + 64) = _RT1; /*0x66d348*/
    *(_BYTE *)(v2 + 72) = INIClass::ReadBool_Overwrite((int *)this->__pad_0, v14, aBuildslowdown, 0); /*0x66d35c*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aBuildtime, 1.0); /*0x66d36c*/
    __asm { fstp qword ptr [edi+30h] } /*0x66d371*/
    *(double *)(v2 + 48) = _RT1; /*0x66d371*/
    *(_BYTE *)(v2 + 73) = INIClass::ReadBool_Overwrite((int *)this->__pad_0, v14, aDestroywalls, 1); /*0x66d385*/
    result = INIClass::ReadBool_Overwrite((int *)this->__pad_0, v14, aContentscan, 0); /*0x66d390*/
    *(_BYTE *)(v2 + 74) = result; /*0x66d395*/
  }
  return result; /*0x66d398*/
}



// ==== 0x0066D3A0  RulesClass::ReadColors  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadColors(RulesClass *this)
{
  char *v1; // ebp
  int result; // eax
  int v3; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // esi
  int Color; // eax
  unsigned __int8 v7[4]; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF
  INIEntry *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = (char *)v9; /*0x66d3a9*/
  result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)aColors); /*0x66d3b0*/
  if ( result ) /*0x66d3bc*/
  {
    result = INIClass::GetKeyCount(v1, (unsigned __int8 *)aColors); /*0x66d3cd*/
    v3 = result; /*0x66d3d2*/
    for ( i = 0; i < v3; ++i ) /*0x66d3d8*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aColors, i); /*0x66d3f4*/
      v7[0] = 0; /*0x66d404*/
      v7[1] = 0; /*0x66d409*/
      v7[2] = 0; /*0x66d40e*/
      Color = INIEntry::ReadColor((INIEntry *)v1, (int)&v8, (unsigned __int8 *)aColors, StringByIndex, v7); /*0x66d413*/
      LOWORD(v9) = *(_WORD *)Color; /*0x66d41b*/
      BYTE2(v9) = *(_BYTE *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 53); /*0x66d45b*/
    }
    LOBYTE(result) = 1; /*0x66d46c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d475*/
  }
  return result; /*0x66d46e*/
}



// ==== 0x0066D480  RulesClass::ReadColorAdd  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadColorAdd(RulesClass *this)
{
  INIClass *v1; // edi
  int result; // eax
  int v4; // esi
  char *v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int Coord; // eax
  char *v8; // edx
  char v9; // cl
  bool v10; // cc
  char v11[4]; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]
  INIClass *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)aColoradd); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aColoradd); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)this + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aColoradd, v4); /*0x66d4cd*/
        LOWORD(v13) = 0; /*0x66d4e6*/
        BYTE2(v13) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord(v1, (int)v11, (unsigned __int8 *)aColoradd, StringByIndex, (unsigned __int8 *)&v13); /*0x66d4f2*/
        v8 = v5; /*0x66d4f9*/
        ++v4; /*0x66d4fb*/
        v5 += 3; /*0x66d4fc*/
        v9 = *(_BYTE *)(Coord + 2); /*0x66d502*/
        *(_WORD *)v8 = *(_WORD *)Coord; /*0x66d505*/
        result = v12; /*0x66d508*/
        v10 = v4 < v12; /*0x66d50c*/
        v8[2] = v9; /*0x66d50e*/
      }
      while ( v10 ); /*0x66d511*/
    }
    LOBYTE(result) = 1; /*0x66d516*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d521*/
  }
  return result; /*0x66d514*/
}



// ==== 0x0066D530  RulesClass::LoadFromINI  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadFromINI(RulesClass *this)
{
  double v1; // st7
  int result; // eax
  char *i; // eax
  UnitTypeClass *LargeVisceroid; // ebx
  UnitTypeClass *v6; // eax
  _DWORD *MaxWaypointPathLength; // ebx
  _DWORD *v8; // eax
  char *j; // eax
  ParticleSystemTypeClass *BarrelParticle; // ebx
  ParticleSystemTypeClass *v11; // eax
  AnimTypeClass *InfantryMutate; // ebx
  AnimTypeClass *v13; // eax
  AnimTypeClass *InfantryBrute; // ebx
  AnimTypeClass *v15; // eax
  char *k; // eax
  char *m; // eax
  char *n; // eax
  char *ii; // eax
  _DWORD *v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // ebx
  _DWORD *v23; // eax
  char *jj; // eax
  char *kk; // eax
  _DWORD *v26; // ebx
  _DWORD *v27; // eax
  int v28; // ebx
  int v29; // eax
  _DWORD *v30; // ebx
  _DWORD *v31; // eax
  _DWORD *v32; // ebx
  _DWORD *v33; // eax
  int Int_Overwrite; // eax
  _DWORD *v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // ebx
  _DWORD *v38; // eax
  _DWORD *v39; // ebx
  _D... [168778 chars total]



// ==== 0x00660000  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int Render_Render_660000(ObjectClass *this)
{
  int result; // eax
  int i; // edi
  int v3; // ecx
  int v4; // esi
  int v5; // eax

  result = stru_B04DA8.LoadGame_field_0x10; /*0x660000*/
  for ( i = 0; i < stru_B04DA8.LoadGame_field_0x10; ++i ) /*0x660006*/
  {
    v3 = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x660012*/
    v4 = *(_DWORD *)(v3 + 48); /*0x660015*/
    v5 = *(_DWORD *)(v3 + 56); /*0x660018*/
    if ( v4 != -1 ) /*0x66001e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x66002a*/
        goto LABEL_6; /*0x66002a*/
      v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x66002c*/
    }
    if ( v5 > 0 ) /*0x660030*/
      goto LABEL_7; /*0x660030*/
LABEL_6:
    if ( *(_BYTE *)(v3 + 60) ) /*0x660032*/
LABEL_7:
      RenderGradientTrapezoid((float *)v3); /*0x660039*/
    result = stru_B04DA8.LoadGame_field_0x10; /*0x66003e*/
  }
  return result; /*0x660049*/
}



// ==== 0x00660050  ObjectClass::RenderGradientTrapezoid  this=ObjectClass  sig=csp ====
char __thiscall RenderGradientTrapezoid(float *this)
{
  __int16 v2; // ax
  char v3; // cl
  _BYTE *v4; // eax
  _BYTE *v5; // ecx
  _BYTE *v6; // edx
  int v7; // eax
  __int16 v8; // ax
  char v9; // cl
  _BYTE *v10; // eax
  _BYTE *v11; // ecx
  _BYTE *v12; // edx
  int *v13; // eax
  int v14; // edx
  int v15; // esi
  int *v16; // eax
  int v17; // ecx
  int v18; // ebx
  signed int v19; // ecx
  int v20; // eax
  int *v21; // ebx
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  int *v26; // edi
  int v27; // esi
  _DWORD *v28; // esi
  int v29; // edi
  _DWORD *v30; // eax
  int *v31; // eax
  int *v33; // [esp+4h] [ebp-A4h]
  const RECT *v34; // [esp+8h] [ebp-A0h]
  const RECT *v35; // [esp+Ch] [ebp-9Ch]
  int v36; // [esp+18h] [ebp-90h] BYREF
  __int16 v37; // [esp+1Ch] [ebp-8Ch] BYREF
  char v38; // [esp+1Eh] [ebp-8Ah]
  __int16 v39; // [esp+20h] [ebp-88h] BYREF
  char v40; // [esp+22h] [ebp-86h]
  _DWORD v41[2]; // [esp+24h] [ebp-84h] BYREF
  char v42[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  float v43; // [esp+30h] [ebp-78h] BYREF
  int v44; // [esp+34h] [ebp-74h] BYREF
  struct tagRECT rcDst; // [esp+38h] [ebp-70h] BYREF
  _DWORD v46[2]; // [esp+48h] [ebp-60h] BYREF
  int v47; // [esp+50h] [ebp-58h] BYREF
  _DWORD v48[7]; // [esp+54h] [ebp-54h] BYREF
  int v49; // [esp+70h] [ebp-38h] BYREF
  int v50[4]; // [esp+78h] [ebp-30h] BYREF
  int v51[4]; // [esp+88h] [ebp-20h] BYREF

  switch ( *(_DWORD *)this ) /*0x660070*/
  {
    case 0: /*0x660070*/
    case 3: /*0x660070*/
    case 4: /*0x660070*/
      LOWORD(v36) = 255; /*0x660077*/
      v2 = 255; /*0x660081*/
      v3 = -1; /*0x660086*/
      break; /*0x660089*/
    case 1: /*0x660070*/
    case 2: /*0x660070*/
    case 0xB: /*0x660070*/
    case 0xC: /*0x660070*/
      v4 = Palette::SixBitTo16Bit(&v36, 255, 255, 0); /*0x66009b*/
      goto LABEL_6; /*0x66009b*/
    case 5: /*0x660070*/
      v5 = Palette::SixBitTo16Bit(v42, 0, 255, 255); /*0x6600b2*/
      v2 = *(_WORD *)v5; /*0x6600b4*/
      v3 = v5[2]; /*0x6600b7*/
      break; /*0x6600ba*/
    default:
      v4 = Palette::SixBitTo16Bit(v41, 0, 0, 0); /*0x6600c6*/
LABEL_6:
      v6 = v4; /*0x6600cb*/
      v2 = *(_WORD *)v4; /*0x6600cd*/
      v3 = v6[2]; /*0x6600d0*/
      break; /*0x6600d0*/
  }
  v37 = v2; /*0x6600d3*/
  v7 = *(_DWORD *)this; /*0x6600d8*/
  v38 = v3; /*0x6600dd*/
  switch ( v7 ) /*0x6600eb*/
  {
    case 0: /*0x6600eb*/
    case 3: /*0x6600eb*/
    case 4: /*0x6600eb*/
      LOWORD(v36) = 128; /*0x6600f2*/
      v8 = 128; /*0x6600fc*/
      v9 = 0x80; /*0x660101*/
      break; /*0x660103*/
    case 1: /*0x6600eb*/
    case 2: /*0x6600eb*/
    case 11: /*0x6600eb*/
    case 12: /*0x6600eb*/
      v10 = Palette::SixBitTo16Bit(v41, 128, 128, 0); /*0x660115*/
      goto LABEL_12; /*0x660115*/
    case 5: /*0x6600eb*/
      v11 = Palette::SixBitTo16Bit(v42, 0, 128, 128); /*0x66012c*/
      v8 = *(_WORD *)v11; /*0x66012e*/
      v9 = v11[2]; /*0x660131*/
      break; /*0x660134*/
    default:
      v10 = Palette::SixBitTo16Bit(&v36, 0, 0, 0); /*0x660140*/
LABEL_12:
      v12 = v10; /*0x660145*/
      v8 = *(_WORD *)v10; /*0x660147*/
      v9 = v12[2]; /*0x66014a*/
      break; /*0x66014a*/
  }
  v39 = v8; /*0x66014d*/
  v40 = v9; /*0x660158*/
  if ( v37 || (LOBYTE(v13) = v38) != 0 ) /*0x66016c*/
  {
    Render_Render_660730(this, &v47); /*0x660179*/
    v14 = this->vtable2; /*0x66017e*/
    v15 = this->vtable3; /*0x660181*/
    v16 = &v47; /*0x660184*/
    v17 = 4; /*0x660188*/
    do /*0x6601a0*/
    {
      v18 = *v16; /*0x66018d*/
      v16 += 2; /*0x66018f*/
      *(v16 - 2) = v14 + v18; /*0x660194*/
      --v17; /*0x66019c*/
      *(v16 - 1) += v15; /*0x66019d*/
    }
    while ( v17 ); /*0x6601a0*/
    v44 = this->nextArrayIndex; /*0x6601a9*/
    v19 = abs32(v48[0] - v48[2]); /*0x6601bc*/
    v41[0] = abs32(v47 - v48[1]); /*0x6601cb*/
    if ( v41[0] <= v19 ) /*0x6601cf*/
      v41[0] = v19; /*0x6601d1*/
    v20 = 0; /*0x6601da*/
    v21 = &v47; /*0x6601dc*/
    v43 = (this->vtable4 + this->vtable4) * 0.7071067811865475 / (double)v41[0] * this->referenceCount; /*0x6601ed*/
    do /*0x660242*/
    {
      v22 = v20 + 1; /*0x6601fb*/
      v23 = *(_DWORD *)dword_880A04; /*0x6601ff*/
      v24 = (*(int (__stdcall **)(struct tagRECT *, int *, _DWORD *, __int16 *, __int16 *, float *, int *))(*(_DWORD *)dword_880A04 + 120))( /*0x66022a*/
              &rcDst,
              v21,
              &v48[2 * ((v20 + 1) % 4) - 1],
              &v37,
              &v39,
              &v43,
              &v44);
      (*(void (__thiscall **)(int, int))(v23 + 144))(dword_880A04, v24); /*0x660234*/
      v20 = v22; /*0x66023a*/
      v21 += 2; /*0x66023c*/
    }
    while ( v22 < 4 ); /*0x660242*/
    v25 = 0; /*0x660244*/
    v26 = &v47; /*0x660246*/
    do /*0x66027f*/
    {
      v27 = v25 + 1; /*0x660250*/
      v33 = (int *)(*(int (__thiscall **)(int, struct tagRECT *))(*(_DWORD *)dword_880A04 + 120))(dword_880A04, &rcDst); /*0x66025d*/
      ClipLine(v26, &v48[2 * (v27 % 4) - 1], v33); /*0x660272*/
      v25 = v27; /*0x660277*/
      v26 += 2; /*0x660279*/
    }
    while ( v27 < 4 ); /*0x66027f*/
    LOBYTE(v13) = dword_880C98; /*0x660281*/
    if ( dword_880C98 == 1 && dword_880C94 == 1 ) /*0x660299*/
    {
      v28 = v48; /*0x66029f*/
      v29 = 4; /*0x6602a3*/
      do /*0x660356*/
      {
        v41[1] = dword_880C88; /*0x6602b3*/
        v46[1] = *v28; /*0x6602b9*/
        v41[0] = dword_880C84; /*0x6602c2*/
        v46[0] = *(v28 - 1); /*0x6602d4*/
        v30 = Coord2D::Add(v46, &v49, v41); /*0x6602d8*/
        rcDst = *(struct tagRECT *)Rect::Construct(v50, v30, 1, 1); /*0x6602e9*/
        v31 = (int *)Rect::Union(&rcDst, v34, v35); /*0x660313*/
        v13 = ClipRectIntersection(v51, v31, &dword_880C84, 0, 0); /*0x66032a*/
        v28 += 2; /*0x660331*/
        dword_8809F4 = *v13; /*0x660334*/
        --v29; /*0x66033a*/
        dword_8809F8 = v13[1]; /*0x66033e*/
        dword_8809FC = v13[2]; /*0x660347*/
        dword_880A00 = v13[3]; /*0x660350*/
      }
      while ( v29 ); /*0x660356*/
    }
  }
  return (char)v13; /*0x66035c*/
}



// ==== 0x006603B0  ObjectClass::Render_Render_6603B0  this=ObjectClass  sig=csp ====
void Render_Render_6603B0(ObjectClass *this)
{
  int v1; // ebx
  int LoadGame_field_0x04; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  void *v6; // esi
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v1 = stru_B04DA8.LoadGame_field_0x10 - 1; /*0x6603b7*/
  if ( stru_B04DA8.LoadGame_field_0x10 - 1 >= 0 ) /*0x6603bc*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x6603c4*/
    do /*0x6603ca*/
    {
      v3 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v1); /*0x6603ca*/
      v4 = *(_DWORD *)(v3 + 36); /*0x6603cd*/
      v5 = *(_DWORD *)(v3 + 44); /*0x6603d0*/
      if ( v4 != -1 ) /*0x6603d6*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x6603e2*/
          goto LABEL_7; /*0x6603e2*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x6603e4*/
      }
      if ( !v5 ) /*0x6603e8*/
      {
LABEL_7:
        if ( !*(_BYTE *)(v3 + 60) ) /*0x6603ea*/
        {
          v6 = *(void **)(LoadGame_field_0x04 + 4 * v1); /*0x6603f1*/
          if ( v6 ) /*0x6603f6*/
          {
            v8 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v1); /*0x660408*/
            v7 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v8); /*0x66040c*/
            if ( v7 != -1 && v7 < stru_B04DA8.LoadGame_field_0x10 ) /*0x66041c*/
            {
              --stru_B04DA8.LoadGame_field_0x10; /*0x660421*/
              for ( ; /*0x660427*/
                    v7 < stru_B04DA8.LoadGame_field_0x10;
                    *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v7 - 4) = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04
                                                                                          + 4 * v7) )
              {
                ++v7; /*0x66042f*/
              }
            }
            __3_YAXPAX_Z(v6); /*0x660442*/
            LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660447*/
          }
        }
      }
      --v1; /*0x660450*/
    }
    while ( v1 >= 0 ); /*0x6603ca*/
  }
}



// ==== 0x00660530  Render_Render_660530  this=-  sig=ida-proto ====
bool sub_660530()
{
  return dword_B04DB8 == 0; /*0x66053a*/
}



// ==== 0x00660540  ObjectClass::Map_Helper  this=ObjectClass  sig=csp ====
int __thiscall Map_Helper_660540(ObjectClass *this)
{
  void *vtable1; // edx
  char *vtable2; // esi
  int *v4; // eax
  int v5; // ecx
  char *v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int *v13; // edi
  int v14; // esi
  int result; // eax
  int v16; // ebp
  int v17; // esi
  int *v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // eax
  bool v27; // zf
  int *v28; // [esp+4h] [ebp-7Ch]
  int *v29; // [esp+18h] [ebp-68h]
  int v30; // [esp+1Ch] [ebp-64h]
  int v31; // [esp+20h] [ebp-60h] BYREF
  int v32; // [esp+24h] [ebp-5Ch]
  int v33; // [esp+28h] [ebp-58h]
  int v34; // [esp+2Ch] [ebp-54h]
  int v35; // [esp+38h] [ebp-48h]
  _BYTE v36[12]; // [esp+40h] [ebp-40h] BYREF
  int v37; // [esp+4Ch] [ebp-34h]
  int v38[4]; // [esp+50h] [ebp-30h] BYREF
  int v39; // [esp+60h] [ebp-20h] BYREF
  int v40[7]; // [esp+64h] [ebp-1Ch] BYREF

  Render_Render_660730((float *)this, &v39); /*0x66054e*/
  vtable1 = this->?; /*0x660553*/
  vtable2 = (char *)this->?; /*0x660556*/
  v4 = &v39; /*0x660559*/
  v5 = 4; /*0x66055d*/
  do /*0x660574*/
  {
    v6 = &vtable2[v4[1]]; /*0x660569*/
    *v4 += (int)vtable1; /*0x66056b*/
    v4[1] = (int)v6; /*0x66056d*/
    v4 += 2; /*0x660570*/
    --v5; /*0x660573*/
  }
  while ( v5 ); /*0x660574*/
  v7 = 0; /*0x660576*/
  v8 = &v39; /*0x660578*/
  do /*0x6605bb*/
  {
    v9 = v7 + 1; /*0x660582*/
    v10 = **(_DWORD **)&stru_87F5F0.__pad_E12[1538]; /*0x66058c*/
    v11 = (*(int (__stdcall **)(_BYTE *, int *, int *, void (__thiscall *)(ObjectClass *)))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] /*0x6605a6*/
                                                                                          + 120))(
            v36,
            v8,
            &v40[2 * ((v7 + 1) % 4) - 1],
            sub_65FB60);
    (*(void (__thiscall **)(_DWORD, int))(v10 + 68))(*(_DWORD *)&stru_87F5F0.__pad_E12[1538], v11); /*0x6605b0*/
    v7 = v9; /*0x6605b3*/
    v8 += 2; /*0x6605b5*/
  }
  while ( v9 < 4 ); /*0x6605bb*/
  v12 = 0; /*0x6605bd*/
  v13 = &v39; /*0x6605bf*/
  do /*0x6605f8*/
  {
    v14 = v12 + 1; /*0x6605c9*/
    v28 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x6605d6*/
                   *(_DWORD *)&stru_87F5F0.__pad_E12[1538],
                   v36);
    ClipLine(v13, &v40[2 * (v14 % 4) - 1], v28); /*0x6605eb*/
    v12 = v14; /*0x6605f0*/
    v13 += 2; /*0x6605f2*/
  }
  while ( v14 < 4 ); /*0x6605f8*/
  result = 1; /*0x660600*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[2198] == 1 && *(_DWORD *)&stru_87F5F0.__pad_E12[2194] == 1 ) /*0x660613*/
  {
    v16 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x660619*/
    v17 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x66061f*/
    v18 = v40; /*0x660625*/
    v37 = 1; /*0x660629*/
    v29 = v40; /*0x66062d*/
    v30 = 4; /*0x660631*/
    do /*0x66071c*/
    {
      v19 = *(v18 - 1); /*0x660644*/
      v20 = v19 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x660649*/
      v21 = *v18 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x66064b*/
      if ( v17 <= 0 || v16 <= 0 ) /*0x660653*/
      {
        v31 = v19 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x6606ba*/
        v32 = v21; /*0x6606be*/
        v33 = 1; /*0x6606cb*/
        v34 = v37; /*0x6606cf*/
      }
      else
      {
        v22 = *(_DWORD *)&stru_87F5F0.__pad_E12[1522]; /*0x660655*/
        v23 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x66065b*/
        v35 = v17; /*0x660663*/
        v24 = v16; /*0x660667*/
        if ( *(int *)&stru_87F5F0.__pad_E12[1522] > v20 ) /*0x660669*/
        {
          v17 += *(_DWORD *)&stru_87F5F0.__pad_E12[1522] - v20; /*0x66066d*/
          v22 = v20; /*0x66066f*/
          v35 = v17; /*0x660671*/
        }
        if ( *(int *)&stru_87F5F0.__pad_E12[1526] > v21 ) /*0x660677*/
        {
          v24 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526] - v21 + v16; /*0x66067b*/
          v23 = v21; /*0x66067d*/
        }
        if ( v22 + v17 >= v20 + 1 ) /*0x660686*/
          v25 = v35; /*0x66068f*/
        else
          v25 = v20 - v22 + 2; /*0x66068a*/
        if ( v24 + v23 < v21 + 1 ) /*0x66069b*/
          v24 = v21 - v23 + 2; /*0x6606a2*/
        v32 = v23; /*0x6606a4*/
        v18 = v29; /*0x6606a8*/
        v31 = v22; /*0x6606ac*/
        v33 = v25; /*0x6606b0*/
        v34 = v24; /*0x6606b4*/
      }
      v26 = ClipRectIntersection(v38, &v31, (int *)&stru_87F5F0.__pad_E12[2178], 0, 0); /*0x6606e4*/
      v18 += 2; /*0x6606eb*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1522] = *v26; /*0x6606ee*/
      v29 = v18; /*0x6606f4*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1526] = v26[1]; /*0x6606fb*/
      v17 = v26[2]; /*0x660701*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1530] = v17; /*0x660704*/
      v16 = v26[3]; /*0x66070a*/
      result = v30 - 1; /*0x660711*/
      v27 = v30 == 1; /*0x660711*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1534] = v16; /*0x660712*/
      --v30; /*0x660718*/
    }
    while ( !v27 ); /*0x66071c*/
  }
  return result; /*0x660722*/
}



// ==== 0x00660730  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int __thiscall sub_660730(float *this, _DWORD *a2)
{
  float *v3; // eax
  int v4; // esi
  int result; // eax
  int v6; // esi
  float v7; // [esp+4h] [ebp-48h] BYREF
  float v8; // [esp+8h] [ebp-44h]
  int v9; // [esp+Ch] [ebp-40h]
  float v10[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v11[12]; // [esp+1Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v11); /*0x66073a*/
  Matrix2D::Rotate(v11, this->vtable2); /*0x660747*/
  v7 = this->vtable4; /*0x66075c*/
  v8 = 0.0; /*0x660760*/
  v9 = 0; /*0x660768*/
  v3 = TransformMatrix3x4Point(v10, v11, &v7); /*0x660770*/
  v7 = *v3; /*0x660777*/
  v8 = v3[1]; /*0x660782*/
  v9 = *((_DWORD *)v3 + 2); /*0x660789*/
  v4 = Math::RoundToInt(v7); /*0x660796*/
  result = Math::RoundToInt(v8); /*0x660798*/
  a2[2] = -result; /*0x6607a5*/
  *a2 = v4; /*0x6607a8*/
  a2[3] = v4; /*0x6607aa*/
  a2[6] = result; /*0x6607ad*/
  v6 = -v4; /*0x6607b0*/
  a2[4] = v6; /*0x6607b2*/
  a2[7] = v6; /*0x6607b5*/
  a2[1] = result; /*0x6607b8*/
  a2[5] = -result; /*0x6607bb*/
  return result; /*0x6607be*/
}



// ==== 0x006607D0  SaveGame::SaveTriggerEvents  this=SaveGame  sig=csp ====
bool __thiscall SaveGame::SaveTriggerEvents(SaveGame *this)
{
  int v2; // ecx
  int v4; // edi
  int LoadGame_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->__pad_0; /*0x6607e0*/
  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x6607e6*/
  if ( (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v2 + 16))(this, &LoadGame_field_0x10, 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( LoadGame_field_0x10 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (__stdcall **)(SaveGame *, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x660817*/
              this,
              *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= LoadGame_field_0x10 ) /*0x660820*/
        return (*(int (__stdcall **)(SaveGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x660820*/
                 this,
                 &word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660817*/
  }
  return (*(int (__stdcall **)(SaveGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x6607f1*/
           this,
           &word_B04D78,
           4,
           0) >= 0;
}



// ==== 0x00660840  LoadGame::LoadTriggerEvents  this=LoadGame  sig=csp ====
bool __thiscall LoadGame::LoadTriggerEvents(LoadGame *this)
{
  int LoadGame_field_0x10; // edx
  int v2; // edi
  int LoadGame_field_0x04; // ecx
  void *v5; // esi
  int v6; // eax
  int v7; // eax
  int v9; // esi
  ObjectClass *v10; // eax
  _DWORD *_65FB80; // eax
  int v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF

  LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x660840*/
  v2 = stru_B04DA8.LoadGame_field_0x10 - 1; /*0x66084d*/
  if ( stru_B04DA8.LoadGame_field_0x10 - 1 >= 0 ) /*0x660856*/
  {
    LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660858*/
    do /*0x6608cb*/
    {
      v5 = *(void **)(LoadGame_field_0x04 + 4 * v2); /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = *(_DWORD *)(LoadGame_field_0x04 + 4 * v2); /*0x660875*/
        v6 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          LoadGame::RemoveItem(&stru_B04DA8, v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x660892*/
        LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x660898*/
      }
      if ( v2 < LoadGame_field_0x10 ) /*0x6608a3*/
      {
        --LoadGame_field_0x10; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
        for ( stru_B04DA8.LoadGame_field_0x10 = LoadGame_field_0x10; v7 < stru_B04DA8.LoadGame_field_0x10; ++v7 ) /*0x6608b0*/
        {
          *(_DWORD *)(LoadGame_field_0x04 + 4 * v7) = *(_DWORD *)(LoadGame_field_0x04 + 4 * v7 + 4); /*0x6608b6*/
          LoadGame_field_0x10 = stru_B04DA8.LoadGame_field_0x10; /*0x6608b9*/
          LoadGame_field_0x04 = stru_B04DA8.LoadGame_field_0x04; /*0x6608bf*/
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  if ( (*(int (__stdcall **)(LoadGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = (ObjectClass *)__2_YAPAXI_Z(0x40u); /*0x6608f5*/
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        _65FB80 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        _65FB80 = 0; /*0x66091b*/
      }
      if ( (*(int (__stdcall **)(LoadGame *, _DWORD *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x660929*/
             this,
             _65FB80,
             64,
             0) < 0 )
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (__stdcall **)(LoadGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x660932*/
                 this,
                 &word_B04D78,
                 4,
                 0) >= 0;
    }
    return 0; /*0x660929*/
  }
  return (*(int (__stdcall **)(LoadGame *, __int16 *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x6608df*/
           this,
           &word_B04D78,
           4,
           0) >= 0;
}



// ==== 0x00660AD0  ObjectClass::method_660AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AD0(ObjectClass *this)
{
  return dword_7F099C[4 * (int)this->AbstractClass]; /*0x660adb*/
}



// ==== 0x00660AE0  ObjectClass::method_660AE0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AE0(ObjectClass *this)
{
  return dword_7F09A0[4 * (int)this->AbstractClass]; /*0x660aeb*/
}



// ==== 0x00660AF0  ObjectClass::method_660AF0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AF0(ObjectClass *this)
{
  return dword_7F0998[4 * (int)this->AbstractClass]; /*0x660afb*/
}



// ==== 0x00660B00  ObjectClass::Map_Load_660B00  this=ObjectClass  sig=csp ====
void Map_Load_660B00(ObjectClass *this)
{
  int i; // edi
  void *v2; // esi
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = stru_B04DA8.LoadGame_field_0x10 - 1; i >= 0; --i ) /*0x660b0c*/
  {
    v2 = *(void **)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x660b15*/
    if ( v2 ) /*0x660b1a*/
    {
      v4 = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * i); /*0x660b2b*/
      v3 = (*(int (__thiscall **)(LoadGame *, int *))(*(_DWORD *)stru_B04DA8.__pad_0 + 16))(&stru_B04DA8, &v4); /*0x660b2f*/
      if ( v3 != -1 && v3 < stru_B04DA8.LoadGame_field_0x10 ) /*0x660b3f*/
      {
        --stru_B04DA8.LoadGame_field_0x10; /*0x660b44*/
        for ( ; /*0x660b4a*/
              v3 < stru_B04DA8.LoadGame_field_0x10;
              *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(stru_B04DA8.LoadGame_field_0x04
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x660b52*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x660b65*/
    }
  }
}



// ==== 0x00660B80  ScriptActionQueue::PushNext  this=ScriptActionQueue  sig=csp ====
int __thiscall ScriptActionQueue::PushNext(ScriptActionQueue *this)
{
  int result; // eax

  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x660b92*/
  result = dword_B04D88; /*0x660b91*/
  dword_B04D48[dword_B04D88] = (int)*this; /*0x660b99*/
  dword_B04DD8 = result; /*0x660ba0*/
  return result; /*0x660ba5*/
}



// ==== 0x00660BB0  ObjectClass::UI_Create_734120_Create  this=ObjectClass  sig=csp ====
int *__thiscall UI_Create_734120_Create(ObjectClass *this)
{
  int *result; // eax
  void *v2; // edx

  result = (int *)this; /*0x660bb0*/
  if ( dword_B04D88 == -1 ) /*0x660bbb*/
  {
    this->AbstractClass = (void *)dword_B04D68; /*0x660bc3*/
  }
  else
  {
    v2 = (void *)dword_B04D48[dword_B04D88]; /*0x660bc6*/
    dword_B04DD8 = dword_B04D88; /*0x660bcd*/
    this->AbstractClass = v2; /*0x660bd3*/
  }
  return result; /*0x660bc5*/
}



// ==== 0x00660BE0  ObjectClass::UI_Create_734120_Create_660BE0  this=ObjectClass  sig=csp ====
int *__thiscall UI_Create_734120_Create_660BE0(ObjectClass *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // ecx
  int v4; // edx

  result = (int *)this; /*0x660bea*/
  if ( dword_B04D88 == -1 )
  {
    this->AbstractClass = (void *)dword_B04D68; /*0x660bf5*/
  }
  else
  {
    v2 = dword_B04DD8 - 1 + (dword_B04DD8 - 1 < 0 ? 8 : 0);
    if ( __PAIR32__(HIWORD(dword_B04D48[v2]), dword_B04D48[v2]) == dword_B04D68 )
    {
      v3 = dword_B04D48[dword_B04D88]; /*0x660c28*/
      dword_B04DD8 = dword_B04D88; /*0x660c2f*/
      *result = v3; /*0x660c35*/
    }
    else
    {
      v4 = dword_B04D48[v2]; /*0x660c39*/
      dword_B04DD8 = dword_B04DD8 - 1 + (dword_B04DD8 - 1 < 0 ? 8 : 0);
      *result = v4; /*0x660c46*/
    }
  }
  return result; /*0x660bf4*/
}



// ==== 0x00660C50  Map_Reset_660C50  this=-  sig=ida-proto ====
int sub_660C50()
{
  dword_B04D88 = -1; /*0x660c54*/
  dword_B04DD8 = -1; /*0x660c59*/
  memset32(dword_B04D48, dword_B04D68, 8u); /*0x660c6d*/
  return dword_B04D68; /*0x660c6f*/
}



// ==== 0x00660C80  VectorClass_ptr_RadarEventClass::Destroy  this=VectorClass_ptr_RadarEventClass  sig=csp ====
void __thiscall VectorClass_ptr_RadarEventClass::Destroy(VectorClass_ptr_RadarEventClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x660c86*/
  this->Count = 0; /*0x660c89*/
  if ( Items && this->IsAllocated ) /*0x660c90*/
  {
    __3_YAXPAX_Z(Items); /*0x660c96*/
    this->Items = 0; /*0x660c9e*/
  }
  this->IsAllocated = 0; /*0x660ca1*/
  this->Capacity = 0; /*0x660ca4*/
}



// ==== 0x00660CB0  VectorClass_ptr_RadarEventClass::GetItemIndex  this=VectorClass_ptr_RadarEventClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadarEventClass::GetItemIndex(VectorClass_ptr_RadarEventClass *this, int a2)
{
  if ( this->IsInitialized ) /*0x660cb0*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x660cc5*/
  else
    return 0; /*0x660cb7*/
}



// ==== 0x00660CD0  _VectorClass_PAVRadarEventClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::Get(_VectorClass_PAVRadarEventClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x660cda*/
}



// ==== 0x00660CE0  _VectorClass_PAVRadarEventClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::Add(_VectorClass_PAVRadarEventClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x660ce2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x660ced*/
  {
    v3 = 0; /*0x660cef*/
    if ( m_8 <= 0 ) /*0x660cf3*/
      return 1; /*0x660d13*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x660cf5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x660cfb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x660d04*/
    {
      ++v3; /*0x660d06*/
      ++v4; /*0x660d07*/
      if ( v3 >= m_8 ) /*0x660d0c*/
        return 1; /*0x660d0c*/
    }
  }
  return 0; /*0x660d0e*/
}



// ==== 0x00660D20  _VectorClass_PAVRadarEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::Release(_VectorClass_PAVRadarEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x660d2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x660d36*/
    if ( a3 ) /*0x660d3c*/
      v4 = a3; /*0x660d52*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x660d4e*/
    LOBYTE(this->m_C) = 1; /*0x660d56*/
    if ( v4 ) /*0x660d5a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x660d65*/
      {
        m_8 = this->m_8; /*0x660d6c*/
        if ( a2 < m_8 ) /*0x660d71*/
          m_8 = a2; /*0x660d73*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x660d79*/
          ++i; /*0x660d7e*/
        if ( BYTE1(this->m_C) ) /*0x660d8b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x660d96*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x660d9e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x660da7*/
      this->m_8 = a2; /*0x660daf*/
      BYTE1(this->m_C) = a3 == 0; /*0x660db2*/
      return 1; /*0x660db8*/
    }
    else
    {
      return 0; /*0x660d5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVRadarEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x660dc2*/
    return 1; /*0x660dc8*/
  }
}



// ==== 0x00660DD0  _VectorClass_PAVRadarEventClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadarEventClass::Remove(_VectorClass_PAVRadarEventClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x660ddd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x660de3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x660deb*/
  }
  BYTE1(this->m_C) = 0; /*0x660dee*/
  this->m_8 = 0; /*0x660df1*/
}



// ==== 0x00660E00  _VectorClass_PAVRadarEventClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::GetSize(_VectorClass_PAVRadarEventClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x660e00*/
    return 0; /*0x660e08*/
  m_8 = this->m_8; /*0x660e0e*/
  result = 0; /*0x660e11*/
  if ( m_8 <= 0 ) /*0x660e15*/
    return -1; /*0x660e2c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x660e1b*/
  {
    if ( ++result >= m_8 ) /*0x660e2a*/
      return -1; /*0x660e2a*/
  }
  return result; /*0x660e0a*/
}



// ==== 0x00660E40  _VectorClass_PAVRadarEventClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadarEventClass::GetCapacity(_VectorClass_PAVRadarEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x660e40*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x660e55*/
  else
    return 0; /*0x660e47*/
}



// ==== 0x00660E60  VectorClass_ptr_RadarEventClass::SetCapacity  this=VectorClass_ptr_RadarEventClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::SetCapacity(VectorClass_ptr_RadarEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x660e6c*/
  {
    this->IsInitialized = 0; /*0x660e72*/
    if ( a3 ) /*0x660e78*/
      v4 = a3; /*0x660e8e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x660e8a*/
    this->IsInitialized = 1; /*0x660e92*/
    if ( !v4 ) /*0x660e96*/
      return 0; /*0x660f0a*/
    if ( this->Items ) /*0x660e98*/
    {
      Capacity = this->Capacity; /*0x660e9f*/
      if ( a2 < (int)Capacity ) /*0x660ea4*/
        Capacity = (void *)a2; /*0x660ea6*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x660eac*/
        ++i; /*0x660eb1*/
      if ( this->IsAllocated ) /*0x660ebe*/
      {
        __3_YAXPAX_Z(this->Items); /*0x660ec9*/
        this->Items = 0; /*0x660ed1*/
      }
    }
    this->Items = v4; /*0x660eda*/
    this->Capacity = (void *)a2; /*0x660ee2*/
    this->IsAllocated = a3 == 0; /*0x660ee5*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_RadarEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x660eee*/
  }
  v7 = this->Capacity; /*0x660ef1*/
  if ( (int)v7 < (int)this->Count ) /*0x660ef9*/
    this->Count = v7; /*0x660efb*/
  return 1; /*0x660efe*/
}



// ==== 0x00660F10  LoadGame::RemoveItem  this=LoadGame  sig=csp ====
char __thiscall LoadGame::RemoveItem(LoadGame *this, int a2)
{
  int LoadGame_field_0x10; // edx
  int v3; // eax
  int v4; // edx

  LoadGame_field_0x10 = this->LoadGame_field_0x10; /*0x660f10*/
  v3 = a2; /*0x660f13*/
  if ( a2 >= LoadGame_field_0x10 ) /*0x660f19*/
    return 0; /*0x660f3c*/
  v4 = LoadGame_field_0x10 - 1; /*0x660f1b*/
  this->LoadGame_field_0x10 = v4; /*0x660f1e*/
  if ( a2 < v4 ) /*0x660f21*/
  {
    do /*0x660f34*/
    {
      ++v3; /*0x660f27*/
      *(_DWORD *)(this->LoadGame_field_0x04 + 4 * v3 - 4) = *(_DWORD *)(this->LoadGame_field_0x04 + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < this->LoadGame_field_0x10 ); /*0x660f34*/
  }
  return 1; /*0x660f39*/
}



// ==== 0x00660F50  VectorClass_ptr_RadarEventClass::FindItemIndex  this=VectorClass_ptr_RadarEventClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::FindItemIndex(VectorClass_ptr_RadarEventClass *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x660f50*/
  result = 0; /*0x660f53*/
  if ( (int)Count <= 0 ) /*0x660f58*/
    return -1; /*0x660f6f*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x660f5e*/
  {
    if ( ++result >= (int)Count ) /*0x660f6d*/
      return -1; /*0x660f6d*/
  }
  return result; /*0x660f72*/
}



// ==== 0x00660F80  _VectorClass_PAVRadarEventClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_RadarEventClass::QueryInterface(_VectorClass_PAVRadarEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x660f83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<RadarEventClass *>::`vftable'; /*0x660f86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x660f90*/
  {
    __3_YAXPAX_Z(v3); /*0x660f98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x660fa0*/
  }
  BYTE1(this->m_C) = 0; /*0x660fab*/
  this->m_8 = 0; /*0x660fb1*/
  if ( (a2 & 1) != 0 ) /*0x660fb8*/
    __3_YAXPAX_Z(this); /*0x660fbb*/
  return this->__pad_0; /*0x660fc5*/
}



// ==== 0x00660FD0  VectorClass_ptr_RadarEventClass::loc_660FD0  this=VectorClass_ptr_RadarEventClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_RadarEventClass::loc_660FD0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x660fd3*/
  *Block = &vt_VectorClass_RadarEventClass; /*0x660fd6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x660fe0*/
  {
    __3_YAXPAX_Z(v3); /*0x660fe8*/
    *(Block + 1) = 0; /*0x660ff0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x660ffb*/
  *(Block + 2) = 0; /*0x661001*/
  if ( (a2 & 1) != 0 ) /*0x661008*/
    __3_YAXPAX_Z(Block); /*0x66100b*/
  return Block; /*0x661015*/
}


// ==== 0x00661020  Color::Lerp2  this=Color  sig=csp ====
_BYTE *__thiscall Color::Lerp2(Color *this, int a2, int a3, float a4)
{
  double v4; // st7
  double v6; // st7

  v4 = 1.0 - a4; /*0x661028*/
  LOBYTE(this->Color_field_00) = Math::RoundToInt(v4); /*0x66109d*/
  BYTE1(this->Color_field_00) = Math::RoundToInt(v4); /*0x661105*/
  v6 = v4 * (double)*(unsigned __int8 *)(a2 + 2) + (double)*(unsigned __int8 *)(a3 + 2) * a4; /*0x661124*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661142*/
  {
    if ( v6 > 255.0 ) /*0x661169*/
      v6 = 255.0; /*0x66116d*/
    BYTE2(this->Color_field_00) = Math::RoundToInt(v6); /*0x661178*/
    return this; /*0x66117b*/
  }
  else
  {
    BYTE2(this->Color_field_00) = Math::RoundToInt(0.0); /*0x661151*/
    return this; /*0x661154*/
  }
}



// ==== 0x00661190  Color::ScaleRGB  this=Color  sig=csp ====
_BYTE *__thiscall Color::ScaleRGB(Color *this, unsigned __int8 *a2, float a3)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7

  v4 = (double)*a2 * a3; /*0x6611a4*/
  if ( v4 > 255.0 || v4 >= 0.0 ) /*0x6611c4*/
  {
    if ( v4 > 255.0 ) /*0x6611dd*/
      v4 = 255.0; /*0x6611e1*/
  }
  else
  {
    v4 = 0.0; /*0x6611c8*/
  }
  LOBYTE(this->Color_field_00) = Math::RoundToInt(v4); /*0x6611ee*/
  v5 = (double)a2[1] * a3; /*0x6611fb*/
  if ( v5 > 255.0 || v5 >= 0.0 ) /*0x66121b*/
  {
    if ( v5 > 255.0 ) /*0x661234*/
      v5 = 255.0; /*0x661238*/
  }
  else
  {
    v5 = 0.0; /*0x66121f*/
  }
  BYTE1(this->Color_field_00) = Math::RoundToInt(v5); /*0x661245*/
  v6 = (double)a2[2] * a3; /*0x661253*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661273*/
  {
    if ( v6 > 255.0 ) /*0x661299*/
      v6 = 255.0; /*0x66129d*/
    BYTE2(this->Color_field_00) = Math::RoundToInt(v6); /*0x6612a8*/
    return this; /*0x6612ab*/
  }
  else
  {
    BYTE2(this->Color_field_00) = Math::RoundToInt(0.0); /*0x661282*/
    return this; /*0x661285*/
  }
}



// ==== 0x006612C0  Color::Lerp  this=Color  sig=csp ====
unsigned int __thiscall Color::Lerp(Color *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  char v4; // al
  unsigned __int8 v5; // bl
  unsigned int result; // eax

  v3 = BYTE1(this->Color_field_00); /*0x6612f2*/
  LOBYTE(this->Color_field_00) += a2 * (*a3 - LOBYTE(this->Color_field_00)) / 256; /*0x6612f5*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x661315*/
  v5 = BYTE2(this->Color_field_00); /*0x661317*/
  BYTE1(this->Color_field_00) = v4; /*0x66131a*/
  result = a2 * (a3[2] - v5) / 256; /*0x66133a*/
  LOBYTE(result) = v5 + result; /*0x66133d*/
  BYTE2(this->Color_field_00) = result; /*0x661340*/
  return result; /*0x66132a*/
}



// ==== 0x00661350  Palette::CalcColorDistance  this=Palette  sig=csp ====
int __thiscall Palette::CalcColorDistance(Palette *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = LOBYTE(this->m_Colors[0]) - *a2; /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *a2 - LOBYTE(this->m_Colors[0]); /*0x661364*/
  v3 = BYTE1(this->m_Colors[0]) - a2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2[1] - BYTE1(this->m_Colors[0]); /*0x661374*/
  v4 = BYTE2(this->m_Colors[0]) - a2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2[2] - BYTE2(this->m_Colors[0]); /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/
}



// ==== 0x006613A0  ComputeColorSaturation  this=-  sig=csp ====
int __fastcall Color_ComputeSaturation(unsigned int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  __int16 v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v3 = *(unsigned __int8 *)a1; /*0x6613ad*/
  v4 = *(unsigned __int8 *)(a1 + 2); /*0x6613b4*/
  v5 = *(unsigned __int8 *)(a1 + 1); /*0x6613b7*/
  LOBYTE(a1) = 0; /*0x6613b9*/
  v13 = v4; /*0x6613bd*/
  v6 = v3; /*0x6613c1*/
  if ( v3 <= v5 ) /*0x6613c3*/
    v6 = v5; /*0x6613c5*/
  if ( v4 > v6 ) /*0x6613c9*/
    v6 = v4; /*0x6613cb*/
  v12 = v3; /*0x6613cf*/
  if ( v3 >= v5 ) /*0x6613d3*/
    v12 = v5; /*0x6613d5*/
  if ( v4 < v12 ) /*0x6613dd*/
    v12 = v4; /*0x6613df*/
  LOBYTE(v15) = 0; /*0x6613e5*/
  if ( v6 ) /*0x6613e9*/
  {
    v7 = v6 - v12; /*0x6613f5*/
    v15 = 255 * (v6 - v12) / v6; /*0x661403*/
    if ( v15 ) /*0x661407*/
    {
      v8 = (255 * v6 - 255 * v4) / v7; /*0x66144f*/
      if ( v6 == v3 ) /*0x661453*/
      {
        if ( v12 == v5 ) /*0x661459*/
        {
          v9 = v8 + 1280; /*0x66145b*/
LABEL_23:
          a1 = v9 / 6; /*0x6614ae*/
          goto LABEL_24; /*0x6614b7*/
        }
        v8 = (255 * v6 - 255 * v5) / v7; /*0x661463*/
        v10 = 256; /*0x661467*/
      }
      else if ( v6 == v5 ) /*0x661470*/
      {
        if ( v12 == v13 ) /*0x66147c*/
        {
          v9 = (255 * v6 - 255 * v3) / v7 + 256; /*0x661482*/
          goto LABEL_23; /*0x661488*/
        }
        v10 = 768; /*0x66148a*/
      }
      else
      {
        if ( v12 == v3 ) /*0x661495*/
        {
          v9 = (255 * v6 - 255 * v5) / v7 + 768; /*0x66149b*/
          goto LABEL_23; /*0x6614a1*/
        }
        v8 = (255 * v6 - 255 * v3) / v7; /*0x6614a3*/
        v10 = 1280; /*0x6614a7*/
      }
      v9 = v10 - v8; /*0x6614ac*/
      goto LABEL_23; /*0x6614ac*/
    }
  }
LABEL_24:
  LOBYTE(v14) = a1; /*0x6614ba*/
  HIBYTE(v14) = v15; /*0x6614c8*/
  *(_WORD *)a3 = v14; /*0x6614d1*/
  *(_BYTE *)(a3 + 2) = v6; /*0x6614d7*/
  return a3; /*0x6614d4*/
}



// ==== 0x006614F0  RulesClass::readGeneralSection  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readGeneralSection(RulesClass *this, int a2)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this, 3, 0); /*0x6614ff*/
}



// ==== 0x00661510  RulesClass::readCombatDamage  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readCombatDamage(RulesClass *this, int a2)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/
}



// ==== 0x00661530  Map_Append  this=-  sig=csp ====
int __stdcall sub_661530(_BYTE *a1, _BYTE *a2, int a3)
{
  int v5; // edi
  int result; // eax
  int v7; // ecx
  _BYTE *v9; // esi

  v5 = a3; /*0x66153a*/
  result = 0; /*0x66153e*/
  while ( v5 > 0 ) /*0x661542*/
  {
    if ( *a1 ) /*0x661545*/
    {
      if ( a2 ) /*0x66157d*/
        *a2++ = *a1; /*0x66157f*/
      ++a1; /*0x661582*/
      ++result; /*0x661583*/
      --v5; /*0x661584*/
    }
    else
    {
      v7 = 0; /*0x66154b*/
      do /*0x661558*/
      {
        if ( v7 > v5 ) /*0x66154f*/
          break; /*0x66154f*/
      }
      while ( !a1[++v7] ); /*0x661558*/
      if ( v7 >= 255 ) /*0x661560*/
        v7 = 255; /*0x661562*/
      if ( a2 ) /*0x661569*/
      {
        *a2 = 0; /*0x66156b*/
        v9 = a2 + 1; /*0x66156e*/
        *v9 = v7; /*0x66156f*/
        a2 = v9 + 1; /*0x661571*/
      }
      result += 2; /*0x661572*/
      a1 += v7; /*0x661575*/
      v5 -= v7; /*0x661577*/
    }
  }
  return result; /*0x66158a*/
}



// ==== 0x00661590  Map_Append  this=-  sig=csp ====
int __stdcall sub_661590(_BYTE *a1, int a2, int a3)
{
  int result; // eax

  if ( !a2 ) /*0x661597*/
    return Map_Append_661530(a1, 0, a3) + 2; /*0x6615c7*/
  result = Map_Append_661530(a1, (_BYTE *)(a2 + 2), a3) + 2; /*0x6615ac*/
  *(_WORD *)a2 = result; /*0x6615af*/
  return result; /*0x6615b2*/
}



// ==== 0x006615D0  sub_6615D0  this=-  sig=csp ====
_BYTE *__stdcall sub_6615D0(char *a1, _BYTE *a2, int a3)
{
  int v4; // ebx
  _BYTE *v5; // edi
  char v6; // al
  unsigned int v7; // eax
  _BYTE *v9; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x6615d6*/
  v5 = a2; /*0x6615db*/
  v9 = a2; /*0x6615e1*/
  if ( a3 > 0 ) /*0x6615e5*/
  {
    while ( 1 ) /*0x6615e9*/
    {
      v6 = *a1++; /*0x6615e9*/
      --v4; /*0x6615ec*/
      if ( v6 ) /*0x6615ef*/
        break; /*0x6615ef*/
      v7 = (unsigned __int8)*a1++; /*0x6615f3*/
      --v4; /*0x6615f8*/
      if ( v7 ) /*0x6615fb*/
      {
        memset(v5, 0, v7); /*0x661606*/
        v5 = &v9[v7]; /*0x661613*/
LABEL_6:
        v9 = v5; /*0x66161a*/
      }
      if ( v4 <= 0 ) /*0x661620*/
        return (_BYTE *)(v5 - a2); /*0x661620*/
    }
    *v5++ = v6; /*0x661617*/
    goto LABEL_6; /*0x661619*/
  }
  return (_BYTE *)(v5 - a2); /*0x66162a*/
}



// ==== 0x00661640  sub_661640  this=-  sig=csp ====
_BYTE *__stdcall sub_661640(unsigned __int16 *a1, _BYTE *a2)
{
  _BYTE *v2; // edi
  int v3; // edx
  char *v4; // esi
  char v5; // al
  unsigned int v6; // ebx
  _BYTE *v8; // [esp+Ch] [ebp+4h]

  v2 = a2; /*0x66164b*/
  v3 = *a1 - 2; /*0x66164f*/
  v4 = (char *)(a1 + 1); /*0x661652*/
  v8 = a2; /*0x661657*/
  if ( v3 > 0 ) /*0x66165b*/
  {
    while ( 1 ) /*0x66165f*/
    {
      v5 = *v4++; /*0x66165f*/
      --v3; /*0x661662*/
      if ( v5 ) /*0x661665*/
        break; /*0x661665*/
      v6 = (unsigned __int8)*v4++; /*0x661669*/
      --v3; /*0x66166c*/
      if ( v6 ) /*0x66166f*/
      {
        memset(v2, 0, v6); /*0x66167a*/
        v2 = &v8[v6]; /*0x661687*/
LABEL_6:
        v8 = v2; /*0x66168e*/
      }
      if ( v3 <= 0 ) /*0x661694*/
        return (_BYTE *)(v2 - a2); /*0x661694*/
    }
    *v2++ = v5; /*0x66168b*/
    goto LABEL_6; /*0x66168d*/
  }
  return (_BYTE *)(v2 - a2); /*0x66169e*/
}



// ==== 0x006616B0  Straw::method_6616B0  this=Straw  sig=csp ====
_DWORD *__thiscall sub_6616B0(Straw *this)
{
  int v2; // ebp
  ObjectClass *v3; // ebx

  v2 = 32; /*0x6616b8*/
  this->Straw_field_0x04 = 0; /*0x6616bd*/
  *((_DWORD *)this + 2) = 0; /*0x6616c0*/
  *(_DWORD *)this->__pad_0 = &Straw::`vftable'; /*0x6616c3*/
  *((_DWORD *)this + 3) = 0; /*0x6616c9*/
  this->q004 = 0; /*0x6616cc*/
  v3 = (ObjectClass *)((char *)this + 20); /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 = (ObjectClass *)((char *)v3 + 8); /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  *((_DWORD *)this + 3) = 0; /*0x6616e1*/
  this->q004 = 0; /*0x6616e4*/
  *(_DWORD *)this->__pad_0 = &RandomStraw::`vftable'; /*0x6616f1*/
  memset((char *)this + 20, 0, 0x100u); /*0x6616f7*/
  return this->__pad_0; /*0x6616fb*/
}



// ==== 0x00661770  ObjectClass::SHA1TickRNG  this=ObjectClass  sig=csp ====
void *__thiscall SHA1TickRNG(ObjectClass *this, char a2)
{
  int vtable3; // ecx
  _BYTE *v4; // eax
  void *result; // eax
  int *p_abstractFlags; // ebx
  unsigned int v7; // esi
  int *v8; // edi
  size_t v9; // eax
  char Src[20]; // [esp+4h] [ebp-88h] BYREF
  SHA1 v11; // [esp+18h] [ebp-74h] BYREF
  int v12; // [esp+30h] [ebp-5Ch]
  int v13; // [esp+34h] [ebp-58h]
  int v14; // [esp+38h] [ebp-54h]
  int v15; // [esp+3Ch] [ebp-50h]
  int v16; // [esp+40h] [ebp-4Ch]
  int v17; // [esp+44h] [ebp-48h]
  int v18; // [esp+48h] [ebp-44h]

  vtable3 = (int)this->?; /*0x661779*/
  if ( (a2 & 1) != 0 ) /*0x66179a*/
  {
    v4 = (char *)&this->? + (unsigned __int8)(vtable3 / 8); /*0x661796*/
    *v4 ^= 1 << (vtable3 & 7); /*0x6617a3*/
  }
  result = (char *)this->? + 1; /*0x6617a9*/
  this->? = result; /*0x6617ab*/
  if ( result == (void *)2048 ) /*0x6617b3*/
  {
    p_abstractFlags = &this->?; /*0x6617bc*/
    v11.__pad_0[0] = 0; /*0x6617c0*/
    v17 = 0; /*0x6617c4*/
    v18 = 0; /*0x6617c8*/
    v12 = 1732584193; /*0x6617cc*/
    v13 = -271733879; /*0x6617d4*/
    v14 = -1732584194; /*0x6617dc*/
    v15 = 271733878; /*0x6617e4*/
    v16 = -1009589776; /*0x6617ec*/
    v7 = 0; /*0x6617f4*/
    v8 = &this->?; /*0x6617f6*/
    do /*0x66183d*/
    {
      SHA1::Process(&v11, (int)p_abstractFlags, 256); /*0x661802*/
      SHA1::Compute(&v11, Src); /*0x661810*/
      v9 = 256 - v7; /*0x66181a*/
      if ( 256 - v7 > 0x14 ) /*0x66181f*/
        v9 = 20; /*0x661821*/
      result = memcpy(v8, Src, v9); /*0x66182d*/
      ++v7; /*0x661835*/
      v8 = (int *)((char *)v8 + 1); /*0x661836*/
    }
    while ( v7 < 0x100 ); /*0x66183d*/
  }
  return result; /*0x661841*/
}



// ==== 0x00661850  Random::AdvanceRandomBytes  this=Random  sig=csp ====
int __thiscall sub_661850(char *this, char a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v12[29]; // [esp+28h] [ebp-74h] BYREF

  v10 = 8; /*0x66185c*/
  do /*0x661940*/
  {
    if ( (a2 & 1) != 0 ) /*0x661885*/
    {
      v3 = this + (unsigned __int8)(this->q00C / 8) + 20; /*0x661881*/
      *v3 ^= 1 << (this->q00C & 7); /*0x66188e*/
    }
    v4 = this->q00C + 1; /*0x661894*/
    this->q00C = v4; /*0x661896*/
    if ( v4 == 2048 ) /*0x66189e*/
    {
      v5 = 0; /*0x6618a4*/
      LOBYTE(v12[0]) = 0; /*0x6618a9*/
      v12[11] = 0; /*0x6618ae*/
      v12[12] = 0; /*0x6618b2*/
      v12[6] = 1732584193; /*0x6618b6*/
      v12[7] = -271733879; /*0x6618be*/
      v12[8] = -1732584194; /*0x6618c6*/
      v12[9] = 271733878; /*0x6618ce*/
      v12[10] = -1009589776; /*0x6618d6*/
      v6 = this + 20; /*0x6618de*/
      do /*0x661925*/
      {
        SHA1::Process(v12, (int)(this + 20), 256); /*0x6618ea*/
        SHA1::Compute(v12, Src); /*0x6618f8*/
        v7 = 256 - v5; /*0x661902*/
        if ( 256 - v5 > 0x14 ) /*0x661907*/
          v7 = 20; /*0x661909*/
        memcpy(v6, Src, v7); /*0x661915*/
        ++v5; /*0x66191d*/
        ++v6; /*0x66191e*/
      }
      while ( v5 < 0x100 ); /*0x661925*/
    }
    result = v10 - 1; /*0x661934*/
    v8 = v10 == 1; /*0x661934*/
    a2 >>= 1; /*0x661935*/
    --v10; /*0x66193c*/
  }
  while ( !v8 ); /*0x661940*/
  return result; /*0x661946*/
}



// ==== 0x00661960  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_661960(ObjectClass *this, __int16 a2)
{
  _BYTE *v3; // eax
  char *v4; // eax
  unsigned int v5; // esi
  int *p_abstractFlags; // ebp
  size_t v7; // eax
  int result; // eax
  int v9; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  SHA1 v11; // [esp+28h] [ebp-74h] BYREF
  int v12; // [esp+40h] [ebp-5Ch]
  int v13; // [esp+44h] [ebp-58h]
  int v14; // [esp+48h] [ebp-54h]
  int v15; // [esp+4Ch] [ebp-50h]
  int v16; // [esp+50h] [ebp-4Ch]
  int v17; // [esp+54h] [ebp-48h]
  int v18; // [esp+58h] [ebp-44h]

  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      v3 = (char *)&this->? + (unsigned __int8)((int)this->? / 8); /*0x661991*/
      *v3 ^= 1 << ((int)this->? & 7); /*0x66199e*/
    }
    v4 = (char *)this->? + 1; /*0x6619a4*/
    this->? = v4; /*0x6619a6*/
    if ( v4 == (char *)2048 ) /*0x6619ae*/
    {
      v5 = 0; /*0x6619b4*/
      v11.__pad_0[0] = 0; /*0x6619b9*/
      v17 = 0; /*0x6619be*/
      v18 = 0; /*0x6619c2*/
      v12 = 1732584193; /*0x6619c6*/
      v13 = -271733879; /*0x6619ce*/
      v14 = -1732584194; /*0x6619d6*/
      v15 = 271733878; /*0x6619de*/
      v16 = -1009589776; /*0x6619e6*/
      p_abstractFlags = &this->?; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(&v11, (int)&this->?, 256); /*0x6619fa*/
        SHA1::Compute(&v11, Src); /*0x661a08*/
        v7 = 256 - v5; /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661a2e*/
      }
      while ( v5 < 0x100 ); /*0x661a35*/
    }
    a2 >>= 1; /*0x661a3b*/
    result = --v9; /*0x661a43*/
  }
  while ( v9 ); /*0x661a48*/
  return result; /*0x661a4e*/
}



// ==== 0x00661A60  ObjectClass::method_661A60  this=ObjectClass  sig=csp ====
int __thiscall sub_661A60(ObjectClass *this, int a2)
{
  _BYTE *v3; // eax
  char *v4; // eax
  unsigned int v5; // esi
  int *p_abstractFlags; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  SHA1 v12; // [esp+28h] [ebp-74h] BYREF
  int v13; // [esp+40h] [ebp-5Ch]
  int v14; // [esp+44h] [ebp-58h]
  int v15; // [esp+48h] [ebp-54h]
  int v16; // [esp+4Ch] [ebp-50h]
  int v17; // [esp+50h] [ebp-4Ch]
  int v18; // [esp+54h] [ebp-48h]
  int v19; // [esp+58h] [ebp-44h]

  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      v3 = (char *)&this->? + (unsigned __int8)((int)this->? / 8); /*0x661a91*/
      *v3 ^= 1 << ((int)this->? & 7); /*0x661a9e*/
    }
    v4 = (char *)this->? + 1; /*0x661aa4*/
    this->? = v4; /*0x661aa6*/
    if ( v4 == (char *)2048 ) /*0x661aae*/
    {
      v5 = 0; /*0x661ab4*/
      v12.__pad_0[0] = 0; /*0x661ab9*/
      v18 = 0; /*0x661abe*/
      v19 = 0; /*0x661ac2*/
      v13 = 1732584193; /*0x661ac6*/
      v14 = -271733879; /*0x661ace*/
      v15 = -1732584194; /*0x661ad6*/
      v16 = 271733878; /*0x661ade*/
      v17 = -1009589776; /*0x661ae6*/
      p_abstractFlags = &this->?; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(&v12, (int)&this->?, 256); /*0x661afa*/
        SHA1::Compute(&v12, Src); /*0x661b08*/
        v7 = 256 - v5; /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661b2e*/
      }
      while ( v5 < 0x100 ); /*0x661b35*/
    }
    result = v10 - 1; /*0x661b44*/
    v8 = v10 == 1; /*0x661b44*/
    a2 >>= 1; /*0x661b45*/
    --v10; /*0x661b4c*/
  }
  while ( !v8 ); /*0x661b50*/
  return result; /*0x661b56*/
}



// ==== 0x00661B70  ObjectClass::method_661B70  this=ObjectClass  sig=csp ====
void *__thiscall sub_661B70(ObjectClass *this)
{
  int *p_abstractFlags; // ebx
  unsigned int v2; // esi
  int *v3; // edi
  size_t v4; // eax
  void *result; // eax
  char Src[20]; // [esp+Ch] [ebp-88h] BYREF
  SHA1 v7; // [esp+20h] [ebp-74h] BYREF
  int v8; // [esp+38h] [ebp-5Ch]
  int v9; // [esp+3Ch] [ebp-58h]
  int v10; // [esp+40h] [ebp-54h]
  int v11; // [esp+44h] [ebp-50h]
  int v12; // [esp+48h] [ebp-4Ch]
  int v13; // [esp+4Ch] [ebp-48h]
  int v14; // [esp+50h] [ebp-44h]

  p_abstractFlags = &this->?; /*0x661b7a*/
  v7.__pad_0[0] = 0; /*0x661b7e*/
  v13 = 0; /*0x661b82*/
  v14 = 0; /*0x661b86*/
  v8 = 1732584193; /*0x661b8a*/
  v9 = -271733879; /*0x661b92*/
  v10 = -1732584194; /*0x661b9a*/
  v11 = 271733878; /*0x661ba2*/
  v12 = -1009589776; /*0x661baa*/
  v2 = 0; /*0x661bb2*/
  v3 = &this->?; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(&v7, (int)p_abstractFlags, 256); /*0x661bc0*/
    SHA1::Compute(&v7, Src); /*0x661bce*/
    v4 = 256 - v2; /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    v3 = (int *)((char *)v3 + 1); /*0x661bf4*/
  }
  while ( v2 < 0x100 ); /*0x661bfb*/
  return result; /*0x661bfd*/
}



// ==== 0x00661C10  RandomStraw::Release  this=RandomStraw  sig=csp ====
int __thiscall RandomStraw::Release(RandomStraw *this, int a2, int a3)
{
  int v3; // ebx
  _BYTE *v4; // edi
  int v6; // eax

  v3 = a3; /*0x661c11*/
  v4 = (_BYTE *)a2; /*0x661c17*/
  if ( !a2 || a3 < 1 ) /*0x661c24*/
    return Delegate::Invoke((Straw *)this, a2, a3); /*0x661c5d*/
  do /*0x661c4d*/
  {
    v6 = this->q004; /*0x661c30*/
    this->q004 = v6 + 1; /*0x661c38*/
    *v4++ = RandomStraw::AdvanceState((RandomStraw *)((char *)this + 8 * v6 + 20)); /*0x661c40*/
    --v3; /*0x661c49*/
    this->q004 &= 0x1Fu; /*0x661c4a*/
  }
  while ( v3 ); /*0x661c4d*/
  return a3; /*0x661c53*/
}



// ==== 0x00661C70  RandomStraw::QueryInterface  this=RandomStraw  sig=csp ====
int *__thiscall RandomStraw::QueryInterface(RandomStraw *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &RandomStraw::`vftable'; /*0x661c7e*/
  *((_DWORD *)this + 3) = 0; /*0x661c84*/
  this->q004 = 0; /*0x661c87*/
  memset((char *)this + 20, 0, 0x100u); /*0x661c8a*/
  Straw::Dtor((Straw *)this); /*0x661c8e*/
  if ( (a2 & 1) != 0 ) /*0x661c98*/
    __3_YAXPAX_Z(this); /*0x661c9b*/
  return (int *)this->__pad_0; /*0x661ca5*/
}



// ==== 0x00661CB0  sub_661CB0  this=-  sig=ida-proto ====
void sub_661CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x661cbc*/
  dbl_B04E20 = Math::Sqrt(v0 + v0); /*0x661cce*/
}



// ==== 0x00661CE0  sub_661CE0  this=-  sig=ida-proto ====
void sub_661CE0()
{
  dbl_B04E70 = dbl_B04E20 / 60.0; /*0x661cec*/
}



// ==== 0x00661D00  sub_661D00  this=-  sig=ida-proto ====
void sub_661D00()
{
  dbl_B04E58 = 1.0 / dbl_B04E70; /*0x661d0c*/
}



// ==== 0x00661D20  sub_661D20  this=-  sig=ida-proto ====
void sub_661D20()
{
  dbl_B04E50 = 0.0174532925199433 * 45.0; /*0x661d2c*/
}



// ==== 0x00661D40  sub_661D40  this=-  sig=ida-proto ====
void sub_661D40()
{
  dbl_B04E28 = 0.0174532925199433 * 60.0; /*0x661d4c*/
}



// ==== 0x00661D60  sub_661D60  this=-  sig=ida-proto ====
void sub_661D60()
{
  dbl_B04E00 = 0.0174532925199433 * 90.0; /*0x661d6c*/
}



// ==== 0x00661D80  Animation::UpdateBobOffset  this=Animation  sig=ida-proto ====
__int64 Animation_UpdateBobOffset()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04E00 - dbl_B04E28); /*0x661d92*/
  result = Math::RoundToInt(v0 * dbl_B04E20 * 0.5); /*0x661da6*/
  dword_B04E78 = result; /*0x661dab*/
  return result; /*0x661db0*/
}



// ==== 0x00661DC0  sub_661DC0  this=-  sig=ida-proto ====
void sub_661DC0()
{
  dbl_B04E30 = Math::ArcTan((double)dword_B04E78 * 0.00390625); /*0x661dd7*/
}



// ==== 0x00661DF0  sub_661DF0  this=-  sig=ida-proto ====
void sub_661DF0()
{
  dbl_B04E48 = Math::ArcTan((double)(2 * dword_B04E78) / dbl_B04E20); /*0x661e12*/
}



// ==== 0x00661E20  sub_661E20  this=-  sig=ida-proto ====
__int64 sub_661E20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04E78) + 0.5); /*0x661e3b*/
  dword_B04E6C = result; /*0x661e40*/
  return result; /*0x661e46*/
}



// ==== 0x00661E50  sub_661E50  this=-  sig=ida-proto ====
int sub_661E50()
{
  word_B04E18 = 0; /*0x661e52*/
  word_B04E1A = 0; /*0x661e58*/
  return 0; /*0x661e5e*/
}



// ==== 0x00661E60  sub_661E60  this=-  sig=ida-proto ====
int sub_661E60()
{
  dword_B04E38 = 0; /*0x661e62*/
  dword_B04E3C = 0; /*0x661e67*/
  dword_B04E40 = 0; /*0x661e6c*/
  return 0; /*0x661e71*/
}



// ==== 0x00661E80  sub_661E80  this=-  sig=ida-proto ====
int sub_661E80()
{
  dword_B04E68 = 0; /*0x661e85*/
  dword_B04E60 = 128; /*0x661e8f*/
  dword_B04E64 = 128; /*0x661e94*/
  return 128; /*0x661e99*/
}



// ==== 0x00661EA0  sub_661EA0  this=-  sig=ida-proto ====
int sub_661EA0()
{
  dword_B04E08 = 0; /*0x661ea2*/
  dword_B04E0C = 0; /*0x661ea7*/
  dword_B04E10 = 0; /*0x661eac*/
  dword_B04E14 = 0; /*0x661eb1*/
  return 0; /*0x661eb6*/
}



// ==== 0x00661EC0  RocketLocomotionClass::RocketLocomotionClass  this=RocketLocomotionClass  sig=csp ====
int __thiscall RocketLocomotionClass::RocketLocomotionClass(RocketLocomotionClass *this)
{
  int v2; // ecx

  LocomotionClass::Init((LocomotionClass *)this); /*0x661ec3*/
  this->MovingDestination[0] = dword_B04E38; /*0x661ed1*/
  this->MovingDestination[1] = dword_B04E3C; /*0x661eda*/
  this->MovingDestination[2] = dword_B04E40; /*0x661ee3*/
  this->MissionTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x661eee*/
  this->MissionTimer[2] = 0; /*0x661ef1*/
  this->MissionTimer[3] = 0; /*0x661ef4*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x661ef7*/
  this->TrailerTimer[2] = 0; /*0x661efd*/
  this->TrailerTimer[0] = v2; /*0x661f00*/
  this->CurrentSpeed[0] = 0; /*0x661f03*/
  this->MissionState = 0; /*0x661f06*/
  this->CurrentSpeed[1] = 0; /*0x661f09*/
  this->SpawnerIsElite = 0; /*0x661f0c*/
  this->CurrentPitch = 0.0; /*0x661f0f*/
  this->RocketLocomotionClass_field_58 = 0; /*0x661f12*/
  this->RocketLocomotionClass_field_bool_4C = 1; /*0x661f15*/
  *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x661f1f*/
  return (int)this->LocomotionClass; /*0x661f28*/
}



// ==== 0x00661F30  RocketLocomotionClass::method_661F30  this=RocketLocomotionClass  sig=csp ====
void __thiscall sub_661F30(RocketLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x661f30*/
  *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x661f36*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x661f3d*/
}



// ==== 0x00661F50  JumpjetLocomotionClass::HasFieldStateChanged  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::HasFieldStateChanged(JumpjetLocomotionClass *this)
{
  return this->? != dword_B04E38 || this->TurnRate != dword_B04E3C || this->Speed != dword_B04E40; /*0x661f7d*/
}



// ==== 0x00661F90  RocketLocomotionClass::CheckCompositeState_0  this=RocketLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckCompositeState_0(RocketLocomotionClass *this)
{
  int v1; // eax

  v1 = this->TrailerTimer[2]; /*0x661f94*/
  return v1 >= 3 && v1 <= 5; /*0x661fa3*/
}



// ==== 0x00661FB0  JumpjetLocomotionClass::GetCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinate_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int TurnRate; // edx
  int Speed; // eax

  TurnRate = this->TurnRate; /*0x661fbd*/
  Speed = this->Speed; /*0x661fc0*/
  *a2 = this->?; /*0x661fc5*/
  a2[1] = TurnRate; /*0x661fc7*/
  a2[2] = Speed; /*0x661fca*/
  return a2; /*0x661fcf*/
}



// ==== 0x006620F0  BulletClass::ComputeImpactTrajectory  this=BulletClass  sig=csp ====
char __userpurge BulletClass::ComputeImpactTrajectory@<al>(TechnoClass *this@<ecx>, double a2@<st0>, int a3)
{
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  void *NeedsSaveOrLink; // ebx
  double v11; // [esp+0h] [ebp-38h]
  double v12; // [esp+0h] [ebp-38h]
  int v13; // [esp+18h] [ebp-20h]
  double v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h] BYREF
  _DWORD v17[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int v18; // [esp+34h] [ebp-4h]

  _ESI = this; /*0x6620fe*/
  v15 = *(_DWORD *)(a3 + 40); /*0x662107*/
  __asm { fld dword ptr [esi+54h] } /*0x66210b*/
  v4 = (char *)this->? + 156; /*0x66210e*/
  __asm { fstp [esp+38h+var_38]; double } /*0x662119*/
  v5 = *((_DWORD *)this->? + 40); /*0x66211c*/
  v17[0] = *v4; /*0x66211f*/
  v17[1] = v5; /*0x662123*/
  v18 = v4[2]; /*0x66212a*/
  Math::ArcTan2(v11); /*0x66212e*/
  __asm { fstp st } /*0x662144*/
  v13 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)_ESI->? + 904), &v16) - 0x3FFF; /*0x662154*/
  __asm /*0x662158*/
  {
    fild dword ptr [esp+30h+var_20]
    fmul ds:dbl_7E2810
    fstp [esp+30h+var_20]
  }
  Math::SinCos(v14); /*0x662170*/
  __asm { fstp st } /*0x662177*/
  Math::ArcTan2(v14); /*0x662179*/
  __asm /*0x66217e*/
  {
    fstp st
    fld dword ptr [esi+54h]
  }
  __asm { fstp [esp+38h+var_38]; double }
  Math::SinCos(v12); /*0x662189*/
  __asm { fimul [esp+38h+var_14] } /*0x66218e*/
  __asm { fiadd [esp+30h+var_4] }
  LOWORD(v6) = Math::RoundToInt(a2); /*0x662199*/
  v7 = v6; /*0x66219e*/
  if ( v6 > (int)_ESI->? ) /*0x6621a5*/
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)_ESI->? + 444))(_ESI->?); /*0x6621be*/
    if ( !v8 /*0x6621f1*/
      || (v8[80] & 0x100) == 0
      || (NeedsSaveOrLink = _ESI->?,
          *(void **)((*(int (__thiscall **)(_DWORD *, _DWORD *))(*v8 + 72))(v8, v17) + 8) != NeedsSaveOrLink)
      || v7 > (int)NeedsSaveOrLink + dword_B04E6C )
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)_ESI->? + 456))(_ESI->?) > 0 ) /*0x662212*/
        return 0; /*0x662228*/
    }
  }
  TechnoClass::CalculateDamage(_ESI); /*0x662216*/
  return 1; /*0x6621b0*/
}



// ==== 0x00662240  ObjectClass::method  this=ObjectClass  sig=csp ====
double __thiscall sub_662240(ObjectClass *this)
{
  int v1; // eax
  int v2; // edx
  double result; // st7
  double v5; // [esp+0h] [ebp-20h]
  double v6; // [esp+8h] [ebp-18h]
  int v7; // [esp+10h] [ebp-10h]
  char *v8; // [esp+1Ch] [ebp-4h]

  v1 = this->? - *((_DWORD *)this->? + 39); /*0x66225b*/
  v2 = this->? - *((_DWORD *)this->? + 40); /*0x662263*/
  v8 = (char *)this->? - *((_DWORD *)this->? + 41); /*0x662267*/
  v7 = v2 * v2 + v1 * v1; /*0x662277*/
  __asm /*0x66227b*/
  {
    fild [esp+20h+var_10]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v5); /*0x662282*/
  __asm { fcom ds:dbl_7E2800 } /*0x662287*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4100) != 0 ) /*0x662297*/
  {
    __asm /*0x6622b3*/
    {
      fstp st
      fld ds:dbl_7F0C10
    }
  }
  else
  {
    __asm { fild [esp+10h+var_4] } /*0x662299*/
    __asm
    {
      fdiv st, st(1)
      fstp [esp+18h+var_18]; double
      fstp st
    }
    Math::ArcTan(v6); /*0x6622a7*/
  }
  return result; /*0x6622af*/
}



// ==== 0x006622C0  RocketLocomotionClass::UpdateBullets  this=RocketLocomotionClass  sig=csp ====
char __stdcall UpdateBullets(RocketLocomotionClass *this)
{
  double v1; // st7
  FootClass *Owner; // ecx
  void *vtable1; // edx
  int v5; // eax
  TechnoClass *spawnOwner; // eax
  bool v8; // al
  int v9; // edx
  int v10; // eax
  AnimClass *v11; // ebx
  int *location; // eax
  int Index; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  TechnoClass *v22; // ecx
  bool v23; // al
  int *v24; // ebx
  int v25; // edi
  int v26; // edx
  int v27; // eax
  AnimClass *v28; // edi
  int *v29; // eax
  int v30; // eax
  int *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  _WORD *v40; // eax
  FootClass *v41; // ecx
  int v42; // eax
  int v43; // edx
  TechnoClass *v44; // eax
  bool v45; // al
  int v46; // edx
  int v47; // eax
  _WORD *v51; // eax
  AnimClass *v52; // edi
  int *v53; // ecx
  int v54; // eax
  FootClass *v55; // ecx
  int v56; ... [32816 chars total]



// ==== 0x00663030  TechnoClass::CalculateDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalculateDamage(TechnoClass *this)
{
  double v1; // st7
  _DWORD *vtable3; // edx
  int v4; // ecx
  int v5; // ecx
  int *v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  void *WarheadVersusMultiplier; // eax
  double v16; // [esp+0h] [ebp-68h]
  double v17; // [esp+0h] [ebp-68h]
  __int64 v18; // [esp+0h] [ebp-68h]
  int v19; // [esp+18h] [ebp-50h]
  _DWORD *v20; // [esp+1Ch] [ebp-4Ch]
  int v21; // [esp+20h] [ebp-48h]
  int v22; // [esp+20h] [ebp-48h]
  double v23; // [esp+20h] [ebp-48h]
  int v24; // [esp+28h] [ebp-40h]
  double v25; // [esp+28h] [ebp-40h]
  AnimClass *v26; // [esp+28h] [ebp-40h]
  __int16 v27[2]; // [esp+30h] [ebp-38h] BYREF
  int v28; // [esp+34h] [ebp-34h] BYREF
  int v30; // [esp+40h] [ebp-28h]
  int v32; // [esp+50h] [ebp-18h] BYREF
  int v33; // [esp+54h] [ebp-14h]
  unsigned int v34; // [esp+58h] [ebp-10h]
  int v35; // [esp+5Ch] [ebp-Ch]
  int v36; // [esp+60h] [ebp-8h]
  int v37; // [esp+64h] [ebp-4h]

  _ESI = this; /*0x66303b*/
  GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, (int)this->?); /*0x663047*/
  vtable3 = _ESI->?; /*0x66304c*/
  v4 = vtable3[433]; /*0x663054*/
  if ( v4 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x663062*/
  {
    v20 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200); /*0x66306a*/
    if ( BYTE1(_ESI->?[0]) ) /*0x66306e*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4024); /*0x66307b*/
      goto LABEL_13; /*0x66307f*/
    }
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4016); /*0x663081*/
  }
  else if ( v4 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x66308f*/
  {
    v20 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1304); /*0x663097*/
    if ( BYTE1(_ESI->?[0]) ) /*0x66309b*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4036); /*0x6630a8*/
      goto LABEL_13; /*0x6630ac*/
    }
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4032); /*0x6630ae*/
  }
  else
  {
    v20 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252); /*0x6630bc*/
    if ( BYTE1(_ESI->?[0]) ) /*0x6630c0*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4028); /*0x6630cd*/
      goto LABEL_13; /*0x6630d1*/
    }
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4020); /*0x6630d3*/
  }
  v19 = v5; /*0x6630d9*/
LABEL_13:
  v6 = vtable3 + 39; /*0x6630dd*/
  v21 = v20[10]; /*0x6630ef*/
  v35 = *v6; /*0x6630f3*/
  __asm { fild dword ptr [esp+68h+var_48] } /*0x6630f7*/
  v36 = v6[1]; /*0x6630fe*/
  __asm /*0x663102*/
  {
    fstp [esp+68h+var_20]
    fld dword ptr [esi+54h]
  }
  __asm { fstp [esp+68h+var_68]; double }
  v37 = v6[2]; /*0x66310f*/
  Math::ArcTan2(v16); /*0x663113*/
  __asm { fmul [esp+68h+var_20] } /*0x663118*/
  LOWORD(v7) = Math::RoundToInt(v1); /*0x66311f*/
  v24 = v7; /*0x663127*/
  v22 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)_ESI->? + 904), &v28) - 0x3FFF; /*0x663144*/
  __asm /*0x663148*/
  {
    fild dword ptr [esp+60h+var_48]
    fmul ds:dbl_7E2810
    fstp [esp+60h+var_48]
    fild [esp+60h+var_40]
  }
  __asm
  {
    fstp [esp+68h+var_30]
    fild [esp+68h+var_8]
    fstp qword ptr [esp+68h+var_40]
  }
  Math::SinCos(v23); /*0x663170*/
  __asm /*0x663175*/
  {
    fmul [esp+68h+var_30]
    fsubr qword ptr [esp+68h+var_40]
  }
  LOWORD(v8) = Math::RoundToInt(v1); /*0x66317d*/
  LODWORD(v25) = v8; /*0x663184*/
  Math::ArcTan2(v23); /*0x663188*/
  __asm /*0x66318d*/
  {
    fmul [esp+70h+var_30]
    fiadd [esp+70h+var_C]
  }
  LOWORD(v9) = Math::RoundToInt(v1); /*0x663195*/
  __asm { fld dword ptr [esi+54h] } /*0x66319a*/
  __asm { fstp [esp+70h+var_68]; double }
  v10 = v9; /*0x6631ac*/
  v30 = v37; /*0x6631ae*/
  Math::SinCos(v17); /*0x6631b2*/
  __asm { fmul [esp+68h+var_20] } /*0x6631b7*/
  __asm { fiadd [esp+60h+var_4] }
  LOWORD(v11) = Math::RoundToInt(v1); /*0x6631c2*/
  v34 = v11; /*0x6631c7*/
  v32 = v10; /*0x6631d4*/
  v33 = LODWORD(v25); /*0x6631da*/
  LOWORD(v23) = v10 / 256; /*0x6631e1*/
  WORD1(v23) = SLODWORD(v25) / 256; /*0x6631f4*/
  *(_DWORD *)v27 = LODWORD(v23); /*0x6631fd*/
  if ( BYTE1(_ESI->?[0]) ) /*0x663201*/
    v12 = v20[9]; /*0x66320c*/
  else
    v12 = v20[8]; /*0x663215*/
  v26 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x663225*/
  if ( v26 ) /*0x66322b*/
  {
    v13 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27) + 59); /*0x663240*/
    v18 = v34; /*0x66325a*/
    LODWORD(v18) = Return::HRESULT_Fail(v32, v33, v34); /*0x663266*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v12, v19, v13, &v32); /*0x66327d*/
    AnimClass::ctor(v26, WarheadVersusMultiplier, &v32, 0, 1, (void *)0x2600, (void *)v18, SBYTE4(v18)); /*0x663287*/
  }
  CreateSmokeEffectAt(v12, v19, v32, v33, v34, 0, 0); /*0x6632af*/
  PlaySoundEffectAt(&v32, v12, (_DWORD *)_ESI->?, v19, 1, 0); /*0x6632c7*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)_ESI->? + 248))(_ESI->?); /*0x6632d9*/
}



// ==== 0x006632E0  RocketLocomotionClass::ComputeFloatExpression_3  this=RocketLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ComputeFloatExpression_3(RocketLocomotionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  void *vtable1; // edx
  int v6; // edx
  bool v7; // zf
  int v8; // esi
  int v9; // [esp+Ch] [ebp-Ch]

  result = (int)this; /*0x6632e0*/
  vtable1 = this->?[1].?; /*0x6632ec*/
  if ( vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6632fe*/
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200; /*0x663300*/
  }
  else
  {
    v7 = vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352); /*0x66330e*/
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1304; /*0x663310*/
    if ( !v7 ) /*0x663316*/
      v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252; /*0x663318*/
  }
  if ( this->? == dword_B04E38 /*0x66334a*/
    && this->MovingDestination[0] == dword_B04E3C
    && this->MovingDestination[1] == dword_B04E40 )
  {
    if ( *(_DWORD *)v6 ) /*0x66334c*/
    {
      this->TrailerTimer[2] = 1; /*0x663353*/
      v8 = *(_DWORD *)v6; /*0x663360*/
    }
    else
    {
      this->TrailerTimer[2] = 2; /*0x66336e*/
      v8 = *(_DWORD *)(v6 + 4); /*0x66337b*/
    }
    this->MovingDestination[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x663365*/
    this->MissionTimer[0] = v9; /*0x663388*/
    this->MissionTimer[1] = v8; /*0x66338b*/
    this->MissionTimer[2] = v8; /*0x66338e*/
    *(float *)&this->RocketLocomotionClass_field_bool_4C = *(float *)(v6 + 8) * 1.570796326794897; /*0x6633a3*/
    this->? = a2; /*0x6633aa*/
    this->MovingDestination[0] = a3; /*0x6633ac*/
    this->MovingDestination[1] = a4; /*0x6633af*/
    return a2; /*0x6633a6*/
  }
  return result; /*0x6633b2*/
}



// ==== 0x006633C0  RocketLocomotionClass::nullsub_224  this=RocketLocomotionClass  sig=csp ====
void __stdcall nullsub_224(RocketLocomotionClass *this)
{
  ; /*0x6633c0*/
}



// ==== 0x006633D0  RocketLocomotionClass::ddtor  this=RocketLocomotionClass  sig=csp ====
int __stdcall RocketLocomotionClass::ddtor(RocketLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *(IID *)a2 = g_CLSID_ShipLocomotion; /*0x6633e6*/
  a2[3] = unk_7E9ADC; /*0x663400*/
  return 0; /*0x6633dd*/
}



// ==== 0x00663410  RocketLocomotionClass::BeginMove  this=RocketLocomotionClass  sig=csp ====
int __stdcall RocketLocomotionClass::BeginMove(RocketLocomotionClass *this, int *a2)
{
  int result; // eax
  int v3; // ecx

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( this ) /*0x663426*/
    {
      *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x663428*/
      *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x66342e*/
      v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x663435*/
      this->TrailerTimer[2] = 0; /*0x66343b*/
      this->TrailerTimer[0] = v3; /*0x663442*/
      *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x663445*/
      *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}



// ==== 0x00663460  RocketLocomotionClass::SmallStub  this=RocketLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_663460(RocketLocomotionClass *this)
{
  return 3; /*0x663465*/
}



// ==== 0x00663470  JumpjetLocomotionClass::ComputePitchYaw  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputePitchYaw(JumpjetLocomotionClass *this, float *a2, int *a3)
{
  JumpjetLocomotionClass *v3; // esi
  int *v4; // edi
  void *vtable1; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float *result; // eax
  float v10; // [esp+0h] [ebp-40h]
  float v11; // [esp+0h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-34h] BYREF
  Matrix3x4 v13; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x663479*/
  v3 = this; /*0x66347e*/
  this = (JumpjetLocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v12) >> 10) /*0x6634a3*/
                                                   + 1) >> 1)
                                   & 0x1F)
                                  - 8);
  v10 = (double)(int)this * -0.1963495408493621; /*0x6634b6*/
  Matrix2D::Rotate(v13.m_Data, v10); /*0x6634b9*/
  v4 = a3; /*0x6634c7*/
  if ( *(float *)v3->__pad_50 == 0.0 ) /*0x6634d0*/
  {
LABEL_13:
    if ( v4 ) /*0x663565*/
      *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->?->?, &this) >> 10) + 1) >> 1) & 0x1F; /*0x663589*/
    goto LABEL_15; /*0x663589*/
  }
  v11 = -*(float *)v3->__pad_50; /*0x6634e0*/
  Matrix3D::RotateZ(v13.m_Data, v11); /*0x6634e3*/
  vtable1 = v3->?[1].?; /*0x6634f0*/
  if ( vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6634fe*/
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200; /*0x663500*/
  }
  else if ( vtable1 == *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x66350d*/
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1304; /*0x66350f*/
  }
  else
  {
    v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252; /*0x663516*/
  }
  *(float *)&this = *(float *)(v6 + 12) * 1.570796326794897; /*0x663526*/
  if ( v4 ) /*0x66352a*/
  {
    if ( *(float *)(v6 + 8) * 1.570796326794897 == *(float *)v3->__pad_50 ) /*0x66353d*/
    {
      v7 = *v4; /*0x66353f*/
      LOBYTE(v7) = *v4 | 0x20; /*0x663541*/
      *v4 = v7; /*0x663543*/
    }
    else if ( *(float *)v3->__pad_50 == *(float *)&this ) /*0x663553*/
    {
      v8 = *v4; /*0x663555*/
      LOBYTE(v8) = *v4 | 0x40; /*0x663557*/
      *v4 = v8; /*0x663559*/
    }
    else
    {
      *v4 = -1; /*0x66355d*/
    }
    goto LABEL_13; /*0x663545*/
  }
LABEL_15:
  result = a2; /*0x66358b*/
  qmemcpy(a2, &v13, 0x30u); /*0x66359a*/
  return result; /*0x66359c*/
}



// ==== 0x006635B0  RocketLocomotionClass::StubReturn96  this=RocketLocomotionClass  sig=csp ====
int RocketLocomotionClass::StubReturn96(RocketLocomotionClass *this)
{
  return 96; /*0x6635b5*/
}



// ==== 0x006635C0  RocketLocomotionClass::ProcessMove  this=RocketLocomotionClass  sig=csp ====
_DWORD *__thiscall RocketLocomotionClass::ProcessMove(RocketLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x6635c3*/
  *(_DWORD *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x6635c9*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    __3_YAXPAX_Z(this); /*0x6635dd*/
  return this->LocomotionClass; /*0x6635e7*/
}



// ==== 0x006635F0  sub_6635F0  this=-  sig=ida-proto ====
void sub_6635F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6635fc*/
  dbl_B052A0 = Math::Sqrt(v0 + v0); /*0x66360e*/
}



// ==== 0x00663620  sub_663620  this=-  sig=ida-proto ====
void sub_663620()
{
  dbl_B05328 = dbl_B052A0 / 60.0; /*0x66362c*/
}



// ==== 0x00663640  sub_663640  this=-  sig=ida-proto ====
void sub_663640()
{
  dbl_B05310 = 1.0 / dbl_B05328; /*0x66364c*/
}



// ==== 0x00663660  sub_663660  this=-  sig=ida-proto ====
void sub_663660()
{
  dbl_B05308 = 0.0174532925199433 * 45.0; /*0x66366c*/
}



// ==== 0x00663680  sub_663680  this=-  sig=ida-proto ====
void sub_663680()
{
  dbl_B052B0 = 0.0174532925199433 * 60.0; /*0x66368c*/
}



// ==== 0x006636A0  sub_6636A0  this=-  sig=ida-proto ====
void sub_6636A0()
{
  dbl_B04E80 = 0.0174532925199433 * 90.0; /*0x6636ac*/
}



// ==== 0x006636C0  sub_6636C0  this=-  sig=ida-proto ====
__int64 sub_6636C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04E80 - dbl_B052B0); /*0x6636d2*/
  result = Math::RoundToInt(v0 * dbl_B052A0 * 0.5); /*0x6636e6*/
  dword_B05330 = result; /*0x6636eb*/
  return result; /*0x6636f0*/
}



// ==== 0x00663700  sub_663700  this=-  sig=ida-proto ====
void sub_663700()
{
  dbl_B052B8 = Math::ArcTan((double)dword_B05330 * 0.00390625); /*0x663717*/
}



// ==== 0x00663730  sub_663730  this=-  sig=ida-proto ====
void sub_663730()
{
  dbl_B05300 = Math::ArcTan((double)(2 * dword_B05330) / dbl_B052A0); /*0x663752*/
}



// ==== 0x00663760  sub_663760  this=-  sig=ida-proto ====
__int64 sub_663760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05330) + 0.5); /*0x66377b*/
  dword_B05324 = result; /*0x663780*/
  return result; /*0x663786*/
}



// ==== 0x00663790  sub_663790  this=-  sig=ida-proto ====
int sub_663790()
{
  word_B04E98 = 0; /*0x663792*/
  word_B04E9A = 0; /*0x663798*/
  return 0; /*0x66379e*/
}



// ==== 0x006637A0  sub_6637A0  this=-  sig=ida-proto ====
int sub_6637A0()
{
  unk_B052F0 = 0; /*0x6637a2*/
  unk_B052F4 = 0; /*0x6637a7*/
  dword_B052F8 = 0; /*0x6637ac*/
  return 0; /*0x6637b1*/
}



// ==== 0x006637C0  sub_6637C0  this=-  sig=ida-proto ====
int sub_6637C0()
{
  dword_B05320 = 0; /*0x6637c5*/
  dword_B05318 = 128; /*0x6637cf*/
  dword_B0531C = 128; /*0x6637d4*/
  return 128; /*0x6637d9*/
}



// ==== 0x006637E0  sub_6637E0  this=-  sig=ida-proto ====
int sub_6637E0()
{
  dword_B04E88 = 0; /*0x6637e2*/
  dword_B04E8C = 0; /*0x6637e7*/
  dword_B04E90 = 0; /*0x6637ec*/
  dword_B04E94 = 0; /*0x6637f1*/
  return 0; /*0x6637f6*/
}



// ==== 0x00663800  sub_663800  this=-  sig=ida-proto ====
int sub_663800()
{
  unk_B052D4 = 0; /*0x663807*/
  unk_B052D8 = 0; /*0x66380c*/
  unk_B052DC = 1; /*0x663811*/
  unk_B052DD = 0; /*0x663818*/
  unk_B052D0 = (int)&DynamicVectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x66381d*/
  unk_B052E4 = 10; /*0x663827*/
  unk_B052E0 = 0; /*0x663831*/
  unk_B052E8 = 0; /*0x663836*/
  unk_B052EC = 0; /*0x66383b*/
  return atexit(sub_663850); /*0x663846*/
}



// ==== 0x00663850  sub_663850  this=-  sig=ida-proto ====
void __cdecl sub_663850()
{
  bool v0; // zf
  int v1; // eax

  if ( unk_B052E0 ) /*0x66385a*/
  {
    do /*0x66389d*/
    {
      __3_YAXPAX_Z(*(void **)unk_B052D4); /*0x663864*/
      v0 = unk_B052E0 == 0; /*0x663872*/
      if ( unk_B052E0 > 0 ) /*0x663874*/
      {
        v1 = 0; /*0x663877*/
        v0 = unk_B052E0-- == 1; /*0x663879*/
        if ( unk_B052E0 > 0 ) /*0x663881*/
        {
          do /*0x663899*/
          {
            ++v1; /*0x663889*/
            *((_DWORD *)unk_B052D4 + v1 - 1) = *((_DWORD *)unk_B052D4 + v1); /*0x66388d*/
          }
          while ( v1 < unk_B052E0 ); /*0x663899*/
          v0 = unk_B052E0 == 0; /*0x66389b*/
        }
      }
    }
    while ( !v0 ); /*0x66389d*/
  }
  unk_B052D0 = (int)&VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x6638a4*/
  if ( unk_B052D4 && unk_B052DD ) /*0x6638b8*/
  {
    __3_YAXPAX_Z(unk_B052D4); /*0x6638bb*/
    unk_B052D4 = 0; /*0x6638c3*/
  }
  unk_B052DD = 0; /*0x6638c9*/
  unk_B052D8 = 0; /*0x6638cf*/
}



// ==== 0x006638E0  ObjectClass::method_6638E0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall sub_6638E0(ObjectClass *this)
{
  this->? = 0; /*0x6638e4*/
  this->? = 0; /*0x6638e7*/
  LOBYTE(this->?) = 1; /*0x6638ea*/
  BYTE1(this->?) = 0; /*0x6638ee*/
  this->AbstractClass = &DynamicVectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x6638f1*/
  this->? = 10; /*0x6638f7*/
  this->? = 0; /*0x6638fe*/
  LOBYTE(this->?) = 0; /*0x663901*/
  this->? = 0; /*0x663904*/
  return &this->AbstractClass; /*0x663907*/
}



// ==== 0x00663910  Network::validatePacket  this=Network  sig=csp ====
void __thiscall Network::validatePacket(Network *this)
{
  char *Network_field_0x10; // eax
  char *v3; // ecx
  int v4; // eax

  while ( this->Network_field_0x10 ) /*0x663916*/
  {
    __3_YAXPAX_Z(*(void **)this->Network_field_0x4); /*0x663921*/
    Network_field_0x10 = (char *)this->Network_field_0x10; /*0x663926*/
    if ( (int)Network_field_0x10 > 0 ) /*0x66392e*/
    {
      v3 = Network_field_0x10 - 1; /*0x663930*/
      v4 = 0; /*0x663933*/
      for ( this->Network_field_0x10 = v3; /*0x66393a*/
            v4 < (int)this->Network_field_0x10;
            *((_DWORD *)this->Network_field_0x4 + v4 - 1) = *((_DWORD *)this->Network_field_0x4 + v4) )
      {
        ++v4; /*0x66393f*/
      }
    }
  }
  this->__pad_14[4] = 0; /*0x663953*/
  *(_DWORD *)&this->__pad_14[8] = 0; /*0x663956*/
}



// ==== 0x00663960  VectorClass::sub  this=VectorClass  sig=csp ====
void __thiscall sub_663960(DynamicVectorClass *this)
{
  int Count; // eax
  int v3; // ecx
  int v4; // eax
  void *Items; // eax

  while ( this->Count ) /*0x663966*/
  {
    __3_YAXPAX_Z(*(void **)this->Items); /*0x663971*/
    Count = this->Count; /*0x663976*/
    if ( Count > 0 ) /*0x66397e*/
    {
      v3 = Count - 1; /*0x663980*/
      v4 = 0; /*0x663983*/
      for ( this->Count = v3; v4 < this->Count; *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) ) /*0x66398a*/
        ++v4; /*0x66398f*/
    }
  }
  Items = (void *)this->Items; /*0x6639a3*/
  this->vtable0 = (int)&VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x6639a6*/
  if ( Items && this->IsAllocated[0] ) /*0x6639b0*/
  {
    __3_YAXPAX_Z(Items); /*0x6639b6*/
    this->Items = 0; /*0x6639be*/
  }
  this->IsAllocated[0] = 0; /*0x6639c1*/
  this->Capacity = 0; /*0x6639c4*/
}



// ==== 0x006639D0  Network::SendMasterPlayerList  this=Network  sig=csp ====
char __thiscall Network::SendMasterPlayerList(Network *this)
{
  Network *v1; // esi
  int v2; // ebp
  int Network_field_0x10; // eax
  _BYTE *v5; // ebx
  const void **Network_field_0x4; // eax
  int v7; // esi
  int v8; // eax
  int Ticks; // [esp+10h] [ebp-16Ch]
  int v11[85]; // [esp+28h] [ebp-154h] BYREF

  v1 = this; /*0x6639d8*/
  memset(v11, 0, 338); /*0x6639e6*/
  Timer::GetTicks(); /*0x6639f6*/
  v2 = 0; /*0x663a02*/
  if ( !this->__pad_14[4] ) /*0x6639ff*/
    return 0; /*0x663a0e*/
  Debug::Log(); /*0x663a1d*/
  Network_field_0x10 = (int)v1->Network_field_0x10; /*0x663a22*/
  LOBYTE(v11[0]) = 1; /*0x663a2a*/
  BYTE1(v11[0]) = Network_field_0x10; /*0x663a2f*/
  if ( Network_field_0x10 > 0 ) /*0x663a33*/
  {
    v5 = (char *)&v11[10] + 3; /*0x663a36*/
    while ( 1 ) /*0x663a40*/
    {
      Network_field_0x4 = (const void **)v1->Network_field_0x4; /*0x663a40*/
      qmemcpy(v5 - 41, Network_field_0x4[v2], 0x2Au); /*0x663a51*/
      if ( IPXManagerClass::send(&unk_A8E9C0, *(char *)Network_field_0x4[v2]) == -1 /*0x663a80*/
        && dword_A83D4C->Object_field_0x30 != (void *)**((char **)this->Network_field_0x4 + v2) )
      {
        Debug::Log(); /*0x663a89*/
        *v5 = 0; /*0x663a8e*/
        *(v5 - 2) = 0; /*0x663a94*/
      }
      ++v2; /*0x663a9c*/
      v5 += 42; /*0x663a9d*/
      if ( v2 >= (int)this->Network_field_0x10 ) /*0x663aa3*/
        break; /*0x663aa3*/
      v1 = this; /*0x663a3c*/
    }
  }
  Network::SendPacket(&unk_A8E9C0.Socket, (int)v11, 338, 1u); /*0x663ab7*/
  Debug::Log(); /*0x663ac1*/
  Ticks = Timer::GetTicks(); /*0x663ae4*/
  while ( HouseClass::GetUpgradeValue(&unk_A8E9C0) > 0 ) /*0x663af3*/
  {
    v7 = 900; /*0x663afc*/
    if ( Ticks != -1 ) /*0x663b02*/
    {
      v8 = Timer::GetTicks() - Ticks; /*0x663b0d*/
      if ( v8 >= 900 ) /*0x663b13*/
        return 1; /*0x663b13*/
      v7 = 900 - v8; /*0x663b15*/
    }
    if ( !v7 ) /*0x663b19*/
      break; /*0x663b19*/
    Event::Dispatch(); /*0x663b1b*/
  }
  return 1; /*0x663a0c*/
}



// ==== 0x00663B40  SessionClass::BuildLobbyPlayerList  this=SessionClass  sig=csp ====
int __thiscall SessionClass::BuildLobbyPlayerList(SessionClass *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ebx
  int v7; // edi
  char *v8; // eax
  int v9; // ebp
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int i; // [esp+8h] [ebp-14h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h] BYREF

  while ( this->unknown_10[0] ) /*0x663b46*/
  {
    __3_YAXPAX_Z(*(void **)this->MPGameMode[0]); /*0x663b53*/
    v2 = this->unknown_10[0]; /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( this->unknown_10[0] = v3; /*0x663b6a*/
            v4 < this->unknown_10[0];
            *(_DWORD *)(this->MPGameMode[0] + 4 * v4 - 4) = *(_DWORD *)(this->MPGameMode[0] + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = stru_A80220.?; /*0x663b85*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x663b94*/
  {
    v6 = *((_DWORD *)stru_A80220.? + i); /*0x663ba6*/
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)v6) && !*(_BYTE *)(v6 + 502) ) /*0x663bbc*/
    {
      v7 = __2_YAPAXI_Z(0x2Au); /*0x663bd8*/
      *(_BYTE *)v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy((char *)(v7 + 1), v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( dword_A8DA84 > 0 ) /*0x663bff*/
      {
        v10 = dword_A8DA78; /*0x663c01*/
        while ( *(_DWORD *)(*v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          ++v10; /*0x663c15*/
          if ( v9 >= dword_A8DA84 ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((Network *)(dword_A8DA78[v9] + 40), &v16, (int)&v17); /*0x663c34*/
        *(_DWORD *)(v7 + 33) = v17; /*0x663c3d*/
        *(_WORD *)(v7 + 37) = *(&dword_A8E2B2 + v9); /*0x663c48*/
      }
LABEL_15:
      *(_BYTE *)(v7 + 41) = 1; /*0x663c50*/
      *(_BYTE *)(v7 + 39) = dword_A8E2AC == *(_DWORD *)(v6 + 48); /*0x663c6a*/
      *(_BYTE *)(v7 + 40) = 1 << i; /*0x663c6d*/
      v11 = this->unknown_08[0]; /*0x663c70*/
      if ( this->unknown_10[0] < v11 /*0x663c93*/
        || (BYTE1(this->unknown_0C[0]) || !v11)
        && (v12 = this->unknown_14[0], v12 > 0)
        && (*(unsigned __int8 (__thiscall **)(SessionClass *, int, _DWORD))(this->GameMode[0] + 8))(this, v11 + v12, 0) )
      {
        v13 = this->unknown_10[0]; /*0x663c9a*/
        v14 = this->MPGameMode[0]; /*0x663c9d*/
        this->unknown_10[0] = v13 + 1; /*0x663ca3*/
        *(_DWORD *)(v14 + 4 * v13) = v7; /*0x663ca6*/
      }
    }
    result = i + 1; /*0x663cb3*/
  }
  return result; /*0x663cc3*/
}



// ==== 0x00663CD0  ObjectClass::method_663CD0  this=ObjectClass  sig=csp ====
char __thiscall sub_663CD0(ObjectClass *this, _BYTE *a2)
{
  Network *v2; // edi
  char v5; // bl
  int uniqueId; // ecx
  int v7; // eax
  _DWORD *vtable1; // esi
  _DWORD *i; // edx
  int v10; // [esp+8h] [ebp-8h] BYREF

  v2 = (Network *)a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( Network::IsBroadcastAddr((Network *)a2) ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  v5 = 0; /*0x663d0c*/
  Network::CopyAddress(v2, &a2, (int)&v10); /*0x663d0e*/
  uniqueId = this->?; /*0x663d13*/
  v7 = 0; /*0x663d16*/
  if ( uniqueId > 0 ) /*0x663d1a*/
  {
    vtable1 = this->?; /*0x663d1c*/
    for ( i = vtable1; v10 != *(_DWORD *)(*i + 33); ++i ) /*0x663d23*/
    {
      if ( ++v7 >= uniqueId ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(_BYTE *)(vtable1[v7] + 40); /*0x663d43*/
  }
  return v5; /*0x663cdf*/
}



// ==== 0x00663D60  Factory::GetLinkedIndex  this=DynamicVector  sig=csp ====
int __thiscall Factory::GetLinkedIndex(Factory *this, int a2)
{
  int result; // eax
  void *v3; // edx
  char **v4; // esi
  char **i; // ecx

  if ( a2 == -1 ) /*0x663d68*/
  {
    LOBYTE(result) = -1; /*0x663d6a*/
  }
  else
  {
    v3 = this->field_10; /*0x663d70*/
    result = 0; /*0x663d73*/
    if ( (int)v3 <= 0 ) /*0x663d79*/
      goto LABEL_9; /*0x663d79*/
    v4 = (char **)this->field_4; /*0x663d7b*/
    for ( i = v4; a2 != **i; ++i ) /*0x663d7e*/
    {
      if ( ++result >= (int)v3 ) /*0x663d8f*/
      {
        LOBYTE(result) = -1; /*0x663d93*/
        return result; /*0x663d96*/
      }
    }
    result = (int)v4[result]; /*0x663d99*/
    LOBYTE(result) = *(_BYTE *)(result + 40); /*0x663d9c*/
    if ( !(_BYTE)result ) /*0x663da1*/
LABEL_9:
      LOBYTE(result) = -1; /*0x663da3*/
  }
  return result; /*0x663d6c*/
}



// ==== 0x00663DB0  ObjectClass::LaunchMultiplayerHost  this=DynamicVector  sig=csp ====
bool __thiscall LaunchMultiplayerHost(bool *this, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // eax
  Network *v5; // esi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  NetworkID *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned __int8 v12; // [esp+4h] [ebp-584h] BYREF
  unsigned __int8 v13; // [esp+5h] [ebp-583h]
  unsigned __int8 v14; // [esp+6h] [ebp-582h]
  unsigned __int8 v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  int Ticks; // [esp+10h] [ebp-578h]
  int v18; // [esp+14h] [ebp-574h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  Waypoint v23; // [esp+28h] [ebp-560h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v25[1024]; // [esp+188h] [ebp-400h] BYREF

  Ticks = Timer::GetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  Waypoint::InitInvalid(&v23); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA((LPSTARTUPINFOA)&v23.__pad_0[28]); /*0x663de9*/
  if ( !(*(int (__thiscall **)(_DWORD *))(*dword_887628 + 72))(dword_887628) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2 ) /*0x663e15*/
  {
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *a2, a2[1], a2[2], a2[3]); /*0x663f0e*/
    if ( *dword_A8DA78 == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    Network::CopyAddress((Network *)(*dword_A8DA78 + 40), &v20, (int)&v12); /*0x663f31*/
    v6 = a2[2]; /*0x663f39*/
    v7 = *a2; /*0x663f3c*/
    v13 = a2[1]; /*0x663f3e*/
    v14 = v6; /*0x663f42*/
    v12 = v7; /*0x663f4a*/
    v15 = a2[3]; /*0x663f5e*/
    NetworkID::Assign(&qword_A8DBB0, &v20, (int)&v12, 0); /*0x663f62*/
    Network::SetPort((Network *)&qword_A8DBB0, *(_WORD *)(*dword_A8DA78 + 40)); /*0x663f78*/
    dword_A8DBBC = *(_WORD *)(*dword_A8DA78 + 40); /*0x663f88*/
    v8 = (NetworkID *)(*dword_A8DA78 + 40); /*0x663f91*/
    qword_A8DBA4 = *v8; /*0x663f96*/
    dword_A8DBAC = *(_DWORD *)v8[1].__pad_0; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !dword_A8DA84 ) /*0x663e22*/
  {
    v4 = (unsigned __int8 *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*dword_887628 + 76))(dword_887628, 0); /*0x663e2d*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *v4, v4[1], v4[2], v4[3]); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (Network *)(*dword_A8DA78 + 40); /*0x663e69*/
  if ( *dword_A8DA78 != -40 ) /*0x663e6c*/
  {
    Network::CopyAddress(v5, &v20, (int)&v12); /*0x663e7e*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", v12, v13, v14, v15); /*0x663ebb*/
    qword_A8DBB0 = *(NetworkID *)&v5->Network_field_0x0; /*0x663ec5*/
    dword_A8DBB8 = v5->Network_field_0x8; /*0x663ed6*/
    dword_A8DBBC = 0; /*0x663edc*/
LABEL_10:
    Network::FormatAddress((Network *)&qword_A8DBB0, 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
LABEL_11:
  if ( CreateProcessA( /*0x663fed*/
         ApplicationName,
         CommandLine,
         0,
         0,
         0,
         0x200u,
         0,
         0,
         (LPSTARTUPINFOA)&v23.__pad_0[28],
         (LPPROCESS_INFORMATION)&v23.__pad_0[12]) )
  {
    this->q01C = *(_DWORD *)&v23.__pad_0[12]; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    Ticks = Timer::GetTicks(); /*0x664053*/
    v18 = v16; /*0x664057*/
    v19 = 1800; /*0x66405b*/
    v10 = 0; /*0x66405f*/
    while ( 1 ) /*0x664067*/
    {
      if ( Ticks != -1 ) /*0x66406c*/
      {
        v11 = Timer::GetTicks() - Ticks; /*0x664077*/
        if ( v11 >= v9 ) /*0x66407d*/
          return v10 != 0; /*0x66407d*/
        v9 -= v11; /*0x66407f*/
      }
      if ( !v9 ) /*0x664083*/
        break; /*0x664083*/
      Event::Dispatch(); /*0x664085*/
      if ( Network::SendPacketThunk2((Network *)&unk_A8E9C0, (int)v25, (int)v22, (int)&v23, (int)v21) && v25[0] == 4 ) /*0x6640b7*/
      {
        v10 = 1; /*0x6640be*/
        Debug::Log(); /*0x6640c3*/
        this->q018 = 1; /*0x6640cb*/
        return v10 != 0; /*0x6640cb*/
      }
      v9 = v19; /*0x664063*/
    }
    return v10 != 0; /*0x6640cf*/
  }
  else
  {
    GetLastError(); /*0x663ffa*/
    Debug::Log(); /*0x664006*/
    return 0; /*0x664012*/
  }
}



// ==== 0x006640E0  Network::ProcessAddressChange  this=Network  sig=csp ====
wchar_t *Network::ProcessAddressChange(Network *this)
{
  wchar_t *result; // eax
  char v2; // si
  char *inited; // eax
  _WORD v4[5]; // [esp+2h] [ebp-9Ah] BYREF
  int v5; // [esp+Ch] [ebp-90h] BYREF
  Waypoint v6; // [esp+10h] [ebp-8Ch] BYREF

  Waypoint::InitInvalid((Waypoint *)&v6.__pad_0[12]); /*0x6640ea*/
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6640ef*/
  if ( *(int *)&stru_A8EB00.?[416] > 0 ) /*0x6640f6*/
  {
    for ( result = (wchar_t *)Network::SendPacketThunk2( /*0x66411c*/
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.__pad_0[12],
                                (int)v4);
          result;
          result = (wchar_t *)Network::SendPacketThunk2(
                                (Network *)&unk_A8E9C0,
                                (int)&dword_B04E9C,
                                (int)&v5,
                                (int)&v6.__pad_0[12],
                                (int)v4) )
    {
      if ( (_BYTE)dword_B04E9C == 5 ) /*0x664132*/
      {
        Debug::Log(); /*0x664151*/
        v2 = BYTE1(dword_B04E9C); /*0x66415e*/
        *(_DWORD *)&v4[1] = *(int *)((char *)&dword_B04E9C + 2); /*0x664169*/
        v4[3] = 0; /*0x664174*/
        Waypoint::InitInvalid(&v6); /*0x664179*/
        NetworkID::Assign((NetworkID *)&v6, &v6.__pad_0[24], (int)&v4[1], 0); /*0x66418e*/
        inited = Network::initConnection(&v6.__pad_0[28], (int)dword_A83D4C->Object_field_0x30, &v6, v2); /*0x6641a7*/
        if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6641b6*/
        {
          qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, inited, 0x6Fu); /*0x6641d2*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6641df*/
          dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6641f6*/
          ++stru_A80220.lineTrailer; /*0x6641fc*/
        }
      }
      else
      {
        Debug::Log(); /*0x66413f*/
      }
    }
  }
  return result; /*0x66422a*/
}



// ==== 0x00664240  NetworkManager::SetPlayerAddress  this=NetworkManager  sig=csp ====
int __thiscall NetworkManager::SetPlayerAddress(NetworkManager *this, int a2, _DWORD *a3)
{
  int v4; // edx
  int result; // eax
  int NetworkManager_field_0x04; // esi
  char **i; // ecx
  int v8; // edx
  int v9; // [esp+Ch] [ebp-8h] BYREF

  Network::CopyAddress((Network *)a3, &a3, (int)&v9); /*0x664256*/
  v4 = this->q004; /*0x66425b*/
  result = 0; /*0x66425e*/
  if ( v4 > 0 ) /*0x664262*/
  {
    NetworkManager_field_0x04 = this->NetworkManager_field_0x04; /*0x664264*/
    for ( i = (char **)NetworkManager_field_0x04; **i != a2; ++i ) /*0x66426b*/
    {
      if ( ++result >= v4 ) /*0x66427c*/
        return result; /*0x66427c*/
    }
    v8 = *(_DWORD *)(NetworkManager_field_0x04 + 4 * result); /*0x664287*/
    result = v9; /*0x66428a*/
    *(_DWORD *)(v8 + 33) = v9; /*0x66428e*/
  }
  return result; /*0x66427e*/
}



// ==== 0x006642A0  Network::processAcknowledgment  this=Network  sig=csp ====
char *__thiscall Network::processAcknowledgment(Network *this, void *a2)
{
  int v3; // esi
  int v5; // [esp+Ch] [ebp-10h] BYREF
  __int16 v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h] BYREF

  if ( (byte_B052A8 & 1) == 0 ) /*0x6642b2*/
  {
    byte_B052A8 |= 1u; /*0x6642bd*/
    Waypoint::InitInvalid(&stru_B052C0); /*0x6642c3*/
    atexit(nullsub_33); /*0x6642cd*/
  }
  v5 = 0; /*0x6642db*/
  v6 = 0; /*0x6642e5*/
  Struct::Copy6Bytes(stru_B052C0.__pad_0, (int)&v5); /*0x6642ea*/
  Network::SetPort((Network *)&stru_B052C0, 0); /*0x6642f6*/
  v3 = 0; /*0x6642fe*/
  if ( (int)this->Network_field_0x10 > 0 ) /*0x664302*/
  {
    while ( _strcmpi((char *)(*((_DWORD *)this->Network_field_0x4 + v3) + 1), (char *)a2) ) /*0x66431b*/
    {
      if ( ++v3 >= (int)this->Network_field_0x10 ) /*0x664323*/
        return (char *)&stru_B052C0; /*0x664330*/
    }
    v7 = *(_DWORD *)(*((_DWORD *)this->Network_field_0x4 + v3) + 33); /*0x664346*/
    Struct::Copy6Bytes(stru_B052C0.__pad_0, (int)&v7); /*0x66434a*/
    Network::SetPort((Network *)&stru_B052C0, *(_WORD *)(*((_DWORD *)this->Network_field_0x4 + v3) + 37)); /*0x66435f*/
  }
  return (char *)&stru_B052C0; /*0x664325*/
}



// ==== 0x00664380  nullsub_33  this=-  sig=ida-proto ====
void __cdecl nullsub_33()
{
  ; /*0x664380*/
}



// ==== 0x00664390  Network::handleDisconnect  this=Network  sig=csp ====
__int16 __thiscall Network::handleDisconnect(Network *this, void *a2)
{
  int v3; // esi

  v3 = 0; /*0x664395*/
  if ( (int)this->Network_field_0x10 <= 0 ) /*0x66439c*/
    return 0; /*0x6643bf*/
  while ( _strcmpi((char *)(*((_DWORD *)this->Network_field_0x4 + v3) + 1), (char *)a2) ) /*0x6643b5*/
  {
    if ( ++v3 >= (int)this->Network_field_0x10 ) /*0x6643bd*/
      return 0; /*0x6643bd*/
  }
  return *(_WORD *)(*((_DWORD *)this->Network_field_0x4 + v3) + 37); /*0x6643bf*/
}



// ==== 0x006643E0  Network::checkTimeout  this=Network  sig=csp ====
int __thiscall Network::checkTimeout(Network *this, int a2)
{
  if ( a2 >= (int)this->Network_field_0x10 ) /*0x6643e9*/
    return 0; /*0x6643f5*/
  else
    return *((_DWORD *)this->Network_field_0x4 + a2) + 1; /*0x6643f1*/
}



// ==== 0x00664400  Network::reconnect  this=Network  sig=csp ====
char *__thiscall Network::reconnect(Network *this, int a2, __int16 a3)
{
  char *Network_field_0x10; // edx
  char *result; // eax
  char **Network_field_0x4; // esi
  char **i; // ecx

  Network_field_0x10 = (char *)this->Network_field_0x10; /*0x664400*/
  result = 0; /*0x664404*/
  if ( (int)Network_field_0x10 > 0 ) /*0x66440a*/
  {
    Network_field_0x4 = (char **)this->Network_field_0x4; /*0x66440c*/
    for ( i = Network_field_0x4; **i != a2; ++i ) /*0x664413*/
    {
      if ( (int)++result >= (int)Network_field_0x10 ) /*0x664424*/
        return result; /*0x664424*/
    }
    result = Network_field_0x4[(_DWORD)result]; /*0x66442c*/
    *(_WORD *)(result + 37) = a3; /*0x664434*/
  }
  return result; /*0x664426*/
}



// ==== 0x00664440  EventClass::validateEventType  this=EventClass  sig=csp ====
int __thiscall EventClass::validateEventType(EventClass *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  char *v8; // eax
  Network *v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 v14[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = dword_A8E2CC; /*0x664444*/
  if ( dword_A8E2CC == -1 ) /*0x664451*/
  {
    v3 = *(_DWORD *)this->__pad_10; /*0x664453*/
    v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        v5 = *(char **)(this->EventClass_field_0x4 + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < *(_DWORD *)this->__pad_10 ); /*0x66447c*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_10; /*0x664480*/
    v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        v8 = *(char **)(this->EventClass_field_0x4 + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < *(_DWORD *)this->__pad_10 ); /*0x6644a7*/
    }
  }
  if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0) /*0x6644d2*/
    || v1 == -1
    || v1 != dword_A83D4C->Object_field_0x30
    || dword_A8DA84 <= 2 )
  {
    return v1; /*0x664526*/
  }
  v9 = 0; /*0x6644d4*/
  v10 = 0; /*0x6644d6*/
  if ( dword_A8DA84 > 0 ) /*0x6644db*/
  {
    v11 = dword_A8DA78; /*0x6644dd*/
    while ( *(_DWORD *)(*v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      ++v11; /*0x6644eb*/
      if ( v10 >= dword_A8DA84 ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (Network *)(dword_A8DA78[v10] + 40); /*0x6644fd*/
  }
LABEL_23:
  Network::CopyAddress(v9, &v13, (int)v14); /*0x664500*/
  LaunchMultiplayerHost((bool *)this, v14); /*0x664516*/
  return v1; /*0x66451c*/
}



// ==== 0x00664530  NetworkEventQueueClass::WaitForResponse  this=NetworkEventQueueClass  sig=csp ====
int __thiscall NetworkEventQueueClass::WaitForResponse(NetworkEventQueueClass *this)
{
  int result; // eax
  int v3; // esi
  int Ticks; // [esp+8h] [ebp-16Ch]
  _BYTE v5[340]; // [esp+20h] [ebp-154h] BYREF

  memset(v5, 0, 338); /*0x664545*/
  result = Timer::GetTicks(); /*0x664551*/
  LOBYTE(result) = *((_BYTE *)this + 24); /*0x66455a*/
  if ( (_BYTE)result ) /*0x664567*/
  {
    result = *((_DWORD *)this + 7); /*0x66456d*/
    if ( result ) /*0x664572*/
    {
      v5[0] = 3; /*0x664589*/
      Network::SendPacket(&unk_A8E9C0.Socket, (int)v5, 338, 1u); /*0x66458e*/
      Ticks = Timer::GetTicks(); /*0x6645ae*/
      for ( result = HouseClass::GetUpgradeValue(&unk_A8E9C0); result > 0; result = HouseClass::GetUpgradeValue(&unk_A8E9C0) ) /*0x6645bd*/
      {
        result = Ticks; /*0x6645c2*/
        v3 = 900; /*0x6645c6*/
        if ( Ticks != -1 ) /*0x6645cc*/
        {
          result = Timer::GetTicks() - Ticks; /*0x6645d7*/
          if ( result >= 900 ) /*0x6645dd*/
            return result; /*0x6645dd*/
          v3 = 900 - result; /*0x6645df*/
        }
        if ( !v3 ) /*0x6645e3*/
          break; /*0x6645e3*/
        Event::Dispatch(); /*0x6645e5*/
      }
    }
  }
  return result; /*0x6645f8*/
}



// ==== 0x00664610  Process::WaitForExit  this=Process  sig=csp ====
bool __thiscall Process::WaitForExit(Process *this, DWORD dwMilliseconds, char a3)
{
  const HANDLE *v3; // esi
  BOOL v5; // eax

  v3 = (const HANDLE *)(this + 7); /*0x664614*/
  Debug::Log(); /*0x66461d*/
  if ( !*v3 ) /*0x664629*/
    return 1; /*0x664629*/
  if ( WaitForMultipleObjects(1u, v3, 0, dwMilliseconds) != 258 ) /*0x664644*/
  {
    Debug::Log(); /*0x6646a7*/
    *v3 = 0; /*0x6646af*/
    return 1; /*0x6646b5*/
  }
  if ( !a3 ) /*0x66464c*/
    return 0; /*0x66464e*/
  Debug::Log(); /*0x66465a*/
  v5 = TerminateProcess(*v3, 0); /*0x664667*/
  if ( v5 ) /*0x664671*/
  {
    *v3 = 0; /*0x664694*/
    return v5; /*0x66469b*/
  }
  else
  {
    GetLastError(); /*0x664674*/
    Debug::Log(); /*0x664680*/
    return 0; /*0x66468c*/
  }
}



// ==== 0x006646C0  NetworkManager::RemovePlayer  this=DynamicVector  sig=csp ====
char __thiscall NetworkManager::RemovePlayer(int this, int a2)
{
  int i; // esi
  char *v3; // eax
  char result; // al
  _BYTE v5[340]; // [esp+Ch] [ebp-154h] BYREF

  memset(v5, 0, 338); /*0x6646d8*/
  for ( i = 0; i < *(_DWORD *)(this + 16); ++i ) /*0x6646eb*/
  {
    v3 = *(char **)(*(_DWORD *)(this + 4) + 4 * i); /*0x6646f0*/
    if ( *v3 == a2 ) /*0x6646f8*/
    {
      v3[41] = 0; /*0x6646fa*/
      v3[39] = 0; /*0x6646fd*/
    }
  }
  result = *(_BYTE *)(this + 24); /*0x664708*/
  if ( result ) /*0x664710*/
  {
    v5[0] = 2; /*0x664717*/
    v5[1] = a2; /*0x66471c*/
    Debug::Log(); /*0x664720*/
    return Network::SendPacket((int)unk_A8E9C0, (int)v5, 338, 1u); /*0x664739*/
  }
  return result; /*0x66470b*/
}



// ==== 0x00664750  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_664750(ObjectClass *this, char a2)
{
  char result; // al
  _BYTE v3[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v3, 0, 338); /*0x664764*/
  result = this->?; /*0x66476c*/
  if ( result ) /*0x664772*/
  {
    v3[0] = 6; /*0x664780*/
    v3[1] = a2; /*0x664785*/
    Debug::Log(); /*0x664789*/
    return Network::SendPacket(&unk_A8E9C0.Socket, (int)v3, 338, 1u); /*0x6647a2*/
  }
  return result; /*0x66476f*/
}



// ==== 0x006647B0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall RocketLocomotionClass_17::ddtor(_DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6647b6*/
  this->m_10 = 0; /*0x6647b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6647c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6647c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6647ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6647d1*/
  this->m_8 = 0; /*0x6647d4*/
}



// ==== 0x006647E0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::BeginMove  this=DynamicVector  sig=csp ====
unsigned int __thiscall RocketLocomotionClass_17::BeginMove(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6647e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/
}



// ==== 0x00664800  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::UpdateMovement  this=VectorClass  sig=csp ====
int __thiscall RocketLocomotionClass_17::UpdateMovement(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x66480a*/
}



// ==== 0x00664810  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall RocketLocomotionClass_17::AddRef(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x664812*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( m_8 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x664825*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x66482b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= m_8 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/
}



// ==== 0x00664850  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall RocketLocomotionClass_17::SetCapacity(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
    LOBYTE(this->m_C) = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x66487e*/
    LOBYTE(this->m_C) = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x664895*/
      {
        m_8 = this->m_8; /*0x66489c*/
        if ( a2 < m_8 ) /*0x6648a1*/
          m_8 = a2; /*0x6648a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( BYTE1(this->m_C) ) /*0x6648bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6648c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6648ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6648d7*/
      this->m_8 = a2; /*0x6648df*/
      BYTE1(this->m_C) = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }
}



// ==== 0x00664900  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall RocketLocomotionClass_17::Destroy(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x66490d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x664913*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x66491b*/
  }
  BYTE1(this->m_C) = 0; /*0x66491e*/
  this->m_8 = 0; /*0x664921*/
}



// ==== 0x00664930  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall RocketLocomotionClass_17::IndexOf(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x664930*/
    return 0; /*0x664938*/
  m_8 = this->m_8; /*0x66493e*/
  result = 0; /*0x664941*/
  if ( m_8 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= m_8 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/
}



// ==== 0x00664970  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall RocketLocomotionClass_17::PointerToIndex(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x664970*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x664985*/
  else
    return 0; /*0x664977*/
}



// ==== 0x00664990  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::Release  this=DynamicVector  sig=csp ====
char __thiscall RocketLocomotionClass_17::Release(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6649ba*/
    LOBYTE(this->m_C) = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6649c8*/
    {
      m_8 = this->m_8; /*0x6649cf*/
      if ( a2 < m_8 ) /*0x6649d4*/
        m_8 = a2; /*0x6649d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( BYTE1(this->m_C) ) /*0x6649ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6649f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x664a01*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x664a0a*/
    this->m_8 = a2; /*0x664a12*/
    BYTE1(this->m_C) = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x664a1e*/
  }
  v7 = this->m_8; /*0x664a21*/
  if ( v7 < this->m_10 ) /*0x664a29*/
    this->m_10 = v7; /*0x664a2b*/
  return 1; /*0x664a2e*/
}



// ==== 0x00664A40  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::Launch  this=DynamicVector  sig=csp ====
int __thiscall RocketLocomotionClass_17::Launch(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( m_10 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= m_10 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/
}



// ==== 0x00664A70  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall RocketLocomotionClass_17::Constructor(
        _VectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x664a73*/
  *(_DWORD *)this->__pad_0 = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664a76*/
  if ( v3 && BYTE1(this->m_C) ) /*0x664a80*/
  {
    __3_YAXPAX_Z(v3); /*0x664a88*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x664a90*/
  }
  BYTE1(this->m_C) = 0; /*0x664a9b*/
  this->m_8 = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    __3_YAXPAX_Z(this); /*0x664aab*/
  return this->__pad_0; /*0x664ab5*/
}



// ==== 0x00664AC0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RocketLocomotionClass_17::QueryInterface(
        _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x664ac3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664ac6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x664ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x664ad8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x664ae0*/
  }
  BYTE1(this->m_C) = 0; /*0x664aeb*/
  this->m_8 = 0; /*0x664af1*/
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    __3_YAXPAX_Z(this); /*0x664afb*/
  return this->__pad_0; /*0x664b05*/
}



// ==== 0x00664B10  sub_664B10  this=-  sig=ida-proto ====
void sub_664B10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x664b1c*/
  dbl_B05358 = Math::Sqrt(v0 + v0); /*0x664b2e*/
}



// ==== 0x00664B40  sub_664B40  this=-  sig=ida-proto ====
void sub_664B40()
{
  dbl_B053A8 = dbl_B05358 / 60.0; /*0x664b4c*/
}



// ==== 0x00664B60  sub_664B60  this=-  sig=ida-proto ====
void sub_664B60()
{
  dbl_B05390 = 1.0 / dbl_B053A8; /*0x664b6c*/
}



// ==== 0x00664B80  sub_664B80  this=-  sig=ida-proto ====
void sub_664B80()
{
  dbl_B05388 = 0.0174532925199433 * 45.0; /*0x664b8c*/
}



// ==== 0x00664BA0  sub_664BA0  this=-  sig=ida-proto ====
void sub_664BA0()
{
  dbl_B05360 = 0.0174532925199433 * 60.0; /*0x664bac*/
}



// ==== 0x00664BC0  sub_664BC0  this=-  sig=ida-proto ====
void sub_664BC0()
{
  dbl_B05338 = 0.0174532925199433 * 90.0; /*0x664bcc*/
}



// ==== 0x00664BE0  sub_664BE0  this=-  sig=ida-proto ====
__int64 sub_664BE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05338 - dbl_B05360); /*0x664bf2*/
  result = Math::RoundToInt(v0 * dbl_B05358 * 0.5); /*0x664c06*/
  dword_B053B0 = result; /*0x664c0b*/
  return result; /*0x664c10*/
}



// ==== 0x00664C20  sub_664C20  this=-  sig=ida-proto ====
void sub_664C20()
{
  dbl_B05368 = Math::ArcTan((double)dword_B053B0 * 0.00390625); /*0x664c37*/
}



// ==== 0x00664C50  sub_664C50  this=-  sig=ida-proto ====
void sub_664C50()
{
  dbl_B05380 = Math::ArcTan((double)(2 * dword_B053B0) / dbl_B05358); /*0x664c72*/
}



// ==== 0x00664C80  sub_664C80  this=-  sig=ida-proto ====
__int64 sub_664C80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B053B0) + 0.5); /*0x664c9b*/
  dword_B053A4 = result; /*0x664ca0*/
  return result; /*0x664ca6*/
}



// ==== 0x00664CB0  sub_664CB0  this=-  sig=ida-proto ====
int sub_664CB0()
{
  word_B05350 = 0; /*0x664cb2*/
  word_B05352 = 0; /*0x664cb8*/
  return 0; /*0x664cbe*/
}



// ==== 0x00664CC0  sub_664CC0  this=-  sig=ida-proto ====
int sub_664CC0()
{
  dword_B05370 = 0; /*0x664cc2*/
  dword_B05374 = 0; /*0x664cc7*/
  dword_B05378 = 0; /*0x664ccc*/
  return 0; /*0x664cd1*/
}



// ==== 0x00664CE0  sub_664CE0  this=-  sig=ida-proto ====
int sub_664CE0()
{
  dword_B053A0 = 0; /*0x664ce5*/
  dword_B05398 = 128; /*0x664cef*/
  dword_B0539C = 128; /*0x664cf4*/
  return 128; /*0x664cf9*/
}



// ==== 0x00664D00  sub_664D00  this=-  sig=ida-proto ====
int sub_664D00()
{
  dword_B05340 = 0; /*0x664d02*/
  dword_B05344 = 0; /*0x664d07*/
  dword_B05348 = 0; /*0x664d0c*/
  dword_B0534C = 0; /*0x664d11*/
  return 0; /*0x664d16*/
}



// ==== 0x00664D20  HouseClass::InitTypeVectors  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::InitTypeVectors(HouseClass *this, int a2)
{
  int *p_repairStationsCapacity; // edi

  p_repairStationsCapacity = &this->repairStationsCapacity; /*0x664d26*/
  DynamicVector::Constructor_VoxelAnim((DynamicVector *)&this->repairStationsCapacity, 0, 0); /*0x664d2d*/
  *p_repairStationsCapacity = (int)&TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x664d32*/
  DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&this->rofMultiplier[1], 0, 0); /*0x664d44*/
  this->rofMultiplier[1] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x664d49*/
  DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)this->buildDelay, 0, 0); /*0x664d5b*/
  this->buildDelay[0] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x664d60*/
  DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)this->__pad_13C, 0, 0); /*0x664d72*/
  *(_DWORD *)this->__pad_13C = &TypeList<AnimTypeClass const *>::`vftable'; /*0x664d77*/
  DynamicVectorClass::AnimTy... [19775 chars total]



// ==== 0x00665650  RulesClass::RulesClass  this=RulesClass  sig=csp ====
int __thiscall RulesClass::RulesClass(RulesClass *this)
{
  float *p_RadarEventColorSpeed; // ebp
  char *v3; // ecx
  char *v4; // ebp
  int v5; // edx
  int v6; // eax
  char *v7; // edi

  this->DetailMinFrameRateNormal = 15; /*0x665665*/
  this->DetailMinFrameRateMovie = 20; /*0x66566b*/
  this->DetailBufferZoneWidth = 5; /*0x665672*/
  this->AmmoCrateDamage = 100; /*0x665675*/
  this->LargeVisceroid = 0; /*0x66567c*/
  this->SmallVisceroid = 0; /*0x66567f*/
  this->AttackingAircraftSightRange = 5; /*0x665682*/
  this->TunnelSpeed[0] = 0; /*0x665685*/
  this->TunnelSpeed[1] = 1072693248; /*0x665688*/
  this->TiberiumHeal[0] = 286331153; /*0x66568f*/
  this->TiberiumHeal[1] = 1066471697; /*0x66569b*/
  this->SelfHealInfantryFrames = 1000; /*0x6656a7*/
  this->SelfHealInfantryAmount = 1; /*0x6656aa*/
  this->SelfHealUnitFrames = 1000; /*0x6656ad*/
  this->SelfHealUnitAmount = 1; /*0x6656b0*/
  this->FreeMCV = 0; /*0x6656b3*/
  this->BerzerkAllowed = 0; /*0x6656b6*/
  this->PoseDir = ... [67687 chars total]



// ==== 0x00667A30  RulesClass::DTOR  this=RulesClass  sig=csp ====
int __thiscall RulesClass::DTOR(RulesClass *this)
{
  char *v2; // ecx
  void *Harvester; // eax
  void *Production; // eax
  void *v5; // eax
  UnitTypeClass *UnitCrateType; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *AirstripLimit; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *IronCurtainDuration; // eax
  void *IvanDamage; // eax
  WarheadTypeClass *MutateExplosionWarhead; // eax
  InfantryTypeClass *Technician; // eax
  void *SpyPowerBlackout; // eax
  void *ChronoDistanceFactor; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *ChuteSound; // eax
  void *v30; // eax
  void *RevealTriggerRadius; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *v35; // eax
  void *v36; // eax
  void *v37; // eax
  void *v38; // eax
  void *v39; // eax
  void *v40; // eax
  vo... [28941 chars total]



// ==== 0x006686C0  ObjectClass::ResetRules  this=ObjectClass  sig=csp ====
int __thiscall ResetRules(ObjectClass *this)
{
  void *v2; // edi
  char *v3; // ebp
  char *v4; // eax
  int v5; // ecx
  char *v6; // esi
  int v7; // esi
  int KeyCount; // ebx
  unsigned __int8 *StringByIndex; // eax
  int Coord; // eax
  char *v11; // edx
  char v12; // cl
  ObjectClass *v14; // [esp+40h] [ebp-E0h]
  unsigned __int8 v15[2]; // [esp+50h] [ebp-D0h] BYREF
  char v16; // [esp+52h] [ebp-CEh]
  RulesClass *v17; // [esp+54h] [ebp-CCh]
  char v18[4]; // [esp+58h] [ebp-C8h] BYREF
  CCINIClass v19; // [esp+5Ch] [ebp-C4h] BYREF
  CCFileClass v20; // [esp+B4h] [ebp-6Ch] BYREF
  char v21[12]; // [esp+10Ch] [ebp-14h] BYREF
  int v22; // [esp+118h] [ebp-8h]
  INIClass *v23; // [esp+124h] [ebp+4h]

  v17 = (RulesClass *)this; /*0x6686d3*/
  while ( *(_DWORD *)stru_B054D0.__tail_10 ) /*0x6686d7*/
  {
    v2 = **(void ***)&stru_B054D0.m_1[3]; /*0x6686de*/
    if ( **(_DWORD **)&stru_B054D0.m_1[3] ) /*0x6686de*/
    {
      ColorScheme::Destructor(**(ColorScheme ***)&stru_B054D0.m_1[3]); /*0x6686e6*/
      __3_YAXPAX_Z(v2); /*0x6686ec*/
    }
  }
  *(_DWORD *)stru_B054D0.__tail_10 = 0; /*0x668702*/
  VectorClass_ptr_ColorScheme::Remove(&stru_B054D0); /*0x66870c*/
  System_Reset(v14); /*0x668711*/
  while ( *(_DWORD *)&stru_A8EB00.?[204] ) /*0x66871d*/
  {
    if ( **(_DWORD **)&stru_A8EB00.?[192] ) /*0x668725*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A8EB00.?[192] + 32))( /*0x66872f*/
        **(_DWORD **)&stru_A8EB00.?[192],
        1);
  }
  while ( dword_A8E8E0 ) /*0x668742*/
  {
    if ( *(_DWORD *)dword_A8E8D4 ) /*0x668749*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E8D4 + 32))(*(_DWORD *)dword_A8E8D4, 1); /*0x668753*/
  }
  while ( *(_DWORD *)&FootClass_Array.? ) /*0x668766*/
  {
    if ( *(_DWORD *)FootClass_Array.?[5] ) /*0x66876d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)FootClass_Array.?[5] + 32))(*(_DWORD *)FootClass_Array.?[5], 1); /*0x668777*/
  }
  while ( *(_DWORD *)&stru_A83D50.__pad_3C[4] ) /*0x66878a*/
  {
    if ( **(_DWORD **)stru_A83D50.__pad_34 ) /*0x668791*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)stru_A83D50.__pad_34 + 32))( /*0x66879b*/
        **(_DWORD **)stru_A83D50.__pad_34,
        1);
  }
  while ( *(_DWORD *)&stru_A8EB00.?[68] ) /*0x6687ae*/
  {
    if ( **(_DWORD **)&stru_A8EB00.?[56] ) /*0x6687b5*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A8EB00.?[56] + 32))(**(_DWORD **)&stru_A8EB00.?[56], 1); /*0x6687bf*/
  }
  while ( dword_A8E328 ) /*0x6687d2*/
  {
    if ( *(_DWORD *)dword_A8E31C ) /*0x6687d9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E31C + 32))(*(_DWORD *)dword_A8E31C, 1); /*0x6687e3*/
  }
  while ( dword_A8E358 ) /*0x6687f6*/
  {
    if ( *(_DWORD *)dword_A8E34C ) /*0x6687fd*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E34C + 32))(*(_DWORD *)dword_A8E34C, 1); /*0x668807*/
  }
  while ( dword_A83CF0 ) /*0x66881a*/
  {
    if ( *(_DWORD *)dword_A83CE4 ) /*0x668821*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83CE4 + 32))(*(_DWORD *)dword_A83CE4, 1); /*0x66882b*/
  }
  while ( dword_A8B228 ) /*0x66883e*/
  {
    if ( *(_DWORD *)dword_A8B21C ) /*0x668845*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8B21C + 32))(*(_DWORD *)dword_A8B21C, 1); /*0x66884f*/
  }
  while ( dword_A83C90 ) /*0x668862*/
  {
    if ( *(_DWORD *)dword_A83C84 ) /*0x668869*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C84 + 32))(*(_DWORD *)dword_A83C84, 1); /*0x668873*/
  }
  while ( dword_A83C78 ) /*0x668886*/
  {
    if ( *(_DWORD *)dword_A83C6C ) /*0x66888d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C6C + 32))(*(_DWORD *)dword_A83C6C, 1); /*0x668897*/
  }
  while ( dword_A8E340 ) /*0x6688aa*/
  {
    if ( *(_DWORD *)dword_A8E334 ) /*0x6688b1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E334 + 32))(*(_DWORD *)dword_A8E334, 1); /*0x6688bb*/
  }
  while ( FootClass_Array.?[0] ) /*0x6688ce*/
  {
    if ( *(_DWORD *)FootClass_Array.?[3] ) /*0x6688d5*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)FootClass_Array.?[3] + 32))(*(_DWORD *)FootClass_Array.?[3], 1); /*0x6688df*/
  }
  while ( g_WeaponTypePool ) /*0x6688f2*/
  {
    if ( *(_DWORD *)g_WeaponTypeConfig ) /*0x6688f9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_WeaponTypeConfig + 32))(*(_DWORD *)g_WeaponTypeConfig, 1); /*0x668903*/
  }
  while ( g_WarheadTypePool ) /*0x668916*/
  {
    if ( *(_DWORD *)dword_8874C4 ) /*0x66891d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_8874C4 + 32))(*(_DWORD *)dword_8874C4, 1); /*0x668927*/
  }
  while ( stru_A8EB00.ObjectTypeClass[14] ) /*0x66893a*/
  {
    if ( *(_DWORD *)stru_A8EB00.ObjectTypeClass[11] ) /*0x668941*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)stru_A8EB00.ObjectTypeClass[11] + 32))( /*0x66894b*/
        *(_DWORD *)stru_A8EB00.ObjectTypeClass[11],
        1);
  }
  while ( *(_DWORD *)&stru_A83D50.__pad_3C[28] ) /*0x66895e*/
  {
    if ( **(_DWORD **)&stru_A83D50.__pad_3C[16] ) /*0x668965*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A83D50.__pad_3C[16] + 32))( /*0x66896f*/
        **(_DWORD **)&stru_A83D50.__pad_3C[16],
        1);
  }
  while ( stru_A83D50.SuperClass_field_0x28 ) /*0x668982*/
  {
    if ( **(_DWORD **)&stru_A83D50.__pad_14[8] ) /*0x668989*/
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&stru_A83D50.__pad_14[8] + 32))( /*0x668993*/
        **(_DWORD **)&stru_A83D50.__pad_14[8],
        1);
  }
  while ( stru_A80220.? ) /*0x6689a6*/
  {
    if ( *(_DWORD *)stru_A80220.? ) /*0x6689ad*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)stru_A80220.? + 32))(*(_DWORD *)stru_A80220.?, 1); /*0x6689b7*/
  }
  while ( dword_A83CA8 ) /*0x6689ca*/
  {
    if ( *(_DWORD *)dword_A83C9C ) /*0x6689d1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C9C + 32))(*(_DWORD *)dword_A83C9C, 1); /*0x6689db*/
  }
  if ( INIClass::BinarySearchSection((int)v23, (unsigned __int8 *)aMaximums) ) /*0x6689f6*/
    *((_DWORD *)this + 1332) = INIClass::ReadInt_Overwrite( /*0x668a1e*/
                                 (bool *)v23->__pad_0,
                                 (unsigned __int8 *)aMaximums,
                                 aPlayers,
                                 *((_DWORD *)this + 1332));
  RulesClass::Addition((RulesClass *)this); /*0x668a27*/
  v3 = (char *)this + 6260; /*0x668a2e*/
  v15[0] = 0; /*0x668a34*/
  v15[1] = 0; /*0x668a39*/
  v4 = v3; /*0x668a43*/
  v5 = 16; /*0x668a45*/
  do /*0x668a56*/
  {
    v6 = v4; /*0x668a4a*/
    v4 += 3; /*0x668a4c*/
    --v5; /*0x668a4f*/
    *(_WORD *)v6 = 0; /*0x668a50*/
    v6[2] = 0; /*0x668a53*/
  }
  while ( v5 ); /*0x668a56*/
  CCFileClass::Construct(&v20, aLangruleIni); /*0x668a61*/
  v7 = 0; /*0x668a66*/
  if ( (unsigned __int8)CCFileClass::Open(&v20, 0) == 1 ) /*0x668a74*/
  {
    v19.?[0] = 0; /*0x668a7e*/
    v19.?[1] = 0; /*0x668a82*/
    GenericNode::Constructor((GenericNode *)v19.?); /*0x668a86*/
    GenericNode::Constructor((GenericNode *)&v19.?); /*0x668a8f*/
    LinkedList::Prepend((LinkedList *)v19.?, (int)&v19.?); /*0x668aa5*/
    v19.?[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x668ab6*/
    memset(&v19.?[8], 0, 13); /*0x668abe*/
    memset(&v19.?, 0, 9); /*0x668acf*/
    *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x668adc*/
    if ( CCINIClass::Load(&v19, (int)&v20, 1, 0) > 1 ) /*0x668aec*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x668af2*/
      goto LABEL_99; /*0x668af7*/
    }
    RulesClass::Addition(v17); /*0x668b05*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x668b0e*/
  }
  if ( INIClass::BinarySearchSection((int)v23, (unsigned __int8 *)aColoradd) ) /*0x668b1b*/
  {
    KeyCount = INIClass::GetKeyCount(v23->__pad_0, (unsigned __int8 *)aColoradd); /*0x668b37*/
    if ( KeyCount > 0 ) /*0x668b3b*/
    {
      do /*0x668b8a*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v23->__pad_0, (unsigned __int8 *)aColoradd, v7); /*0x668b47*/
        v15[0] = 0; /*0x668b60*/
        v15[1] = 0; /*0x668b65*/
        v16 = 0; /*0x668b6a*/
        Coord = INIClass::GetCoord(v23, (int)v18, (unsigned __int8 *)aColoradd, StringByIndex, v15); /*0x668b6f*/
        v11 = v3; /*0x668b76*/
        ++v7; /*0x668b78*/
        v3 += 3; /*0x668b79*/
        v12 = *(_BYTE *)(Coord + 2); /*0x668b81*/
        *(_WORD *)v11 = *(_WORD *)Coord; /*0x668b84*/
        v11[2] = v12; /*0x668b87*/
      }
      while ( v7 < KeyCount ); /*0x668b8a*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 && dword_A8B23C ) /*0x668b9e*/
  {
    GameConfig::Constructor((GameConfig *)dword_A8B23C); /*0x668ba0*/
    RulesClass::Addition(v17); /*0x668baa*/
  }
LABEL_99:
  *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x668baf*/
  v22 = 0; /*0x668bbe*/
  Vector::Clear((int)v21); /*0x668bc5*/
  *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x668bce*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x668bdb*/
}



// ==== 0x00668BF0  RulesClass::Addition  this=RulesClass  sig=csp ====
int __thiscall RulesClass::Addition(RulesClass *this)
{
  INIClass *v1; // esi
  int v3; // ebx
  char *v4; // ebp
  unsigned __int8 *v5; // eax
  int Coord; // eax
  char *v7; // edx
  char v8; // cl
  bool v9; // cc
  int v10; // ebp
  int i; // ebx
  unsigned __int8 *v12; // eax
  int v13; // ebp
  int j; // ebx
  unsigned __int8 *v15; // eax
  int v16; // ebp
  int k; // ebx
  unsigned __int8 *v18; // eax
  int v19; // ebp
  int m; // ebx
  unsigned __int8 *v21; // eax
  int v22; // ebp
  int n; // ebx
  unsigned __int8 *v24; // eax
  int v25; // ebp
  int ii; // ebx
  unsigned __int8 *v27; // eax
  char v29[4]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int8 *StringByIndex; // [esp+14h] [ebp-28h]
  int KeyCount; // [esp+18h] [ebp-24h]
  char Destination[32]; // [esp+1Ch] [ebp-20h] BYREF
  Palette v33; // [esp+40h] [ebp+4h] BYREF

  v1 = *(INIClass **)v33.m_Colors; /*0x668bf6*/
  RulesClass::ReadColors(this); /*0x668bfe*/
  if ( INIEntry::Exists((INIEntry *)v1, (unsigned __int8 *)aColoradd, 0) ) /*0x668c0d*/
  {
    v3 = 0; /*0x668c24*/
    KeyCount = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aColoradd); /*0x668c26*/
    if ( KeyCount > 0 ) /*0x668c2c*/
    {
      v4 = (char *)this + 6260; /*0x668c2e*/
      do /*0x668c89*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aColoradd, v3); /*0x668c4d*/
        v5 = Palette::SixBitTo16Bit(&v33, 0, 0, 0); /*0x668c51*/
        Coord = INIClass::GetCoord(v1, (int)v29, (unsigned __int8 *)aColoradd, StringByIndex, v5); /*0x668c6a*/
        v7 = v4; /*0x668c71*/
        ++v3; /*0x668c73*/
        v4 += 3; /*0x668c74*/
        v8 = *(_BYTE *)(Coord + 2); /*0x668c7a*/
        *(_WORD *)v7 = *(_WORD *)Coord; /*0x668c7d*/
        v9 = v3 < KeyCount; /*0x668c84*/
        v7[2] = v8; /*0x668c86*/
      }
      while ( v9 ); /*0x668c89*/
    }
  }
  v10 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aCountries); /*0x668c98*/
  for ( i = 0; i < v10; ++i ) /*0x668c9e*/
  {
    v12 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aCountries, i); /*0x668cb6*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aCountries, v12, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668cc4*/
      WeaponTypeClass::Create(Destination); /*0x668cd1*/
  }
  RulesClass::ReadDataList(this); /*0x668cde*/
  v13 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aOverlaytypes); /*0x668cf1*/
  for ( j = 0; j < v13; ++j ) /*0x668cf7*/
  {
    v15 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aOverlaytypes, j); /*0x668d0e*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aOverlaytypes, v15, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668d1d*/
      BuildingTypeClass::FindOrCreate2(Destination); /*0x668d2a*/
  }
  v16 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aSuperweapontyp); /*0x668d42*/
  for ( k = 0; k < v16; ++k ) /*0x668d48*/
  {
    v18 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aSuperweapontyp, k); /*0x668d60*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aSuperweapontyp, v18, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668d6f*/
      WeaponTypeClass::Process(Destination); /*0x668d7c*/
  }
  v19 = INIClass::GetKeyCount(v1->__pad_0, g_INI_Key_Warheads); /*0x668d92*/
  for ( m = 0; m < v19; ++m ) /*0x668d98*/
  {
    v21 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, g_INI_Key_Warheads, m); /*0x668dae*/
    if ( INIClass::GetString(v1, g_INI_Key_Warheads, v21, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668dbb*/
      WarheadTypeClass::FindOrCreate(Destination); /*0x668dc8*/
  }
  v22 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aSmudgetypes); /*0x668de0*/
  for ( n = 0; n < v22; ++n ) /*0x668de6*/
  {
    v24 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aSmudgetypes, n); /*0x668dfd*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aSmudgetypes, v24, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668e0c*/
      FactoryClass::FindOrCreate(Destination); /*0x668e19*/
  }
  v25 = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aTerraintypes); /*0x668e31*/
  for ( ii = 0; ii < v25; ++ii ) /*0x668e37*/
  {
    v27 = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aTerraintypes, ii); /*0x668e4f*/
    if ( INIClass::GetString(v1, (unsigned __int8 *)aTerraintypes, v27, &g_INI_DefaultBuffer, Destination, 32) ) /*0x668e5e*/
      TerrainTypeClass::FindOrCreate(Destination); /*0x668e6b*/
  }
  RulesClass::LoadBuildingTypes(this); /*0x668e78*/
  CCINIClass::LoadBuildingTypes((CCINIClass *)this); /*0x668e80*/
  RulesClass::readRadiation(this); /*0x668e88*/
  RulesClass::readCrateRules(this); /*0x668e90*/
  RulesClass::LoadAnimTypes(this); /*0x668e98*/
  CCINIClass::LoadUnitTypes((CCINIClass *)this); /*0x668ea0*/
  RulesClass::readColors(this); /*0x668ea8*/
  CCINIClass::ReadBuildingSettings((CCINIClass *)this); /*0x668eb0*/
  RulesClass::readDifficulty(this); /*0x668eb8*/
  Dialog::ReadMultiplayerDialogSettings((Dialog *)this); /*0x668ec0*/
  RulesClass::ReadMultiplayerDefaults(this); /*0x668ec8*/
  RulesClass::ReadPowerupsSection(this); /*0x668ed0*/
  RulesClass::LoadSpeedTypes(this); /*0x668ed8*/
  RulesClass::ReadIQSection(this); /*0x668ee0*/
  RulesClass::LoadFromINI(this); /*0x668ee8*/
  SideClass::LoadAllFromINI(v1); /*0x668ef0*/
  INIClass::ReadDifficultyModifiers(v1); /*0x668f02*/
  INIClass::ReadDifficultyModifiers(v1); /*0x668f14*/
  INIClass::ReadDifficultyModifiers(v1); /*0x668f26*/
  ReadCrateRulesINI((TechnoClass *)this); /*0x668f2e*/
  Rules::ReadCombatINI((Rules *)this); /*0x668f36*/
  RulesClass::ReadCountryList(this); /*0x668f3e*/
  RulesClass::readAudioVisual(this); /*0x668f46*/
  RulesClass::readSpecialWeapons(this); /*0x668f4e*/
  Rules::ReadMiscINI((Rules *)this); /*0x668f56*/
  RulesClass::LoadSpecialWeapons(this); /*0x668f5e*/
  SmallFunc_721D10(v1); /*0x668f65*/
  return SidebarClass::ReadButtonList((SidebarClass *)this); /*0x668f86*/
}



// ==== 0x00668FB0  RulesClass::LoadSpecialWeapons  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadSpecialWeapons(RulesClass *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // eax
  _BYTE *v5; // ebx
  _BYTE *v6; // eax
  _BYTE *v7; // ebx
  _BYTE *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  _BYTE *v15; // ebx
  _BYTE *v16; // eax
  int i; // esi
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  unsigned __int8 ***v19; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)aSpecialweapons); /*0x668fc9*/
  if ( result ) /*0x668fd5*/
  {
    v3 = *(_DWORD *)&this->__pad_C3C[848]; /*0x668fe2*/
    if ( INIClass::GetString( /*0x668fff*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aNukewarhead,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v4 = WarheadTypeClass::FindOrCreate(Destination); /*0x66900c*/
    }
    else
    {
      v4 = v3; /*0x669013*/
    }
    *(_DWORD *)&this->__pad_C3C[848] = v4; /*0x669015*/
    v5 = *(_BYTE **)&this->__pad_C3C[852]; /*0x669021*/
    if ( INIClass::GetString( /*0x66903e*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aNukeprojectile,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v6 = ObjectTypeClass::FindOrCreate(Destination); /*0x66904b*/
    }
    else
    {
      v6 = v5; /*0x669052*/
    }
    v7 = *(_BYTE **)&this->__pad_C3C[856]; /*0x669054*/
    *(_DWORD *)&this->__pad_C3C[852] = v6; /*0x669063*/
    if ( INIClass::GetString( /*0x66907c*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aNukedown,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v8 = ObjectTypeClass::FindOrCreate(Destination); /*0x669089*/
    }
    else
    {
      v8 = v7; /*0x669090*/
    }
    v9 = *(_DWORD *)&this->__pad_C3C[860]; /*0x669092*/
    *(_DWORD *)&this->__pad_C3C[856] = v8; /*0x6690a1*/
    if ( INIClass::GetString( /*0x6690bb*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aMutatewarhead,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v10 = WarheadTypeClass::FindOrCreate(Destination); /*0x6690c8*/
    }
    else
    {
      v10 = v9; /*0x6690cf*/
    }
    *(_DWORD *)&this->__pad_C3C[860] = v10; /*0x6690d1*/
    v11 = *(_DWORD *)&this->__pad_C3C[864]; /*0x6690dd*/
    if ( INIClass::GetString( /*0x6690fa*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aMutateexplosio,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v12 = WarheadTypeClass::FindOrCreate(Destination); /*0x669107*/
    }
    else
    {
      v12 = v11; /*0x66910e*/
    }
    v13 = *(_DWORD *)&this->__pad_C3C[868]; /*0x669110*/
    *(_DWORD *)&this->__pad_C3C[864] = v12; /*0x66911f*/
    if ( INIClass::GetString( /*0x669138*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aEmpulsewarhead,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v14 = WarheadTypeClass::FindOrCreate(Destination); /*0x669145*/
    }
    else
    {
      v14 = v13; /*0x66914c*/
    }
    v15 = *(_BYTE **)&this->__pad_C3C[872]; /*0x66914e*/
    *(_DWORD *)&this->__pad_C3C[868] = v14; /*0x66915d*/
    if ( INIClass::GetString( /*0x669177*/
           (INIClass *)v19,
           (unsigned __int8 *)aSpecialweapons,
           aEmpulseproject,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v16 = ObjectTypeClass::FindOrCreate(Destination); /*0x669184*/
    }
    else
    {
      v16 = v15; /*0x66918b*/
    }
    *(_DWORD *)&this->__pad_C3C[872] = v16; /*0x66918d*/
    result = g_WarheadTypePool; /*0x669193*/
    for ( i = 0; i < g_WarheadTypePool; ++i ) /*0x66919d*/
    {
      (*(void (__thiscall **)(_DWORD, unsigned __int8 ***))(**((_DWORD **)dword_8874C4 + i) + 100))( /*0x6691aa*/
        *((_DWORD *)dword_8874C4 + i),
        v19);
      result = g_WarheadTypePool; /*0x6691ad*/
    }
    LOBYTE(result) = 1; /*0x6691b8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6691c5*/
  }
  return result; /*0x6691b7*/
}



// ==== 0x006691E0  Rules::ReadMiscINI  this=RulesClass  sig=csp ====
int __thiscall Rules::ReadMiscINI(Rules *this)
{
  double v1; // st7
  int result; // eax
  int Int_Overwrite; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *m_C; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  int Index; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  int v49; // ebx
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  in... [74313 chars total]



// ==== 0x0066B900  ObjectClass::ReadCrateRulesINI  this=ObjectClass  sig=csp ====
int __thiscall ReadCrateRulesINI(TechnoClass *this)
{
  int result; // eax
  int v3; // ebx
  _DWORD *v4; // eax
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // ebx
  int Index; // eax
  int v11; // edx
  int Int_Overwrite; // eax
  int v13; // ecx
  double Coord; // st7
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  int Alt; // eax
  int v19; // ecx
  int StringValue; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  double v24; // [esp-Ch] [ebp-94h]
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  int *v26; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v26, (unsigned __int8 *)aCraterules); /*0x66b919*/
  if ( result ) /*0x66b925*/
  {
    LOBYTE(this->ambientSoundController[1]) = INIClass::ReadBool_Overwrite( /*0x66b943*/
                                                v26,
                                                (unsigned __int8 *)aCraterules,
                                                aFreemcv,
                                                this->ambientSoundController[1]);
    v3 = this->animation[0]; /*0x66b94c*/
    if ( INIClass::GetString( /*0x66b969*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aWoodcrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v4 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b976*/
    }
    else
    {
      v4 = (_DWORD *)v3; /*0x66b97d*/
    }
    v5 = this->animation[1]; /*0x66b97f*/
    this->animation[0] = (int)v4; /*0x66b98e*/
    if ( INIClass::GetString( /*0x66b9a7*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aCrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v6 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b9b4*/
    }
    else
    {
      v6 = (_DWORD *)v5; /*0x66b9bb*/
    }
    v7 = this->animation[2]; /*0x66b9bd*/
    this->animation[1] = (int)v6; /*0x66b9cc*/
    if ( INIClass::GetString( /*0x66b9e6*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aWatercrateimg,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v8 = BuildingTypeClass::FindOrCreate2(Destination); /*0x66b9f3*/
    }
    else
    {
      v8 = (_DWORD *)v7; /*0x66b9fa*/
    }
    this->animation[2] = (int)v8; /*0x66b9fc*/
    v9 = *((_DWORD *)this + 454); /*0x66ba08*/
    if ( !INIClass::GetString( /*0x66ba3a*/
            (INIClass *)v26,
            (unsigned __int8 *)aCraterules,
            aHealcratesound,
            &g_INI_DefaultBuffer,
            Destination,
            128)
      || (Index = VocClass::FindIndex((VocClass *)Destination), Index == -1) )
    {
      Index = v9; /*0x66ba3c*/
    }
    v11 = *((_DWORD *)this + 1308); /*0x66ba3e*/
    *((_DWORD *)this + 454) = Index; /*0x66ba44*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v26, (unsigned __int8 *)aCraterules, aCrateminimum, v11); /*0x66ba58*/
    v13 = *((_DWORD *)this + 1309); /*0x66ba5d*/
    *((_DWORD *)this + 1308) = Int_Overwrite; /*0x66ba63*/
    *((_DWORD *)this + 1309) = INIClass::ReadInt_Overwrite( /*0x66ba7d*/
                                 (bool *)v26,
                                 (unsigned __int8 *)aCraterules,
                                 aCratemaximum,
                                 v13);
    Coord = INIClass::ReadCoord(v26, aCraterules, aCrateradius, *((_DWORD *)this + 1483)); /*0x66ba98*/
    v15 = *((_DWORD *)this + 1439); /*0x66ba9d*/
    *((_DWORD *)this + 1483) = v16; /*0x66baa3*/
    HIDWORD(v24) = v15; /*0x66bab5*/
    LODWORD(v24) = *((_DWORD *)this + 1438); /*0x66bab6*/
    INIClass::ReadDouble_Overwrite((double *)v26, (unsigned __int8 *)aCraterules, aCrateregen, v24); /*0x66babf*/
    *((double *)this + 719) = Coord; /*0x66bac4*/
    v17 = *((_DWORD *)this + 1106); /*0x66bacf*/
    if ( INIClass::GetString( /*0x66baec*/
           (INIClass *)v26,
           (unsigned __int8 *)aCraterules,
           aUnitcratetype,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      Alt = BuildingTypeClass::FindOrCreateAlt(Destination); /*0x66baf9*/
    }
    else
    {
      Alt = v17; /*0x66bb00*/
    }
    v19 = *((_DWORD *)this + 1104); /*0x66bb02*/
    *((_DWORD *)this + 1106) = Alt; /*0x66bb08*/
    *((_DWORD *)this + 1104) = INIClass::ReadInt_Overwrite( /*0x66bb22*/
                                 (bool *)v26,
                                 (unsigned __int8 *)aCraterules,
                                 aSolocratemoney,
                                 v19);
    StringValue = INIClass::ReadStringValue( /*0x66bb3d*/
                    (INIClass *)v26,
                    (unsigned __int8 *)aCraterules,
                    aSilvercrate,
                    *((_DWORD *)this + 1305));
    v21 = *((_DWORD *)this + 1306); /*0x66bb42*/
    *((_DWORD *)this + 1305) = StringValue; /*0x66bb48*/
    v22 = INIClass::ReadStringValue((INIClass *)v26, (unsigned __int8 *)aCraterules, aWoodcrate, v21); /*0x66bb5c*/
    v23 = *((_DWORD *)this + 1307); /*0x66bb61*/
    *((_DWORD *)this + 1306) = v22; /*0x66bb67*/
    result = INIClass::ReadStringValue((INIClass *)v26, (unsigned __int8 *)aCraterules, aWatercrate, v23); /*0x66bb7c*/
    *((_DWORD *)this + 1307) = result; /*0x66bb82*/
    LOBYTE(result) = 1; /*0x66bb89*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66bb96*/
  }
  return result; /*0x66bb88*/
}



// ==== 0x0066BBB0  Rules::ReadCombatINI  this=RulesClass  sig=csp ====
int __thiscall Rules::ReadCombatINI(Rules *this)
{
  double v1; // st7
  int result; // eax
  int Int_Overwrite; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  char *j; // eax
  int Count; // ecx
  int v11; // edx
  void *v12; // eax
  char *k; // eax
  int v14; // edx
  int v15; // ecx
  void *v16; // eax
  char *m; // eax
  int v18; // ecx
  int v19; // edx
  void *v20; // eax
  char *n; // eax
  int v22; // ecx
  int v23; // edx
  void *v24; // eax
  char *ii; // eax
  int v26; // edx
  int v27; // ecx
  void *v28; // eax
  int m_C; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  char Bool_Overwrite; // al
  int v50; // ebx
  i... [43328 chars total]



// ==== 0x0066CF70  RulesClass::ReadCountryList  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadCountryList(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int OreTwinkleChance; // edx
  int v5; // eax
  AnimTypeClass *OreTwinkle; // ecx
  int v7; // eax
  int v8; // edx
  double v9; // rax
  double v11; // rax
  int Coord; // eax
  int v15; // ebx
  double v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp+8h] [ebp-84h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
  INIClass *v19; // [esp+90h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v19, aRadiation); /*0x66cf89*/
  if ( result ) /*0x66cf95*/
  {
    *(_DWORD *)&this->LineTrailColorOverride[1] = INIClass::ReadInt_Overwrite( /*0x66cfb6*/
                                                    (bool *)v19->__pad_0,
                                                    aRadiation,
                                                    aRaddurationmul,
                                                    *(_DWORD *)&this->LineTrailColorOverride[1]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66cfd1*/
                      (bool *)v19->__pad_0,
                      aRadiation,
                      aRadapplication,
                      *(_DWORD *)&this->ChronoBeamColor[2]);
    OreTwinkleChance = this->OreTwinkleChance; /*0x66cfd6*/
    *(_DWORD *)&this->ChronoBeamColor[2] = Int_Overwrite; /*0x66cfdc*/
    v5 = INIClass::ReadInt_Overwrite((bool *)v19->__pad_0, aRadiation, aRadlevelmax, OreTwinkleChance); /*0x66cff0*/
    OreTwinkle = this->OreTwinkle; /*0x66cff5*/
    this->OreTwinkleChance = v5; /*0x66cffb*/
    this->OreTwinkle = (AnimTypeClass *)INIClass::ReadInt_Overwrite( /*0x66d015*/
                                          (bool *)v19->__pad_0,
                                          aRadiation,
                                          aRadleveldelay,
                                          (int)OreTwinkle);
    v7 = INIClass::ReadInt_Overwrite((bool *)v19->__pad_0, aRadiation, aRadlightdelay, this->ColorAdd[0]); /*0x66d030*/
    v8 = this->ColorAdd[2]; /*0x66d035*/
    this->ColorAdd[0] = v7; /*0x66d03b*/
    HIDWORD(v16) = v8; /*0x66d04d*/
    LODWORD(v16) = this->ColorAdd[1]; /*0x66d04e*/
    INIClass::ReadDouble_Overwrite((double *)v19->__pad_0, aRadiation, aRadlevelfactor, v16); /*0x66d057*/
    v9 = *(double *)&this->ColorAdd[3]; /*0x66d062*/
    __asm { fstp qword ptr [esi+1818h] } /*0x66d068*/
    *(double *)&this->ColorAdd[1] = _RT1; /*0x66d068*/
    INIClass::ReadDouble_Overwrite((double *)v19->__pad_0, aRadiation, aRadlightfactor, v9); /*0x66d07e*/
    v11 = *(double *)&this->ColorAdd[5]; /*0x66d089*/
    __asm { fstp qword ptr [esi+1820h] } /*0x66d08f*/
    *(double *)&this->ColorAdd[3] = _RT1; /*0x66d08f*/
    INIClass::ReadDouble_Overwrite((double *)v19->__pad_0, aRadiation, aRadtintfactor, v11); /*0x66d0a5*/
    __asm { fstp qword ptr [esi+1828h] } /*0x66d0aa*/
    *(double *)&this->ColorAdd[5] = _RT1; /*0x66d0aa*/
    Coord = INIClass::GetCoord(v19, (int)&v17, aRadiation, aRadcolor, (unsigned __int8 *)&this->ColorAdd[7]); /*0x66d0ca*/
    LOWORD(this->ColorAdd[7]) = *(_WORD *)Coord; /*0x66d0d2*/
    BYTE2(this->ColorAdd[7]) = *(_BYTE *)(Coord + 2); /*0x66d0e1*/
    v15 = this->ColorAdd[8]; /*0x66d0ea*/
    if ( INIClass::GetString(v19, aRadiation, aRadsitewarhead, &g_INI_DefaultBuffer, Destination, 128) ) /*0x66d0fe*/
    {
      result = WarheadTypeClass::FindOrCreate(Destination); /*0x66d10b*/
      this->ColorAdd[8] = result; /*0x66d111*/
    }
    else
    {
      result = v15; /*0x66d124*/
      this->ColorAdd[8] = v15; /*0x66d127*/
    }
    LOBYTE(result) = 1; /*0x66d118*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d13b*/
  }
  return result; /*0x66d117*/
}



// ==== 0x0066D150  RulesClass::readAudioVisual  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAudioVisual(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  int BerserkColor; // eax
  int IronCurtainColor; // ecx
  double v9; // [esp-8h] [ebp-10h]
  bool *v10; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v10, (unsigned __int8 *)aElevationmodel); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v10,
                      (unsigned __int8 *)aElevationmodel,
                      aElevationincre,
                      this->ColorAdd[9]);
    v4 = this->ColorAdd[11]; /*0x66d188*/
    this->ColorAdd[9] = Int_Overwrite; /*0x66d18e*/
    HIDWORD(v9) = this->LaserTargetColor; /*0x66d1a0*/
    LODWORD(v9) = v4; /*0x66d1a1*/
    INIClass::ReadDouble_Overwrite((double *)v10, (unsigned __int8 *)aElevationmodel, aElevationincre_0, v9); /*0x66d1aa*/
    BerserkColor = this->BerserkColor; /*0x66d1af*/
    IronCurtainColor = this->IronCurtainColor; /*0x66d1b5*/
    __asm { fstp qword ptr [esi+1840h] } /*0x66d1bb*/
    *(double *)&this->ColorAdd[11] = _RT1; /*0x66d1bb*/
    result = INIClass::ReadDouble_Overwrite( /*0x66d1d1*/
               (double *)v10,
               (unsigned __int8 *)aElevationmodel,
               aElevationbonus,
               COERCE_DOUBLE(__PAIR64__(BerserkColor, IronCurtainColor)));
    __asm { fstp qword ptr [esi+1848h] } /*0x66d1d6*/
    *(double *)&this->IronCurtainColor = _RT1; /*0x66d1d6*/
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}



// ==== 0x0066D1F0  RulesClass::readSpecialWeapons  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readSpecialWeapons(RulesClass *this)
{
  int result; // eax
  char Bool_Overwrite; // al
  float FallBackCoefficient; // ecx
  double v6; // [esp-8h] [ebp-10h]
  int *v7; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)aWallmodel); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v7,
                       (unsigned __int8 *)aWallmodel,
                       aAlliedwalltran,
                       this->ForceShieldColor);
    FallBackCoefficient = this->FallBackCoefficient; /*0x66d228*/
    LOBYTE(this->ForceShieldColor) = Bool_Overwrite; /*0x66d22e*/
    HIDWORD(v6) = this->CrewCount; /*0x66d240*/
    *(float *)&v6 = FallBackCoefficient; /*0x66d241*/
    result = INIClass::ReadDouble_Overwrite((double *)v7, (unsigned __int8 *)aWallmodel, aWallpenetrator, v6); /*0x66d24a*/
    __asm { fstp qword ptr [esi+1858h] } /*0x66d24f*/
    *(double *)&this->FallBackCoefficient = _RT1; /*0x66d24f*/
    LOBYTE(result) = 1; /*0x66d256*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d25d*/
  }
  return result; /*0x66d255*/
}



// ==== 0x0066D270  INIClass::ReadDifficultyModifiers  this=INIClass  sig=csp ====
int __thiscall INIClass::ReadDifficultyModifiers(INIClass *this)
{
  int v1; // edx
  int v2; // edi
  int result; // eax
  unsigned __int8 *v14; // [esp+10h] [ebp+4h]

  v2 = v1; /*0x66d277*/
  result = INIClass::BinarySearchSection((int)this, v14); /*0x66d27c*/
  LOBYTE(result) = result != 0; /*0x66d283*/
  if ( (_BYTE)result ) /*0x66d288*/
  {
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aFirepower_0, 1.0); /*0x66d29d*/
    __asm { fstp qword ptr [edi] } /*0x66d2a2*/
    *(double *)v2 = _RT1; /*0x66d2a2*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aGroundspeed, 1.0); /*0x66d2b3*/
    __asm { fstp qword ptr [edi+8] } /*0x66d2b8*/
    *(double *)(v2 + 8) = _RT1; /*0x66d2b8*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aAirspeed, 1.0); /*0x66d2ca*/
    __asm { fstp qword ptr [edi+10h] } /*0x66d2cf*/
    *(double *)(v2 + 16) = _RT1; /*0x66d2cf*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, g_INI_Key_Armor, 1.0); /*0x66d2e1*/
    __asm { fstp qword ptr [edi+18h] } /*0x66d2e6*/
    *(double *)(v2 + 24) = _RT1; /*0x66d2e6*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, &off_825478, 1.0); /*0x66d2f8*/
    __asm { fstp qword ptr [edi+20h] } /*0x66d2fd*/
    *(double *)(v2 + 32) = _RT1; /*0x66d2fd*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, g_INI_Key_Cost, 1.0); /*0x66d30f*/
    __asm { fstp qword ptr [edi+28h] } /*0x66d314*/
    *(double *)(v2 + 40) = _RT1; /*0x66d314*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aRepairdelay, 0.02); /*0x66d329*/
    __asm { fstp qword ptr [edi+38h] } /*0x66d32e*/
    *(double *)(v2 + 56) = _RT1; /*0x66d32e*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aBuilddelay, 0.03); /*0x66d343*/
    __asm { fstp qword ptr [edi+40h] } /*0x66d348*/
    *(double *)(v2 + 64) = _RT1; /*0x66d348*/
    *(_BYTE *)(v2 + 72) = INIClass::ReadBool_Overwrite((int *)this->__pad_0, v14, aBuildslowdown, 0); /*0x66d35c*/
    INIClass::ReadDouble_Overwrite((double *)this->__pad_0, v14, aBuildtime, 1.0); /*0x66d36c*/
    __asm { fstp qword ptr [edi+30h] } /*0x66d371*/
    *(double *)(v2 + 48) = _RT1; /*0x66d371*/
    *(_BYTE *)(v2 + 73) = INIClass::ReadBool_Overwrite((int *)this->__pad_0, v14, aDestroywalls, 1); /*0x66d385*/
    result = INIClass::ReadBool_Overwrite((int *)this->__pad_0, v14, aContentscan, 0); /*0x66d390*/
    *(_BYTE *)(v2 + 74) = result; /*0x66d395*/
  }
  return result; /*0x66d398*/
}



// ==== 0x0066D3A0  RulesClass::ReadColors  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadColors(RulesClass *this)
{
  char *v1; // ebp
  int result; // eax
  int v3; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // esi
  int Color; // eax
  unsigned __int8 v7[4]; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF
  INIEntry *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = (char *)v9; /*0x66d3a9*/
  result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)aColors); /*0x66d3b0*/
  if ( result ) /*0x66d3bc*/
  {
    result = INIClass::GetKeyCount(v1, (unsigned __int8 *)aColors); /*0x66d3cd*/
    v3 = result; /*0x66d3d2*/
    for ( i = 0; i < v3; ++i ) /*0x66d3d8*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aColors, i); /*0x66d3f4*/
      v7[0] = 0; /*0x66d404*/
      v7[1] = 0; /*0x66d409*/
      v7[2] = 0; /*0x66d40e*/
      Color = INIEntry::ReadColor((INIEntry *)v1, (int)&v8, (unsigned __int8 *)aColors, StringByIndex, v7); /*0x66d413*/
      LOWORD(v9) = *(_WORD *)Color; /*0x66d41b*/
      BYTE2(v9) = *(_BYTE *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 53); /*0x66d45b*/
    }
    LOBYTE(result) = 1; /*0x66d46c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d475*/
  }
  return result; /*0x66d46e*/
}



// ==== 0x0066D480  RulesClass::ReadColorAdd  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadColorAdd(RulesClass *this)
{
  INIClass *v1; // edi
  int result; // eax
  int v4; // esi
  char *v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int Coord; // eax
  char *v8; // edx
  char v9; // cl
  bool v10; // cc
  char v11[4]; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]
  INIClass *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)aColoradd); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aColoradd); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)this + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aColoradd, v4); /*0x66d4cd*/
        LOWORD(v13) = 0; /*0x66d4e6*/
        BYTE2(v13) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord(v1, (int)v11, (unsigned __int8 *)aColoradd, StringByIndex, (unsigned __int8 *)&v13); /*0x66d4f2*/
        v8 = v5; /*0x66d4f9*/
        ++v4; /*0x66d4fb*/
        v5 += 3; /*0x66d4fc*/
        v9 = *(_BYTE *)(Coord + 2); /*0x66d502*/
        *(_WORD *)v8 = *(_WORD *)Coord; /*0x66d505*/
        result = v12; /*0x66d508*/
        v10 = v4 < v12; /*0x66d50c*/
        v8[2] = v9; /*0x66d50e*/
      }
      while ( v10 ); /*0x66d511*/
    }
    LOBYTE(result) = 1; /*0x66d516*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d521*/
  }
  return result; /*0x66d514*/
}



// ==== 0x0066D530  RulesClass::LoadFromINI  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadFromINI(RulesClass *this)
{
  double v1; // st7
  int result; // eax
  char *i; // eax
  UnitTypeClass *LargeVisceroid; // ebx
  UnitTypeClass *v6; // eax
  _DWORD *MaxWaypointPathLength; // ebx
  _DWORD *v8; // eax
  char *j; // eax
  ParticleSystemTypeClass *BarrelParticle; // ebx
  ParticleSystemTypeClass *v11; // eax
  AnimTypeClass *InfantryMutate; // ebx
  AnimTypeClass *v13; // eax
  AnimTypeClass *InfantryBrute; // ebx
  AnimTypeClass *v15; // eax
  char *k; // eax
  char *m; // eax
  char *n; // eax
  char *ii; // eax
  _DWORD *v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // ebx
  _DWORD *v23; // eax
  char *jj; // eax
  char *kk; // eax
  _DWORD *v26; // ebx
  _DWORD *v27; // eax
  int v28; // ebx
  int v29; // eax
  _DWORD *v30; // ebx
  _DWORD *v31; // eax
  _DWORD *v32; // ebx
  _DWORD *v33; // eax
  int Int_Overwrite; // eax
  _DWORD *v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // ebx
  _DWORD *v38; // eax
  _DWORD *v39; // ebx
  _D... [168778 chars total]


