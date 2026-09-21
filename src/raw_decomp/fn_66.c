// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00660000  ObjectClass::Render_Render  this=ObjectClass  sig=csp ====
int sub_660000()
{
  int result; // eax
  int i; // edi
  int v2; // ecx
  int v3; // esi
  int v4; // eax

  result = g_TriggerEventState; /*0x660000*/
  for ( i = 0; i < g_TriggerEventState; ++i ) /*0x660006*/
  {
    v2 = *((_DWORD *)g_TriggerPool + i); /*0x660012*/
    v3 = *(_DWORD *)(v2 + 48); /*0x660015*/
    v4 = *(_DWORD *)(v2 + 56); /*0x660018*/
    if ( v3 != -1 ) /*0x66001e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x66002a*/
        goto LABEL_6; /*0x66002a*/
      v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x66002c*/
    }
    if ( v4 > 0 ) /*0x660030*/
      goto LABEL_7; /*0x660030*/
LABEL_6:
    if ( *(_BYTE *)(v2 + 60) ) /*0x660032*/
LABEL_7:
      RenderGradientTrapezoid((float *)v2); /*0x660039*/
    result = g_TriggerEventState; /*0x66003e*/
  }
  return result; /*0x660049*/
}


// ==== 0x00660050  ObjectClass::RenderGradientTrapezoid  this=int  sig=csp ====
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
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // esi
  int *p_a1; // eax
  int v17; // ecx
  int v18; // ebx
  int v19; // ecx
  int v20; // eax
  int *v21; // ebx
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  IUnknown *v26; // edi
  int v27; // esi
  _DWORD *v28; // esi
  int v29; // edi
  IUnknown *v30; // eax
  AbstractClass *v31; // eax
  IUnknown *v32; // eax
  int *v34; // [esp+4h] [ebp-A4h]
  const RECT *v35; // [esp+8h] [ebp-A0h]
  const RECT *v36; // [esp+Ch] [ebp-9Ch]
  int v37; // [esp+18h] [ebp-90h] BYREF
  __int16 v38; // [esp+1Ch] [ebp-8Ch] BYREF
  char v39; // [esp+1Eh] [ebp-8Ah]
  __int16 v40; // [esp+20h] [ebp-88h] BYREF
  char v41; // [esp+22h] [ebp-86h]
  AbstractClass aP2; // [esp+24h] [ebp-84h] BYREF
  _DWORD v43[2]; // [esp+48h] [ebp-60h] BYREF
  int a1; // [esp+50h] [ebp-58h] BYREF
  _DWORD v45[7]; // [esp+54h] [ebp-54h] BYREF
  AbstractClass aP1; // [esp+70h] [ebp-38h] BYREF

  switch ( *(_DWORD *)this ) /*0x660070*/
  {
    case 0: /*0x660070*/
    case 3: /*0x660070*/
    case 4: /*0x660070*/
      LOWORD(v37) = 255; /*0x660077*/
      v2 = 255; /*0x660081*/
      v3 = -1; /*0x660086*/
      break; /*0x660089*/
    case 1: /*0x660070*/
    case 2: /*0x660070*/
    case 0xB: /*0x660070*/
    case 0xC: /*0x660070*/
      v4 = Palette::6BitTo16Bit(&v37, 255, 255, 0); /*0x66009b*/
      goto LABEL_6; /*0x66009b*/
    case 5: /*0x660070*/
      v5 = Palette::6BitTo16Bit(&aP2.__pad_0[8], 0, 255, 255); /*0x6600b2*/
      v2 = *(_WORD *)v5; /*0x6600b4*/
      v3 = v5[2]; /*0x6600b7*/
      break; /*0x6600ba*/
    default:
      v4 = Palette::6BitTo16Bit(&aP2, 0, 0, 0); /*0x6600c6*/
LABEL_6:
      v6 = v4; /*0x6600cb*/
      v2 = *(_WORD *)v4; /*0x6600cd*/
      v3 = v6[2]; /*0x6600d0*/
      break; /*0x6600d0*/
  }
  v38 = v2; /*0x6600d3*/
  v7 = *(_DWORD *)this; /*0x6600d8*/
  v39 = v3; /*0x6600dd*/
  switch ( v7 ) /*0x6600eb*/
  {
    case 0: /*0x6600eb*/
    case 3: /*0x6600eb*/
    case 4: /*0x6600eb*/
      LOWORD(v37) = 128; /*0x6600f2*/
      v8 = 128; /*0x6600fc*/
      v9 = 0x80; /*0x660101*/
      break; /*0x660103*/
    case 1: /*0x6600eb*/
    case 2: /*0x6600eb*/
    case 11: /*0x6600eb*/
    case 12: /*0x6600eb*/
      v10 = Palette::6BitTo16Bit(&aP2, 128, 128, 0); /*0x660115*/
      goto LABEL_12; /*0x660115*/
    case 5: /*0x6600eb*/
      v11 = Palette::6BitTo16Bit(&aP2.__pad_0[8], 0, 128, 128); /*0x66012c*/
      v8 = *(_WORD *)v11; /*0x66012e*/
      v9 = v11[2]; /*0x660131*/
      break; /*0x660134*/
    default:
      v10 = Palette::6BitTo16Bit(&v37, 0, 0, 0); /*0x660140*/
LABEL_12:
      v12 = v10; /*0x660145*/
      v8 = *(_WORD *)v10; /*0x660147*/
      v9 = v12[2]; /*0x66014a*/
      break; /*0x66014a*/
  }
  v40 = v8; /*0x66014d*/
  v41 = v9; /*0x660158*/
  if ( v38 || (LOBYTE(v13) = v39) != 0 ) /*0x66016c*/
  {
    Render_Render_660730(this, &a1); /*0x660179*/
    v14 = *((_DWORD *)this + 1); /*0x66017e*/
    v15 = *((_DWORD *)this + 2); /*0x660181*/
    p_a1 = &a1; /*0x660184*/
    v17 = 4; /*0x660188*/
    do /*0x6601a0*/
    {
      v18 = *p_a1; /*0x66018d*/
      p_a1 += 2; /*0x66018f*/
      *(p_a1 - 2) = v14 + v18; /*0x660194*/
      --v17; /*0x66019c*/
      *(p_a1 - 1) += v15; /*0x66019d*/
    }
    while ( v17 ); /*0x6601a0*/
    aP2.uniqueId = *(int *)(this + 6); /*0x6601a9*/
    v19 = abs32(v45[0] - v45[2]); /*0x6601bc*/
    *(_DWORD *)aP2.__pad_0 = abs32(a1 - v45[1]); /*0x6601cb*/
    if ( *(int *)aP2.__pad_0 <= v19 ) /*0x6601cf*/
      *(_DWORD *)aP2.__pad_0 = v19; /*0x6601d1*/
    v20 = 0; /*0x6601da*/
    v21 = &a1; /*0x6601dc*/
    *(float *)&aP2.__pad_0[12] = (*(this + 3) + *(this + 3)) /*0x6601ed*/
                               * 0.7071067811865475
                               / (double)*(int *)aP2.__pad_0
                               * *(this + 7);
    do /*0x660242*/
    {
      v22 = v20 + 1; /*0x6601fb*/
      v23 = **(_DWORD **)&stru_87C374.__pad_14B0[12768]; /*0x6601ff*/
      v24 = (*(int (__stdcall **)(int *, int *, _DWORD *, __int16 *, __int16 *, char *, int *))(**(_DWORD **)&stru_87C374.__pad_14B0[12768] /*0x66022a*/
                                                                                              + 120))(
              &aP2.abstractFlags,
              v21,
              &v45[2 * ((v20 + 1) % 4) - 1],
              &v38,
              &v40,
              &aP2.__pad_0[12],
              &aP2.uniqueId);
      (*(void (__thiscall **)(_DWORD, int))(v23 + 144))(*(_DWORD *)&stru_87C374.__pad_14B0[12768], v24); /*0x660234*/
      v20 = v22; /*0x66023a*/
      v21 += 2; /*0x66023c*/
    }
    while ( v22 < 4 ); /*0x660242*/
    v25 = 0; /*0x660244*/
    v26 = (IUnknown *)&a1; /*0x660246*/
    do /*0x66027f*/
    {
      v27 = v25 + 1; /*0x660250*/
      v34 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_87C374.__pad_14B0[12768] + 120))( /*0x66025d*/
                     *(_DWORD *)&stru_87C374.__pad_14B0[12768],
                     &aP2.abstractFlags);
      ClipLine(v26, &v45[2 * (v27 % 4) - 1], v34); /*0x660272*/
      v25 = v27; /*0x660277*/
      v26 = (IUnknown *)((char *)v26 + 8); /*0x660279*/
    }
    while ( v27 < 4 ); /*0x66027f*/
    LOBYTE(v13) = stru_87C374.__pad_14B0[13428]; /*0x660281*/
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[13428] == 1 && *(_DWORD *)&stru_87C374.__pad_14B0[13424] == 1 ) /*0x660299*/
    {
      v28 = v45; /*0x66029f*/
      v29 = 4; /*0x6602a3*/
      do /*0x660356*/
      {
        *(_DWORD *)&aP2.__pad_0[4] = *(_DWORD *)&stru_87C374.__pad_14B0[13412]; /*0x6602b3*/
        v43[1] = *v28; /*0x6602b9*/
        *(_DWORD *)aP2.__pad_0 = *(_DWORD *)&stru_87C374.__pad_14B0[13408]; /*0x6602c2*/
        v43[0] = *(v28 - 1); /*0x6602d4*/
        v30 = (IUnknown *)Coord2D::Add(v43, &aP1, &aP2); /*0x6602d8*/
        v31 = Rect::Construct(&aP1.__pad_0[8], v30, (AbstractClass *)1, (AbstractClass *)1); /*0x6602e2*/
        aP2.abstractFlags = *(_DWORD *)v31->__pad_0; /*0x6602e9*/
        aP2.nextArrayIndex = *(_DWORD *)&v31->__pad_0[4]; /*0x6602f0*/
        aP2.referenceCount = *(_DWORD *)&v31->__pad_0[8]; /*0x6602f7*/
        aP2.NeedsSaveOrLink = *(void **)&v31->__pad_0[12]; /*0x660309*/
        v32 = (IUnknown *)Rect::Union((IUnknown *)&aP2.abstractFlags, v35, v36); /*0x660313*/
        v13 = ClipRectIntersection( /*0x66032a*/
                (IUnknown *)&aP1.nextArrayIndex,
                v32,
                (IUnknown *)&stru_87C374.__pad_14B0[13408],
                0,
                0);
        v28 += 2; /*0x660331*/
        *(_DWORD *)&stru_87C374.__pad_14B0[12752] = *v13; /*0x660334*/
        --v29; /*0x66033a*/
        *(_DWORD *)&stru_87C374.__pad_14B0[12756] = v13[1]; /*0x66033e*/
        *(_DWORD *)&stru_87C374.__pad_14B0[12760] = v13[2]; /*0x660347*/
        *(_DWORD *)&stru_87C374.__pad_14B0[12764] = v13[3]; /*0x660350*/
      }
      while ( v29 ); /*0x660356*/
    }
  }
  return (char)v13; /*0x66035c*/
}


// ==== 0x006603B0  ObjectClass::Render_Render_6603B0  this=ObjectClass  sig=csp ====
void sub_6603B0()
{
  int v0; // ebx
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // edx
  int v4; // eax
  void *v5; // esi
  int v6; // eax
  int v7; // [esp+4h] [ebp-4h] BYREF

  v0 = g_TriggerEventState - 1; /*0x6603b7*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x6603bc*/
  {
    v1 = g_TriggerPool; /*0x6603c4*/
    do /*0x6603ca*/
    {
      v2 = v1[v0]; /*0x6603ca*/
      v3 = *(_DWORD *)(v2 + 36); /*0x6603cd*/
      v4 = *(_DWORD *)(v2 + 44); /*0x6603d0*/
      if ( v3 != -1 ) /*0x6603d6*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x6603e2*/
          goto LABEL_7; /*0x6603e2*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x6603e4*/
      }
      if ( !v4 ) /*0x6603e8*/
      {
LABEL_7:
        if ( !*(_BYTE *)(v2 + 60) ) /*0x6603ea*/
        {
          v5 = (void *)v1[v0]; /*0x6603f1*/
          if ( v5 ) /*0x6603f6*/
          {
            v7 = v1[v0]; /*0x660408*/
            v6 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v7); /*0x66040c*/
            if ( v6 != -1 && v6 < g_TriggerEventState && v6 < --g_TriggerEventState ) /*0x660427*/
            {
              do /*0x66043f*/
              {
                ++v6; /*0x66042f*/
                *((_DWORD *)g_TriggerPool + v6 - 1) = *((_DWORD *)g_TriggerPool + v6); /*0x660433*/
              }
              while ( v6 < g_TriggerEventState ); /*0x66043f*/
            }
            __3_YAXPAX_Z(v5); /*0x660442*/
            v1 = g_TriggerPool; /*0x660447*/
          }
        }
      }
      --v0; /*0x660450*/
    }
    while ( v0 >= 0 ); /*0x6603ca*/
  }
}


// ==== 0x00660530  Render_Render_660530  this=-  sig=ida-proto ====
bool sub_660530()
{
  return g_TriggerEventState == 0; /*0x66053a*/
}


// ==== 0x00660540  ObjectClass::Map_Helper  this=ObjectClass  sig=csp ====
int __thiscall sub_660540(int this)
{
  int v2; // edx
  int v3; // esi
  int *v4; // eax
  int v5; // ecx
  int v6; // ebp
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
  int *v26; // eax
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
  _DWORD v38[4]; // [esp+50h] [ebp-30h] BYREF
  int v39; // [esp+60h] [ebp-20h] BYREF
  int v40[7]; // [esp+64h] [ebp-1Ch] BYREF

  Render_Render_660730((float *)this, &v39); /*0x66054e*/
  v2 = *(_DWORD *)(this + 4); /*0x660553*/
  v3 = *(_DWORD *)(this + 8); /*0x660556*/
  v4 = &v39; /*0x660559*/
  v5 = 4; /*0x66055d*/
  do /*0x660574*/
  {
    v6 = v3 + v4[1]; /*0x660569*/
    *v4 += v2; /*0x66056b*/
    v4[1] = v6; /*0x66056d*/
    v4 += 2; /*0x660570*/
    --v5; /*0x660573*/
  }
  while ( v5 ); /*0x660574*/
  v7 = 0; /*0x660576*/
  v8 = &v39; /*0x660578*/
  do /*0x6605bb*/
  {
    v9 = v7 + 1; /*0x660582*/
    v10 = *(_DWORD *)MEMORY[0x880A04]; /*0x66058c*/
    v11 = (*(int (__stdcall **)(_BYTE *, int *, int *, void (__thiscall *)(_DWORD *)))(*(_DWORD *)MEMORY[0x880A04] + 120))( /*0x6605a6*/
            v36,
            v8,
            &v40[2 * ((v7 + 1) % 4) - 1],
            sub_65FB60);
    (*(void (__thiscall **)(int, int))(v10 + 68))(MEMORY[0x880A04], v11); /*0x6605b0*/
    v7 = v9; /*0x6605b3*/
    v8 += 2; /*0x6605b5*/
  }
  while ( v9 < 4 ); /*0x6605bb*/
  v12 = 0; /*0x6605bd*/
  v13 = &v39; /*0x6605bf*/
  do /*0x6605f8*/
  {
    v14 = v12 + 1; /*0x6605c9*/
    v28 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x880A04] + 120))(MEMORY[0x880A04], v36); /*0x6605d6*/
    ClipLine(v13, &v40[2 * (v14 % 4) - 1], v28); /*0x6605eb*/
    v12 = v14; /*0x6605f0*/
    v13 += 2; /*0x6605f2*/
  }
  while ( v14 < 4 ); /*0x6605f8*/
  result = 1; /*0x660600*/
  if ( MEMORY[0x880C98] == 1 && MEMORY[0x880C94] == 1 ) /*0x660613*/
  {
    v16 = MEMORY[0x880A00]; /*0x660619*/
    v17 = MEMORY[0x8809FC]; /*0x66061f*/
    v18 = v40; /*0x660625*/
    v37 = 1; /*0x660629*/
    v29 = v40; /*0x66062d*/
    v30 = 4; /*0x660631*/
    do /*0x66071c*/
    {
      v19 = *(v18 - 1); /*0x660644*/
      v20 = v19 + MEMORY[0x880C84]; /*0x660649*/
      v21 = *v18 + MEMORY[0x880C88]; /*0x66064b*/
      if ( v17 <= 0 || v16 <= 0 ) /*0x660653*/
      {
        v31 = v19 + MEMORY[0x880C84]; /*0x6606ba*/
        v32 = v21; /*0x6606be*/
        v33 = 1; /*0x6606cb*/
        v34 = v37; /*0x6606cf*/
      }
      else
      {
        v22 = MEMORY[0x8809F4]; /*0x660655*/
        v23 = MEMORY[0x8809F8]; /*0x66065b*/
        v35 = v17; /*0x660663*/
        v24 = v16; /*0x660667*/
        if ( MEMORY[0x8809F4] > v20 ) /*0x660669*/
        {
          v17 += MEMORY[0x8809F4] - v20; /*0x66066d*/
          v22 = v20; /*0x66066f*/
          v35 = v17; /*0x660671*/
        }
        if ( MEMORY[0x8809F8] > v21 ) /*0x660677*/
        {
          v24 = MEMORY[0x8809F8] - v21 + v16; /*0x66067b*/
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
      v26 = ClipRectIntersection(v38, &v31, &MEMORY[0x880C84], 0, 0); /*0x6606e4*/
      v18 += 2; /*0x6606eb*/
      MEMORY[0x8809F4] = *v26; /*0x6606ee*/
      v29 = v18; /*0x6606f4*/
      MEMORY[0x8809F8] = v26[1]; /*0x6606fb*/
      v17 = v26[2]; /*0x660701*/
      MEMORY[0x8809FC] = v17; /*0x660704*/
      v16 = v26[3]; /*0x66070a*/
      result = v30 - 1; /*0x660711*/
      v27 = v30 == 1; /*0x660711*/
      MEMORY[0x880A00] = v16; /*0x660712*/
      --v30; /*0x660718*/
    }
    while ( !v27 ); /*0x66071c*/
  }
  return result; /*0x660722*/
}


// ==== 0x00660730  ObjectClass::Render_Render  this=int  sig=csp ====
ObjectClass *__thiscall Render_Render_660730(AbstractClass **this, ObjectClass **a2)
{
  float *v3; // eax
  ObjectClass *v4; // esi
  ObjectClass *result; // eax
  int v6; // esi
  float v7; // [esp+4h] [ebp-48h] BYREF
  ObjectClass *v8; // [esp+8h] [ebp-44h]
  Tactical *v9; // [esp+Ch] [ebp-40h]
  AbstractClass aP0; // [esp+10h] [ebp-3Ch] BYREF

  Matrix3x4::Identity(&aP0.__pad_0[12]); /*0x66073a*/
  Matrix2D::Rotate((float *)&aP0.__pad_0[12], *(this + 4)); /*0x660747*/
  v7 = *((float *)this + 3); /*0x66075c*/
  v8 = 0; /*0x660760*/
  v9 = 0; /*0x660768*/
  v3 = TransformMatrix3x4Point(&aP0, (IUnknown *)&aP0.__pad_0[12], (IUnknown *)&v7); /*0x660770*/
  v7 = *v3; /*0x660777*/
  v8 = (ObjectClass *)*((_DWORD *)v3 + 1); /*0x660782*/
  v9 = (Tactical *)*((_DWORD *)v3 + 2); /*0x660789*/
  v4 = (ObjectClass *)Math::RoundToInt(v7); /*0x660796*/
  result = (ObjectClass *)Math::RoundToInt(*(float *)&v8); /*0x660798*/
  a2[2] = (ObjectClass *)-(int)result; /*0x6607a5*/
  *a2 = v4; /*0x6607a8*/
  a2[3] = v4; /*0x6607aa*/
  a2[6] = result; /*0x6607ad*/
  v6 = -(int)v4; /*0x6607b0*/
  a2[4] = (ObjectClass *)v6; /*0x6607b2*/
  a2[7] = (ObjectClass *)v6; /*0x6607b5*/
  a2[1] = result; /*0x6607b8*/
  a2[5] = (ObjectClass *)-(int)result; /*0x6607bb*/
  return result; /*0x6607be*/
}


// ==== 0x006607D0  SaveGame::SaveTriggerEvents  this=VOID_PTR  sig=csp ====
bool __thiscall sub_6607D0(int *this)
{
  int v2; // ecx
  int v4; // edi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v2 = *this; /*0x6607e0*/
  v5 = g_TriggerEventState; /*0x6607e6*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(this, &v5, 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( v5 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))( /*0x660817*/
              this,
              *((_DWORD *)g_TriggerPool + v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= v5 ) /*0x660820*/
        return (*(int (__stdcall **)(int *, __int16 *, int, _DWORD))(*this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x660820*/
    }
    return 0; /*0x660817*/
  }
  return (*(int (__stdcall **)(int *, __int16 *, int, _DWORD))(*this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x6607f1*/
}


// ==== 0x00660840  LoadGame::LoadTriggerEvents  this=VOID_PTR  sig=csp ====
bool __thiscall sub_660840(void *this)
{
  int v1; // edx
  int v2; // edi
  _DWORD *v4; // ecx
  void *v5; // esi
  int v6; // eax
  int v7; // eax
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF

  v1 = g_TriggerEventState; /*0x660840*/
  v2 = g_TriggerEventState - 1; /*0x66084d*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x660856*/
  {
    v4 = g_TriggerPool; /*0x660858*/
    do /*0x6608cb*/
    {
      v5 = (void *)v4[v2]; /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = v4[v2]; /*0x660875*/
        v6 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          LoadGame::RemoveItem(&dword_B04DA8, v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        v4 = g_TriggerPool; /*0x660892*/
        v1 = g_TriggerEventState; /*0x660898*/
      }
      if ( v2 < v1 ) /*0x6608a3*/
      {
        --v1; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
        for ( g_TriggerEventState = v1; v7 < g_TriggerEventState; ++v7 ) /*0x6608b0*/
        {
          v4[v7] = v4[v7 + 1]; /*0x6608b6*/
          v1 = g_TriggerEventState; /*0x6608b9*/
          v4 = g_TriggerPool; /*0x6608bf*/
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  if ( (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = __2_YAPAXI_Z(0x40u); /*0x6608f5*/
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        v11 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        v11 = 0; /*0x66091b*/
      }
      if ( (*(int (__stdcall **)(void *, _DWORD *, int, _DWORD))(*(_DWORD *)this + 12))(this, v11, 64, 0) < 0 ) /*0x660929*/
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (__stdcall **)(void *, __int16 *, int, _DWORD))(*(_DWORD *)this + 12))(this, &word_B04D78, 4, 0) >= 0; /*0x660932*/
    }
    return 0; /*0x660929*/
  }
  return (*(int (__stdcall **)(void *, __int16 *, int, _DWORD))(*(_DWORD *)this + 12))(this, &word_B04D78, 4, 0) >= 0; /*0x6608df*/
}


// ==== 0x00660AD0  ObjectClass::method_660AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AD0(_DWORD *this)
{
  return dword_7F099C[4 * *this]; /*0x660adb*/
}


// ==== 0x00660AE0  ObjectClass::method_660AE0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AE0(_DWORD *this)
{
  return dword_7F09A0[4 * *this]; /*0x660aeb*/
}


// ==== 0x00660AF0  ObjectClass::method_660AF0  this=ObjectClass  sig=csp ====
int __thiscall sub_660AF0(_DWORD *this)
{
  return dword_7F0998[4 * *this]; /*0x660afb*/
}


// ==== 0x00660B00  ObjectClass::Map_Load_660B00  this=ObjectClass  sig=csp ====
void sub_660B00()
{
  int i; // edi
  void *v1; // esi
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  for ( i = g_TriggerEventState - 1; i >= 0; --i ) /*0x660b0c*/
  {
    v1 = (void *)*((_DWORD *)g_TriggerPool + i); /*0x660b15*/
    if ( v1 ) /*0x660b1a*/
    {
      v3 = *((_DWORD *)g_TriggerPool + i); /*0x660b2b*/
      v2 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v3); /*0x660b2f*/
      if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState ) /*0x660b4a*/
      {
        do /*0x660b62*/
        {
          ++v2; /*0x660b52*/
          *((_DWORD *)g_TriggerPool + v2 - 1) = *((_DWORD *)g_TriggerPool + v2); /*0x660b56*/
        }
        while ( v2 < g_TriggerEventState ); /*0x660b62*/
      }
      __3_YAXPAX_Z(v1); /*0x660b65*/
    }
  }
}


// ==== 0x00660B80  ScriptActionQueue::PushNext  this=int  sig=csp ====
int __thiscall ScriptActionQueue::PushNext(int *this)
{
  int result; // eax

  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x660b92*/
  result = dword_B04D88; /*0x660b91*/
  dword_B04D48[dword_B04D88] = *this; /*0x660b99*/
  dword_B04DD8 = result; /*0x660ba0*/
  return result; /*0x660ba5*/
}


// ==== 0x00660BB0  ObjectClass::UI_Create_734120_Create  this=VOID_PTR  sig=csp ====
int *__thiscall sub_660BB0(int *this)
{
  int *result; // eax
  int v2; // edx

  result = this; /*0x660bb0*/
  if ( dword_B04D88 == -1 ) /*0x660bbb*/
  {
    *this = dword_B04D68; /*0x660bc3*/
  }
  else
  {
    v2 = dword_B04D48[dword_B04D88]; /*0x660bc6*/
    dword_B04DD8 = dword_B04D88; /*0x660bcd*/
    *this = v2; /*0x660bd3*/
  }
  return result; /*0x660bc5*/
}


// ==== 0x00660BE0  ObjectClass::UI_Create_734120_Create_660BE0  this=VOID_PTR  sig=csp ====
int *__thiscall sub_660BE0(int *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // ecx
  int v4; // edx

  result = this; /*0x660bea*/
  if ( dword_B04D88 == -1 )
  {
    *this = dword_B04D68; /*0x660bf5*/
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
void __thiscall VectorClass_ptr_RadarEventClass::sub_660C80(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x660c86*/
  *(_DWORD *)(this + 16) = 0; /*0x660c89*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x660c90*/
  {
    __3_YAXPAX_Z(v2); /*0x660c96*/
    *(_DWORD *)(this + 4) = 0; /*0x660c9e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x660ca1*/
  *(_DWORD *)(this + 8) = 0; /*0x660ca4*/
}


// ==== 0x00660CB0  VectorClass_ptr_RadarEventClass::GetItemIndex  this=VectorClass_ptr_RadarEventClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadarEventClass::sub_660CB0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x660cb0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x660cc5*/
  else
    return 0; /*0x660cb7*/
}


// ==== 0x00660CD0  _VectorClass_PAVRadarEventClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x660cda*/
}


// ==== 0x00660CE0  _VectorClass_PAVRadarEventClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x660ce2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x660ced*/
  {
    v3 = 0; /*0x660cef*/
    if ( v2 <= 0 ) /*0x660cf3*/
      return 1; /*0x660d13*/
    v4 = (_DWORD *)this->Items; /*0x660cf5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x660cfb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x660d04*/
    {
      ++v3; /*0x660d06*/
      ++v4; /*0x660d07*/
      if ( v3 >= v2 ) /*0x660d0c*/
        return 1; /*0x660d0c*/
    }
  }
  return 0; /*0x660d0e*/
}


// ==== 0x00660D20  _VectorClass_PAVRadarEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x660d2c*/
  {
    this->IsInitialized = 0; /*0x660d36*/
    if ( a3 ) /*0x660d3c*/
      v4 = a3; /*0x660d52*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x660d4e*/
    this->IsInitialized = 1; /*0x660d56*/
    if ( v4 ) /*0x660d5a*/
    {
      if ( this->Items ) /*0x660d65*/
      {
        v6 = this->Capacity; /*0x660d6c*/
        if ( a2 < v6 ) /*0x660d71*/
          v6 = a2; /*0x660d73*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x660d79*/
          ++i; /*0x660d7e*/
        if ( this->IsAllocated ) /*0x660d8b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x660d96*/
          this->Items = 0; /*0x660d9e*/
        }
      }
      this->Items = v4; /*0x660da7*/
      this->Capacity = a2; /*0x660daf*/
      this->IsAllocated = a3 == 0; /*0x660db2*/
      return 1; /*0x660db8*/
    }
    else
    {
      return 0; /*0x660d5f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x660dc2*/
    return 1; /*0x660dc8*/
  }
}


// ==== 0x00660DD0  _VectorClass_PAVRadarEventClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_RadarEventClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x660ddd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x660de3*/
    *(_DWORD *)(this + 4) = 0; /*0x660deb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x660dee*/
  *(_DWORD *)(this + 8) = 0; /*0x660df1*/
}


// ==== 0x00660E00  _VectorClass_PAVRadarEventClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x660e00*/
    return 0; /*0x660e08*/
  v3 = *(_DWORD *)(this + 8); /*0x660e0e*/
  result = 0; /*0x660e11*/
  if ( v3 <= 0 ) /*0x660e15*/
    return -1; /*0x660e2c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x660e1b*/
  {
    if ( ++result >= v3 ) /*0x660e2a*/
      return -1; /*0x660e2a*/
  }
  return result; /*0x660e0a*/
}


// ==== 0x00660E40  _VectorClass_PAVRadarEventClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_RadarEventClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x660e40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x660e55*/
  else
    return 0; /*0x660e47*/
}


// ==== 0x00660E60  VectorClass_ptr_RadarEventClass::SetCapacity  this=VectorClass_ptr_RadarEventClass  sig=csp ====
char __thiscall VectorClass_ptr_RadarEventClass::sub_660E60(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x660e6c*/
  {
    this->IsInitialized = 0; /*0x660e72*/
    if ( a3 ) /*0x660e78*/
      v4 = a3; /*0x660e8e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x660e8a*/
    this->IsInitialized = 1; /*0x660e92*/
    if ( !v4 ) /*0x660e96*/
      return 0; /*0x660f0a*/
    if ( this->Items ) /*0x660e98*/
    {
      v5 = this->Capacity; /*0x660e9f*/
      if ( a2 < v5 ) /*0x660ea4*/
        v5 = a2; /*0x660ea6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x660eac*/
        ++i; /*0x660eb1*/
      if ( this->IsAllocated ) /*0x660ebe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x660ec9*/
        this->Items = 0; /*0x660ed1*/
      }
    }
    this->Items = v4; /*0x660eda*/
    this->Capacity = a2; /*0x660ee2*/
    this->IsAllocated = a3 == 0; /*0x660ee5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x660eee*/
  }
  v7 = this->Capacity; /*0x660ef1*/
  if ( v7 < this->Items ) /*0x660ef9*/
    this->Items = v7; /*0x660efb*/
  return 1; /*0x660efe*/
}


// ==== 0x00660F10  LoadGame::RemoveItem  this=DynamicVector  sig=csp ====
char __thiscall sub_660F10(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->DynamicVector_field_0x10; /*0x660f10*/
  v3 = a2; /*0x660f13*/
  if ( a2 >= v2 ) /*0x660f19*/
    return 0; /*0x660f3c*/
  v4 = v2 - 1; /*0x660f1b*/
  this->DynamicVector_field_0x10 = v4; /*0x660f1e*/
  if ( a2 < v4 ) /*0x660f21*/
  {
    do /*0x660f34*/
    {
      ++v3; /*0x660f27*/
      *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < this->DynamicVector_field_0x10 ); /*0x660f34*/
  }
  return 1; /*0x660f39*/
}


// ==== 0x00660F50  VectorClass_ptr_RadarEventClass::FindItemIndex  this=VectorClass_ptr_RadarEventClass  sig=csp ====
int __thiscall VectorClass_ptr_RadarEventClass::sub_660F50(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x660f50*/
  result = 0; /*0x660f53*/
  if ( v2 <= 0 ) /*0x660f58*/
    return -1; /*0x660f6f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x660f5e*/
  {
    if ( ++result >= v2 ) /*0x660f6d*/
      return -1; /*0x660f6d*/
  }
  return result; /*0x660f72*/
}


// ==== 0x00660F80  _VectorClass_PAVRadarEventClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_RadarEventClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x660f83*/
  *Block = &vt_VectorClass_RadarEventClass; /*0x660f86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x660f90*/
  {
    __3_YAXPAX_Z(v3); /*0x660f98*/
    *(Block + 1) = 0; /*0x660fa0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x660fab*/
  *(Block + 2) = 0; /*0x660fb1*/
  if ( (a2 & 1) != 0 ) /*0x660fb8*/
    __3_YAXPAX_Z(Block); /*0x660fbb*/
  return (VectorClass *)Block; /*0x660fc5*/
}


// ==== 0x00660FD0  VectorClass_ptr_RadarEventClass::loc_660FD0  this=VOID_PTR  sig=ida-proto ====
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


// ==== 0x00661020  Color::Lerp2  this=int  sig=csp ====
_BYTE *__thiscall sub_661020(_BYTE *this, int a2, int a3, float a4)
{
  double v4; // st7
  double v6; // st7

  v4 = 1.0 - a4; /*0x661028*/
  *this = Math::RoundToInt(v4); /*0x66109d*/
  *(this + 1) = Math::RoundToInt(v4); /*0x661105*/
  v6 = v4 * (double)*(unsigned __int8 *)(a2 + 2) + (double)*(unsigned __int8 *)(a3 + 2) * a4; /*0x661124*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661142*/
  {
    if ( v6 > 255.0 ) /*0x661169*/
      v6 = 255.0; /*0x66116d*/
    *(this + 2) = Math::RoundToInt(v6); /*0x661178*/
    return this; /*0x66117b*/
  }
  else
  {
    *(this + 2) = Math::RoundToInt(0.0); /*0x661151*/
    return this; /*0x661154*/
  }
}


// ==== 0x00661190  Color::ScaleRGB  this=ScenarioClass  sig=csp ====
_BYTE *__thiscall Color_ScaleRGB(_BYTE *this, unsigned __int8 *a2, float a3)
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
  *this = Math::RoundToInt(v4); /*0x6611ee*/
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
  this->Items = Math::RoundToInt(v5); /*0x661245*/
  v6 = (double)a2[2] * a3; /*0x661253*/
  if ( v6 > 255.0 || v6 >= 0.0 ) /*0x661273*/
  {
    if ( v6 > 255.0 ) /*0x661299*/
      v6 = 255.0; /*0x66129d*/
    this->q002 = Math::RoundToInt(v6); /*0x6612a8*/
    return this; /*0x6612ab*/
  }
  else
  {
    this->q002 = Math::RoundToInt(0.0); /*0x661282*/
    return this; /*0x661285*/
  }
}


// ==== 0x006612C0  Color::Lerp  this=ObjectClass  sig=csp ====
unsigned __int8 __thiscall Color::Lerp(unsigned __int8 *this, ObjectClass *aP1, unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  unsigned __int8 v5; // bl
  unsigned __int8 result; // al

  v3 = this->vtable2; /*0x6612f2*/
  *this += (unsigned __int8)aP1 * (*a2 - *this) / 256; /*0x6612f5*/
  v4 = v3 + (unsigned __int8)aP1 * (a2[1] - v3) / 256; /*0x661315*/
  v5 = this->vtable3; /*0x661317*/
  this->vtable2 = v4; /*0x66131a*/
  result = v5 + (unsigned __int8)aP1 * (a2[2] - v5) / 256; /*0x66133d*/
  this->vtable3 = result; /*0x661340*/
  return result; /*0x66132a*/
}


// ==== 0x00661350  Palette::CalcColorDistance  this=VOID_PTR  sig=csp ====
int __thiscall sub_661350(unsigned __int8 *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = *this - *a2; /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *a2 - *this; /*0x661364*/
  v3 = *(this + 1) - a2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2[1] - *(this + 1); /*0x661374*/
  v4 = *(this + 2) - a2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2[2] - *(this + 2); /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/
}


// ==== 0x006613A0  ComputeColorSaturation  this=int  sig=csp ====
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


// ==== 0x006614F0  RulesClass::readGeneralSection  this=VOID_PTR  sig=csp ====
int __thiscall RulesClass::readGeneralSection(void *this, TechnoTypeClass *aP1)
{
  return (*(int (__stdcall **)(TechnoTypeClass *, void *, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))(aP1, this, 3, 0); /*0x6614ff*/
}


// ==== 0x00661510  RulesClass::readCombatDamage  this=int  sig=csp ====
int __thiscall sub_661510(void *this, int a2)
{
  return (*(int (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/
}


// ==== 0x00661530  Map_Append  this=unknown  sig=csp ====
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


// ==== 0x00661590  Map_Append  this=int  sig=csp ====
int __stdcall sub_661590(_BYTE *a1, int a2, int a3)
{
  int result; // eax

  if ( !a2 ) /*0x661597*/
    return Map_Append_661530(a1, 0, a3) + 2; /*0x6615c7*/
  result = Map_Append_661530(a1, (_BYTE *)(a2 + 2), a3) + 2; /*0x6615ac*/
  *(_WORD *)a2 = result; /*0x6615af*/
  return result; /*0x6615b2*/
}


// ==== 0x006615D0  sub_6615D0  this=unknown  sig=csp ====
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


// ==== 0x00661640  sub_661640  this=unknown  sig=csp ====
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
_DWORD *__thiscall sub_6616B0(_DWORD *this)
{
  int v2; // ebp
  _DWORD *v3; // ebx

  v2 = 32; /*0x6616b8*/
  this->Straw_field_0x04 = 0; /*0x6616bd*/
  this->__pad_008 = 0; /*0x6616c0*/
  *this = &vt_Straw; /*0x6616c3*/
  *(this + 3) = 0; /*0x6616c9*/
  this->Straw_field_0x04 = 0; /*0x6616cc*/
  v3 = this + 5; /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 += 2; /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  *(this + 3) = 0; /*0x6616e1*/
  this->Straw_field_0x04 = 0; /*0x6616e4*/
  *this = &vt_RandomStraw; /*0x6616f1*/
  memset(this + 5, 0, 0x100u); /*0x6616f7*/
  return this; /*0x6616fb*/
}


// ==== 0x00661770  ObjectClass::SHA1TickRNG  this=Straw  sig=csp ====
void *__thiscall SHA1TickRNG(_DWORD *this, Straw *aP1)
{
  int v3; // ecx
  _BYTE *v4; // eax
  void *result; // eax
  SHAPipe *v6; // ebx
  Pipe *v7; // esi
  SHAPipe *v8; // edi
  size_t v9; // eax
  _BYTE Src[20]; // [esp+4h] [ebp-88h] BYREF
  Pipe v11; // [esp+18h] [ebp-74h] BYREF
  int v12; // [esp+30h] [ebp-5Ch]
  int v13; // [esp+34h] [ebp-58h]
  int v14; // [esp+38h] [ebp-54h]
  int v15; // [esp+3Ch] [ebp-50h]
  int v16; // [esp+40h] [ebp-4Ch]
  int v17; // [esp+44h] [ebp-48h]
  int v18; // [esp+48h] [ebp-44h]

  v3 = *(this + 3); /*0x661779*/
  if ( ((unsigned __int8)aP1 & 1) != 0 ) /*0x66179a*/
  {
    v4 = (char *)this + (unsigned __int8)(v3 / 8) + 20; /*0x661796*/
    *v4 ^= 1 << (v3 & 7); /*0x6617a3*/
  }
  result = (void *)(*(this + 3) + 1); /*0x6617a9*/
  *(this + 3) = result; /*0x6617ab*/
  if ( result == (void *)2048 ) /*0x6617b3*/
  {
    v6 = (SHAPipe *)(this + 5); /*0x6617bc*/
    v11.__pad_0[0] = 0; /*0x6617c0*/
    v17 = 0; /*0x6617c4*/
    v18 = 0; /*0x6617c8*/
    v12 = 1732584193; /*0x6617cc*/
    v13 = -271733879; /*0x6617d4*/
    v14 = -1732584194; /*0x6617dc*/
    v15 = 271733878; /*0x6617e4*/
    v16 = -1009589776; /*0x6617ec*/
    v7 = 0; /*0x6617f4*/
    v8 = (SHAPipe *)(this + 5); /*0x6617f6*/
    do /*0x66183d*/
    {
      SHA1::Process(&v11, (Pipe *)v6, (Pipe *)0x100); /*0x661802*/
      SHA1::Compute(&v11, (ObjectClass *)Src); /*0x661810*/
      v9 = 256 - (_DWORD)v7; /*0x66181a*/
      if ( (unsigned int)(256 - (_DWORD)v7) > 0x14 ) /*0x66181f*/
        v9 = 20; /*0x661821*/
      result = memcpy(v8, Src, v9); /*0x66182d*/
      v7 = (Pipe *)((char *)v7 + 1); /*0x661835*/
      v8 = (SHAPipe *)((char *)v8 + 1); /*0x661836*/
    }
    while ( (unsigned int)v7 < 0x100 ); /*0x66183d*/
  }
  return result; /*0x661841*/
}


// ==== 0x00661850  Random::AdvanceRandomBytes  this=Straw  sig=csp ====
int __thiscall Random::AdvanceRandomBytes(char *this, char a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  int v7; // eax
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
      v3 = this + (unsigned __int8)(*((_DWORD *)this + 3) / 8) + 20; /*0x661881*/
      *v3 ^= 1 << (*((_DWORD *)this + 3) & 7); /*0x66188e*/
    }
    v4 = *((_DWORD *)this + 3) + 1; /*0x661894*/
    *((_DWORD *)this + 3) = v4; /*0x661896*/
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
int __thiscall sub_661960(char *this, __int16 a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  int result; // eax
  int v9; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v11[29]; // [esp+28h] [ebp-74h] BYREF

  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      v3 = this + (unsigned __int8)(this->vtable4 / 8) + 20; /*0x661991*/
      *v3 ^= 1 << (this->vtable4 & 7); /*0x66199e*/
    }
    v4 = this->vtable4 + 1; /*0x6619a4*/
    this->vtable4 = v4; /*0x6619a6*/
    if ( v4 == 2048 ) /*0x6619ae*/
    {
      v5 = 0; /*0x6619b4*/
      LOBYTE(v11[0]) = 0; /*0x6619b9*/
      v11[11] = 0; /*0x6619be*/
      v11[12] = 0; /*0x6619c2*/
      v11[6] = 1732584193; /*0x6619c6*/
      v11[7] = -271733879; /*0x6619ce*/
      v11[8] = -1732584194; /*0x6619d6*/
      v11[9] = 271733878; /*0x6619de*/
      v11[10] = -1009589776; /*0x6619e6*/
      v6 = this + 20; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(v11, (int)(this + 20), 256); /*0x6619fa*/
        SHA1::Compute(v11, Src); /*0x661a08*/
        v7 = 256 - v5; /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(v6, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        ++v6; /*0x661a2e*/
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
int __thiscall sub_661A60(char *this, int a2)
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

  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      v3 = this + (unsigned __int8)(this->vtable4 / 8) + 20; /*0x661a91*/
      *v3 ^= 1 << (this->vtable4 & 7); /*0x661a9e*/
    }
    v4 = this->vtable4 + 1; /*0x661aa4*/
    this->vtable4 = v4; /*0x661aa6*/
    if ( v4 == 2048 ) /*0x661aae*/
    {
      v5 = 0; /*0x661ab4*/
      LOBYTE(v12[0]) = 0; /*0x661ab9*/
      v12[11] = 0; /*0x661abe*/
      v12[12] = 0; /*0x661ac2*/
      v12[6] = 1732584193; /*0x661ac6*/
      v12[7] = -271733879; /*0x661ace*/
      v12[8] = -1732584194; /*0x661ad6*/
      v12[9] = 271733878; /*0x661ade*/
      v12[10] = -1009589776; /*0x661ae6*/
      v6 = this + 20; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(v12, (int)(this + 20), 256); /*0x661afa*/
        SHA1::Compute(v12, Src); /*0x661b08*/
        v7 = 256 - v5; /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(v6, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        ++v6; /*0x661b2e*/
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
void *__thiscall sub_661B70(char *this)
{
  int v1; // ebx
  unsigned int v2; // esi
  char *v3; // edi
  size_t v4; // eax
  void *result; // eax
  char Src[20]; // [esp+Ch] [ebp-88h] BYREF
  _DWORD v7[29]; // [esp+20h] [ebp-74h] BYREF

  v1 = (int)(this + 20); /*0x661b7a*/
  LOBYTE(v7[0]) = 0; /*0x661b7e*/
  v7[11] = 0; /*0x661b82*/
  v7[12] = 0; /*0x661b86*/
  v7[6] = 1732584193; /*0x661b8a*/
  v7[7] = -271733879; /*0x661b92*/
  v7[8] = -1732584194; /*0x661b9a*/
  v7[9] = 271733878; /*0x661ba2*/
  v7[10] = -1009589776; /*0x661baa*/
  v2 = 0; /*0x661bb2*/
  v3 = this + 20; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(v7, v1, 256); /*0x661bc0*/
    SHA1::Compute(v7, Src); /*0x661bce*/
    v4 = 256 - v2; /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    ++v3; /*0x661bf4*/
  }
  while ( v2 < 0x100 ); /*0x661bfb*/
  return result; /*0x661bfd*/
}


// ==== 0x00661C10  RandomStraw::Release  this=RandomStraw  sig=csp ====
Straw *__thiscall RandomStraw::Release(_DWORD *this, _BYTE *a2, Straw *aP2)
{
  Straw *v3; // ebx
  _BYTE *v4; // edi
  int v6; // eax

  v3 = aP2; /*0x661c11*/
  v4 = a2; /*0x661c17*/
  if ( !a2 || (int)aP2 < 1 ) /*0x661c24*/
    return (Straw *)Delegate::Invoke(this, (int)a2, aP2); /*0x661c5d*/
  do /*0x661c4d*/
  {
    v6 = this->RandomStraw_field_0x04; /*0x661c30*/
    this->RandomStraw_field_0x04 = v6 + 1; /*0x661c38*/
    *v4++ = RandomStraw::AdvanceState(this + 2 * v6 + 5); /*0x661c40*/
    v3 = (Straw *)((char *)v3 - 1); /*0x661c49*/
    this->RandomStraw_field_0x04 &= 0x1Fu; /*0x661c4a*/
  }
  while ( v3 ); /*0x661c4d*/
  return aP2; /*0x661c53*/
}


// ==== 0x00661C70  RandomStraw::QueryInterface  this=RandomStraw  sig=csp ====
RandomStraw *__thiscall RandomStraw::QueryInterface(int *Block, char a2)
{
  *Block = (int)&vt_RandomStraw; /*0x661c7e*/
  *(Block + 3) = 0; /*0x661c84*/
  *(Block + 4) = 0; /*0x661c87*/
  memset(Block + 5, 0, 0x100u); /*0x661c8a*/
  Straw::Dtor(Block); /*0x661c8e*/
  if ( (a2 & 1) != 0 ) /*0x661c98*/
    __3_YAXPAX_Z(Block); /*0x661c9b*/
  return (RandomStraw *)Block; /*0x661ca5*/
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
int __thiscall RocketLocomotionClass::RocketLocomotionClass(int this)
{
  wchar_t *v2; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x661ec3*/
  *(_DWORD *)(this + 24) = dword_B04E38; /*0x661ed1*/
  *(_DWORD *)(this + 28) = dword_B04E3C; /*0x661eda*/
  *(_DWORD *)(this + 32) = dword_B04E40; /*0x661ee3*/
  *(_DWORD *)(this + 36) = MEMORY[0xA8ED84]; /*0x661eee*/
  *(_DWORD *)(this + 44) = 0; /*0x661ef1*/
  *(_DWORD *)(this + 48) = 0; /*0x661ef4*/
  v2 = MEMORY[0xA8ED84]; /*0x661ef7*/
  *(_DWORD *)(this + 60) = 0; /*0x661efd*/
  *(_DWORD *)(this + 52) = v2; /*0x661f00*/
  *(_DWORD *)(this + 72) = 0; /*0x661f03*/
  *(_DWORD *)(this + 64) = 0; /*0x661f06*/
  *(_DWORD *)(this + 76) = 0; /*0x661f09*/
  *(_BYTE *)(this + 81) = 0; /*0x661f0c*/
  *(_DWORD *)(this + 84) = 0; /*0x661f0f*/
  *(_DWORD *)(this + 88) = 0; /*0x661f12*/
  *(_BYTE *)(this + 80) = 1; /*0x661f15*/
  *(_DWORD *)this = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *(_DWORD *)(this + 4) = &vt_RocketLocomotionClass; /*0x661f1f*/
  return this; /*0x661f28*/
}


// ==== 0x00661F30  RocketLocomotionClass::method_661F30  this=RocketLocomotionClass  sig=csp ====
void __thiscall sub_661F30(_DWORD *this)
{
  *this = &RocketLocomotionClass::`vftable'; /*0x661f30*/
  this->Powered = &vt_RocketLocomotionClass; /*0x661f36*/
  LocomotionClass::Construct(this); /*0x661f3d*/
}


// ==== 0x00661F50  JumpjetLocomotionClass::HasFieldStateChanged  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_661F50(_DWORD *a1)
{
  return a1[5] != dword_B04E38 || a1[6] != dword_B04E3C || a1[7] != dword_B04E40; /*0x661f7d*/
}


// ==== 0x00661F90  RocketLocomotionClass::CheckCompositeState_0  this=RocketLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_661F90(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 60); /*0x661f94*/
  return v1 >= 3 && v1 <= 5; /*0x661fa3*/
}


// ==== 0x00661FB0  JumpjetLocomotionClass::GetCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_661FB0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[6]; /*0x661fbd*/
  v3 = a1[7]; /*0x661fc0*/
  *a2 = a1[5]; /*0x661fc5*/
  a2[1] = v2; /*0x661fc7*/
  a2[2] = v3; /*0x661fca*/
  return a2; /*0x661fcf*/
}


// ==== 0x006620F0  BulletClass::ComputeImpactTrajectory  this=int  sig=csp ====
char __thiscall sub_6620F0(int this, int a2)
{
  _DWORD *v3; // edx
  int v4; // ecx
  double v5; // st7
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  double v10; // [esp+0h] [ebp-38h]
  double v11; // [esp+18h] [ebp-20h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h] BYREF
  _DWORD v14[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v12 = *(_DWORD *)(a2 + 40); /*0x662107*/
  v3 = (_DWORD *)(*(_DWORD *)(this + 12) + 156); /*0x66210e*/
  v10 = *(float *)(this + 84); /*0x662119*/
  v4 = *(_DWORD *)(*(_DWORD *)(this + 12) + 160); /*0x66211c*/
  v14[0] = *v3; /*0x66211f*/
  v14[1] = v4; /*0x662123*/
  v15 = v3[2]; /*0x66212a*/
  Math::ArcTan2(v10); /*0x66212e*/
  v11 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v13) - 0x3FFF) /*0x662162*/
      * -0.00009587672516830327;
  Math::SinCos(v11); /*0x662170*/
  Math::ArcTan2(v11); /*0x662179*/
  v5 = Math::SinCos(*(float *)(this + 84)); /*0x662189*/
  v6 = Math::RoundToInt(v5 * (double)v12 + (double)v15); /*0x66219e*/
  if ( v6 > *(_DWORD *)(this + 32) ) /*0x6621a5*/
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x6621be*/
    if ( !v7 /*0x6621f1*/
      || (v7[80] & 0x100) == 0
      || (v8 = *(_DWORD *)(this + 32),
          *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD *))(*v7 + 72))(v7, v14) + 8) != v8)
      || v6 > dword_B04E6C + v8 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) > 0 ) /*0x662212*/
        return 0; /*0x662228*/
    }
  }
  TechnoClass::CalculateDamage(this); /*0x662216*/
  return 1; /*0x6621b0*/
}


// ==== 0x00662240  ObjectClass::method  this=ObjectClass  sig=csp ====
double __thiscall sub_662240(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  double v3; // st7
  int v5; // [esp+1Ch] [ebp-4h]

  v1 = this->nextArrayIndex - *(_DWORD *)(this->vtable4 + 156); /*0x66225b*/
  v2 = this->referenceCount - *(_DWORD *)(this->vtable4 + 160); /*0x662263*/
  v5 = this->NeedsSaveOrLink - *(_DWORD *)(this->vtable4 + 164); /*0x662267*/
  v3 = Math::Sqrt((double)(v2 * v2 + v1 * v1)); /*0x662282*/
  if ( v3 <= 0.0 ) /*0x662297*/
    return -1.570796326794897; /*0x6622b5*/
  else
    return Math::ArcTan((double)v5 / v3); /*0x6622a7*/
}


// ==== 0x006622C0  RocketLocomotionClass::UpdateBullets  this=RocketLocomotionClass  sig=csp ====
char __stdcall UpdateBullets(int a1)
{
  ObjectClass *v1; // ecx
  int v2; // edx
  ObjectClass *v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // al
  IUnknown *v7; // edx
  int v8; // eax
  AnimClass *v9; // ebx
  AnimClass *v11; // eax
  int edx19; // edx
  IUnknown *v13; // ecx
  int eax24; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int objectTypeFlags; // ecx
  bool v19; // al
  IUnknown *v21; // ebx
  IUnknown *v22; // edi
  int edx34; // edx
  int v23; // eax
  AnimClass *v25; // edi
  AnimClass *v27; // eax
  int v26; // ecx
  int edx41; // edx
  int v28; // eax
  IUnknown *v31; // ecx
  int v30; // eax
  int edi43; // edi
  _WORD *v32; // eax
  ObjectClass *v35; // ecx
  int v34; // eax
  int edx50; // edx
  int v36; // eax
  bool v37; // al
  IUnknown *v40; // edx
  int v39; // eax
  _WORD *eax63; // eax
  AnimClass *v43; // edi
  AnimClass *v45; // eax
  ObjectClass *v46; // ecx
  int v44; // eax
  double st7_69; // st7
  double st6_69; // st6
  double v47; // st5
  IUnknown *v51; // ecx
  int v49; // eax
  int v50; // edi
  int ebx82; // ebx
  _DWORD *v52; // eax
  int v53; // ecx
  BuildingTypeClass *v57; // eax
  double v55; // st7
  _DWORD *ebx90; // ebx
  ObjectClass *v61; // ecx
  int v59; // eax
  _DWORD *v60; // edi
  int *eax91a; // eax
  int v62; // ecx
  int v63; // eax
  double v64; // st7
  double v65; // st7
  int v66; // ecx
  int v67; // edx
  int v68; // eax
  int v69; // ecx
  double v70; // st7
  double v71; // st7
  double v72; // st7
  ObjectClass *v75; // ecx
  int v74; // ebx
  ObjectClass *v77; // eax
  int v76; // edx
  int eax98; // eax
  int v78; // ecx
  int v79; // edx
  ObjectClass *v82; // eax
  double v81; // st7
  int *eax100; // eax
  int v83; // ecx
  double v84; // st7
  int v85; // ecx
  _DWORD *v86; // ebx
  BuildingTypeClass *v88; // eax
  int ecx102; // ecx
  double v89; // st7
  double v90; // st7
  double v91; // st7
  double v92; // st6
  double v93; // st7
  IUnknown *v94; // edx
  int v95; // eax
  AnimClass *v96; // edi
  AnimClass *v98; // eax
  int edx118; // edx
  int v99; // eax
  double aP0; // st7
  int v101; // edx
  ObjectClass *v103; // eax
  double st7_120a; // st7
  double v104; // st7
  double v105; // st7
  int v106; // ebx
  double v107; // st7
  VectorClass **v108; // eax
  ObjectClass *v111; // ecx
  VectorClass *v110; // eax
  __int128 _8; // [esp+8h] [ebp-B8h]
  double aP0_4; // [esp+10h] [ebp-B0h]
  ObjectClass *v113; // [esp+28h] [ebp-98h]
  ObjectClass *v115; // [esp+28h] [ebp-98h]
  ObjectClass *v116; // [esp+28h] [ebp-98h]
  ObjectClass *desiredFacing; // [esp+2Ch] [ebp-94h] BYREF
  double desiredFacing_4; // [esp+30h] [ebp-90h]
  ObjectClass *v119; // [esp+38h] [ebp-88h]
  double var84_4; // [esp+40h] [ebp-80h]
  IUnknown *v121; // [esp+48h] [ebp-78h]
  double var74_4; // [esp+50h] [ebp-70h] BYREF
  ObjectClass *v123; // [esp+58h] [ebp-68h]
  double var64_4; // [esp+60h] [ebp-60h] BYREF
  CoordStruct v124; // [esp+68h] [ebp-58h] BYREF
  int v125; // [esp+74h] [ebp-4Ch] BYREF
  int v126; // [esp+78h] [ebp-48h]
  int v127; // [esp+7Ch] [ebp-44h]
  IUnknown *v128[3]; // [esp+84h] [ebp-3Ch] BYREF
  CoordStruct v129; // [esp+90h] [ebp-30h] BYREF
  int v130[3]; // [esp+9Ch] [ebp-24h] BYREF
  CoordStruct v131; // [esp+A8h] [ebp-18h] BYREF
  CoordStruct aP2; // [esp+B4h] [ebp-Ch] BYREF

  v1 = *(ObjectClass **)(a1 + 8);
  v2 = *(_DWORD *)&v1[10].__pad_0[12];
  if ( v2 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1248) )
  {
    v3 = (ObjectClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1200);
LABEL_6:
    v113 = v3;
    v4 = (int)v3;
    goto LABEL_7;
  }
  if ( v2 != *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1352) )
  {
    v3 = (ObjectClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1252);
    goto LABEL_6;
  }
  v4 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 1304;
  v113 = (ObjectClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1304);
LABEL_7:
  switch ( *(_DWORD *)(a1 + 60) )
  {
    case 1:
      *(_DWORD *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 72) = 0;
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 724);
      v6 = v5 && VeterancyStruct::IsElite((float *)(v5 + 336));
      *(_BYTE *)(a1 + 77) = v6;
      if ( *(_DWORD *)(v4 + 48) != *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1352) )
      {
        *(_BYTE *)(a1 + 76) = 1;
LABEL_23:
        LODWORD(var84_4) = *(_DWORD *)(a1 + 44);
        if ( !LODWORD(var84_4) )
          goto LABEL_29;
        v13 = *(IUnknown **)(a1 + 32);
        eax24 = *(_DWORD *)(a1 + 40);
        if ( v13 != (IUnknown *)-1 )
        {
          v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v13;
          if ( v14 >= eax24 )
            eax24 = 0;
          else
            eax24 -= v14;
        }
        if ( (double)(LODWORD(var84_4) - eax24) / (double)SLODWORD(var84_4) == 1.0 )
        {
LABEL_29:
          v15 = v126;
          v16 = -(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1352) != *(_DWORD *)(v4 + 48));
          LOBYTE(v16) = v16 & 0xFC;
          *(_DWORD *)(a1 + 60) = v16 + 6;
          v17 = *(_DWORD *)(v4 + 4);
          *(_DWORD *)(a1 + 32) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
          *(_DWORD *)(a1 + 36) = v15;
          *(_DWORD *)(a1 + 40) = v17;
          *(_DWORD *)(a1 + 44) = v17;
        }
        goto LABEL_111;
      }
      v7 = *(IUnknown **)(a1 + 48);
      v8 = *(_DWORD *)(a1 + 56);
      if ( v7 == (IUnknown *)-1 )
        goto LABEL_16;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v7 >= v8 )
        goto LABEL_17;
      v8 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v7;
LABEL_16:
      if ( !v8 )
      {
LABEL_17:
        v9 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v9 )
        {
          aP2 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v11 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15344]);
          AnimClass::ctor(
            (void **)v9,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v11),
            &aP2,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        edx19 = v126;
        *(_DWORD *)(a1 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = edx19;
        *(_DWORD *)(a1 + 56) = 24;
      }
      if ( *(_BYTE *)(a1 + 76) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 0);
        *(_BYTE *)(a1 + 76) = 0;
        Targeting::Readd(*(IUnknown **)(a1 + 8));
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1);
      }
      goto LABEL_23;
    case 2:
      *(_DWORD *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 72) = 0;
      v36 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 724);
      v37 = v36 && VeterancyStruct::IsElite((float *)(v36 + 336));
      *(_BYTE *)(a1 + 77) = v37;
      LODWORD(var84_4) = *(_DWORD *)(a1 + 44);
      if ( !LODWORD(var84_4) )
        goto LABEL_63;
      v40 = *(IUnknown **)(a1 + 32);
      v39 = *(_DWORD *)(a1 + 40);
      if ( v40 != (IUnknown *)-1 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v40 >= v39 )
          v39 = 0;
        else
          v39 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v40;
      }
      LODWORD(desiredFacing_4) = LODWORD(var84_4) - v39;
      if ( (double)(LODWORD(var84_4) - v39) / (double)SLODWORD(var84_4) != 1.0 )
      {
        st7_69 = *(float *)&v113->__pad_0[8] * 1.570796326794897;
        st6_69 = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        LODWORD(desiredFacing_4) = *(_DWORD *)(a1 + 44);
        if ( LODWORD(desiredFacing_4) )
        {
          v51 = *(IUnknown **)(a1 + 32);
          v49 = *(_DWORD *)(a1 + 40);
          if ( v51 != (IUnknown *)-1 )
          {
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v51 >= v49 )
              v49 = 0;
            else
              v49 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v51;
          }
          LODWORD(var64_4) = LODWORD(desiredFacing_4) - v49;
          v47 = (double)(LODWORD(desiredFacing_4) - v49) / (double)SLODWORD(desiredFacing_4);
        }
        else
        {
          v47 = 1.0;
        }
        *(float *)(a1 + 80) = (st6_69 - st7_69) * v47 + st7_69;
      }
      else
      {
LABEL_63:
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        *(_DWORD *)(a1 + 60) = 3;
        eax63 = (_WORD *)(*(int (__thiscall **)(_DWORD, IUnknown **))(**(_DWORD **)(a1 + 8) + 756))(
                           *(_DWORD *)(a1 + 8),
                           v128);
        if ( *eax63 == word_B04E18 && eax63[1] == word_B04E1A )
          GadgetGrid::InsertItem(&stru_87C374.__pad_579C[23928], *(ObjectClass **)(a1 + 8));
        v43 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v43 )
        {
          v129 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v45 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15344]);
          AnimClass::ctor(
            (void **)v43,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v45),
            &v129,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v46 = *(ObjectClass **)(a1 + 8);
        v124 = *(CoordStruct *)v46->location;
        v44 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v46->__pad_0 + 132))(v46);
        StartAudioControllerAt(*(AudioController **)(v44 + 1324), (int)&v124, 0);
      }
      goto LABEL_111;
    case 3:
      if ( !*(_BYTE *)(a1 + 76) )
      {
        (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v1->__pad_0 + 292))(v1, 0);
        *(_BYTE *)(a1 + 76) = 1;
        Targeting::Readd(*(IUnknown **)(a1 + 8));
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1);
      }
      *(double *)(a1 + 68) = *(float *)(v4 + 24) + *(double *)(a1 + 68);
      if ( (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 1656) < *(double *)(a1 + 68) )
        *(double *)(a1 + 68) = (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8))
                                              + 1656);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) >= *(_DWORD *)(v4 + 28) )
      {
        *(_DWORD *)(a1 + 60) = 4;
        v50 = *(_DWORD *)(a1 + 20);
        ebx82 = *(_DWORD *)(a1 + 24);
        v52 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 72))(*(_DWORD *)(a1 + 8), &v125);
        v53 = *v52 - v50;
        v57 = (BuildingTypeClass *)(v52[1] - ebx82);
        desiredFacing_4 = COERCE_DOUBLE(__PAIR64__((unsigned int)v57, v53));
        v55 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v57 * (double)(int)v57 + (double)v53 * (double)v53));
        *(_DWORD *)(a1 + 84) = Math::RoundToInt(v55);
      }
      goto LABEL_111;
    case 4:
      if ( (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v1->__pad_0 + 456))(v1) <= 0 )
      {
        TechnoClass::CalculateDamage(a1 - 4);
        return 0;
      }
      *(double *)(a1 + 68) = *(float *)(v4 + 24) + *(double *)(a1 + 68);
      if ( (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 1656) < *(double *)(a1 + 68) )
        *(double *)(a1 + 68) = (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8))
                                              + 1656);
      if ( *(_BYTE *)(v4 + 44) && *(_DWORD *)(a1 + 84) )
      {
        ebx90 = (_DWORD *)(a1 - 4);
        if ( BulletClass::ComputeImpactTrajectory(a1 - 4, v4) )
          return 0;
        v61 = *(ObjectClass **)(a1 + 8);
        v59 = *(_DWORD *)(a1 + 20);
        v60 = (_DWORD *)(a1 + 20);
        HIDWORD(desiredFacing_4) = *(_DWORD *)(a1 + 24);
        LODWORD(desiredFacing_4) = v59;
        eax91a = (int *)(*(int (__thiscall **)(ObjectClass *, int *))(*(_DWORD *)v61->__pad_0 + 72))(v61, &v125);
        v62 = *eax91a;
        v63 = eax91a[1];
        LODWORD(var84_4) = v62 - LODWORD(desiredFacing_4);
        HIDWORD(var84_4) = v63 - HIDWORD(desiredFacing_4);
        v64 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)(v63 - HIDWORD(desiredFacing_4))
                                          * (double)(v63 - HIDWORD(desiredFacing_4))
                                          + (double)(v62 - LODWORD(desiredFacing_4))
                                          * (double)(v62 - LODWORD(desiredFacing_4))));
        LODWORD(desiredFacing_4) = Math::RoundToInt(v64);
        v65 = (double)SLODWORD(desiredFacing_4) / (double)*(int *)(a1 + 84);
        v66 = *(_DWORD *)(ebx90[3] + 156);
        v67 = *(_DWORD *)(ebx90[3] + 160);
        v119 = *(ObjectClass **)(ebx90[3] + 164);
        v68 = ebx90[6] - v66;
        v69 = ebx90[7] - v67;
        v127 = ebx90[8] - (_DWORD)v119;
        var84_4 = v65;
        var74_4 = 1.0 - v65;
        LODWORD(desiredFacing_4) = v69 * v69 + v68 * v68;
        v70 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)SLODWORD(desiredFacing_4)));
        if ( v70 <= 0.0 )
          v71 = -1.570796326794897;
        else
          v71 = Math::ArcTan((double)v127 / v70);
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * var84_4 * 1.570796326794897 + v71 * var74_4;
      }
      else
      {
        if ( *(float *)(a1 + 80) > 0.0 )
        {
          v72 = *(float *)(a1 + 80) - *(float *)(v4 + 16);
          *(float *)(a1 + 80) = v72;
          if ( v72 < 0.0 )
            *(_DWORD *)(a1 + 80) = 0;
        }
        v60 = (_DWORD *)(a1 + 20);
        var74_4 = *(double *)(a1 + 20);
        v75 = *(ObjectClass **)(a1 + 8);
        v123 = *(ObjectClass **)(a1 + 28);
        v125 = v75->location[0];
        v126 = v75->location[1];
        v74 = v75->location[2] - (_DWORD)v123;
        LODWORD(var84_4) = v75->location[0];
        v77 = (ObjectClass *)v75->location[2];
        HIDWORD(var84_4) = v75->location[1];
        v76 = *(_DWORD *)v75->__pad_0;
        v121 = (IUnknown *)v77;
        eax98 = (*(int (__thiscall **)(ObjectClass *, int *))(v76 + 72))(v75, &v125);
        v78 = *(_DWORD *)eax98 - LODWORD(var74_4);
        v79 = *(_DWORD *)(eax98 + 4);
        v82 = *(ObjectClass **)(eax98 + 8);
        LODWORD(desiredFacing_4) = v78;
        HIDWORD(desiredFacing_4) = v79 - HIDWORD(var74_4);
        v119 = (ObjectClass *)((char *)v82 - (char *)v121);
        v81 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)((char *)v82 - (char *)v121) * (double)((char *)v82 - (char *)v121)
                                          + (double)(v79 - HIDWORD(var74_4)) * (double)(v79 - HIDWORD(var74_4))
                                          + (double)v78 * (double)v78));
        if ( (int)Math::RoundToInt(v81) <= v74 )
          *(_DWORD *)(a1 + 60) = 5;
      }
      eax100 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 72))(*(_DWORD *)(a1 + 8), &v125);
      v83 = *eax100;
      LODWORD(desiredFacing_4) = *v60;
      LODWORD(var84_4) = v83;
      *((double *)&_8 + 1) = (double)SLODWORD(desiredFacing_4) - (double)v83;
      *(double *)&_8 = (double)eax100[1] - (double)(int)v60[1];
      v84 = Math::CalcAngle((AbstractClass *)_8, *(double *)((char *)&_8 + 4));
      LOWORD(desiredFacing_4) = Math::RoundToInt((v84 - 1.570796326794897) * -10430.06004058427);
      v85 = *(_DWORD *)(a1 + 8);
      desiredFacing = (ObjectClass *)LODWORD(desiredFacing_4);
      FacingClass::Update((FacingClass *)(v85 + 904), (DirStruct *)&desiredFacing);
LABEL_111:
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1) )
        goto LABEL_119;
      v94 = *(IUnknown **)(a1 + 48);
      v95 = *(_DWORD *)(a1 + 56);
      if ( v94 == (IUnknown *)-1 )
        goto LABEL_115;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v94 >= v95 )
        goto LABEL_116;
      v95 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v94;
LABEL_115:
      if ( !v95 )
      {
LABEL_116:
        v96 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v96 )
        {
          v124 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v98 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15348]);
          AnimClass::ctor(
            (void **)v96,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v98),
            &v124,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        edx118 = v126;
        *(_DWORD *)(a1 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = edx118;
        *(_DWORD *)(a1 + 56) = 3;
      }
LABEL_119:
      if ( *(double *)(a1 + 68) > 0.0 )
      {
        desiredFacing = (ObjectClass *)Math::RoundToInt(*(double *)(a1 + 68));
        v99 = *(_DWORD *)(a1 - 4 + 12) + 156;
        desiredFacing_4 = (double)(int)desiredFacing;
        aP0 = *(float *)(a1 - 4 + 84);
        v101 = *(_DWORD *)(v99 + 4);
        LODWORD(var84_4) = *(_DWORD *)v99;
        v103 = *(ObjectClass **)(v99 + 8);
        HIDWORD(var84_4) = v101;
        v121 = (IUnknown *)v103;
        st7_120a = Math::ArcTan2((IUnknown *)LODWORD(aP0));
        LODWORD(var64_4) = Math::RoundToInt(st7_120a * desiredFacing_4);
        desiredFacing = (ObjectClass *)(*(__int16 *)ProgressTimer::GetValue(
                                                      (_WORD *)(*(_DWORD *)(a1 - 4 + 12) + 904),
                                                      (IUnknown *)v128)
                                      - 0x3FFF);
        *(double *)&v128[1] = (double)(int)desiredFacing * -0.00009587672516830327;
        var64_4 = (double)SLODWORD(var64_4);
        var74_4 = (double)SHIDWORD(var84_4);
        v104 = Math::SinCos(v128[1]);
        desiredFacing = (ObjectClass *)Math::RoundToInt(var74_4 - v104 * var64_4);
        v105 = Math::ArcTan2(v128[1]);
        v106 = Math::RoundToInt(v105 * var64_4 + (double)SLODWORD(var84_4));
        aP0_4 = *(float *)(a1 - 4 + 84);
        v129.Y = (int)desiredFacing;
        v129.Z = (int)v121;
        v107 = Math::SinCos((IUnknown *)LODWORD(aP0_4));
        v124.Z = Math::RoundToInt(v107 * desiredFacing_4 + (double)(int)v121);
        v124.X = v106;
        v124.Y = v129.Y;
        LOWORD(v116) = v106 / 256;
        HIWORD(v116) = v129.Y / 256;
        desiredFacing = v116;
        if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&desiredFacing) )
          (*(void (__thiscall **)(_DWORD, CoordStruct *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v124);
        v108 = (VectorClass **)(*(int (__thiscall **)(_DWORD, IUnknown **))(**(_DWORD **)(a1 + 8) + 440))(
                                 *(_DWORD *)(a1 + 8),
                                 v128);
        v111 = *(ObjectClass **)(a1 + 8);
        v110 = *v108;
        desiredFacing = (ObjectClass *)v110;
        if ( (_WORD)v110 != *(_WORD *)v111[8].__pad_0 || HIWORD(desiredFacing) != *(_WORD *)&v111[8].__pad_0[2] )
        {
          if ( v111->isAliveFlag )
            Coord::ToGridIndex(
              &stru_87C374.__pad_579C[23928],
              (VectorClass *)v111,
              *(VectorClass **)v111[8].__pad_0,
              v110);
        }
        if ( *(int *)(*(_DWORD *)(a1 + 8) + 108) <= 0 )
          TechnoClass::CalculateDamage(a1 - 4);
      }
      return (*(char (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1);
    case 5:
      v86 = (_DWORD *)(a1 - 4);
      if ( BulletClass::ComputeImpactTrajectory(a1 - 4, v4) )
        return 0;
      v88 = (BuildingTypeClass *)(v86[6] - *(_DWORD *)(v86[3] + 156));
      ecx102 = v86[7] - *(_DWORD *)(v86[3] + 160);
      v127 = v86[8] - *(_DWORD *)(v86[3] + 164);
      LODWORD(desiredFacing_4) = (_DWORD)v88 * (_DWORD)v88 + ecx102 * ecx102;
      v89 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)SLODWORD(desiredFacing_4)));
      if ( v89 <= 0.0 )
        v90 = -1.570796326794897;
      else
        v90 = Math::ArcTan((double)v127 / v89);
      v91 = v90 - *(float *)(a1 + 80);
      v92 = v91;
      if ( v91 < 0.0 )
        v92 = -v91;
      if ( v92 <= *(float *)&v113->uniqueId )
      {
        *(float *)(a1 + 80) = *(float *)(a1 + 80) + v91;
      }
      else
      {
        if ( v91 >= 0.0 )
          v93 = *(float *)&v113->uniqueId + *(float *)(a1 + 80);
        else
          v93 = *(float *)(a1 + 80) - *(float *)&v113->uniqueId;
        *(float *)(a1 + 80) = v93;
      }
      goto LABEL_111;
    case 6:
      objectTypeFlags = v1[4].objectTypeFlags;
      v19 = objectTypeFlags && VeterancyStruct::IsElite((float *)(objectTypeFlags + 336));
      v21 = (IUnknown *)(a1 + 48);
      *(_BYTE *)(a1 + 77) = v19;
      v22 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
      edx34 = *(_DWORD *)(a1 + 48);
      v23 = *(_DWORD *)(a1 + 56);
      if ( edx34 == -1 )
        goto LABEL_37;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - edx34 >= v23 )
        goto LABEL_38;
      v23 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - edx34;
LABEL_37:
      if ( !v23 )
      {
LABEL_38:
        v25 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v25 )
        {
          v131 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v27 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15344]);
          AnimClass::ctor(
            (void **)v25,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v27),
            &v131,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v21->field_0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = v126;
        *(_DWORD *)(a1 + 56) = 24;
        v22 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
      }
      v26 = *(_DWORD *)(a1 + 8) + 156;
      LODWORD(var74_4) = *(_DWORD *)v26;
      edx41 = *(_DWORD *)(a1 + 44);
      v28 = *(_DWORD *)(v26 + 4);
      LODWORD(desiredFacing_4) = edx41;
      HIDWORD(var74_4) = v28;
      v123 = *(ObjectClass **)(v26 + 8);
      if ( !edx41 )
        goto LABEL_47;
      v31 = *(IUnknown **)(a1 + 32);
      v30 = *(_DWORD *)(a1 + 40);
      if ( v31 != (IUnknown *)-1 )
      {
        edi43 = (char *)v22 - (char *)v31;
        if ( edi43 >= v30 )
          v30 = 0;
        else
          v30 -= edi43;
      }
      LODWORD(var84_4) = edx41 - v30;
      if ( (double)(edx41 - v30) / (double)SLODWORD(desiredFacing_4) != 1.0 )
      {
        v123 = (ObjectClass *)((char *)v123 + v113->abstractFlags);
        LOWORD(v115) = SLODWORD(var74_4) / 256;
        HIWORD(v115) = SHIDWORD(var74_4) / 256;
        LODWORD(var64_4) = v115;
        if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&var64_4) )
          (*(void (__thiscall **)(_DWORD, double *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &var74_4);
      }
      else
      {
LABEL_47:
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        v32 = (_WORD *)(*(int (__thiscall **)(_DWORD, IUnknown **))(**(_DWORD **)(a1 + 8) + 756))(
                         *(_DWORD *)(a1 + 8),
                         &v128[1]);
        if ( *v32 == word_B04E18 && v32[1] == word_B04E1A )
        {
          v35 = *(ObjectClass **)(a1 + 8);
          v130[0] = v35->location[0];
          v130[1] = v35->location[1];
          v130[2] = v35->location[2];
          v34 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v35->__pad_0 + 132))(v35);
          StartAudioControllerAt(*(AudioController **)(v34 + 1324), (int)v130, 0);
          GadgetGrid::InsertItem(&stru_87C374.__pad_579C[23928], *(ObjectClass **)(a1 + 8));
        }
        edx50 = v126;
        v21->field_0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = edx50;
        *(_DWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 60) = 3;
      }
      goto LABEL_111;
    default:
      goto LABEL_111;
  }
}


// ==== 0x00663030  TechnoClass::CalculateDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_CalculateDamage(int this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // ecx
  int *v5; // edx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // edi
  double v11; // st7
  int v12; // edi
  int v13; // ebx
  void *VersusMultiplier; // eax
  double v16; // [esp+0h] [ebp-68h]
  double v17; // [esp+0h] [ebp-68h]
  __int64 v18; // [esp+0h] [ebp-68h]
  int v19; // [esp+18h] [ebp-50h]
  char *v20; // [esp+1Ch] [ebp-4Ch]
  int v21; // [esp+20h] [ebp-48h]
  double v22; // [esp+20h] [ebp-48h]
  int v23; // [esp+28h] [ebp-40h]
  double v24; // [esp+28h] [ebp-40h]
  void **v25; // [esp+28h] [ebp-40h]
  int v26; // [esp+30h] [ebp-38h] BYREF
  int v27; // [esp+34h] [ebp-34h] BYREF
  double v28; // [esp+38h] [ebp-30h]
  int v29; // [esp+40h] [ebp-28h]
  double v30; // [esp+48h] [ebp-20h]
  int v31; // [esp+50h] [ebp-18h] BYREF
  int v32; // [esp+54h] [ebp-14h]
  int v33; // [esp+58h] [ebp-10h]
  int v34; // [esp+5Ch] [ebp-Ch]
  int v35; // [esp+60h] [ebp-8h]
  int v36; // [esp+64h] [ebp-4h]

  GadgetGrid::RemoveItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x663047*/
  v2 = *(_DWORD *)(this + 12); /*0x66304c*/
  v3 = *(_DWORD *)(v2 + 1732); /*0x663054*/
  if ( v3 == *((_DWORD *)MEMORY[0x8871E0] + 312) ) /*0x663062*/
  {
    v20 = (char *)MEMORY[0x8871E0] + 1200; /*0x66306a*/
    if ( *(_BYTE *)(this + 81) ) /*0x66306e*/
    {
      v19 = *((_DWORD *)MEMORY[0x8871E0] + 1006); /*0x66307b*/
      goto LABEL_13; /*0x66307f*/
    }
    v4 = *((_DWORD *)MEMORY[0x8871E0] + 1004); /*0x663081*/
  }
  else if ( v3 == *((_DWORD *)MEMORY[0x8871E0] + 338) ) /*0x66308f*/
  {
    v20 = (char *)MEMORY[0x8871E0] + 1304; /*0x663097*/
    if ( *(_BYTE *)(this + 81) ) /*0x66309b*/
    {
      v19 = *((_DWORD *)MEMORY[0x8871E0] + 1009); /*0x6630a8*/
      goto LABEL_13; /*0x6630ac*/
    }
    v4 = *((_DWORD *)MEMORY[0x8871E0] + 1008); /*0x6630ae*/
  }
  else
  {
    v20 = (char *)MEMORY[0x8871E0] + 1252; /*0x6630bc*/
    if ( *(_BYTE *)(this + 81) ) /*0x6630c0*/
    {
      v19 = *((_DWORD *)MEMORY[0x8871E0] + 1007); /*0x6630cd*/
      goto LABEL_13; /*0x6630d1*/
    }
    v4 = *((_DWORD *)MEMORY[0x8871E0] + 1005); /*0x6630d3*/
  }
  v19 = v4; /*0x6630d9*/
LABEL_13:
  v5 = (int *)(v2 + 156); /*0x6630dd*/
  v21 = *((_DWORD *)v20 + 10); /*0x6630ef*/
  v34 = *v5; /*0x6630f3*/
  v35 = v5[1]; /*0x6630fe*/
  v30 = (double)v21; /*0x663102*/
  v16 = *(float *)(this + 84); /*0x66310c*/
  v36 = v5[2]; /*0x66310f*/
  v6 = Math::ArcTan2(v16); /*0x663113*/
  v23 = Math::RoundToInt(v6 * v30); /*0x663127*/
  v22 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v27) - 0x3FFF) /*0x663152*/
      * -0.00009587672516830327;
  v28 = (double)v23; /*0x663164*/
  v24 = (double)v35; /*0x66316c*/
  v7 = Math::SinCos(v22); /*0x663170*/
  LODWORD(v24) = Math::RoundToInt(v24 - v7 * v28); /*0x663184*/
  v8 = Math::ArcTan2(v22); /*0x663188*/
  v9 = Math::RoundToInt(v8 * v28 + (double)v34); /*0x663195*/
  v17 = *(float *)(this + 84); /*0x6631a5*/
  v10 = v9; /*0x6631ac*/
  v29 = v36; /*0x6631ae*/
  v11 = Math::SinCos(v17); /*0x6631b2*/
  v33 = Math::RoundToInt(v11 * v30 + (double)v36); /*0x6631c7*/
  v31 = v10; /*0x6631d4*/
  v32 = LODWORD(v24); /*0x6631da*/
  LOWORD(v22) = v10 / 256; /*0x6631e1*/
  WORD1(v22) = SLODWORD(v24) / 256; /*0x6631f4*/
  v26 = LODWORD(v22); /*0x6631fd*/
  if ( *(_BYTE *)(this + 81) ) /*0x663201*/
    v12 = *((_DWORD *)v20 + 9); /*0x66320c*/
  else
    v12 = *((_DWORD *)v20 + 8); /*0x663215*/
  v25 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x663225*/
  if ( v25 ) /*0x66322b*/
  {
    v13 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26) + 59); /*0x663240*/
    v18 = (unsigned int)v33; /*0x66325a*/
    LODWORD(v18) = Return::HRESULT_Fail(v31, v32, v33); /*0x663266*/
    VersusMultiplier = (void *)GetWarheadVersusMultiplier(v12, v19, v13, &v31); /*0x66327d*/
    AnimClass::ctor(v25, VersusMultiplier, &v31, 0, 1, (void *)0x2600, (void *)v18, SBYTE4(v18)); /*0x663287*/
  }
  CreateSmokeEffectAt(v12, v19, v31, v32, v33, 0, 0); /*0x6632af*/
  PlaySoundEffectAt(&v31, v12, *(_DWORD **)(this + 12), v19, 1, 0); /*0x6632c7*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 248))(*(_DWORD *)(this + 12)); /*0x6632d9*/
}


// ==== 0x006632E0  RocketLocomotionClass::ComputeFloatExpression_3  this=RocketLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6632E0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx
  char *p_TiberiumExplosionDamage; // edx
  bool v7; // zf
  int v8; // esi
  int v9; // [esp+Ch] [ebp-Ch]

  result = a1; /*0x6632e0*/
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1732); /*0x6632ec*/
  if ( v5 == LODWORD(MEMORY[0x8871E0]->?) ) /*0x6632fe*/
  {
    p_TiberiumExplosionDamage = (char *)&MEMORY[0x8871E0]->?; /*0x663300*/
  }
  else
  {
    v7 = v5 == MEMORY[0x8871E0]->?[0]; /*0x66330e*/
    p_TiberiumExplosionDamage = (char *)&MEMORY[0x8871E0]->?; /*0x663310*/
    if ( !v7 ) /*0x663316*/
      p_TiberiumExplosionDamage = (char *)&MEMORY[0x8871E0]->? + 4; /*0x663318*/
  }
  if ( *(_DWORD *)(a1 + 20) == dword_B04E38 /*0x66334a*/
    && *(_DWORD *)(a1 + 24) == dword_B04E3C
    && *(_DWORD *)(a1 + 28) == dword_B04E40 )
  {
    if ( *(_DWORD *)p_TiberiumExplosionDamage ) /*0x66334c*/
    {
      *(_DWORD *)(a1 + 60) = 1; /*0x663353*/
      v8 = *(_DWORD *)p_TiberiumExplosionDamage; /*0x663360*/
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 2; /*0x66336e*/
      v8 = *((_DWORD *)p_TiberiumExplosionDamage + 1); /*0x66337b*/
    }
    *(_DWORD *)(a1 + 32) = MEMORY[0xA8ED84]; /*0x663365*/
    *(_DWORD *)(a1 + 36) = v9; /*0x663388*/
    *(_DWORD *)(a1 + 40) = v8; /*0x66338b*/
    *(_DWORD *)(a1 + 44) = v8; /*0x66338e*/
    *(float *)(a1 + 80) = *((float *)p_TiberiumExplosionDamage + 2) * 1.570796326794897; /*0x6633a3*/
    *(_DWORD *)(a1 + 20) = a2; /*0x6633aa*/
    *(_DWORD *)(a1 + 24) = a3; /*0x6633ac*/
    *(_DWORD *)(a1 + 28) = a4; /*0x6633af*/
    return a2; /*0x6633a6*/
  }
  return result; /*0x6633b2*/
}


// ==== 0x006633C0  RocketLocomotionClass::nullsub_224  this=RocketLocomotionClass  sig=csp ====
void __stdcall nullsub_224(int a1)
{
  ; /*0x6633c0*/
}


// ==== 0x006633D0  RocketLocomotionClass::ddtor  this=RocketLocomotionClass  sig=csp ====
int __stdcall RocketLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *a2 = -1212901530; /*0x6633e6*/
  a2[1] = 299099510; /*0x6633ee*/
  a2[2] = 268491163; /*0x6633f7*/
  a2[3] = -399534261; /*0x663400*/
  return 0; /*0x6633dd*/
}


// ==== 0x00663410  RocketLocomotionClass::BeginMove  this=RocketLocomotionClass  sig=csp ====
int __stdcall RocketLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax
  wchar_t *v3; // ecx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( a1 ) /*0x663426*/
    {
      *a1 = (int)&LocomotionClass::`vftable'; /*0x663428*/
      a1[1] = (int)&vt_LocomotionClass; /*0x66342e*/
      v3 = MEMORY[0xA8ED84]; /*0x663435*/
      a1[15] = 0; /*0x66343b*/
      a1[13] = (int)v3; /*0x663442*/
      *a1 = (int)&RocketLocomotionClass::`vftable'; /*0x663445*/
      a1[1] = (int)&vt_RocketLocomotionClass; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}


// ==== 0x00663460  RocketLocomotionClass::SmallStub  this=RocketLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_663460(int a1)
{
  return 3; /*0x663465*/
}


// ==== 0x00663470  JumpjetLocomotionClass::ComputePitchYaw  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_663470(signed int a1, float *a2, int *a3)
{
  signed int v3; // esi
  int *v4; // edi
  int v5; // ecx
  float *p_TiberiumExplosionDamage; // eax
  int v7; // eax
  int v8; // eax
  float *result; // eax
  float v10; // [esp+0h] [ebp-40h]
  float v11; // [esp+0h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-34h] BYREF
  float v13[12]; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x663479*/
  v3 = a1; /*0x66347e*/
  a1 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v12) >> 10) + 1) >> 1) & 0x1F) /*0x6634a3*/
     - 8;
  v10 = (double)a1 * -0.1963495408493621; /*0x6634b6*/
  Matrix2D::Rotate(v13, v10); /*0x6634b9*/
  v4 = a3; /*0x6634c7*/
  if ( *(float *)(v3 + 80) == 0.0 ) /*0x6634d0*/
  {
LABEL_13:
    if ( v4 ) /*0x663565*/
      *v4 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1) /*0x663589*/
           & 0x1F;
    goto LABEL_15; /*0x663589*/
  }
  v11 = -*(float *)(v3 + 80); /*0x6634e0*/
  Matrix3D::RotateZ(v13, v11); /*0x6634e3*/
  v5 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 1732); /*0x6634f0*/
  if ( v5 == LODWORD(MEMORY[0x8871E0]->?) ) /*0x6634fe*/
  {
    p_TiberiumExplosionDamage = (float *)&MEMORY[0x8871E0]->?; /*0x663500*/
  }
  else if ( v5 == MEMORY[0x8871E0]->?[0] ) /*0x66350d*/
  {
    p_TiberiumExplosionDamage = (float *)&MEMORY[0x8871E0]->?; /*0x66350f*/
  }
  else
  {
    p_TiberiumExplosionDamage = (float *)&MEMORY[0x8871E0]->? + 1; /*0x663516*/
  }
  *(float *)&a1 = p_TiberiumExplosionDamage[3] * 1.570796326794897; /*0x663526*/
  if ( v4 ) /*0x66352a*/
  {
    if ( p_TiberiumExplosionDamage[2] * 1.570796326794897 == *(float *)(v3 + 80) ) /*0x66353d*/
    {
      v7 = *v4; /*0x66353f*/
      LOBYTE(v7) = *v4 | 0x20; /*0x663541*/
      *v4 = v7; /*0x663543*/
    }
    else if ( *(float *)(v3 + 80) == *(float *)&a1 ) /*0x663553*/
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
  qmemcpy(a2, v13, 0x30u); /*0x66359a*/
  return result; /*0x66359c*/
}


// ==== 0x006635B0  RocketLocomotionClass::StubReturn96  this=RocketLocomotionClass  sig=csp ====
int RocketLocomotionClass::_vt09()
{
  return 96; /*0x6635b5*/
}


// ==== 0x006635C0  RocketLocomotionClass::ProcessMove  this=RocketLocomotionClass  sig=csp ====
RocketLocomotionClass *__thiscall RocketLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &RocketLocomotionClass::`vftable'; /*0x6635c3*/
  *(Block + 1) = &vt_RocketLocomotionClass; /*0x6635c9*/
  LocomotionClass::Construct(Block); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    __3_YAXPAX_Z(Block); /*0x6635dd*/
  return (RocketLocomotionClass *)Block; /*0x6635e7*/
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
  dword_B052F0 = 0; /*0x6637a2*/
  dword_B052F4 = 0; /*0x6637a7*/
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
  dword_B052D4 = 0; /*0x663807*/
  dword_B052D8 = 0; /*0x66380c*/
  byte_B052DC = 1; /*0x663811*/
  byte_B052DD = 0; /*0x663818*/
  g_NetworkEventQueue = (int)&vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct; /*0x66381d*/
  dword_B052E4 = 10; /*0x663827*/
  dword_B052E0 = 0; /*0x663831*/
  byte_B052E8 = 0; /*0x663836*/
  dword_B052EC = 0; /*0x66383b*/
  return atexit(sub_663850); /*0x663846*/
}


// ==== 0x00663850  sub_663850  this=-  sig=ida-proto ====
void __cdecl sub_663850()
{
  bool v0; // zf
  int v1; // eax

  if ( dword_B052E0 ) /*0x66385a*/
  {
    do /*0x66389d*/
    {
      __3_YAXPAX_Z(*(void **)dword_B052D4); /*0x663864*/
      v0 = dword_B052E0 == 0; /*0x663872*/
      if ( dword_B052E0 > 0 ) /*0x663874*/
      {
        v1 = 0; /*0x663877*/
        v0 = dword_B052E0-- == 1; /*0x663879*/
        if ( dword_B052E0 > 0 ) /*0x663881*/
        {
          do /*0x663899*/
          {
            ++v1; /*0x663889*/
            *((_DWORD *)dword_B052D4 + v1 - 1) = *((_DWORD *)dword_B052D4 + v1); /*0x66388d*/
          }
          while ( v1 < dword_B052E0 ); /*0x663899*/
          v0 = dword_B052E0 == 0; /*0x66389b*/
        }
      }
    }
    while ( !v0 ); /*0x66389d*/
  }
  g_NetworkEventQueue = (int)&vt_VectorClass_OwnerTalkClass_ConnectionListStruct; /*0x6638a4*/
  if ( dword_B052D4 && byte_B052DD ) /*0x6638b8*/
  {
    __3_YAXPAX_Z(dword_B052D4); /*0x6638bb*/
    dword_B052D4 = 0; /*0x6638c3*/
  }
  byte_B052DD = 0; /*0x6638c9*/
  dword_B052D8 = 0; /*0x6638cf*/
}


// ==== 0x006638E0  ObjectClass::method_6638E0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall sub_6638E0(_DWORD *this)
{
  this->Items = 0; /*0x6638e4*/
  this->DynamicVector_field_0x8 = 0; /*0x6638e7*/
  this->IsInitialized = 1; /*0x6638ea*/
  this->IsAllocated = 0; /*0x6638ee*/
  *this = &vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct; /*0x6638f1*/
  this->CapacityIncrement = 10; /*0x6638f7*/
  this->DynamicVector_field_0x10 = 0; /*0x6638fe*/
  this->__pad_018 = 0; /*0x663901*/
  this->DynamicVector_field_0x1C = 0; /*0x663904*/
  return this; /*0x663907*/
}


// ==== 0x00663910  Network::validatePacket  this=Network  sig=csp ====
void __thiscall sub_663910(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  while ( *(_DWORD *)(this + 16) ) /*0x663916*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 4)); /*0x663921*/
    v2 = *(_DWORD *)(this + 16); /*0x663926*/
    if ( v2 > 0 ) /*0x66392e*/
    {
      v3 = v2 - 1; /*0x663930*/
      v4 = 0; /*0x663933*/
      for ( *(_DWORD *)(this + 16) = v3; /*0x66393a*/
            v4 < *(_DWORD *)(this + 16);
            *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v4) )
      {
        ++v4; /*0x66393f*/
      }
    }
  }
  *(_BYTE *)(this + 24) = 0; /*0x663953*/
  *(_DWORD *)(this + 28) = 0; /*0x663956*/
}


// ==== 0x00663960  VectorClass::sub  this=VectorClass  sig=csp ====
void __thiscall sub_663960(void *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  void *v5; // eax

  while ( this->Items ) /*0x663966*/
  {
    __3_YAXPAX_Z(**((void ***)this + 1)); /*0x663971*/
    v2 = this->Items; /*0x663976*/
    if ( v2 > 0 ) /*0x66397e*/
    {
      v3 = v2 - 1; /*0x663980*/
      v4 = 0; /*0x663983*/
      for ( this->Items = v3; /*0x66398a*/
            v4 < this->Items;
            *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) )
      {
        ++v4; /*0x66398f*/
      }
    }
  }
  v5 = (void *)this->Items; /*0x6639a3*/
  *(_DWORD *)this = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct; /*0x6639a6*/
  if ( v5 && this->IsAllocated ) /*0x6639b0*/
  {
    __3_YAXPAX_Z(v5); /*0x6639b6*/
    this->Items = 0; /*0x6639be*/
  }
  this->IsAllocated = 0; /*0x6639c1*/
  this->Capacity = 0; /*0x6639c4*/
}


// ==== 0x006639D0  Network::SendMasterPlayerList  this=Network  sig=csp ====
char __thiscall Network_SendMasterPlayerList(int this)
{
  int v1; // esi
  int v2; // ebp
  int v4; // eax
  _BYTE *v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  DWORD Ticks; // [esp+10h] [ebp-16Ch]
  _BYTE v11[340]; // [esp+28h] [ebp-154h] BYREF

  v1 = this; /*0x6639d8*/
  memset(v11, 0, 338); /*0x6639e6*/
  Timer::GetTicks(); /*0x6639f6*/
  v2 = 0; /*0x663a02*/
  if ( !*(_BYTE *)(this + 24) ) /*0x6639ff*/
    return 0; /*0x663a0e*/
  Debug::Log(); /*0x663a1d*/
  v4 = *(_DWORD *)(v1 + 16); /*0x663a22*/
  v11[0] = 1; /*0x663a2a*/
  v11[1] = v4; /*0x663a2f*/
  if ( v4 > 0 ) /*0x663a33*/
  {
    v5 = &v11[43]; /*0x663a36*/
    while ( 1 ) /*0x663a40*/
    {
      v6 = *(_DWORD *)(v1 + 4); /*0x663a40*/
      qmemcpy(v5 - 41, *(const void **)(v6 + 4 * v2), 0x2Au); /*0x663a51*/
      if ( ((_DWORD (__stdcall *)(_DWORD))IPXManagerClass::send)(**(char **)(v6 + 4 * v2)) == -1 /*0x663a80*/
        && *((_DWORD *)HouseClass_Player + 12) != **(char **)(*(_DWORD *)(this + 4) + 4 * v2) )
      {
        Debug::Log(); /*0x663a89*/
        *v5 = 0; /*0x663a8e*/
        *(v5 - 2) = 0; /*0x663a94*/
      }
      ++v2; /*0x663a9c*/
      v5 += 42; /*0x663a9d*/
      if ( v2 >= *(_DWORD *)(this + 16) ) /*0x663aa3*/
        break; /*0x663aa3*/
      v1 = this; /*0x663a3c*/
    }
  }
  Network::SendPacket((int)MEMORY[0xA8E9C0], (int)v11, 338, 1u); /*0x663ab7*/
  Debug::Log(); /*0x663ac1*/
  Ticks = Timer::GetTicks(); /*0x663ae4*/
  while ( HouseClass::GetUpgradeValue((int)MEMORY[0xA8E9C0]) > 0 ) /*0x663af3*/
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


// ==== 0x00663B40  SessionClass::BuildLobbyPlayerList  this=DynamicVector  sig=csp ====
int __thiscall sub_663B40(void *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ebx
  char *v7; // edi
  char *v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int i; // [esp+8h] [ebp-14h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h] BYREF

  while ( this->Items ) /*0x663b46*/
  {
    __3_YAXPAX_Z(**((void ***)this + 1)); /*0x663b53*/
    v2 = this->Items; /*0x663b58*/
    if ( v2 > 0 ) /*0x663b60*/
    {
      v3 = v2 - 1; /*0x663b62*/
      v4 = 0; /*0x663b63*/
      for ( this->Items = v3; /*0x663b6a*/
            v4 < this->Items;
            *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) )
      {
        ++v4; /*0x663b6f*/
      }
    }
  }
  result = HouseClass_Count; /*0x663b85*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x663b94*/
  {
    v6 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i]; /*0x663ba6*/
    if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)v6) && !*(_BYTE *)(v6 + 502) ) /*0x663bbc*/
    {
      v7 = (char *)__2_YAPAXI_Z(0x2Au); /*0x663bd8*/
      *v7 = i; /*0x663be2*/
      v8 = ToWideStringChar((char *)(v6 + 90154)); /*0x663be4*/
      strncpy(v7 + 1, v8, 0x14u); /*0x663bee*/
      v9 = 0; /*0x663bfb*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x663bff*/
      {
        v10 = MEMORY[0xA8DA78]; /*0x663c01*/
        while ( *(_DWORD *)(*(_DWORD *)v10 + 111) != i ) /*0x663c12*/
        {
          ++v9; /*0x663c14*/
          v10 += 4; /*0x663c15*/
          if ( v9 >= MEMORY[0xA8DA84] ) /*0x663c1a*/
            goto LABEL_15; /*0x663c1a*/
        }
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v9) + 40), &v16, (int)&v17); /*0x663c34*/
        *(_DWORD *)(v7 + 33) = v17; /*0x663c3d*/
        *(_WORD *)(v7 + 37) = *((_WORD *)&MEMORY[0xA8E2B2] + v9); /*0x663c48*/
      }
LABEL_15:
      v7[41] = 1; /*0x663c50*/
      v7[39] = MEMORY[0xA8E2AC] == *(_DWORD *)(v6 + 48); /*0x663c6a*/
      v7[40] = 1 << i; /*0x663c6d*/
      v11 = this->DynamicVector_field_0x8; /*0x663c70*/
      if ( this->Items < v11 /*0x663c93*/
        || (this->IsAllocated || !v11)
        && (v12 = this->CapacityIncrement, v12 > 0)
        && (*(unsigned __int8 (__thiscall **)(void *, int, _DWORD))(this->DynamicVector_field_0x8)(this, v11 + v12, 0) )
      {
        v13 = this->Items; /*0x663c9a*/
        v14 = this->Items; /*0x663c9d*/
        this->Items = v13 + 1; /*0x663ca3*/
        *(_DWORD *)(v14 + 4 * v13) = v7; /*0x663ca6*/
      }
    }
    result = i + 1; /*0x663cb3*/
  }
  return result; /*0x663cc3*/
}


// ==== 0x00663CD0  ObjectClass::method_663CD0  this=ObjectClass  sig=csp ====
char __thiscall sub_663CD0(int *this, _BYTE *a2)
{
  _DWORD *v2; // edi
  char v5; // bl
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int i; // edx
  int v10; // [esp+8h] [ebp-8h] BYREF

  v2 = a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( Network::IsBroadcastAddr(a2) ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  v5 = 0; /*0x663d0c*/
  Network::CopyAddress(v2, &a2, (int)&v10); /*0x663d0e*/
  v6 = this->vtable2; /*0x663d13*/
  v7 = 0; /*0x663d16*/
  if ( v6 > 0 ) /*0x663d1a*/
  {
    v8 = this->vtable2; /*0x663d1c*/
    for ( i = v8; v10 != *(_DWORD *)(*(_DWORD *)i + 33); i += 4 ) /*0x663d23*/
    {
      if ( ++v7 >= v6 ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(_BYTE *)(*(_DWORD *)(v8 + 4 * v7) + 40); /*0x663d43*/
  }
  return v5; /*0x663cdf*/
}


// ==== 0x00663D60  Factory::GetLinkedIndex  this=DynamicVector  sig=csp ====
char __thiscall Factory::GetLinkedIndex(int *this, DynamicVector *aP1)
{
  char result; // al
  int v3; // edx
  int v4; // eax
  char **v5; // esi
  char **i; // ecx

  if ( aP1 == (DynamicVector *)-1 ) /*0x663d68*/
    return -1; /*0x663d6a*/
  v3 = this->Items; /*0x663d70*/
  v4 = 0; /*0x663d73*/
  if ( v3 <= 0 ) /*0x663d79*/
    return -1; /*0x663d79*/
  v5 = (char **)this->Items; /*0x663d7b*/
  for ( i = v5; aP1 != (DynamicVector *)**i; ++i ) /*0x663d7e*/
  {
    if ( ++v4 >= v3 ) /*0x663d8f*/
      return -1; /*0x663d96*/
  }
  result = v5[v4][40]; /*0x663d9c*/
  if ( !result ) /*0x663da1*/
    return -1; /*0x663da3*/
  return result; /*0x663d6c*/
}


// ==== 0x00663DB0  ObjectClass::LaunchMultiplayerHost  this=DynamicVector  sig=csp ====
bool __thiscall LaunchMultiplayerHost(int this, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // eax
  int *v5; // esi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned __int8 v12; // [esp+4h] [ebp-584h] BYREF
  unsigned __int8 v13; // [esp+5h] [ebp-583h]
  unsigned __int8 v14; // [esp+6h] [ebp-582h]
  unsigned __int8 v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  DWORD TicksTimer; // [esp+10h] [ebp-578h]
  int v18; // [esp+14h] [ebp-574h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  _BYTE v23[12]; // [esp+28h] [ebp-560h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+34h] [ebp-554h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+44h] [ebp-544h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v27[1024]; // [esp+188h] [ebp-400h] BYREF

  TicksTimer = Timer::GetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  Waypoint::InitInvalid(v23); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA(&StartupInfo); /*0x663de9*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 72))(MEMORY[0x887628]) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2 ) /*0x663e15*/
  {
    sprintf(CommandLine, MEMORY[0x839B84], *a2, a2[1], a2[2], a2[3]); /*0x663f0e*/
    if ( *(_DWORD *)MEMORY[0xA8DA78] == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    Network::CopyAddress((_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40), &v20, (int)&v12); /*0x663f31*/
    v6 = a2[2]; /*0x663f39*/
    v7 = *a2; /*0x663f3c*/
    v13 = a2[1]; /*0x663f3e*/
    v14 = v6; /*0x663f42*/
    v12 = v7; /*0x663f4a*/
    v15 = a2[3]; /*0x663f5e*/
    NetworkID::Assign(&MEMORY[0xA8DBB0], &v20, (int)&v12, 0); /*0x663f62*/
    Network::SetPort(&MEMORY[0xA8DBB0], *(_WORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40)); /*0x663f78*/
    LOWORD(MEMORY[0xA8DBBC]) = *(_WORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663f88*/
    v8 = (int *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663f91*/
    MEMORY[0xA8DBA4] = *v8; /*0x663f96*/
    MEMORY[0xA8DBA8] = v8[1]; /*0x663f9f*/
    MEMORY[0xA8DBAC] = v8[2]; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !MEMORY[0xA8DA84] ) /*0x663e22*/
  {
    v4 = (unsigned __int8 *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 76))(MEMORY[0x887628], 0); /*0x663e2d*/
    sprintf(CommandLine, MEMORY[0x839B84], *v4, v4[1], v4[2], v4[3]); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (int *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663e69*/
  if ( *(_DWORD *)MEMORY[0xA8DA78] != -40 ) /*0x663e6c*/
  {
    Network::CopyAddress(v5, &v20, (int)&v12); /*0x663e7e*/
    sprintf(CommandLine, MEMORY[0x839B84], v12, v13, v14, v15); /*0x663ebb*/
    MEMORY[0xA8DBB0] = *v5; /*0x663ec5*/
    MEMORY[0xA8DBB4] = v5[1]; /*0x663ecd*/
    MEMORY[0xA8DBB8] = v5[2]; /*0x663ed6*/
    LOWORD(MEMORY[0xA8DBBC]) = 0; /*0x663edc*/
LABEL_10:
    Network::FormatAddress((unsigned __int16 *)&MEMORY[0xA8DBB0], 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
LABEL_11:
  if ( CreateProcessA(MEMORY[0x8399EC], CommandLine, 0, 0, 0, 0x200u, 0, 0, &StartupInfo, &ProcessInformation) ) /*0x663fed*/
  {
    *(_DWORD *)(this + 28) = ProcessInformation.hProcess; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    TicksTimer = Timer::GetTicks(); /*0x664053*/
    v18 = v16; /*0x664057*/
    v19 = 1800; /*0x66405b*/
    v10 = 0; /*0x66405f*/
    while ( 1 ) /*0x664067*/
    {
      if ( TicksTimer != -1 ) /*0x66406c*/
      {
        v11 = Timer::GetTicks() - TicksTimer; /*0x664077*/
        if ( v11 >= v9 ) /*0x66407d*/
          return v10 != 0; /*0x66407d*/
        v9 -= v11; /*0x66407f*/
      }
      if ( !v9 ) /*0x664083*/
        break; /*0x664083*/
      Event::Dispatch(); /*0x664085*/
      if ( Network::SendPacketThunk2(v27, v22, v23, v21) && v27[0] == 4 ) /*0x6640b7*/
      {
        v10 = 1; /*0x6640be*/
        Debug::Log(); /*0x6640c3*/
        *(_BYTE *)(this + 24) = 1; /*0x6640cb*/
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
wchar_t *Network_ProcessAddressChange()
{
  wchar_t *result; // eax
  char v1; // si
  const void *v2; // eax
  _BYTE v3[2]; // [esp+2h] [ebp-9Ah] BYREF
  int v4; // [esp+4h] [ebp-98h] BYREF
  __int16 v5; // [esp+8h] [ebp-94h]
  _BYTE v6[4]; // [esp+Ch] [ebp-90h] BYREF
  _DWORD v7[3]; // [esp+10h] [ebp-8Ch] BYREF
  _BYTE v8[12]; // [esp+1Ch] [ebp-80h] BYREF
  int v9; // [esp+28h] [ebp-74h] BYREF

  Waypoint::InitInvalid(v8); /*0x6640ea*/
  result = MEMORY[0xA8ED84]; /*0x6640ef*/
  if ( (int)MEMORY[0xA8ED84] > 0 ) /*0x6640f6*/
  {
    for ( result = (wchar_t *)((wchar_t *(__stdcall *)(int *, _BYTE *, _BYTE *, _BYTE *))Network::SendPacketThunk2)( /*0x66411c*/
                                &dword_B04E9C,
                                v6,
                                v8,
                                v3);
          result;
          result = (wchar_t *)((wchar_t *(__stdcall *)(int *, _BYTE *, _BYTE *, _BYTE *))Network::SendPacketThunk2)(
                                &dword_B04E9C,
                                v6,
                                v8,
                                v3) )
    {
      if ( (_BYTE)dword_B04E9C == 5 ) /*0x664132*/
      {
        ((void (*)(const char *, ...))Debug::Log)(MEMORY[0x839BBC]); /*0x664151*/
        v1 = BYTE1(dword_B04E9C); /*0x66415e*/
        v4 = *(int *)((char *)&dword_B04E9C + 2); /*0x664169*/
        v5 = 0; /*0x664174*/
        Waypoint::InitInvalid(v7); /*0x664179*/
        NetworkID::Assign(v7, &v9, (int)&v4, 0); /*0x66418e*/
        v2 = (const void *)((const void *(__stdcall *)(_DWORD, _DWORD *, char))Network::initConnection)( /*0x6641a7*/
                             *((_DWORD *)HouseClass_Player + 12),
                             v7,
                             v1);
        if ( Networking_LastEventIndex < 128 ) /*0x6641b6*/
        {
          qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v2, 0x6Fu); /*0x6641d2*/
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6641df*/
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6641f6*/
          ++Networking_LastEventIndex; /*0x6641fc*/
        }
      }
      else
      {
        ((void (*)(const char *, ...))Debug::Log)(MEMORY[0x839BE8], (unsigned __int8)dword_B04E9C); /*0x66413f*/
      }
    }
  }
  return result; /*0x66422a*/
}


// ==== 0x00664240  NetworkManager::SetPlayerAddress  this=DynamicVector  sig=csp ====
int __thiscall NetworkManager::SetPlayerAddress(int *this, DynamicVector *aP1, DynamicVector *aP2)
{
  int v4; // edx
  int result; // eax
  char **v6; // esi
  char **i; // ecx
  char *v8; // edx
  int v9; // [esp+Ch] [ebp-8h] BYREF

  Network::CopyAddress(aP2, &aP2, (int)&v9); /*0x664256*/
  v4 = this->Items; /*0x66425b*/
  result = 0; /*0x66425e*/
  if ( v4 > 0 ) /*0x664262*/
  {
    v6 = (char **)this->Items; /*0x664264*/
    for ( i = v6; (DynamicVector *)**i != aP1; ++i ) /*0x66426b*/
    {
      if ( ++result >= v4 ) /*0x66427c*/
        return result; /*0x66427c*/
    }
    v8 = v6[result]; /*0x664287*/
    result = v9; /*0x66428a*/
    *(_DWORD *)(v8 + 33) = v9; /*0x66428e*/
  }
  return result; /*0x66427e*/
}


// ==== 0x006642A0  Network::processAcknowledgment  this=DynamicVector  sig=csp ====
char *__thiscall Network::processAcknowledgment(_DWORD *this, IUnknown *aP1)
{
  int v3; // esi
  IPXManagerClass *v5; // ecx
  IPXManagerClass v6; // [esp+Ch] [ebp-10h] BYREF
  IPXManagerClass v7; // [esp+14h] [ebp-8h] BYREF

  if ( (byte_B052A8 & 1) == 0 ) /*0x6642b2*/
  {
    byte_B052A8 |= 1u; /*0x6642bd*/
    Waypoint::InitInvalid(byte_B052C0); /*0x6642c3*/
    atexit(nullsub_33); /*0x6642cd*/
  }
  v6.Socket = 0; /*0x6642db*/
  *(_WORD *)&v6.Initialized = 0; /*0x6642e5*/
  Struct::Copy6Bytes(byte_B052C0, &v6); /*0x6642ea*/
  Network::SetPort(byte_B052C0, 0); /*0x6642f6*/
  v3 = 0; /*0x6642fe*/
  if ( (int)this->DynamicVector_field_0x10 > 0 ) /*0x664302*/
  {
    while ( _strcmpi((char *)(*(_DWORD *)(this->Items + 4 * v3) + 1), (char *)aP1) ) /*0x66431b*/
    {
      if ( ++v3 >= this->DynamicVector_field_0x10 ) /*0x664323*/
        return byte_B052C0; /*0x664330*/
    }
    v7.Socket = *(_DWORD *)(*(_DWORD *)(this->Items + 4 * v3) + 33); /*0x664346*/
    Struct::Copy6Bytes(byte_B052C0, &v7); /*0x66434a*/
    LOWORD(v5) = *(_WORD *)(*(_DWORD *)(this->Items + 4 * v3) + 37); /*0x664355*/
    Network::SetPort(byte_B052C0, v5); /*0x66435f*/
  }
  return byte_B052C0; /*0x664325*/
}


// ==== 0x00664380  nullsub_33  this=-  sig=ida-proto ====
void __cdecl nullsub_33()
{
  ; /*0x664380*/
}


// ==== 0x00664390  Network::handleDisconnect  this=DynamicVector  sig=csp ====
__int16 __thiscall Network::handleDisconnect(_DWORD *this, IUnknown *aP1)
{
  int v3; // esi

  v3 = 0; /*0x664395*/
  if ( (int)this->DynamicVector_field_0x10 <= 0 ) /*0x66439c*/
    return 0; /*0x6643bf*/
  while ( _strcmpi((char *)(*(_DWORD *)(this->Items + 4 * v3) + 1), (char *)aP1) ) /*0x6643b5*/
  {
    if ( ++v3 >= this->DynamicVector_field_0x10 ) /*0x6643bd*/
      return 0; /*0x6643bd*/
  }
  return *(_WORD *)(*(_DWORD *)(this->Items + 4 * v3) + 37); /*0x6643bf*/
}


// ==== 0x006643E0  Network::checkTimeout  this=DynamicVector  sig=csp ====
int __thiscall sub_6643E0(_DWORD *this, int a2)
{
  if ( a2 >= this->DynamicVector_field_0x10 ) /*0x6643e9*/
    return 0; /*0x6643f5*/
  else
    return *(_DWORD *)(this->Items + 4 * a2) + 1; /*0x6643f1*/
}


// ==== 0x00664400  Network::reconnect  this=DynamicVector  sig=csp ====
char *__thiscall Network::reconnect(int *this, DynamicVector *aP1, __int16 a3)
{
  int v3; // edx
  char *result; // eax
  char **v5; // esi
  char **i; // ecx

  v3 = this->Items; /*0x664400*/
  result = 0; /*0x664404*/
  if ( v3 > 0 ) /*0x66440a*/
  {
    v5 = (char **)this->Items; /*0x66440c*/
    for ( i = v5; (DynamicVector *)**i != aP1; ++i ) /*0x664413*/
    {
      if ( (int)++result >= v3 ) /*0x664424*/
        return result; /*0x664424*/
    }
    result = v5[(_DWORD)result]; /*0x66442c*/
    *(_WORD *)(result + 37) = a3; /*0x664434*/
  }
  return result; /*0x664426*/
}


// ==== 0x00664440  EventClass::validateEventType  this=DynamicVector  sig=csp ====
int __thiscall sub_664440(int *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  char *v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edx
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 v14[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = MEMORY[0xA8E2CC]; /*0x664444*/
  if ( MEMORY[0xA8E2CC] == -1 ) /*0x664451*/
  {
    v3 = this->Items; /*0x664453*/
    v4 = 0; /*0x664456*/
    if ( v3 > 0 ) /*0x66445a*/
    {
      do /*0x66447c*/
      {
        v5 = *(char **)(this->Items + 4 * v4); /*0x664461*/
        if ( v5[41] && !v5[39] ) /*0x66446a*/
        {
          v1 = *v5; /*0x664470*/
          v5[39] = 1; /*0x664473*/
        }
        ++v4; /*0x664479*/
      }
      while ( v4 < this->Items ); /*0x66447c*/
    }
  }
  else
  {
    v6 = this->Items; /*0x664480*/
    v7 = 0; /*0x664483*/
    if ( v6 > 0 ) /*0x664487*/
    {
      do /*0x6644a7*/
      {
        v8 = *(char **)(this->Items + 4 * v7); /*0x66448e*/
        v8[39] = *v8 == v1; /*0x664498*/
        ++v7; /*0x6644a4*/
      }
      while ( v7 < this->Items ); /*0x6644a7*/
    }
  }
  if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) /*0x6644d2*/
    || v1 == -1
    || v1 != *((_DWORD *)HouseClass_Player + 12)
    || MEMORY[0xA8DA84] <= 2 )
  {
    return v1; /*0x664526*/
  }
  v9 = 0; /*0x6644d4*/
  v10 = 0; /*0x6644d6*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x6644db*/
  {
    v11 = MEMORY[0xA8DA78]; /*0x6644dd*/
    while ( *(_DWORD *)(*(_DWORD *)v11 + 111) != v1 ) /*0x6644e8*/
    {
      ++v10; /*0x6644ea*/
      v11 += 4; /*0x6644eb*/
      if ( v10 >= MEMORY[0xA8DA84] ) /*0x6644f0*/
        goto LABEL_23; /*0x6644f0*/
    }
    v9 = (_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v10) + 40); /*0x6644fd*/
  }
LABEL_23:
  Network::CopyAddress(v9, &v13, (int)v14); /*0x664500*/
  LaunchMultiplayerHost((int)this, v14); /*0x664516*/
  return v1; /*0x66451c*/
}


// ==== 0x00664530  NetworkEventQueueClass::WaitForResponse  this=NetworkEventQueueClass  sig=csp ====
char __thiscall Network_WaitForResponse(int this)
{
  int i; // eax
  int v3; // esi
  DWORD Ticks; // [esp+8h] [ebp-16Ch]
  _BYTE v6[340]; // [esp+20h] [ebp-154h] BYREF

  memset(v6, 0, 338); /*0x664545*/
  Timer::GetTicks(); /*0x664551*/
  LOBYTE(i) = *(_BYTE *)(this + 24); /*0x66455a*/
  if ( (_BYTE)i ) /*0x664567*/
  {
    i = *(_DWORD *)(this + 28); /*0x66456d*/
    if ( i ) /*0x664572*/
    {
      v6[0] = 3; /*0x664589*/
      Network::SendPacket(v6, 338, 1); /*0x66458e*/
      Ticks = Timer::GetTicks(); /*0x6645ae*/
      for ( i = HouseClass::GetUpgradeValue((int)MEMORY[0xA8E9C0]); /*0x6645bd*/
            i > 0;
            i = HouseClass::GetUpgradeValue((int)MEMORY[0xA8E9C0]) )
      {
        LOBYTE(i) = Ticks; /*0x6645c2*/
        v3 = 900; /*0x6645c6*/
        if ( Ticks != -1 ) /*0x6645cc*/
        {
          i = Timer::GetTicks() - Ticks; /*0x6645d7*/
          if ( i >= 900 ) /*0x6645dd*/
            return i; /*0x6645dd*/
          v3 = 900 - i; /*0x6645df*/
        }
        if ( !v3 ) /*0x6645e3*/
          break; /*0x6645e3*/
        Event::Dispatch(); /*0x6645e5*/
      }
    }
  }
  return i; /*0x6645f8*/
}


// ==== 0x00664610  Process::WaitForExit  this=DynamicVector  sig=csp ====
bool __thiscall Process::WaitForExit(const HANDLE *this, DWORD dwMilliseconds, CellStruct *aP2)
{
  AnimClass *v3; // esi
  BOOL v5; // eax

  v3 = (AnimClass *)&CONTAINING_RECORD(this, AnimClass, field_4)->__pad_18[8]; /*0x664614*/
  Debug::Log(); /*0x66461d*/
  if ( !v3->field_0 ) /*0x664629*/
    return 1; /*0x664629*/
  if ( WaitForMultipleObjects(1u, (const HANDLE *)v3, 0, dwMilliseconds) != 258 ) /*0x664644*/
  {
    Debug::Log(); /*0x6646a7*/
    v3->field_0 = 0; /*0x6646af*/
    return 1; /*0x6646b5*/
  }
  if ( !(_BYTE)aP2 ) /*0x66464c*/
    return 0; /*0x66464e*/
  Debug::Log(); /*0x66465a*/
  v5 = TerminateProcess((HANDLE)v3->field_0, 0); /*0x664667*/
  if ( v5 ) /*0x664671*/
  {
    v3->field_0 = 0; /*0x664694*/
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
char __thiscall NetworkManager::RemovePlayer(int this, AnimClass *aP1)
{
  int i; // esi
  char *v3; // eax
  char result; // al
  _BYTE v5[340]; // [esp+Ch] [ebp-154h] BYREF

  memset(v5, 0, 338); /*0x6646d8*/
  for ( i = 0; i < *(_DWORD *)(this + 16); ++i ) /*0x6646eb*/
  {
    v3 = *(char **)(*(_DWORD *)(this + 4) + 4 * i); /*0x6646f0*/
    if ( (AnimClass *)*v3 == aP1 ) /*0x6646f8*/
    {
      v3[41] = 0; /*0x6646fa*/
      v3[39] = 0; /*0x6646fd*/
    }
  }
  result = *(_BYTE *)(this + 24); /*0x664708*/
  if ( result ) /*0x664710*/
  {
    v5[0] = 2; /*0x664717*/
    v5[1] = (_BYTE)aP1; /*0x66471c*/
    Debug::Log(); /*0x664720*/
    return Network::SendPacket((int)&MEMORY[0xA8D63C].__pad_1258[300], (int)v5, 338, 1u); /*0x664739*/
  }
  return result; /*0x66470b*/
}


// ==== 0x00664750  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_664750(unsigned __int8 *this, char a2)
{
  int v2; // eax
  _BYTE v4[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v4, 0, 338); /*0x664764*/
  v2 = this->nextArrayIndex; /*0x66476c*/
  if ( (_BYTE)v2 ) /*0x664772*/
  {
    v4[0] = 6; /*0x664780*/
    v4[1] = a2; /*0x664785*/
    Debug::Log(); /*0x664789*/
    LOBYTE(v2) = Network::SendPacket((int)MEMORY[0xA8E9C0], (int)v4, 338, 1u); /*0x6647a2*/
  }
  return v2; /*0x66476f*/
}


// ==== 0x006647B0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall RocketLocomotionClass_17_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6647b6*/
  *(_DWORD *)(this + 16) = 0; /*0x6647b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6647c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6647c6*/
    *(_DWORD *)(this + 4) = 0; /*0x6647ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6647d1*/
  *(_DWORD *)(this + 8) = 0; /*0x6647d4*/
}


// ==== 0x006647E0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::BeginMove  this=DynamicVector  sig=csp ====
unsigned int __thiscall RocketLocomotionClass_17_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6647e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/
}


// ==== 0x00664800  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::UpdateMovement  this=VectorClass  sig=csp ====
int __thiscall RocketLocomotionClass_17_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x66480a*/
}


// ==== 0x00664810  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall RocketLocomotionClass_17_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x664812*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( v2 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = (_DWORD *)this->Items; /*0x664825*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x66482b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= v2 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/
}


// ==== 0x00664850  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall RocketLocomotionClass_17_::sub_664850(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
    this->IsInitialized = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x66487e*/
    this->IsInitialized = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( this->Items ) /*0x664895*/
      {
        v6 = this->Capacity; /*0x66489c*/
        if ( a2 < v6 ) /*0x6648a1*/
          v6 = a2; /*0x6648a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( this->IsAllocated ) /*0x6648bb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6648c6*/
          this->Items = 0; /*0x6648ce*/
        }
      }
      this->Items = v4; /*0x6648d7*/
      this->Capacity = a2; /*0x6648df*/
      this->IsAllocated = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }
}


// ==== 0x00664900  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall RocketLocomotionClass_17_::sub_664900(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x66490d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x664913*/
    *(_DWORD *)(this + 4) = 0; /*0x66491b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x66491e*/
  *(_DWORD *)(this + 8) = 0; /*0x664921*/
}


// ==== 0x00664930  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall RocketLocomotionClass_17_::sub_664930(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x664930*/
    return 0; /*0x664938*/
  v3 = *(_DWORD *)(this + 8); /*0x66493e*/
  result = 0; /*0x664941*/
  if ( v3 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= v3 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/
}


// ==== 0x00664970  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall RocketLocomotionClass_17_::sub_664970(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x664970*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x664985*/
  else
    return 0; /*0x664977*/
}


// ==== 0x00664990  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::Release  this=DynamicVector  sig=csp ====
char __thiscall RocketLocomotionClass_17_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
    this->IsInitialized = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6649ba*/
    this->IsInitialized = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( this->Items ) /*0x6649c8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6649cf*/
      if ( a2 < v5 ) /*0x6649d4*/
        v5 = a2; /*0x6649d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( this->IsAllocated ) /*0x6649ee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6649f9*/
        this->Items = 0; /*0x664a01*/
      }
    }
    this->Items = v4; /*0x664a0a*/
    this->DynamicVector_field_0x8 = a2; /*0x664a12*/
    this->IsAllocated = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x664a1e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x664a21*/
  if ( v7 < this->Items ) /*0x664a29*/
    this->Items = v7; /*0x664a2b*/
  return 1; /*0x664a2e*/
}


// ==== 0x00664A40  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::Launch  this=DynamicVector  sig=csp ====
int __thiscall RocketLocomotionClass_17_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( v2 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= v2 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/
}


// ==== 0x00664A70  _VectorClass_PAUConnectionListStruct_OwnerTalkClass::Constructor  this=VectorClass  sig=csp ====
VectorClass *__thiscall RocketLocomotionClass_17_::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x664a73*/
  *Block = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct; /*0x664a76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x664a80*/
  {
    __3_YAXPAX_Z(v3); /*0x664a88*/
    *(Block + 1) = 0; /*0x664a90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x664a9b*/
  *(Block + 2) = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    __3_YAXPAX_Z(Block); /*0x664aab*/
  return (VectorClass *)Block; /*0x664ab5*/
}


// ==== 0x00664AC0  _DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall RocketLocomotionClass_17_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x664ac3*/
  *Block = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct; /*0x664ac6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x664ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x664ad8*/
    *(Block + 1) = 0; /*0x664ae0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x664aeb*/
  *(Block + 2) = 0; /*0x664af1*/
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    __3_YAXPAX_Z(Block); /*0x664afb*/
  return (DynamicVector *)Block; /*0x664b05*/
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


// ==== 0x00664D20  HouseClass::InitTypeVectors  this=int  sig=csp ====
_DWORD *__thiscall sub_664D20(_DWORD *this, int a2)
{
  _DWORD *v3; // edi

  v3 = this + 22; /*0x664d26*/
  DynamicVector::Constructor_VoxelAnim(0, 0); /*0x664d2d*/
  *v3 = &vt_TypeList_VoxelAnimTypeClass_const; /*0x664d32*/
  DynamicVectorClass::AnimTypeConstructor(this + 65, 0, 0); /*0x664d44*/
  *(this + 65) = &vt_TypeList_AnimTypeClass_const; /*0x664d49*/
  DynamicVectorClass::AnimTypeConstructor(this + 72, 0, 0); /*0x664d5b*/
  *(this + 72) = &vt_TypeList_AnimTypeClass_const; /*0x664d60*/
  DynamicVectorClass::AnimTypeConstructor(this + 79, 0, 0); /*0x664d72*/
  *(this + 79) = &vt_TypeList_AnimTypeClass_const; /*0x664d77*/
  DynamicVectorClass::AnimTypeConstructor(this + 86, 0, 0); /*0x664d89*/
  *(this + 86) = &vt_TypeList_AnimTypeClass_const; /*0x664d8e*/
  DynamicVectorClass::AnimTypeConstructor(this + 168, 0, 0); /*0x664da0*/
  *(this + 168) = &vt_TypeList_AnimTypeClass_const; /*0x664da5*/
  DynamicVectorClass::AnimTypeConstructor(this + 175, 0, 0); /*0x664db7*/
  *(this + 175) = &vt_TypeList_AnimTypeClass_const; /*0x664dbc*/
  DynamicVectorClass::AnimTypeConstructor(this + 182, 0, 0); /*0x664dce*/
  *(this + 182) = &vt_TypeList_AnimTypeClass_const; /*0x664dd3*/
  DynamicVectorClass::Construct(this + 214, 0, 0); /*0x664de5*/
  *(this + 214) = &vt_TypeList_int; /*0x664dea*/
  DynamicVectorClass::Construct(this + 221, 0, 0); /*0x664dfc*/
  *(this + 221) = &vt_TypeList_int; /*0x664e01*/
  DynamicVectorClass::Construct(this + 228, 0, 0); /*0x664e13*/
  *(this + 228) = &vt_TypeList_int; /*0x664e18*/
  DynamicVectorClass::Construct(this + 235, 0, 0); /*0x664e2a*/
  *(this + 235) = &vt_TypeList_int; /*0x664e2f*/
  DynamicVectorClass::Construct(this + 242, 0, 0); /*0x664e41*/
  *(this + 242) = &vt_TypeList_int; /*0x664e46*/
  DynamicVectorClass::Construct(this + 249, 0, 0); /*0x664e58*/
  *(this + 249) = &vt_TypeList_int; /*0x664e5d*/
  DynamicVectorClass::Construct(this + 271, 0, 0); /*0x664e6f*/
  *(this + 271) = &vt_TypeList_int; /*0x664e74*/
  DynamicVectorClass::Construct(this + 278, 0, 0); /*0x664e86*/
  *(this + 278) = &vt_TypeList_int; /*0x664e8b*/
  DynamicVectorClass::Construct(this + 285, 0, 0); /*0x664e9d*/
  *(this + 285) = &vt_TypeList_int; /*0x664ea2*/
  DynamicVector::Constructor_VoxelAnim(0, 0); /*0x664eb4*/
  *(this + 384) = &vt_TypeList_VoxelAnimTypeClass_const; /*0x664eb9*/
  DynamicVectorClass::Construct(this + 402, 0, 0); /*0x664ecb*/
  *(this + 402) = &vt_TypeList_int; /*0x664ed0*/
  DynamicVectorClass::Construct(this + 435, 0, 0); /*0x664ee2*/
  *(this + 435) = &vt_TypeList_int; /*0x664ee7*/
  DynamicVectorClass::Construct(this + 461, 0, 0); /*0x664ef9*/
  *(this + 461) = &vt_TypeList_int; /*0x664efe*/
  SmudgeTypeVector::Construct(this + 497, 0, 0); /*0x664f10*/
  *(this + 497) = &vt_TypeList_SmudgeTypeClass_const; /*0x664f15*/
  SmudgeTypeVector::Construct(this + 504, 0, 0); /*0x664f27*/
  *(this + 504) = &vt_TypeList_SmudgeTypeClass_const; /*0x664f2c*/
  SmudgeTypeVector::Construct(this + 511, 0, 0); /*0x664f3e*/
  *(this + 511) = &vt_TypeList_SmudgeTypeClass_const; /*0x664f43*/
  SmudgeTypeVector::Construct(this + 518, 0, 0); /*0x664f55*/
  *(this + 518) = &vt_TypeList_SmudgeTypeClass_const; /*0x664f5a*/
  SmudgeTypeVector::Construct(this + 525, 0, 0); /*0x664f6c*/
  *(this + 525) = &vt_TypeList_SmudgeTypeClass_const; /*0x664f71*/
  DynamicVectorClass::BuildingTypeConstructor(this + 532, 0, 0); /*0x664f83*/
  *(this + 532) = &vt_TypeList_BuildingTypeClass_const; /*0x664f88*/
  DynamicVectorClass::BuildingTypeConstructor(this + 544, 0, 0); /*0x664f9a*/
  *(this + 544) = &vt_TypeList_BuildingTypeClass_const; /*0x664f9f*/
  DynamicVectorClass::BuildingTypeConstructor(this + 555, 0, 0); /*0x664fb1*/
  *(this + 555) = &vt_TypeList_BuildingTypeClass_const; /*0x664fb6*/
  DynamicVectorClass::BuildingTypeConstructor(this + 562, 0, 0); /*0x664fc8*/
  *(this + 562) = &vt_TypeList_BuildingTypeClass_const; /*0x664fcd*/
  DynamicVectorClass::BuildingTypeConstructor(this + 569, 0, 0); /*0x664fdf*/
  *(this + 569) = &vt_TypeList_BuildingTypeClass_const; /*0x664fe4*/
  DynamicVectorClass::BuildingTypeConstructor(this + 576, 0, 0); /*0x664ff6*/
  *(this + 576) = &vt_TypeList_BuildingTypeClass_const; /*0x664ffb*/
  DynamicVectorClass::BuildingTypeConstructor(this + 583, 0, 0); /*0x66500d*/
  *(this + 583) = &vt_TypeList_BuildingTypeClass_const; /*0x665012*/
  DynamicVectorClass::BuildingTypeConstructor(this + 590, 0, 0); /*0x665024*/
  *(this + 590) = &vt_TypeList_BuildingTypeClass_const; /*0x665029*/
  DynamicVectorClass::BuildingTypeConstructor(this + 597, 0, 0); /*0x66503b*/
  *(this + 597) = &vt_TypeList_BuildingTypeClass_const; /*0x665040*/
  DynamicVectorClass::BuildingTypeConstructor(this + 604, 0, 0); /*0x665052*/
  *(this + 604) = &vt_TypeList_BuildingTypeClass_const; /*0x665057*/
  DynamicVectorClass::BuildingTypeConstructor(this + 611, 0, 0); /*0x665069*/
  *(this + 611) = &vt_TypeList_BuildingTypeClass_const; /*0x66506e*/
  DynamicVectorClass::Construct(this + 618, 0, 0); /*0x665080*/
  *(this + 618) = &vt_TypeList_int; /*0x665085*/
  DynamicVectorClass::BuildingTypeConstructor(this + 625, 0, 0); /*0x665097*/
  *(this + 625) = &vt_TypeList_BuildingTypeClass_const; /*0x66509c*/
  DynamicVectorClass::BuildingTypeConstructor(this + 632, 0, 0); /*0x6650ae*/
  *(this + 632) = &vt_TypeList_BuildingTypeClass_const; /*0x6650b3*/
  DynamicVectorClass::BuildingTypeConstructor(this + 639, 0, 0); /*0x6650c5*/
  *(this + 639) = &vt_TypeList_BuildingTypeClass_const; /*0x6650ca*/
  DynamicVectorClass::BuildingTypeConstructor(this + 646, 0, 0); /*0x6650dc*/
  *(this + 646) = &vt_TypeList_BuildingTypeClass_const; /*0x6650e1*/
  DynamicVectorClass::BuildingTypeConstructor(this + 653, 0, 0); /*0x6650f3*/
  *(this + 653) = &vt_TypeList_BuildingTypeClass_const; /*0x6650f8*/
  DynamicVectorClass::BuildingTypeConstructor(this + 660, 0, 0); /*0x66510a*/
  *(this + 660) = &vt_TypeList_BuildingTypeClass_const; /*0x66510f*/
  DynamicVectorClass::BuildingTypeConstructor(this + 667, 0, 0); /*0x665121*/
  *(this + 667) = &vt_TypeList_BuildingTypeClass_const; /*0x665126*/
  DynamicVectorClass::BuildingTypeConstructor(this + 674, 0, 0); /*0x665138*/
  *(this + 674) = &vt_TypeList_BuildingTypeClass_const; /*0x66513d*/
  DynamicVectorClass::BuildingTypeConstructor(this + 681, 0, 0); /*0x66514f*/
  *(this + 681) = &vt_TypeList_BuildingTypeClass_const; /*0x665154*/
  DynamicVectorClass::BuildingTypeConstructor(this + 688, 0, 0); /*0x665166*/
  *(this + 688) = &vt_TypeList_BuildingTypeClass_const; /*0x66516b*/
  DynamicVectorClass::BuildingTypeConstructor(this + 695, 0, 0); /*0x66517d*/
  *(this + 695) = &vt_TypeList_BuildingTypeClass_const; /*0x665182*/
  UnitTypeVector::Construct(this + 712, 0, 0); /*0x665194*/
  *(this + 712) = &vt_TypeList_UnitTypeClass_const; /*0x665199*/
  UnitTypeVector::Construct(this + 719, 0, 0); /*0x6651ab*/
  *(this + 719) = &vt_TypeList_UnitTypeClass_const; /*0x6651b0*/
  HouseTypeClass::readDefaultAlly(0, 0); /*0x6651c2*/
  *(this + 726) = &vt_TypeList_AircraftTypeClass_const; /*0x6651c7*/
  DynamicVectorClass::AnimTypeConstructor(this + 733, 0, 0); /*0x6651d9*/
  *(this + 733) = &vt_TypeList_AnimTypeClass_const; /*0x6651de*/
  DynamicVectorClass::AnimTypeConstructor(this + 740, 0, 0); /*0x6651f0*/
  *(this + 740) = &vt_TypeList_AnimTypeClass_const; /*0x6651f5*/
  DynamicVectorClass::AnimTypeConstructor(this + 752, 0, 0); /*0x665207*/
  *(this + 752) = &vt_TypeList_AnimTypeClass_const; /*0x66520c*/
  InfantryTypeVector::Construct(this + 769, 0, 0); /*0x66521e*/
  *(this + 769) = &vt_TypeList_InfantryTypeClass_const; /*0x665223*/
  DynamicVectorClass::Construct(this + 776, 0, 0); /*0x665235*/
  *(this + 776) = &vt_TypeList_int; /*0x66523a*/
  InfantryTypeVector::Construct(this + 783, 0, 0); /*0x66524c*/
  *(this + 783) = &vt_TypeList_InfantryTypeClass_const; /*0x665251*/
  DynamicVectorClass::Construct(this + 790, 0, 0); /*0x665263*/
  *(this + 790) = &vt_TypeList_int; /*0x665268*/
  InfantryTypeVector::Construct(this + 797, 0, 0); /*0x66527a*/
  *(this + 797) = &vt_TypeList_InfantryTypeClass_const; /*0x66527f*/
  DynamicVectorClass::Construct(this + 804, 0, 0); /*0x665291*/
  *(this + 804) = &vt_TypeList_int; /*0x665296*/
  InfantryTypeVector::Construct(this + 811, 0, 0); /*0x6652a8*/
  *(this + 811) = &vt_TypeList_InfantryTypeClass_const; /*0x6652ad*/
  DynamicVectorClass::Construct(this + 818, 0, 0); /*0x6652bf*/
  *(this + 818) = &vt_TypeList_int; /*0x6652c4*/
  InfantryTypeVector::Construct(this + 825, 0, 0); /*0x6652d6*/
  *(this + 825) = &vt_TypeList_InfantryTypeClass_const; /*0x6652db*/
  InfantryTypeVector::Construct(this + 832, 0, 0); /*0x6652ed*/
  *(this + 832) = &vt_TypeList_InfantryTypeClass_const; /*0x6652f2*/
  UnitTypeVector::Construct(this + 839, 0, 0); /*0x665304*/
  *(this + 839) = &vt_TypeList_UnitTypeClass_const; /*0x665309*/
  DynamicVectorClass::BuildingTypeConstructor(this + 846, 0, 0); /*0x66531b*/
  *(this + 846) = &vt_TypeList_BuildingTypeClass_const; /*0x665320*/
  DynamicVectorClass::Construct(this + 864, 0, 0); /*0x665332*/
  *(this + 864) = &vt_TypeList_int; /*0x665337*/
  DynamicVectorClass::Construct(this + 871, 0, 0); /*0x665349*/
  *(this + 871) = &vt_TypeList_int; /*0x66534e*/
  DynamicVectorClass::Construct(this + 878, 0, 0); /*0x665360*/
  *(this + 878) = &vt_TypeList_int; /*0x665365*/
  DynamicVectorClass::Construct(this + 885, 0, 0); /*0x665377*/
  *(this + 885) = &vt_TypeList_int; /*0x66537c*/
  DynamicVectorClass::Construct(this + 900, 0, 0); /*0x66538e*/
  *(this + 900) = &vt_TypeList_int; /*0x665393*/
  DynamicVectorClass::Construct(this + 907, 0, 0); /*0x6653a5*/
  *(this + 907) = &vt_TypeList_int; /*0x6653aa*/
  DynamicVectorClass::Construct(this + 915, 0, 0); /*0x6653bc*/
  *(this + 915) = &vt_TypeList_int; /*0x6653c1*/
  DynamicVectorClass::Construct(this + 922, 0, 0); /*0x6653d3*/
  *(this + 922) = &vt_TypeList_int; /*0x6653d8*/
  DynamicVectorClass::Construct(this + 929, 0, 0); /*0x6653ea*/
  *(this + 929) = &vt_TypeList_int; /*0x6653ef*/
  DynamicVectorClass::Construct(this + 936, 0, 0); /*0x665401*/
  *(this + 936) = &vt_TypeList_int; /*0x665406*/
  DynamicVectorClass::Construct(this + 945, 0, 0); /*0x665418*/
  *(this + 945) = &vt_TypeList_int; /*0x66541d*/
  DynamicVectorClass::Construct(this + 954, 0, 0); /*0x66542f*/
  *(this + 954) = &vt_TypeList_int; /*0x665434*/
  DynamicVectorClass::Construct(this + 961, 0, 0); /*0x665446*/
  *(this + 961) = &vt_TypeList_int; /*0x66544b*/
  DynamicVectorClass::Construct(this + 968, 0, 0); /*0x66545d*/
  *(this + 968) = &vt_TypeList_int; /*0x665462*/
  TerrainTypeVector::Construct(0, 0); /*0x665474*/
  *(this + 1022) = &vt_TypeList_TerrainTypeClass_const; /*0x665479*/
  DynamicVectorClass::Construct(this + 1110, 0, 0); /*0x66548b*/
  *(this + 1110) = &vt_TypeList_int; /*0x665490*/
  DynamicVectorClass::Construct(this + 1117, 0, 0); /*0x6654a2*/
  *(this + 1117) = &vt_TypeList_int; /*0x6654a7*/
  DynamicVectorClass::Construct(this + 1125, 0, 0); /*0x6654b9*/
  *(this + 1125) = &vt_TypeList_int; /*0x6654be*/
  DynamicVectorClass::Construct(this + 1132, 0, 0); /*0x6654d0*/
  *(this + 1132) = &vt_TypeList_int; /*0x6654d5*/
  DynamicVectorClass::Construct(this + 1139, 0, 0); /*0x6654e7*/
  *(this + 1139) = &vt_TypeList_int; /*0x6654ec*/
  DynamicVectorClass::Construct(this + 1146, 0, 0); /*0x6654fe*/
  *(this + 1146) = &vt_TypeList_int; /*0x665503*/
  DynamicVectorClass::Construct(this + 1153, 0, 0); /*0x665515*/
  *(this + 1153) = &vt_TypeList_int; /*0x66551a*/
  DynamicVectorClass::Construct(this + 1160, 0, 0); /*0x66552c*/
  *(this + 1160) = &vt_TypeList_int; /*0x665531*/
  DynamicVectorClass::Construct(this + 1167, 0, 0); /*0x665543*/
  *(this + 1167) = &vt_TypeList_int; /*0x665548*/
  DynamicVectorClass::Construct(this + 1174, 0, 0); /*0x66555a*/
  *(this + 1174) = &vt_TypeList_int; /*0x66555f*/
  DynamicVectorClass::Construct(this + 1181, 0, 0); /*0x665571*/
  *(this + 1181) = &vt_TypeList_int; /*0x665576*/
  DynamicVectorClass::Construct(this + 1188, 0, 0); /*0x665588*/
  *(this + 1188) = &vt_TypeList_int; /*0x66558d*/
  DynamicVectorClass::Construct(this + 1195, 0, 0); /*0x66559f*/
  *(this + 1195) = &vt_TypeList_int; /*0x6655aa*/
  TypeList::Construct(this + 1202); /*0x6655b0*/
  TypeList::Construct(this + 1209); /*0x6655bb*/
  TypeList::Construct(this + 1217); /*0x6655c6*/
  TypeList::Construct(this + 1224); /*0x6655d1*/
  TypeList::Construct(this + 1231); /*0x6655dc*/
  TypeList::Construct(this + 1238); /*0x6655e7*/
  TypeList::Construct(this + 1245); /*0x6655f2*/
  TypeList::Construct(this + 1252); /*0x6655fd*/
  TypeList::Construct(this + 1259); /*0x665608*/
  TypeList::Construct(this + 1266); /*0x665613*/
  TypeList::Construct(this + 1276); /*0x66561e*/
  Struct::Zero3(this + 1560); /*0x665629*/
  Array::ForEach((int)(this + 1565), 3, 16, Struct::Zero3); /*0x66563e*/
  return this; /*0x665645*/
}


// ==== 0x00665650  RulesClass::RulesClass  this=int  sig=csp ====
int __thiscall RulesClass::Constructor(RulesClass *this)
{
  int *BarrelDebris; // ebp
  char *v3; // ecx
  char *v4; // ebp
  int v5; // edx
  int v6; // eax
  char *v7; // edi

  this->DetailMinFrameRateNormal = 15;
  this->DetailMinFrameRateMovie = 20;
  this->DetailBufferZoneWidth = 5;
  this->AmmoCrateDamage = 100;
  this->LargeVisceroid = 0;
  this->SmallVisceroid = 0;
  this->AttackingAircraftSightRange = 5;
  this->TunnelSpeed = 0x3FF0000000000000LL;
  this->TiberiumHeal = 0x3F91111111111111LL;
  this->SelfHealInfantryFrames = 1000;
  this->SelfHealInfantryAmount = 1;
  this->SelfHealUnitFrames = 1000;
  this->SelfHealUnitAmount = 1;
  this->FreeMCV = 0;
  this->BerzerkAllowed = 0;
  this->PoseDir = 0;
  this->DeployDir = 0;
  BarrelDebris = this->RadarEventColorSpeed;
  this->FlashFrameTime = 0;
  this->RadarCombatFlashTime = 12;
  this->MaxWaypointPathLength = 0;
  VoxelAnimTypeVector::Constructor(this->RadarEventColorSpeed, 0, 0);
  BarrelDebris[4] = 0;
  BarrelDebris[5] = 10;
  *BarrelDebris = (int)&vt_TypeList_VoxelAnimTypeClass_const;
  this->BarrelParticle = 0.0;
  this->Wake = 0.050000001;
  this->NukeTakeOff = 5;
  this->InfantryExplode = 1065353216;
  this->FlamingInfantry = 1036831949;
  this->InfantryHeadPop = 7;
  this->InfantryNuked = 21;
  this->InfantryVirus = 15;
  this->InfantryBrute = 0;
  this->InfantryMutate = 0;
  this->Behind = 0;
  this->__pad_A0 = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  *(_DWORD *)&this->?[4] = 0;
  LODWORD(this->?) = 0;
  this->AITriggerSuccessWeightDelta = 0x3FF0000000000000LL;
  this->AITriggerFailureWeightDelta = 0xBFF0000000000000uLL;
  this->AITriggerTrackRecordCoefficient = 0;
  this->? = 1072693248;
  this->MaximumQueuedObjects = 10000;
  this->AircraftFogReveal = 1000;
  this->DigSound = 100;
  this->CreateUnitSound = 100;
  this->CreateInfantrySound = 0;
  this->CreateAircraftSound = 2;
  this->BaseUnderAttackSound = 5;
  this->GUIMainButtonSound = 6;
  this->GUIBuildSound = 0;
  this->GUITabSound[0] = 0;
  this->GUITabSound[1] = 0;
  AnimTypeVector::Constructor(&this->GUITabSound[2], 0, 0);
  this->GUIMoveInSound[3] = 10;
  this->GUIMoveInSound[2] = 0;
  this->GUITabSound[2] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->GUICheckboxSound[1], 0, 0);
  this->BuildingGarrisonedSound[2] = 10;
  this->BuildingGarrisonedSound[1] = 0;
  this->GUICheckboxSound[1] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->PlaceBeaconSound, 0, 0);
  this->EndPlanningModeSound = 10;
  this->ExecutePlanSound = 0;
  this->PlaceBeaconSound = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->CrateRevealSound, 0, 0);
  this->CratePromoteSound = 10;
  this->CrateUnitSound = 0;
  this->CrateRevealSound = (int)&vt_TypeList_AnimTypeClass_const;
  this->ImpactLandSound = -1;
  this->SinkingSound = -1;
  this->BombTickingSound = -1;
  this->BombAttachSound = -1;
  this->YuriMindControlSound = -1;
  this->ChronoInSound = -1;
  this->ChronoOutSound = -1;
  this->SpySatActivationSound = -1;
  this->SpySatDeactivationSound = -1;
  this->UpgradeVeteranSound = -1;
  this->UpgradeEliteSound = -1;
  this->VoiceIFVRepair = -1;
  this->SlavesFreeSound = -1;
  this->SlaveMinerDeploySound = -1;
  this->SlaveMinerUndeploySound = -1;
  this->BunkerWallsUpSound = -1;
  this->BunkerWallsDownSound = -1;
  this->RepairBridgeSound = -1;
  this->PsychicDominatorActivateSound = -1;
  this->GeneticMutatorActivateSound = -1;
  this->PsychicRevealActivateSound = -1;
  this->MasterMindOverloadDeathSound = -1;
  this->AirstrikeAbortSound = -1;
  this->AirstrikeAttackVoice = -1;
  this->MindClearedSound = -1;
  this->EnterGrinderSound = -1;
  this->LeaveGrinderSound = -1;
  this->EnterBioReactorSound = -1;
  this->LeaveBioReactorSound = -1;
  this->ActivateSound = -1;
  this->DeactivateSound = -1;
  this->SpyPlaneCamera = -1;
  this->SpyPlaneCameraFrames = -1;
  this->Dig = -1;
  this->IonBlast = -1;
  this->IonBeam = -1;
  this->DamageFireTypes = -1;
  this->ParadropRadius = -1;
  this->ZoomInFactor = -1;
  this->? = -1;
  this->? = -1;
  this->ConditionYellowSparkingProbability = -1;
  this->? = -1;
  this->TiberiumExplosionDamage = -1;
  this->TiberiumStrength = -1;
  this->MinLowPowerProductionSpeed = -1;
  this->MaxLowPowerProductionSpeed = -1;
  this->LowPowerPenaltyModifier = -1;
  this->MultipleFactory = -1;
  this->MaximumCheerRate = -1;
  this->__pad_240 = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = 16;
  this->?[3] = 0;
  this->? = 0;
  this->? = 0;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 50;
  this->?[3] = 2;
  this->?[0] = 50;
  this->?[1] = 15;
  this->?[2] = 100;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[4], 0, 0);
  LODWORD(this->?) = 10;
  *(_DWORD *)this->? = 0;
  *(_DWORD *)&this->?[4] = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->? = (int)&vt_TypeList_int;
  this->?[5] = 0;
  this->?[6] = -1;
  this->?[7] = -1;
  this->?[8] = 3;
  this->?[9] = 30;
  this->?[11] = 0;
  this->?[12] = 1075052544;
  this->?[13] = 400;
  this->?[1] = 0;
  this->?[2] = 1070596096;
  this->?[3] = 0;
  this->?[4] = 1070596096;
  this->?[5] = 40;
  VectorClass::Construct(&this->?[6], 0, 0);
  this->?[11] = 10;
  this->?[10] = 0;
  this->?[6] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[13], 0, 0);
  this->?[4] = 10;
  this->?[3] = 0;
  this->?[13] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[6], 0, 0);
  this->?[11] = 10;
  this->?[10] = 0;
  this->?[6] = (int)&vt_TypeList_int;
  this->?[13] = 700;
  this->? = 128;
  this->? = 0x6400000000LL;
  this->? = 0x6400000008LL;
  this->? = 0x12C0000000FLL;
  this->?[1] = 1024;
  this->?[2] = 0;
  this->?[3] = 0x40000000;
  this->? = 1202590843;
  this->? = 1066695393;
  this->? = 1202590843;
  this->? = 1065646817;
  this->? = 100;
  *(_DWORD *)this->? = 10;
  this->? = 0x3F6666663F000000LL;
  this->? = 0x3F8000003F800000LL;
  LODWORD(this->?) = 1;
  this->TreeFlammability[0] = -1717986918;
  this->TreeFlammability[1] = 1069128089;
  this->TreeFlammability[2] = 0;
  this->TreeFlammability[3] = 1070596096;
  *(_DWORD *)&this->MissileROTVar = 0;
  *(_DWORD *)&this->?[3] = 1070596096;
  this->MissileSafetyAltitude = 500;
  this->DropPodHeight = 0x28000005DCLL;
  this->DropPodAngle = 0x3FF921FB54442D18LL;
  this->ScrollMultiplier = 0x3FF0000000000000LL;
  this->CrewEscape = 0x3FE0000000000000LL;
  this->ShakeScreen = 0x7800000190LL;
  this->HoverBob = 0x403E000000000000LL;
  this->HoverBoost = -858993459;
  this->? = 1073007820;
  this->HoverAcceleration = -343597384;
  this->? = 1067366481;
  this->HoverBrake = -343597384;
  this->? = 1067366481;
  this->HoverDampen = -1717986918;
  this->? = 1072273817;
  this->PlacementDelay = -1717986918;
  this->? = 1068079513;
  VoxelAnimTypeVector::Constructor(&this->CloakingStages, 0, 0);
  this->? = 10;
  this->RevealTriggerRadius[3] = 0;
  this->CloakingStages = (int)&vt_TypeList_VoxelAnimTypeClass_const;
  this->? = 0;
  this->VeteranRatio = 0;
  this->? = 3;
  this->VeteranCombat = 9;
  this->? = 5;
  this->VeteranSpeed = 0;
  this->? = 1074266112;
  this->VeteranSight = 0;
  this->? = 0x40000000;
  this->VeteranArmor = 0;
  this->? = 1074790400;
  VectorClass::Construct(&this->VeteranROF, 0, 0);
  this->SellSound = 10;
  this->CloakSound = 0;
  this->VeteranROF = (int)&vt_TypeList_int;
  LOBYTE(this->GameClosed[1]) = 0;
  this->GameClosed[2] = 0;
  this->GameClosed[3] = 1076101120;
  this->GameForming = 0;
  *(_DWORD *)this->PlayerLeft = 1072693248;
  this->PlayerJoined = 0x3FF0000000000000LL;
  this->Construction = 0x3FF0000000000000LL;
  this->? = 0x3FF0000000000000LL;
  this->? = 0x3FF0000000000000LL;
  this->? = 0x3FF0000000000000LL;
  this->BuildingSlam = -1;
  this->RadarOff = -1;
  this->MovieOn = -1;
  this->MovieOff = -1;
  this->TeslaCharge = -1;
  this->GenericClick = -1;
  this->BuildingDamageSound = -1;
  VectorClass::Construct(&this->HealCrateSound, 0, 0);
  this->DeploySound = 10;
  this->ScatterSound = 0;
  this->HealCrateSound = (int)&vt_TypeList_int;
  this->StormSound[1] = -1;
  this->StormSound[2] = -1;
  this->StormSound[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->__pad_704[0] = -1;
  this->__pad_704[1] = -1;
  this->__pad_704[2] = -1;
  this->__pad_704[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  VectorClass::Construct(this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_int;
  this->? = -1;
  this->WallBuildSpeedCoefficient[0] = 0;
  this->WallBuildSpeedCoefficient[1] = 1071644672;
  this->WallBuildSpeedCoefficient[2] = 0;
  this->WallBuildSpeedCoefficient[3] = 1074266112;
  this->WindDirection = 0;
  this->CameraRange = 1072693248;
  this->FlightLevel = 0;
  this->ParachuteMaxFallRate = 1072693248;
  this->NoParachuteMaxFallRate[0] = 0;
  this->NoParachuteMaxFallRate[1] = 1072693248;
  this->NoParachuteMaxFallRate[2] = 0;
  this->NoParachuteMaxFallRate[3] = 1072693248;
  this->NodGateOne[0] = 2000;
  this->NodGateOne[1] = 1000;
  this->NodGateOne[2] = -1717986918;
  this->NodGateOne[3] = 1068079513;
  this->BuildPower[0] = 1202590843;
  this->BuildPower[1] = 1064598241;
  this->BuildPower[2] = 0;
  this->BuildPower[3] = 1077149696;
  this->BuildWeapons[0] = 175;
  this->BuildWeapons[1] = -1;
  this->BuildWeapons[2] = 2304;
  this->BuildWeapons[3] = 500;
  this->GDIWallDefenseCoefficient[0] = -3;
  this->GDIWallDefenseCoefficient[1] = -100;
  this->GDIWallDefenseCoefficient[2] = -1;
  Game::LockMutex(&this->GDIWallDefenseCoefficient[3], 0, 0);
  this->BaseUnit[0] = 10;
  this->GDIBaseDefenseCoefficient[3] = 0;
  this->GDIWallDefenseCoefficient[3] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(&this->BaseUnit[2], 0, 0);
  this->TreeFire[3] = 10;
  this->TreeFire[2] = 0;
  this->BaseUnit[2] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(&this->BombParachute[1], 0, 0);
  this->LargeFire[2] = 10;
  this->LargeFire[1] = 0;
  this->BombParachute[1] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(this->ChronoReinfDelay, 0, 0);
  this->ChronoRangeMinimum[1] = 10;
  this->ChronoRangeMinimum[0] = 0;
  this->ChronoReinfDelay[0] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(&this->ChronoRangeMinimum[3], 0, 0);
  this->AISafeDistance[0] = 10;
  this->SpyPowerBlackout[3] = 0;
  this->ChronoRangeMinimum[3] = (int)&vt_TypeList_SmudgeTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->AISafeDistance[2], 0, 0);
  this->Engineer[3] = 10;
  this->Engineer[2] = 0;
  this->AISafeDistance[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->ThirdCrew[1] = 0;
  this->ThirdCrew[2] = 0;
  this->ThirdCrew[3] = 0;
  this->NukeProjectile[0] = 0;
  this->NukeProjectile[1] = 0;
  VectorClass::BuildingTypeConstructor(&this->NukeProjectile[2], 0, 0);
  this->C4Warhead[3] = 10;
  this->C4Warhead[2] = 0;
  this->NukeProjectile[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->CMislWarhead[1] = 0;
  this->CMislWarhead[2] = 0;
  this->CMislWarhead[3] = 0;
  this->IvanWarhead[0] = 0;
  VectorClass::BuildingTypeConstructor(&this->IvanWarhead[1], 0, 0);
  this->CanDetonateTimeBomb[2] = 10;
  this->CanDetonateTimeBomb[1] = 0;
  this->IvanWarhead[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->CHRONOSK_SHP, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->CHRONOSK_SHP) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor((_DWORD *)&this->? + 1, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  HIDWORD(this->?) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[2], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->MyEffectivenessCoefficientDefault, 0, 0);
  this->? = 10;
  *(_DWORD *)&this->TargetSpecialThreatCoefficientDefault = 0;
  this->MyEffectivenessCoefficientDefault = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::BuildingTypeConstructor(&this->?[2], 0, 0);
  this->HelipadRatio[3] = 10;
  this->HelipadRatio[2] = 0;
  this->?[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[1], 0, 0);
  this->AALimit[2] = 10;
  this->AALimit[1] = 0;
  this->?[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->WarRatio, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->WarRatio[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[3], 0, 0);
  this->InfantryBaseMult[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->InfantryBaseMult[2], 0, 0);
  this->PatrolScan[3] = 10;
  this->PatrolScan[2] = 0;
  this->InfantryBaseMult[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?, 0, 0);
  *(_DWORD *)&this->FireSupress = 10;
  this->? = 0.0;
  this->? = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->SuperWeapons, 0, 0);
  this->RepairSell[2] = 10;
  this->RepairSell[1] = 0;
  this->SuperWeapons = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->Aircraft, 0, 0);
  this->SilverCrate[1] = 10;
  this->SilverCrate[0] = 0;
  this->Aircraft[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->SilverCrate[3], 0, 0);
  this->MoneyIncrement = 10;
  this->CrateMaximum[3] = 0;
  this->SilverCrate[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->MinUnitCount, 0, 0);
  this->Players = 10;
  this->AIPlayers = 0;
  this->MinUnitCount = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->BridgeDestruction[1], 0, 0);
  this->DropZoneRadius[2] = 10;
  this->DropZoneRadius[1] = 0;
  this->BridgeDestruction[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->? = 0;
  this->BaseDefenseDelay[0] = 1075314688;
  this->BaseDefenseDelay[1] = 0;
  this->BaseDefenseDelay[2] = 1074266112;
  this->BaseDefenseDelay[3] = 0;
  this->?[0] = 1072693248;
  this->?[1] = 0;
  this->?[2] = 1072693248;
  this->?[3] = 3;
  this->SovietSurvivorDivisor[0] = 60;
  UnitTypeVector::ConstructUnitTypeVectorClass(&this->SovietSurvivorDivisor[1], 0, 0);
  this->AutocreateTime[2] = 10;
  this->AutocreateTime[1] = 0;
  this->SovietSurvivorDivisor[1] = (int)&vt_TypeList_UnitTypeClass_const;
  UnitTypeVector::ConstructUnitTypeVectorClass(&this->HarvesterLoadRate, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->HarvesterLoadRate = (int)&vt_TypeList_UnitTypeClass_const;
  AircraftTypeVector::Constructor(&this->?, 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  LODWORD(this->?) = &vt_TypeList_AircraftTypeClass_const;
  AnimTypeVector::Constructor(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  LODWORD(this->?) = &vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  *(_DWORD *)&this->? = 0;
  this->? = 0;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 100;
  this->Difficult = 60;
  this->? = 60;
  this->? = 32;
  LOBYTE(this->?) = 1;
  this->? = 0;
  this->? = 0;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  InfantryTypeVector::Construct2(&this->__pad_C3C, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->__pad_C3C = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  LODWORD(this->?) = 10;
  *(_DWORD *)&this->?[4] = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  UnitTypeVector::ConstructUnitTypeVectorClass(this->?, 0, 0);
  LODWORD(this->?) = 10;
  *(_DWORD *)this->? = 0;
  *(_DWORD *)this->? = &vt_TypeList_UnitTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?, 0, 0);
  *(_DWORD *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_BuildingTypeClass_const;
  HIDWORD(this->?) = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 1056964608;
  LOBYTE(this->?) = 0;
  this->? = 0x83F4CCCCDLL;
  this->? = 5;
  this->? = 50;
  VectorClass::Construct(&this->?, 0, 0);
  *(_DWORD *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  this->?[3] = 500;
  this->?[0] = 5;
  this->?[1] = 1;
  this->?[2] = 5000;
  this->?[3] = -5000;
  this->?[0] = 36;
  this->?[1] = 27;
  this->?[2] = 20;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  this->?[1] = 5;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[1], 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->?[1] = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->?[0] = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  this->?[2] = 25;
  this->?[3] = 10;
  VectorClass::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[3], 0, 0);
  *(_DWORD *)this->? = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  *(_DWORD *)&this->?[4] = 1048576000;
  this->? = 0x3F8000003F800000LL;
  this->? = 0x3F80000000000005LL;
  this->? = 0x23F800000LL;
  this->? = 0x23F800000LL;
  this->? = 5;
  this->? = 1065353216;
  LOBYTE(this->?) = 1;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[4] = 0;
  this->?[5] = 0;
  this->?[6] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[4] = 0;
  this->?[5] = 0;
  this->?[6] = 0;
  this->?[0] = 100;
  this->?[1] = 450;
  LOBYTE(this->?[2]) = 0;
  BYTE1(this->?[2]) = 0;
  this->?[3] = 8;
  this->?[4] = 0;
  this->?[5] = 0;
  this->?[6] = 0;
  this->? = 0;
  this->? = 3;
  this->? = 0;
  this->? = 0;
  RulesClass::readIQ(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_TerrainTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)&this->? = 0;
  *(_DWORD *)&this->? = 0;
  *(_DWORD *)&this->? = 0;
  *(_DWORD *)&this->? = 0;
  this->? = 0;
  LODWORD(this->?) = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 1073217536;
  this->? = 0x4008000000000000LL;
  this->? = 0;
  *(_DWORD *)this->? = 1075052544;
  this->?[0] = 0;
  this->?[1] = 1072168960;
  this->?[2] = -343597384;
  this->?[3] = 1069463633;
  this->?[4] = 5;
  this->?[6] = -343597384;
  this->?[7] = 1069463633;
  this->?[8] = 5;
  this->?[10] = 1202590843;
  this->?[11] = 1069841121;
  this->?[12] = 10;
  this->?[14] = 515396076;
  this->?[15] = 1069673349;
  this->?[16] = 10;
  this->?[18] = 0;
  this->?[19] = 1071644672;
  this->?[0] = 40;
  this->?[2] = -1717986918;
  this->?[3] = 1069128089;
  this->?[4] = 2;
  this->?[6] = 1202590843;
  this->?[7] = 1069841121;
  this->?[8] = 2;
  this->?[9] = 4;
  this->?[10] = 1202590843;
  this->?[11] = 1069841121;
  this->?[12] = 3;
  this->?[13] = 50;
  this->?[14] = 2000;
  this->?[15] = 2;
  this->?[16] = 2000;
  this->?[17] = 25;
  this->?[18] = 0;
  this->?[0] = -755914244;
  this->?[1] = 1066426957;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[7] = 10;
  this->?[6] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[9], 0, 0);
  this->?[14] = 10;
  this->?[13] = 0;
  this->?[9] = (int)&vt_TypeList_int;
  this->?[16] = 5000;
  VectorClass::Construct(&this->?[17], 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  this->?[17] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  *(_DWORD *)this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  this->? = 10;
  this->? = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->? = 10;
  HIDWORD(this->?) = 0;
  *(_DWORD *)this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  this->? = 1000;
  VectorClass::Construct(&this->?, 0, 0);
  *(_DWORD *)&this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  *(_DWORD *)&this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  *(_DWORD *)&this->? = 10;
  *(_DWORD *)&this->? = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  *(_DWORD *)&this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->?[2] = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  *(_DWORD *)&this->? = 10;
  HIDWORD(this->?) = 0;
  *(_DWORD *)this->? = &vt_TypeList_int;
  DynamicVectorClass::Construct(&this->?, 0, 0);
  LODWORD(this->?) = &vt_TypeList_int;
  this->?[0] = 0;
  this->?[1] = 1072693248;
  DynamicVectorClass::Construct(&this->?[2], 0, 0);
  this->?[2] = (int)&vt_TypeList_int;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  this->? = 1.875;
  *((_DWORD *)this + 1288) = 0;
  *((_DWORD *)this + 1289) = 1072693248;
  *((_DWORD *)this + 1290) = 0;
  *((_DWORD *)this + 1291) = 1071644672;
  *((_DWORD *)this + 1292) = 256;
  *((_DWORD *)this + 1293) = 5;
  *((_DWORD *)this + 1294) = 4;
  *((_DWORD *)this + 1295) = 5;
  *((_QWORD *)this + 648) = 0x300000004LL;
  *((_QWORD *)this + 649) = 0x300000002LL;
  *((_DWORD *)this + 1300) = 4;
  *((_DWORD *)this + 1301) = 4;
  *((_DWORD *)this + 1302) = 3;
  *((_DWORD *)this + 1303) = 2;
  *((_DWORD *)this + 1304) = 1;
  *((_DWORD *)this + 1305) = 2;
  *((_DWORD *)this + 1306) = 0;
  *((_DWORD *)this + 1307) = 0;
  *((_DWORD *)this + 1308) = 1;
  *((_DWORD *)this + 1309) = 255;
  *((_DWORD *)this + 1310) = 0x2000;
  *((_DWORD *)this + 1311) = 0;
  *((_DWORD *)this + 1312) = 2500;
  *((_DWORD *)this + 1313) = 10000;
  *((_DWORD *)this + 1314) = 10000;
  *((_DWORD *)this + 1315) = 100;
  *((_DWORD *)this + 1316) = 1;
  *((_DWORD *)this + 1317) = 10;
  *((_DWORD *)this + 1318) = 20;
  *((_DWORD *)this + 1319) = 10;
  *((_DWORD *)this + 1320) = 6;
  *((_DWORD *)this + 1321) = 1;
  *((_DWORD *)this + 1322) = 1;
  *((_DWORD *)this + 1323) = 16842753;
  *((_DWORD *)this + 1324) = 257;
  *((_DWORD *)this + 1325) = 0;
  *((_DWORD *)this + 1326) = 16843009;
  *((_DWORD *)this + 1327) = 1024;
  *((_DWORD *)this + 1328) = 858993459;
  *((_DWORD *)this + 1329) = 1071854387;
  *((_DWORD *)this + 1330) = -343597384;
  *((_DWORD *)this + 1331) = 1067366481;
  *((_DWORD *)this + 1332) = 8;
  *((_QWORD *)this + 667) = 0x3FD0000000000000LL;
  *((_DWORD *)this + 1336) = 20;
  *((_QWORD *)this + 669) = 0x4000000000000000LL;
  *((_DWORD *)this + 1340) = 0;
  *((_DWORD *)this + 1341) = 1071644672;
  *((_DWORD *)this + 1342) = 200;
  *((_DWORD *)this + 1343) = 100;
  *((_DWORD *)this + 1344) = 300;
  *((_DWORD *)this + 1346) = -1717986918;
  *((_DWORD *)this + 1347) = 1068079513;
  *((_DWORD *)this + 1348) = 0;
  *((_DWORD *)this + 1349) = 1075052544;
  *((_DWORD *)this + 1350) = -1717986918;
  *((_DWORD *)this + 1351) = 1068079513;
  *((_DWORD *)this + 1352) = 2;
  *((_DWORD *)this + 1354) = -755914244;
  *((_DWORD *)this + 1355) = 1066426957;
  *((_DWORD *)this + 1356) = 1000;
  *((_DWORD *)this + 1422) = 0;
  *((_DWORD *)this + 1423) = 0x40000000;
  *((_DWORD *)this + 1424) = 0;
  *((_DWORD *)this + 1425) = 1074790400;
  *((_DWORD *)this + 1426) = -1717986918;
  *((_DWORD *)this + 1427) = 1068079513;
  *((_DWORD *)this + 1428) = 0;
  *((_DWORD *)this + 1429) = 1072693248;
  *((_DWORD *)this + 1430) = 0;
  *((_DWORD *)this + 1431) = 1072693248;
  *((_DWORD *)this + 1432) = 500;
  *((_DWORD *)this + 1434) = -1717986918;
  *((_DWORD *)this + 1435) = 1070176665;
  *((_DWORD *)this + 1436) = -1717986918;
  *((_DWORD *)this + 1437) = 1069128089;
  *((_DWORD *)this + 1438) = 0;
  *((_DWORD *)this + 1439) = 1076101120;
  *((_DWORD *)this + 1440) = 0;
  *((_DWORD *)this + 1441) = 0x40000000;
  *((_DWORD *)this + 1444) = 0;
  *((_DWORD *)this + 1445) = 1076625408;
  *((_DWORD *)this + 1446) = 0;
  *((_DWORD *)this + 1447) = 1075052544;
  *((_DWORD *)this + 1448) = 0;
  *((_DWORD *)this + 1449) = 1076101120;
  *((_DWORD *)this + 1450) = 0;
  *((_DWORD *)this + 1451) = 0x40000000;
  *((_DWORD *)this + 1452) = 0;
  *((_DWORD *)this + 1453) = 1072693248;
  *((_DWORD *)this + 1454) = 3;
  *((_DWORD *)this + 1455) = 50;
  *((_DWORD *)this + 1456) = 0;
  *((_DWORD *)this + 1457) = 1;
  *((_DWORD *)this + 1458) = 1000;
  *((_DWORD *)this + 1459) = 5;
  *((_DWORD *)this + 1460) = 0;
  *((_DWORD *)this + 1461) = 1070596096;
  *((_DWORD *)this + 1462) = 1;
  *((_DWORD *)this + 1464) = -755914244;
  *((_DWORD *)this + 1465) = 1066426957;
  *((_DWORD *)this + 1466) = -755914244;
  *((_DWORD *)this + 1467) = 1066426957;
  *((_DWORD *)this + 1468) = -755914244;
  *((_DWORD *)this + 1469) = 1066426957;
  *((_DWORD *)this + 1470) = 0;
  *((_DWORD *)this + 1471) = 1072693248;
  *((_DWORD *)this + 1472) = 0;
  *((_DWORD *)this + 1473) = 1071644672;
  *((_DWORD *)this + 1474) = 0;
  *((_DWORD *)this + 1475) = 1071644672;
  *((_DWORD *)this + 1476) = -309237645;
  *((_DWORD *)this + 1477) = 1068842876;
  *((_DWORD *)this + 1478) = 640;
  *((_DWORD *)this + 1479) = 512;
  *((_DWORD *)this + 1480) = 512;
  *((_DWORD *)this + 1482) = 384;
  *((_DWORD *)this + 1483) = 640;
  *((_DWORD *)this + 1484) = 512;
  *((_DWORD *)this + 1485) = 256;
  *((_DWORD *)this + 1486) = 0;
  *((_DWORD *)this + 1487) = 1071644672;
  *((_DWORD *)this + 1488) = 1000;
  *((_DWORD *)this + 1490) = 0;
  *((_DWORD *)this + 1491) = 1072693248;
  *((_DWORD *)this + 1492) = -343597384;
  *((_DWORD *)this + 1493) = 1067366481;
  *((_DWORD *)this + 1494) = 1000;
  *((_DWORD *)this + 1496) = -755914244;
  *((_DWORD *)this + 1497) = 1066426957;
  *((_DWORD *)this + 1498) = 60;
  *((_DWORD *)this + 1500) = 0;
  *((_DWORD *)this + 1501) = 1070596096;
  *((_DWORD *)this + 1502) = 1536;
  *((_DWORD *)this + 1503) = 0x2000;
  *((_DWORD *)this + 1504) = 1280;
  *((_DWORD *)this + 1505) = 4096;
  *((_DWORD *)this + 1506) = 20480;
  *((_DWORD *)this + 1507) = 768;
  *((_DWORD *)this + 1508) = 0x7FFFFFFF;
  *((_DWORD *)this + 1509) = 250;
  *((_QWORD *)this + 755) = 0x384000000C8LL;
  *((_DWORD *)this + 1512) = 90;
  *((_DWORD *)this + 1513) = 10;
  *((_QWORD *)this + 757) = 0x30000000ALL;
  *((_BYTE *)this + 6064) = 1;
  *((_DWORD *)this + 1517) = 0;
  *((_DWORD *)this + 1518) = 10;
  *((_DWORD *)this + 1519) = 400;
  *((_DWORD *)this + 1520) = 800;
  *((_DWORD *)this + 1521) = 50;
  *((_BYTE *)this + 6088) = 0;
  *((_DWORD *)this + 1523) = 100;
  *((_DWORD *)this + 1524) = 0;
  *((_DWORD *)this + 1525) = 0;
  *((_DWORD *)this + 1526) = 0;
  *((_DWORD *)this + 1527) = 0;
  *((_DWORD *)this + 1528) = 16842753;
  *((_DWORD *)this + 1529) = 16842752;
  *((_DWORD *)this + 1530) = 0;
  *((_DWORD *)this + 1531) = 0x10000;
  *((_DWORD *)this + 1532) = 16843008;
  *((_DWORD *)this + 1533) = 0;
  *((_DWORD *)this + 1534) = 1065353216;
  *((_DWORD *)this + 1535) = 0;
  *((_DWORD *)this + 1536) = 300;
  *((_DWORD *)this + 1537) = 0;
  *((_DWORD *)this + 1538) = 0;
  *((_DWORD *)this + 1539) = 0;
  *((_DWORD *)this + 1540) = 0;
  *((_DWORD *)this + 1541) = 0;
  *((_DWORD *)this + 1542) = 0;
  *((_DWORD *)this + 1543) = 0;
  *((_DWORD *)this + 1544) = 0;
  *((_DWORD *)this + 1545) = 0;
  *((_DWORD *)this + 1546) = 0;
  *((_DWORD *)this + 1547) = 0;
  *((_BYTE *)this + 6192) = 0;
  *((_BYTE *)this + 6193) = 0;
  *((_BYTE *)this + 6194) = 0;
  *((_DWORD *)this + 1549) = 0;
  *((_DWORD *)this + 1550) = 0;
  *((_DWORD *)this + 1552) = 0;
  *((_DWORD *)this + 1553) = 1072693248;
  *((_DWORD *)this + 1554) = 0;
  *((_DWORD *)this + 1555) = 0;
  *((_BYTE *)this + 6224) = 0;
  *((_DWORD *)this + 1558) = 0;
  *((_DWORD *)this + 1559) = 1071644672;
  *((_DWORD *)this + 1560) = 0xFFFFFF;
  *((_DWORD *)this + 1561) = 0;
  *((_DWORD *)this + 1562) = 0;
  v3 = (char *)this + 6260;
  *((_DWORD *)this + 1563) = 50;
  *((_DWORD *)this + 1564) = 0;
  v4 = (char *)this + 6260;
  v5 = 16;
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 1577) = 0;
  *((_DWORD *)this + 1578) = 0;
  *((_DWORD *)this + 1579) = 0;
  *((_DWORD *)this + 1580) = 0;
  *((_DWORD *)this + 1581) = 1065353216;
  *((_DWORD *)this + 1582) = 1065353216;
  this->? = 0;
  this->? = 60;
  this->? = 0.0;
  this->? = 1.0;
  this->? = 0.050000001;
  LODWORD(this->?) = 1;
  this->? = 1053609165;
  *(_DWORD *)this->? = 768;
  LODWORD(this->?) = 1000;
  HIDWORD(this->?) = 1000;
  LODWORD(this->?) = 256;
  BYTE4(this->?) = 1;
  LODWORD(this->?) = 0;
  HIDWORD(this->?) = 10;
  this->? = 60;
  this->? = 0;
  this->? = 1065353216;
  this->? = 1028443341;
  LODWORD(this->?) = 1;
  HIDWORD(this->?) = 1053609165;
  LODWORD(this->?) = 768;
  HIDWORD(this->?) = 1000;
  LODWORD(this->?) = 1000;
  HIDWORD(this->?) = 128;
  LOBYTE(this->?) = 0;
  this->? = 0;
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 30;
  LODWORD(this->?) = 1065353216;
  HIDWORD(this->?) = 1065353216;
  LODWORD(this->?) = 1065353216;
  HIDWORD(this->?) = 1;
  LODWORD(this->?) = 1058642330;
  HIDWORD(this->?) = 768;
  LODWORD(this->?) = 500;
  HIDWORD(this->?) = 500;
  LODWORD(this->?) = 128;
  BYTE4(this->?) = 0;
  this->?[0] = 0;
  v6 = 16;
  do
  {
    v7 = v3;
    v3 += 3;
    --v6;
    *(_WORD *)v7 = 0;
    v7[2] = 0;
  }
  while ( v6 );
  return (int)this;
}


// ==== 0x00667A30  RulesClass::DTOR  this=CampaignClass  sig=csp ====
int __thiscall RulesClass::DTOR(RulesClass *this)
{
  int *v2; // ecx
  void *v3; // eax
  void *HarvesterTooFarDistance; // eax
  void *SovietDisguise; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *ChronoDelay; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *ComputerBaseDefenseResponse; // eax
  void *GDIWallDefense_high; // eax
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *CameraRange; // eax
  void *StopSound; // eax
  void *v31; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *PrismSupportHeight; // eax
  void *IonCannonDamage; // eax
  void *v37; // eax
  void *WobblesPerSecond_high; // eax
  void *Climb; // eax
  void *PrerequisiteProcAlternate; // eax
  void *WarpIn; // eax
  void *DrainAnimationType; // eax
  void *DominatorSecondAnim; // eax
  void *GUIOpenSound; // eax
  void *CreateUnitSound; // eax
  void *v46; // eax
  void *v47; // eax
  int result; // eax

  v2 = &this->q13F0[2]; /*0x667a3b*/
  *v2 = (int)&vt_VectorClass_int; /*0x667a41*/
  VectorClass::Destroy((int)v2); /*0x667a43*/
  LODWORD(this->q13C8) = &vt_VectorClass_int; /*0x667a4e*/
  VectorClass::Destroy((int)&this->q13C8); /*0x667a50*/
  *(_DWORD *)this->q13AC = &vt_VectorClass_int; /*0x667a5b*/
  VectorClass::Destroy((int)this->q13AC); /*0x667a5d*/
  LODWORD(this->q1390) = &vt_VectorClass_int; /*0x667a68*/
  VectorClass::Destroy((int)&this->q1390); /*0x667a6a*/
  this->q1374 = (int)&vt_VectorClass_int; /*0x667a75*/
  VectorClass::Destroy((int)&this->q1374); /*0x667a77*/
  *(_DWORD *)&this->q1358 = &vt_VectorClass_int; /*0x667a82*/
  VectorClass::Destroy((int)&this->q1358); /*0x667a84*/
  LODWORD(this->q133C) = &vt_VectorClass_int; /*0x667a8f*/
  VectorClass::Destroy((int)&this->q133C); /*0x667a91*/
  this->q1320 = (int)&vt_VectorClass_int; /*0x667a9c*/
  VectorClass::Destroy((int)&this->q1320); /*0x667a9e*/
  this->q1304 = (int)&vt_VectorClass_int; /*0x667aa9*/
  VectorClass::Destroy((int)&this->q1304); /*0x667aab*/
  this->q12E4 = (int)&vt_VectorClass_int; /*0x667ab6*/
  VectorClass::Destroy((int)&this->q12E4); /*0x667ab8*/
  LODWORD(this->q12C8) = &vt_VectorClass_int; /*0x667ac3*/
  VectorClass::Destroy((int)&this->q12C8); /*0x667ac5*/
  *(_DWORD *)this->q12AC = &vt_VectorClass_int; /*0x667ad0*/
  VectorClass::Destroy((int)this->q12AC); /*0x667ad2*/
  this->q1290 = (int)&vt_VectorClass_int; /*0x667add*/
  VectorClass::Destroy((int)&this->q1290); /*0x667adf*/
  HIDWORD(this->q1274) = &vt_VectorClass_int; /*0x667aea*/
  VectorClass::Destroy((int)&this->q1274 + 4); /*0x667aec*/
  LODWORD(this->q1258) = &vt_VectorClass_int; /*0x667af7*/
  VectorClass::Destroy((int)&this->q1258); /*0x667af9*/
  HIDWORD(this->q123C) = &vt_VectorClass_int; /*0x667b04*/
  VectorClass::Destroy((int)&this->q123C + 4); /*0x667b06*/
  this->q1220 = (int)&vt_VectorClass_int; /*0x667b11*/
  VectorClass::Destroy((int)&this->q1220); /*0x667b13*/
  HIDWORD(this->q1204) = &vt_VectorClass_int; /*0x667b1e*/
  VectorClass::Destroy((int)&this->q1204 + 4); /*0x667b20*/
  LODWORD(this->q11E8) = &vt_VectorClass_int; /*0x667b2b*/
  VectorClass::Destroy((int)&this->q11E8); /*0x667b2d*/
  *(_DWORD *)this->q11CC = &vt_VectorClass_int; /*0x667b38*/
  VectorClass::Destroy((int)this->q11CC); /*0x667b3a*/
  LODWORD(this->q11B0) = &vt_VectorClass_int; /*0x667b45*/
  VectorClass::Destroy((int)&this->q11B0); /*0x667b47*/
  this->q1194[17] = (int)&vt_VectorClass_int; /*0x667b52*/
  VectorClass::Destroy((int)&this->q1194[17]); /*0x667b54*/
  this->q1174[9] = (int)&vt_VectorClass_int; /*0x667b5f*/
  VectorClass::Destroy((int)&this->q1174[9]); /*0x667b61*/
  this->q1158[2] = (int)&vt_VectorClass_int; /*0x667b6c*/
  VectorClass::Destroy((int)&this->q1158[2]); /*0x667b6e*/
  this->qFF8 = (int)&vt_VectorClass_TerrainTypeClass_const; /*0x667b79*/
  TypeList_cptr_TerrainTypeClass::TryFreeAndClear((int)&this->qFF8); /*0x667b7f*/
  LODWORD(this->qF20) = &vt_VectorClass_int; /*0x667b8a*/
  VectorClass::Destroy((int)&this->qF20); /*0x667b8c*/
  this->qF04[3] = (int)&vt_VectorClass_int; /*0x667b97*/
  VectorClass::Destroy((int)&this->qF04[3]); /*0x667b99*/
  this->qEE8[0] = (int)&vt_VectorClass_int; /*0x667ba4*/
  VectorClass::Destroy((int)this->qEE8); /*0x667ba6*/
  this->qEC4[3] = (int)&vt_VectorClass_int; /*0x667bb1*/
  VectorClass::Destroy((int)&this->qEC4[3]); /*0x667bb3*/
  this->qEA0[2] = (int)&vt_VectorClass_int; /*0x667bbe*/
  VectorClass::Destroy((int)&this->qEA0[2]); /*0x667bc0*/
  this->qE84[0] = (int)&vt_VectorClass_int; /*0x667bcb*/
  VectorClass::Destroy((int)this->qE84); /*0x667bcd*/
  this->qE68[1] = (int)&vt_VectorClass_int; /*0x667bd8*/
  VectorClass::Destroy((int)&this->qE68[1]); /*0x667bda*/
  this->qE4C[2] = (int)&vt_VectorClass_int; /*0x667be5*/
  VectorClass::Destroy((int)&this->qE4C[2]); /*0x667be7*/
  this->qE2C[2] = (int)&vt_VectorClass_int; /*0x667bf2*/
  VectorClass::Destroy((int)&this->qE2C[2]); /*0x667bf4*/
  this->qE10[3] = (int)&vt_VectorClass_int; /*0x667bff*/
  VectorClass::Destroy((int)&this->qE10[3]); /*0x667c01*/
  this->qDD4[0] = (int)&vt_VectorClass_int; /*0x667c0c*/
  VectorClass::Destroy((int)this->qDD4); /*0x667c0e*/
  this->qDB8[2] = (int)&vt_VectorClass_int; /*0x667c19*/
  VectorClass::Destroy((int)&this->qDB8[2]); /*0x667c1b*/
  HIDWORD(this->qD9C) = &vt_VectorClass_int; /*0x667c26*/
  VectorClass::Destroy((int)&this->qD9C + 4); /*0x667c28*/
  this->qD80 = (int)&vt_VectorClass_int; /*0x667c33*/
  VectorClass::Destroy((int)&this->qD80); /*0x667c35*/
  this->qD38 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667c45*/
  DynamicVectorClass::Destroy((int)&this->qD38); /*0x667c47*/
  *(_DWORD *)this->qD1C = &vt_VectorClass_UnitTypeClass_const; /*0x667c52*/
  Vector::Destructor((int)this->qD1C); /*0x667c58*/
  LODWORD(this->qD00) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c63*/
  Vector::Cleanup((int)&this->qD00); /*0x667c69*/
  HIDWORD(this->qCE4) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c74*/
  Vector::Cleanup((int)&this->qCE4 + 4); /*0x667c7a*/
  LODWORD(this->qCC8) = &vt_VectorClass_int; /*0x667c85*/
  VectorClass::Destroy((int)&this->qCC8); /*0x667c87*/
  HIDWORD(this->qCAC) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c92*/
  Vector::Cleanup((int)&this->qCAC + 4); /*0x667c98*/
  LODWORD(this->qC90) = &vt_VectorClass_int; /*0x667ca3*/
  VectorClass::Destroy((int)&this->qC90); /*0x667ca5*/
  this->qC74 = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cb0*/
  Vector::Cleanup((int)&this->qC74); /*0x667cb6*/
  this->qC58 = (int)&vt_VectorClass_int; /*0x667cc1*/
  VectorClass::Destroy((int)&this->qC58); /*0x667cc3*/
  this->__pad_C3C = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cce*/
  Vector::Cleanup((int)&this->__pad_C3C); /*0x667cd4*/
  this->qC20 = (int)&vt_VectorClass_int; /*0x667cdf*/
  VectorClass::Destroy((int)&this->qC20); /*0x667ce1*/
  this->qC04 = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cec*/
  Vector::Cleanup((int)&this->qC04); /*0x667cf2*/
  this->qBC0 = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667cfd*/
  DynamicVectorClass::Destroy_Alt((int)&this->qBC0); /*0x667d03*/
  LODWORD(this->qB90) = &vt_VectorClass_AnimTypeClass_const; /*0x667d0e*/
  DynamicVectorClass::Destroy_Alt((int)&this->qB90); /*0x667d14*/
  this->qB74[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667d1f*/
  DynamicVectorClass::Destroy_Alt((int)&this->qB74[2]); /*0x667d25*/
  LODWORD(this->qB58) = &vt_VectorClass_AircraftTypeClass_const; /*0x667d30*/
  VectorClass::ClearAndFree4((int)&this->qB58); /*0x667d36*/
  this->HarvesterLoadRate = (int)&vt_VectorClass_UnitTypeClass_const; /*0x667d41*/
  Vector::Destructor((int)&this->HarvesterLoadRate); /*0x667d47*/
  this->SovietSurvivorDivisor[1] = (int)&vt_VectorClass_UnitTypeClass_const; /*0x667d52*/
  Vector::Destructor((int)&this->SovietSurvivorDivisor[1]); /*0x667d58*/
  this->BridgeDestruction[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d63*/
  DynamicVectorClass::Destroy((int)&this->BridgeDestruction[1]); /*0x667d65*/
  this->MinUnitCount = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d70*/
  DynamicVectorClass::Destroy((int)&this->MinUnitCount); /*0x667d72*/
  this->SilverCrate[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d7d*/
  DynamicVectorClass::Destroy((int)&this->SilverCrate[3]); /*0x667d7f*/
  v3 = (void *)this->Aircraft[1]; /*0x667d84*/
  this->Aircraft[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d8e*/
  if ( v3 && BYTE1(this->Aircraft[3]) ) /*0x667d96*/
  {
    __3_YAXPAX_Z(v3); /*0x667d9f*/
    this->Aircraft[1] = 0; /*0x667da7*/
  }
  BYTE1(this->Aircraft[3]) = 0; /*0x667dad*/
  this->Aircraft[2] = 0; /*0x667db3*/
  HarvesterTooFarDistance = (void *)this->Production; /*0x667db9*/
  this->SuperWeapons = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667dbf*/
  if ( HarvesterTooFarDistance && BYTE1(this->RepairSell[0]) ) /*0x667dc9*/
  {
    __3_YAXPAX_Z(HarvesterTooFarDistance); /*0x667dd2*/
    this->Production = 0; /*0x667dda*/
  }
  BYTE1(this->RepairSell[0]) = 0; /*0x667de0*/
  this->GuardArea = 0; /*0x667de6*/
  SovietDisguise = (void *)this->BaseBias; /*0x667dec*/
  this->qA50 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667df2*/
  if ( SovietDisguise && BYTE1(this->ExpSpread) ) /*0x667dfc*/
  {
    __3_YAXPAX_Z(SovietDisguise); /*0x667e05*/
    this->BaseBias = 0; /*0x667e0d*/
  }
  BYTE1(this->ExpSpread) = 0; /*0x667e13*/
  this->qA58 = 0; /*0x667e19*/
  v6 = (void *)this->InfantryBaseMult[3]; /*0x667e1f*/
  this->InfantryBaseMult[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e25*/
  if ( v6 && BYTE1(this->PatrolScan[1]) ) /*0x667e2f*/
  {
    __3_YAXPAX_Z(v6); /*0x667e38*/
    this->InfantryBaseMult[3] = 0; /*0x667e40*/
  }
  BYTE1(this->PatrolScan[1]) = 0; /*0x667e46*/
  this->PatrolScan[0] = 0; /*0x667e4c*/
  v7 = (void *)this->qA1C[0]; /*0x667e52*/
  this->RefineryRatio[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e58*/
  if ( v7 && BYTE1(this->qA25[2]) ) /*0x667e62*/
  {
    __3_YAXPAX_Z(v7); /*0x667e6b*/
    this->qA1C[0] = 0; /*0x667e73*/
  }
  BYTE1(this->qA25[2]) = 0; /*0x667e79*/
  this->BaseSizeAdd[1] = 0; /*0x667e7f*/
  v8 = (void *)this->WarRatio[1]; /*0x667e85*/
  this->WarRatio[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e8b*/
  if ( v8 && BYTE1(this->WarRatio[3]) ) /*0x667e95*/
  {
    __3_YAXPAX_Z(v8); /*0x667e9e*/
    this->WarRatio[1] = 0; /*0x667ea6*/
  }
  BYTE1(this->WarRatio[3]) = 0; /*0x667eac*/
  this->WarRatio[2] = 0; /*0x667eb2*/
  v9 = (void *)this->AARatio[2]; /*0x667eb8*/
  this->TeslaLimit[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ebe*/
  if ( v9 && BYTE1(this->AALimit[0]) ) /*0x667ec8*/
  {
    __3_YAXPAX_Z(v9); /*0x667ed1*/
    this->AARatio[2] = 0; /*0x667ed9*/
  }
  BYTE1(this->AALimit[0]) = 0; /*0x667edf*/
  this->q9E8[3] = 0; /*0x667ee5*/
  v10 = (void *)this->AirstripLimit[3]; /*0x667eeb*/
  this->q9C4[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ef1*/
  if ( v10 && BYTE1(this->HelipadRatio[1]) ) /*0x667efb*/
  {
    __3_YAXPAX_Z(v10); /*0x667f04*/
    this->AirstripLimit[3] = 0; /*0x667f0c*/
  }
  BYTE1(this->HelipadRatio[1]) = 0; /*0x667f12*/
  this->HelipadRatio[0] = 0; /*0x667f18*/
  v11 = (void *)this->q9AC[0]; /*0x667f1e*/
  this->AttackInterval[3] = (int)&vt_VectorClass_int; /*0x667f24*/
  if ( v11 && BYTE1(this->q9B5[2]) ) /*0x667f2e*/
  {
    __3_YAXPAX_Z(v11); /*0x667f37*/
    this->q9AC[0] = 0; /*0x667f3f*/
  }
  BYTE1(this->q9B5[2]) = 0; /*0x667f45*/
  this->AttackDelay[1] = 0; /*0x667f4b*/
  v12 = (void *)this->TargetDistanceCoefficientDefault[1]; /*0x667f51*/
  this->q98C[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f57*/
  if ( v12 && BYTE1(this->q999[3]) ) /*0x667f61*/
  {
    __3_YAXPAX_Z(v12); /*0x667f6a*/
    this->TargetDistanceCoefficientDefault[1] = 0; /*0x667f72*/
  }
  BYTE1(this->q999[3]) = 0; /*0x667f78*/
  this->q994[2] = 0; /*0x667f7e*/
  ChronoDelay = (void *)this->q974; /*0x667f84*/
  this->MyEffectivenessCoefficientDefault = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f8a*/
  if ( ChronoDelay && BYTE1(this->q97D) ) /*0x667f94*/
  {
    __3_YAXPAX_Z(ChronoDelay); /*0x667f9d*/
    this->q974 = 0; /*0x667fa5*/
  }
  BYTE1(this->q97D) = 0; /*0x667fab*/
  this->TargetEffectivenessCoefficientDefault = 0; /*0x667fb1*/
  v14 = (void *)this->q958[1]; /*0x667fb7*/
  this->q954[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667fbd*/
  if ( v14 && BYTE1(this->q961[3]) ) /*0x667fc7*/
  {
    __3_YAXPAX_Z(v14); /*0x667fd0*/
    this->q958[1] = 0; /*0x667fd8*/
  }
  BYTE1(this->q961[3]) = 0; /*0x667fde*/
  this->q95C[2] = 0; /*0x667fe4*/
  v15 = (void *)this->CMisl[3]; /*0x667fea*/
  this->q938[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ff0*/
  if ( v15 && BYTE1(this->q945) ) /*0x667ffa*/
  {
    __3_YAXPAX_Z(v15); /*0x668003*/
    this->CMisl[3] = 0; /*0x66800b*/
  }
  BYTE1(this->q945) = 0; /*0x668011*/
  this->q940 = 0; /*0x668017*/
  v16 = (void *)this->q920[0]; /*0x66801d*/
  this->q91C[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668023*/
  if ( v16 && BYTE1(this->q929[2]) ) /*0x66802d*/
  {
    __3_YAXPAX_Z(v16); /*0x668036*/
    this->q920[0] = 0; /*0x66803e*/
  }
  BYTE1(this->q929[2]) = 0; /*0x668044*/
  this->q924[1] = 0; /*0x66804a*/
  v17 = (void *)this->q904[1]; /*0x668050*/
  this->q900[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668056*/
  if ( v17 && BYTE1(this->q90D[3]) ) /*0x668060*/
  {
    __3_YAXPAX_Z(v17); /*0x668069*/
    this->q904[1] = 0; /*0x668071*/
  }
  BYTE1(this->q90D[3]) = 0; /*0x668077*/
  this->DMisl[2] = 0; /*0x66807d*/
  ComputerBaseDefenseResponse = (void *)this->q8E8; /*0x668083*/
  HIDWORD(this->q8E4) = &vt_VectorClass_BuildingTypeClass_const; /*0x668089*/
  if ( ComputerBaseDefenseResponse && BYTE1(this->q8F1[0]) ) /*0x668093*/
  {
    __3_YAXPAX_Z(ComputerBaseDefenseResponse); /*0x66809c*/
    this->q8E8 = 0; /*0x6680a4*/
  }
  BYTE1(this->q8F1[0]) = 0; /*0x6680aa*/
  this->q8EC = 0; /*0x6680b0*/
  GDIWallDefense_high = (void *)HIDWORD(this->CHRONOSK_SHP); /*0x6680b6*/
  LODWORD(this->CHRONOSK_SHP) = &vt_VectorClass_BuildingTypeClass_const; /*0x6680bc*/
  if ( GDIWallDefense_high && BYTE5(this->PsychicRevealRadius) ) /*0x6680c6*/
  {
    __3_YAXPAX_Z(GDIWallDefense_high); /*0x6680cf*/
    HIDWORD(this->CHRONOSK_SHP) = 0; /*0x6680d7*/
  }
  BYTE5(this->PsychicRevealRadius) = 0; /*0x6680dd*/
  LODWORD(this->PsychicRevealRadius) = 0; /*0x6680e3*/
  v20 = (void *)this->IvanWarhead[2]; /*0x6680e9*/
  this->IvanWarhead[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x6680ef*/
  if ( v20 && BYTE1(this->CanDetonateTimeBomb[0]) ) /*0x6680f9*/
  {
    __3_YAXPAX_Z(v20); /*0x668102*/
    this->IvanWarhead[2] = 0; /*0x66810a*/
  }
  BYTE1(this->CanDetonateTimeBomb[0]) = 0; /*0x668110*/
  this->IvanWarhead[3] = 0; /*0x668116*/
  v21 = (void *)this->NukeProjectile[3]; /*0x66811c*/
  this->NukeProjectile[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668122*/
  if ( v21 && BYTE1(this->C4Warhead[1]) ) /*0x66812c*/
  {
    __3_YAXPAX_Z(v21); /*0x668135*/
    this->NukeProjectile[3] = 0; /*0x66813d*/
  }
  BYTE1(this->C4Warhead[1]) = 0; /*0x668143*/
  this->C4Warhead[0] = 0; /*0x668149*/
  v22 = (void *)this->AISafeDistance[3]; /*0x66814f*/
  this->AISafeDistance[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668155*/
  if ( v22 && BYTE1(this->Engineer[1]) ) /*0x66815f*/
  {
    __3_YAXPAX_Z(v22); /*0x668168*/
    this->AISafeDistance[3] = 0; /*0x668170*/
  }
  BYTE1(this->Engineer[1]) = 0; /*0x668176*/
  this->Engineer[0] = 0; /*0x66817c*/
  v23 = (void *)this->SpyPowerBlackout[0]; /*0x668182*/
  this->ChronoRangeMinimum[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x66818f*/
  if ( v23 && BYTE1(this->SpyPowerBlackout[2]) ) /*0x668197*/
  {
    __3_YAXPAX_Z(v23); /*0x6681a0*/
    this->SpyPowerBlackout[0] = 0; /*0x6681a8*/
  }
  BYTE1(this->SpyPowerBlackout[2]) = 0; /*0x6681ae*/
  this->SpyPowerBlackout[1] = 0; /*0x6681b4*/
  v24 = (void *)this->ChronoReinfDelay[1]; /*0x6681ba*/
  this->ChronoReinfDelay[0] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681c0*/
  if ( v24 && BYTE1(this->ChronoReinfDelay[3]) ) /*0x6681ca*/
  {
    __3_YAXPAX_Z(v24); /*0x6681d3*/
    this->ChronoReinfDelay[1] = 0; /*0x6681db*/
  }
  BYTE1(this->ChronoReinfDelay[3]) = 0; /*0x6681e1*/
  this->ChronoReinfDelay[2] = 0; /*0x6681e7*/
  v25 = (void *)this->BombParachute[2]; /*0x6681ed*/
  this->BombParachute[1] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681f3*/
  if ( v25 && BYTE1(this->LargeFire[0]) ) /*0x6681fd*/
  {
    __3_YAXPAX_Z(v25); /*0x668206*/
    this->BombParachute[2] = 0; /*0x66820e*/
  }
  BYTE1(this->LargeFire[0]) = 0; /*0x668214*/
  this->BombParachute[3] = 0; /*0x66821a*/
  v26 = (void *)this->BaseUnit[3]; /*0x668220*/
  this->BaseUnit[2] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668226*/
  if ( v26 && BYTE1(this->TreeFire[1]) ) /*0x668230*/
  {
    __3_YAXPAX_Z(v26); /*0x668239*/
    this->BaseUnit[3] = 0; /*0x668241*/
  }
  BYTE1(this->TreeFire[1]) = 0; /*0x668247*/
  this->TreeFire[0] = 0; /*0x66824d*/
  v27 = (void *)this->GDIBaseDefenseCoefficient[0]; /*0x668253*/
  this->GDIWallDefenseCoefficient[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668259*/
  if ( v27 && BYTE1(this->GDIBaseDefenseCoefficient[2]) ) /*0x668263*/
  {
    __3_YAXPAX_Z(v27); /*0x66826c*/
    this->GDIBaseDefenseCoefficient[0] = 0; /*0x668274*/
  }
  BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0; /*0x66827a*/
  this->GDIBaseDefenseCoefficient[1] = 0; /*0x668280*/
  v28 = (void *)this->q738[1]; /*0x668286*/
  this->q734[0] = (int)&vt_VectorClass_int; /*0x66828c*/
  if ( v28 && BYTE1(this->q741[3]) ) /*0x668296*/
  {
    __3_YAXPAX_Z(v28); /*0x66829f*/
    this->q738[1] = 0; /*0x6682a7*/
  }
  BYTE1(this->q741[3]) = 0; /*0x6682ad*/
  this->q73C[2] = 0; /*0x6682b3*/
  CameraRange = (void *)this->ChuteSound; /*0x6682b9*/
  this->HealCrateSound = (int)&vt_VectorClass_int; /*0x6682bf*/
  if ( CameraRange && BYTE1(this->GuardSound) ) /*0x6682c9*/
  {
    __3_YAXPAX_Z(CameraRange); /*0x6682d2*/
    this->ChuteSound = 0; /*0x6682da*/
  }
  BYTE1(this->GuardSound) = 0; /*0x6682e0*/
  this->StopSound = 0; /*0x6682e6*/
  StopSound = (void *)this->q64C; /*0x6682ec*/
  this->VeteranROF = (int)&vt_VectorClass_int; /*0x6682f2*/
  if ( StopSound && BYTE1(this->q655) ) /*0x6682fc*/
  {
    __3_YAXPAX_Z(StopSound); /*0x668305*/
    this->q64C = 0; /*0x66830d*/
  }
  BYTE1(this->q655) = 0; /*0x668313*/
  this->VeteranCap = 0; /*0x668319*/
  v31 = (void *)this->RevealTriggerRadius[0]; /*0x66831f*/
  this->CloakingStages = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66832c*/
  if ( v31 && BYTE1(this->RevealTriggerRadius[2]) ) /*0x668334*/
  {
    __3_YAXPAX_Z(v31); /*0x66833d*/
    this->RevealTriggerRadius[0] = 0; /*0x668345*/
  }
  BYTE1(this->RevealTriggerRadius[2]) = 0; /*0x66834b*/
  this->RevealTriggerRadius[1] = 0; /*0x668351*/
  v32 = (void *)this->q478[7]; /*0x668357*/
  this->q474[6] = (int)&vt_VectorClass_int; /*0x66835d*/
  if ( v32 && BYTE1(this->q481[9]) ) /*0x668367*/
  {
    __3_YAXPAX_Z(v32); /*0x668370*/
    this->q478[7] = 0; /*0x668378*/
  }
  BYTE1(this->q481[9]) = 0; /*0x66837e*/
  this->q47C[8] = 0; /*0x668384*/
  v33 = (void *)this->q45C[0]; /*0x66838a*/
  this->q458[13] = (int)&vt_VectorClass_int; /*0x668390*/
  if ( v33 && BYTE1(this->q465[2]) ) /*0x66839a*/
  {
    __3_YAXPAX_Z(v33); /*0x6683a3*/
    this->q45C[0] = 0; /*0x6683ab*/
  }
  BYTE1(this->q465[2]) = 0; /*0x6683b1*/
  this->q460[1] = 0; /*0x6683b7*/
  v34 = (void *)this->q440[7]; /*0x6683bd*/
  this->q43C[6] = (int)&vt_VectorClass_int; /*0x6683c3*/
  if ( v34 && BYTE1(this->q449[9]) ) /*0x6683cd*/
  {
    __3_YAXPAX_Z(v34); /*0x6683d6*/
    this->q440[7] = 0; /*0x6683de*/
  }
  BYTE1(this->q449[9]) = 0; /*0x6683e4*/
  this->q444[8] = 0; /*0x6683ea*/
  PrismSupportHeight = (void *)this->q3E8; /*0x6683f0*/
  this->q3E4 = (int)&vt_VectorClass_int; /*0x6683f6*/
  if ( PrismSupportHeight && BYTE1(this->q3F1[1]) ) /*0x668400*/
  {
    __3_YAXPAX_Z(PrismSupportHeight); /*0x668409*/
    this->q3E8 = 0; /*0x668411*/
  }
  BYTE1(this->q3F1[1]) = 0; /*0x668417*/
  this->q3EC[0] = 0; /*0x66841d*/
  IonCannonDamage = (void *)this->q3CC; /*0x668423*/
  this->q3C8[3] = (int)&vt_VectorClass_int; /*0x668429*/
  if ( IonCannonDamage && BYTE1(this->q3D5) ) /*0x668433*/
  {
    __3_YAXPAX_Z(IonCannonDamage); /*0x66843c*/
    this->q3CC = 0; /*0x668444*/
  }
  BYTE1(this->q3D5) = 0; /*0x66844a*/
  this->q3D0 = 0; /*0x668450*/
  v37 = (void *)this->q3B0[1]; /*0x668456*/
  this->q3AC[0] = (int)&vt_VectorClass_int; /*0x66845c*/
  if ( v37 && BYTE1(this->q3B9[3]) ) /*0x668466*/
  {
    __3_YAXPAX_Z(v37); /*0x66846f*/
    this->q3B0[1] = 0; /*0x668477*/
  }
  BYTE1(this->q3B9[3]) = 0; /*0x66847d*/
  this->q3B4[2] = 0; /*0x668483*/
  WobblesPerSecond_high = (void *)HIDWORD(this->q394); /*0x668489*/
  LODWORD(this->q390) = &vt_VectorClass_int; /*0x66848f*/
  if ( WobblesPerSecond_high && BYTE1(this->q39D[0]) ) /*0x668499*/
  {
    __3_YAXPAX_Z(WobblesPerSecond_high); /*0x6684a2*/
    HIDWORD(this->q394) = 0; /*0x6684aa*/
  }
  BYTE1(this->q39D[0]) = 0; /*0x6684b0*/
  this->q398 = 0; /*0x6684b6*/
  Climb = (void *)this->q378; /*0x6684bc*/
  *(_DWORD *)&this->q374[4] = &vt_VectorClass_int; /*0x6684c2*/
  if ( Climb && BYTE1(this->q381) ) /*0x6684cc*/
  {
    __3_YAXPAX_Z(Climb); /*0x6684d5*/
    LODWORD(this->q378) = 0; /*0x6684dd*/
  }
  BYTE1(this->q381) = 0; /*0x6684e3*/
  HIDWORD(this->q37C) = 0; /*0x6684e9*/
  PrerequisiteProcAlternate = (void *)this->q35C; /*0x6684ef*/
  this->q358[3] = (int)&vt_VectorClass_int; /*0x6684f5*/
  if ( PrerequisiteProcAlternate && BYTE1(this->q365) ) /*0x6684ff*/
  {
    __3_YAXPAX_Z(PrerequisiteProcAlternate); /*0x668508*/
    this->q35C = 0; /*0x668510*/
  }
  BYTE1(this->q365) = 0; /*0x668516*/
  this->q360 = 0; /*0x66851c*/
  WarpIn = (void *)this->q2DC; /*0x668522*/
  this->q2D8 = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66852f*/
  if ( WarpIn && BYTE1(this->q2E5) ) /*0x668537*/
  {
    __3_YAXPAX_Z(WarpIn); /*0x668540*/
    this->q2DC = 0; /*0x668548*/
  }
  BYTE1(this->q2E5) = 0; /*0x66854e*/
  this->q2E0 = 0; /*0x668554*/
  DrainAnimationType = (void *)this->q2C0; /*0x66855a*/
  this->q2BC = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668560*/
  if ( DrainAnimationType && BYTE1(this->q2C9) ) /*0x66856a*/
  {
    __3_YAXPAX_Z(DrainAnimationType); /*0x668573*/
    this->q2C0 = 0; /*0x66857b*/
  }
  BYTE1(this->q2C9) = 0; /*0x668581*/
  this->q2C4 = 0; /*0x668587*/
  DominatorSecondAnim = (void *)this->q2A4; /*0x66858d*/
  this->q2A0 = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668593*/
  if ( DominatorSecondAnim && BYTE1(this->q2AD) ) /*0x66859d*/
  {
    __3_YAXPAX_Z(DominatorSecondAnim); /*0x6685a6*/
    this->q2A4 = 0; /*0x6685ae*/
  }
  BYTE1(this->q2AD) = 0; /*0x6685b4*/
  this->q2A8 = 0; /*0x6685ba*/
  GUIOpenSound = (void *)this->CrateFireSound; /*0x6685c0*/
  this->CrateRevealSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685c6*/
  if ( GUIOpenSound && BYTE1(this->CrateSpeedSound) ) /*0x6685d0*/
  {
    __3_YAXPAX_Z(GUIOpenSound); /*0x6685d9*/
    this->CrateFireSound = 0; /*0x6685e1*/
  }
  BYTE1(this->CrateSpeedSound) = 0; /*0x6685e7*/
  this->CrateArmourSound = 0; /*0x6685ed*/
  CreateUnitSound = (void *)this->DefaultChronoSound; /*0x6685f3*/
  this->PlaceBeaconSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685f9*/
  if ( CreateUnitSound && BYTE1(this->AddPlanningModeCommandSound) ) /*0x668603*/
  {
    __3_YAXPAX_Z(CreateUnitSound); /*0x66860c*/
    this->DefaultChronoSound = 0; /*0x668614*/
  }
  BYTE1(this->AddPlanningModeCommandSound) = 0; /*0x66861a*/
  this->StartPlanningModeSound = 0; /*0x668620*/
  v46 = (void *)this->GUICheckboxSound[2]; /*0x668626*/
  this->GUICheckboxSound[1] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66862c*/
  if ( v46 && BYTE1(this->BuildingGarrisonedSound[0]) ) /*0x668636*/
  {
    __3_YAXPAX_Z(v46); /*0x66863f*/
    this->GUICheckboxSound[2] = 0; /*0x668647*/
  }
  BYTE1(this->BuildingGarrisonedSound[0]) = 0; /*0x66864d*/
  this->GUICheckboxSound[3] = 0; /*0x668653*/
  v47 = (void *)this->GUITabSound[3]; /*0x668659*/
  this->GUITabSound[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66865f*/
  if ( v47 && BYTE1(this->GUIMoveInSound[1]) ) /*0x668669*/
  {
    __3_YAXPAX_Z(v47); /*0x668672*/
    this->GUITabSound[3] = 0; /*0x66867a*/
  }
  BYTE1(this->GUIMoveInSound[1]) = 0; /*0x668680*/
  this->GUIMoveInSound[0] = 0; /*0x668686*/
  result = this->RadarEventColorSpeed[1]; /*0x66868c*/
  this->RadarEventColorSpeed[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66868f*/
  if ( result && BYTE1(this->RadarEventColorSpeed[3]) ) /*0x668696*/
  {
    __3_YAXPAX_Z((void *)result); /*0x66869c*/
    this->RadarEventColorSpeed[1] = 0; /*0x6686a4*/
  }
  BYTE1(this->RadarEventColorSpeed[3]) = 0; /*0x6686a7*/
  this->RadarEventColorSpeed[2] = 0; /*0x6686aa*/
  return result; /*0x6686ad*/
}


// ==== 0x006686C0  ObjectClass::ResetRules  this=int  sig=csp ====
int __thiscall ResetRules(RulesClass *this)
{
  ColorScheme *v2; // edi
  char *v3; // ebp
  char *v4; // eax
  int v5; // ecx
  char *v6; // esi
  int v7; // esi
  CCINIClass *KeyCount; // ebx
  unsigned __int8 *StringByIndex; // eax
  int Coord; // eax
  char *v11; // edx
  char v12; // cl
  __int16 v14; // [esp+50h] [ebp-D0h] BYREF
  char v15; // [esp+52h] [ebp-CEh]
  RulesClass *v16; // [esp+54h] [ebp-CCh]
  char v17[4]; // [esp+58h] [ebp-C8h] BYREF
  void *v18[4]; // [esp+5Ch] [ebp-C4h] BYREF
  _DWORD v19[3]; // [esp+6Ch] [ebp-B4h] BYREF
  _DWORD v20[6]; // [esp+78h] [ebp-A8h] BYREF
  char v21; // [esp+90h] [ebp-90h]
  int v22; // [esp+94h] [ebp-8Ch]
  int v23; // [esp+98h] [ebp-88h]
  char v24; // [esp+9Ch] [ebp-84h]
  _DWORD v25[22]; // [esp+B4h] [ebp-6Ch] BYREF
  char v26[12]; // [esp+10Ch] [ebp-14h] BYREF
  int v27; // [esp+118h] [ebp-8h]
  char *v28; // [esp+124h] [ebp+4h]

  v16 = this; /*0x6686d3*/
  while ( MEMORY[0xB054E0] ) /*0x6686d7*/
  {
    v2 = *(ColorScheme **)MEMORY[0xB054D4]; /*0x6686de*/
    if ( *(_DWORD *)MEMORY[0xB054D4] ) /*0x6686de*/
    {
      ColorScheme::Destructor(*(_DWORD *)MEMORY[0xB054D4]); /*0x6686e6*/
      __3_YAXPAX_Z(v2); /*0x6686ec*/
    }
  }
  MEMORY[0xB054E0] = 0; /*0x668702*/
  VectorClass_ptr_ColorScheme::Remove((int)&MEMORY[0xB054D0]); /*0x66870c*/
  System_Reset(); /*0x668711*/
  while ( MEMORY[0xA8ECB0] ) /*0x66871d*/
  {
    if ( *(_DWORD *)MEMORY[0xA8ECA4] ) /*0x668725*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8ECA4] + 32))(*(_DWORD *)MEMORY[0xA8ECA4], 1); /*0x66872f*/
  }
  while ( MEMORY[0xA8E8E0] ) /*0x668742*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E8D4] ) /*0x668749*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E8D4] + 32))(*(_DWORD *)MEMORY[0xA8E8D4], 1); /*0x668753*/
  }
  while ( dword_8B41D8 ) /*0x668766*/
  {
    if ( *(_DWORD *)unk_8B41CC ) /*0x66876d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)unk_8B41CC + 32))(*(_DWORD *)unk_8B41CC, 1); /*0x668777*/
  }
  while ( MEMORY[0xA83D90] ) /*0x66878a*/
  {
    if ( *(_DWORD *)MEMORY[0xA83D84]->vtable0 ) /*0x668791*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA83D84]->vtable0 + 32))( /*0x66879b*/
        *(_DWORD *)MEMORY[0xA83D84]->vtable0,
        1);
  }
  while ( MEMORY[0xA8EC28] ) /*0x6687ae*/
  {
    if ( *(_DWORD *)MEMORY[0xA8EC1C] ) /*0x6687b5*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8EC1C] + 32))(*(_DWORD *)MEMORY[0xA8EC1C], 1); /*0x6687bf*/
  }
  while ( MEMORY[0xA8E328] ) /*0x6687d2*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E31C] ) /*0x6687d9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E31C] + 32))(*(_DWORD *)MEMORY[0xA8E31C], 1); /*0x6687e3*/
  }
  while ( MEMORY[0xA8E358] ) /*0x6687f6*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E34C] ) /*0x6687fd*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E34C] + 32))(*(_DWORD *)MEMORY[0xA8E34C], 1); /*0x668807*/
  }
  while ( g_CrateCount ) /*0x66881a*/
  {
    if ( *(_DWORD *)g_UnitTypeCount2 ) /*0x668821*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_UnitTypeCount2 + 32))(*(_DWORD *)g_UnitTypeCount2, 1); /*0x66882b*/
  }
  while ( MEMORY[0xA8B228] ) /*0x66883e*/
  {
    if ( *(_DWORD *)MEMORY[0xA8B21C] ) /*0x668845*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8B21C] + 32))(*(_DWORD *)MEMORY[0xA8B21C], 1); /*0x66884f*/
  }
  while ( g_BulletTypeInitState ) /*0x668862*/
  {
    if ( *(_DWORD *)dword_A83C84 ) /*0x668869*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A83C84 + 32))(*(_DWORD *)dword_A83C84, 1); /*0x668873*/
  }
  while ( g_TriggerClassCount ) /*0x668886*/
  {
    if ( *(_DWORD *)g_TriggerTypeCount ) /*0x66888d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TriggerTypeCount + 32))(*(_DWORD *)g_TriggerTypeCount, 1); /*0x668897*/
  }
  while ( MEMORY[0xA8E340] ) /*0x6688aa*/
  {
    if ( *(_DWORD *)MEMORY[0xA8E334] ) /*0x6688b1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E334] + 32))(*(_DWORD *)MEMORY[0xA8E334], 1); /*0x6688bb*/
  }
  while ( MEMORY[0x8B4160] ) /*0x6688ce*/
  {
    if ( *(_DWORD *)MEMORY[0x8B4154] ) /*0x6688d5*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8B4154] + 32))(*(_DWORD *)MEMORY[0x8B4154], 1); /*0x6688df*/
  }
  while ( MEMORY[0x887578] ) /*0x6688f2*/
  {
    if ( *(_DWORD *)MEMORY[0x88756C] ) /*0x6688f9*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x88756C] + 32))(*(_DWORD *)MEMORY[0x88756C], 1); /*0x668903*/
  }
  while ( MEMORY[0x8874D0] ) /*0x668916*/
  {
    if ( *(_DWORD *)MEMORY[0x8874C4] ) /*0x66891d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8874C4] + 32))(*(_DWORD *)MEMORY[0x8874C4], 1); /*0x668927*/
  }
  while ( MEMORY[0xA8EB38] ) /*0x66893a*/
  {
    if ( *(_DWORD *)MEMORY[0xA8EB2C] ) /*0x668941*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8EB2C] + 32))(*(_DWORD *)MEMORY[0xA8EB2C], 1); /*0x66894b*/
  }
  while ( MEMORY[0xA83DA8] ) /*0x66895e*/
  {
    if ( *(_DWORD *)MEMORY[0xA83D9C] ) /*0x668965*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA83D9C] + 32))(*(_DWORD *)MEMORY[0xA83D9C], 1); /*0x66896f*/
  }
  while ( MEMORY[0xA83D78] ) /*0x668982*/
  {
    if ( *(_DWORD *)MEMORY[0xA83D6C] ) /*0x668989*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA83D6C] + 32))(*(_DWORD *)MEMORY[0xA83D6C], 1); /*0x668993*/
  }
  while ( HouseClass_Count ) /*0x6689a6*/
  {
    if ( *(_DWORD *)HouseClass_Array->__pad_0 ) /*0x6689ad*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)HouseClass_Array->__pad_0 + 32))( /*0x6689b7*/
        *(_DWORD *)HouseClass_Array->__pad_0,
        1);
  }
  while ( g_SuperWeaponTypeArray ) /*0x6689ca*/
  {
    if ( *(_DWORD *)g_SuperWeaponTypeCount ) /*0x6689d1*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_SuperWeaponTypeCount + 32))( /*0x6689db*/
        *(_DWORD *)g_SuperWeaponTypeCount,
        1);
  }
  if ( INIClass::BinarySearchSection((int)v28, (unsigned __int8 *)MEMORY[0x839E44]) ) /*0x6689f6*/
    *(_DWORD *)&this->__pad_C3C[2196] = INIClass::ReadInt_Overwrite( /*0x668a1e*/
                                          (int)v28,
                                          (unsigned __int8 *)MEMORY[0x839E44],
                                          (unsigned __int8 *)MEMORY[0x83A0BC],
                                          *(_DWORD *)&this->__pad_C3C[2196]);
  RulesClass::Addition(this); /*0x668a27*/
  v3 = (char *)this + 6260; /*0x668a2e*/
  v14 = 0; /*0x668a34*/
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
  CCFileClass::Construct(v25, aLangruleIni); /*0x668a61*/
  v7 = 0; /*0x668a66*/
  if ( CCFileClass::Open(v25, 0) == 1 ) /*0x668a74*/
  {
    v18[1] = 0; /*0x668a7e*/
    v18[2] = 0; /*0x668a82*/
    GenericNode::Constructor(v19); /*0x668a86*/
    GenericNode::Constructor(v20); /*0x668a8f*/
    LinkedList::Prepend(v19, (int)v20); /*0x668aa5*/
    v18[3] = &vt_List_INIClass_INISection; /*0x668ab6*/
    memset(&v20[3], 0, 12); /*0x668abe*/
    v21 = 0; /*0x668aca*/
    v22 = 0; /*0x668acf*/
    v23 = 0; /*0x668ad3*/
    v24 = 0; /*0x668ad7*/
    v18[0] = &CCINIClass_Vtable; /*0x668adc*/
    if ( CCINIClass::Load(v18, (int)v25, 1, 0) > 1 ) /*0x668aec*/
    {
      HashTable::DestroyHashTableINIClass(v18); /*0x668af2*/
      goto LABEL_99; /*0x668af7*/
    }
    RulesClass::Addition(v16); /*0x668b05*/
    HashTable::DestroyHashTableINIClass(v18); /*0x668b0e*/
  }
  if ( INIClass::BinarySearchSection((int)v28, (unsigned __int8 *)MEMORY[0x839E50]) ) /*0x668b1b*/
  {
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(v28, (unsigned __int8 *)MEMORY[0x839E50]); /*0x668b37*/
    if ( (int)KeyCount > 0 ) /*0x668b3b*/
    {
      do /*0x668b8a*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v28, (unsigned __int8 *)MEMORY[0x839E50], v7); /*0x668b47*/
        v14 = 0; /*0x668b60*/
        v15 = 0; /*0x668b6a*/
        Coord = INIClass::GetCoord( /*0x668b6f*/
                  (unsigned __int8 ***)v28,
                  (int)v17,
                  (unsigned __int8 *)MEMORY[0x839E50],
                  StringByIndex,
                  (unsigned __int8 *)&v14);
        v11 = v3; /*0x668b76*/
        ++v7; /*0x668b78*/
        v3 += 3; /*0x668b79*/
        v12 = *(_BYTE *)(Coord + 2); /*0x668b81*/
        *(_WORD *)v11 = *(_WORD *)Coord; /*0x668b84*/
        v11[2] = v12; /*0x668b87*/
      }
      while ( v7 < (int)KeyCount ); /*0x668b8a*/
    }
  }
  if ( MEMORY[0xA8B238][0] && MEMORY[0xA8B23C] ) /*0x668b9e*/
  {
    GameConfig::Constructor((char **)MEMORY[0xA8B23C]); /*0x668ba0*/
    RulesClass::Addition(v16); /*0x668baa*/
  }
LABEL_99:
  v25[0] = &vt_CCFileClass; /*0x668baf*/
  v27 = 0; /*0x668bbe*/
  Vector::Clear((int)v26); /*0x668bc5*/
  v25[0] = &off_7E1668; /*0x668bce*/
  return BufferIOFileClass::Dtor(v25); /*0x668bdb*/
}


// ==== 0x00668BF0  RulesClass::Addition  this=int  sig=csp ====
int __thiscall RulesClass_Addition(#381 *this)
{
  char *v1; // esi
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
  #381 *v33; // [esp+40h] [ebp+4h] BYREF

  v1 = (char *)v33; /*0x668bf6*/
  RulesClass::ReadColors(this); /*0x668bfe*/
  if ( (unsigned __int8)INIEntry::Exists(aColoradd, 0) ) /*0x668c0d*/
  {
    v3 = 0; /*0x668c24*/
    KeyCount = INIClass::GetKeyCount(v1, (unsigned __int8 *)aColoradd); /*0x668c26*/
    if ( KeyCount > 0 ) /*0x668c2c*/
    {
      v4 = (char *)this + 6260; /*0x668c2e*/
      do /*0x668c89*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aColoradd, v3); /*0x668c4d*/
        v5 = Palette::6BitTo16Bit(&v33, 0, 0, 0); /*0x668c51*/
        Coord = INIClass::GetCoord((unsigned __int8 ***)v1, (int)v29, (unsigned __int8 *)aColoradd, StringByIndex, v5); /*0x668c6a*/
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
  v10 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aCountries); /*0x668c98*/
  for ( i = 0; i < v10; ++i ) /*0x668c9e*/
  {
    v12 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aCountries, i); /*0x668cb6*/
    if ( INIClass::GetString( /*0x668cc4*/
           (unsigned __int8 ***)v1,
           (unsigned __int8 *)aCountries,
           v12,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WeaponTypeClass::Create(Destination); /*0x668cd1*/
    }
  }
  RulesClass::ReadDataList(this); /*0x668cde*/
  v13 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aOverlaytypes); /*0x668cf1*/
  for ( j = 0; j < v13; ++j ) /*0x668cf7*/
  {
    v15 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aOverlaytypes, j); /*0x668d0e*/
    if ( INIClass::GetString( /*0x668d1d*/
           (unsigned __int8 ***)v1,
           (unsigned __int8 *)aOverlaytypes,
           v15,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      BuildingTypeClass::FindOrCreate2(Destination); /*0x668d2a*/
    }
  }
  v16 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aSuperweapontyp); /*0x668d42*/
  for ( k = 0; k < v16; ++k ) /*0x668d48*/
  {
    v18 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aSuperweapontyp, k); /*0x668d60*/
    if ( INIClass::GetString( /*0x668d6f*/
           (unsigned __int8 ***)v1,
           (unsigned __int8 *)aSuperweapontyp,
           v18,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x668d7c*/
    }
  }
  v19 = INIClass::GetKeyCount(v1, (unsigned __int8 *)g_INI_Key_Warheads); /*0x668d92*/
  for ( m = 0; m < v19; ++m ) /*0x668d98*/
  {
    v21 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)g_INI_Key_Warheads, m); /*0x668dae*/
    if ( INIClass::GetString( /*0x668dbb*/
           (unsigned __int8 ***)v1,
           (unsigned __int8 *)g_INI_Key_Warheads,
           v21,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WarheadTypeClass::FindOrCreate(Destination); /*0x668dc8*/
    }
  }
  v22 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aSmudgetypes); /*0x668de0*/
  for ( n = 0; n < v22; ++n ) /*0x668de6*/
  {
    v24 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aSmudgetypes, n); /*0x668dfd*/
    if ( INIClass::GetString( /*0x668e0c*/
           (unsigned __int8 ***)v1,
           (unsigned __int8 *)aSmudgetypes,
           v24,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      FactoryClass::FindOrCreate(Destination); /*0x668e19*/
    }
  }
  v25 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aTerraintypes); /*0x668e31*/
  for ( ii = 0; ii < v25; ++ii ) /*0x668e37*/
  {
    v27 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aTerraintypes, ii); /*0x668e4f*/
    if ( INIClass::GetString( /*0x668e5e*/
           (unsigned __int8 ***)v1,
           (unsigned __int8 *)aTerraintypes,
           v27,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      TerrainTypeClass::FindOrCreate(Destination); /*0x668e6b*/
    }
  }
  RulesClass::LoadBuildingTypes(this); /*0x668e78*/
  CCINIClass::LoadBuildingTypes(this); /*0x668e80*/
  RulesClass::readRadiation(this); /*0x668e88*/
  RulesClass::readCrateRules(this); /*0x668e90*/
  RulesClass::LoadAnimTypes(this); /*0x668e98*/
  CCINIClass::LoadUnitTypes(this); /*0x668ea0*/
  RulesClass::readColors(this); /*0x668ea8*/
  CCINIClass::ReadBuildingSettings(this); /*0x668eb0*/
  RulesClass::readDifficulty(this); /*0x668eb8*/
  Dialog::ReadMultiplayerDialogSettings(this); /*0x668ec0*/
  RulesClass::ReadMultiplayerDefaults(this); /*0x668ec8*/
  RulesClass::ReadPowerupsSection(this); /*0x668ed0*/
  RulesClass::LoadSpeedTypes(this); /*0x668ed8*/
  RulesClass::ReadIQSection(this); /*0x668ee0*/
  RulesClass::LoadFromINI(this); /*0x668ee8*/
  SideClass::LoadAllFromINI(v1); /*0x668ef0*/
  INIClass::ReadDifficultyModifiers((#381 *)v1); /*0x668f02*/
  INIClass::ReadDifficultyModifiers((#381 *)v1); /*0x668f14*/
  INIClass::ReadDifficultyModifiers((#381 *)v1); /*0x668f26*/
  ReadCrateRulesINI(this); /*0x668f2e*/
  Rules::ReadCombatINI(this); /*0x668f36*/
  RulesClass::ReadCountryList(this); /*0x668f3e*/
  RulesClass::readAudioVisual(this); /*0x668f46*/
  RulesClass::readSpecialWeapons(this); /*0x668f4e*/
  Rules::ReadMiscINI(this); /*0x668f56*/
  RulesClass::LoadSpecialWeapons(this); /*0x668f5e*/
  SmallFunc_721D10(v1); /*0x668f65*/
  return SidebarClass::ReadButtonList(this); /*0x668f86*/
}


// ==== 0x00668FB0  RulesClass::LoadSpecialWeapons  this=AbstractClass  sig=csp ====
int __thiscall RulesClass::LoadSpecialWeapons(RulesClass *this)
{
  int result; // eax
  int SellBack; // ebx
  int v4; // eax
  int AIBaseSpacing; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int i; // esi
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  unsigned __int8 ***v19; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)MEMORY[0x839EB4]); /*0x668fc9*/
  if ( result ) /*0x668fd5*/
  {
    SellBack = this->?; /*0x668fe2*/
    if ( INIClass::GetString( /*0x668fff*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A144],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v4 = WarheadTypeClass::FindOrCreate(Destination); /*0x66900c*/
    }
    else
    {
      v4 = SellBack; /*0x669013*/
    }
    this->? = v4; /*0x669015*/
    AIBaseSpacing = this->?; /*0x669021*/
    if ( INIClass::GetString( /*0x66903e*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A134],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v6 = ObjectTypeClass::FindOrCreate(Destination); /*0x66904b*/
    }
    else
    {
      v6 = AIBaseSpacing; /*0x669052*/
    }
    v7 = this->?[0]; /*0x669054*/
    this->? = v6; /*0x669063*/
    if ( INIClass::GetString( /*0x66907c*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A128],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v8 = ObjectTypeClass::FindOrCreate(Destination); /*0x669089*/
    }
    else
    {
      v8 = v7; /*0x669090*/
    }
    v9 = this->?[1]; /*0x669092*/
    this->?[0] = v8; /*0x6690a1*/
    if ( INIClass::GetString( /*0x6690bb*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A118],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v10 = WarheadTypeClass::FindOrCreate(Destination); /*0x6690c8*/
    }
    else
    {
      v10 = v9; /*0x6690cf*/
    }
    this->?[1] = v10; /*0x6690d1*/
    v11 = this->?[2]; /*0x6690dd*/
    if ( INIClass::GetString( /*0x6690fa*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A100],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v12 = WarheadTypeClass::FindOrCreate(Destination); /*0x669107*/
    }
    else
    {
      v12 = v11; /*0x66910e*/
    }
    v13 = this->?[3]; /*0x669110*/
    this->?[2] = v12; /*0x66911f*/
    if ( INIClass::GetString( /*0x669138*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A0F0],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v14 = WarheadTypeClass::FindOrCreate(Destination); /*0x669145*/
    }
    else
    {
      v14 = v13; /*0x66914c*/
    }
    v15 = this->?[4]; /*0x66914e*/
    this->?[3] = v14; /*0x66915d*/
    if ( INIClass::GetString( /*0x669177*/
           v19,
           (unsigned __int8 *)MEMORY[0x839EB4],
           (unsigned __int8 *)MEMORY[0x83A0DC],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v16 = ObjectTypeClass::FindOrCreate(Destination); /*0x669184*/
    }
    else
    {
      v16 = v15; /*0x66918b*/
    }
    this->?[4] = v16; /*0x66918d*/
    result = MEMORY[0x8874D0]; /*0x669193*/
    for ( i = 0; i < MEMORY[0x8874D0]; ++i ) /*0x66919d*/
    {
      (*(void (__thiscall **)(_DWORD, unsigned __int8 ***))(**((_DWORD **)MEMORY[0x8874C4] + i) + 100))( /*0x6691aa*/
        *((_DWORD *)MEMORY[0x8874C4] + i),
        v19);
      result = MEMORY[0x8874D0]; /*0x6691ad*/
    }
    LOBYTE(result) = 1; /*0x6691b8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6691c5*/
  }
  return result; /*0x6691b7*/
}


// ==== 0x006691E0  Rules::ReadMiscINI  this=AbstractClass  sig=csp ====
int __thiscall Rules::ReadMiscINI(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int FlashFrameTime; // ebx
  AnimTypeClass *v5; // eax
  int CreateInfantrySound; // ebx
  AnimTypeClass *v7; // eax
  int ImpactLandSound; // ebx
  int Index; // eax
  int ChronoInSound; // ebx
  int v11; // eax
  int ChronoOutSound; // ebx
  int v13; // eax
  int SpySatActivationSound; // ebx
  int v15; // eax
  int SpySatDeactivationSound; // ebx
  int v17; // eax
  int UpgradeVeteranSound; // ebx
  int v19; // eax
  int UpgradeEliteSound; // ebx
  int v21; // eax
  int VoiceIFVRepair; // ebx
  int v23; // eax
  int SlavesFreeSound; // ebx
  int v25; // eax
  int SlaveMinerDeploySound; // ebx
  int v27; // eax
  int SlaveMinerUndeploySound; // ebx
  int v29; // eax
  int BunkerWallsUpSound; // ebx
  int v31; // eax
  int MasterMindOverloadDeathSound; // ebx
  int v33; // eax
  int AirstrikeAttackVoice; // ebx
  int v35; // eax
  int MindClearedSound; // ebx
  int v37; // eax
  int EnterBioReactorSound; // ebx
  int v39; // eax
  int LeaveBioReactorSound; // ebx
  int v41; // eax
  int ActivateSound; // ebx
  int v43; // eax
  int DeactivateSound; // ebx
  int v45; // eax
  int SpyPlaneCamera; // ebx
  int v47; // eax
  int SpyPlaneCameraFrames; // ebx
  int v49; // eax
  void *Dig; // ebx
  void *v51; // eax
  void *IonBlast; // ebx
  void *v53; // eax
  void *IonBeam; // ebx
  void *v55; // eax
  int v56; // ebx
  int v57; // eax
  int ParadropRadius; // ebx
  int v59; // eax
  int v60; // ebx
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  int v64; // ebx
  int v65; // eax
  int v66; // ebx
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int EnterGrinderSound; // ebx
  int v71; // eax
  int LeaveGrinderSound; // ebx
  int v73; // eax
  int AirstrikeAbortSound; // ebx
  int v75; // eax
  int PsychicDominatorActivateSound; // ebx
  int v77; // eax
  int GeneticMutatorActivateSound; // ebx
  int v79; // eax
  int PsychicRevealActivateSound; // ebx
  int v81; // eax
  int YuriMindControlSound; // ebx
  int v83; // eax
  int TiberiumStrength; // ebx
  int v85; // eax
  float MinLowPowerProductionSpeed; // ebx
  float v87; // eax
  float MaxLowPowerProductionSpeed; // ebx
  float v89; // eax
  float LowPowerPenaltyModifier; // ebx
  float v91; // eax
  float MultipleFactory; // ebx
  float v93; // eax
  int MaximumCheerRate; // ebx
  int v95; // eax
  int v96; // ebx
  int v97; // eax
  int v98; // ebx
  int v99; // eax
  int v100; // ebx
  int v101; // eax
  int v102; // ebx
  int v103; // eax
  int v104; // ebx
  int v105; // eax
  int v106; // ebx
  int v107; // eax
  int v108; // ebx
  int v109; // eax
  int v110; // ebx
  int v111; // eax
  int v112; // ebx
  int v113; // eax
  int v114; // ebx
  int v115; // eax
  int v116; // ebx
  int v117; // eax
  int v118; // ebx
  int v119; // eax
  int v120; // ebx
  int v121; // eax
  int v122; // ebx
  int v123; // eax
  int v124; // ebx
  int v125; // eax
  int v126; // ebx
  int v127; // eax
  int v128; // ebx
  int v129; // eax
  int v130; // ebx
  int v131; // eax
  int v132; // ebx
  int v133; // eax
  int v134; // ebx
  int v135; // eax
  int SinkingSound; // ebx
  int v137; // eax
  int BombTickingSound; // ebx
  int v139; // eax
  int BombAttachSound; // ebx
  int v141; // eax
  int BunkerWallsDownSound; // ebx
  int v143; // eax
  int RepairBridgeSound; // ebx
  int v145; // eax
  int v146; // ebx
  int v147; // eax
  int TiberiumExplosionDamage; // ebx
  int v149; // eax
  AnimTypeClass *v150; // ebx
  AnimTypeClass *v151; // eax
  AnimTypeClass *v152; // ebx
  AnimTypeClass *v153; // eax
  int v154; // ebx
  int v155; // eax
  int v156; // ebx
  int v157; // eax
  INIClass *aP3; // ecx
  int v159; // eax
  int BuildingSlam; // ebx
  int v161; // eax
  int RadarOn; // ebx
  int v163; // eax
  int RadarOff; // ebx
  int v165; // eax
  int MovieOn; // ebx
  int v167; // eax
  int GenericBeep; // ebx
  int v169; // eax
  int MovieOff; // ebx
  int v171; // eax
  int ScoldSound; // ebx
  int v173; // eax
  int TeslaCharge; // ebx
  int v175; // eax
  int TeslaZap; // ebx
  int v177; // eax
  int GenericClick; // ebx
  int v179; // eax
  int BuildingDamageSound; // ebx
  int v181; // eax
  CCINIClass *INIClassIntList; // ebx
  int v183; // ebx
  int v184; // eax
  int v185; // ebx
  int v186; // eax
  int v187; // ebx
  int v188; // eax
  int v189; // ebx
  int v190; // eax
  int v191; // ebx
  int v192; // eax
  int v193; // ebx
  int v194; // eax
  int ShellButtonSlideSound; // ebx
  int v196; // eax
  int v197; // ebx
  int v198; // eax
  int v199; // ebx
  int v200; // eax
  int v201; // ebx
  int v202; // eax
  int v203; // ebx
  int v204; // eax
  int v205; // ebx
  int v206; // eax
  int v207; // ebx
  int v208; // eax
  int v209; // ebx
  int v210; // eax
  int v211; // ebx
  int v212; // eax
  int v213; // ebx
  int v214; // eax
  int v215; // ebx
  int v216; // eax
  int v217; // ebx
  int v218; // eax
  CCINIClass *v219; // ebx
  int v220; // ebx
  int v221; // eax
  AbstractClass *i; // eax
  AbstractClass *j; // eax
  int v224; // ebx
  AnimTypeClass *v225; // eax
  int v226; // ebx
  AnimTypeClass *v227; // eax
  int v228; // eax
  int v229; // ebx
  AnimTypeClass *v230; // eax
  int v231; // ebx
  AnimTypeClass *v232; // eax
  CCINIClass *v233; // eax
  CCINIClass *v234; // eax
  CCINIClass *v236; // eax
  CCINIClass *v237; // eax
  CCINIClass *v238; // eax
  CCINIClass *v239; // edx
  CCINIClass *v240; // edx
  CCINIClass *v241; // edx
  CCINIClass *v242; // edx
  CCINIClass *v243; // edx
  VectorClass *ebp360; // ebp
  CCINIClass *v245; // eax
  CCINIClass *v246; // eax
  CCINIClass *v247; // eax
  CCINIClass *v248; // eax
  double Double_Overwrite; // st7
  double v249; // st7
  double v250; // st7
  int Coord; // eax
  int v252; // eax
  int v253; // eax
  int v254; // eax
  double v255; // st7
  int v256; // [esp-14h] [ebp-E8h] BYREF
  void *v257; // [esp-10h] [ebp-E4h]
  TypeList *v258; // [esp-Ch] [ebp-E0h]
  __int16 v259; // [esp-8h] [ebp-DCh]
  _BYTE v260[12]; // [esp-4h] [ebp-D8h]
  INIClass *aP3_8; // [esp+8h] [ebp-CCh]
  int aP3_12; // [esp+Ch] [ebp-C8h]
  CCINIClass aP1; // [esp+18h] [ebp-BCh] BYREF
  void **v264; // [esp+9Ch] [ebp-38h] BYREF
  void *Block; // [esp+A0h] [ebp-34h]
  char v266; // [esp+A9h] [ebp-2Bh]
  void **v267; // [esp+B8h] [ebp-1Ch] BYREF
  void *v268; // [esp+BCh] [ebp-18h]
  char v269; // [esp+C5h] [ebp-Fh]
  int v270; // [esp+C8h] [ebp-Ch]
  int v271; // [esp+CCh] [ebp-8h]
  int v272; // [esp+D0h] [ebp-4h]
  unsigned __int8 ***v273; // [esp+D8h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v273, (INIClass *)&stru_830620.__pad_579C[16620]);
  if ( result )
  {
    this->DetailMinFrameRateNormal = INIClass::ReadInt_Overwrite(
                                       (int)v273,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                       (CCINIClass *)&stru_830620.__pad_579C[20020],
                                       (INIClass *)this->DetailMinFrameRateNormal);
    this->DetailMinFrameRateMovie = INIClass::ReadInt_Overwrite(
                                      (int)v273,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                      (CCINIClass *)&stru_830620.__pad_579C[19996],
                                      (INIClass *)this->DetailMinFrameRateMovie);
    this->DetailBufferZoneWidth = INIClass::ReadInt_Overwrite(
                                    (int)v273,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                    (CCINIClass *)&stru_830620.__pad_579C[19972],
                                    (INIClass *)this->DetailBufferZoneWidth);
    this->PoseDir = INIClass::ReadInt_Overwrite(
                      (int)v273,
                      (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                      (CCINIClass *)&stru_830620.__pad_579C[19964],
                      (INIClass *)this->PoseDir);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (int)v273,
                      (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                      (CCINIClass *)&stru_830620.__pad_579C[19952],
                      (INIClass *)(this->DeployDir >> 5));
    *(_DWORD *)&v260[8] = 128;
    this->DeployDir = 32 * Int_Overwrite;
    FlashFrameTime = this->FlashFrameTime;
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[19940],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v5 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v5 = (AnimTypeClass *)FlashFrameTime;
    }
    this->FlashFrameTime = (int)v5;
    this->RadarCombatFlashTime = INIClass::ReadInt_Overwrite(
                                   (int)v273,
                                   (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                   (CCINIClass *)&stru_830620.__pad_579C[19916],
                                   (INIClass *)this->RadarCombatFlashTime);
    CreateInfantrySound = this->CreateInfantrySound;
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[19904],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           128) )
    {
      v7 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v7 = (AnimTypeClass *)CreateInfantrySound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->CreateInfantrySound = (int)v7;
    ImpactLandSound = this->ImpactLandSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19892],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (Index = VocClass::FindIndex(aP1.headNode), Index == -1) )
    {
      Index = ImpactLandSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ImpactLandSound = Index;
    ChronoInSound = this->ChronoInSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19872],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v11 = VocClass::FindIndex(aP1.headNode), v11 == -1) )
    {
      v11 = ChronoInSound;
    }
    this->ChronoInSound = v11;
    ChronoOutSound = this->ChronoOutSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19856],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v13 = VocClass::FindIndex(aP1.headNode), v13 == -1) )
    {
      v13 = ChronoOutSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ChronoOutSound = v13;
    SpySatActivationSound = this->SpySatActivationSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19844],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v15 = VocClass::FindIndex(aP1.headNode), v15 == -1) )
    {
      v15 = SpySatActivationSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SpySatActivationSound = v15;
    SpySatDeactivationSound = this->SpySatDeactivationSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19828],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v17 = VocClass::FindIndex(aP1.headNode), v17 == -1) )
    {
      v17 = SpySatDeactivationSound;
    }
    this->SpySatDeactivationSound = v17;
    UpgradeVeteranSound = this->UpgradeVeteranSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19812],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v19 = VocClass::FindIndex(aP1.headNode), v19 == -1) )
    {
      v19 = UpgradeVeteranSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->UpgradeVeteranSound = v19;
    UpgradeEliteSound = this->UpgradeEliteSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19796],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v21 = VocClass::FindIndex(aP1.headNode), v21 == -1) )
    {
      v21 = UpgradeEliteSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->UpgradeEliteSound = v21;
    VoiceIFVRepair = this->VoiceIFVRepair;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19780],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v23 = VocClass::FindIndex(aP1.headNode), v23 == -1) )
    {
      v23 = VoiceIFVRepair;
    }
    this->VoiceIFVRepair = v23;
    SlavesFreeSound = this->SlavesFreeSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19760],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v25 = VocClass::FindIndex(aP1.headNode), v25 == -1) )
    {
      v25 = SlavesFreeSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SlavesFreeSound = v25;
    SlaveMinerDeploySound = this->SlaveMinerDeploySound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19740],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v27 = VocClass::FindIndex(aP1.headNode), v27 == -1) )
    {
      v27 = SlaveMinerDeploySound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SlaveMinerDeploySound = v27;
    SlaveMinerUndeploySound = this->SlaveMinerUndeploySound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19720],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v29 = VocClass::FindIndex(aP1.headNode), v29 == -1) )
    {
      v29 = SlaveMinerUndeploySound;
    }
    this->SlaveMinerUndeploySound = v29;
    BunkerWallsUpSound = this->BunkerWallsUpSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19704],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v31 = VocClass::FindIndex(aP1.headNode), v31 == -1) )
    {
      v31 = BunkerWallsUpSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BunkerWallsUpSound = v31;
    MasterMindOverloadDeathSound = this->MasterMindOverloadDeathSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19692],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v33 = VocClass::FindIndex(aP1.headNode), v33 == -1) )
    {
      v33 = MasterMindOverloadDeathSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MasterMindOverloadDeathSound = v33;
    AirstrikeAttackVoice = this->AirstrikeAttackVoice;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19672],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v35 = VocClass::FindIndex(aP1.headNode), v35 == -1) )
    {
      v35 = AirstrikeAttackVoice;
    }
    this->AirstrikeAttackVoice = v35;
    MindClearedSound = this->MindClearedSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19648],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v37 = VocClass::FindIndex(aP1.headNode), v37 == -1) )
    {
      v37 = MindClearedSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MindClearedSound = v37;
    EnterBioReactorSound = this->EnterBioReactorSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19624],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v39 = VocClass::FindIndex(aP1.headNode), v39 == -1) )
    {
      v39 = EnterBioReactorSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->EnterBioReactorSound = v39;
    LeaveBioReactorSound = this->LeaveBioReactorSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19608],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v41 = VocClass::FindIndex(aP1.headNode), v41 == -1) )
    {
      v41 = LeaveBioReactorSound;
    }
    this->LeaveBioReactorSound = v41;
    ActivateSound = this->ActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19588],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v43 = VocClass::FindIndex(aP1.headNode), v43 == -1) )
    {
      v43 = ActivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ActivateSound = v43;
    DeactivateSound = this->DeactivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19572],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v45 = VocClass::FindIndex(aP1.headNode), v45 == -1) )
    {
      v45 = DeactivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->DeactivateSound = v45;
    SpyPlaneCamera = this->SpyPlaneCamera;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19552],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v47 = VocClass::FindIndex(aP1.headNode), v47 == -1) )
    {
      v47 = SpyPlaneCamera;
    }
    this->SpyPlaneCamera = v47;
    SpyPlaneCameraFrames = this->SpyPlaneCameraFrames;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19536],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v49 = VocClass::FindIndex(aP1.headNode), v49 == -1) )
    {
      v49 = SpyPlaneCameraFrames;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SpyPlaneCameraFrames = v49;
    Dig = this->Dig;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19520],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v51 = (void *)VocClass::FindIndex(aP1.headNode), v51 == (void *)-1) )
    {
      v51 = Dig;
    }
    *(_DWORD *)&v260[8] = 128;
    this->Dig = v51;
    IonBlast = this->IonBlast;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19500],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v53 = (void *)VocClass::FindIndex(aP1.headNode), v53 == (void *)-1) )
    {
      v53 = IonBlast;
    }
    this->IonBlast = v53;
    IonBeam = this->IonBeam;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19480],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v55 = (void *)VocClass::FindIndex(aP1.headNode), v55 == (void *)-1) )
    {
      v55 = IonBeam;
    }
    *(_DWORD *)&v260[8] = 128;
    this->IonBeam = v55;
    v56 = this->DamageFireTypes[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19464],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v57 = VocClass::FindIndex(aP1.headNode), v57 == -1) )
    {
      v57 = v56;
    }
    *(_DWORD *)&v260[8] = 128;
    this->DamageFireTypes[0] = v57;
    ParadropRadius = this->ParadropRadius;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19448],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v59 = VocClass::FindIndex(aP1.headNode), v59 == -1) )
    {
      v59 = ParadropRadius;
    }
    this->ParadropRadius = v59;
    v60 = this->ConditionRedSparkingProbability[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19432],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v61 = VocClass::FindIndex(aP1.headNode), v61 == -1) )
    {
      v61 = v60;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ConditionRedSparkingProbability[1] = v61;
    v62 = this->ConditionYellowSparkingProbability[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19416],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v63 = VocClass::FindIndex(aP1.headNode), v63 == -1) )
    {
      v63 = v62;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ConditionYellowSparkingProbability[0] = v63;
    v64 = this->ZoomInFactor[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19396],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v65 = VocClass::FindIndex(aP1.headNode), v65 == -1) )
    {
      v65 = v64;
    }
    this->ZoomInFactor[0] = v65;
    v66 = this->ZoomInFactor[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19380],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v67 = VocClass::FindIndex(aP1.headNode), v67 == -1) )
    {
      v67 = v66;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ZoomInFactor[1] = v67;
    v68 = this->ConditionRedSparkingProbability[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19356],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v69 = VocClass::FindIndex(aP1.headNode), v69 == -1) )
    {
      v69 = v68;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ConditionRedSparkingProbability[0] = v69;
    EnterGrinderSound = this->EnterGrinderSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19328],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v71 = VocClass::FindIndex(aP1.headNode), v71 == -1) )
    {
      v71 = EnterGrinderSound;
    }
    this->EnterGrinderSound = v71;
    LeaveGrinderSound = this->LeaveGrinderSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19308],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v73 = VocClass::FindIndex(aP1.headNode), v73 == -1) )
    {
      v73 = LeaveGrinderSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LeaveGrinderSound = v73;
    AirstrikeAbortSound = this->AirstrikeAbortSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19288],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v75 = VocClass::FindIndex(aP1.headNode), v75 == -1) )
    {
      v75 = AirstrikeAbortSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->AirstrikeAbortSound = v75;
    PsychicDominatorActivateSound = this->PsychicDominatorActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19264],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v77 = VocClass::FindIndex(aP1.headNode), v77 == -1) )
    {
      v77 = PsychicDominatorActivateSound;
    }
    this->PsychicDominatorActivateSound = v77;
    GeneticMutatorActivateSound = this->GeneticMutatorActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19240],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v79 = VocClass::FindIndex(aP1.headNode), v79 == -1) )
    {
      v79 = GeneticMutatorActivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->GeneticMutatorActivateSound = v79;
    PsychicRevealActivateSound = this->PsychicRevealActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19216],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v81 = VocClass::FindIndex(aP1.headNode), v81 == -1) )
    {
      v81 = PsychicRevealActivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->PsychicRevealActivateSound = v81;
    YuriMindControlSound = this->YuriMindControlSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19192],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v83 = VocClass::FindIndex(aP1.headNode), v83 == -1) )
    {
      v83 = YuriMindControlSound;
    }
    this->YuriMindControlSound = v83;
    TiberiumStrength = this->TiberiumStrength;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19172],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v85 = VocClass::FindIndex(aP1.headNode), v85 == -1) )
    {
      v85 = TiberiumStrength;
    }
    *(_DWORD *)&v260[8] = 128;
    this->TiberiumStrength = v85;
    MinLowPowerProductionSpeed = this->MinLowPowerProductionSpeed;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19152],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v87 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v87 == NAN) )
    {
      v87 = MinLowPowerProductionSpeed;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MinLowPowerProductionSpeed = v87;
    MaxLowPowerProductionSpeed = this->MaxLowPowerProductionSpeed;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19136],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v89 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v89 == NAN) )
    {
      v89 = MaxLowPowerProductionSpeed;
    }
    this->MaxLowPowerProductionSpeed = v89;
    LowPowerPenaltyModifier = this->LowPowerPenaltyModifier;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19120],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v91 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v91 == NAN) )
    {
      v91 = LowPowerPenaltyModifier;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LowPowerPenaltyModifier = v91;
    MultipleFactory = this->MultipleFactory;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19096],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v93 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v93 == NAN) )
    {
      v93 = MultipleFactory;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MultipleFactory = v93;
    MaximumCheerRate = this->MaximumCheerRate;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19072],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v95 = VocClass::FindIndex(aP1.headNode), v95 == -1) )
    {
      v95 = MaximumCheerRate;
    }
    this->MaximumCheerRate = v95;
    v96 = *(_DWORD *)this->__pad_240;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19052],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v97 = VocClass::FindIndex(aP1.headNode), v97 == -1) )
    {
      v97 = v96;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)this->__pad_240 = v97;
    v98 = *(_DWORD *)&this->__pad_240[4];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19028],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v99 = VocClass::FindIndex(aP1.headNode), v99 == -1) )
    {
      v99 = v98;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[4] = v99;
    v100 = *(_DWORD *)&this->__pad_240[8];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[19008],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v101 = VocClass::FindIndex(aP1.headNode), v101 == -1) )
    {
      v101 = v100;
    }
    *(_DWORD *)&this->__pad_240[8] = v101;
    v102 = *(_DWORD *)&this->__pad_240[12];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18976],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v103 = VocClass::FindIndex(aP1.headNode), v103 == -1) )
    {
      v103 = v102;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[12] = v103;
    v104 = *(_DWORD *)&this->__pad_240[16];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18948],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v105 = VocClass::FindIndex(aP1.headNode), v105 == -1) )
    {
      v105 = v104;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[16] = v105;
    v106 = *(_DWORD *)&this->__pad_240[20];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18920],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v107 = VocClass::FindIndex(aP1.headNode), v107 == -1) )
    {
      v107 = v106;
    }
    *(_DWORD *)&this->__pad_240[20] = v107;
    v108 = *(_DWORD *)&this->__pad_240[24];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18888],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v109 = VocClass::FindIndex(aP1.headNode), v109 == -1) )
    {
      v109 = v108;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[24] = v109;
    v110 = *(_DWORD *)&this->__pad_240[28];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18868],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v111 = VocClass::FindIndex(aP1.headNode), v111 == -1) )
    {
      v111 = v110;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[28] = v111;
    v112 = *(_DWORD *)&this->__pad_240[32];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18844],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v113 = VocClass::FindIndex(aP1.headNode), v113 == -1) )
    {
      v113 = v112;
    }
    *(_DWORD *)&this->__pad_240[32] = v113;
    v114 = *(_DWORD *)&this->__pad_240[36];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18824],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v115 = VocClass::FindIndex(aP1.headNode), v115 == -1) )
    {
      v115 = v114;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[36] = v115;
    v116 = *(_DWORD *)&this->__pad_240[40];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18804],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v117 = VocClass::FindIndex(aP1.headNode), v117 == -1) )
    {
      v117 = v116;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[40] = v117;
    v118 = *(_DWORD *)&this->__pad_240[44];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18784],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v119 = VocClass::FindIndex(aP1.headNode), v119 == -1) )
    {
      v119 = v118;
    }
    *(_DWORD *)&this->__pad_240[44] = v119;
    v120 = *(_DWORD *)&this->__pad_240[48];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18760],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v121 = VocClass::FindIndex(aP1.headNode), v121 == -1) )
    {
      v121 = v120;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[48] = v121;
    v122 = *(_DWORD *)&this->__pad_240[52];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18736],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v123 = VocClass::FindIndex(aP1.headNode), v123 == -1) )
    {
      v123 = v122;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[52] = v123;
    v124 = *(_DWORD *)&this->__pad_240[56];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18720],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v125 = VocClass::FindIndex(aP1.headNode), v125 == -1) )
    {
      v125 = v124;
    }
    *(_DWORD *)&this->__pad_240[56] = v125;
    v126 = *(_DWORD *)&this->__pad_240[60];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18704],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v127 = VocClass::FindIndex(aP1.headNode), v127 == -1) )
    {
      v127 = v126;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[60] = v127;
    v128 = *(_DWORD *)&this->__pad_240[64];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18688],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v129 = VocClass::FindIndex(aP1.headNode), v129 == -1) )
    {
      v129 = v128;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[64] = v129;
    v130 = *(_DWORD *)&this->__pad_240[68];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18660],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v131 = VocClass::FindIndex(aP1.headNode), v131 == -1) )
    {
      v131 = v130;
    }
    *(_DWORD *)&this->__pad_240[68] = v131;
    v132 = *(_DWORD *)&this->__pad_240[72];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18632],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v133 = VocClass::FindIndex(aP1.headNode), v133 == -1) )
    {
      v133 = v132;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[72] = v133;
    v134 = *(_DWORD *)&this->__pad_240[76];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18612],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v135 = VocClass::FindIndex(aP1.headNode), v135 == -1) )
    {
      v135 = v134;
    }
    *(_DWORD *)&this->__pad_240[76] = v135;
    *(_DWORD *)&this->__pad_240[80] = INIClass::ReadInt_Overwrite(
                                        (int)v273,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                        (CCINIClass *)&stru_830620.__pad_579C[18588],
                                        *(INIClass **)&this->__pad_240[80]);
    SinkingSound = this->SinkingSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            aCreateunitsoun,
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v137 = VocClass::FindIndex(aP1.headNode), v137 == -1) )
    {
      v137 = SinkingSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SinkingSound = v137;
    BombTickingSound = this->BombTickingSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18568],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v139 = VocClass::FindIndex(aP1.headNode), v139 == -1) )
    {
      v139 = BombTickingSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BombTickingSound = v139;
    BombAttachSound = this->BombAttachSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18548],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v141 = VocClass::FindIndex(aP1.headNode), v141 == -1) )
    {
      v141 = BombAttachSound;
    }
    this->BombAttachSound = v141;
    BunkerWallsDownSound = this->BunkerWallsDownSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18528],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v143 = VocClass::FindIndex(aP1.headNode), v143 == -1) )
    {
      v143 = BunkerWallsDownSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BunkerWallsDownSound = v143;
    RepairBridgeSound = this->RepairBridgeSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18500],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v145 = VocClass::FindIndex(aP1.headNode), v145 == -1) )
    {
      v145 = RepairBridgeSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->RepairBridgeSound = v145;
    v146 = this->ConditionYellowSparkingProbability[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18476],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v147 = VocClass::FindIndex(aP1.headNode), v147 == -1) )
    {
      v147 = v146;
    }
    this->ConditionYellowSparkingProbability[1] = v147;
    TiberiumExplosionDamage = this->TiberiumExplosionDamage;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18452],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v149 = VocClass::FindIndex(aP1.headNode), v149 == -1) )
    {
      v149 = TiberiumExplosionDamage;
    }
    *(_DWORD *)&v260[8] = 128;
    this->TiberiumExplosionDamage = v149;
    v150 = *(AnimTypeClass **)&this->__pad_240[84];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[18448],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v151 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v151 = v150;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[84] = v151;
    v152 = *(AnimTypeClass **)&this->__pad_240[276];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[18432],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v153 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v153 = v152;
    }
    *(_DWORD *)&this->__pad_240[276] = v153;
    v154 = *(_DWORD *)&this->__pad_240[452];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18424],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v155 = VocClass::FindIndex(aP1.headNode), v155 == -1) )
    {
      v155 = v154;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[452] = v155;
    v156 = *(_DWORD *)&this->__pad_240[456];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18412],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v157 = VocClass::FindIndex(aP1.headNode), v157 == -1) )
    {
      v157 = v156;
    }
    *(_DWORD *)&this->__pad_240[456] = v157;
    LOBYTE(this->ElevationBonusCap[1]) = INIClass::ReadBool_Overwrite(
                                           (int)v273,
                                           (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                           (CCINIClass *)&stru_830620.__pad_579C[18400],
                                           this->ElevationBonusCap[1]);
    aP3 = (INIClass *)this->ScrollMultiplier[0];
    *(_DWORD *)&v260[8] = this->ScrollMultiplier[1];
    *(double *)this->ScrollMultiplier = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620.__pad_579C[16620],
                                          (unsigned __int8 *)&stru_830620.__pad_579C[18380],
                                          aP3);
    v159 = INIClass::ReadInt_Overwrite(
             (int)v273,
             (unsigned __int8 *)&stru_830620.__pad_579C[16620],
             (CCINIClass *)&stru_830620.__pad_579C[18368],
             (INIClass *)this->ShakeScreen);
    *(_DWORD *)&v260[8] = 128;
    this->ShakeScreen = v159;
    BuildingSlam = this->BuildingSlam;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18356],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v161 = VocClass::FindIndex(aP1.headNode), v161 == -1) )
    {
      v161 = BuildingSlam;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BuildingSlam = v161;
    RadarOn = this->RadarOn;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18344],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v163 = VocClass::FindIndex(aP1.headNode), v163 == -1) )
    {
      v163 = RadarOn;
    }
    this->RadarOn = v163;
    RadarOff = this->RadarOff;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18332],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v165 = VocClass::FindIndex(aP1.headNode), v165 == -1) )
    {
      v165 = RadarOff;
    }
    *(_DWORD *)&v260[8] = 128;
    this->RadarOff = v165;
    MovieOn = this->MovieOn;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18316],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v167 = VocClass::FindIndex(aP1.headNode), v167 == -1) )
    {
      v167 = MovieOn;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MovieOn = v167;
    GenericBeep = this->GenericBeep;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18296],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v169 = VocClass::FindIndex(aP1.headNode), v169 == -1) )
    {
      v169 = GenericBeep;
    }
    this->GenericBeep = v169;
    MovieOff = this->MovieOff;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18284],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v171 = VocClass::FindIndex(aP1.headNode), v171 == -1) )
    {
      v171 = MovieOff;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MovieOff = v171;
    ScoldSound = this->ScoldSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18268],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v173 = VocClass::FindIndex(aP1.headNode), v173 == -1) )
    {
      v173 = ScoldSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ScoldSound = v173;
    TeslaCharge = this->TeslaCharge;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18256],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v175 = VocClass::FindIndex(aP1.headNode), v175 == -1) )
    {
      v175 = TeslaCharge;
    }
    this->TeslaCharge = v175;
    TeslaZap = this->TeslaZap;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18244],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v177 = VocClass::FindIndex(aP1.headNode), v177 == -1) )
    {
      v177 = TeslaZap;
    }
    *(_DWORD *)&v260[8] = 128;
    this->TeslaZap = v177;
    GenericClick = this->GenericClick;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18228],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v179 = VocClass::FindIndex(aP1.headNode), v179 == -1) )
    {
      v179 = GenericClick;
    }
    *(_DWORD *)&v260[8] = 128;
    this->GenericClick = v179;
    BuildingDamageSound = this->BuildingDamageSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            aConstruction,
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v181 = VocClass::FindIndex(aP1.headNode), v181 == -1) )
    {
      v181 = BuildingDamageSound;
    }
    this->BuildingDamageSound = v181;
    IntVector::Copy(&v256, (VectorClass *)&this->HealCrateSound);
    INIClassIntList = (CCINIClass *)GetINIClassIntList(
                                      (int)&v264,
                                      v273,
                                      (INIClass *)&stru_830620.__pad_579C[16620],
                                      (unsigned __int8 *)&stru_830620.__pad_579C[18216],
                                      (void **)&vt_TypeList_int,
                                      v257,
                                      (int)v258,
                                      v259,
                                      this->ScatterSound,
                                      this->DeploySound,
                                      *(int *)&v260[8]);
    TypeList::Copy(&this->HealCrateSound, INIClassIntList);
    this->ScatterSound = INIClassIntList->sectionHead[0];
    this->DeploySound = INIClassIntList->sectionHead[1];
    this->StormSound = INIClassIntList->sectionHead[2];
    v264 = (void **)&vt_VectorClass_int;
    if ( Block && v266 )
      __3_YAXPAX_Z(Block);
    v183 = this->LightningSounds[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18196],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v184 = VocClass::FindIndex(aP1.headNode), v184 == -1) )
    {
      v184 = v183;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[0] = v184;
    v185 = this->LightningSounds[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18180],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v186 = VocClass::FindIndex(aP1.headNode), v186 == -1) )
    {
      v186 = v185;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[1] = v186;
    v187 = this->LightningSounds[2];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18172],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v188 = VocClass::FindIndex(aP1.headNode), v188 == -1) )
    {
      v188 = v187;
    }
    this->LightningSounds[2] = v188;
    v189 = this->LightningSounds[3];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18160],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v190 = VocClass::FindIndex(aP1.headNode), v190 == -1) )
    {
      v190 = v189;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[3] = v190;
    v191 = this->LightningSounds[4];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18152],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v192 = VocClass::FindIndex(aP1.headNode), v192 == -1) )
    {
      v192 = v191;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[4] = v192;
    v193 = this->LightningSounds[5];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18140],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v194 = VocClass::FindIndex(aP1.headNode), v194 == -1) )
    {
      v194 = v193;
    }
    this->LightningSounds[5] = v194;
    ShellButtonSlideSound = this->ShellButtonSlideSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18128],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v196 = VocClass::FindIndex(aP1.headNode), v196 == -1) )
    {
      v196 = ShellButtonSlideSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ShellButtonSlideSound = v196;
    v197 = *(_DWORD *)this->__pad_704;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18116],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v198 = VocClass::FindIndex(aP1.headNode), v198 == -1) )
    {
      v198 = v197;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)this->__pad_704 = v198;
    v199 = *(_DWORD *)&this->__pad_704[4];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18104],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v200 = VocClass::FindIndex(aP1.headNode), v200 == -1) )
    {
      v200 = v199;
    }
    *(_DWORD *)&this->__pad_704[4] = v200;
    v201 = *(_DWORD *)&this->__pad_704[16];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18084],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v202 = VocClass::FindIndex(aP1.headNode), v202 == -1) )
    {
      v202 = v201;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[16] = v202;
    v203 = *(_DWORD *)&this->__pad_704[24];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18072],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v204 = VocClass::FindIndex(aP1.headNode), v204 == -1) )
    {
      v204 = v203;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[24] = v204;
    v205 = *(_DWORD *)&this->__pad_704[8];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18056],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v206 = VocClass::FindIndex(aP1.headNode), v206 == -1) )
    {
      v206 = v205;
    }
    *(_DWORD *)&this->__pad_704[8] = v206;
    v207 = *(_DWORD *)&this->__pad_704[12];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18044],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v208 = VocClass::FindIndex(aP1.headNode), v208 == -1) )
    {
      v208 = v207;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[12] = v208;
    v209 = this->NodBaseDefenseCoefficient[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18028],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v210 = VocClass::FindIndex(aP1.headNode), v210 == -1) )
    {
      v210 = v209;
    }
    *(_DWORD *)&v260[8] = 128;
    this->NodBaseDefenseCoefficient[0] = v210;
    v211 = *(_DWORD *)&this->__pad_704[28];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            &unk_818404,
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v212 = VocClass::FindIndex(aP1.headNode), v212 == -1) )
    {
      v212 = v211;
    }
    *(_DWORD *)&this->__pad_704[28] = v212;
    v213 = *(_DWORD *)&this->__pad_704[32];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18016],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v214 = VocClass::FindIndex(aP1.headNode), v214 == -1) )
    {
      v214 = v213;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[32] = v214;
    v215 = *(_DWORD *)&this->__pad_704[36];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[18000],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v216 = VocClass::FindIndex(aP1.headNode), v216 == -1) )
    {
      v216 = v215;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[36] = v216;
    v217 = *(_DWORD *)&this->__pad_704[44];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[17988],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v218 = VocClass::FindIndex(aP1.headNode), v218 == -1) )
    {
      v218 = v217;
    }
    *(_DWORD *)&this->__pad_704[44] = v218;
    IntVector::Copy(&v256, (VectorClass *)&this->__pad_704[48]);
    v219 = (CCINIClass *)GetINIClassIntList(
                           (int)&v264,
                           v273,
                           (INIClass *)&stru_830620.__pad_579C[16620],
                           (unsigned __int8 *)&stru_830620.__pad_579C[17972],
                           (void **)&vt_TypeList_int,
                           v257,
                           (int)v258,
                           v259,
                           *(_DWORD *)&this->__pad_704[64],
                           *(_DWORD *)&this->__pad_704[68],
                           *(int *)&v260[8]);
    TypeList::Copy(&this->__pad_704[48], v219);
    *(_DWORD *)&this->__pad_704[64] = v219->sectionHead[0];
    *(_DWORD *)&this->__pad_704[68] = v219->sectionHead[1];
    *(_DWORD *)&this->__pad_704[72] = v219->sectionHead[2];
    v264 = (void **)&vt_VectorClass_int;
    if ( Block && v266 )
      __3_YAXPAX_Z(Block);
    v220 = *(_DWORD *)&this->__pad_704[76];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620.__pad_579C[16620],
            (unsigned __int8 *)&stru_830620.__pad_579C[17948],
            (INIClass *)&stru_87C374.__pad_579C[33876],
            (INIClass *)aP1.headNode,
            128)
      || (v221 = VocClass::FindIndex(aP1.headNode), v221 == -1) )
    {
      v221 = v220;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[76] = v221;
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[17936],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v264, 0, 0);
      v264 = (void **)&vt_TypeList_AnimTypeClass_const;
      for ( i = (AbstractClass *)strtok((char *)aP1.headNode, (ObjectClass *)&stru_817F40.nextObject);
            i;
            i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i->__pad_0[0] )
          break;
        *(_DWORD *)aP1.__pad_0 = AnimTypeClass::FindOrCreate(i);
        if ( *(_DWORD *)aP1.__pad_0 )
          DynamicVector::Add_Alt4(&v264, (VectorClass *)&aP1);
      }
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&v264);
      v264 = (void **)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v264);
    }
    else
    {
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&this->Easy[17]);
    }
    VectorClass::CopyDefault(&this->Easy[17], (VectorClass *)&v267);
    this->Normal[1] = v270;
    this->Normal[2] = v271;
    this->Normal[3] = v272;
    v267 = (void **)&vt_VectorClass_AnimTypeClass_const;
    if ( v268 && v269 )
      __3_YAXPAX_Z(v268);
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[17928],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v264, 0, 0);
      v264 = (void **)&vt_TypeList_AnimTypeClass_const;
      for ( j = (AbstractClass *)strtok((char *)aP1.headNode, (ObjectClass *)&stru_817F40.nextObject);
            j;
            j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !j->__pad_0[0] )
          break;
        *(_DWORD *)aP1.__pad_0 = AnimTypeClass::FindOrCreate(j);
        if ( *(_DWORD *)aP1.__pad_0 )
          DynamicVector::Add_Alt4(&v264, (VectorClass *)&aP1);
      }
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&v264);
      v264 = (void **)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v264);
    }
    else
    {
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&this->Easy[10]);
    }
    InfantryTypeClass::CopyDataArray(&this->Easy[10], (DynamicVector *)&v267);
    this->Easy[16] = v272;
    v267 = (void **)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&v267);
    v224 = this->Normal[4];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[4432],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           128) )
    {
      v225 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v225 = (AnimTypeClass *)v224;
    }
    *(_DWORD *)&v260[8] = 128;
    this->Normal[4] = (int)v225;
    v226 = this->Normal[5];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[4432],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v227 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v227 = (AnimTypeClass *)v226;
    }
    this->Normal[5] = (int)v227;
    v228 = INIClass::ReadInt_Overwrite(
             (int)v273,
             (unsigned __int8 *)&stru_830620.__pad_579C[16620],
             (CCINIClass *)&stru_830620.__pad_579C[17912],
             (INIClass *)this->Normal[19]);
    *(_DWORD *)&v260[8] = 128;
    this->Normal[19] = v228;
    v229 = this->Normal[16];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[17900],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v230 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v230 = (AnimTypeClass *)v229;
    }
    *(_DWORD *)&v260[8] = 128;
    this->Normal[16] = (int)v230;
    v231 = this->Normal[17];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620.__pad_579C[16620],
           (unsigned __int8 *)&stru_830620.__pad_579C[17888],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v232 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v232 = (AnimTypeClass *)v231;
    }
    this->Normal[17] = (int)v232;
    HIBYTE(this->ElevationIncrementBonus[0]) = INIClass::ReadBool_Overwrite(
                                                 (int)v273,
                                                 (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                                 (CCINIClass *)&stru_830620.__pad_579C[17876],
                                                 HIBYTE(this->ElevationIncrementBonus[0]));
    this->Crush = 0;
    this->CrateRadius = 1072693248;
    v233 = (CCINIClass *)this->RefundPercent[0];
    *(_DWORD *)&v260[8] = this->RefundPercent[1];
    *(double *)this->RefundPercent = INIClass::ReadDouble_Overwrite(
                                       (int)v273,
                                       (INIClass *)&stru_830620.__pad_579C[16620],
                                       (unsigned __int8 *)&stru_830620.__pad_579C[17860],
                                       (INIClass *)v233);
    v234 = (CCINIClass *)this->HomingScatter;
    *(_DWORD *)&v260[8] = this->BallisticScatter;
    *(double *)&this->HomingScatter = INIClass::ReadDouble_Overwrite(
                                        (int)v273,
                                        (INIClass *)&stru_830620.__pad_579C[16620],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[17844],
                                        (INIClass *)v234);
    *(_DWORD *)&v260[8] = *(_DWORD *)&this->__pad_C3C[2176];
    *(_DWORD *)&v260[4] = &stru_830620.__pad_579C[17828];
    *(_DWORD *)v260 = &stru_830620.__pad_579C[16620];
    *(_DWORD *)&this->__pad_C3C[2176] = INIClass::ReadCoord(*(double *)v260, *(int *)&v260[8], aP3_8, aP3_12);
    BYTE2(this->ElevationIncrementBonus[0]) = INIClass::ReadBool_Overwrite(
                                                (int)v273,
                                                (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                                (CCINIClass *)&stru_830620.__pad_579C[17816],
                                                BYTE2(this->ElevationIncrementBonus[0]));
    this->RepairRate[0] = INIClass::ReadInt_Overwrite(
                            (int)v273,
                            (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                            (CCINIClass *)&stru_830620.__pad_579C[17808],
                            (INIClass *)this->RepairRate[0]);
    v236 = (CCINIClass *)this->BridgeStrength;
    *(_DWORD *)&v260[8] = this->BuildSpeed[0];
    *(double *)&this->BridgeStrength = INIClass::ReadDouble_Overwrite(
                                         (int)v273,
                                         (INIClass *)&stru_830620.__pad_579C[16620],
                                         (unsigned __int8 *)&stru_830620.__pad_579C[17788],
                                         (INIClass *)v236);
    v237 = *(CCINIClass **)&this->__pad_C3C[2180];
    *(_DWORD *)&v260[8] = *(_DWORD *)&this->__pad_C3C[2184];
    *(double *)&this->__pad_C3C[2180] = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620.__pad_579C[16620],
                                          (unsigned __int8 *)&stru_830620.__pad_579C[17772],
                                          (INIClass *)v237);
    v238 = (CCINIClass *)this->ForceShieldBlackoutDuration;
    *(_DWORD *)&v260[8] = this->ForceShieldPlayFadeSoundTime;
    *(double *)&this->ForceShieldBlackoutDuration = INIClass::ReadDouble_Overwrite(
                                                      (int)v273,
                                                      (INIClass *)&stru_830620.__pad_579C[16620],
                                                      (unsigned __int8 *)&stru_830620.__pad_579C[17760],
                                                      (INIClass *)v238);
    BYTE2(this->ElevationIncrementBonus[1]) = INIClass::ReadBool_Overwrite(
                                                (int)v273,
                                                (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                                (CCINIClass *)&stru_830620.__pad_579C[17744],
                                                BYTE2(this->ElevationIncrementBonus[1]));
    v239 = *(CCINIClass **)&this->__pad_C3C[2188];
    *(_DWORD *)&v260[8] = *(_DWORD *)&this->__pad_C3C[2192];
    *(double *)&this->__pad_C3C[2188] = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620.__pad_579C[16620],
                                          (unsigned __int8 *)&stru_830620.__pad_579C[17732],
                                          (INIClass *)v239);
    v240 = (CCINIClass *)this->ShroudRate[0];
    *(_DWORD *)&v260[8] = this->ShroudRate[1];
    *(double *)this->ShroudRate = INIClass::ReadDouble_Overwrite(
                                    (int)v273,
                                    (INIClass *)&stru_830620.__pad_579C[16620],
                                    (unsigned __int8 *)&stru_830620.__pad_579C[17720],
                                    (INIClass *)v240);
    v241 = (CCINIClass *)this->FogRate[0];
    *(_DWORD *)&v260[8] = this->FogRate[1];
    *(double *)this->FogRate = INIClass::ReadDouble_Overwrite(
                                 (int)v273,
                                 (INIClass *)&stru_830620.__pad_579C[16620],
                                 (unsigned __int8 *)&stru_830620.__pad_579C[17712],
                                 (INIClass *)v241);
    v242 = (CCINIClass *)this->VeinGrowthRate[0];
    *(_DWORD *)&v260[8] = this->VeinGrowthRate[1];
    *(double *)this->VeinGrowthRate = INIClass::ReadDouble_Overwrite(
                                        (int)v273,
                                        (INIClass *)&stru_830620.__pad_579C[16620],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[17696],
                                        (INIClass *)v242);
    v243 = (CCINIClass *)this->IceGrowthRate[0];
    *(_DWORD *)&v260[8] = this->IceGrowthRate[1];
    *(double *)this->IceGrowthRate = INIClass::ReadDouble_Overwrite(
                                       (int)v273,
                                       (INIClass *)&stru_830620.__pad_579C[16620],
                                       (unsigned __int8 *)&stru_830620.__pad_579C[17680],
                                       (INIClass *)v243);
    this->IceSolidifyFrameTime = INIClass::ReadInt_Overwrite(
                                   (int)v273,
                                   (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                   (CCINIClass *)&stru_830620.__pad_579C[17656],
                                   (INIClass *)this->IceSolidifyFrameTime);
    (*(void (__thiscall **)(int *))(this->VeteranROF[0] + 12))(this->VeteranROF);
    DynamicVectorClass::Copy(&v256, (DynamicVector *)this->VeteranROF);
    ebp360 = GetINIClassIntList(
               (int)&v264,
               v273,
               (INIClass *)&stru_830620.__pad_579C[16620],
               (unsigned __int8 *)&stru_830620.__pad_579C[17640],
               (void **)&vt_TypeList_int,
               v257,
               (int)v258,
               v259,
               *(int *)v260,
               *(int *)&v260[4],
               *(int *)&v260[8]);
    TypeList::Copy(this->VeteranROF, ebp360);
    this->CloakSound = (int)ebp360[1].vtable0;
    this->SellSound = (int)ebp360[1].Items;
    this->GameClosed = ebp360[1].Capacity;
    v264 = (void **)&vt_VectorClass_int;
    if ( Block )
    {
      if ( v266 )
        __3_YAXPAX_Z(Block);
    }
    v245 = (CCINIClass *)this->AmbientChangeRate[1];
    *(_DWORD *)&v260[8] = this->AmbientChangeStep[0];
    *(double *)&this->AmbientChangeRate[1] = INIClass::ReadDouble_Overwrite(
                                               (int)v273,
                                               (INIClass *)&stru_830620.__pad_579C[16620],
                                               (unsigned __int8 *)&stru_830620.__pad_579C[17620],
                                               (INIClass *)v245);
    v246 = (CCINIClass *)this->AmbientChangeStep[1];
    *(_DWORD *)&v260[8] = this->CrateRegen[0];
    *(double *)&this->AmbientChangeStep[1] = INIClass::ReadDouble_Overwrite(
                                               (int)v273,
                                               (INIClass *)&stru_830620.__pad_579C[16620],
                                               (unsigned __int8 *)&stru_830620.__pad_579C[17600],
                                               (INIClass *)v246);
    v247 = (CCINIClass *)this->RepairStep;
    *(_DWORD *)&v260[8] = this->RepairPercent[0];
    *(double *)&this->RepairStep = INIClass::ReadDouble_Overwrite(
                                     (int)v273,
                                     (INIClass *)&stru_830620.__pad_579C[16620],
                                     (unsigned __int8 *)&stru_830620.__pad_579C[17588],
                                     (INIClass *)v247);
    v248 = (CCINIClass *)this->TimerWarning[1];
    *(_DWORD *)&v260[8] = this->SpeakDelay[0];
    *(double *)&this->TimerWarning[1] = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620.__pad_579C[16620],
                                          (unsigned __int8 *)&stru_830620.__pad_579C[17572],
                                          (INIClass *)v248);
    *(_DWORD *)aP1.__pad_0 = this->RadTintFactor[1] / 1000;
    *(double *)&v260[4] = (double)*(int *)aP1.__pad_0;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
                         (int)v273,
                         (INIClass *)&stru_830620.__pad_579C[16620],
                         (unsigned __int8 *)&stru_830620.__pad_579C[17556],
                         *(INIClass **)&v260[4]);
    this->RadTintFactor[1] = Math::RoundToInt(Double_Overwrite * 1000.0);
    *(_DWORD *)aP1.__pad_0 = *(_DWORD *)this->RadColor / 1000;
    *(double *)&v260[4] = (double)*(int *)aP1.__pad_0;
    v249 = INIClass::ReadDouble_Overwrite(
             (int)v273,
             (INIClass *)&stru_830620.__pad_579C[16620],
             (unsigned __int8 *)&stru_830620.__pad_579C[17536],
             *(INIClass **)&v260[4]);
    *(_DWORD *)this->RadColor = Math::RoundToInt(v249 * 1000.0);
    *(_DWORD *)aP1.__pad_0 = (int)this->RadSiteWarhead / 1000;
    *(double *)&v260[4] = (double)*(int *)aP1.__pad_0;
    v250 = INIClass::ReadDouble_Overwrite(
             (int)v273,
             (INIClass *)&stru_830620.__pad_579C[16620],
             (unsigned __int8 *)&stru_830620.__pad_579C[17516],
             *(INIClass **)&v260[4]);
    this->RadSiteWarhead = (void *)Math::RoundToInt(v250 * 1000.0);
    Coord = INIClass::GetCoord(
              v273,
              &aP1,
              (INIClass *)&stru_830620.__pad_579C[16620],
              (Color *)&stru_830620.__pad_579C[17500],
              (Color *)this + 1560);
    this->q30C = *(_WORD *)Coord;
    *((_BYTE *)this + 6242) = *(_BYTE *)(Coord + 2);
    v252 = INIClass::GetCoord(
             v273,
             &aP1,
             (INIClass *)&stru_830620.__pad_579C[16620],
             (Color *)&stru_830620.__pad_579C[17476],
             (Color *)((char *)this + 6243));
    *(_WORD *)((char *)this + 6243) = *(_WORD *)v252;
    *((_BYTE *)this + 6245) = *(_BYTE *)(v252 + 2);
    v253 = INIClass::GetCoord(
             v273,
             &aP1,
             (INIClass *)&stru_830620.__pad_579C[16620],
             (Color *)&stru_830620.__pad_579C[17460],
             (Color *)((char *)this + 6246));
    *((_WORD *)this + 3123) = *(_WORD *)v253;
    *((_BYTE *)this + 6248) = *(_BYTE *)(v253 + 2);
    v254 = INIClass::GetCoord(
             v273,
             &aP1,
             (INIClass *)&stru_830620.__pad_579C[16620],
             (Color *)&stru_830620.__pad_579C[17444],
             (Color *)((char *)this + 6249));
    *(_WORD *)((char *)this + 6249) = *(_WORD *)v254;
    *((_BYTE *)this + 6251) = *(_BYTE *)(v254 + 2);
    this->q186C = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                 (CCINIClass *)&stru_830620.__pad_579C[17424],
                                 *((INIClass **)this + 1563));
    *((_DWORD *)this + 1577) = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                 (CCINIClass *)&stru_830620.__pad_579C[17404],
                                 *((INIClass **)this + 1577));
    this->q18A8 = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                 (CCINIClass *)&stru_830620.__pad_579C[17384],
                                 *((INIClass **)this + 1578));
    this->q18AC = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                 (CCINIClass *)&stru_830620.__pad_579C[17368],
                                 *((INIClass **)this + 1579));
    this->q62C = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620.__pad_579C[16620],
                                 (CCINIClass *)&stru_830620.__pad_579C[17348],
                                 *((INIClass **)this + 1580));
    *(double *)&v260[4] = *((float *)this + 1581);
    *((float *)this + 1581) = INIClass::ReadDouble_Overwrite(
                                (int)v273,
                                (INIClass *)&stru_830620.__pad_579C[16620],
                                (unsigned __int8 *)&stru_830620.__pad_579C[17320],
                                *(INIClass **)&v260[4]);
    v255 = *((float *)this + 1582);
    *(double *)&v260[4] = v255;
    *((float *)this + 1582) = INIClass::ReadDouble_Overwrite(
                                (int)v273,
                                (INIClass *)&stru_830620.__pad_579C[16620],
                                (unsigned __int8 *)&stru_830620.__pad_579C[17300],
                                (INIClass *)LODWORD(v255));
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}



// ==== 0x0066B900  ObjectClass::ReadCrateRulesINI  this=AbstractClass  sig=csp ====
int __thiscall ReadCrateRulesINI(RulesClass *this)
{
  INIClass *v1; // ebx
  int result; // eax
  int GUIBuildSound; // ebx
  OverlayTypeClass *v5; // eax
  int GUITabSound; // ebx
  OverlayTypeClass *v7; // eax
  int GUIOpenSound; // ebx
  OverlayTypeClass *v9; // eax
  int v10; // ebx
  int Index; // eax
  CCINIClass *v12; // edx
  int Int_Overwrite; // eax
  CCINIClass *v14; // ecx
  UnitTypeClass *v15; // ebx
  UnitTypeClass *Alt; // eax
  INIClass *v17; // ecx
  int StringValue; // eax
  CCINIClass *v21; // edx
  int v20; // eax
  CCINIClass *v23; // ecx
  double v22; // [esp-10h] [ebp-98h]
  INIClass *_FFFFFFFC; // [esp-4h] [ebp-8Ch]
  int v24; // [esp+0h] [ebp-88h]
  INIClass Destination[2]; // [esp+8h] [ebp-80h] BYREF
  unsigned __int8 ***v26; // [esp+8Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v26, (INIClass *)&stru_830620.__pad_579C[16608]); /*0x66b919*/
  if ( result ) /*0x66b925*/
  {
    _FFFFFFFC = v1; /*0x66b934*/
    this->FreeMCV = INIClass::ReadBool_Overwrite( /*0x66b943*/
                      (int)v26,
                      (unsigned __int8 *)&stru_830620.__pad_579C[16608],
                      (CCINIClass *)&stru_830620.__pad_579C[20232],
                      this->FreeMCV);
    GUIBuildSound = this->GUIBuildSound; /*0x66b94c*/
    if ( INIClass::GetString( /*0x66b969*/
           v26,
           (INIClass *)&stru_830620.__pad_579C[16608],
           (unsigned __int8 *)&stru_830620.__pad_579C[20216],
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      v5 = BuildingTypeClass::FindOrCreate2((ObjectClass *)Destination); /*0x66b976*/
    }
    else
    {
      v5 = (OverlayTypeClass *)GUIBuildSound; /*0x66b97d*/
    }
    GUITabSound = this->GUITabSound; /*0x66b97f*/
    this->GUIBuildSound = (int)v5; /*0x66b98e*/
    if ( INIClass::GetString( /*0x66b9a7*/
           v26,
           (INIClass *)&stru_830620.__pad_579C[16608],
           (unsigned __int8 *)&stru_830620.__pad_579C[20204],
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      v7 = BuildingTypeClass::FindOrCreate2((ObjectClass *)Destination); /*0x66b9b4*/
    }
    else
    {
      v7 = (OverlayTypeClass *)GUITabSound; /*0x66b9bb*/
    }
    GUIOpenSound = this->GUIOpenSound; /*0x66b9bd*/
    this->GUITabSound = (int)v7; /*0x66b9cc*/
    if ( INIClass::GetString( /*0x66b9e6*/
           v26,
           (INIClass *)&stru_830620.__pad_579C[16608],
           (unsigned __int8 *)&stru_830620.__pad_579C[20188],
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      v9 = BuildingTypeClass::FindOrCreate2((ObjectClass *)Destination); /*0x66b9f3*/
    }
    else
    {
      v9 = (OverlayTypeClass *)GUIOpenSound; /*0x66b9fa*/
    }
    this->GUIOpenSound = (int)v9; /*0x66b9fc*/
    v10 = *(_DWORD *)&this->__pad_704[20]; /*0x66ba08*/
    if ( !INIClass::GetString( /*0x66ba3a*/
            v26,
            (INIClass *)&stru_830620.__pad_579C[16608],
            (unsigned __int8 *)&stru_830620.__pad_579C[20172],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            Destination,
            128)
      || (Index = VocClass::FindIndex(Destination), Index == -1) )
    {
      Index = v10; /*0x66ba3c*/
    }
    v12 = *(CCINIClass **)&this->__pad_C3C[2100]; /*0x66ba3e*/
    *(_DWORD *)&this->__pad_704[20] = Index; /*0x66ba44*/
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66ba58*/
                      (int)v26,
                      (unsigned __int8 *)&stru_830620.__pad_579C[16608],
                      (CCINIClass *)&stru_830620.__pad_579C[20156],
                      (INIClass *)v12);
    v14 = *(CCINIClass **)&this->__pad_C3C[2104]; /*0x66ba5d*/
    *(_DWORD *)&this->__pad_C3C[2100] = Int_Overwrite; /*0x66ba63*/
    *(_DWORD *)&this->__pad_C3C[2104] = INIClass::ReadInt_Overwrite( /*0x66ba7d*/
                                          (int)v26,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[16608],
                                          (CCINIClass *)&stru_830620.__pad_579C[20140],
                                          (INIClass *)v14);
    HIDWORD(v22) = &stru_830620.__pad_579C[20128]; /*0x66ba90*/
    LODWORD(v22) = &stru_830620.__pad_579C[16608]; /*0x66ba95*/
    this->PathDelay[1] = (int)INIClass::ReadCoord(v22, this->PathDelay[1], _FFFFFFFC, v24); /*0x66baa3*/
    *(double *)&this->CrateRegen[1] = INIClass::ReadDouble_Overwrite( /*0x66bac4*/
                                        (int)v26,
                                        (INIClass *)&stru_830620.__pad_579C[16608],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[20116],
                                        (INIClass *)this->CrateRegen[1]);
    v15 = *(UnitTypeClass **)&this->__pad_C3C[1292]; /*0x66bacf*/
    if ( INIClass::GetString( /*0x66baec*/
           v26,
           (INIClass *)&stru_830620.__pad_579C[16608],
           (unsigned __int8 *)&stru_830620.__pad_579C[20100],
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      Alt = BuildingTypeClass::FindOrCreateAlt(Destination[0].__pad_0); /*0x66baf9*/
    }
    else
    {
      Alt = v15; /*0x66bb00*/
    }
    v17 = *(INIClass **)&this->__pad_C3C[1284]; /*0x66bb02*/
    *(_DWORD *)&this->__pad_C3C[1292] = Alt; /*0x66bb08*/
    *(_DWORD *)&this->__pad_C3C[1284] = INIClass::ReadInt_Overwrite( /*0x66bb22*/
                                          (int)v26,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[16608],
                                          (CCINIClass *)&stru_830620.__pad_579C[20084],
                                          v17);
    StringValue = INIClass::ReadStringValue( /*0x66bb3d*/
                    v26,
                    (CCINIClass *)&stru_830620.__pad_579C[16608],
                    (unsigned __int8 *)&stru_830620.__pad_579C[20072],
                    *(CCINIClass **)&this->__pad_C3C[2088]);
    v21 = *(CCINIClass **)&this->__pad_C3C[2092]; /*0x66bb42*/
    *(_DWORD *)&this->__pad_C3C[2088] = StringValue; /*0x66bb48*/
    v20 = INIClass::ReadStringValue( /*0x66bb5c*/
            v26,
            (CCINIClass *)&stru_830620.__pad_579C[16608],
            (unsigned __int8 *)&stru_830620.__pad_579C[20060],
            v21);
    v23 = *(CCINIClass **)&this->__pad_C3C[2096]; /*0x66bb61*/
    *(_DWORD *)&this->__pad_C3C[2092] = v20; /*0x66bb67*/
    result = INIClass::ReadStringValue( /*0x66bb7c*/
               v26,
               (CCINIClass *)&stru_830620.__pad_579C[16608],
               (unsigned __int8 *)&stru_830620.__pad_579C[20048],
               v23);
    *(_DWORD *)&this->__pad_C3C[2096] = result; /*0x66bb82*/
    LOBYTE(result) = 1; /*0x66bb89*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66bb96*/
  }
  return result; /*0x66bb88*/
}


// ==== 0x0066BBB0  Rules::ReadCombatINI  this=AbstractClass  sig=csp ====
int __thiscall Rules::ReadCombatINI(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  ObjectClass *i; // eax
  int v5; // ecx
  VectorClass *v6; // edx
  void *v7; // eax
  ObjectClass *j; // eax
  void *v9; // ecx
  void *v10; // edx
  void *v11; // eax
  ObjectClass *k; // eax
  void *v13; // edx
  VectorClass *v14; // ecx
  void *v15; // eax
  ObjectClass *m; // eax
  void *v17; // ecx
  VectorClass *v18; // edx
  void *v19; // eax
  ObjectClass *n; // eax
  float v21; // ecx
  int v22; // edx
  void *v23; // eax
  AbstractClass *ii; // eax
  int v25; // edx
  VectorClass *v26; // ecx
  void *v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  CCINIClass *v44; // ebx
  CCINIClass *v45; // eax
  int v46; // ebx
  int v47; // eax
  char Bool_Overwrite; // al
  WeaponTypeClass *v49; // ebx
  WeaponTypeClass *v50; // eax
  VectorClass *v56; // eax
  int v52; // edx
  CCINIClass *v58; // eax
  VectorClass *v59; // eax
  VectorClass *v60; // eax
  AnimTypeClass *ebx112; // ebx
  AnimTypeClass *v57; // eax
  AnimTypeClass *ebx115; // ebx
  AnimTypeClass *eax116; // eax
  AnimTypeClass *ebx118; // ebx
  AnimTypeClass *v61; // eax
  int v62; // ebx
  int v63; // eax
  ParticleSystemTypeClass *v64; // ebx
  ParticleSystemTypeClass *v65; // eax
  ParticleSystemTypeClass *v66; // ebx
  ParticleSystemTypeClass *v67; // eax
  ParticleSystemTypeClass *v68; // ebx
  ParticleSystemTypeClass *v69; // eax
  ParticleSystemTypeClass *v70; // ebx
  ParticleSystemTypeClass *v71; // eax
  ParticleSystemTypeClass *v72; // ebx
  ParticleSystemTypeClass *v73; // eax
  ParticleSystemTypeClass *v74; // ebx
  ParticleSystemTypeClass *v75; // eax
  ParticleSystemTypeClass *v76; // ebx
  ParticleSystemTypeClass *v77; // eax
  ParticleSystemTypeClass *v78; // ebx
  ParticleSystemTypeClass *v79; // eax
  ParticleSystemTypeClass *v80; // ebx
  ParticleSystemTypeClass *v81; // eax
  char v82; // al
  int v83; // edx
  INIClass *v84; // eax
  double Double_Overwrite; // st7
  CCINIClass *v90; // edx
  int v87; // eax
  DynamicVector *v92; // ecx
  int v89; // eax
  int LightningScatterDelay; // edx
  INIClass *LightningHitDelay; // eax
  double st7_151a; // st7
  DynamicVector *v95; // edx
  DynamicVector *Coord; // eax
  int ecx151; // ecx
  INIClass *v96; // edx
  double v97; // st7
  DynamicVector *v99; // ecx
  DynamicVector *v100; // eax
  CCINIClass *v101; // edx
  int eax151d; // eax
  CCINIClass *v103; // ecx
  char al151a; // al
  char v104; // dl
  char v105; // al
  char v106; // cl
  char v107; // al
  char v108; // dl
  char v109; // al
  WarheadTypeClass *v111; // ecx
  void **_FFFFFFEC; // [esp-14h] [ebp-E4h] BYREF
  CCINIClass *v113; // [esp-10h] [ebp-E0h]
  VectorClass *_FFFFFFF4; // [esp-Ch] [ebp-DCh]
  __int16 v114; // [esp-8h] [ebp-D8h]
  _BYTE aP3[12]; // [esp-4h] [ebp-D4h]
  INIClass *aP3_8; // [esp+8h] [ebp-C8h]
  int aP3_12; // [esp+Ch] [ebp-C4h]
  CCINIClass *IntList; // [esp+14h] [ebp-BCh] BYREF
  CCINIClass aP1_4[2]; // [esp+18h] [ebp-B8h] BYREF
  unsigned __int8 ***v120; // [esp+D8h] [ebp+8h]

  result = INIClass::BinarySearchSection((int)v120, (INIClass *)&stru_830620.__pad_579C[16592]);
  if ( result )
  {
    this->AmmoCrateDamage = INIClass::ReadInt_Overwrite(
                              (int)v120,
                              (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                              (CCINIClass *)&stru_830620.__pad_579C[21720],
                              (INIClass *)this->AmmoCrateDamage);
    *(_DWORD *)&this->__pad_240[592] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21704],
                                         *(INIClass **)&this->__pad_240[592]);
    *(_DWORD *)&this->__pad_240[596] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21684],
                                         *(INIClass **)&this->__pad_240[596]);
    *(_DWORD *)&this->__pad_240[808] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21660],
                                         *(INIClass **)&this->__pad_240[808]);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (int)v120,
                      (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                      (CCINIClass *)&stru_830620.__pad_579C[21640],
                      *(INIClass **)&this->__pad_240[812]);
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_240[812] = Int_Overwrite;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21628],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( i = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            i;
            i = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(i);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->NodBaseDefenseCoefficient[1]);
    }
    VectorClass::CopySmudge(&this->NodBaseDefenseCoefficient[1], aP1_4);
    v5 = aP1_4[0].sectionHead[1];
    v6 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->MaximumBaseDefenseValue = aP1_4[0].sectionHead[0];
    v7 = (void *)aP1_4[0].headNode[0];
    this->BaseUnit[0] = v5;
    this->HarvesterUnit[0] = (int)v6;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v7 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v7);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21616],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( j = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            j;
            j = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !j->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(j);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)this->PadAircraft);
    }
    VectorClass::CopySmudge(this->PadAircraft, aP1_4);
    v9 = (void *)aP1_4[0].sectionHead[0];
    v10 = (void *)aP1_4[0].sectionHead[1];
    this->BombParachute = (void *)aP1_4[0].sectionHead[2];
    v11 = (void *)aP1_4[0].headNode[0];
    this->SmokeAlt = v9;
    this->MoveFlash = v10;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v11 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v11);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21604],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( k = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            k;
            k = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !k->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(k);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->Parachute);
    }
    VectorClass::CopySmudge(&this->Parachute, aP1_4);
    v13 = (void *)aP1_4[0].sectionHead[0];
    v14 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->EliteFlashTimer = aP1_4[0].sectionHead[1];
    v15 = (void *)aP1_4[0].headNode[0];
    this->Paratrooper = v13;
    this->ChronoDelay = (int)v14;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v15 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v15);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21592],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( m = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            m;
            m = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !m->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(m);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->ChronoReinfDelay);
    }
    VectorClass::CopySmudge(&this->ChronoReinfDelay, aP1_4);
    v17 = (void *)aP1_4[0].sectionHead[1];
    v18 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->ChronoRangeMinimum = aP1_4[0].sectionHead[0];
    v19 = (void *)aP1_4[0].headNode[0];
    this->AlliedDisguise = v17;
    this->SovietDisguise = v18;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v19 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v19);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21580],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( n = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            n;
            n = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !n->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(n);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->ThirdDisguise);
    }
    VectorClass::CopySmudge(&this->ThirdDisguise, aP1_4);
    v21 = *(float *)aP1_4[0].sectionHead;
    v22 = aP1_4[0].sectionHead[1];
    this->HarvesterTooFarDistance = aP1_4[0].sectionHead[2];
    v23 = (void *)aP1_4[0].headNode[0];
    this->AIMinorSuperReadyPercent = v21;
    this->AISafeDistance = v22;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v23 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v23);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21568],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_AnimTypeClass_const;
      for ( ii = (AbstractClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            ii;
            ii = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !ii->__pad_0[0] )
          break;
        IntList = (CCINIClass *)AnimTypeClass::FindOrCreate(ii);
        if ( IntList )
          DynamicVector::Add_Alt4(&aP1_4[0].sectionCount, (VectorClass *)&IntList);
      }
      TypeList::AnimTypeCopy(aP1_4, (VectorClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&aP1_4[0].sectionCount);
    }
    else
    {
      TypeList::AnimTypeCopy(aP1_4, (VectorClass *)&this->Normal[9]);
    }
    VectorClass::CopyDefault(&this->Normal[9], (VectorClass *)aP1_4);
    v25 = aP1_4[0].sectionHead[0];
    v26 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->Normal[14] = aP1_4[0].sectionHead[1];
    v27 = (void *)aP1_4[0].headNode[0];
    this->Normal[13] = v25;
    this->Normal[15] = (int)v26;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_AnimTypeClass_const;
    if ( v27 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v27);
    v28 = *(_DWORD *)&this->__pad_C3C[840];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21556],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v29 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v29 = v28;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[840] = v29;
    v30 = *(_DWORD *)&this->__pad_C3C[844];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21540],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v31 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v31 = v30;
    }
    *(_DWORD *)&this->__pad_C3C[844] = v31;
    v32 = *(_DWORD *)&this->__pad_C3C[876];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21528],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v33 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v33 = v32;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[876] = v33;
    v34 = *(_DWORD *)&this->__pad_C3C[880];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21512],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v35 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v35 = v34;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[880] = v35;
    v36 = *(_DWORD *)&this->__pad_C3C[884];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21500],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v37 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v37 = v36;
    }
    *(_DWORD *)&this->__pad_C3C[884] = v37;
    v38 = *(_DWORD *)&this->__pad_C3C[888];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21484],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v39 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v39 = v38;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[888] = v39;
    v40 = *(_DWORD *)&this->__pad_C3C[884];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21468],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v41 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v41 = v40;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[892] = v41;
    v42 = *(_DWORD *)&this->__pad_C3C[888];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21448],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v43 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v43 = v42;
    }
    *(_DWORD *)&this->__pad_C3C[896] = v43;
    v44 = *(CCINIClass **)&this->__pad_C3C[900];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21432],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v44 = (CCINIClass *)WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[900] = v44;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21412],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v45 = (CCINIClass *)WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v45 = v44;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[904] = v45;
    v46 = *(_DWORD *)&this->__pad_C3C[908];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21400],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v47 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v47 = v46;
    }
    *(_DWORD *)&this->__pad_C3C[908] = v47;
    this->__pad_C3C[920] = INIClass::ReadBool_Overwrite(
                             (int)v120,
                             (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                             (CCINIClass *)&stru_830620.__pad_579C[21380],
                             this->__pad_C3C[920]);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v120,
                       (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                       (CCINIClass *)&stru_830620.__pad_579C[21356],
                       this->__pad_C3C[921]);
    *(_DWORD *)&aP3[8] = 128;
    this->__pad_C3C[921] = Bool_Overwrite;
    v49 = *(WeaponTypeClass **)&this->__pad_C3C[928];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[21344],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v50 = InfantryTypeClass::Find((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v50 = v49;
    }
    *(_DWORD *)&this->__pad_C3C[928] = v50;
    *(_DWORD *)&this->__pad_C3C[912] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21332],
                                         *(INIClass **)&this->__pad_C3C[912]);
    *(_DWORD *)&this->__pad_C3C[916] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21316],
                                         *(INIClass **)&this->__pad_C3C[916]);
    *(_DWORD *)&this->__pad_C3C[932] = SearchMIXFile(&stru_830620.__pad_579C[21300], 0);
    *(_DWORD *)&this->__pad_C3C[936] = SearchMIXFile(&stru_830620.__pad_579C[21284], 0);
    *(_DWORD *)&this->__pad_C3C[924] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21264],
                                         *(INIClass **)&this->__pad_C3C[924]);
    *(_DWORD *)&this->__pad_C3C[940] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21244],
                                         *(INIClass **)&this->__pad_C3C[940]);
    *(_DWORD *)&this->__pad_C3C[944] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21224],
                                         *(INIClass **)&this->__pad_C3C[944]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[772];
    *(float *)&this->__pad_C3C[772] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620.__pad_579C[16592],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[21200],
                                        *(INIClass **)&aP3[4]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[776];
    *(float *)&this->__pad_C3C[776] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620.__pad_579C[16592],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[21180],
                                        *(INIClass **)&aP3[4]);
    *(_DWORD *)&this->__pad_C3C[780] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21160],
                                         *(INIClass **)&this->__pad_C3C[780]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[784];
    *(float *)&this->__pad_C3C[784] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620.__pad_579C[16592],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[21136],
                                        *(INIClass **)&aP3[4]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[788];
    *(float *)&this->__pad_C3C[788] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620.__pad_579C[16592],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[21116],
                                        *(INIClass **)&aP3[4]);
    *(_DWORD *)&this->__pad_C3C[792] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21092],
                                         *(INIClass **)&this->__pad_C3C[792]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[796];
    *(float *)&this->__pad_C3C[796] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620.__pad_579C[16592],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[21064],
                                        *(INIClass **)&aP3[4]);
    *(_DWORD *)&this->__pad_C3C[800] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21040],
                                         *(INIClass **)&this->__pad_C3C[800]);
    *(_DWORD *)&this->__pad_C3C[804] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[21016],
                                         *(INIClass **)&this->__pad_C3C[804]);
    IntList = (CCINIClass *)&_FFFFFFEC;
    DynamicVectorClass::Copy(&_FFFFFFEC, (DynamicVector *)&this->__pad_C3C[684]);
    *(_DWORD *)IntList->__pad_0 = &vt_TypeList_int;
    IntList = (CCINIClass *)INIClass::ReadIntList(
                              v120,
                              (int)&aP1_4[0].sectionCount,
                              (INIClass *)&stru_830620.__pad_579C[16592],
                              (unsigned __int8 *)&stru_830620.__pad_579C[21000],
                              _FFFFFFEC,
                              v113,
                              (int)_FFFFFFF4,
                              v114,
                              *(int *)aP3,
                              *(int *)&aP3[4],
                              *(int *)&aP3[8]);
    TypeList::Copy(&this->__pad_C3C[684], IntList);
    v56 = (VectorClass *)IntList;
    *(_DWORD *)&this->__pad_C3C[700] = IntList->sectionHead[0];
    *(_DWORD *)&this->__pad_C3C[704] = v56[1].Items;
    v52 = v56[1].Capacity;
    v58 = *(CCINIClass **)aP1_4[0].__pad_20;
    *(_DWORD *)&this->__pad_C3C[708] = v52;
    aP1_4[0].sectionCount = (int)&vt_VectorClass_int;
    if ( v58 && aP1_4[0].__pad_20[9] )
      __3_YAXPAX_Z(v58);
    IntList = (CCINIClass *)&_FFFFFFEC;
    DynamicVectorClass::Copy(&_FFFFFFEC, (DynamicVector *)&this->__pad_C3C[712]);
    *(_DWORD *)IntList->__pad_0 = &vt_TypeList_int;
    IntList = (CCINIClass *)INIClass::ReadIntList(
                              v120,
                              (int)&aP1_4[0].sectionCount,
                              (INIClass *)&stru_830620.__pad_579C[16592],
                              (unsigned __int8 *)&stru_830620.__pad_579C[20984],
                              _FFFFFFEC,
                              v113,
                              (int)_FFFFFFF4,
                              v114,
                              *(int *)aP3,
                              *(int *)&aP3[4],
                              *(int *)&aP3[8]);
    TypeList::Copy(&this->__pad_C3C[712], IntList);
    v59 = (VectorClass *)IntList;
    *(_DWORD *)&this->__pad_C3C[728] = IntList->sectionHead[0];
    *(_DWORD *)&this->__pad_C3C[732] = v59[1].Items;
    *(_DWORD *)&this->__pad_C3C[736] = v59[1].Capacity;
    aP1_4[0].sectionCount = (int)&vt_VectorClass_int;
    if ( *(_DWORD *)aP1_4[0].__pad_20 && aP1_4[0].__pad_20[9] )
      __3_YAXPAX_Z(*(void **)aP1_4[0].__pad_20);
    IntList = (CCINIClass *)&_FFFFFFEC;
    DynamicVectorClass::Copy(&_FFFFFFEC, (DynamicVector *)&this->__pad_C3C[740]);
    *(_DWORD *)IntList->__pad_0 = &vt_TypeList_int;
    IntList = (CCINIClass *)INIClass::ReadIntList(
                              v120,
                              (int)&aP1_4[0].sectionCount,
                              (INIClass *)&stru_830620.__pad_579C[16592],
                              (unsigned __int8 *)&stru_830620.__pad_579C[20968],
                              _FFFFFFEC,
                              v113,
                              (int)_FFFFFFF4,
                              v114,
                              *(int *)aP3,
                              *(int *)&aP3[4],
                              *(int *)&aP3[8]);
    TypeList::Copy(&this->__pad_C3C[740], IntList);
    v60 = (VectorClass *)IntList;
    *(_DWORD *)&this->__pad_C3C[756] = IntList->sectionHead[0];
    *(_DWORD *)&this->__pad_C3C[760] = v60[1].Items;
    *(_DWORD *)&this->__pad_C3C[764] = v60[1].Capacity;
    aP1_4[0].sectionCount = (int)&vt_VectorClass_int;
    if ( *(_DWORD *)aP1_4[0].__pad_20 && aP1_4[0].__pad_20[9] )
      __3_YAXPAX_Z(*(void **)aP1_4[0].__pad_20);
    *(_DWORD *)&this->__pad_240[208] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[20940],
                                         *(INIClass **)&this->__pad_240[208]);
    ebx112 = *(AnimTypeClass **)&this->__pad_240[220];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20920],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v57 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v57 = ebx112;
    }
    *(_DWORD *)&this->__pad_240[220] = v57;
    *(_DWORD *)&this->__pad_240[212] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[20896],
                                         *(INIClass **)&this->__pad_240[212]);
    *(_DWORD *)&this->__pad_240[216] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                         (CCINIClass *)&stru_830620.__pad_579C[20876],
                                         *(INIClass **)&this->__pad_240[216]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[808];
    *(float *)&this->__pad_C3C[808] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620.__pad_579C[16592],
                                        (unsigned __int8 *)&stru_830620.__pad_579C[20852],
                                        *(INIClass **)&aP3[4]);
    this->__pad_C3C[812] = INIClass::ReadBool_Overwrite(
                             (int)v120,
                             (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                             (CCINIClass *)&stru_830620.__pad_579C[20828],
                             this->__pad_C3C[812]);
    ebx115 = *(AnimTypeClass **)&this->__pad_240[224];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20804],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      eax116 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1_4[0].unknown38);
    }
    else
    {
      eax116 = ebx115;
    }
    ebx118 = *(AnimTypeClass **)&this->__pad_240[228];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_240[224] = eax116;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20772],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v61 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v61 = ebx118;
    }
    v62 = *(_DWORD *)&this->__pad_C3C[948];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_240[228] = v61;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20752],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v63 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v63 = v62;
    }
    *(_DWORD *)&this->__pad_C3C[948] = v63;
    v64 = *(ParticleSystemTypeClass **)&this->__pad_C3C[988];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20724],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v65 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v65 = v64;
    }
    v66 = *(ParticleSystemTypeClass **)&this->__pad_C3C[992];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[988] = v65;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20696],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v67 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v67 = v66;
    }
    v68 = *(ParticleSystemTypeClass **)&this->__pad_C3C[996];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[992] = v67;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20676],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v69 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v69 = v68;
    }
    *(_DWORD *)&this->__pad_C3C[996] = v69;
    v70 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1000];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20648],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v71 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v71 = v70;
    }
    v72 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1004];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1000] = v71;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20620],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v73 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v73 = v72;
    }
    v74 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1008];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1004] = v73;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20592],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v75 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v75 = v74;
    }
    *(_DWORD *)&this->__pad_C3C[1008] = v75;
    v76 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1012];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20568],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v77 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v77 = v76;
    }
    v78 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1016];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1012] = v77;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20540],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v79 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v79 = v78;
    }
    v80 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1020];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1016] = v79;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620.__pad_579C[16592],
           (unsigned __int8 *)&stru_830620.__pad_579C[20512],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v81 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v81 = v80;
    }
    *(_DWORD *)&this->__pad_C3C[1020] = v81;
    v82 = INIClass::ReadBool_Overwrite(
            (int)v120,
            (unsigned __int8 *)&stru_830620.__pad_579C[16592],
            (CCINIClass *)&stru_830620.__pad_579C[20496],
            this->BerzerkAllowed);
    v83 = *(_DWORD *)&this->__pad_C3C[1120];
    this->BerzerkAllowed = v82;
    v84 = *(INIClass **)&this->__pad_C3C[1116];
    *(_DWORD *)&aP3[8] = v83;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
                         (int)v120,
                         (INIClass *)&stru_830620.__pad_579C[16592],
                         (unsigned __int8 *)&stru_830620.__pad_579C[20484],
                         v84);
    v90 = *(CCINIClass **)&this->__pad_C3C[2292];
    *(double *)&this->__pad_C3C[1116] = Double_Overwrite;
    v87 = INIClass::ReadInt_Overwrite(
            (int)v120,
            (unsigned __int8 *)&stru_830620.__pad_579C[16592],
            (CCINIClass *)&stru_830620.__pad_579C[20472],
            (INIClass *)v90);
    v92 = (DynamicVector *)this->MovieTime[0];
    *(_DWORD *)&this->__pad_C3C[2292] = v87;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[20452];
    *(_DWORD *)aP3 = &stru_830620.__pad_579C[16592];
    this->MovieTime[0] = (int)INIClass::ReadCoord(*(double *)aP3, (int)v92, aP3_8, aP3_12);
    v89 = INIClass::ReadInt_Overwrite(
            (int)v120,
            (unsigned __int8 *)&stru_830620.__pad_579C[16592],
            (CCINIClass *)&stru_830620.__pad_579C[20436],
            (INIClass *)this->TiberiumLongScan);
    LightningScatterDelay = this->LightningScatterDelay;
    this->TiberiumLongScan = v89;
    LightningHitDelay = (INIClass *)this->LightningHitDelay;
    *(_DWORD *)&aP3[8] = LightningScatterDelay;
    st7_151a = INIClass::ReadDouble_Overwrite(
                 (int)v120,
                 (INIClass *)&stru_830620.__pad_579C[16592],
                 (unsigned __int8 *)&stru_830620.__pad_579C[20428],
                 LightningHitDelay);
    v95 = (DynamicVector *)this->PathDelay[0];
    *(double *)&this->LightningHitDelay = st7_151a;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[20420];
    *(_DWORD *)aP3 = &stru_830620.__pad_579C[16592];
    Coord = (DynamicVector *)INIClass::ReadCoord(*(double *)aP3, (int)v95, aP3_8, aP3_12);
    ecx151 = *(_DWORD *)&this->__pad_C3C[2032];
    v96 = *(INIClass **)&this->__pad_C3C[2028];
    this->PathDelay[0] = (int)Coord;
    *(_DWORD *)&aP3[8] = ecx151;
    v97 = INIClass::ReadDouble_Overwrite(
            (int)v120,
            (INIClass *)&stru_830620.__pad_579C[16592],
            (unsigned __int8 *)&stru_830620.__pad_579C[20408],
            v96);
    v99 = *(DynamicVector **)&this->__pad_C3C[2036];
    *(double *)&this->__pad_C3C[2028] = v97;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[20396];
    *(_DWORD *)aP3 = &stru_830620.__pad_579C[16592];
    *(_DWORD *)&this->__pad_C3C[2036] = INIClass::ReadCoord(*(double *)aP3, (int)v99, aP3_8, aP3_12);
    *(_DWORD *)&aP3[8] = this->BlockagePathDelay;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[20380];
    *(_DWORD *)aP3 = &stru_830620.__pad_579C[16592];
    v100 = (DynamicVector *)INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], aP3_8, aP3_12);
    v101 = (CCINIClass *)this->IRepairRate[0];
    this->BlockagePathDelay = (int)v100;
    eax151d = INIClass::ReadInt_Overwrite(
                (int)v120,
                (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                (CCINIClass *)&stru_830620.__pad_579C[20368],
                (INIClass *)v101);
    v103 = (CCINIClass *)this->URepairRate[1];
    this->IRepairRate[0] = eax151d;
    this->URepairRate[1] = INIClass::ReadInt_Overwrite(
                             (int)v120,
                             (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                             (CCINIClass *)&stru_830620.__pad_579C[20356],
                             (INIClass *)v103);
    al151a = INIClass::ReadBool_Overwrite(
               (int)v120,
               (unsigned __int8 *)&stru_830620.__pad_579C[16592],
               (CCINIClass *)&stru_830620.__pad_579C[20336],
               BYTE1(this->ElevationIncrementBonus[0]));
    v104 = HIBYTE(this->ElevationIncrementBonus[1]);
    BYTE1(this->ElevationIncrementBonus[0]) = al151a;
    v105 = INIClass::ReadBool_Overwrite(
             (int)v120,
             (unsigned __int8 *)&stru_830620.__pad_579C[16592],
             (CCINIClass *)&stru_830620.__pad_579C[20320],
             v104);
    v106 = this->ElevationBonusCap[0];
    HIBYTE(this->ElevationIncrementBonus[1]) = v105;
    LOBYTE(this->ElevationBonusCap[0]) = INIClass::ReadBool_Overwrite(
                                           (int)v120,
                                           (unsigned __int8 *)&stru_830620.__pad_579C[16592],
                                           (CCINIClass *)&stru_830620.__pad_579C[20300],
                                           v106);
    v107 = INIClass::ReadBool_Overwrite(
             (int)v120,
             (unsigned __int8 *)&stru_830620.__pad_579C[16592],
             (CCINIClass *)&stru_830620.__pad_579C[20284],
             BYTE1(this->ElevationBonusCap[0]));
    v108 = BYTE1(this->ElevationIncrementBonus[1]);
    BYTE1(this->ElevationBonusCap[0]) = v107;
    v109 = INIClass::ReadBool_Overwrite(
             (int)v120,
             (unsigned __int8 *)&stru_830620.__pad_579C[16592],
             (CCINIClass *)&stru_830620.__pad_579C[20268],
             v108);
    v111 = (WarheadTypeClass *)this->URepairRate[0];
    BYTE1(this->ElevationIncrementBonus[1]) = v109;
    this->URepairRate[0] = (int)WarheadTypeClass::loadWarheadINI(
                                  v120,
                                  (CCINIClass *)&stru_830620.__pad_579C[16592],
                                  (unsigned __int8 *)&stru_830620.__pad_579C[20256],
                                  (CCINIClass *)v111);
    result = INIClass::ReadInt_Overwrite(
               (int)v120,
               (unsigned __int8 *)&stru_830620.__pad_579C[16592],
               (CCINIClass *)&stru_830620.__pad_579C[20240],
               (INIClass *)this->RadLightFactor[1]);
    this->RadLightFactor[1] = result;
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}


// ==== 0x0066CF70  RulesClass::ReadCountryList  this=AbstractClass  sig=csp ====
int __thiscall sub_66CF70(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  double Double_Overwrite; // st7
  double v10; // rax
  double v11; // st7
  double v12; // rax
  int Coord; // eax
  int v14; // ebx
  double v15; // [esp-Ch] [ebp-98h]
  _BYTE v16[4]; // [esp+8h] [ebp-84h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
  unsigned __int8 ***v18; // [esp+90h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v18, (unsigned __int8 *)MEMORY[0x839E80]); /*0x66cf89*/
  if ( result ) /*0x66cf95*/
  {
    this->__pad_1804 = INIClass::ReadInt_Overwrite( /*0x66cfb6*/
                                 (int)v18,
                                 (unsigned __int8 *)MEMORY[0x839E80],
                                 (unsigned __int8 *)MEMORY[0x83B330],
                                 this->__pad_1804);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66cfd1*/
                      (int)v18,
                      (unsigned __int8 *)MEMORY[0x839E80],
                      (unsigned __int8 *)MEMORY[0x83B31C],
                      *((_DWORD *)this + 1538));
    v4 = *((_DWORD *)this + 1539); /*0x66cfd6*/
    *((_DWORD *)this + 1538) = Int_Overwrite; /*0x66cfdc*/
    v5 = INIClass::ReadInt_Overwrite( /*0x66cff0*/
           (int)v18,
           (unsigned __int8 *)MEMORY[0x839E80],
           (unsigned __int8 *)MEMORY[0x83B310],
           v4);
    v6 = this->q604; /*0x66cff5*/
    *((_DWORD *)this + 1539) = v5; /*0x66cffb*/
    this->q604 = INIClass::ReadInt_Overwrite( /*0x66d015*/
                                 (int)v18,
                                 (unsigned __int8 *)MEMORY[0x839E80],
                                 (unsigned __int8 *)MEMORY[0x83B300],
                                 v6);
    v7 = INIClass::ReadInt_Overwrite( /*0x66d030*/
           (int)v18,
           (unsigned __int8 *)MEMORY[0x839E80],
           (unsigned __int8 *)MEMORY[0x83B2F0],
           *((_DWORD *)this + 1541));
    v8 = this->q181C; /*0x66d035*/
    *((_DWORD *)this + 1541) = v7; /*0x66d03b*/
    HIDWORD(v15) = v8; /*0x66d04d*/
    LODWORD(v15) = *((_DWORD *)this + 1542); /*0x66d04e*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x66d057*/
                         (int)v18,
                         (unsigned __int8 *)MEMORY[0x839E80],
                         (unsigned __int8 *)MEMORY[0x83B2E0],
                         v15);
    v10 = *((double *)this + 772); /*0x66d062*/
    *((double *)this + 771) = Double_Overwrite; /*0x66d068*/
    v11 = INIClass::ReadDouble_Overwrite( /*0x66d07e*/
            (int)v18,
            (unsigned __int8 *)MEMORY[0x839E80],
            (unsigned __int8 *)MEMORY[0x83B2D0],
            v10);
    v12 = *((double *)this + 773); /*0x66d089*/
    *((double *)this + 772) = v11; /*0x66d08f*/
    *((double *)this + 773) = INIClass::ReadDouble_Overwrite( /*0x66d0aa*/
                                (int)v18,
                                (unsigned __int8 *)MEMORY[0x839E80],
                                (unsigned __int8 *)MEMORY[0x83B2C0],
                                v12);
    Coord = INIClass::GetCoord( /*0x66d0ca*/
              v18,
              (int)v16,
              (unsigned __int8 *)MEMORY[0x839E80],
              (unsigned __int8 *)MEMORY[0x83B2B4],
              (unsigned __int8 *)this + 6192);
    *((_WORD *)this + 3096) = *(_WORD *)Coord; /*0x66d0d2*/
    *((_BYTE *)this + 6194) = *(_BYTE *)(Coord + 2); /*0x66d0e1*/
    v14 = this->q1834; /*0x66d0ea*/
    if ( INIClass::GetString( /*0x66d0fe*/
           v18,
           (unsigned __int8 *)MEMORY[0x839E80],
           (unsigned __int8 *)MEMORY[0x83B2A4],
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      result = WarheadTypeClass::FindOrCreate(Destination); /*0x66d10b*/
      this->q1834 = result; /*0x66d111*/
    }
    else
    {
      result = v14; /*0x66d124*/
      this->q1834 = v14; /*0x66d127*/
    }
    LOBYTE(result) = 1; /*0x66d118*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d13b*/
  }
  return result; /*0x66d117*/
}


// ==== 0x0066D150  RulesClass::readAudioVisual  this=AbstractClass  sig=csp ====
int __thiscall sub_66D150(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  double Double_Overwrite; // st7
  unsigned int v6; // eax
  unsigned int v7; // ecx
  double v8; // [esp-8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v9, (unsigned __int8 *)MEMORY[0x839E70]); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v9,
                      (unsigned __int8 *)MEMORY[0x839E70],
                      (unsigned __int8 *)MEMORY[0x83B370],
                      this->__pad_1838);
    v4 = this->q610; /*0x66d188*/
    this->__pad_1838 = Int_Overwrite; /*0x66d18e*/
    HIDWORD(v8) = this->q1844; /*0x66d1a0*/
    LODWORD(v8) = v4; /*0x66d1a1*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x66d1aa*/
                         v9,
                         (unsigned __int8 *)MEMORY[0x839E70],
                         (unsigned __int8 *)MEMORY[0x83B358],
                         v8);
    v6 = this->q184C; /*0x66d1af*/
    v7 = this->__pad_1848; /*0x66d1b5*/
    *((double *)this + 776) = Double_Overwrite; /*0x66d1bb*/
    *((double *)this + 777) = INIClass::ReadDouble_Overwrite( /*0x66d1d6*/
                                v9,
                                (unsigned __int8 *)MEMORY[0x839E70],
                                (unsigned __int8 *)MEMORY[0x83B344],
                                COERCE_DOUBLE(__PAIR64__(v6, v7)));
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}


// ==== 0x0066D1F0  RulesClass::readSpecialWeapons  this=AbstractClass  sig=csp ====
int __thiscall sub_66D1F0(RulesClass *this)
{
  int result; // eax
  char Bool_Overwrite; // al
  int v4; // ecx
  double v5; // [esp-8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v6, (unsigned __int8 *)MEMORY[0x839E64]); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v6,
                       (unsigned __int8 *)MEMORY[0x839E64],
                       (unsigned __int8 *)MEMORY[0x83B39C],
                       this->__pad_1850);
    v4 = *((_DWORD *)this + 1558); /*0x66d228*/
    this->__pad_1850 = Bool_Overwrite; /*0x66d22e*/
    HIDWORD(v5) = this->q185C; /*0x66d240*/
    LODWORD(v5) = v4; /*0x66d241*/
    *((double *)this + 779) = INIClass::ReadDouble_Overwrite( /*0x66d24f*/
                                v6,
                                (unsigned __int8 *)MEMORY[0x839E64],
                                (unsigned __int8 *)MEMORY[0x83B384],
                                v5);
    LOBYTE(result) = 1; /*0x66d256*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d25d*/
  }
  return result; /*0x66d255*/
}


// ==== 0x0066D270  INIClass::ReadDifficultyModifiers  this=ObjectTypeClass  sig=csp ====
int __thiscall INIClass::ReadDifficultyModifiers(RulesClass *this)
{
  CCINIClass *v1; // edx
  CCINIClass *v2; // edi
  int result; // eax
  INIClass *aP1; // [esp+10h] [ebp+4h]

  v2 = v1; /*0x66d277*/
  result = INIClass::BinarySearchSection((int)this, aP1); /*0x66d27c*/
  LOBYTE(result) = result != 0; /*0x66d283*/
  if ( (_BYTE)result ) /*0x66d288*/
  {
    *(double *)v2->__pad_0 = INIClass::ReadDouble_Overwrite( /*0x66d2a2*/
                               (int)this,
                               aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[22076],
                               0);
    *(double *)&v2->headNode[1] = INIClass::ReadDouble_Overwrite((int)this, aP1, &unk_825488, 0); /*0x66d2b8*/
    *(double *)v2->sectionHead = INIClass::ReadDouble_Overwrite( /*0x66d2cf*/
                                   (int)this,
                                   aP1,
                                   (unsigned __int8 *)&stru_825430.CCINIClass_field_4C,
                                   0);
    *(double *)&v2->sectionHead[2] = INIClass::ReadDouble_Overwrite( /*0x66d2e6*/
                                       (int)this,
                                       aP1,
                                       (unsigned __int8 *)&g_INI_Key_Speed.headNode[1],
                                       0);
    *(double *)v2->__pad_20 = INIClass::ReadDouble_Overwrite((int)this, aP1, (unsigned __int8 *)stru_825430.__pad_48, 0); /*0x66d2fd*/
    *(double *)&v2->__pad_20[8] = INIClass::ReadDouble_Overwrite( /*0x66d314*/
                                    (int)this,
                                    aP1,
                                    (unsigned __int8 *)&stru_825430.ownsFile,
                                    0);
    *(double *)&v2->unknown38 = INIClass::ReadDouble_Overwrite( /*0x66d32e*/
                                  (int)this,
                                  aP1,
                                  (unsigned __int8 *)&stru_830620.__pad_579C[22064],
                                  (INIClass *)0x47AE147B);
    *(double *)&v2->ownsFile = INIClass::ReadDouble_Overwrite( /*0x66d348*/
                                 (int)this,
                                 aP1,
                                 (unsigned __int8 *)&stru_830620.__pad_579C[22052],
                                 (INIClass *)0xEB851EB8);
    v2->__pad_48[0] = INIClass::ReadBool_Overwrite( /*0x66d35c*/
                        (int)this,
                        (unsigned __int8 *)aP1,
                        (CCINIClass *)&stru_830620.__pad_579C[22036],
                        0);
    *(double *)&v2->unknown30 = INIClass::ReadDouble_Overwrite( /*0x66d371*/
                                  (int)this,
                                  aP1,
                                  (unsigned __int8 *)&stru_825430.needsSave_flag,
                                  0);
    v2->__pad_48[1] = INIClass::ReadBool_Overwrite( /*0x66d385*/
                        (int)this,
                        (unsigned __int8 *)aP1,
                        (CCINIClass *)&stru_830620.__pad_579C[22020],
                        1);
    LOBYTE(result) = INIClass::ReadBool_Overwrite( /*0x66d390*/
                       (int)this,
                       (unsigned __int8 *)aP1,
                       (CCINIClass *)&stru_830620.__pad_579C[22008],
                       0);
    v2->__pad_48[2] = result; /*0x66d395*/
  }
  return result; /*0x66d398*/
}


// ==== 0x0066D3A0  RulesClass::ReadColors  this=int  sig=csp ====
int __thiscall sub_66D3A0(#381 *this)
{
  char *v1; // ebp
  int result; // eax
  int v3; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // esi
  int Color; // eax
  unsigned __int8 v7[4]; // [esp+4h] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF
  char *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = v9; /*0x66d3a9*/
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
      Color = INIEntry::ReadColor((unsigned __int8 ***)v1, (int)v8, (unsigned __int8 *)aColors, StringByIndex, v7); /*0x66d413*/
      LOWORD(v9) = *(_WORD *)Color; /*0x66d41b*/
      BYTE2(v9) = *(_BYTE *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)MEMORY[0x886380], (int)&MEMORY[0x885780], 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)MEMORY[0x886380], (int)&MEMORY[0x885780], 53); /*0x66d45b*/
    }
    LOBYTE(result) = 1; /*0x66d46c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d475*/
  }
  return result; /*0x66d46e*/
}


// ==== 0x0066D480  RulesClass::ReadColorAdd  this=AbstractClass  sig=csp ====
int __thiscall sub_66D480(#381 *this)
{
  char *v1; // edi
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
  char *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)aColoradd); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1, (unsigned __int8 *)aColoradd); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)this + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aColoradd, v4); /*0x66d4cd*/
        LOWORD(v13) = 0; /*0x66d4e6*/
        BYTE2(v13) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord( /*0x66d4f2*/
                  (unsigned __int8 ***)v1,
                  (int)v11,
                  (unsigned __int8 *)aColoradd,
                  StringByIndex,
                  (unsigned __int8 *)&v13);
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


// ==== 0x0066D530  RulesClass::LoadFromINI  this=AbstractClass  sig=csp ====
int __thiscall RulesClass::LoadFromINI(RulesClass *this)
{
  int result; // eax
  AbstractClass *i; // eax
  AnimTypeClass *v4; // ebx
  AnimTypeClass *v5; // eax
  int MaxWaypointPathLength; // ebx
  AnimTypeClass *v7; // eax
  ObjectClass *j; // eax
  ParticleSystemTypeClass *BarrelParticle; // ebx
  ParticleSystemTypeClass *v10; // eax
  AnimTypeClass *InfantryMutate; // ebx
  AnimTypeClass *v12; // eax
  AnimTypeClass *InfantryBrute; // ebx
  AnimTypeClass *v14; // eax
  AbstractClass *k; // eax
  AbstractClass *m; // eax
  AbstractClass *n; // eax
  AbstractClass *ii; // eax
  AnimTypeClass *v19; // ebx
  AnimTypeClass *v20; // eax
  AnimTypeClass *v21; // ebx
  AnimTypeClass *v22; // eax
  AbstractClass *jj; // eax
  AbstractClass *kk; // eax
  AnimTypeClass *v25; // ebx
  AnimTypeClass *v26; // eax
  int v27; // ebx
  int v28; // eax
  AnimTypeClass *v29; // ebx
  AnimTypeClass *v30; // eax
  AnimTypeClass *v31; // ebx
  AnimTypeClass *v32; // eax
  int Int_Overwrite; // eax
  AnimTypeClass *v34; // ebx
  AnimTypeClass *v35; // eax
  AnimTypeClass *v36; // ebx
  AnimTypeClass *v37; // eax
  AnimTypeClass *v38; // ebx
  AnimTypeClass *v39; // eax
  AnimTypeClass *v40; // ebx
  AnimTypeClass *v41; // eax
  AnimTypeClass *v42; // ebx
  AnimTypeClass *v43; // eax
  AnimTypeClass *v44; // ebx
  AnimTypeClass *v45; // eax
  AnimTypeClass *v46; // ebx
  AnimTypeClass *v47; // eax
  AnimTypeClass *v48; // ebx
  AnimTypeClass *v49; // eax
  AnimTypeClass *v50; // ebx
  AnimTypeClass *v51; // eax
  AnimTypeClass *v52; // ebx
  AnimTypeClass *v53; // eax
  AnimTypeClass *v54; // ebx
  AnimTypeClass *v55; // eax
  AnimTypeClass *Behind; // ebx
  AnimTypeClass *v57; // eax
  AnimTypeClass *v58; // ebx
  AnimTypeClass *v59; // eax
  AnimTypeClass *v60; // ebx
  AnimTypeClass *v61; // eax
  AnimTypeClass *v62; // ebx
  AnimTypeClass *v63; // eax
  AnimTypeClass *v64; // ebx
  AnimTypeClass *v65; // eax
  AnimTypeClass *v66; // ebx
  AnimTypeClass *v67; // eax
  AnimTypeClass *v68; // ebx
  AnimTypeClass *v69; // eax
  AnimTypeClass *v70; // ebx
  AnimTypeClass *v71; // eax
  int v72; // ebx
  AnimTypeClass *v73; // eax
  int v74; // ebx
  AnimTypeClass *v75; // eax
  int v76; // ebx
  AnimTypeClass *v77; // eax
  AnimTypeClass *v78; // ebx
  AnimTypeClass *v79; // eax
  AnimTypeClass *v80; // ebx
  AnimTypeClass *v81; // eax
  UnitTypeClass *LargeVisceroid; // ebx
  UnitTypeClass *Alt; // eax
  UnitTypeClass *SmallVisceroid; // ebx
  UnitTypeClass *v85; // eax
  INIClass *aP3; // eax
  CCINIClass *v87; // ebx
  _DWORD *vtable0; // eax
  CCINIClass *v89; // ebx
  _DWORD *v90; // eax
  CCINIClass *v91; // ebx
  _DWORD *v92; // eax
  CCINIClass *v93; // ebx
  _DWORD *v94; // eax
  CCINIClass *v95; // ebx
  _DWORD *v96; // eax
  CCINIClass *v97; // ebx
  _DWORD *v98; // eax
  INIClass *v99; // ecx
  INIClass *v100; // ecx
  INIClass *v101; // ecx
  INIClass *v102; // eax
  WeaponTypeClass *DropPodWeapon; // ebx
  WeaponTypeClass *v104; // eax
  INIClass *v105; // eax
  double Double_Overwrite; // st7
  INIClass *v107; // eax
  INIClass *v108; // eax
  INIClass *v109; // eax
  INIClass *v110; // eax
  INIClass *v111; // edx
  INIClass *v112; // edx
  INIClass *v113; // edx
  INIClass *GameForming; // edx
  INIClass *PlayerJoined; // edx
  INIClass *Construction; // edx
  INIClass *v117; // edx
  INIClass *v118; // edx
  INIClass *v119; // edx
  ObjectClass *mm; // eax
  int v121; // eax
  int v122; // ebx
  VoxelAnimTypeClass *v123; // eax
  int v124; // ebx
  VoxelAnimTypeClass *v125; // eax
  INIClass *v126; // edx
  INIClass *v127; // edx
  INIClass *v128; // edx
  INIClass *v129; // ecx
  INIClass *WindDirection; // ecx
  INIClass *FlightLevel; // ecx
  INIClass *NoParachuteMaxFallRate; // ecx
  INIClass *GDIGateOne; // ecx
  int v134; // eax
  char *nn; // eax
  BuildingTypeClass *FlameDamage; // ebx
  BuildingTypeClass *v137; // eax
  BuildingTypeClass *FlameDamage2; // ebx
  BuildingTypeClass *v139; // eax
  BuildingTypeClass *NukeWarhead; // ebx
  BuildingTypeClass *v141; // eax
  BuildingTypeClass *NukeProjectile; // ebx
  BuildingTypeClass *v143; // eax
  BuildingTypeClass *NukeDown; // ebx
  BuildingTypeClass *v145; // eax
  char *i1; // eax
  BuildingTypeClass *V3EliteWarhead; // ebx
  BuildingTypeClass *v148; // eax
  BuildingTypeClass *DMislEliteWarhead; // ebx
  BuildingTypeClass *v150; // eax
  BuildingTypeClass *CMislEliteWarhead; // ebx
  BuildingTypeClass *v152; // eax
  BuildingTypeClass *IvanWarhead; // ebx
  BuildingTypeClass *v154; // eax
  UnitTypeClass *v155; // ebx
  UnitTypeClass *v156; // eax
  INIClass *i2; // eax
  INIClass *i3; // eax
  int *CountryName; // eax
  InfantryTypeClass *INIClassInfantryTypeList; // eax
  int *BuildingTypes; // eax
  VectorClass *BuildingTypeList; // eax
  VectorClass *Warheads; // ebx
  char *v164; // ebx
  VectorClass *IntList; // eax
  VectorClass *v166; // eax
  INIClass *v167; // edx
  VectorClass *v168; // eax
  VectorClass *v169; // eax
  VectorClass *v170; // eax
  VectorClass *v171; // eax
  VectorClass *v172; // eax
  VectorClass *v173; // eax
  VectorClass *v174; // eax
  VectorClass *v175; // eax
  VectorClass *v176; // eax
  VectorClass *v177; // eax
  VectorClass *v178; // eax
  VectorClass *v179; // eax
  VectorClass *v180; // eax
  VectorClass *v181; // eax
  VectorClass *v182; // eax
  VectorClass *v183; // eax
  VectorClass *v184; // eax
  VectorClass *v185; // eax
  VectorClass *v186; // eax
  VectorClass *v187; // eax
  InfantryTypeClass *v188; // eax
  VectorClass *v189; // eax
  InfantryTypeClass *v190; // eax
  VectorClass *v191; // eax
  InfantryTypeClass *v192; // eax
  VectorClass *v193; // eax
  InfantryTypeClass *v194; // eax
  VectorClass *v195; // eax
  InfantryTypeClass *v196; // eax
  VectorClass *v197; // eax
  VectorClass *v198; // eax
  VectorClass *v199; // eax
  VectorClass *v200; // eax
  VectorClass *v201; // eax
  VectorClass *v202; // eax
  VectorClass *v203; // eax
  VectorClass *v204; // eax
  VectorClass *v205; // eax
  VectorClass *v206; // eax
  VectorClass *v207; // eax
  VectorClass *v208; // eax
  VectorClass *v209; // eax
  INIClass *v210; // eax
  INIClass *v211; // eax
  INIClass *v212; // eax
  INIClass *v213; // edx
  INIClass *v214; // ecx
  INIClass *v215; // ecx
  INIClass *v216; // ecx
  INIClass *v217; // ecx
  INIClass *v218; // ecx
  INIClass *LightningDamage; // eax
  INIClass *v220; // eax
  INIClass *v221; // eax
  INIClass *v222; // eax
  INIClass *v223; // eax
  INIClass *v224; // ecx
  INIClass *CloseEnough; // ecx
  INIClass *RelaxedStray; // ecx
  double v227; // st7
  double v228; // st7
  double v229; // st7
  double v230; // st7
  INIClass *WallTower; // eax
  INIClass *v232; // eax
  INIClass *v233; // eax
  INIClass *v234; // ecx
  INIClass *v235; // ecx
  INIClass *v236; // ecx
  INIClass *v237; // ecx
  INIClass *v238; // ecx
  INIClass *v239; // ecx
  INIClass *v240; // ecx
  VectorClass *v241; // eax
  VectorClass *v242; // eax
  VectorClass *v243; // eax
  INIClass *v244; // eax
  INIClass *v245; // eax
  INIClass *v246; // eax
  INIClass *v247; // eax
  INIClass *v248; // eax
  INIClass *v249; // eax
  INIClass *v250; // eax
  INIClass *v251; // eax
  INIClass *v252; // eax
  INIClass *v253; // eax
  INIClass *v254; // eax
  int *TypeList; // eax
  double v256; // st7
  VectorClass v257; // [esp-14h] [ebp-ECh] BYREF
  _BYTE v258[12]; // [esp-4h] [ebp-DCh]
  INIClass *aP3_8; // [esp+8h] [ebp-D0h]
  int aP3_12; // [esp+Ch] [ebp-CCh]
  VectorClass *v288; // [esp+18h] [ebp-C0h] BYREF
  void *aP0_4; // [esp+1Ch] [ebp-BCh]
  char aP0_13; // [esp+25h] [ebp-B3h]
  VectorClass aP0_28; // [esp+34h] [ebp-A4h] BYREF
  char aP0_49; // [esp+49h] [ebp-8Fh]
  void *aP0_52; // [esp+4Ch] [ebp-8Ch]
  void *aP0_56; // [esp+50h] [ebp-88h]
  void *aP0_60; // [esp+54h] [ebp-84h]
  INIClass String[2]; // [esp+58h] [ebp-80h] BYREF
  unsigned __int8 ***a0; // [esp+E0h] [ebp+8h]

  result = INIClass::BinarySearchSection((int)a0, &g_INI_Key_General);
  if ( result )
  {
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29084],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( i = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            i;
            i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(i);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->__pad_240[96]);
    }
    VectorClass::CopyDefault(&this->__pad_240[96], (VectorClass *)&aP0_28.Capacity);
    *(_DWORD *)&this->__pad_240[112] = aP0_52;
    *(_DWORD *)&this->__pad_240[116] = aP0_56;
    *(_DWORD *)&this->__pad_240[120] = aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    v4 = (AnimTypeClass *)this->q61C;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29072],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v5 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v5 = v4;
    }
    *(_DWORD *)&v258[8] = 128;
    this->q61C = v5;
    MaxWaypointPathLength = this->MaxWaypointPathLength;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29056],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v7 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v7 = (AnimTypeClass *)MaxWaypointPathLength;
    }
    this->MaxWaypointPathLength = (int)v7;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29040],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVector::Constructor_VoxelAnim(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_VoxelAnimTypeClass_const;
      for ( j = (ObjectClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            j;
            j = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !j->__pad_0[0] )
          break;
        aP0_28.vtable0 = UnitTypeClass::FindOrCreate(j);
        if ( aP0_28.vtable0 )
          DynamicVector::Add2(&v288, &aP0_28);
      }
      TypeList::CopyVoxelAnim(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_VoxelAnimTypeClass_const;
      Vector::Cleanup2((int)&v288);
    }
    else
    {
      TypeList::CopyVoxelAnim(&aP0_28.Capacity, (VectorClass *)&this->RadarEventColorSpeed);
    }
    VectorClass::CopyAssign(&this->RadarEventColorSpeed, (VectorClass *)&aP0_28.Capacity);
    this->DropPodPuff = aP0_52;
    this->BarrelExplode = aP0_56;
    this->BarrelDebris[0] = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    BarrelParticle = (ParticleSystemTypeClass *)this->BarrelParticle;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29024],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v10 = BuildingTypeClass::LoadOrGet((ObjectClass *)String);
    }
    else
    {
      v10 = BarrelParticle;
    }
    this->BarrelParticle = v10;
    InfantryMutate = (AnimTypeClass *)this->InfantryMutate;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29012],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v12 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v12 = InfantryMutate;
    }
    *(_DWORD *)&v258[8] = 128;
    this->InfantryMutate = v12;
    InfantryBrute = (AnimTypeClass *)this->InfantryBrute;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[29004],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v14 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v14 = InfantryBrute;
    }
    *(_DWORD *)&v258[8] = 128;
    this->InfantryBrute = v14;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28996],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( k = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            k;
            k = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !k->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(k);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->GUICloseSound);
    }
    VectorClass::CopyDefault(&this->GUICloseSound, (VectorClass *)&aP0_28.Capacity);
    this->GUIComboOpenSound = (int)aP0_52;
    this->GUIComboCloseSound = (int)aP0_56;
    this->GUICheckboxSound = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           &unk_825A20,
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( m = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            m;
            m = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !m->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(m);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->ScoreAnimSound);
    }
    VectorClass::CopyDefault(&this->ScoreAnimSound, (VectorClass *)&aP0_28.Capacity);
    this->BuildingAbandonedSound = (int)aP0_52;
    this->BuildingRepairedSound = (int)aP0_56;
    this->CheerSound = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28980],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( n = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            n;
            n = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !n->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(n);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->PlaceBeaconSound);
    }
    VectorClass::CopyDefault(&this->PlaceBeaconSound, (VectorClass *)&aP0_28.Capacity);
    this->ExecutePlanSound = (int)aP0_52;
    this->EndPlanningModeSound = (int)aP0_56;
    this->CrateMoneySound = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28960],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( ii = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            ii;
            ii = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !ii->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(ii);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->CrateRevealSound);
    }
    VectorClass::CopyDefault(&this->CrateRevealSound, (VectorClass *)&aP0_28.Capacity);
    this->CrateUnitSound = (int)aP0_52;
    this->CratePromoteSound = (int)aP0_56;
    this->ImpactWaterSound = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    v19 = *(AnimTypeClass **)&this->__pad_240[88];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28948],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v20 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v20 = v19;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[88] = v20;
    v21 = *(AnimTypeClass **)&this->__pad_240[92];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28940],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v22 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v22 = v21;
    }
    *(_DWORD *)&this->__pad_240[92] = v22;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28920],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( jj = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            jj;
            jj = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !jj->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(jj);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->__pad_240[124]);
    }
    VectorClass::CopyDefault(&this->__pad_240[124], (VectorClass *)&aP0_28.Capacity);
    *(_DWORD *)&this->__pad_240[140] = aP0_52;
    *(_DWORD *)&this->__pad_240[144] = aP0_56;
    *(_DWORD *)&this->__pad_240[148] = aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28904],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_AnimTypeClass_const;
      for ( kk = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            kk;
            kk = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !kk->__pad_0[0] )
          break;
        aP0_28.vtable0 = AnimTypeClass::FindOrCreate(kk);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt4(&v288, &aP0_28);
      }
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v288);
    }
    else
    {
      TypeList::AnimTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->__pad_240[152]);
    }
    VectorClass::CopyDefault(&this->__pad_240[152], (VectorClass *)&aP0_28.Capacity);
    *(_DWORD *)&this->__pad_240[168] = aP0_52;
    *(_DWORD *)&this->__pad_240[172] = aP0_56;
    *(_DWORD *)&this->__pad_240[176] = aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_AnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    v25 = *(AnimTypeClass **)&this->__pad_240[180];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28880],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v26 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v26 = v25;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[180] = v26;
    v27 = *(_DWORD *)&this->__pad_240[184];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28860],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v28 = WarheadTypeClass::FindOrCreate((ObjectClass *)String);
    }
    else
    {
      v28 = v27;
    }
    *(_DWORD *)&this->__pad_240[184] = v28;
    v29 = *(AnimTypeClass **)&this->__pad_240[188];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28840],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v30 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v30 = v29;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[188] = v30;
    v31 = *(AnimTypeClass **)&this->__pad_240[192];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28820],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v32 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v32 = v31;
    }
    *(_DWORD *)&this->__pad_240[192] = v32;
    *(_DWORD *)&this->__pad_240[196] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[28792],
                                         *(INIClass **)&this->__pad_240[196]);
    *(_DWORD *)&this->__pad_240[200] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[28768],
                                         *(INIClass **)&this->__pad_240[200]);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (int)a0,
                      (unsigned __int8 *)&g_INI_Key_General,
                      (CCINIClass *)&stru_830620.__pad_579C[28752],
                      *(INIClass **)&this->__pad_240[204]);
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[204] = Int_Overwrite;
    v34 = *(AnimTypeClass **)&this->__pad_240[240];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28736],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v35 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v35 = v34;
    }
    *(_DWORD *)&this->__pad_240[240] = v35;
    v36 = *(AnimTypeClass **)&this->__pad_240[244];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28724],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v37 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v37 = v36;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[244] = v37;
    v38 = *(AnimTypeClass **)&this->__pad_240[232];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28712],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v39 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v39 = v38;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[232] = v39;
    v40 = *(AnimTypeClass **)&this->__pad_240[236];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28696],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v41 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v41 = v40;
    }
    *(_DWORD *)&this->__pad_240[236] = v41;
    v42 = *(AnimTypeClass **)&this->__pad_240[248];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28688],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v43 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v43 = v42;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[248] = v43;
    v44 = *(AnimTypeClass **)&this->__pad_240[252];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28680],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v45 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v45 = v44;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[252] = v45;
    v46 = *(AnimTypeClass **)&this->__pad_240[256];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28668],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v47 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v47 = v46;
    }
    *(_DWORD *)&this->__pad_240[256] = v47;
    v48 = *(AnimTypeClass **)&this->__pad_240[264];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28644],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v49 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v49 = v48;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[264] = v49;
    v50 = *(AnimTypeClass **)&this->__pad_240[268];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28620],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v51 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v51 = v50;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[268] = v51;
    v52 = *(AnimTypeClass **)&this->__pad_240[272];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28600],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v53 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v53 = v52;
    }
    *(_DWORD *)&this->__pad_240[272] = v53;
    v54 = *(AnimTypeClass **)&this->__pad_240[260];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28584],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v55 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v55 = v54;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[260] = v55;
    Behind = (AnimTypeClass *)this->Behind;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28568],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v57 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v57 = Behind;
    }
    *(_DWORD *)&v258[8] = 128;
    this->Behind = v57;
    v58 = *(AnimTypeClass **)this->__pad_A0;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28552],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v59 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v59 = v58;
    }
    *(_DWORD *)this->__pad_A0 = v59;
    v60 = *(AnimTypeClass **)&this->__pad_A0[4];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28536],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v61 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v61 = v60;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_A0[4] = v61;
    v62 = *(AnimTypeClass **)&this->__pad_A0[8];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28520],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v63 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v63 = v62;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_A0[8] = v63;
    v64 = *(AnimTypeClass **)&this->__pad_A0[12];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28504],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v65 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v65 = v64;
    }
    *(_DWORD *)&this->__pad_A0[12] = v65;
    v66 = *(AnimTypeClass **)&this->__pad_A0[16];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28488],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v67 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v67 = v66;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_A0[16] = v67;
    v68 = *(AnimTypeClass **)&this->__pad_A0[20];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28472],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v69 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v69 = v68;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_A0[20] = v69;
    v70 = *(AnimTypeClass **)&this->__pad_A0[24];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28464],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v71 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v71 = v70;
    }
    *(_DWORD *)&this->__pad_A0[24] = v71;
    v72 = this->Normal[6];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28452],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v73 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v73 = (AnimTypeClass *)v72;
    }
    *(_DWORD *)&v258[8] = 128;
    this->Normal[6] = (int)v73;
    v74 = this->Normal[8];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28440],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v75 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v75 = (AnimTypeClass *)v74;
    }
    *(_DWORD *)&v258[8] = 128;
    this->Normal[8] = (int)v75;
    v76 = this->Normal[7];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28424],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v77 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v77 = (AnimTypeClass *)v76;
    }
    this->Normal[7] = (int)v77;
    v78 = *(AnimTypeClass **)&this->__pad_C3C[2112];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28408],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v79 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v79 = v78;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_C3C[2112] = v79;
    v80 = *(AnimTypeClass **)&this->AlliedWallTransparency;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28392],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v81 = AnimTypeClass::FindOrCreate((AbstractClass *)String);
    }
    else
    {
      v81 = v80;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->AlliedWallTransparency = v81;
    LargeVisceroid = (UnitTypeClass *)this->LargeVisceroid;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28376],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      Alt = BuildingTypeClass::FindOrCreateAlt(String);
    }
    else
    {
      Alt = LargeVisceroid;
    }
    this->LargeVisceroid = Alt;
    SmallVisceroid = (UnitTypeClass *)this->SmallVisceroid;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[28360],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v85 = BuildingTypeClass::FindOrCreateAlt(String);
    }
    else
    {
      v85 = SmallVisceroid;
    }
    this->SmallVisceroid = v85;
    aP3 = (INIClass *)this->TiberiumHeal[0];
    *(_DWORD *)&v258[8] = this->TiberiumHeal[1];
    *(double *)this->TiberiumHeal = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[28344],
                                      aP3);
    this->SelfHealInfantryFrames = INIClass::ReadInt_Overwrite(
                                     (int)a0,
                                     (unsigned __int8 *)&g_INI_Key_General,
                                     (CCINIClass *)&stru_830620.__pad_579C[28320],
                                     (INIClass *)this->SelfHealInfantryFrames);
    this->SelfHealInfantryAmount = INIClass::ReadInt_Overwrite(
                                     (int)a0,
                                     (unsigned __int8 *)&g_INI_Key_General,
                                     (CCINIClass *)&stru_830620.__pad_579C[28296],
                                     (INIClass *)this->SelfHealInfantryAmount);
    this->SelfHealUnitFrames = INIClass::ReadInt_Overwrite(
                                 (int)a0,
                                 (unsigned __int8 *)&g_INI_Key_General,
                                 (CCINIClass *)&stru_830620.__pad_579C[28276],
                                 (INIClass *)this->SelfHealUnitFrames);
    this->SelfHealUnitAmount = INIClass::ReadInt_Overwrite(
                                 (int)a0,
                                 (unsigned __int8 *)&g_INI_Key_General,
                                 (CCINIClass *)&stru_830620.__pad_579C[28256],
                                 (INIClass *)this->SelfHealUnitAmount);
    aP0_28.vtable0 = &this->__pad_240[280];
    IntVector::Copy(&v257, (VectorClass *)&this->__pad_240[280]);
    *(_DWORD *)v258 = *((_DWORD *)aP0_28.vtable0 + 4);
    *(_DWORD *)&v258[4] = *((_DWORD *)aP0_28.vtable0 + 5);
    v257.vtable0 = &vt_TypeList_int;
    v87 = (CCINIClass *)LoadBuildingTypeClassPrerequisites(
                          &v288,
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[28236],
                          v257);
    aP0_28.vtable0 = &this->__pad_240[280];
    TypeList::Copy(&this->__pad_240[280], v87);
    vtable0 = aP0_28.vtable0;
    *((_DWORD *)aP0_28.vtable0 + 4) = v87->sectionHead[0];
    vtable0[5] = v87->sectionHead[1];
    vtable0[6] = v87->sectionHead[2];
    v288 = (VectorClass *)&vt_VectorClass_int;
    if ( aP0_4 && aP0_13 )
      __3_YAXPAX_Z(aP0_4);
    IntVector::Copy(&v257, (VectorClass *)&this->__pad_240[308]);
    *(_DWORD *)v258 = *(_DWORD *)&this->__pad_240[324];
    *(_DWORD *)&v258[4] = *(_DWORD *)&this->__pad_240[328];
    v257.vtable0 = &vt_TypeList_int;
    v89 = (CCINIClass *)LoadBuildingTypeClassPrerequisites(
                          &v288,
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[28216],
                          v257);
    aP0_28.vtable0 = &this->__pad_240[308];
    TypeList::Copy(&this->__pad_240[308], v89);
    v90 = aP0_28.vtable0;
    *((_DWORD *)aP0_28.vtable0 + 4) = v89->sectionHead[0];
    v90[5] = v89->sectionHead[1];
    v90[6] = v89->sectionHead[2];
    v288 = (VectorClass *)&vt_VectorClass_int;
    if ( aP0_4 && aP0_13 )
      __3_YAXPAX_Z(aP0_4);
    IntVector::Copy(&v257, (VectorClass *)&this->__pad_240[336]);
    *(_DWORD *)v258 = *(_DWORD *)&this->__pad_240[352];
    *(_DWORD *)&v258[4] = *(_DWORD *)&this->__pad_240[356];
    v257.vtable0 = &vt_TypeList_int;
    v91 = (CCINIClass *)LoadBuildingTypeClassPrerequisites(
                          &v288,
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[28192],
                          v257);
    aP0_28.vtable0 = &this->__pad_240[336];
    TypeList::Copy(&this->__pad_240[336], v91);
    v92 = aP0_28.vtable0;
    *((_DWORD *)aP0_28.vtable0 + 4) = v91->sectionHead[0];
    v92[5] = v91->sectionHead[1];
    v92[6] = v91->sectionHead[2];
    v288 = (VectorClass *)&vt_VectorClass_int;
    if ( aP0_4 && aP0_13 )
      __3_YAXPAX_Z(aP0_4);
    IntVector::Copy(&v257, (VectorClass *)&this->__pad_240[364]);
    *(_DWORD *)v258 = *(_DWORD *)&this->__pad_240[380];
    *(_DWORD *)&v258[4] = *(_DWORD *)&this->__pad_240[384];
    v257.vtable0 = &vt_TypeList_int;
    v93 = (CCINIClass *)LoadBuildingTypeClassPrerequisites(
                          &v288,
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[28172],
                          v257);
    aP0_28.vtable0 = &this->__pad_240[364];
    TypeList::Copy(&this->__pad_240[364], v93);
    v94 = aP0_28.vtable0;
    *((_DWORD *)aP0_28.vtable0 + 4) = v93->sectionHead[0];
    v94[5] = v93->sectionHead[1];
    v94[6] = v93->sectionHead[2];
    v288 = (VectorClass *)&vt_VectorClass_int;
    if ( aP0_4 && aP0_13 )
      __3_YAXPAX_Z(aP0_4);
    IntVector::Copy(&v257, (VectorClass *)&this->__pad_240[392]);
    *(_DWORD *)v258 = *(_DWORD *)&this->__pad_240[408];
    *(_DWORD *)&v258[4] = *(_DWORD *)&this->__pad_240[412];
    v257.vtable0 = &vt_TypeList_int;
    v95 = (CCINIClass *)LoadBuildingTypeClassPrerequisites(
                          &v288,
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[28152],
                          v257);
    aP0_28.vtable0 = &this->__pad_240[392];
    TypeList::Copy(&this->__pad_240[392], v95);
    v96 = aP0_28.vtable0;
    *((_DWORD *)aP0_28.vtable0 + 4) = v95->sectionHead[0];
    v96[5] = v95->sectionHead[1];
    v96[6] = v95->sectionHead[2];
    v288 = (VectorClass *)&vt_VectorClass_int;
    if ( aP0_4 && aP0_13 )
      __3_YAXPAX_Z(aP0_4);
    IntVector::Copy(&v257, (VectorClass *)&this->__pad_240[420]);
    *(_DWORD *)v258 = *(_DWORD *)&this->__pad_240[436];
    *(_DWORD *)&v258[4] = *(_DWORD *)&this->__pad_240[440];
    v257.vtable0 = &vt_TypeList_int;
    v97 = (CCINIClass *)LoadBuildingTypeClassPrerequisites(
                          &v288,
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[28132],
                          v257);
    aP0_28.vtable0 = &this->__pad_240[420];
    TypeList::Copy(&this->__pad_240[420], v97);
    v98 = aP0_28.vtable0;
    *((_DWORD *)aP0_28.vtable0 + 4) = v97->sectionHead[0];
    v98[5] = v97->sectionHead[1];
    v98[6] = v97->sectionHead[2];
    v288 = (VectorClass *)&vt_VectorClass_int;
    if ( aP0_4 && aP0_13 )
      __3_YAXPAX_Z(aP0_4);
    v99 = *(INIClass **)&this->__pad_240[784];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_240[788];
    *(double *)&this->__pad_240[784] = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[28116],
                                         v99);
    BYTE2(this->ElevationBonusCap[0]) = INIClass::ReadBool_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[28100],
                                          BYTE2(this->ElevationBonusCap[0]));
    HIBYTE(this->ElevationBonusCap[0]) = INIClass::ReadBool_Overwrite(
                                           (int)a0,
                                           (unsigned __int8 *)&g_INI_Key_General,
                                           (CCINIClass *)&stru_830620.__pad_579C[28068],
                                           HIBYTE(this->ElevationBonusCap[0]));
    this->GUIMainButtonSound = INIClass::ReadInt_Overwrite(
                                 (int)a0,
                                 (unsigned __int8 *)&g_INI_Key_General,
                                 (CCINIClass *)&stru_830620.__pad_579C[28048],
                                 (INIClass *)this->GUIMainButtonSound);
    *(double *)&v258[4] = *(float *)&this->__pad_240[816];
    *(float *)&this->__pad_240[816] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[28020],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[820];
    *(float *)&this->__pad_240[820] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[27992],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[824];
    *(float *)&this->__pad_240[824] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[27968],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[828];
    *(float *)&this->__pad_240[828] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[27952],
                                        *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[832] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[27932],
                                         *(INIClass **)&this->__pad_240[832]);
    v100 = (INIClass *)this->TreeFlammability[0];
    *(_DWORD *)&v258[8] = this->TreeFlammability[1];
    *(double *)this->TreeFlammability = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[27912],
                                          v100);
    v101 = (INIClass *)this->MissileROTVar[0];
    *(_DWORD *)&v258[8] = this->MissileROTVar[1];
    *(double *)this->MissileROTVar = INIClass::ReadDouble_Overwrite(
                                       (int)a0,
                                       &g_INI_Key_General,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[27896],
                                       v101);
    this->MissileSafetyAltitude = INIClass::ReadInt_Overwrite(
                                    (int)a0,
                                    (unsigned __int8 *)&g_INI_Key_General,
                                    (CCINIClass *)&stru_830620.__pad_579C[27872],
                                    (INIClass *)this->MissileSafetyAltitude);
    v102 = (INIClass *)this->MissileSpeedVar[0];
    *(_DWORD *)&v258[8] = this->MissileSpeedVar[1];
    *(double *)this->MissileSpeedVar = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[27856],
                                         v102);
    DropPodWeapon = (WeaponTypeClass *)this->DropPodWeapon;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27840],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v104 = InfantryTypeClass::Find((ObjectClass *)String);
    }
    else
    {
      v104 = DropPodWeapon;
    }
    this->DropPodWeapon = v104;
    this->DropPodHeight = INIClass::ReadInt_Overwrite(
                            (int)a0,
                            (unsigned __int8 *)&g_INI_Key_General,
                            (CCINIClass *)&stru_830620.__pad_579C[27824],
                            (INIClass *)this->DropPodHeight);
    this->DropPodSpeed = INIClass::ReadInt_Overwrite(
                           (int)a0,
                           (unsigned __int8 *)&g_INI_Key_General,
                           (CCINIClass *)&stru_830620.__pad_579C[27808],
                           (INIClass *)this->DropPodSpeed);
    v105 = (INIClass *)this->DropPodAngle[0];
    *(_DWORD *)&v258[8] = this->DropPodAngle[1];
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
                         (int)a0,
                         &g_INI_Key_General,
                         (unsigned __int8 *)&stru_830620.__pad_579C[27792],
                         v105);
    *(double *)this->DropPodAngle = Double_Overwrite;
    if ( Double_Overwrite >= 1.178097245096172 )
      Double_Overwrite = 1.178097245096172;
    *(double *)this->DropPodAngle = Double_Overwrite;
    if ( Double_Overwrite <= 0.3926990816987241 )
      Double_Overwrite = 0.3926990816987241;
    *(double *)this->DropPodAngle = Double_Overwrite;
    v107 = (INIClass *)this->CrewEscape[0];
    *(_DWORD *)&v258[8] = this->CrewEscape[1];
    *(double *)this->CrewEscape = INIClass::ReadDouble_Overwrite(
                                    (int)a0,
                                    &g_INI_Key_General,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[27780],
                                    v107);
    v108 = (INIClass *)this->TunnelSpeed[0];
    *(_DWORD *)&v258[8] = this->TunnelSpeed[1];
    *(double *)this->TunnelSpeed = INIClass::ReadDouble_Overwrite(
                                     (int)a0,
                                     &g_INI_Key_General,
                                     (unsigned __int8 *)&stru_830620.__pad_579C[27768],
                                     v108);
    v109 = (INIClass *)this->HoverDampen[0];
    *(_DWORD *)&v258[8] = this->HoverDampen[1];
    *(double *)this->HoverDampen = INIClass::ReadDouble_Overwrite(
                                     (int)a0,
                                     &g_INI_Key_General,
                                     (unsigned __int8 *)&stru_830620.__pad_579C[27756],
                                     v109);
    v110 = (INIClass *)this->HoverBob[0];
    *(_DWORD *)&v258[8] = this->HoverBob[1];
    *(double *)this->HoverBob = INIClass::ReadDouble_Overwrite(
                                  (int)a0,
                                  &g_INI_Key_General,
                                  (unsigned __int8 *)&stru_830620.__pad_579C[27744],
                                  v110);
    this->HoverHeight = INIClass::ReadInt_Overwrite(
                          (int)a0,
                          (unsigned __int8 *)&g_INI_Key_General,
                          (CCINIClass *)&stru_830620.__pad_579C[27732],
                          (INIClass *)this->HoverHeight);
    v111 = (INIClass *)this->HoverBoost[0];
    *(_DWORD *)&v258[8] = this->HoverBoost[1];
    *(double *)this->HoverBoost = INIClass::ReadDouble_Overwrite(
                                    (int)a0,
                                    &g_INI_Key_General,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[27720],
                                    v111);
    v112 = (INIClass *)this->HoverAcceleration[0];
    *(_DWORD *)&v258[8] = this->HoverAcceleration[1];
    *(double *)this->HoverAcceleration = INIClass::ReadDouble_Overwrite(
                                           (int)a0,
                                           &g_INI_Key_General,
                                           (unsigned __int8 *)&stru_830620.__pad_579C[27700],
                                           v112);
    v113 = (INIClass *)this->HoverBrake[0];
    *(_DWORD *)&v258[8] = this->HoverBrake[1];
    *(double *)this->HoverBrake = INIClass::ReadDouble_Overwrite(
                                    (int)a0,
                                    &g_INI_Key_General,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[27688],
                                    v113);
    *(_DWORD *)&v258[8] = this->OptionsChanged;
    *(double *)&this->SystemError = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[27672],
                                      (INIClass *)this->SystemError);
    GameForming = (INIClass *)this->GameForming;
    *(_DWORD *)&v258[8] = this->PlayerLeft;
    *(double *)&this->GameForming = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[27656],
                                      GameForming);
    PlayerJoined = (INIClass *)this->PlayerJoined;
    *(_DWORD *)&v258[8] = this->MessageCharTyped;
    *(double *)&this->PlayerJoined = INIClass::ReadDouble_Overwrite(
                                       (int)a0,
                                       &g_INI_Key_General,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[27640],
                                       PlayerJoined);
    Construction = (INIClass *)this->Construction;
    *(_DWORD *)&v258[8] = this->CreditTicks[0];
    *(double *)&this->Construction = INIClass::ReadDouble_Overwrite(
                                       (int)a0,
                                       &g_INI_Key_General,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[27624],
                                       Construction);
    v117 = (INIClass *)this->CreditTicks[1];
    *(_DWORD *)&v258[8] = this->CreditTicks[2];
    *(double *)&this->CreditTicks[1] = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[27608],
                                         v117);
    v118 = (INIClass *)this->CreditTicks[3];
    *(_DWORD *)&v258[8] = this->CreditTicks[4];
    *(double *)&this->CreditTicks[3] = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[27596],
                                         v118);
    v119 = (INIClass *)this->CreditTicks[5];
    *(_DWORD *)&v258[8] = this->BuildingDieSound;
    *(double *)&this->CreditTicks[5] = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[27584],
                                         v119);
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27560],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVector::Constructor_VoxelAnim(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_VoxelAnimTypeClass_const;
      for ( mm = (ObjectClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            mm;
            mm = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !mm->__pad_0[0] )
          break;
        aP0_28.vtable0 = UnitTypeClass::FindOrCreate(mm);
        if ( aP0_28.vtable0 )
          DynamicVector::Add2(&v288, &aP0_28);
      }
      TypeList::CopyVoxelAnim(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_VoxelAnimTypeClass_const;
      Vector::Cleanup2((int)&v288);
    }
    else
    {
      TypeList::CopyVoxelAnim(&aP0_28.Capacity, (VectorClass *)&this->CloakingStages);
    }
    VectorClass::CopyAssign(&this->CloakingStages, (VectorClass *)&aP0_28.Capacity);
    this->IceCrackingWeight[0] = (int)aP0_52;
    this->IceCrackingWeight[1] = (int)aP0_56;
    this->IceBreakingWeight[0] = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    v121 = INIClass::ReadInt_Overwrite(
             (int)a0,
             (unsigned __int8 *)&g_INI_Key_General,
             (CCINIClass *)&stru_830620.__pad_579C[27544],
             (INIClass *)this->VeteranRatio[1]);
    *(_DWORD *)&v258[8] = 128;
    this->VeteranRatio[1] = v121;
    v122 = this->IceBreakingWeight[1];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27528],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v123 = UnitTypeClass::FindOrCreate((ObjectClass *)String);
    }
    else
    {
      v123 = (VoxelAnimTypeClass *)v122;
    }
    this->IceBreakingWeight[1] = (int)v123;
    v124 = this->VeteranRatio[0];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27508],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v125 = UnitTypeClass::FindOrCreate((ObjectClass *)String);
    }
    else
    {
      v125 = (VoxelAnimTypeClass *)v124;
    }
    this->VeteranRatio[0] = (int)v125;
    this->VeteranCombat[0] = INIClass::ReadInt_Overwrite(
                               (int)a0,
                               (unsigned __int8 *)&g_INI_Key_General,
                               (CCINIClass *)&stru_830620.__pad_579C[27492],
                               (INIClass *)this->VeteranCombat[0]);
    v126 = (INIClass *)this->VeteranSpeed[0];
    *(_DWORD *)&v258[8] = this->VeteranSpeed[1];
    *(double *)this->VeteranSpeed = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[27472],
                                      v126);
    v127 = (INIClass *)this->VeteranSight[0];
    *(_DWORD *)&v258[8] = this->VeteranSight[1];
    *(double *)this->VeteranSight = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[27452],
                                      v127);
    v128 = (INIClass *)this->VeteranArmor[0];
    *(_DWORD *)&v258[8] = this->VeteranArmor[1];
    *(double *)this->VeteranArmor = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[27432],
                                      v128);
    LOBYTE(this->IncomingMessage) = INIClass::ReadInt_Overwrite(
                                      (int)a0,
                                      (unsigned __int8 *)&g_INI_Key_General,
                                      (CCINIClass *)&stru_830620.__pad_579C[27408],
                                      (INIClass *)SLOBYTE(this->IncomingMessage));
    v129 = (INIClass *)this->PlacementDelay[0];
    *(_DWORD *)&v258[8] = this->PlacementDelay[1];
    *(double *)this->PlacementDelay = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[27392],
                                        v129);
    WindDirection = (INIClass *)this->WindDirection;
    *(_DWORD *)&v258[8] = this->CameraRange;
    *(double *)&this->WindDirection = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[27376],
                                        WindDirection);
    FlightLevel = (INIClass *)this->FlightLevel;
    *(_DWORD *)&v258[8] = this->ParachuteMaxFallRate;
    *(double *)&this->FlightLevel = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[27360],
                                      FlightLevel);
    NoParachuteMaxFallRate = (INIClass *)this->NoParachuteMaxFallRate;
    *(_DWORD *)&v258[8] = this->BuildingDrop;
    *(double *)&this->NoParachuteMaxFallRate = INIClass::ReadDouble_Overwrite(
                                                 (int)a0,
                                                 &g_INI_Key_General,
                                                 (unsigned __int8 *)&stru_830620.__pad_579C[27344],
                                                 NoParachuteMaxFallRate);
    GDIGateOne = (INIClass *)this->GDIGateOne;
    *(_DWORD *)&v258[8] = this->GDIGateTwo;
    *(double *)&this->GDIGateOne = INIClass::ReadDouble_Overwrite(
                                     (int)a0,
                                     &g_INI_Key_General,
                                     (unsigned __int8 *)&stru_830620.__pad_579C[27328],
                                     GDIGateOne);
    this->BuildNavalYard[0] = INIClass::ReadInt_Overwrite(
                                (int)a0,
                                (unsigned __int8 *)&g_INI_Key_General,
                                (CCINIClass *)&stru_830620.__pad_579C[27312],
                                (INIClass *)this->BuildNavalYard[0]);
    *(_DWORD *)&v258[8] = this->GDIWallDefense[0];
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[27300];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->GDIWallDefense[0] = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    this->GDIWallDefense[1] = INIClass::ReadInt_Overwrite(
                                (int)a0,
                                (unsigned __int8 *)&g_INI_Key_General,
                                (CCINIClass *)&stru_830620.__pad_579C[27288],
                                (INIClass *)this->GDIWallDefense[1]);
    this->GDIWallDefenseCoefficient[0] = INIClass::ReadInt_Overwrite(
                                           (int)a0,
                                           (unsigned __int8 *)&g_INI_Key_General,
                                           (CCINIClass *)&stru_830620.__pad_579C[27264],
                                           (INIClass *)this->GDIWallDefenseCoefficient[0]);
    v134 = INIClass::ReadInt_Overwrite(
             (int)a0,
             (unsigned __int8 *)&g_INI_Key_General,
             (CCINIClass *)&stru_830620.__pad_579C[27240],
             (INIClass *)this->GDIWallDefenseCoefficient[1]);
    *(_DWORD *)&v258[8] = 128;
    this->GDIWallDefenseCoefficient[1] = v134;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27228],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      DynamicVectorClass::BuildingTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_BuildingTypeClass_const;
      for ( nn = strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            nn;
            nn = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !*nn )
          break;
        aP0_28.vtable0 = BuildingTypeClass::FindOrCreate(nn);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt3(&v288, &aP0_28);
      }
      TypeList::BuildingTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)&v288);
    }
    else
    {
      TypeList::BuildingTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->ChronoHarvTooFarDistance);
    }
    VectorClass::CopyBuilding(&this->ChronoHarvTooFarDistance, (VectorClass *)&aP0_28.Capacity);
    this->AlliedCrew = aP0_52;
    this->SovietCrew = aP0_56;
    this->ThirdCrew = aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_BuildingTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    FlameDamage = (BuildingTypeClass *)this->FlameDamage;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27216],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v137 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v137 = FlameDamage;
    }
    *(_DWORD *)&v258[8] = 128;
    this->FlameDamage = v137;
    FlameDamage2 = (BuildingTypeClass *)this->FlameDamage2;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27204],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v139 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v139 = FlameDamage2;
    }
    this->FlameDamage2 = v139;
    NukeWarhead = (BuildingTypeClass *)this->NukeWarhead;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27192],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v141 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v141 = NukeWarhead;
    }
    *(_DWORD *)&v258[8] = 128;
    this->NukeWarhead = v141;
    NukeProjectile = (BuildingTypeClass *)this->NukeProjectile;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27180],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v143 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v143 = NukeProjectile;
    }
    *(_DWORD *)&v258[8] = 128;
    this->NukeProjectile = v143;
    NukeDown = (BuildingTypeClass *)this->NukeDown;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27168],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v145 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v145 = NukeDown;
    }
    this->NukeDown = v145;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27156],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      DynamicVectorClass::BuildingTypeConstructor(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_BuildingTypeClass_const;
      for ( i1 = strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            i1;
            i1 = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !*i1 )
          break;
        aP0_28.vtable0 = BuildingTypeClass::FindOrCreate(i1);
        if ( aP0_28.vtable0 )
          DynamicVector::Add_Alt3(&v288, &aP0_28);
      }
      TypeList::BuildingTypeCopy(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)&v288);
    }
    else
    {
      TypeList::BuildingTypeCopy(&aP0_28.Capacity, (VectorClass *)&this->MutateWarhead);
    }
    VectorClass::CopyBuilding(&this->MutateWarhead, (VectorClass *)&aP0_28.Capacity);
    this->V3Warhead = aP0_52;
    this->DMislWarhead = aP0_56;
    this->CMislWarhead = aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_BuildingTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    V3EliteWarhead = (BuildingTypeClass *)this->V3EliteWarhead;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27140],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v148 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v148 = V3EliteWarhead;
    }
    this->V3EliteWarhead = v148;
    DMislEliteWarhead = (BuildingTypeClass *)this->DMislEliteWarhead;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27124],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v150 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v150 = DMislEliteWarhead;
    }
    *(_DWORD *)&v258[8] = 128;
    this->DMislEliteWarhead = v150;
    CMislEliteWarhead = (BuildingTypeClass *)this->CMislEliteWarhead;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27104],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v152 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v152 = CMislEliteWarhead;
    }
    *(_DWORD *)&v258[8] = 128;
    this->CMislEliteWarhead = v152;
    IvanWarhead = (BuildingTypeClass *)this->IvanWarhead;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27088],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      v154 = BuildingTypeClass::FindOrCreate(String[0].__pad_0);
    }
    else
    {
      v154 = IvanWarhead;
    }
    this->IvanWarhead = v154;
    v155 = *(UnitTypeClass **)&this->__pad_240[448];
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27060],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      v156 = BuildingTypeClass::FindOrCreateAlt(String);
    }
    else
    {
      v156 = v155;
    }
    *(_DWORD *)&v258[8] = 128;
    *(_DWORD *)&this->__pad_240[448] = v156;
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27048],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           *(int *)&v258[8]) )
    {
      UnitTypeVector::Construct(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_UnitTypeClass_const;
      for ( i2 = (INIClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            i2;
            i2 = (INIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i2->__pad_0[0] )
          break;
        aP0_28.vtable0 = BuildingTypeClass::FindOrCreateAlt(i2);
        if ( aP0_28.vtable0 )
          VectorClass::PushBack(&v288, &aP0_28);
      }
      TypeList::CopyConstructor(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_UnitTypeClass_const;
      Vector::Destructor((int)&v288);
    }
    else
    {
      TypeList::CopyConstructor(&aP0_28.Capacity, (VectorClass *)&this->ThirdSurvivorDivisor);
    }
    VectorClass::CopyConstructor(&this->ThirdSurvivorDivisor, (InfantryTypeClass *)&aP0_28.Capacity);
    this->AutocreateTime[1] = (int)aP0_52;
    this->BuildupTime[0] = (int)aP0_56;
    this->BuildupTime[1] = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_UnitTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized && aP0_49 )
      __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    if ( INIClass::GetString(
           a0,
           &g_INI_Key_General,
           (unsigned __int8 *)&stru_830620.__pad_579C[27032],
           (INIClass *)&stru_87C374.__pad_579C[33876],
           String,
           128) )
    {
      UnitTypeVector::Construct(&v288, 0, 0);
      v288 = (VectorClass *)&vt_TypeList_UnitTypeClass_const;
      for ( i3 = (INIClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
            i3;
            i3 = (INIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i3->__pad_0[0] )
          break;
        aP0_28.vtable0 = BuildingTypeClass::FindOrCreateAlt(i3);
        if ( aP0_28.vtable0 )
          VectorClass::PushBack(&v288, &aP0_28);
      }
      TypeList::CopyConstructor(&aP0_28.Capacity, (VectorClass *)&v288);
      v288 = (VectorClass *)&vt_VectorClass_UnitTypeClass_const;
      Vector::Destructor((int)&v288);
    }
    else
    {
      TypeList::CopyConstructor(&aP0_28.Capacity, (VectorClass *)&this->HarvesterLoadRate);
    }
    VectorClass::CopyConstructor(&this->HarvesterLoadRate, (InfantryTypeClass *)&aP0_28.Capacity);
    this->Easy[0] = (int)aP0_52;
    this->Easy[1] = (int)aP0_56;
    this->Easy[2] = (int)aP0_60;
    aP0_28.Capacity = (int)&vt_VectorClass_UnitTypeClass_const;
    if ( *(_DWORD *)&aP0_28.IsInitialized )
    {
      if ( aP0_49 )
        __3_YAXPAX_Z(*(void **)&aP0_28.IsInitialized);
    }
    CountryName = (int *)HouseTypeClass::ReadCountryName(
                           (int)&v288,
                           a0,
                           &g_INI_Key_General,
                           (unsigned __int8 *)&stru_830620.__pad_579C[27020],
                           &this->Easy[3]);
    RulesClass::readSuperWeaponTypes(&this->Easy[3], CountryName);
    RulesClass::readCountries(&v288);
    this->Normal[18] = (int)GetINIClassInt(
                              a0,
                              &g_INI_Key_General,
                              (unsigned __int8 *)&stru_830620.__pad_579C[27008],
                              this->Normal[18]);
    INIClassInfantryTypeList = ReadINIClassInfantryTypeList(
                                 (INIClass *)&v288,
                                 a0,
                                 &g_INI_Key_General,
                                 aSecretinfantry,
                                 &this->__pad_C3C[196]);
    TypeList::CopyInfantry((int *)&this->__pad_C3C[196], (CCINIClass *)INIClassInfantryTypeList);
    TypeList::InfantryCleanup(&v288);
    BuildingTypes = (int *)BuildingClass::LoadBuildingTypes(
                             (int)&v288,
                             a0,
                             &g_INI_Key_General,
                             (unsigned __int8 *)&stru_830620.__pad_579C[26996],
                             &this->__pad_C3C[224]);
    RulesClass::readAircraftTypes((int *)&this->__pad_C3C[224], BuildingTypes);
    RulesClass::readInfantryTypes(&v288);
    BuildingTypeList = (VectorClass *)ReadINIClassBuildingTypeList(
                                        (INIClass *)&v288,
                                        a0,
                                        (VectorClass *)&g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[26980],
                                        &this->__pad_C3C[252]);
    TypeList::CopyAircraft((int *)&this->__pad_C3C[252], BuildingTypeList);
    RulesClass::readMaximums(&v288);
    Warheads = (VectorClass *)RulesClass::readWarheads(&this->__pad_C3C[196]);
    v164 = (char *)Warheads + RulesClass::readOverlayTypes(&this->__pad_C3C[224]);
    *(_DWORD *)&this->__pad_C3C[280] = &v164[RulesClass::readSmudgeTypes(&this->__pad_C3C[252])];
    this->Difficult[0] = INIClass::ReadInt_Overwrite(
                           (int)a0,
                           (unsigned __int8 *)&g_INI_Key_General,
                           (CCINIClass *)&stru_830620.__pad_579C[26968],
                           (INIClass *)this->Difficult[0]);
    this->Difficult[1] = INIClass::ReadInt_Overwrite(
                           (int)a0,
                           (unsigned __int8 *)&g_INI_Key_General,
                           (CCINIClass *)&stru_830620.__pad_579C[26948],
                           (INIClass *)this->Difficult[1]);
    this->Difficult[2] = INIClass::ReadInt_Overwrite(
                           (int)a0,
                           (unsigned __int8 *)&g_INI_Key_General,
                           (CCINIClass *)&stru_830620.__pad_579C[26924],
                           (INIClass *)this->Difficult[2]);
    LOBYTE(this->Difficult[3]) = INIClass::ReadBool_Overwrite(
                                   (int)a0,
                                   (unsigned __int8 *)&g_INI_Key_General,
                                   (CCINIClass *)&stru_830620.__pad_579C[26908],
                                   this->Difficult[3]);
    this->Difficult[4] = INIClass::ReadInt_Overwrite(
                           (int)a0,
                           (unsigned __int8 *)&g_INI_Key_General,
                           (CCINIClass *)&stru_830620.__pad_579C[26888],
                           (INIClass *)this->Difficult[4]);
    this->Difficult[5] = INIClass::ReadInt_Overwrite(
                           (int)a0,
                           (unsigned __int8 *)&g_INI_Key_General,
                           (CCINIClass *)&stru_830620.__pad_579C[26868],
                           (INIClass *)this->Difficult[5]);
    *(_DWORD *)&this->__pad_C3C[284] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26852],
                                         *(_DWORD *)&this->__pad_C3C[284]);
    *(_DWORD *)&this->__pad_C3C[288] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26836],
                                         *(_DWORD *)&this->__pad_C3C[288]);
    *(_DWORD *)&this->__pad_C3C[292] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26820],
                                         *(_DWORD *)&this->__pad_C3C[292]);
    *(_DWORD *)&this->__pad_C3C[296] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26800],
                                         *(INIClass **)&this->__pad_C3C[296]);
    *(double *)&v258[4] = *(float *)&this->__pad_C3C[300];
    *(float *)&this->__pad_C3C[300] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[26776],
                                        *(INIClass **)&v258[4]);
    this->__pad_C3C[304] = INIClass::ReadBool_Overwrite(
                             (int)a0,
                             (unsigned __int8 *)&g_INI_Key_General,
                             (CCINIClass *)&stru_830620.__pad_579C[26752],
                             this->__pad_C3C[304]);
    *(double *)&v258[4] = *(float *)&this->__pad_C3C[768];
    *(float *)&this->__pad_C3C[768] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[26736],
                                        *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_C3C[820] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&unk_82596C,
                                         *(_DWORD *)&this->__pad_C3C[820]);
    *(_DWORD *)&this->__pad_C3C[816] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26724],
                                         *(_DWORD *)&this->__pad_C3C[816]);
    *(_DWORD *)&this->__pad_C3C[824] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26716],
                                         *(_DWORD *)&this->__pad_C3C[824]);
    *(_DWORD *)&this->__pad_C3C[828] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26704],
                                         *(_DWORD *)&this->__pad_C3C[828]);
    *(_DWORD *)&this->__pad_C3C[832] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26692],
                                         *(_DWORD *)&this->__pad_C3C[832]);
    *(_DWORD *)&this->__pad_C3C[836] = GetINIClassInt(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[26680],
                                         *(_DWORD *)&this->__pad_C3C[836]);
    BYTE1(this->ElevationIncrement) = INIClass::ReadBool_Overwrite(
                                        (int)a0,
                                        (unsigned __int8 *)&g_INI_Key_General,
                                        (CCINIClass *)&stru_830620.__pad_579C[26664],
                                        BYTE1(this->ElevationIncrement));
    LOBYTE(this->ElevationIncrementBonus[0]) = INIClass::ReadBool_Overwrite(
                                                 (int)a0,
                                                 (unsigned __int8 *)&g_INI_Key_General,
                                                 (CCINIClass *)&stru_830620.__pad_579C[26648],
                                                 this->ElevationIncrementBonus[0]);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1308]);
    IntList = (VectorClass *)INIClass::ReadIntList(
                               a0,
                               (int)&v288,
                               &g_INI_Key_General,
                               (unsigned __int8 *)&stru_830620.__pad_579C[26636],
                               (void **)v257.vtable0,
                               v257.Items,
                               v257.Capacity,
                               *(__int16 *)&v257.IsInitialized,
                               *(int *)v258,
                               *(int *)&v258[4],
                               *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1308], IntList);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1336]);
    v166 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26620],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1336], v166);
    VectorClass::Dtor(&v288);
    *(_DWORD *)&this->__pad_C3C[1732] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[26584],
                                          *(INIClass **)&this->__pad_C3C[1732]);
    v167 = *(INIClass **)&this->__pad_C3C[1964];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1968];
    *(double *)&this->__pad_C3C[1964] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[26552],
                                          v167);
    BYTE1(this->ElevationBonusCap[1]) = INIClass::ReadBool_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[26532],
                                          BYTE1(this->ElevationBonusCap[1]));
    BYTE2(this->ElevationBonusCap[1]) = INIClass::ReadBool_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[26516],
                                          BYTE2(this->ElevationBonusCap[1]));
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1972]);
    v168 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26488],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1972], v168);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1876]);
    v169 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26464],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1876], v169);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1904]);
    v170 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26440],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1904], v170);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1932]);
    v171 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26424],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1932], v171);
    VectorClass::Dtor(&v288);
    HIBYTE(this->ElevationBonusCap[1]) = INIClass::ReadBool_Overwrite(
                                           (int)a0,
                                           (unsigned __int8 *)&g_INI_Key_General,
                                           (CCINIClass *)&stru_830620.__pad_579C[26404],
                                           HIBYTE(this->ElevationBonusCap[1]));
    *(_DWORD *)&this->__pad_C3C[1364] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[26376],
                                          *(INIClass **)&this->__pad_C3C[1364]);
    *(_DWORD *)&this->__pad_C3C[312] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26360],
                                         *(INIClass **)&this->__pad_C3C[312]);
    *(double *)&v258[4] = *(float *)&this->__pad_C3C[308];
    *(float *)&this->__pad_C3C[308] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[26332],
                                        *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_C3C[316] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26308],
                                         *(INIClass **)&this->__pad_C3C[316]);
    *(_DWORD *)&this->__pad_C3C[320] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26280],
                                         *(INIClass **)&this->__pad_C3C[320]);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[324]);
    v172 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26256],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[324], v172);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[352]);
    v173 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26232],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[352], v173);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[380]);
    v174 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26208],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[380], v174);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[408]);
    v175 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[26180],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[408], v175);
    VectorClass::Dtor(&v288);
    *(_DWORD *)&this->__pad_C3C[436] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26156],
                                         *(INIClass **)&this->__pad_C3C[436]);
    *(_DWORD *)&this->__pad_C3C[440] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26136],
                                         *(INIClass **)&this->__pad_C3C[440]);
    *(_DWORD *)&this->__pad_C3C[444] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26104],
                                         *(INIClass **)&this->__pad_C3C[444]);
    *(_DWORD *)&this->__pad_C3C[448] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26080],
                                         *(INIClass **)&this->__pad_C3C[448]);
    *(_DWORD *)&this->__pad_C3C[452] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26056],
                                         *(INIClass **)&this->__pad_C3C[452]);
    *(_DWORD *)&this->__pad_C3C[456] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26032],
                                         *(INIClass **)&this->__pad_C3C[456]);
    *(_DWORD *)&this->__pad_C3C[460] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[26008],
                                         *(INIClass **)&this->__pad_C3C[460]);
    *(_DWORD *)&this->__pad_C3C[464] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[25984],
                                         *(INIClass **)&this->__pad_C3C[464]);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[468]);
    v176 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25948],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[468], v176);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[496]);
    v177 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25924],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[496], v177);
    VectorClass::Dtor(&v288);
    *(_DWORD *)&this->__pad_C3C[524] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[25888],
                                         *(INIClass **)&this->__pad_C3C[524]);
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->MutateExplosion;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25868];
    *(_DWORD *)v258 = &g_INI_Key_General;
    *(_DWORD *)&this->MutateExplosion = INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(_DWORD *)&v258[8] = this->CollapseChance;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25848];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->CollapseChance = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(_DWORD *)&v258[8] = this->WeedCapacity;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25828];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->WeedCapacity = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(float *)&v258[8] = this->ExtraUnitLight;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25808];
    *(_DWORD *)v258 = &g_INI_Key_General;
    LODWORD(this->ExtraUnitLight) = INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(float *)&v258[8] = this->ExtraInfantryLight;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25788];
    *(_DWORD *)v258 = &g_INI_Key_General;
    LODWORD(this->ExtraInfantryLight) = INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(float *)&v258[8] = this->ExtraAircraftLight;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25760];
    *(_DWORD *)v258 = &g_INI_Key_General;
    LODWORD(this->ExtraAircraftLight) = INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(_DWORD *)&this->Paranoid = INIClass::ReadInt_Overwrite(
                                   (int)a0,
                                   (unsigned __int8 *)&g_INI_Key_General,
                                   (CCINIClass *)&stru_830620.__pad_579C[25732],
                                   *(INIClass **)&this->Paranoid);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[648]);
    v178 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25704],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[648], v178);
    VectorClass::Dtor(&v288);
    *(_DWORD *)&this->__pad_C3C[676] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[25680],
                                         *(INIClass **)&this->__pad_C3C[676]);
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[680];
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[25656];
    *(_DWORD *)v258 = &g_INI_Key_General;
    *(_DWORD *)&this->__pad_C3C[680] = INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[528]);
    v179 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25640],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[528], v179);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[556]);
    v180 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25620],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[556], v180);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[584]);
    v181 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25600],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[584], v181);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[612]);
    v182 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25580],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[612], v182);
    VectorClass::Dtor(&v288);
    *(_DWORD *)&this->__pad_C3C[640] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[25556],
                                         *(INIClass **)&this->__pad_C3C[640]);
    *(double *)&v258[4] = *(float *)&this->__pad_C3C[644];
    *(float *)&this->__pad_C3C[644] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[25532],
                                        *(INIClass **)&v258[4]);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1736]);
    v183 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25516],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1736], v183);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1764]);
    v184 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25496],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1764], v184);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1792]);
    v185 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25476],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1792], v185);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1820]);
    v186 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25452],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1820], v186);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1848]);
    v187 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25432],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1848], v187);
    VectorClass::Dtor(&v288);
    v188 = ReadINIClassInfantryTypeList(
             (INIClass *)&v288,
             a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[25416],
             &this->Difficult[6]);
    TypeList::CopyInfantry(&this->Difficult[6], (CCINIClass *)v188);
    TypeList::InfantryCleanup(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->Difficult[13]);
    v189 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25400],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull(&this->Difficult[13], v189);
    VectorClass::Dtor(&v288);
    v190 = ReadINIClassInfantryTypeList(
             (INIClass *)&v288,
             a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[25384],
             this->__pad_C3C);
    TypeList::CopyInfantry((int *)this->__pad_C3C, (CCINIClass *)v190);
    TypeList::InfantryCleanup(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[28]);
    v191 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25368],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[28], v191);
    VectorClass::Dtor(&v288);
    v192 = ReadINIClassInfantryTypeList(
             (INIClass *)&v288,
             a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[25352],
             &this->__pad_C3C[56]);
    TypeList::CopyInfantry((int *)&this->__pad_C3C[56], (CCINIClass *)v192);
    TypeList::InfantryCleanup(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[84]);
    v193 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25336],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[84], v193);
    VectorClass::Dtor(&v288);
    v194 = ReadINIClassInfantryTypeList(
             (INIClass *)&v288,
             a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[25320],
             &this->__pad_C3C[112]);
    TypeList::CopyInfantry((int *)&this->__pad_C3C[112], (CCINIClass *)v194);
    TypeList::InfantryCleanup(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[140]);
    v195 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25304],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[140], v195);
    VectorClass::Dtor(&v288);
    v196 = ReadINIClassInfantryTypeList(
             (INIClass *)&v288,
             a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[25288],
             &this->__pad_C3C[168]);
    TypeList::CopyInfantry((int *)&this->__pad_C3C[168], (CCINIClass *)v196);
    TypeList::InfantryCleanup(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1368]);
    v197 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25264],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1368], v197);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1396]);
    v198 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25236],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1396], v198);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1424]);
    v199 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25212],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1424], v199);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1452]);
    v200 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25184],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1452], v200);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1480]);
    v201 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25156],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1480], v201);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1508]);
    v202 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25132],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1508], v202);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1536]);
    v203 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25104],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1536], v203);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1564]);
    v204 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25084],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1564], v204);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1592]);
    v205 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25064],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1592], v205);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1620]);
    v206 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25036],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1620], v206);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1648]);
    v207 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[25012],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1648], v207);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1676]);
    v208 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[24988],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1676], v208);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_C3C[1704]);
    v209 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[24964],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_C3C[1704], v209);
    VectorClass::Dtor(&v288);
    v210 = *(INIClass **)&this->__pad_C3C[2004];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2008];
    *(double *)&this->__pad_C3C[2004] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24952],
                                          v210);
    v211 = *(INIClass **)&this->__pad_C3C[2012];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2016];
    *(double *)&this->__pad_C3C[2012] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24936],
                                          v211);
    v212 = *(INIClass **)&this->__pad_C3C[2020];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2024];
    *(double *)&this->__pad_C3C[2020] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24924],
                                          v212);
    LOBYTE(this->ElevationIncrementBonus[1]) = INIClass::ReadBool_Overwrite(
                                                 (int)a0,
                                                 (unsigned __int8 *)&g_INI_Key_General,
                                                 (CCINIClass *)&stru_830620.__pad_579C[24904],
                                                 this->ElevationIncrementBonus[1]);
    v213 = *(INIClass **)&this->__pad_C3C[2204];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2208];
    *(double *)&this->__pad_C3C[2204] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24884],
                                          v213);
    *(_DWORD *)&this->__pad_C3C[2212] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24868],
                                          *(INIClass **)&this->__pad_C3C[2212]);
    v214 = *(INIClass **)&this->__pad_C3C[2220];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2224];
    *(double *)&this->__pad_C3C[2220] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24852],
                                          v214);
    v215 = *(INIClass **)&this->__pad_C3C[2228];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2232];
    *(double *)&this->__pad_C3C[2228] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24836],
                                          v215);
    *(_DWORD *)&this->__pad_C3C[2236] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24812],
                                          *(INIClass **)&this->__pad_C3C[2236]);
    *(_DWORD *)&this->__pad_C3C[2240] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24788],
                                          *(INIClass **)&this->__pad_C3C[2240]);
    *(_DWORD *)&this->__pad_C3C[2244] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24764],
                                          *(INIClass **)&this->__pad_C3C[2244]);
    v216 = *(INIClass **)&this->__pad_C3C[2252];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2256];
    *(double *)&this->__pad_C3C[2252] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24752],
                                          v216);
    v217 = *(INIClass **)&this->__pad_C3C[2268];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2272];
    *(double *)&this->__pad_C3C[2268] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24740],
                                          v217);
    v218 = *(INIClass **)&this->__pad_C3C[2284];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[2288];
    *(double *)&this->__pad_C3C[2284] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24720],
                                          v218);
    *(_DWORD *)&this->__pad_C3C[2276] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24700],
                                          *(INIClass **)&this->__pad_C3C[2276]);
    LightningDamage = (INIClass *)this->LightningDamage;
    *(_DWORD *)&v258[8] = this->LightningStormDuration;
    *(double *)&this->LightningDamage = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[24688],
                                          LightningDamage);
    v220 = (INIClass *)this->RepairPercent[1];
    *(_DWORD *)&v258[8] = this->IRepairStep;
    *(double *)&this->RepairPercent[1] = INIClass::ReadDouble_Overwrite(
                                           (int)a0,
                                           &g_INI_Key_General,
                                           (unsigned __int8 *)&stru_830620.__pad_579C[24676],
                                           v220);
    v221 = (INIClass *)this->GrowthRate[0];
    *(_DWORD *)&v258[8] = this->GrowthRate[1];
    *(double *)this->GrowthRate = INIClass::ReadDouble_Overwrite(
                                    (int)a0,
                                    &g_INI_Key_General,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[24664],
                                    v221);
    v222 = (INIClass *)this->MovieTime[1];
    *(_DWORD *)&v258[8] = this->TiberiumShortScan;
    *(double *)&this->MovieTime[1] = INIClass::ReadDouble_Overwrite(
                                       (int)a0,
                                       &g_INI_Key_General,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[24648],
                                       v222);
    v223 = (INIClass *)this->ConditionYellow[0];
    *(_DWORD *)&v258[8] = this->ConditionYellow[1];
    *(double *)this->ConditionYellow = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[24632],
                                         v223);
    this->IRepairRate[1] = INIClass::ReadInt_Overwrite(
                             (int)a0,
                             (unsigned __int8 *)&g_INI_Key_General,
                             (CCINIClass *)&stru_830620.__pad_579C[24620],
                             (INIClass *)this->IRepairRate[1]);
    this->ConditionRed[0] = INIClass::ReadInt_Overwrite(
                              (int)a0,
                              (unsigned __int8 *)&g_INI_Key_General,
                              (CCINIClass *)&stru_830620.__pad_579C[24608],
                              (INIClass *)this->ConditionRed[0]);
    v224 = (INIClass *)this->IdleActionFrequency[0];
    *(_DWORD *)&v258[8] = this->IdleActionFrequency[1];
    *(double *)this->IdleActionFrequency = INIClass::ReadDouble_Overwrite(
                                             (int)a0,
                                             &g_INI_Key_General,
                                             (unsigned __int8 *)&stru_830620.__pad_579C[24596],
                                             v224);
    CloseEnough = (INIClass *)this->CloseEnough;
    *(_DWORD *)&v258[8] = this->Stray;
    *(double *)&this->CloseEnough = INIClass::ReadDouble_Overwrite(
                                      (int)a0,
                                      &g_INI_Key_General,
                                      (unsigned __int8 *)&stru_830620.__pad_579C[24584],
                                      CloseEnough);
    RelaxedStray = (INIClass *)this->RelaxedStray;
    *(_DWORD *)&v258[8] = this->GuardModeStray;
    *(double *)&this->RelaxedStray = INIClass::ReadDouble_Overwrite(
                                       (int)a0,
                                       &g_INI_Key_General,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[24572],
                                       RelaxedStray);
    *(_DWORD *)&v258[8] = this->C4Delay[0];
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[24564];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->C4Delay[0] = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(_DWORD *)&v258[8] = this->C4Delay[1];
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[24548];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->C4Delay[1] = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(_DWORD *)&v258[8] = this->CreditReserve;
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[24532];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->CreditReserve = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    *(_DWORD *)&v258[8] = this->BuildSpeed[1];
    *(_DWORD *)&v258[4] = &stru_830620.__pad_579C[24520];
    *(_DWORD *)v258 = &g_INI_Key_General;
    this->BuildSpeed[1] = (int)INIClass::ReadCoord(*(double *)v258, *(int *)&v258[8], aP3_8, aP3_12);
    BYTE2(this->ElevationIncrement) = INIClass::ReadBool_Overwrite(
                                        (int)a0,
                                        (unsigned __int8 *)&g_INI_Key_General,
                                        (CCINIClass *)&stru_830620.__pad_579C[24508],
                                        BYTE2(this->ElevationIncrement));
    this->AttackingAircraftSightRange = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24480],
                                          (INIClass *)this->AttackingAircraftSightRange);
    this->RepairRate[1] = INIClass::ReadInt_Overwrite(
                            (int)a0,
                            (unsigned __int8 *)&g_INI_Key_General,
                            (CCINIClass *)&stru_830620.__pad_579C[24456],
                            (INIClass *)this->RepairRate[1]);
    this->SpeakDelay[1] = INIClass::ReadInt_Overwrite(
                            (int)a0,
                            (unsigned __int8 *)&g_INI_Key_General,
                            (CCINIClass *)&stru_830620.__pad_579C[24432],
                            (INIClass *)this->SpeakDelay[1]);
    *(_DWORD *)&this->FineDiffControl = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24412],
                                          *(INIClass **)&this->FineDiffControl);
    *(_DWORD *)&this->SeparateAircraft = INIClass::ReadInt_Overwrite(
                                           (int)a0,
                                           (unsigned __int8 *)&g_INI_Key_General,
                                           (CCINIClass *)&stru_830620.__pad_579C[24396],
                                           *(INIClass **)&this->SeparateAircraft);
    *(_DWORD *)&this->PlayerReturnFire = INIClass::ReadInt_Overwrite(
                                           (int)a0,
                                           (unsigned __int8 *)&g_INI_Key_General,
                                           (CCINIClass *)&stru_830620.__pad_579C[24372],
                                           *(INIClass **)&this->PlayerReturnFire);
    *(_DWORD *)&this->ShroudGrow = INIClass::ReadInt_Overwrite(
                                     (int)a0,
                                     (unsigned __int8 *)&g_INI_Key_General,
                                     (CCINIClass *)&stru_830620.__pad_579C[24352],
                                     *(INIClass **)&this->ShroudGrow);
    LODWORD(this->EngineerCaptureLevel) = INIClass::ReadInt_Overwrite(
                                            (int)a0,
                                            (unsigned __int8 *)&g_INI_Key_General,
                                            (CCINIClass *)&stru_830620.__pad_579C[24328],
                                            (INIClass *)LODWORD(this->EngineerCaptureLevel));
    LODWORD(this->TalkBubbleTime) = INIClass::ReadInt_Overwrite(
                                      (int)a0,
                                      (unsigned __int8 *)&g_INI_Key_General,
                                      (CCINIClass *)&stru_830620.__pad_579C[24308],
                                      (INIClass *)LODWORD(this->TalkBubbleTime));
    this->RadDurationMultiple = INIClass::ReadInt_Overwrite(
                                  (int)a0,
                                  (unsigned __int8 *)&g_INI_Key_General,
                                  (CCINIClass *)&stru_830620.__pad_579C[24288],
                                  (INIClass *)this->RadDurationMultiple);
    this->RadLevelMax = SmallFunc_67B500(
                          a0,
                          &g_INI_Key_General,
                          (unsigned __int8 *)&stru_830620.__pad_579C[24268],
                          this->RadLevelMax);
    LOBYTE(this->RadApplicationDelay) = INIClass::ReadBool_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[24248],
                                          this->RadApplicationDelay);
    this->RadLevelDelay = INIClass::ReadInt_Overwrite(
                            (int)a0,
                            (unsigned __int8 *)&g_INI_Key_General,
                            (CCINIClass *)&stru_830620.__pad_579C[24228],
                            (INIClass *)this->RadLevelDelay);
    this->RadLightDelay = INIClass::ReadInt_Overwrite(
                            (int)a0,
                            (unsigned __int8 *)&g_INI_Key_General,
                            (CCINIClass *)&stru_830620.__pad_579C[24208],
                            (INIClass *)this->RadLightDelay);
    this->RadLevelFactor[0] = INIClass::ReadInt_Overwrite(
                                (int)a0,
                                (unsigned __int8 *)&g_INI_Key_General,
                                (CCINIClass *)&stru_830620.__pad_579C[24180],
                                (INIClass *)this->RadLevelFactor[0]);
    this->RadLevelFactor[1] = INIClass::ReadInt_Overwrite(
                                (int)a0,
                                (unsigned __int8 *)&g_INI_Key_General,
                                (CCINIClass *)&stru_830620.__pad_579C[24148],
                                (INIClass *)this->RadLevelFactor[1]);
    LOBYTE(this->RadLightFactor[0]) = INIClass::ReadBool_Overwrite(
                                        (int)a0,
                                        (unsigned __int8 *)&g_INI_Key_General,
                                        (CCINIClass *)&stru_830620.__pad_579C[24132],
                                        this->RadLightFactor[0]);
    *(_DWORD *)&this->__pad_240[600] = SmallFunc_67BCE0(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[24120],
                                         *(_DWORD *)&this->__pad_240[600]);
    *(double *)&v258[4] = (double)*(int *)&this->__pad_240[604];
    v227 = INIClass::ReadDouble_Overwrite(
             (int)a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[24096],
             *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[604] = Math::RoundToInt(v227 * 100.0);
    *(_DWORD *)&this->__pad_240[608] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[24080],
                                         *(INIClass **)&this->__pad_240[608]);
    *(_DWORD *)&this->__pad_240[612] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[24060],
                                         *(INIClass **)&this->__pad_240[612]);
    *(_DWORD *)&this->__pad_240[616] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[24036],
                                         *(INIClass **)&this->__pad_240[616]);
    *(_DWORD *)&this->__pad_240[620] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[24016],
                                         *(INIClass **)&this->__pad_240[620]);
    *(_DWORD *)&this->__pad_240[624] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23996],
                                         *(INIClass **)&this->__pad_240[624]);
    *(_DWORD *)&this->__pad_240[628] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23976],
                                         *(INIClass **)&this->__pad_240[628]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[632];
    *(float *)&this->__pad_240[632] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23952],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[636];
    *(float *)&this->__pad_240[636] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23932],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[640];
    *(float *)&this->__pad_240[640] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23912],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = (double)*(int *)&this->__pad_240[644];
    v228 = INIClass::ReadDouble_Overwrite(
             (int)a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[23892],
             *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[644] = Math::RoundToInt(v228);
    *(double *)&v258[4] = *(float *)&this->__pad_240[648];
    *(float *)&this->__pad_240[648] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23868],
                                        *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[652] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23848],
                                         *(INIClass **)&this->__pad_240[652]);
    *(_DWORD *)&this->__pad_240[656] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23832],
                                         *(INIClass **)&this->__pad_240[656]);
    *(_DWORD *)&this->__pad_240[660] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23812],
                                         *(INIClass **)&this->__pad_240[660]);
    *(_DWORD *)&this->__pad_240[664] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23792],
                                         *(INIClass **)&this->__pad_240[664]);
    this->__pad_240[668] = INIClass::ReadBool_Overwrite(
                             (int)a0,
                             (unsigned __int8 *)&g_INI_Key_General,
                             (CCINIClass *)&stru_830620.__pad_579C[23772],
                             this->__pad_240[668]);
    *(_DWORD *)&this->__pad_240[672] = GetINIClassKeyword(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[23756],
                                         *(_DWORD *)&this->__pad_240[672]);
    *(_DWORD *)&this->__pad_240[676] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23736],
                                         *(INIClass **)&this->__pad_240[676]);
    *(_DWORD *)&this->__pad_240[680] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23720],
                                         *(INIClass **)&this->__pad_240[680]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[684];
    *(float *)&this->__pad_240[684] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23700],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[688];
    *(float *)&this->__pad_240[688] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23684],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[692];
    *(float *)&this->__pad_240[692] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23668],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = (double)*(int *)&this->__pad_240[696];
    v229 = INIClass::ReadDouble_Overwrite(
             (int)a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[23652],
             *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[696] = Math::RoundToInt(v229);
    *(double *)&v258[4] = *(float *)&this->__pad_240[700];
    *(float *)&this->__pad_240[700] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23632],
                                        *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[704] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23616],
                                         *(INIClass **)&this->__pad_240[704]);
    *(_DWORD *)&this->__pad_240[708] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23604],
                                         *(INIClass **)&this->__pad_240[708]);
    *(_DWORD *)&this->__pad_240[712] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23584],
                                         *(INIClass **)&this->__pad_240[712]);
    *(_DWORD *)&this->__pad_240[716] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23568],
                                         *(INIClass **)&this->__pad_240[716]);
    this->__pad_240[720] = INIClass::ReadBool_Overwrite(
                             (int)a0,
                             (unsigned __int8 *)&g_INI_Key_General,
                             (CCINIClass *)&stru_830620.__pad_579C[23552],
                             this->__pad_240[720]);
    *(_DWORD *)&this->__pad_240[724] = GetINIClassKeyword(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[23540],
                                         *(_DWORD *)&this->__pad_240[724]);
    *(_DWORD *)&this->__pad_240[728] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23520],
                                         *(INIClass **)&this->__pad_240[728]);
    *(_DWORD *)&this->__pad_240[732] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23504],
                                         *(INIClass **)&this->__pad_240[732]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[736];
    *(float *)&this->__pad_240[736] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23484],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[740];
    *(float *)&this->__pad_240[740] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23468],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->__pad_240[744];
    *(float *)&this->__pad_240[744] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23452],
                                        *(INIClass **)&v258[4]);
    *(double *)&v258[4] = (double)*(int *)&this->__pad_240[748];
    v230 = INIClass::ReadDouble_Overwrite(
             (int)a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[23436],
             *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[748] = Math::RoundToInt(v230);
    *(double *)&v258[4] = *(float *)&this->__pad_240[700];
    *(float *)&this->__pad_240[752] = INIClass::ReadDouble_Overwrite(
                                        (int)a0,
                                        &g_INI_Key_General,
                                        (unsigned __int8 *)&stru_830620.__pad_579C[23416],
                                        *(INIClass **)&v258[4]);
    *(_DWORD *)&this->__pad_240[756] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23400],
                                         *(INIClass **)&this->__pad_240[756]);
    *(_DWORD *)&this->__pad_240[760] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23388],
                                         *(INIClass **)&this->__pad_240[760]);
    *(_DWORD *)&this->__pad_240[764] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23368],
                                         *(INIClass **)&this->__pad_240[764]);
    *(_DWORD *)&this->__pad_240[768] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23352],
                                         *(INIClass **)&this->__pad_240[768]);
    this->__pad_240[772] = INIClass::ReadBool_Overwrite(
                             (int)a0,
                             (unsigned __int8 *)&g_INI_Key_General,
                             (CCINIClass *)&stru_830620.__pad_579C[23336],
                             this->__pad_240[772]);
    *(_DWORD *)&this->__pad_240[776] = GetINIClassKeyword(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[23324],
                                         *(_DWORD *)&this->__pad_240[776]);
    *(_DWORD *)&this->__pad_240[780] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[23308],
                                         *(INIClass **)&this->__pad_240[780]);
    this->NodGateOne = (void *)INIClass::ReadInt_Overwrite(
                                 (int)a0,
                                 (unsigned __int8 *)&g_INI_Key_General,
                                 (CCINIClass *)&stru_830620.__pad_579C[23284],
                                 (INIClass *)this->NodGateOne);
    this->NodGateTwo = (void *)INIClass::ReadInt_Overwrite(
                                 (int)a0,
                                 (unsigned __int8 *)&g_INI_Key_General,
                                 (CCINIClass *)&stru_830620.__pad_579C[23260],
                                 (INIClass *)this->NodGateTwo);
    WallTower = (INIClass *)this->WallTower;
    *(_DWORD *)&v258[8] = this->BuildConst[0];
    *(double *)&this->WallTower = INIClass::ReadDouble_Overwrite(
                                    (int)a0,
                                    &g_INI_Key_General,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[23244],
                                    WallTower);
    v232 = (INIClass *)this->BuildPower[0];
    *(_DWORD *)&v258[8] = this->BuildRefinery[0];
    *(double *)this->BuildPower = INIClass::ReadDouble_Overwrite(
                                    (int)a0,
                                    &g_INI_Key_General,
                                    (unsigned __int8 *)&stru_830620.__pad_579C[23220],
                                    v232);
    v233 = (INIClass *)this->BuildBarracks[0];
    *(_DWORD *)&v258[8] = this->BuildTech[0];
    *(double *)this->BuildBarracks = INIClass::ReadDouble_Overwrite(
                                       (int)a0,
                                       &g_INI_Key_General,
                                       (unsigned __int8 *)&stru_830620.__pad_579C[23204],
                                       v233);
    this->BuildWeapons[0] = INIClass::ReadInt_Overwrite(
                              (int)a0,
                              (unsigned __int8 *)&g_INI_Key_General,
                              (CCINIClass *)&stru_830620.__pad_579C[23188],
                              (INIClass *)this->BuildWeapons[0]);
    this->VeteranCombat[1] = INIClass::ReadInt_Overwrite(
                               (int)a0,
                               (unsigned __int8 *)&g_INI_Key_General,
                               (CCINIClass *)&stru_830620.__pad_579C[23168],
                               (INIClass *)this->VeteranCombat[1]);
    v234 = (INIClass *)this->ChargeToDrainRatio[0];
    *(_DWORD *)&v258[8] = this->ChargeToDrainRatio[1];
    *(double *)this->ChargeToDrainRatio = INIClass::ReadDouble_Overwrite(
                                            (int)a0,
                                            &g_INI_Key_General,
                                            (unsigned __int8 *)&stru_830620.__pad_579C[23148],
                                            v234);
    v235 = (INIClass *)this->WallBuildSpeedCoefficient[0];
    *(_DWORD *)&v258[8] = this->WallBuildSpeedCoefficient[1];
    *(double *)this->WallBuildSpeedCoefficient = INIClass::ReadDouble_Overwrite(
                                                   (int)a0,
                                                   &g_INI_Key_General,
                                                   (unsigned __int8 *)&stru_830620.__pad_579C[23120],
                                                   v235);
    v236 = *(INIClass **)&this->__pad_240[800];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_240[804];
    *(double *)&this->__pad_240[800] = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[23084],
                                         v236);
    v237 = *(INIClass **)&this->__pad_240[792];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_240[796];
    *(double *)&this->__pad_240[792] = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[23052],
                                         v237);
    v238 = (INIClass *)this->AITriggerSuccessWeightDelta[0];
    *(_DWORD *)&v258[8] = this->AITriggerSuccessWeightDelta[1];
    *(double *)this->AITriggerSuccessWeightDelta = INIClass::ReadDouble_Overwrite(
                                                     (int)a0,
                                                     &g_INI_Key_General,
                                                     (unsigned __int8 *)&stru_830620.__pad_579C[23024],
                                                     v238);
    v239 = (INIClass *)this->AITriggerFailureWeightDelta[0];
    *(_DWORD *)&v258[8] = this->AITriggerFailureWeightDelta[1];
    *(double *)this->AITriggerFailureWeightDelta = INIClass::ReadDouble_Overwrite(
                                                     (int)a0,
                                                     &g_INI_Key_General,
                                                     (unsigned __int8 *)&stru_830620.__pad_579C[22996],
                                                     v239);
    v240 = (INIClass *)this->AITriggerTrackRecordCoefficient[0];
    *(_DWORD *)&v258[8] = this->AITriggerTrackRecordCoefficient[1];
    *(double *)this->AITriggerTrackRecordCoefficient = INIClass::ReadDouble_Overwrite(
                                                         (int)a0,
                                                         &g_INI_Key_General,
                                                         (unsigned __int8 *)&stru_830620.__pad_579C[22964],
                                                         v240);
    this->RadTintFactor[0] = INIClass::ReadInt_Overwrite(
                               (int)a0,
                               (unsigned __int8 *)&g_INI_Key_General,
                               (CCINIClass *)&stru_830620.__pad_579C[22948],
                               (INIClass *)this->RadTintFactor[0]);
    this->InfantryHeadPop = (void *)INIClass::ReadInt_Overwrite(
                                      (int)a0,
                                      (unsigned __int8 *)&g_INI_Key_General,
                                      (CCINIClass *)&stru_830620.__pad_579C[22932],
                                      (INIClass *)this->InfantryHeadPop);
    this->InfantryNuked = (void *)INIClass::ReadInt_Overwrite(
                                    (int)a0,
                                    (unsigned __int8 *)&g_INI_Key_General,
                                    (CCINIClass *)&stru_830620.__pad_579C[22908],
                                    (INIClass *)this->InfantryNuked);
    *(double *)&v258[4] = *(float *)&this->InfantryExplode;
    *(float *)&this->InfantryExplode = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[22892],
                                         *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->FlamingInfantry;
    *(float *)&this->FlamingInfantry = INIClass::ReadDouble_Overwrite(
                                         (int)a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[22868],
                                         *(INIClass **)&v258[4]);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_240[508]);
    v241 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[22836],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_240[508], v241);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_240[536]);
    v242 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[22804],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_240[536], v242);
    VectorClass::Dtor(&v288);
    VectorClass::Copy(&v257, (VectorClass *)&this->__pad_240[564]);
    v243 = (VectorClass *)INIClass::ReadIntList(
                            a0,
                            (int)&v288,
                            &g_INI_Key_General,
                            (unsigned __int8 *)&stru_830620.__pad_579C[22784],
                            (void **)v257.vtable0,
                            v257.Items,
                            v257.Capacity,
                            *(__int16 *)&v257.IsInitialized,
                            *(int *)v258,
                            *(int *)&v258[4],
                            *(int *)&v258[8]);
    TypeList::CopyFull((int *)&this->__pad_240[564], v243);
    VectorClass::Dtor(&v288);
    this->NukeTakeOff = (void *)INIClass::ReadInt_Overwrite(
                                  (int)a0,
                                  (unsigned __int8 *)&g_INI_Key_General,
                                  (CCINIClass *)&stru_830620.__pad_579C[22764],
                                  (INIClass *)this->NukeTakeOff);
    *(double *)&v258[4] = *(float *)&this->Wake;
    *(float *)&this->Wake = INIClass::ReadDouble_Overwrite(
                              (int)a0,
                              &g_INI_Key_General,
                              (unsigned __int8 *)&stru_830620.__pad_579C[22740],
                              *(INIClass **)&v258[4]);
    v244 = *(INIClass **)&this->__pad_C3C[1028];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1032];
    *(double *)&this->__pad_C3C[1028] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22704],
                                          v244);
    v245 = *(INIClass **)&this->__pad_C3C[1036];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1040];
    *(double *)&this->__pad_C3C[1036] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22664],
                                          v245);
    v246 = *(INIClass **)&this->__pad_C3C[1044];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1048];
    *(double *)&this->__pad_C3C[1044] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22624],
                                          v246);
    v247 = *(INIClass **)&this->__pad_C3C[1052];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1056];
    *(double *)&this->__pad_C3C[1052] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22588],
                                          v247);
    v248 = *(INIClass **)&this->__pad_C3C[1060];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1064];
    *(double *)&this->__pad_C3C[1060] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22552],
                                          v248);
    v249 = *(INIClass **)&this->__pad_C3C[1068];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1072];
    *(double *)&this->__pad_C3C[1068] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22520],
                                          v249);
    v250 = *(INIClass **)&this->__pad_C3C[1076];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1080];
    *(double *)&this->__pad_C3C[1076] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22484],
                                          v250);
    v251 = *(INIClass **)&this->__pad_C3C[1084];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1088];
    *(double *)&this->__pad_C3C[1084] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22448],
                                          v251);
    v252 = *(INIClass **)&this->__pad_C3C[1092];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1096];
    *(double *)&this->__pad_C3C[1092] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22416],
                                          v252);
    v253 = *(INIClass **)&this->__pad_C3C[1100];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1104];
    *(double *)&this->__pad_C3C[1100] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22384],
                                          v253);
    v254 = *(INIClass **)&this->__pad_C3C[1108];
    *(_DWORD *)&v258[8] = *(_DWORD *)&this->__pad_C3C[1112];
    *(double *)&this->__pad_C3C[1108] = INIClass::ReadDouble_Overwrite(
                                          (int)a0,
                                          &g_INI_Key_General,
                                          (unsigned __int8 *)&stru_830620.__pad_579C[22360],
                                          v254);
    this->MaximumQueuedObjects = INIClass::ReadInt_Overwrite(
                                   (int)a0,
                                   (unsigned __int8 *)&g_INI_Key_General,
                                   (CCINIClass *)&stru_830620.__pad_579C[22336],
                                   (INIClass *)this->MaximumQueuedObjects);
    this->AircraftFogReveal = INIClass::ReadInt_Overwrite(
                                (int)a0,
                                (unsigned __int8 *)&g_INI_Key_General,
                                (CCINIClass *)&stru_830620.__pad_579C[22316],
                                (INIClass *)this->AircraftFogReveal);
    this->DigSound = INIClass::ReadInt_Overwrite(
                       (int)a0,
                       (unsigned __int8 *)&g_INI_Key_General,
                       (CCINIClass *)&stru_830620.__pad_579C[22296],
                       (INIClass *)this->DigSound);
    this->CreateUnitSound = INIClass::ReadInt_Overwrite(
                              (int)a0,
                              (unsigned __int8 *)&g_INI_Key_General,
                              (CCINIClass *)&stru_830620.__pad_579C[22276],
                              (INIClass *)this->CreateUnitSound);
    this->CreateAircraftSound = INIClass::ReadInt_Overwrite(
                                  (int)a0,
                                  (unsigned __int8 *)&g_INI_Key_General,
                                  (CCINIClass *)&stru_830620.__pad_579C[22264],
                                  (INIClass *)this->CreateAircraftSound);
    *(_DWORD *)&this->__pad_C3C[952] = SmallFunc_67BD80(
                                         a0,
                                         &g_INI_Key_General,
                                         (unsigned __int8 *)&stru_830620.__pad_579C[22244],
                                         *(_DWORD *)&this->__pad_C3C[952]);
    TypeList = (int *)RulesClass::LoadTypeList(
                        (int)&v288,
                        a0,
                        &g_INI_Key_General,
                        (unsigned __int8 *)&stru_830620.__pad_579C[22220],
                        &this->__pad_C3C[956]);
    RulesClass::readBuildingTypes((int *)&this->__pad_C3C[956], TypeList);
    RulesClass::readVehicleTypes(&v288);
    *(_DWORD *)&this->__pad_C3C[984] = INIClass::ReadInt_Overwrite(
                                         (int)a0,
                                         (unsigned __int8 *)&g_INI_Key_General,
                                         (CCINIClass *)&stru_830620.__pad_579C[22192],
                                         *(INIClass **)&this->__pad_C3C[984]);
    this->BaseUnderAttackSound = INIClass::ReadInt_Overwrite(
                                   (int)a0,
                                   (unsigned __int8 *)&g_INI_Key_General,
                                   (CCINIClass *)&stru_830620.__pad_579C[22168],
                                   (INIClass *)this->BaseUnderAttackSound);
    this->InfantryVirus = (void *)INIClass::ReadInt_Overwrite(
                                    (int)a0,
                                    (unsigned __int8 *)&g_INI_Key_General,
                                    (CCINIClass *)&stru_830620.__pad_579C[22144],
                                    (INIClass *)this->InfantryVirus);
    *(_DWORD *)&this->__pad_C3C[1288] = INIClass::ReadInt_Overwrite(
                                          (int)a0,
                                          (unsigned __int8 *)&g_INI_Key_General,
                                          (CCINIClass *)&stru_830620.__pad_579C[22128],
                                          *(INIClass **)&this->__pad_C3C[1288]);
    *(double *)&v258[4] = *(float *)this->WallPenetratorThreshold;
    *(float *)this->WallPenetratorThreshold = INIClass::ReadDouble_Overwrite(
                                                (int)a0,
                                                &g_INI_Key_General,
                                                (unsigned __int8 *)&stru_830620.__pad_579C[22104],
                                                *(INIClass **)&v258[4]);
    *(double *)&v258[4] = *(float *)&this->WallPenetratorThreshold[1];
    *(float *)&this->WallPenetratorThreshold[1] = INIClass::ReadDouble_Overwrite(
                                                    (int)a0,
                                                    &g_INI_Key_General,
                                                    (unsigned __int8 *)&stru_830620.__pad_579C[22104],
                                                    *(INIClass **)&v258[4]);
    *(_QWORD *)&aP0_28.vtable0 = *(unsigned int *)this->LocalRadarColor;
    *(double *)&v258[4] = (double)*(__int64 *)&aP0_28.vtable0 * 0.016666668;
    v256 = INIClass::ReadDouble_Overwrite(
             (int)a0,
             &g_INI_Key_General,
             (unsigned __int8 *)&stru_830620.__pad_579C[22088],
             *(INIClass **)&v258[4]);
    result = Math::RoundToInt(v256 * 60.0);
    *(_DWORD *)this->LocalRadarColor = result;
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}

