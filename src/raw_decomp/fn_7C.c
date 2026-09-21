// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x007C0490  ObjectClass::Audio_Process_7C0490  this=DSurface  sig=csp ====
int __thiscall sub_7C0490(_DWORD *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < this->q022; ++i ) /*0x7c049e*/
  {
    result = FillAudioStreamBuffer((int)this, 32); /*0x7c04a7*/
    if ( result == -1 ) /*0x7c04af*/
    {
      ++this->DSurface_field_0x14; /*0x7c04b1*/
    }
    else if ( result != -9 && result != -11 ) /*0x7c04be*/
    {
      return result; /*0x7c04be*/
    }
  }
  return -1; /*0x7c04ce*/
}


// ==== 0x007C04E0  Audio_Process_7C04E0  this=DSurface  sig=ida-proto ====
char __fastcall sub_7C04E0(int a1, int a2)
{
  int v3; // eax
  unsigned __int16 *v4; // esi
  int v5; // ecx

  if ( !a2 ) /*0x7c04e4*/
    return 1; /*0x7c04ea*/
  v3 = *(unsigned __int16 *)(a1 + 1812); /*0x7c04ed*/
  if ( (_WORD)v3 && (*(_BYTE *)(a1 + 1814) & 3) != 0 ) /*0x7c0503*/
  {
    v4 = *(unsigned __int16 **)(a1 + 1820); /*0x7c0505*/
    v5 = 0; /*0x7c050b*/
    while ( a2 != *v4 ) /*0x7c0518*/
    {
      ++v5; /*0x7c051a*/
      v4 += 2; /*0x7c051b*/
      if ( v5 >= v3 ) /*0x7c0520*/
        return 0; /*0x7c0520*/
    }
    return 1; /*0x7c0518*/
  }
  return 0; /*0x7c04e6*/
}


// ==== 0x007C0530  Audio_Process_7C0530  this=DSurface  sig=ida-proto ====
int __fastcall Audio_Process_7C0530(int a1, int edx0, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  DSurface *v7; // eax
  _DWORD *v8; // ecx
  DSurface *v9; // eax
  int v10; // edx
  _DWORD *v11; // ecx
  int v12; // ecx
  int result; // eax
  int a2; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  v4 = -1; /*0x7c0539*/
  v5 = *(_DWORD *)(a1 + 368); /*0x7c053c*/
  v16 = -1; /*0x7c0542*/
  v17 = v5; /*0x7c0546*/
  if ( edx0 > *(_DWORD *)(a1 + 284) ) /*0x7c0552*/
    return -6; /*0x7c0552*/
  v6 = *(_DWORD *)(a1 + 1892); /*0x7c0558*/
  if ( !v6 ) /*0x7c0562*/
    return -6; /*0x7c069d*/
  if ( *(_DWORD *)(a1 + 1888) ) /*0x7c0568*/
  {
    Audio_Process_7C06B0((DSurface *)a1, edx0, &a2, 0); /*0x7c0578*/
    if ( a3 ) /*0x7c0581*/
    {
      v4 = a2; /*0x7c060b*/
    }
    else
    {
      Audio_Process_7C06B0((DSurface *)a1, *(_DWORD *)(a1 + 388), &v15, 0); /*0x7c0595*/
      v4 = a2; /*0x7c059a*/
      if ( a2 == v15 ) /*0x7c05a2*/
        return v16; /*0x7c0697*/
    }
  }
  else
  {
    a2 = -1; /*0x7c05ac*/
    v7 = (DSurface *)edx0; /*0x7c05b0*/
    if ( edx0 >= 0 ) /*0x7c05b2*/
    {
      v8 = (_DWORD *)(v6 + 4 * edx0); /*0x7c05b4*/
      while ( (*v8 & 0x40000000) == 0 ) /*0x7c05bd*/
      {
        v7 = (DSurface *)((char *)v7 - 1); /*0x7c05bf*/
        --v8; /*0x7c05c0*/
        if ( (int)v7 < 0 ) /*0x7c05c5*/
          goto LABEL_13; /*0x7c05c5*/
      }
      v4 = (int)v7; /*0x7c05c9*/
      a2 = (int)v7; /*0x7c05cb*/
    }
LABEL_13:
    if ( !a3 ) /*0x7c05d3*/
    {
      v9 = *(DSurface **)(a1 + 388); /*0x7c05d5*/
      v10 = -1; /*0x7c05db*/
      v15 = -1; /*0x7c05e0*/
      if ( (int)v9 >= 0 ) /*0x7c05e4*/
      {
        v11 = (_DWORD *)(v6 + 4 * (_DWORD)v9); /*0x7c05e6*/
        while ( (*v11 & 0x40000000) == 0 ) /*0x7c05ef*/
        {
          v9 = (DSurface *)((char *)v9 - 1); /*0x7c05f1*/
          --v11; /*0x7c05f2*/
          if ( (int)v9 < 0 ) /*0x7c05f7*/
            goto LABEL_20; /*0x7c05f7*/
        }
        v10 = (int)v9; /*0x7c05fb*/
        v15 = (int)v9; /*0x7c05fd*/
      }
LABEL_20:
      if ( v4 == v10 ) /*0x7c0603*/
        return v16; /*0x7c0603*/
    }
  }
  if ( v4 < 0 ) /*0x7c0611*/
    return v16; /*0x7c0611*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))( /*0x7c0629*/
         a1,
         7,
         0,
         2 * (*(_DWORD *)(*(_DWORD *)(a1 + 1892) + 4 * v4) & 0xFFFFFFF)) )
  {
    return -6; /*0x7c0684*/
  }
  if ( a3 ) /*0x7c0637*/
  {
    v12 = v17; /*0x7c0639*/
    *(_DWORD *)(a1 + 372) = 0; /*0x7c063d*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c0643*/
    *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 1772); /*0x7c064f*/
    *(_DWORD *)(a1 + 356) = *(_DWORD *)(a1 + 1772); /*0x7c065b*/
    *(_DWORD *)(a1 + 384) = 0; /*0x7c0661*/
    *(_DWORD *)(v12 + 20) = 0; /*0x7c0667*/
  }
  result = FillAudioStreamBuffer(a1, 30); /*0x7c0671*/
  v16 = result; /*0x7c0676*/
  return result; /*0x7c067a*/
}


// ==== 0x007C06B0  Audio_Process_7C06B0  this=DSurface  sig=csp ====
int __fastcall Audio_Process_7C06B0(DSurface *aP0, int edx0, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int result; // eax
  unsigned __int16 *v8; // ebx

  v4 = *(_DWORD *)&aP0->__pad_518[584]; /*0x7c06b2*/
  v5 = *(unsigned __int16 *)&aP0->__pad_518[576]; /*0x7c06bd*/
  v6 = 1; /*0x7c06c4*/
  result = 0; /*0x7c06c9*/
  if ( (unsigned __int16)v5 <= 1u ) /*0x7c06d1*/
  {
LABEL_7:
    result = v5 - 1; /*0x7c06f6*/
  }
  else
  {
    v8 = (unsigned __int16 *)(v4 + 2); /*0x7c06d3*/
    while ( edx0 < *(v8 - 1) || edx0 >= *v8 ) /*0x7c06e7*/
    {
      ++result; /*0x7c06e9*/
      ++v6; /*0x7c06ea*/
      ++v8; /*0x7c06eb*/
      if ( v6 >= v5 ) /*0x7c06f0*/
      {
        v4 = *(_DWORD *)&aP0->__pad_518[584]; /*0x7c06f2*/
        goto LABEL_7; /*0x7c06f2*/
      }
    }
    v4 = *(_DWORD *)&aP0->__pad_518[584]; /*0x7c06fb*/
  }
  if ( a2 ) /*0x7c0705*/
    *a2 = *(unsigned __int16 *)(v4 + 2 * result); /*0x7c070d*/
  if ( a3 ) /*0x7c0715*/
  {
    if ( result >= v5 - 1 ) /*0x7c071a*/
      *a3 = aP0->field_10; /*0x7c0731*/
    else
      *a3 = *(unsigned __int16 *)(v4 + 2 * result + 2) - 1; /*0x7c0727*/
  }
  return result; /*0x7c071e*/
}


// ==== 0x007C0740  ProcessAudioStreamPlayback  this=DSurface  sig=csp ====
int __fastcall ProcessAudioStreamPlayback(int a1, DSurface *aP1, int arg0, char a4, char arg8, char *a5)
{
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  unsigned __int16 v16; // dx
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  DSurface *v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned __int16 *v24; // edx
  int v25; // ecx
  DSurface *v26; // ebp
  int result; // eax
  int v28; // edi
  char *v29; // ebx
  bool v30; // cc
  int v31; // eax
  int v32; // ebp
  int v33; // edi
  bool v34; // bl
  int v35; // ecx
  bool v36; // zf
  char v37; // [esp+13h] [ebp-15h]
  DSurface *v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  int a3; // [esp+1Ch] [ebp-Ch] BYREF
  DSurface *a2; // [esp+20h] [ebp-8h] BYREF
  DSurface *v42; // [esp+24h] [ebp-4h]
  DSurface *v43; // [esp+2Ch] [ebp+4h]
  int v44; // [esp+30h] [ebp+8h]
  char *a5a; // [esp+38h] [ebp+10h]

  v8 = *(_DWORD *)(a1 + 1892); /*0x7c074b*/
  v9 = *(_DWORD *)(a1 + 416); /*0x7c0751*/
  v42 = aP1; /*0x7c0759*/
  v39 = 0; /*0x7c075d*/
  if ( !v8 ) /*0x7c0765*/
    return -6; /*0x7c0765*/
  v38 = aP1; /*0x7c0771*/
  if ( *(int *)(a1 + 140) <= 1 ) /*0x7c0778*/
  {
    v37 = 1; /*0x7c0898*/
    a2 = aP1; /*0x7c089d*/
    a3 = (int)aP1; /*0x7c08a1*/
    goto LABEL_23; /*0x7c08a1*/
  }
  v37 = 0; /*0x7c0782*/
  if ( arg0 <= 0 ) /*0x7c0789*/
  {
    v39 = Audio_Process_7C19F0(a1, aP1, &a2, &a3); /*0x7c07f4*/
    v12 = Audio_Process_7C19F0(a1, *(DSurface **)(a1 + 388), 0, 0); /*0x7c07f8*/
    v10 = (int)a2; /*0x7c07fd*/
  }
  else
  {
    v39 = (int)aP1 / arg0; /*0x7c0792*/
    v10 = arg0 * ((int)aP1 / arg0); /*0x7c0796*/
    a2 = (DSurface *)v10; /*0x7c079b*/
    if ( v10 >= arg0 ) /*0x7c079f*/
    {
      v10 -= arg0; /*0x7c07a1*/
      a2 = (DSurface *)v10; /*0x7c07a3*/
    }
    if ( v39 ) /*0x7c07ad*/
    {
      a3 = v10 + arg0 - 1; /*0x7c07c6*/
      v12 = *(_DWORD *)(a1 + 388) / arg0; /*0x7c07d1*/
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 388); /*0x7c07af*/
      a3 = -1; /*0x7c07b5*/
      v12 = v11 / arg0; /*0x7c07be*/
    }
  }
  v38 = (DSurface *)v10; /*0x7c0801*/
  if ( arg8 ) /*0x7c080b*/
  {
    *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 1772); /*0x7c0876*/
    v14 = *(_DWORD *)(a1 + 1772); /*0x7c087c*/
LABEL_20:
    *(_DWORD *)(a1 + 356) = v14; /*0x7c0882*/
LABEL_21:
    *(_DWORD *)(a1 + 372) = 0; /*0x7c0888*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c0890*/
    goto LABEL_23; /*0x7c0896*/
  }
  if ( v12 != v39 ) /*0x7c0811*/
  {
    if ( !*(_DWORD *)(a1 + 372) ) /*0x7c0846*/
    {
      v14 = *(_DWORD *)(a1 + 360); /*0x7c0850*/
      while ( v14 != *(_DWORD *)(v9 + 4) || (*(_BYTE *)(v9 + 20) & 1) == 0 ) /*0x7c085f*/
      {
        v9 = *(_DWORD *)(v9 + 12); /*0x7c0861*/
        if ( *(_DWORD *)(a1 + 416) == v9 ) /*0x7c086c*/
          goto LABEL_20; /*0x7c086c*/
      }
    }
    goto LABEL_21; /*0x7c085f*/
  }
  v37 = 1; /*0x7c0817*/
  v38 = (DSurface *)(a3 + 1); /*0x7c081d*/
  v13 = *(_DWORD *)(a1 + 364); /*0x7c0821*/
  *(_DWORD *)(a1 + 360) = v13; /*0x7c0827*/
  *(_DWORD *)(a1 + 356) = *(_DWORD *)(v13 + 4); /*0x7c0832*/
  *(_DWORD *)(a1 + 372) = 0; /*0x7c0838*/
  *(_DWORD *)(a1 + 376) = 0; /*0x7c083e*/
LABEL_23:
  *a5 = v37; /*0x7c08a5*/
  if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && *(_DWORD *)(a1 + 1932) ) /*0x7c08bd*/
  {
    v15 = *(_DWORD *)(a1 + 270); /*0x7c08dd*/
    v16 = *(_WORD *)(a1 + 60); /*0x7c08e3*/
    v17 = v16 * *(unsigned __int8 *)(a1 + 62) * (*(unsigned __int8 *)(a1 + 63) >> 3) / *(_DWORD *)(a1 + 112); /*0x7c08f0*/
    if ( (*(_BYTE *)(a1 + 234) & 8) == 0 && !v15 ) /*0x7c08fe*/
      v15 = v16 * *(unsigned __int8 *)(a1 + 62) * (*(unsigned __int8 *)(a1 + 63) >> 3) / 2; /*0x7c0907*/
    if ( a4 && v15 > 0 ) /*0x7c0913*/
    {
      v18 = v15 / v17; /*0x7c0918*/
      v19 = v17 * (v15 / v17); /*0x7c091c*/
      if ( v15 > v19 ) /*0x7c0921*/
        ++v18; /*0x7c0923*/
      v20 = (DSurface *)((char *)aP1 - v18); /*0x7c0926*/
      v43 = (DSurface *)((char *)aP1 - v18); /*0x7c0928*/
      if ( (int)aP1 - v18 >= 0 ) /*0x7c092c*/
      {
        *(_DWORD *)(a1 + 1964) = v17 + v19 - v15; /*0x7c0943*/
      }
      else
      {
        v20 = 0; /*0x7c092e*/
        v43 = 0; /*0x7c0933*/
        *(_DWORD *)(a1 + 1964) = (_DWORD)aP1 * v17; /*0x7c0937*/
      }
      if ( (int)v20 < (int)v38 ) /*0x7c094d*/
        v38 = v20; /*0x7c094f*/
    }
    else
    {
      v43 = aP1; /*0x7c0955*/
      *(_DWORD *)(a1 + 1964) = 0; /*0x7c0959*/
    }
    if ( arg8 ) /*0x7c0969*/
    {
      memset(*(void **)(a1 + 1940), 0, *(_DWORD *)(a1 + 1948)); /*0x7c0982*/
      memset(*(void **)(a1 + 1932), 0, *(_DWORD *)(a1 + 152)); /*0x7c099e*/
      *(_DWORD *)(a1 + 1968) = 0; /*0x7c09af*/
      if ( v43 ) /*0x7c09b5*/
      {
        *(_DWORD *)(a1 + 1936) = v15; /*0x7c09c3*/
        v21 = 0; /*0x7c09c9*/
        v22 = (unsigned int)v15 / *(_DWORD *)(a1 + 156); /*0x7c09cb*/
        if ( v22 > 0 ) /*0x7c09d3*/
        {
          do /*0x7c09e3*/
          {
            ++v21; /*0x7c09db*/
            *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v21 - 1) = 1; /*0x7c09de*/
          }
          while ( v21 < v22 ); /*0x7c09e3*/
        }
      }
      else
      {
        *(_DWORD *)(a1 + 1936) = 0; /*0x7c09b7*/
      }
    }
  }
  else
  {
    a4 = 0; /*0x7c09e7*/
    v43 = aP1; /*0x7c09ec*/
    *(_DWORD *)(a1 + 1964) = 0; /*0x7c09f0*/
  }
  if ( !aP1 ) /*0x7c09fe*/
    goto LABEL_66; /*0x7c09fe*/
  v23 = *(unsigned __int16 *)(a1 + 1812); /*0x7c0a06*/
  if ( !(_WORD)v23 || (*(_BYTE *)(a1 + 1814) & 3) == 0 ) /*0x7c0a18*/
  {
LABEL_51:
    if ( !(*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))( /*0x7c0a55*/
            a1,
            7,
            0,
            2 * (*(_DWORD *)(*(_DWORD *)(a1 + 1892) + 4 * (_DWORD)v38) & 0xFFFFFFF)) )
    {
      v26 = v38; /*0x7c0a67*/
      result = -1; /*0x7c0a6b*/
      *(_DWORD *)(a1 + 384) = v38; /*0x7c0a6e*/
      v28 = 5; /*0x7c0a76*/
      if ( v39 ) /*0x7c0a7b*/
        v28 = 21; /*0x7c0a7d*/
      if ( !a4 ) /*0x7c0a88*/
        v28 |= 2u; /*0x7c0a8a*/
      v29 = (char *)((char *)aP1 - (char *)v38); /*0x7c0a8d*/
      a5a = 0; /*0x7c0a8f*/
      if ( (int)v29 <= 0 ) /*0x7c0a99*/
        return result; /*0x7c0a99*/
      while ( 1 ) /*0x7c0a9f*/
      {
        if ( arg8 ) /*0x7c0aa5*/
          *(_DWORD *)(*(_DWORD *)(a1 + 368) + 20) &= ~1u; /*0x7c0aad*/
        if ( a4 ) /*0x7c0ab7*/
          break; /*0x7c0ab7*/
LABEL_89:
        if ( v37 && (int)v26 <= a3 ) /*0x7c0c21*/
          v28 |= 8u; /*0x7c0c23*/
        else
          v28 &= ~8u; /*0x7c0c28*/
        result = FillAudioStreamBuffer(a1, v28); /*0x7c0c2f*/
        if ( result != -1 ) /*0x7c0c37*/
        {
          if ( !arg8 || result != -9 && result != -11 ) /*0x7c0c49*/
            return result; /*0x7c0c49*/
          result = -1; /*0x7c0c4b*/
        }
        v26 = (DSurface *)((char *)v26 + 1); /*0x7c0c52*/
        if ( (int)++a5a >= (int)v29 ) /*0x7c0c5a*/
          return result; /*0x7c0c5a*/
      }
      if ( arg8 ) /*0x7c0abf*/
      {
        v30 = (int)v26 < (int)v43; /*0x7c0ac1*/
        if ( v26 != v43 ) /*0x7c0ac5*/
          goto LABEL_64; /*0x7c0ac5*/
        *(_DWORD *)(a1 + 1968) = 0; /*0x7c0ac7*/
      }
      v30 = (int)v26 < (int)v43; /*0x7c0ad1*/
LABEL_64:
      if ( v30 ) /*0x7c0ad5*/
        v28 |= 2u; /*0x7c0adb*/
      else
        v28 &= ~2u; /*0x7c0c12*/
      goto LABEL_89; /*0x7c0ade*/
    }
    return -6; /*0x7c0c6a*/
  }
  v24 = *(unsigned __int16 **)(a1 + 1820); /*0x7c0a1a*/
  v25 = 0; /*0x7c0a20*/
  while ( aP1 != (DSurface *)*v24 ) /*0x7c0a2d*/
  {
    ++v25; /*0x7c0a33*/
    v24 += 2; /*0x7c0a34*/
    if ( v25 >= v23 ) /*0x7c0a39*/
      goto LABEL_51; /*0x7c0a39*/
  }
LABEL_66:
  if ( arg8 ) /*0x7c0ae9*/
    *(_DWORD *)(*(_DWORD *)(a1 + 368) + 20) = 0; /*0x7c0af1*/
  if ( v37 ) /*0x7c0afa*/
  {
    v44 = 16; /*0x7c0afc*/
  }
  else
  {
    v44 = 0; /*0x7c0b0c*/
    *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 356); /*0x7c0b10*/
  }
  v31 = *(_DWORD *)(a1 + 1892); /*0x7c0b1c*/
  v32 = (int)v42; /*0x7c0b22*/
  v33 = -1; /*0x7c0b26*/
  v34 = 0; /*0x7c0b29*/
  if ( (*(_BYTE *)(a1 + 340) & 4) != 0 && v42 == *(DSurface **)(a1 + 1800) ) /*0x7c0b3a*/
  {
    v35 = *(_DWORD *)(a1 + 1792); /*0x7c0b40*/
    if ( v35 ) /*0x7c0b48*/
    {
      v34 = v35 + *(_DWORD *)(a1 + 1788) <= 2 * (*(_DWORD *)(v31 + 4 * *(_DWORD *)(a1 + 300)) & 0xFFFFFFF); /*0x7c0b6a*/
      *(_DWORD *)(a1 + 1796) = 0; /*0x7c0b6c*/
LABEL_75:
      if ( v32 > 0 /*0x7c0bc2*/
        && ((v44 & 0x10) == 0 || (*(_BYTE *)(a1 + 234) & 0x10) == 0)
        && (v33 = FillAudioStreamBuffer(a1, v44 | 6), v33 != -1)
        || !v34
        || (v36 = (*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))(
                    a1,
                    8,
                    0,
                    *(_DWORD *)(a1 + 1788) + *(_DWORD *)(a1 + 1792)) == 0,
            result = -6,
            v36) )
      {
        result = v33; /*0x7c0bc4*/
      }
      goto LABEL_82; /*0x7c0bc4*/
    }
  }
  if ( !(*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))( /*0x7c0c05*/
          a1,
          7,
          0,
          2 * (*(_DWORD *)(v31 + 4 * (_DWORD)v42) & 0xFFFFFFF)) )
    goto LABEL_75; /*0x7c0c05*/
  result = -6; /*0x7c0c0b*/
LABEL_82:
  if ( arg8 && (result == -9 || result == -11) ) /*0x7c0bda*/
    return -1; /*0x7c0be3*/
  return result; /*0x7c0be0*/
}


// ==== 0x007C0C80  DSP_AudioProcess  this=AudioStream  sig=csp ====
int __fastcall DSP_AudioProcess(AudioStream *aP0, int a2, char a3)
{
  int v4; // edi
  char *v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // edx
  _DWORD *v12; // ebx
  _DWORD *v13; // esi
  int v14; // edx
  _DWORD *v15; // esi
  int v16; // edx
  _DWORD *v17; // esi
  int v18; // eax
  _DWORD *v19; // edi
  unsigned int v20; // ebx
  int v21; // ecx
  _DWORD *v22; // edi
  unsigned int v23; // ebx
  int v24; // ecx
  _DWORD *v25; // edi
  unsigned int v26; // ebx
  int v27; // ecx
  int v29; // [esp+10h] [ebp-10h]
  unsigned int v30; // [esp+14h] [ebp-Ch]
  unsigned int v31; // [esp+18h] [ebp-8h]
  unsigned int v32; // [esp+18h] [ebp-8h]
  unsigned int v33; // [esp+18h] [ebp-8h]
  unsigned int v34; // [esp+1Ch] [ebp-4h]

  v4 = 0; /*0x7c0c89*/
  v29 = *(_DWORD *)&aP0->__pad_D8[152]; /*0x7c0c91*/
  v34 = (a2 + 1) & 0xFFFFFFFE; /*0x7c0c9b*/
  if ( v34 ) /*0x7c0c9f*/
  {
    while ( 1 ) /*0x7c0ca5*/
    {
      v5 = &aP0->__pad_D8[192]; /*0x7c0ca5*/
      if ( ((int (__cdecl *)(AudioStream *, int, char *, int))aP0->field_40)(aP0, 5, &aP0->__pad_D8[192], 8) ) /*0x7c0cb1*/
        return -2; /*0x7c10fe*/
      v6 = ((*(_DWORD *)&aP0->__pad_D8[196] & 0xFF00 | (*(_DWORD *)&aP0->__pad_D8[196] << 16)) << 8) /*0x7c0ce3*/
         | ((((unsigned __int64)*(unsigned int *)&aP0->__pad_D8[196] >> 16) | *(_DWORD *)&aP0->__pad_D8[196] & 0xFF0000) >> 8);
      v7 = v6 + 1; /*0x7c0ce5*/
      v8 = (v6 + 1) & 0xFFFFFFFE; /*0x7c0cea*/
      v30 = v4 + v8 + 8; /*0x7c0cf1*/
      v9 = *(_DWORD *)v5; /*0x7c0cf5*/
      if ( *(_DWORD *)v5 > 0x5A445056u ) /*0x7c0cfd*/
      {
        if ( v9 > 0x5A504243 ) /*0x7c0f13*/
        {
          if ( v9 != 1515343958 ) /*0x7c1015*/
          {
            if ( v9 != 1515475030 ) /*0x7c101d*/
              return -4; /*0x7c101d*/
LABEL_54:
            if ( (a3 & 4) == 0 ) /*0x7c1028*/
            {
              v22 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c102e*/
              v23 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c103a*/
              v32 = v23 + *v22; /*0x7c1045*/
              if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c1049*/
                     aP0,
                     5,
                     v32,
                     (v6 + 1) & 0xFFFFFFFE) )
              {
                return -4; /*0x7c1051*/
              }
              v24 = v22[5]; /*0x7c1057*/
              v22[8] = v23; /*0x7c105a*/
              v22[5] = v24 | 0x10; /*0x7c1060*/
              if ( *(_WORD *)&aP0->__pad_D8[16] < 3u ) /*0x7c106b*/
                *(_BYTE *)(v32 + v6 + 1) = 0x80; /*0x7c1071*/
              goto LABEL_64; /*0x7c1076*/
            }
            goto LABEL_63; /*0x7c1028*/
          }
          if ( (a3 & 4) == 0 ) /*0x7c107d*/
          {
            v25 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c107f*/
            v26 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c108b*/
            v33 = v26 + *v25; /*0x7c1096*/
            if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c109a*/
                   aP0,
                   5,
                   v33,
                   (v6 + 1) & 0xFFFFFFFE) )
            {
              return -4; /*0x7c110d*/
            }
            v27 = v25[5]; /*0x7c10a4*/
            v25[8] = v26; /*0x7c10a7*/
            v25[5] = v27 | 0x10; /*0x7c10ad*/
            if ( *(_WORD *)&aP0->__pad_D8[16] < 3u ) /*0x7c10b8*/
              *(_BYTE *)(v33 + v6 + 1) = 0x80; /*0x7c10be*/
            *(_DWORD *)(v29 + 20) |= 0x20u; /*0x7c10c7*/
            goto LABEL_64; /*0x7c10cb*/
          }
        }
        else
        {
          switch ( v9 ) /*0x7c0f19*/
          {
            case 0x5A504243u: /*0x7c0f19*/
              if ( (a3 & 8) == 0 ) /*0x7c0ff2*/
              {
                if ( Audio_Helper_7C1F30((int)aP0, v6) != -1 ) /*0x7c1004*/
                  return -4; /*0x7c1004*/
                goto LABEL_64; /*0x7c1004*/
              }
              break;
            case 0x5A464243u: /*0x7c0f19*/
              if ( (a3 & 0x10) == 0 ) /*0x7c0fd0*/
              {
                if ( Audio_Helper_7C1D90((int)aP0, v6) != -1 ) /*0x7c0fe2*/
                  return -4; /*0x7c0fe2*/
                goto LABEL_64; /*0x7c0fe2*/
              }
              break;
            case 0x5A4B5056u: /*0x7c0f19*/
              if ( (a3 & 4) == 0 ) /*0x7c0f6e*/
              {
                v19 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0f7a*/
                v20 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c0f80*/
                v31 = *v19 + v20; /*0x7c0f8d*/
                if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c0f91*/
                       aP0,
                       5,
                       v31,
                       (v6 + 1) & 0xFFFFFFFE) )
                {
                  return -4; /*0x7c0f99*/
                }
                v21 = v19[5]; /*0x7c0f9f*/
                v19[8] = v20; /*0x7c0fa2*/
                v19[5] = v21 | 0x10; /*0x7c0fa8*/
                if ( *(_WORD *)&aP0->__pad_D8[16] < 3u ) /*0x7c0fb3*/
                  *(_BYTE *)(v31 + v6 + 1) = 0x80; /*0x7c0fb9*/
                *(_DWORD *)(v29 + 20) |= 2u; /*0x7c0fc2*/
                goto LABEL_64; /*0x7c0fc6*/
              }
              break;
            case 0x5A4C5043u: /*0x7c0f19*/
              if ( (a3 & 1) == 0 ) /*0x7c0f44*/
              {
                if ( Audio_Helper_7C20B0((int)aP0, v6) != -1 ) /*0x7c0f56*/
                  return -4; /*0x7c0f56*/
                *(_DWORD *)(v29 + 20) |= 4u; /*0x7c0f60*/
                goto LABEL_64; /*0x7c0f64*/
              }
              break;
            default:
              return -4; /*0x7c0f39*/
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v5 == 1514426454 ) /*0x7c0d03*/
          goto LABEL_54; /*0x7c0d03*/
        if ( v9 > 0x30545056 ) /*0x7c0d0f*/
        {
          switch ( v9 ) /*0x7c0e35*/
          {
            case 0x44545056u: /*0x7c0e35*/
LABEL_30:
              if ( (a3 & 4) == 0 ) /*0x7c0ed6*/
              {
                v17 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0edc*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0ee2*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v17, v7) ) /*0x7c0eeb*/
                  return -4; /*0x7c0ef3*/
                v18 = v17[5]; /*0x7c0ef9*/
                v17[8] = 0; /*0x7c0efc*/
                LOBYTE(v18) = v18 & 0xEF; /*0x7c0f03*/
                v17[5] = v18; /*0x7c0f05*/
                goto LABEL_64; /*0x7c0f08*/
              }
              break; /*0x7c0ed6*/
            case 0x4B545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e95*/
              {
                v15 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0e9b*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0ea1*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v15, v7) ) /*0x7c0eaa*/
                  return -4; /*0x7c0eb2*/
                v16 = v15[5]; /*0x7c0eb8*/
                v15[8] = 0; /*0x7c0ebb*/
                v15[5] = v16 & 0xFFFFFFEF; /*0x7c0ec5*/
                *(_DWORD *)(v29 + 20) |= 2u; /*0x7c0ec8*/
                goto LABEL_64; /*0x7c0ecc*/
              }
              break;
            case 0x52545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e54*/
              {
                v13 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0e5a*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0e60*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v13, v7) ) /*0x7c0e69*/
                  return -4; /*0x7c0e71*/
                v14 = v13[5]; /*0x7c0e77*/
                v13[8] = 0; /*0x7c0e7a*/
                v13[5] = v14 & 0xFFFFFFEF; /*0x7c0e84*/
                *(_DWORD *)(v29 + 20) |= 0x20u; /*0x7c0e87*/
                goto LABEL_64; /*0x7c0e8b*/
              }
              break;
            default:
              return -4; /*0x7c0e49*/
          }
        }
        else
        {
          switch ( v9 ) /*0x7c0d15*/
          {
            case 0x30545056u: /*0x7c0d15*/
              goto LABEL_30; /*0x7c0d15*/
            case 0x30464243u: /*0x7c0d15*/
              if ( (a3 & 0x10) == 0 ) /*0x7c0de5*/
              {
                v12 = *(_DWORD **)&aP0->__pad_D8[140]; /*0x7c0deb*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0df1*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v12, v7) ) /*0x7c0dfa*/
                  return -4; /*0x7c0e02*/
                *(_DWORD *)&aP0->__pad_D8[156] = 0; /*0x7c0e08*/
                v12[4] = 0; /*0x7c0e0e*/
                v12[5] = v6; /*0x7c0e11*/
                v12[3] = 8; /*0x7c0e14*/
                *(_DWORD *)&aP0->__pad_D8[144] = v12; /*0x7c0e1b*/
                *(_DWORD *)&aP0->__pad_D8[140] = v12[1]; /*0x7c0e24*/
                goto LABEL_64; /*0x7c0e2a*/
              }
              break;
            case 0x304C5043u: /*0x7c0d15*/
              if ( (a3 & 1) == 0 ) /*0x7c0d62*/
              {
                v10 = *(_DWORD *)&aP0->__pad_D8[152]; /*0x7c0d68*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0d6e*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)( /*0x7c0d78*/
                       aP0,
                       5,
                       *(_DWORD *)(v10 + 8),
                       v7) )
                {
                  return -4; /*0x7c0d80*/
                }
                v11 = *(_DWORD *)(v10 + 20); /*0x7c0d86*/
                *(_DWORD *)(v10 + 36) = 0; /*0x7c0d89*/
                *(_DWORD *)(v10 + 20) = v11 & 0xFFFFFFF7; /*0x7c0d94*/
                *(_DWORD *)(v10 + 40) = v6; /*0x7c0d97*/
                if ( *(_WORD *)&aP0[3].__pad_D8[212] == 1 ) /*0x7c0da1*/
                {
                  qmemcpy(&aP0->__pad_D8[236], *(const void **)(v10 + 8), v6); /*0x7c0db3*/
                  *(_DWORD *)&aP0->__pad_D8[232] = *(_DWORD *)(v10 + 40); /*0x7c0dbf*/
                  *(_DWORD *)&aP0->__pad_D8[204] |= 1u; /*0x7c0dcd*/
                }
                *(_DWORD *)(v29 + 20) |= 4u; /*0x7c0dd7*/
                goto LABEL_64; /*0x7c0ddb*/
              }
              break;
            case 0x30504243u: /*0x7c0d15*/
              if ( (a3 & 8) == 0 ) /*0x7c0d40*/
              {
                if ( Audio_Helper_7C1E10((int)aP0, v6) != -1 ) /*0x7c0d52*/
                  return -4; /*0x7c0d52*/
                goto LABEL_64; /*0x7c0d52*/
              }
              break;
            default:
              return -4; /*0x7c0d35*/
          }
        }
      }
LABEL_63:
      LOBYTE(v7) = v7 & 0xFE; /*0x7c10cd*/
      if ( ((int (__cdecl *)(AudioStream *, int, int, unsigned int))aP0->field_40)(aP0, 7, 1, v7) ) /*0x7c10d5*/
        return -6; /*0x7c111c*/
LABEL_64:
      if ( v30 >= v34 ) /*0x7c10e9*/
        return -1; /*0x7c10e9*/
      v4 = v30; /*0x7c10eb*/
    }
  }
  return -1; /*0x7c10f2*/
}


// ==== 0x007C1130  Audio_Render_7C1130  this=-  sig=ida-proto ====
int __fastcall sub_7C1130(int a1, int a2)
{
  int v2; // eax

  v2 = -((*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, a1 + 274, (a2 + 1) & 0xFFFFFFFE) != 0); /*0x7c1147*/
  LOBYTE(v2) = v2 & 0xFD; /*0x7c1149*/
  return v2 - 1; /*0x7c114c*/
}


// ==== 0x007C1150  ObjectClass::Audio_Render_7C1150  this=ObjectClass  sig=csp ====
int __thiscall sub_7C1150(int this)
{
  _WORD *v3; // edi
  unsigned int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // [esp+8h] [ebp-8h] BYREF
  unsigned int v9; // [esp+Ch] [ebp-4h]

  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v8, 8) ) /*0x7c1161*/
    return -2; /*0x7c1175*/
  if ( v8 != 1213090124 ) /*0x7c117e*/
    return -4; /*0x7c118a*/
  v3 = (_WORD *)(this + 1812); /*0x7c118f*/
  v4 = ((((v9 << 16) | v9 & 0xFF00) << 8) | ((HIWORD(v9) | v9 & 0xFF0000) >> 8)) + 1; /*0x7c11b8*/
  LOBYTE(v4) = (HIBYTE(v9) + 1) & 0xFE; /*0x7c11b9*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1812, v4) ) /*0x7c11c0*/
    return -4; /*0x7c11d4*/
  if ( !*v3 ) /*0x7c11d5*/
    return -1; /*0x7c11d5*/
  v5 = 4 * (unsigned __int16)*v3; /*0x7c11e9*/
  v6 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v5); /*0x7c11f1*/
  *(_DWORD *)(this + 1820) = v6; /*0x7c11f7*/
  if ( !v6 ) /*0x7c11ff*/
    return -8; /*0x7c120b*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v6, v5); /*0x7c1211*/
  *(_DWORD *)(this + 48) += v5; /*0x7c121b*/
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v8, 8) ) /*0x7c1226*/
    return -2; /*0x7c123a*/
  if ( v8 != 1145981260 ) /*0x7c1243*/
    return -4; /*0x7c124f*/
  v7 = ((((v9 << 16) | v9 & 0xFF00) << 8) | ((HIWORD(v9) | v9 & 0xFF0000) >> 8)) + 1; /*0x7c1277*/
  LOBYTE(v7) = (HIBYTE(v9) + 1) & 0xFE; /*0x7c1278*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1820), v7) ) /*0x7c1285*/
    return -4; /*0x7c1290*/
  else
    return -1; /*0x7c129b*/
}


// ==== 0x007C12B0  File::ParseAudioFileRIFF  this=File  sig=csp ====
int __thiscall AudioFile_ParseRIFF(int this)
{
  int *v3; // edi
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  signed int v19; // ecx
  _WORD *v20; // ebp
  int v21; // edi
  int v22; // eax
  unsigned int *v23; // ebx
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // edi
  int *v31; // ebp
  int v32; // eax
  int v33; // ebx
  int v34; // ecx
  int v35; // eax
  bool v36; // cf
  int v37; // [esp+10h] [ebp-40h]
  int v38; // [esp+14h] [ebp-3Ch]
  int v39; // [esp+18h] [ebp-38h]
  int v40; // [esp+1Ch] [ebp-34h]
  unsigned int v41; // [esp+20h] [ebp-30h]
  unsigned int v42; // [esp+24h] [ebp-2Ch]
  int v43; // [esp+28h] [ebp-28h]
  int v44; // [esp+2Ch] [ebp-24h]
  int v45; // [esp+30h] [ebp-20h]
  int v46; // [esp+34h] [ebp-1Ch]
  int v47; // [esp+38h] [ebp-18h]
  unsigned int v48; // [esp+3Ch] [ebp-14h]
  unsigned int v49; // [esp+40h] [ebp-10h]
  unsigned int v50; // [esp+44h] [ebp-Ch]
  int v51; // [esp+48h] [ebp-8h] BYREF
  unsigned int v52; // [esp+4Ch] [ebp-4h]

  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v51, 8) ) /*0x7c12c3*/
    return -2; /*0x7c12d9*/
  if ( v51 != 1212368461 ) /*0x7c12e2*/
    return -4; /*0x7c12f0*/
  v3 = (int *)(this + 1824); /*0x7c12f5*/
  v4 = ((((v52 << 16) | v52 & 0xFF00) << 8) | ((HIWORD(v52) | v52 & 0xFF0000) >> 8)) + 1; /*0x7c131e*/
  LOBYTE(v4) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c131f*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1824, v4) ) /*0x7c1326*/
    return -4; /*0x7c133c*/
  v5 = *v3; /*0x7c133d*/
  if ( *v3 ) /*0x7c133d*/
  {
    v6 = 24 * v5; /*0x7c134c*/
    v7 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 24 * v5); /*0x7c1354*/
    *(_DWORD *)(this + 1840) = v7; /*0x7c135c*/
    if ( !v7 ) /*0x7c1362*/
      return -8; /*0x7c1370*/
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v7, v6); /*0x7c1376*/
    *(_DWORD *)(this + 48) += v6; /*0x7c1388*/
    if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v51, 8) ) /*0x7c138b*/
      return -2; /*0x7c13a1*/
    if ( v51 != 1145259597 ) /*0x7c13aa*/
      return -4; /*0x7c13b8*/
    v8 = ((((v52 << 16) | v52 & 0xFF00) << 8) | ((HIWORD(v52) | v52 & 0xFF0000) >> 8)) + 1; /*0x7c13e0*/
    LOBYTE(v8) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c13e1*/
    if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1840), v8) ) /*0x7c13ee*/
      return -4; /*0x7c1404*/
  }
  v9 = *(_DWORD *)(this + 1828); /*0x7c1405*/
  if ( v9 ) /*0x7c140d*/
  {
    v10 = 16 * v9; /*0x7c1413*/
    v11 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v10); /*0x7c141b*/
    *(_DWORD *)(this + 1844) = v11; /*0x7c1423*/
    if ( !v11 ) /*0x7c1429*/
      return -8; /*0x7c1437*/
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v11, v10); /*0x7c143d*/
    *(_DWORD *)(this + 48) += v10; /*0x7c144f*/
    if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v51, 8) ) /*0x7c1452*/
      return -2; /*0x7c1468*/
    if ( v51 != 1413695053 ) /*0x7c1471*/
      return -4; /*0x7c147f*/
    v12 = ((((v52 << 16) | v52 & 0xFF00) << 8) | ((HIWORD(v52) | v52 & 0xFF0000) >> 8)) + 1; /*0x7c14a7*/
    LOBYTE(v12) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c14a8*/
    if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1844), v12) ) /*0x7c14b5*/
      return -4; /*0x7c14cb*/
  }
  v13 = *(_DWORD *)(this + 1828); /*0x7c14cc*/
  v50 = v13; /*0x7c14d4*/
  if ( !v13 ) /*0x7c14d8*/
    return -1; /*0x7c1728*/
  v14 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, 12 * v13); /*0x7c14e9*/
  *(_DWORD *)(this + 1848) = v14; /*0x7c14f1*/
  if ( !v14 ) /*0x7c14f7*/
    return -8; /*0x7c14f7*/
  (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v14, 12 * v13); /*0x7c150b*/
  *(_DWORD *)(this + 48) += 12 * v13; /*0x7c1518*/
  v46 = 0; /*0x7c151b*/
  v15 = 0; /*0x7c1525*/
  v38 = 0; /*0x7c1527*/
  v40 = 0; /*0x7c152b*/
  while ( 2 ) /*0x7c152f*/
  {
    v16 = *(_DWORD *)(this + 1844); /*0x7c152f*/
    v44 = *(_DWORD *)(this + 1848); /*0x7c153b*/
    v17 = *(_DWORD *)(v15 + v16 + 4); /*0x7c153f*/
    v45 = *(_DWORD *)(v15 + v16 + 8); /*0x7c1549*/
    v48 = v17; /*0x7c154d*/
    if ( !v17 ) /*0x7c1551*/
      goto LABEL_53; /*0x7c1551*/
    v39 = 0; /*0x7c156a*/
    v18 = *(unsigned __int16 *)(this + 1812); /*0x7c156e*/
    v42 = *(_DWORD *)(this + 1824); /*0x7c1575*/
    v49 = (unsigned __int16)v18; /*0x7c1579*/
    v43 = 0; /*0x7c157d*/
    v19 = (*(_DWORD *)(this + 136) - 1) / v17 + 1; /*0x7c1589*/
    v37 = v19; /*0x7c158c*/
    if ( !(_WORD)v18 ) /*0x7c1590*/
      goto LABEL_47; /*0x7c1590*/
    v20 = (_WORD *)(*(_DWORD *)(this + 1820) + 2); /*0x7c1596*/
    while ( 1 ) /*0x7c159d*/
    {
      v21 = -1; /*0x7c159d*/
      v41 = 0; /*0x7c15a2*/
      if ( v42 ) /*0x7c15aa*/
        break; /*0x7c15aa*/
LABEL_44:
      v20 += 2; /*0x7c1622*/
      if ( ++v43 >= v18 ) /*0x7c1630*/
        goto LABEL_47; /*0x7c1630*/
    }
    v22 = *(_DWORD *)(v15 + *(_DWORD *)(this + 1844)); /*0x7c15b2*/
    v23 = *(unsigned int **)(this + 1840); /*0x7c15b5*/
    v47 = v22; /*0x7c15bb*/
    do /*0x7c1600*/
    {
      if ( v23[1] == v47 ) /*0x7c15c8*/
      {
        v24 = *v23; /*0x7c15ca*/
        v25 = (unsigned __int16)*(v20 - 1); /*0x7c15ce*/
        if ( *v23 >= (unsigned __int16)v25 ) /*0x7c15d4*/
        {
          HIWORD(v26) = 0; /*0x7c15d6*/
          if ( v24 > (unsigned __int16)*v20 ) /*0x7c15de*/
            break; /*0x7c15de*/
          if ( v21 < 0 ) /*0x7c15e2*/
            v21 = v24 - v25; /*0x7c15e6*/
          LOWORD(v26) = *v20; /*0x7c15d8*/
          v39 = v26 - v24; /*0x7c15ea*/
        }
      }
      v23 += 6; /*0x7c15f7*/
      ++v41; /*0x7c15fc*/
    }
    while ( v41 < v42 ); /*0x7c1600*/
    if ( v21 <= 0 || v21 + v39 + 1 >= v48 ) /*0x7c1614*/
    {
      v15 = v40; /*0x7c1616*/
      v19 = v37; /*0x7c161a*/
      v18 = v49; /*0x7c161e*/
      goto LABEL_44; /*0x7c161e*/
    }
    v19 = ++v37; /*0x7c163c*/
LABEL_47:
    if ( v19 <= 0 ) /*0x7c1643*/
    {
LABEL_53:
      v15 = v40 + 16; /*0x7c16f7*/
      v36 = ++v46 < v50; /*0x7c170e*/
      v40 += 16; /*0x7c1714*/
      v38 += 12; /*0x7c1718*/
      if ( !v36 ) /*0x7c171c*/
        return -1; /*0x7c171c*/
      continue; /*0x7c171c*/
    }
    break;
  }
  v27 = 12 * v19; /*0x7c1654*/
  *(_DWORD *)(v38 + v44) = v19; /*0x7c165c*/
  *(_DWORD *)(v38 + v44 + 4) = 0; /*0x7c1660*/
  v28 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 12 * v19); /*0x7c1668*/
  v29 = v28; /*0x7c166b*/
  if ( v28 ) /*0x7c1672*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v28, v27); /*0x7c167d*/
    *(_DWORD *)(this + 48) += v27; /*0x7c1697*/
    v30 = v37 * ((v45 + 1) & 0xFFFFFFFE); /*0x7c169a*/
    v31 = (int *)(v38 + v44 + 8); /*0x7c16a0*/
    *v31 = v29; /*0x7c16a9*/
    v32 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, v30); /*0x7c16ac*/
    v33 = v32; /*0x7c16af*/
    if ( v32 ) /*0x7c16b6*/
    {
      (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v32, v30); /*0x7c16c1*/
      *(_DWORD *)(this + 48) += v30; /*0x7c16cc*/
      v34 = v37; /*0x7c16cf*/
      if ( v37 > 0 ) /*0x7c16d5*/
      {
        v35 = 0; /*0x7c16d7*/
        do /*0x7c16f5*/
        {
          v35 += 12; /*0x7c16dc*/
          *(_DWORD *)(v35 + *v31 - 12) = v33; /*0x7c16df*/
          *(_DWORD *)(v35 + *v31 - 4) = -1; /*0x7c16e6*/
          v33 += v45; /*0x7c16f2*/
          --v34; /*0x7c16f4*/
        }
        while ( v34 ); /*0x7c16f5*/
      }
      goto LABEL_53; /*0x7c16f5*/
    }
  }
  return -8; /*0x7c12cd*/
}


// ==== 0x007C1730  Buffer::AllocateCodecFrameBuffers  this=Buffer  sig=csp ====
int __thiscall AllocateCodecFrameBuffers(int this)
{
  unsigned int *v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  bool v20; // cf
  int v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+14h] [ebp-1Ch]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h]
  int v25; // [esp+20h] [ebp-10h]
  int *v26; // [esp+20h] [ebp-10h]
  unsigned int v27; // [esp+24h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-8h] BYREF
  unsigned int v29; // [esp+2Ch] [ebp-4h]

  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v28, 8) ) /*0x7c1743*/
    return -2; /*0x7c1759*/
  if ( v28 != 1212371789 ) /*0x7c1762*/
    return -4; /*0x7c1770*/
  v3 = (unsigned int *)(this + 1852); /*0x7c1775*/
  v4 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c179e*/
  LOBYTE(v4) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c179f*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1852, v4) ) /*0x7c17a6*/
    return -4; /*0x7c17bc*/
  v5 = *v3; /*0x7c17bd*/
  if ( !*v3 ) /*0x7c17bd*/
    goto LABEL_16; /*0x7c17bd*/
  v6 = 16 * v5; /*0x7c17cc*/
  v7 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, 16 * v5); /*0x7c17d3*/
  *(_DWORD *)(this + 1860) = v7; /*0x7c17db*/
  if ( !v7 ) /*0x7c17e1*/
    return -8; /*0x7c17ef*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v7, v6); /*0x7c17f5*/
  *(_DWORD *)(this + 48) += v6; /*0x7c17ff*/
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v28, 8) ) /*0x7c180a*/
    return -2; /*0x7c1820*/
  if ( v28 != 1413698381 ) /*0x7c1829*/
    return -4; /*0x7c1837*/
  v8 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c185f*/
  LOBYTE(v8) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c1860*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1860), v8) ) /*0x7c186d*/
    return -4; /*0x7c187a*/
LABEL_16:
  v9 = *v3; /*0x7c1884*/
  v27 = v9; /*0x7c1888*/
  if ( !v9 ) /*0x7c188c*/
    return -1; /*0x7c19de*/
  v10 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, 12 * v9); /*0x7c189d*/
  *(_DWORD *)(this + 1864) = v10; /*0x7c18a5*/
  if ( v10 ) /*0x7c18ab*/
  {
    (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v10, 12 * v9); /*0x7c18bf*/
    *(_DWORD *)(this + 48) += 12 * v9; /*0x7c18cc*/
    v24 = 0; /*0x7c18cf*/
    v11 = 0; /*0x7c18d9*/
    v21 = 0; /*0x7c18db*/
    v22 = 0; /*0x7c18df*/
    while ( 1 ) /*0x7c18ed*/
    {
      v12 = *(_DWORD *)(this + 136); /*0x7c18ed*/
      v13 = *(_DWORD *)(this + 1864); /*0x7c18f3*/
      v25 = v13; /*0x7c18fd*/
      v23 = *(_DWORD *)(v21 + *(_DWORD *)(this + 1860) + 4); /*0x7c1903*/
      if ( v12 > 0 ) /*0x7c1907*/
      {
        *(_DWORD *)(v11 + v13) = v12; /*0x7c1911*/
        *(_DWORD *)(v11 + v13 + 4) = 0; /*0x7c191d*/
        v14 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 12 * v12); /*0x7c1925*/
        v15 = v14; /*0x7c1928*/
        if ( !v14 ) /*0x7c192f*/
          return -8; /*0x7c192f*/
        (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v14, 12 * v12); /*0x7c193a*/
        *(_DWORD *)(this + 48) += 12 * v12; /*0x7c194d*/
        v16 = v12 * ((v23 + 1) & 0xFFFFFFFE); /*0x7c1957*/
        v26 = (int *)(v22 + v25 + 8); /*0x7c1964*/
        *v26 = v15; /*0x7c1968*/
        v17 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, v16); /*0x7c196a*/
        v18 = v17; /*0x7c196d*/
        if ( !v17 ) /*0x7c1974*/
          return -8; /*0x7c1974*/
        (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v17, v16); /*0x7c197f*/
        *(_DWORD *)(this + 48) += v16; /*0x7c198c*/
        v19 = 0; /*0x7c1991*/
        do /*0x7c19b1*/
        {
          v19 += 12; /*0x7c199b*/
          *(_DWORD *)(*v26 + v19 - 12) = v18; /*0x7c19a0*/
          v18 += v23; /*0x7c19a6*/
          --v12; /*0x7c19a8*/
          *(_DWORD *)(*v26 + v19 - 4) = -1; /*0x7c19a9*/
        }
        while ( v12 ); /*0x7c19b1*/
        v9 = v27; /*0x7c19b3*/
        v11 = v22; /*0x7c19b7*/
      }
      v11 += 12; /*0x7c19c7*/
      v20 = ++v24 < v9; /*0x7c19ca*/
      v21 += 16; /*0x7c19d0*/
      v22 = v11; /*0x7c19d4*/
      if ( !v20 ) /*0x7c19d8*/
        return -1; /*0x7c19d8*/
    }
  }
  return -8; /*0x7c174d*/
}


// ==== 0x007C19F0  Audio_Process_7C19F0  this=DSurface  sig=csp ====
int __fastcall Audio_Process_7C19F0(int a1, DSurface *aP1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // esi
  int v7; // ecx
  unsigned __int16 *v8; // edi
  int v9; // ecx
  int v10; // edx

  v4 = *(_DWORD *)(a1 + 1876); /*0x7c19f1*/
  result = 0; /*0x7c19fb*/
  v6 = *(unsigned __int16 *)(a1 + 1868); /*0x7c19fd*/
  v7 = 1; /*0x7c1a04*/
  if ( (unsigned __int16)v6 <= 1u ) /*0x7c1a0c*/
  {
LABEL_6:
    result = v6 - 1; /*0x7c1a2d*/
  }
  else
  {
    v8 = (unsigned __int16 *)(v4 + 6); /*0x7c1a0e*/
    while ( (int)aP1 < *(v8 - 3) || (int)aP1 >= *v8 ) /*0x7c1a22*/
    {
      ++result; /*0x7c1a24*/
      ++v7; /*0x7c1a25*/
      v8 += 3; /*0x7c1a26*/
      if ( v7 >= v6 ) /*0x7c1a2b*/
        goto LABEL_6; /*0x7c1a2b*/
    }
  }
  if ( result ) /*0x7c1a32*/
  {
    v9 = result - 1; /*0x7c1a3a*/
    v10 = result; /*0x7c1a3d*/
  }
  else
  {
    v9 = 0; /*0x7c1a34*/
    v10 = 0; /*0x7c1a36*/
  }
  if ( a2 ) /*0x7c1a45*/
    *a2 = *(unsigned __int16 *)(v4 + 6 * v9); /*0x7c1a50*/
  if ( a3 ) /*0x7c1a58*/
    *a3 = *(unsigned __int16 *)(v4 + 6 * v10) - 1; /*0x7c1a64*/
  return result; /*0x7c1a66*/
}


// ==== 0x007C1A70  ObjectClass::Audio_Render_7C1A70  this=ObjectClass  sig=csp ====
int __thiscall sub_7C1A70(int this)
{
  _WORD *v3; // edi
  unsigned int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // [esp+8h] [ebp-8h] BYREF
  unsigned int v9; // [esp+Ch] [ebp-4h]

  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v8, 8) ) /*0x7c1a81*/
    return -2; /*0x7c1a95*/
  if ( v8 != 1213090115 ) /*0x7c1a9e*/
    return -4; /*0x7c1aaa*/
  v3 = (_WORD *)(this + 1868); /*0x7c1aaf*/
  v4 = ((((v9 << 16) | v9 & 0xFF00) << 8) | ((HIWORD(v9) | v9 & 0xFF0000) >> 8)) + 1; /*0x7c1ad8*/
  LOBYTE(v4) = (HIBYTE(v9) + 1) & 0xFE; /*0x7c1ad9*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1868, v4) ) /*0x7c1ae0*/
    return -4; /*0x7c1af4*/
  if ( *(_BYTE *)(this + 245) || !*v3 ) /*0x7c1b03*/
    return -1; /*0x7c1b03*/
  v5 = 6 * (unsigned __int16)*v3; /*0x7c1b17*/
  v6 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v5); /*0x7c1b1f*/
  *(_DWORD *)(this + 1876) = v6; /*0x7c1b25*/
  if ( !v6 ) /*0x7c1b2d*/
    return -8; /*0x7c1b39*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v6, v5); /*0x7c1b3f*/
  *(_DWORD *)(this + 48) += v5; /*0x7c1b49*/
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v8, 8) ) /*0x7c1b54*/
    return -2; /*0x7c1b68*/
  if ( v8 != 1145981251 ) /*0x7c1b71*/
    return -4; /*0x7c1b7d*/
  v7 = ((((v9 << 16) | v9 & 0xFF00) << 8) | ((HIWORD(v9) | v9 & 0xFF0000) >> 8)) + 1; /*0x7c1ba5*/
  LOBYTE(v7) = (HIBYTE(v9) + 1) & 0xFE; /*0x7c1ba6*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1876), v7) ) /*0x7c1bb3*/
    return -4; /*0x7c1bbe*/
  else
    return -1; /*0x7c1bc9*/
}


// ==== 0x007C1BE0  ObjectClass::Audio_Render_7C1BE0  this=ObjectClass  sig=csp ====
int __thiscall sub_7C1BE0(int this)
{
  _WORD *v3; // edi
  unsigned int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // [esp+8h] [ebp-8h] BYREF
  unsigned int v9; // [esp+Ch] [ebp-4h]

  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v8, 8) ) /*0x7c1bf1*/
    return -2; /*0x7c1c05*/
  if ( v8 != 1213090128 ) /*0x7c1c0e*/
    return -4; /*0x7c1c1a*/
  v3 = (_WORD *)(this + 1880); /*0x7c1c1f*/
  v4 = ((((v9 << 16) | v9 & 0xFF00) << 8) | ((HIWORD(v9) | v9 & 0xFF0000) >> 8)) + 1; /*0x7c1c48*/
  LOBYTE(v4) = (HIBYTE(v9) + 1) & 0xFE; /*0x7c1c49*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1880, v4) ) /*0x7c1c50*/
    return -4; /*0x7c1c64*/
  if ( !*v3 ) /*0x7c1c65*/
    return -1; /*0x7c1c65*/
  v5 = 2 * (unsigned __int16)*v3; /*0x7c1c78*/
  v6 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v5); /*0x7c1c80*/
  *(_DWORD *)(this + 1888) = v6; /*0x7c1c86*/
  if ( !v6 ) /*0x7c1c8e*/
    return -8; /*0x7c1c9a*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v6, v5); /*0x7c1ca0*/
  *(_DWORD *)(this + 48) += v5; /*0x7c1caa*/
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v8, 8) ) /*0x7c1cb5*/
    return -2; /*0x7c1cc9*/
  if ( v8 != 1145981264 ) /*0x7c1cd2*/
    return -4; /*0x7c1cde*/
  v7 = ((((v9 << 16) | v9 & 0xFF00) << 8) | ((HIWORD(v9) | v9 & 0xFF0000) >> 8)) + 1; /*0x7c1d06*/
  LOBYTE(v7) = (HIBYTE(v9) + 1) & 0xFE; /*0x7c1d07*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1888), v7) ) /*0x7c1d14*/
    return -4; /*0x7c1d1f*/
  else
    return -1; /*0x7c1d2a*/
}


// ==== 0x007C1D40  Audio_Render_7C1D40  this=-  sig=ida-proto ====
int __fastcall sub_7C1D40(int a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1892); /*0x7c1d40*/
  if ( v2 ) /*0x7c1d48*/
  {
    if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v2, (a2 + 1) & 0xFFFFFFFE) ) /*0x7c1d53*/
      return -4; /*0x7c1d62*/
  }
  else if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, (a2 + 1) & 0xFFFFFFFE) ) /*0x7c1d6d*/
  {
    return -6; /*0x7c1d7c*/
  }
  return -1; /*0x7c1d62*/
}


// ==== 0x007C1D90  Audio_Helper_7C1D90  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C1D90(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // edi
  int v6; // ebx

  v3 = a2 + 1; /*0x7c1d9c*/
  v4 = *(_DWORD **)(a1 + 356); /*0x7c1d9e*/
  LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c1daa*/
  v5 = *(_DWORD *)(a1 + 1896) - v3; /*0x7c1daf*/
  v6 = v5 + *v4; /*0x7c1db1*/
  if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v6, v3) ) /*0x7c1db8*/
    return -4; /*0x7c1dc5*/
  *(_DWORD *)(a1 + 372) = 0; /*0x7c1dcd*/
  v4[3] = 10; /*0x7c1dd7*/
  v4[4] = v5; /*0x7c1dde*/
  *(_DWORD *)(a1 + 360) = v4; /*0x7c1de1*/
  *(_DWORD *)(a1 + 356) = v4[1]; /*0x7c1dea*/
  if ( *(_WORD *)(a1 + 232) < 3u ) /*0x7c1df8*/
    *(_BYTE *)(v6 + a2 + 1) = 0x80; /*0x7c1dfe*/
  return -1; /*0x7c1dc2*/
}


// ==== 0x007C1E10  Audio_Helper_7C1E10  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C1E10(int a1, int a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  unsigned __int16 *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v10; // ebp
  int v11; // ebx
  int v12; // ecx

  v3 = a2; /*0x7c1e16*/
  v4 = *(_DWORD **)(a1 + 356); /*0x7c1e1f*/
  if ( !*(_BYTE *)(a1 + 245) && !*(_DWORD *)(a1 + 376) ) /*0x7c1e2d*/
  {
    v5 = *(unsigned __int16 **)(a1 + 1876); /*0x7c1e37*/
    v6 = *(unsigned __int16 *)(a1 + 1868); /*0x7c1e3f*/
    v7 = 0; /*0x7c1e46*/
    if ( (_WORD)v6 ) /*0x7c1e4a*/
    {
      while ( *v5 <= *(int *)(a1 + 384) ) /*0x7c1e59*/
      {
        ++v7; /*0x7c1e5b*/
        v5 += 3; /*0x7c1e5c*/
        if ( v7 >= v6 ) /*0x7c1e61*/
          goto LABEL_6; /*0x7c1e61*/
      }
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 1876) + 6 * v7 + 2); /*0x7c1e70*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x7c1e63*/
    }
    v3 = a2; /*0x7c1e74*/
    *(_DWORD *)(a1 + 380) = v8; /*0x7c1e78*/
  }
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))( /*0x7c1e93*/
         a1,
         5,
         *(_DWORD *)(a1 + 376) + *v4,
         (v3 + 1) & 0xFFFFFFFE) )
  {
    return -4; /*0x7c1ea7*/
  }
  v10 = v3 + *(_DWORD *)(a1 + 376); /*0x7c1eae*/
  v11 = *(_DWORD *)(a1 + 372) + 1; /*0x7c1eb6*/
  *(_DWORD *)(a1 + 376) = v10; /*0x7c1eb7*/
  *(_DWORD *)(a1 + 372) = v11; /*0x7c1ebd*/
  if ( *(_BYTE *)(a1 + 245) ) /*0x7c1ec3*/
  {
    if ( v11 != *(unsigned __int8 *)(a1 + 245) ) /*0x7c1edb*/
      return -1; /*0x7c1f0f*/
LABEL_13:
    v4[5] = v10; /*0x7c1edd*/
    *(_DWORD *)(a1 + 372) = 0; /*0x7c1ee2*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c1ee8*/
    v4[4] = 0; /*0x7c1eee*/
    v4[3] = 8; /*0x7c1ef1*/
    *(_DWORD *)(a1 + 360) = v4; /*0x7c1ef8*/
    *(_DWORD *)(a1 + 356) = v4[1]; /*0x7c1f01*/
    return -1; /*0x7c1f01*/
  }
  v12 = *(_DWORD *)(a1 + 380); /*0x7c1f10*/
  if ( v10 == v12 ) /*0x7c1f18*/
    goto LABEL_13; /*0x7c1f18*/
  if ( v10 <= v12 ) /*0x7c1f1a*/
    return -1; /*0x7c1f1a*/
  return -4; /*0x7c1e9d*/
}


// ==== 0x007C1F30  Audio_Helper_7C1F30  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C1F30(int a1, int a2)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  unsigned int v5; // edi
  unsigned __int16 *v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx

  v3 = *(_DWORD **)(a1 + 356); /*0x7c1f41*/
  v4 = *(unsigned __int8 *)(a1 + 245); /*0x7c1f4a*/
  v5 = (a2 + 1) & 0xFFFFFFFE; /*0x7c1f52*/
  if ( !*(_DWORD *)(a1 + 376) ) /*0x7c1f4c*/
  {
    if ( *(_BYTE *)(a1 + 245) ) /*0x7c1f3b*/
    {
      *(_DWORD *)(a1 + 380) = ((v4 + 1) & 0xFFFFFFFE) + v5 * v4; /*0x7c1f7a*/
    }
    else
    {
      v6 = *(unsigned __int16 **)(a1 + 1876); /*0x7c1f82*/
      v7 = *(unsigned __int16 *)(a1 + 1868); /*0x7c1f8a*/
      v8 = 0; /*0x7c1f91*/
      if ( (_WORD)v7 ) /*0x7c1f95*/
      {
        while ( *v6 <= *(int *)(a1 + 384) ) /*0x7c1fa4*/
        {
          ++v8; /*0x7c1fa6*/
          v6 += 3; /*0x7c1fa7*/
          if ( v8 >= v7 ) /*0x7c1fac*/
            goto LABEL_7; /*0x7c1fac*/
        }
        v9 = *(_DWORD *)(*(_DWORD *)(a1 + 1876) + 6 * v8 + 2); /*0x7c1fcb*/
      }
      else
      {
LABEL_7:
        v9 = 0; /*0x7c1fb6*/
      }
      *(_DWORD *)(a1 + 380) = v9; /*0x7c1fcf*/
    }
    if ( (*(_BYTE *)(a1 + 340) & 1) != 0 ) /*0x7c1fdc*/
      v3[4] = 0; /*0x7c1ff1*/
    else
      v3[4] = *(_DWORD *)(a1 + 1896) - *(_DWORD *)(a1 + 380); /*0x7c1fec*/
  }
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 376) + *v3 + v3[4], v5) ) /*0x7c200c*/
    return -4; /*0x7c2022*/
  v11 = *(_DWORD *)(a1 + 372); /*0x7c202d*/
  v12 = a2 + *(_DWORD *)(a1 + 376); /*0x7c2033*/
  *(_DWORD *)(a1 + 376) = v12; /*0x7c2035*/
  v13 = v11 + 1; /*0x7c203f*/
  *(_DWORD *)(a1 + 372) = v13; /*0x7c2042*/
  if ( v4 ) /*0x7c2048*/
  {
    if ( v13 == v4 ) /*0x7c204c*/
      goto LABEL_17; /*0x7c204c*/
    return -1; /*0x7c204c*/
  }
  v14 = *(_DWORD *)(a1 + 380); /*0x7c2097*/
  if ( v12 == v14 ) /*0x7c209f*/
  {
LABEL_17:
    *(_DWORD *)(a1 + 372) = 0; /*0x7c204e*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c2054*/
    v3[3] = 10; /*0x7c205a*/
    *(_DWORD *)(a1 + 360) = v3; /*0x7c2061*/
    *(_DWORD *)(a1 + 356) = v3[1]; /*0x7c206a*/
    if ( *(_WORD *)(a1 + 232) < 3u ) /*0x7c2078*/
      *(_BYTE *)(v3[4] + *(_DWORD *)(a1 + 380) + *v3 + 1) = 0x80; /*0x7c2087*/
    return -1; /*0x7c2087*/
  }
  if ( v12 <= v14 ) /*0x7c20a1*/
    return -1; /*0x7c2096*/
  return -4; /*0x7c2016*/
}


// ==== 0x007C20B0  Audio_Helper_7C20B0  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C20B0(int a1, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v8; // edx
  char *v9; // eax
  const void *v10; // esi
  int v11; // eax

  v3 = a2 + 1; /*0x7c20bb*/
  v4 = *(_DWORD *)(a1 + 368); /*0x7c20bc*/
  LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c20c9*/
  v5 = *(_DWORD *)(a1 + 1904) - v3; /*0x7c20cf*/
  v6 = v5 + *(_DWORD *)(v4 + 8); /*0x7c20d2*/
  if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v6, v3) ) /*0x7c20d8*/
    return -4; /*0x7c20e5*/
  v8 = *(_DWORD *)(v4 + 20) | 8; /*0x7c20f4*/
  *(_DWORD *)(v4 + 36) = v5; /*0x7c20f7*/
  *(_DWORD *)(v4 + 20) = v8; /*0x7c20fa*/
  *(_DWORD *)(v4 + 40) = a2; /*0x7c20fd*/
  if ( *(_WORD *)(a1 + 232) < 3u ) /*0x7c2108*/
    *(_BYTE *)(v6 + a2 + 1) = 0x80; /*0x7c210a*/
  if ( *(_WORD *)(a1 + 1880) == 1 ) /*0x7c2117*/
  {
    v9 = AudioCodec::Decode( /*0x7c212a*/
           (unsigned __int8 *)(*(_DWORD *)(v4 + 8) + *(_DWORD *)(v4 + 36)),
           *(char **)(v4 + 8),
           *(_DWORD *)(a1 + 1904));
    *(_DWORD *)(v4 + 20) &= ~8u; /*0x7c213d*/
    v10 = *(const void **)(v4 + 8); /*0x7c2140*/
    *(_DWORD *)(v4 + 40) = v9; /*0x7c2146*/
    qmemcpy((void *)(a1 + 452), v10, (unsigned int)v9); /*0x7c214c*/
    v11 = *(_DWORD *)(a1 + 420); /*0x7c2155*/
    LOBYTE(v11) = v11 | 1; /*0x7c215e*/
    *(_DWORD *)(a1 + 448) = *(_DWORD *)(v4 + 40); /*0x7c2160*/
    *(_DWORD *)(a1 + 420) = v11; /*0x7c2166*/
  }
  return -1; /*0x7c20e2*/
}


// ==== 0x007C2180  Audio_Helper_7C2180  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C2180(int a1, unsigned int a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v7; // ecx
  int v8; // eax

  v4 = a2 + 1; /*0x7c218c*/
  LOBYTE(v4) = (a2 + 1) & 0xFE; /*0x7c218f*/
  if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && (v5 = *(_DWORD *)(a1 + 1932)) != 0 ) /*0x7c21a2*/
  {
    if ( v4 <= *(_DWORD *)(a1 + 1972) || *(_DWORD *)(a1 + 1936) ) /*0x7c21b0*/
    {
      if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 1960), v4) ) /*0x7c2219*/
      {
        return -4; /*0x7c2224*/
      }
      else
      {
        *(_DWORD *)(a1 + 1968) = a2; /*0x7c222b*/
        return -1; /*0x7c2232*/
      }
    }
    else if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v5, v4) ) /*0x7c21bf*/
    {
      return -4; /*0x7c21ca*/
    }
    else
    {
      v7 = 0; /*0x7c21db*/
      *(_DWORD *)(a1 + 1936) += a2; /*0x7c21dd*/
      if ( a2 / *(_DWORD *)(a1 + 156) ) /*0x7c21e5*/
      {
        do /*0x7c2206*/
          *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v7++) = 1; /*0x7c21f7*/
        while ( v7 < a2 / *(_DWORD *)(a1 + 156) ); /*0x7c2206*/
      }
      return -1; /*0x7c2209*/
    }
  }
  else
  {
    v8 = -((*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, v4) != 0); /*0x7c2245*/
    LOBYTE(v8) = v8 & 0xFB; /*0x7c2248*/
    return v8 - 1; /*0x7c224b*/
  }
}


// ==== 0x007C2250  Audio_Helper_7C2250  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C2250(int a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v5; // eax
  unsigned int v6; // edi
  _WORD *v7; // ebx
  int v8; // ecx
  __int64 v9; // rax
  _WORD *v10; // ebx
  int v11; // eax
  unsigned __int16 v12; // [esp+Ch] [ebp-4h] BYREF
  __int16 v13; // [esp+Eh] [ebp-2h]

  v3 = (a2 + 1) & 0xFFFFFFFE; /*0x7c225f*/
  if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && *(_DWORD *)(a1 + 1932) ) /*0x7c226a*/
  {
    if ( (*(int (__cdecl **)(int, int, unsigned __int16 *, int))(a1 + 64))(a1, 5, &v12, 4) ) /*0x7c2282*/
      return -4; /*0x7c2295*/
    v5 = *(_DWORD *)(a1 + 1972); /*0x7c229a*/
    v6 = v3 - 4; /*0x7c22a2*/
    if ( v12 <= v5 || *(_DWORD *)(a1 + 1936) ) /*0x7c22b3*/
    {
      if ( v12 == v13 ) /*0x7c237c*/
      {
        if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 1960), v6) ) /*0x7c2389*/
          return -4; /*0x7c239c*/
      }
      else
      {
        v10 = (_WORD *)(v5 + *(_DWORD *)(a1 + 1960) - v6); /*0x7c23a6*/
        if ( (*(int (__cdecl **)(int, int, _WORD *, unsigned int))(a1 + 64))(a1, 5, v10, v6) ) /*0x7c23ac*/
          return -4; /*0x7c23bf*/
        Audio_Helper_7C7F20(v12, v10, *(_BYTE **)(a1 + 1960), v12); /*0x7c23d3*/
      }
      *(_DWORD *)(a1 + 1968) = v12; /*0x7c23e9*/
      return -1; /*0x7c23e6*/
    }
    else
    {
      if ( v12 == v13 ) /*0x7c22c6*/
      {
        if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 1932), v6) ) /*0x7c22d3*/
          return -4; /*0x7c22e6*/
      }
      else
      {
        v7 = (_WORD *)(*(_DWORD *)(a1 + 1932) + *(_DWORD *)(a1 + 152) - v6); /*0x7c22f6*/
        if ( (*(int (__cdecl **)(int, int, _WORD *, unsigned int))(a1 + 64))(a1, 5, v7, v6) ) /*0x7c22fc*/
          return -4; /*0x7c230f*/
        Audio_Helper_7C7F20(*(_DWORD *)(a1 + 1932), v7, *(_BYTE **)(a1 + 1932), v12); /*0x7c2323*/
      }
      v8 = 0; /*0x7c233a*/
      v9 = v12; /*0x7c233e*/
      *(_DWORD *)(a1 + 1936) += v12; /*0x7c233f*/
      if ( (int)(v9 / *(int *)(a1 + 156)) > 0 ) /*0x7c234d*/
      {
        do /*0x7c236d*/
        {
          ++v8; /*0x7c2355*/
          *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v8 - 1) = 1; /*0x7c2356*/
        }
        while ( v8 < v12 / *(int *)(a1 + 156) ); /*0x7c236d*/
      }
      return -1; /*0x7c2371*/
    }
  }
  else
  {
    v11 = -((*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, (a2 + 1) & 0xFFFFFFFE) != 0); /*0x7c2401*/
    LOBYTE(v11) = v11 & 0xFB; /*0x7c2404*/
    return v11 - 1; /*0x7c2407*/
  }
}


// ==== 0x007C2410  Audio_Render_7C2410  this=AudioStream  sig=ida-proto ====
int __fastcall sub_7C2410(int a1, int a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  int v7; // esi
  int v9; // eax
  unsigned int i; // ecx
  int v11; // esi
  int v12; // eax

  v3 = a2 + 1; /*0x7c2418*/
  LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c2421*/
  if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && (v4 = *(_DWORD *)(a1 + 1932)) != 0 ) /*0x7c2434*/
  {
    v5 = *(_DWORD *)(a1 + 1972); /*0x7c2441*/
    v6 = a2 * (*(unsigned __int8 *)(a1 + 63) >> 2); /*0x7c244a*/
    if ( v6 <= v5 || *(_DWORD *)(a1 + 1936) ) /*0x7c2455*/
    {
      v11 = v5 + *(_DWORD *)(a1 + 1960) - v3; /*0x7c2521*/
      if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v11, v3) ) /*0x7c2527*/
      {
        return -4; /*0x7c2534*/
      }
      else
      {
        Render::DrawTileBitmap( /*0x7c2557*/
          v11,
          *(_WORD **)(a1 + 1960),
          *(unsigned __int8 *)(a1 + 63),
          *(unsigned __int8 *)(a1 + 62),
          v6,
          a1 + 2000);
        *(_DWORD *)(a1 + 1968) = v6; /*0x7c255f*/
        return -1; /*0x7c2565*/
      }
    }
    else
    {
      v7 = v4 + *(_DWORD *)(a1 + 152) - v3; /*0x7c246c*/
      if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v7, v3) ) /*0x7c2472*/
      {
        return -4; /*0x7c247f*/
      }
      else
      {
        Render::DrawTileBitmap( /*0x7c24a2*/
          v7,
          *(_WORD **)(a1 + 1932),
          *(unsigned __int8 *)(a1 + 63),
          *(unsigned __int8 *)(a1 + 62),
          v6,
          a1 + 2000);
        v9 = *(_DWORD *)(a1 + 1964); /*0x7c24a7*/
        if ( v9 ) /*0x7c24b2*/
        {
          v6 -= v9; /*0x7c24ba*/
          qmemcpy(*(void **)(a1 + 1932), (const void *)(v9 + *(_DWORD *)(a1 + 1932)), v6); /*0x7c24c6*/
          *(_DWORD *)(a1 + 1964) = 0; /*0x7c24cf*/
        }
        *(_DWORD *)(a1 + 1936) += v6; /*0x7c24e5*/
        for ( i = 0; i < v6 / *(_DWORD *)(a1 + 156); ++i ) /*0x7c24ed*/
          *(_BYTE *)(i + *(_DWORD *)(a1 + 1940)) = 1; /*0x7c24ff*/
        return -1; /*0x7c2513*/
      }
    }
  }
  else
  {
    v12 = -((*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 7, 1, v3) != 0); /*0x7c257b*/
    LOBYTE(v12) = v12 & 0xFB; /*0x7c257e*/
    return v12 - 1; /*0x7c2582*/
  }
}


// ==== 0x007C2590  RenderAudioVideoFrame  this=-  sig=csp ====
int __fastcall RenderAudioVideoFrame(const char *a0, _DWORD *a1, ObjectClass *aP2)
{
  int (__cdecl *v5)(_DWORD, int, _DWORD, int); // eax
  _DWORD *v6; // eax
  _WORD *v7; // ebx
  int v8; // eax
  int (__cdecl **v9)(int, int, char *, int); // ebp
  signed int v10; // ecx
  unsigned int v11; // edx
  _WORD *v12; // esi
  int v13; // eax
  int v14; // ecx
  __int16 v15; // dx
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // cl
  int v20; // eax
  const char *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  char *v26; // [esp+10h] [ebp-10h] BYREF
  int v27; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v28; // [esp+18h] [ebp-8h] BYREF
  unsigned int v29; // [esp+1Ch] [ebp-4h]

  v26 = (char *)a0; /*0x7c259f*/
  *(_DWORD *)aP2->__pad_0 = 0; /*0x7c25a3*/
  if ( !a1 ) /*0x7c25a9*/
    return -17; /*0x7c25b7*/
  if ( !a1[4] ) /*0x7c25ba*/
    return -15; /*0x7c25cd*/
  if ( !a1[14] ) /*0x7c25d0*/
    return -16; /*0x7c25e3*/
  v5 = (int (__cdecl *)(_DWORD, int, _DWORD, int))a1[1]; /*0x7c25e6*/
  if ( v5 ) /*0x7c25f6*/
  {
    v8 = v5(0, 2, 0, 2012); /*0x7c261a*/
    v7 = (_WORD *)v8; /*0x7c261c*/
    if ( v8 ) /*0x7c2623*/
    {
      ((void (__cdecl *)(int, int, int, int))a1[1])(v8, 4, v8, 2012); /*0x7c2632*/
      goto LABEL_12; /*0x7c2632*/
    }
    return -8; /*0x7c2b4c*/
  }
  v6 = AllocCallback::Dispatch(0, 2, 0, 0x7DCu); /*0x7c25f8*/
  v7 = v6; /*0x7c25fd*/
  if ( !v6 ) /*0x7c2604*/
    return -8; /*0x7c2604*/
  AllocCallback::Dispatch((int)v6, 4, v6, 0x7DCu); /*0x7c2613*/
LABEL_12:
  v9 = (int (__cdecl **)(int, int, char *, int))(v7 + 32); /*0x7c2635*/
  memset(v7, 0, 0x7DCu); /*0x7c2641*/
  *((_DWORD *)v7 + 12) = 2012; /*0x7c264a*/
  qmemcpy(v7 + 32, a1, 0x88u); /*0x7c2654*/
  if ( !*((_DWORD *)v7 + 17) ) /*0x7c2656*/
    *((_DWORD *)v7 + 17) = AllocCallback::Dispatch; /*0x7c265d*/
  if ( !*v9 ) /*0x7c2664*/
    *v9 = sub_7BF240; /*0x7c266a*/
  if ( (*v9)((int)v7, 3, v26, 0) ) /*0x7c267b*/
  {
    (*((void (__cdecl **)(_WORD *, int, _WORD *, int))v7 + 17))(v7, 5, v7, 2012); /*0x7c268e*/
    (*((void (__cdecl **)(_WORD *, int, _WORD *, _DWORD))v7 + 17))(v7, 3, v7, 0); /*0x7c2697*/
    return -3; /*0x7c26a9*/
  }
  v10 = strlen(v26) - 31; /*0x7c26b6*/
  if ( v10 < 0 ) /*0x7c26b9*/
    v10 = 0; /*0x7c26bb*/
  strcpy((char *)v7 + 200, &v26[v10]); /*0x7c26e0*/
  if ( (*v9)((int)v7, 5, (char *)&v28, 8) ) /*0x7c26f1*/
    goto LABEL_21; /*0x7c26f9*/
  if ( v28 != 1297239878 || !v29 ) /*0x7c2721*/
    goto LABEL_26; /*0x7c2721*/
  if ( (*v9)((int)v7, 5, (char *)&v28, 4) ) /*0x7c272d*/
  {
LABEL_21:
    DSurface::Flip((int)v7); /*0x7c26fb*/
    return -4; /*0x7c270e*/
  }
  if ( v28 != 1095849559 ) /*0x7c2755*/
  {
LABEL_26:
    DSurface::Flip((int)v7); /*0x7c2757*/
    return -7; /*0x7c276a*/
  }
  while ( 1 ) /*0x7c27d0*/
  {
    while ( 1 ) /*0x7c27c5*/
    {
      while ( 1 ) /*0x7c27bf*/
      {
        while ( 1 ) /*0x7c2772*/
        {
          if ( (*v9)((int)v7, 5, (char *)&v28, 8) ) /*0x7c277c*/
            goto LABEL_113; /*0x7c2784*/
          v11 = (((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8); /*0x7c27b4*/
          v29 = v11; /*0x7c27bb*/
          if ( v28 <= 0x464E4950 ) /*0x7c27bf*/
            break; /*0x7c27bf*/
          switch ( v28 ) /*0x7c28d8*/
          {
            case 0x4943464Du: /*0x7c28d8*/
              if ( File::ParseAudioFileRIFF((int)v7) != -1 ) /*0x7c2939*/
                goto LABEL_113; /*0x7c2939*/
              break;
            case 0x4943534Du: /*0x7c28d8*/
              if ( Buffer::AllocateCodecFrameBuffers((int)v7) != -1 ) /*0x7c2924*/
                goto LABEL_113; /*0x7c2924*/
              break;
            case 0x50494C43u: /*0x7c28d8*/
              if ( Audio_Render_7C1130((int)v7, v11) != -1 ) /*0x7c290f*/
                goto LABEL_113; /*0x7c290f*/
              break;
            default:
              goto LABEL_56; /*0x7c28e6*/
          }
        }
        if ( v28 != 1179535696 ) /*0x7c27c5*/
          break; /*0x7c27c5*/
        if ( Audio_Render_7C1BE0((int)v7) != -1 ) /*0x7c28c8*/
          goto LABEL_113; /*0x7c28c8*/
      }
      if ( v28 <= 0x464E4946 ) /*0x7c27d0*/
        break; /*0x7c27d0*/
      if ( v28 != 1179535692 ) /*0x7c28a7*/
        goto LABEL_56; /*0x7c28a7*/
      if ( Audio_Render_7C1150((int)v7) != -1 ) /*0x7c28b3*/
        goto LABEL_113; /*0x7c28b3*/
    }
    if ( v28 == 1179535686 ) /*0x7c27d6*/
      break; /*0x7c27d6*/
    if ( v28 == 1145590102 ) /*0x7c27e1*/
    {
      if ( v11 != 42 ) /*0x7c2806*/
        goto LABEL_26; /*0x7c2806*/
      v12 = v7 + 116; /*0x7c280c*/
      if ( (*v9)((int)v7, 5, (char *)v7 + 232, 42) ) /*0x7c2817*/
        goto LABEL_113; /*0x7c281f*/
      *v7 = *v12; /*0x7c2828*/
      *((_DWORD *)v7 + 4) = (unsigned __int16)v7[118]; /*0x7c282f*/
      v7[1] = v7[119]; /*0x7c2836*/
      v7[2] = v7[120]; /*0x7c283e*/
      v7[6] = *((unsigned __int8 *)v7 + 264); /*0x7c2847*/
      v7[7] = *((unsigned __int8 *)v7 + 244); /*0x7c2850*/
      if ( *((_DWORD *)v7 + 28) == -1 ) /*0x7c285c*/
        *((_DWORD *)v7 + 28) = *((unsigned __int8 *)v7 + 244); /*0x7c2863*/
      if ( *((_DWORD *)v7 + 29) == -1 ) /*0x7c2869*/
        *((_DWORD *)v7 + 29) = *((unsigned __int8 *)v7 + 244); /*0x7c2870*/
      v13 = *((_DWORD *)v7 + 29); /*0x7c2873*/
      if ( v13 == -1 || !v13 ) /*0x7c287c*/
        *((_DWORD *)v7 + 29) = *((unsigned __int8 *)v7 + 244); /*0x7c2883*/
      if ( *v12 > 1u && (v7[117] & 2) == 0 ) /*0x7c2894*/
        *((_DWORD *)v7 + 33) &= ~0x40u; /*0x7c289a*/
    }
    else if ( v28 == 1179535683 ) /*0x7c27e8*/
    {
      if ( Audio_Render_7C1A70((int)v7) != -1 ) /*0x7c27f8*/
        goto LABEL_113; /*0x7c27f8*/
    }
    else
    {
LABEL_56:
      if ( (*v9)((int)v7, 7, (char *)1, (v11 + 1) & 0xFFFFFFFE) ) /*0x7c28f2*/
      {
        DSurface::Flip((int)v7); /*0x7c29e4*/
        return -6; /*0x7c29f5*/
      }
    }
  }
  if ( Surface::CommitSurfaceBuffersAudio((int)v7) != -1 ) /*0x7c2950*/
  {
LABEL_99:
    DSurface::Flip((int)v7); /*0x7c2b39*/
    return -8; /*0x7c2b3b*/
  }
  if ( Audio_Render_7C1D40((int)v7, v29) != -1 ) /*0x7c2963*/
    goto LABEL_113; /*0x7c2963*/
  if ( !*((_BYTE *)v7 + 264) && !v7[940] ) /*0x7c2973*/
  {
    v14 = *((_DWORD *)v7 + 4); /*0x7c297d*/
    v15 = 0; /*0x7c2980*/
    if ( v14 > 0 ) /*0x7c2984*/
    {
      v16 = (_DWORD *)*((_DWORD *)v7 + 473); /*0x7c2986*/
      do /*0x7c2999*/
      {
        if ( (*v16 & 0x40000000) != 0 ) /*0x7c2992*/
          ++v15; /*0x7c2994*/
        ++v16; /*0x7c2995*/
        --v14; /*0x7c2998*/
      }
      while ( v14 ); /*0x7c2999*/
    }
    v7[940] = v15; /*0x7c299b*/
  }
  AbstractClass::finalizeDestruction((int)v7); /*0x7c29a4*/
  if ( (v7[117] & 1) == 0 ) /*0x7c29b0*/
  {
    v17 = *((_DWORD *)v7 + 33); /*0x7c29b2*/
    LOBYTE(v17) = v17 & 0xFE; /*0x7c29b5*/
    *((_DWORD *)v7 + 33) = v17; /*0x7c29b7*/
  }
  v18 = *((_DWORD *)v7 + 33); /*0x7c29ba*/
  if ( (v18 & 1) != 0 ) /*0x7c29bf*/
  {
    if ( !*((_DWORD *)v7 + 22) ) /*0x7c29c5*/
    {
      DSurface::Flip((int)v7); /*0x7c29ce*/
      return -21; /*0x7c29df*/
    }
    if ( (v18 & 0x40) != 0 ) /*0x7c29fa*/
    {
      v7[30] = v7[130]; /*0x7c2a03*/
      *((_BYTE *)v7 + 62) = *((_BYTE *)v7 + 262); /*0x7c2a0d*/
      v19 = *((_BYTE *)v7 + 263); /*0x7c2a10*/
    }
    else
    {
      v7[30] = v7[128]; /*0x7c2a1f*/
      *((_BYTE *)v7 + 62) = *((_BYTE *)v7 + 258); /*0x7c2a29*/
      v19 = *((_BYTE *)v7 + 259); /*0x7c2a2c*/
    }
    *((_BYTE *)v7 + 63) = v19; /*0x7c2a32*/
    if ( Audio_Render_7BD170((int)v7) != -1 ) /*0x7c2a3e*/
    {
      DSurface::Flip((int)v7); /*0x7c2a42*/
      return -13; /*0x7c2a53*/
    }
    sub_4125F0(); /*0x7c2a56*/
    *((_DWORD *)v7 + 495) |= 0x40000000u; /*0x7c2a67*/
    Audio_Render_7C7350((int)(v7 + 1000)); /*0x7c2a74*/
  }
  else if ( *((_DWORD *)v7 + 22) ) /*0x7c2a7e*/
  {
    (*((void (__cdecl **)(_WORD *, int, _DWORD, _DWORD))v7 + 22))(v7, 1, 0, 0); /*0x7c2a8c*/
  }
  v20 = *((_DWORD *)v7 + 33); /*0x7c2a92*/
  if ( (v20 & 0x20) == 0 ) /*0x7c2a97*/
  {
    *((_DWORD *)v7 + 75) = *((_DWORD *)v7 + 71); /*0x7c2bf7*/
    goto LABEL_108; /*0x7c2bf7*/
  }
  if ( (v20 & 0x100) != 0 && v7[906] )
  {
    if ( (*v9)((int)v7, 9, (char *)&v26, 0) ) /*0x7c2abe*/
      v26 = 0; /*0x7c2ac8*/
    *((_DWORD *)v7 + 446) = Audio_Render_7C3860((int)v7, (int)v26); /*0x7c2adf*/
    (*((void (__cdecl **)(_WORD *, int, int *, _DWORD))v7 + 17))(v7, 6, &v27, 0); /*0x7c2aeb*/
    v21 = (const char *)v27; /*0x7c2aee*/
    if ( v27 < 0 )
    {
      v21 = (int)v26 <= 0 ? 0 : v26;
      v27 = (int)v21; /*0x7c2b07*/
    }
    if ( *((_DWORD *)v7 + 446) > (int)v21 ) /*0x7c2b11*/
      *((_DWORD *)v7 + 446) = v21; /*0x7c2b13*/
    if ( *((int *)v7 + 446) > 0 ) /*0x7c2b21*/
    {
      v22 = (*((int (__cdecl **)(_WORD *, int, _DWORD, _DWORD))v7 + 17))(v7, 2, 0, *((_DWORD *)v7 + 446)); /*0x7c2b29*/
      *((_DWORD *)v7 + 445) = v22; /*0x7c2b2f*/
      if ( !v22 ) /*0x7c2b37*/
        goto LABEL_99; /*0x7c2b37*/
      (*((void (__cdecl **)(_WORD *, int, _DWORD, _DWORD))v7 + 17))(v7, 4, *((_DWORD *)v7 + 445), *((_DWORD *)v7 + 446)); /*0x7c2b60*/
      v23 = *((_DWORD *)v7 + 446); /*0x7c2b69*/
      v24 = *((_DWORD *)v7 + 12); /*0x7c2b6f*/
      *((_DWORD *)v7 + 85) |= 4u; /*0x7c2b7a*/
      *((_DWORD *)v7 + 12) = v23 + v24; /*0x7c2b80*/
      *((_DWORD *)v7 + 452) = -1; /*0x7c2b83*/
      *((_DWORD *)v7 + 450) = -1; /*0x7c2b89*/
      *((_DWORD *)v7 + 451) = -1; /*0x7c2b8f*/
    }
  }
  v25 = *((_DWORD *)v7 + 44); /*0x7c2b95*/
  if ( v25 < 0 ) /*0x7c2b9a*/
  {
    if ( SeekAudioStream((int)v7, 0, *((DSurface **)v7 + 71), 0, 0) == -1 ) /*0x7c2bd9*/
      goto LABEL_108; /*0x7c2bd9*/
LABEL_104:
    DSurface::Flip((int)v7); /*0x7c2bad*/
    return -23; /*0x7c2bb4*/
  }
  else
  {
    if ( Audio_Render_7C3430((DSurface *)v7, v25, *((_DWORD *)v7 + 45), 2u) != -1 ) /*0x7c2bab*/
      goto LABEL_104; /*0x7c2bab*/
LABEL_108:
    if ( Audio_Render_7BE670((int)v7) != -1 ) /*0x7c2c06*/
      return -3; /*0x7c2c14*/
    if ( (v7[66] & 0x20) != 0 && *((int *)v7 + 44) >= 0 || Audio_Process_7C0490(v7) == -1 ) /*0x7c2c2d*/
    {
      *(_DWORD *)aP2->__pad_0 = v7; /*0x7c2c4d*/
      return -1; /*0x7c2c49*/
    }
    else
    {
LABEL_113:
      DSurface::Flip((int)v7); /*0x7c2c2f*/
      return -4; /*0x7c2c36*/
    }
  }
}


// ==== 0x007C2C60  DSurface::Flip  this=DSurface  sig=csp ====
int __thiscall DSurface_Flip(int this)
{
  int v2; // eax

  if ( (*(_BYTE *)(this + 132) & 1) != 0 && (*(_BYTE *)(this + 234) & 3) != 0 ) /*0x7c2c73*/
  {
    DSurface::LockAndPrepareRect(); /*0x7c2c75*/
    if ( (*(_DWORD *)(this + 1980) & 0x40000000) != 0 ) /*0x7c2c84*/
    {
      sub_412600(); /*0x7c2c86*/
      *(_DWORD *)(this + 1980) &= ~0x40000000u; /*0x7c2c8b*/
    }
  }
  if ( (*(_BYTE *)(this + 336) & 0x20) != 0 ) /*0x7c2c9c*/
  {
    v2 = *(_DWORD *)(this + 344); /*0x7c2c9e*/
    if ( v2 ) /*0x7c2ca6*/
    {
      (*(void (__cdecl **)(int, int, int, int))(this + 68))( /*0x7c2cba*/
        this,
        5,
        v2,
        *(_DWORD *)(this + 348) * *(_DWORD *)(this + 352));
      (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 344), 0); /*0x7c2cc9*/
    }
  }
  DSurface::CommitBuffers(this); /*0x7c2cd1*/
  (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 64))(this, 4, 0, 0); /*0x7c2cdd*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, this, 2012); /*0x7c2ce9*/
  return (*(int (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 3, this, 0); /*0x7c2cf8*/
}


// ==== 0x007C2D00  ProcessAudioStreamPipeline  this=MovieClass  sig=csp ====
int __fastcall AudioStream_Process(int a1, int a2, char a3)
{
  int v5; // edi
  int v6; // eax
  int (__cdecl *v7)(int); // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  v5 = -1; /*0x7c2d08*/
  if ( (*(_BYTE *)(a1 + 336) & 8) == 0 ) /*0x7c2d17*/
  {
    v5 = Audio_Process_7BE660(); /*0x7c2d1e*/
    if ( v5 != -1 ) /*0x7c2d23*/
      return v5; /*0x7c2d23*/
    if ( (*(_BYTE *)(a1 + 336) & 0x10) == 0 ) /*0x7c2d30*/
      Audio_Process_7BE4A0(a1); /*0x7c2d34*/
    if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && **(_BYTE **)(a1 + 1940) ) /*0x7c2d48*/
      AudioStream::SetFlag4C(a1); /*0x7c2d4f*/
    CalcAudioStreamOffset(a1, 60 * *(_DWORD *)(*(_DWORD *)(a1 + 416) + 28) / *(_DWORD *)(a1 + 116)); /*0x7c2d6e*/
    *(_DWORD *)(a1 + 32) = AudioStream::GetPosition(a1); /*0x7c2d7a*/
    v6 = *(_DWORD *)(a1 + 336); /*0x7c2d7d*/
    LOBYTE(v6) = v6 | 8; /*0x7c2d83*/
    *(_DWORD *)(a1 + 336) = v6; /*0x7c2d85*/
  }
  v7 = *(int (__cdecl **)(int))(a1 + 84); /*0x7c2d8b*/
  if ( v7 ) /*0x7c2d90*/
    v8 = v7(a1); /*0x7c2d93*/
  else
    v8 = -1; /*0x7c2d9a*/
  v9 = *(_DWORD *)(a1 + 40); /*0x7c2d9d*/
  if ( v9 == -1 ) /*0x7c2da3*/
  {
    *(_DWORD *)(a1 + 40) = v8; /*0x7c2da5*/
    *(_DWORD *)(a1 + 44) = 0; /*0x7c2da8*/
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v8; /*0x7c2db3*/
    if ( v8 - v9 > *(_DWORD *)(a1 + 44) ) /*0x7c2dbd*/
      *(_DWORD *)(a1 + 44) = v8 - v9; /*0x7c2dbf*/
  }
  v10 = *(_DWORD *)(a1 + 336); /*0x7c2dc8*/
  if ( a2 != 2 ) /*0x7c2dce*/
  {
    if ( (v10 & 0x40) != 0 ) /*0x7c2dd6*/
    {
      LOBYTE(v10) = v10 & 0xBF; /*0x7c2dd8*/
      *(_DWORD *)(a1 + 336) = v10; /*0x7c2dda*/
      if ( (*(_BYTE *)(a1 + 132) & 1) != 0 ) /*0x7c2de8*/
        AudioStream::SetFlag4C(a1); /*0x7c2dec*/
      CalcAudioStreamOffset(a1, *(_DWORD *)(a1 + 36)); /*0x7c2df6*/
    }
    v11 = *(_DWORD *)(a1 + 336); /*0x7c2dfb*/
    if ( (*(_BYTE *)(a1 + 336) & 6) != 6 ) /*0x7c2e09*/
    {
      while ( 1 ) /*0x7c2e19*/
      {
        if ( (v11 & 4) == 0 ) /*0x7c2e1b*/
        {
          v12 = FillAudioStreamBuffer(a1, 0); /*0x7c2e25*/
          v5 = v12; /*0x7c2e2a*/
          if ( v12 == -1 ) /*0x7c2e2f*/
          {
            ++*(_DWORD *)(a1 + 20); /*0x7c2e31*/
          }
          else if ( v12 != -9 && v12 != -11 ) /*0x7c2e3e*/
          {
            *(_DWORD *)(a1 + 336) |= 4u; /*0x7c2e40*/
          }
          if ( (*(_DWORD *)(a1 + 132) & 0x200) != 0 ) /*0x7c2e4c*/
          {
            if ( v12 == -9 || (*(_BYTE *)(a1 + 336) & 4) != 0 ) /*0x7c2e59*/
            {
              v15 = *(_DWORD *)(a1 + 336); /*0x7c2e90*/
              if ( (v15 & 0x200) != 0 && (v15 & 0x800) == 0 ) /*0x7c2e9d*/
              {
                BYTE1(v15) |= 4u; /*0x7c2e9f*/
                *(_DWORD *)(a1 + 336) = v15; /*0x7c2ea2*/
                if ( (*(_BYTE *)(a1 + 132) & 1) != 0 ) /*0x7c2eb0*/
                  AudioStream::SetFlag4C(a1); /*0x7c2eb4*/
              }
            }
            else
            {
              v13 = *(_DWORD *)(a1 + 1980); /*0x7c2e5b*/
              if ( (v13 & 0x400) != 0 ) /*0x7c2e64*/
              {
                if ( (v13 & 0x40) != 0 ) /*0x7c2e68*/
                  Audio_Process_7BD290(a1); /*0x7c2e6c*/
                *(_DWORD *)(a1 + 336) |= 0x200u; /*0x7c2e79*/
                v14 = *(_DWORD *)(a1 + 1980); /*0x7c2e7f*/
                BYTE1(v14) &= ~4u; /*0x7c2e85*/
                *(_DWORD *)(a1 + 1980) = v14; /*0x7c2e88*/
              }
            }
          }
        }
        if ( (*(_BYTE *)(a1 + 128) & 2) == 0 ) /*0x7c2ec0*/
          break; /*0x7c2ec0*/
        v22 = *(_DWORD *)(a1 + 336); /*0x7c2f85*/
        LOBYTE(v22) = v22 | 2; /*0x7c2f8b*/
        *(_DWORD *)(a1 + 336) = v22; /*0x7c2f8d*/
        *(_DWORD *)(*(_DWORD *)(a1 + 416) + 20) = 0; /*0x7c2f99*/
        *(_DWORD *)(a1 + 416) = *(_DWORD *)(*(_DWORD *)(a1 + 416) + 12); /*0x7c2fa9*/
LABEL_62:
        if ( a2 != 1 ) /*0x7c2fb4*/
        {
          v11 = *(_DWORD *)(a1 + 336); /*0x7c2fba*/
          if ( (*(_BYTE *)(a1 + 336) & 6) != 6 ) /*0x7c2fc8*/
            continue; /*0x7c2fc8*/
        }
        goto LABEL_80; /*0x7c2fc8*/
      }
      if ( (*(_DWORD *)(a1 + 132) & 0x200) != 0 ) /*0x7c2ecc*/
      {
        v16 = *(_DWORD *)(a1 + 336); /*0x7c2ece*/
        if ( (v16 & 0x200) != 0 ) /*0x7c2ed6*/
        {
          if ( (v16 & 0x400) != 0 ) /*0x7c2edb*/
          {
            BYTE1(v16) &= 0xF9u; /*0x7c2edd*/
            *(_DWORD *)(a1 + 336) = v16; /*0x7c2ee0*/
          }
          else if ( (v16 & 0x800) == 0 ) /*0x7c2eeb*/
          {
            v5 = -10; /*0x7c2fd3*/
            goto LABEL_80; /*0x7c2fd8*/
          }
        }
      }
      if ( (a3 & 1) != 0 ) /*0x7c2ef7*/
      {
        v17 = *(_DWORD *)(a1 + 420); /*0x7c2ef9*/
        LOBYTE(v17) = v17 | 2; /*0x7c2eff*/
      }
      else
      {
        if ( (a3 & 2) == 0 ) /*0x7c2f05*/
          goto LABEL_50; /*0x7c2f05*/
        v17 = *(_DWORD *)(a1 + 420) | 4; /*0x7c2f0d*/
      }
      *(_DWORD *)(a1 + 420) = v17; /*0x7c2f0f*/
LABEL_50:
      v18 = (*(int (__thiscall **)(int))(a1 + 1916))(a1); /*0x7c2f15*/
      v5 = v18; /*0x7c2f1d*/
      if ( v18 == -1 ) /*0x7c2f22*/
      {
        if ( (*(_BYTE *)(a1 + 420) & 8) == 0 ) /*0x7c2f2b*/
          ++*(_DWORD *)(a1 + 24); /*0x7c2f2d*/
        v5 = Audio_Process_7C3750(a1); /*0x7c2f37*/
        if ( v5 == -1 ) /*0x7c2f3c*/
        {
          v20 = *(_DWORD *)(a1 + 420); /*0x7c2f48*/
          v5 = *(_DWORD *)(a1 + 1744); /*0x7c2f4e*/
          LOBYTE(v20) = v20 & 0xF9; /*0x7c2f54*/
          *(_DWORD *)(a1 + 420) = v20; /*0x7c2f56*/
          goto LABEL_62; /*0x7c2f5c*/
        }
        v19 = *(_DWORD *)(a1 + 336); /*0x7c2f3e*/
        LOBYTE(v19) = v19 | 6; /*0x7c2f44*/
      }
      else
      {
        if ( v18 != -9 ) /*0x7c2f61*/
          goto LABEL_60; /*0x7c2f61*/
        v19 = *(_DWORD *)(a1 + 336); /*0x7c2f63*/
        if ( (v19 & 4) == 0 ) /*0x7c2f6b*/
          goto LABEL_60; /*0x7c2f6b*/
        LOBYTE(v19) = v19 | 2; /*0x7c2f6d*/
      }
      *(_DWORD *)(a1 + 336) = v19; /*0x7c2f6f*/
LABEL_60:
      v21 = *(_DWORD *)(a1 + 420); /*0x7c2f75*/
      LOBYTE(v21) = v21 & 0xF9; /*0x7c2f7b*/
      *(_DWORD *)(a1 + 420) = v21; /*0x7c2f7d*/
      goto LABEL_62; /*0x7c2f83*/
    }
    goto LABEL_80; /*0x7c2e09*/
  }
  if ( (v10 & 0x40) == 0 ) /*0x7c2fdf*/
  {
    LOBYTE(v10) = v10 | 0x40; /*0x7c2fe1*/
    *(_DWORD *)(a1 + 336) = v10; /*0x7c2fe5*/
    *(_DWORD *)(a1 + 36) = AudioStream::GetPosition(a1); /*0x7c2ff0*/
    if ( (*(_BYTE *)(a1 + 1980) & 0x40) != 0 ) /*0x7c2ffb*/
      Audio_Process_7BD290(a1); /*0x7c2fff*/
  }
  if ( (a3 & 2) == 0 ) /*0x7c3009*/
  {
    v5 = -14; /*0x7c307e*/
    goto LABEL_80; /*0x7c307e*/
  }
  *(_DWORD *)(a1 + 420) |= 0x14u; /*0x7c3014*/
  v23 = (*(int (__thiscall **)(int))(a1 + 1916))(a1); /*0x7c301c*/
  v5 = v23; /*0x7c3022*/
  if ( v23 != -1 ) /*0x7c3027*/
  {
    if ( v23 != -9 ) /*0x7c305a*/
      goto LABEL_78; /*0x7c305a*/
    v24 = *(_DWORD *)(a1 + 336); /*0x7c305c*/
    if ( (v24 & 4) == 0 ) /*0x7c3064*/
      goto LABEL_78; /*0x7c3064*/
    LOBYTE(v24) = v24 | 2; /*0x7c3066*/
LABEL_77:
    *(_DWORD *)(a1 + 336) = v24; /*0x7c3068*/
LABEL_78:
    v26 = *(_DWORD *)(a1 + 420); /*0x7c306e*/
    LOBYTE(v26) = v26 & 0xE9; /*0x7c3074*/
    *(_DWORD *)(a1 + 420) = v26; /*0x7c3076*/
    goto LABEL_80; /*0x7c307c*/
  }
  v5 = Audio_Process_7C3750(a1); /*0x7c3030*/
  if ( v5 != -1 ) /*0x7c3035*/
  {
    v24 = *(_DWORD *)(a1 + 336); /*0x7c3037*/
    LOBYTE(v24) = v24 | 6; /*0x7c303d*/
    goto LABEL_77; /*0x7c303f*/
  }
  v25 = *(_DWORD *)(a1 + 420); /*0x7c3041*/
  v5 = *(_DWORD *)(a1 + 1744); /*0x7c3047*/
  LOBYTE(v25) = v25 & 0xE9; /*0x7c304d*/
  *(_DWORD *)(a1 + 420) = v25; /*0x7c304f*/
LABEL_80:
  if ( (*(_BYTE *)(a1 + 336) & 6) == 6 || a2 == 3 ) /*0x7c3097*/
  {
    *(_DWORD *)(a1 + 36) = AudioStream::GetPosition(a1); /*0x7c30a0*/
    if ( (*(_BYTE *)(a1 + 1980) & 0x40) != 0 ) /*0x7c30ab*/
      Audio_Process_7BD2B0(a1); /*0x7c30af*/
    return -2; /*0x7c30b4*/
  }
  return v5; /*0x7c30bb*/
}


// ==== 0x007C30D0  ProcessAudioStreamBuffer  this=-  sig=ida-proto ====
int __fastcall ProcessAudioStreamBuffer(int a1, signed int a2, int a3)
{
  bool v5; // bl
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  char a5; // [esp+Bh] [ebp-5h] BYREF
  char v12[4]; // [esp+Ch] [ebp-4h]

  *(_DWORD *)v12 = *(_DWORD *)(a1 + 368); /*0x7c30df*/
  if ( (*(_BYTE *)(a1 + 1980) & 0x40) != 0 ) /*0x7c30eb*/
    Audio_Process_7BD2B0(a1); /*0x7c30ed*/
  if ( a2 <= *(_DWORD *)(a1 + 284) && *(_DWORD *)(a1 + 1892) ) /*0x7c30fe*/
  {
    *(_DWORD *)(a1 + 1808) = -1; /*0x7c3113*/
    *(_DWORD *)(a1 + 1800) = -1; /*0x7c3119*/
    *(_DWORD *)(a1 + 1804) = -1; /*0x7c311f*/
    Audio_Process_7BE660((_DWORD *)a1); /*0x7c3125*/
    v5 = 0; /*0x7c3130*/
    if ( !*(_BYTE *)(a1 + 264) && !Audio_Process_7C04E0(a1, a2) ) /*0x7c313a*/
    {
      v6 = Audio_Process_7C0530(a1, a2, 1); /*0x7c314e*/
      if ( v6 != -1 ) /*0x7c3153*/
        return v6; /*0x7c321d*/
      v5 = (*(_BYTE *)(*(_DWORD *)v12 + 20) & 4) != 0; /*0x7c3163*/
    }
    *(_DWORD *)(a1 + 384) = a2; /*0x7c3165*/
    v12[0] = (~*(_BYTE *)(a1 + 234) & 8) != 0; /*0x7c317d*/
    v6 = ProcessAudioStreamPlayback(a1, (DSurface *)a2, *(unsigned __int8 *)(a1 + 245), v12[0], 1, &a5); /*0x7c319b*/
    if ( v6 == -1 ) /*0x7c31a0*/
    {
      v7 = *(_DWORD *)(a1 + 368); /*0x7c31a2*/
      *(_DWORD *)(a1 + 384) = a2; /*0x7c31aa*/
      *(_DWORD *)(v7 + 20) = 0; /*0x7c31b2*/
      if ( v5 ) /*0x7c31b5*/
        *(_DWORD *)(*(_DWORD *)(a1 + 368) + 20) |= 4u; /*0x7c31bd*/
      v8 = *(_DWORD *)(a1 + 368); /*0x7c31c1*/
      v9 = *(_DWORD *)(v8 + 12); /*0x7c31c7*/
      if ( v9 != v8 ) /*0x7c31cc*/
      {
        do /*0x7c31da*/
        {
          *(_DWORD *)(v9 + 20) = 0; /*0x7c31ce*/
          v9 = *(_DWORD *)(v9 + 12); /*0x7c31d1*/
        }
        while ( v9 != *(_DWORD *)(a1 + 368) ); /*0x7c31da*/
      }
      *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 368); /*0x7c31e2*/
      v6 = Audio_Process_7C0490((_DWORD *)a1); /*0x7c31ef*/
      if ( v6 >= 0xFFFFFFFE ) /*0x7c31f4*/
      {
        v6 = a2; /*0x7c3201*/
        CalcAudioStreamOffset(a1, 60 * a2 / *(_DWORD *)(a1 + 116)); /*0x7c320f*/
      }
    }
    return v6; /*0x7c320f*/
  }
  return -6; /*0x7c3218*/
}


// ==== 0x007C3230  Render_Render_7C3230  this=MovieClass  sig=csp ====
int __fastcall sub_7C3230(int a1, int a2, int a3)
{
  if ( a2 ) /*0x7c3232*/
    *(_DWORD *)(a1 + 1924) = a2; /*0x7c3234*/
  else
    *(_DWORD *)(a1 + 1924) = nullsub_49; /*0x7c323c*/
  if ( a3 ) /*0x7c324c*/
    *(_DWORD *)(a1 + 1928) = a3; /*0x7c324e*/
  else
    *(_DWORD *)(a1 + 1928) = nullsub_49; /*0x7c325a*/
  return -1; /*0x7c3257*/
}


// ==== 0x007C3270  Audio_Process_7C3270  this=ObjectClass  sig=csp ====
int __fastcall Audio_Process_7C3270(int a1, int a2, unsigned int a3, ObjectClass *aP3, int a5, int a6)
{
  int v6; // eax
  unsigned int v7; // esi
  int v8; // edi
  ObjectClass *v9; // edx
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  int v14; // eax
  char v15; // bl
  int v16; // eax

  v6 = *(_DWORD *)(a1 + 128); /*0x7c3271*/
  v7 = a3; /*0x7c327a*/
  v8 = v6 & 0x30; /*0x7c3285*/
  if ( !a3 ) /*0x7c328a*/
    LOWORD(v7) = *(_WORD *)(a1 + 238); /*0x7c328c*/
  v9 = aP3; /*0x7c3293*/
  if ( !aP3 ) /*0x7c3299*/
  {
    LOWORD(v9) = *(_WORD *)(a1 + 240); /*0x7c329b*/
    aP3 = (ObjectClass *)(unsigned __int16)v9; /*0x7c32a2*/
  }
  v10 = a5; /*0x7c32a6*/
  v11 = a6; /*0x7c32aa*/
  if ( a5 >= 0 || a6 >= 0 ) /*0x7c32b8*/
  {
    if ( (v6 & 0x40) != 0 ) /*0x7c3366*/
    {
      v10 = a5 / 2; /*0x7c336f*/
      v9 = aP3; /*0x7c3376*/
      v11 = a6 / 2; /*0x7c337c*/
    }
    if ( v8 == 32 ) /*0x7c3381*/
    {
      *(_DWORD *)(a1 + 436) = v7 - v10; /*0x7c339a*/
    }
    else
    {
      *(_DWORD *)(a1 + 436) = v10; /*0x7c3386*/
      if ( v8 != 48 ) /*0x7c338c*/
      {
        *(_DWORD *)(a1 + 440) = v11; /*0x7c338e*/
        goto LABEL_22; /*0x7c3394*/
      }
    }
    v12 = (int)&v9->__pad_0[-v11]; /*0x7c33a2*/
LABEL_21:
    *(_DWORD *)(a1 + 440) = v12; /*0x7c33a4*/
    goto LABEL_22; /*0x7c33a4*/
  }
  if ( (v6 & 8) != 0 ) /*0x7c32c0*/
  {
    if ( (v6 & 0x40) != 0 ) /*0x7c32c4*/
    {
      *(_DWORD *)(a1 + 436) = *(unsigned __int16 *)(a1 + 250) >> 1; /*0x7c32d1*/
      v12 = *(unsigned __int16 *)(a1 + 252) >> 1; /*0x7c32e0*/
    }
    else
    {
      *(_DWORD *)(a1 + 436) = *(unsigned __int16 *)(a1 + 250); /*0x7c32f0*/
      v12 = *(unsigned __int16 *)(a1 + 252); /*0x7c32f8*/
    }
    goto LABEL_21; /*0x7c32e2*/
  }
  if ( (v6 & 0x40) != 0 ) /*0x7c3306*/
  {
    *(_DWORD *)(a1 + 436) = (v7 - (*(unsigned __int16 *)(a1 + 238) >> 1)) >> 1; /*0x7c331b*/
    *(_DWORD *)(a1 + 440) = ((unsigned int)v9 - (*(unsigned __int16 *)(a1 + 240) >> 1)) >> 1; /*0x7c3330*/
  }
  else
  {
    *(_DWORD *)(a1 + 436) = (v7 - *(unsigned __int16 *)(a1 + 238)) >> 1; /*0x7c3349*/
    *(_DWORD *)(a1 + 440) = ((unsigned int)v9 - *(unsigned __int16 *)(a1 + 240)) >> 1; /*0x7c335c*/
  }
LABEL_22:
  v13 = *(_DWORD *)(a1 + 436); /*0x7c33aa*/
  if ( v13 < 0 ) /*0x7c33b2*/
    return -24; /*0x7c33b2*/
  v14 = *(_DWORD *)(a1 + 440); /*0x7c33b4*/
  if ( v14 < 0 || v13 >= v7 || v14 >= (unsigned int)v9 ) /*0x7c33c4*/
    return -24; /*0x7c341e*/
  v15 = *(_BYTE *)(a1 + 264); /*0x7c33c6*/
  if ( v15 == 1 || v15 == 4 ) /*0x7c33d4*/
  {
    v13 *= 2; /*0x7c33d6*/
    v14 *= 2; /*0x7c33d8*/
  }
  *(_DWORD *)(a1 + 428) = v7; /*0x7c33df*/
  *(_DWORD *)(a1 + 444) = v13 + v7 * v14; /*0x7c33e5*/
  *(_DWORD *)(a1 + 432) = v9; /*0x7c33f1*/
  if ( a2 ) /*0x7c33f7*/
  {
    *(_DWORD *)(a1 + 424) = a2; /*0x7c33f9*/
    *(_DWORD *)(a1 + 8) = a2; /*0x7c33ff*/
  }
  v16 = *(_DWORD *)(a1 + 336); /*0x7c3402*/
  LOBYTE(v16) = v16 | 0x10; /*0x7c3409*/
  *(_DWORD *)(a1 + 336) = v16; /*0x7c340c*/
  return -1; /*0x7c3408*/
}


// ==== 0x007C3430  Audio_Render_7C3430  this=DSurface  sig=csp ====
int __fastcall Audio_Render_7C3430(DSurface *aP0, int a2, int a3, unsigned int a4)
{
  int v6; // edx
  unsigned __int16 v7; // ax
  int result; // eax

  if ( a2 >= *(unsigned __int16 *)&aP0->__pad_518[508] /*0x7c3436*/
    || a2 < 0
    || (aP0->__pad_2C[88] & 1) != 0 && !*(_WORD *)&aP0->__pad_518[508] )
  {
    return -23; /*0x7c3498*/
  }
  v6 = *(_DWORD *)&aP0->__pad_518[516]; /*0x7c345b*/
  v7 = *(_WORD *)(v6 + 4 * a2 + 2); /*0x7c3463*/
  LOWORD(v6) = *(_WORD *)(v6 + 4 * a2); /*0x7c346d*/
  *(_DWORD *)&aP0->__pad_11F[1] = a2; /*0x7c347d*/
  result = SeekAudioStream((int)aP0, (DSurface *)(unsigned __int16)v6, (DSurface *)v7, a3, a4); /*0x7c3483*/
  if ( result == -1 ) /*0x7c348b*/
    *(_DWORD *)&aP0->__pad_11F[1] = a2; /*0x7c348d*/
  return result; /*0x7c3493*/
}


// ==== 0x007C34B0  SeekAudioStream  this=DSurface  sig=csp ====
int __fastcall SeekAudioStream(int a1, DSurface *aP1, DSurface *aP2, int a4, unsigned int a5)
{
  int v5; // edi
  int result; // eax
  DSurface *v7; // esi
  unsigned int v8; // edi
  int v9; // ebx

  v5 = *(_DWORD *)(a1 + 16); /*0x7c34b3*/
  result = -1; /*0x7c34b6*/
  if ( (int)aP1 >= v5 ) /*0x7c34bb*/
    return -23; /*0x7c34bb*/
  v7 = aP2; /*0x7c34c1*/
  if ( (int)aP2 >= v5 ) /*0x7c34c7*/
    return -23; /*0x7c34c7*/
  if ( (int)aP1 >= (int)aP2 ) /*0x7c34cf*/
    return -23; /*0x7c34cf*/
  v8 = a5; /*0x7c34d5*/
  if ( a5 > 2 ) /*0x7c34db*/
    return -23; /*0x7c35a4*/
  v9 = a4; /*0x7c34ea*/
  if ( a4 < 0 ) /*0x7c34f0*/
    v9 = -1; /*0x7c34f2*/
  if ( *(_DWORD *)(a1 + 292) || a5 != 1 ) /*0x7c3503*/
  {
    if ( a5 != 2 ) /*0x7c350f*/
    {
      if ( *(char *)(a1 + 336) >= 0 ) /*0x7c3518*/
      {
        *(_DWORD *)(a1 + 324) = aP1; /*0x7c3546*/
        *(_DWORD *)(a1 + 320) = aP2; /*0x7c354c*/
      }
      else
      {
        *(_DWORD *)(a1 + 316) = aP1; /*0x7c351c*/
        if ( a5 ) /*0x7c3522*/
        {
          aP1 = *(DSurface **)(a1 + 296); /*0x7c3538*/
          *(_DWORD *)(a1 + 312) = *(_DWORD *)(a1 + 300); /*0x7c353e*/
        }
        else
        {
          *(_DWORD *)(a1 + 312) = aP2; /*0x7c3524*/
          v7 = *(DSurface **)(a1 + 300); /*0x7c352a*/
        }
      }
    }
  }
  else
  {
    v8 = 2; /*0x7c3505*/
  }
  *(_DWORD *)(a1 + 296) = aP1; /*0x7c3555*/
  if ( v8 == 1 )
  {
    *(_DWORD *)(a1 + 304) = v7; /*0x7c355e*/
    *(_DWORD *)(a1 + 308) = v9; /*0x7c3565*/
  }
  else
  {
    *(_DWORD *)(a1 + 292) = v9; /*0x7c3573*/
    if ( v8 == 2 )
    {
      *(_DWORD *)(a1 + 300) = v7; /*0x7c357d*/
      *(_DWORD *)(a1 + 284) = v7; /*0x7c3583*/
      return ProcessAudioStreamBuffer(a1, (signed int)aP1, 0) < 0 ? -23 : -1;
    }
  }
  return result; /*0x7c3564*/
}


// ==== 0x007C35B0  ObjectClass::method_7C35B0  this=ObjectClass  sig=csp ====
int __thiscall sub_7C35B0(unsigned __int16 *this)
{
  return this->q38A; /*0x7c35b9*/
}


// ==== 0x007C35C0  AbstractClass::finalizeDestruction  this=AbstractClass  sig=csp ====
int __thiscall sub_7C35C0(int this)
{
  unsigned __int16 v1; // ax
  int v2; // esi
  unsigned int v4; // esi

  v1 = *(_WORD *)(this + 236); /*0x7c35c3*/
  *(_DWORD *)(this + 20) = 0; /*0x7c35cc*/
  *(_DWORD *)(this + 24) = 0; /*0x7c35cf*/
  v2 = v1 - 1; /*0x7c35d2*/
  *(_DWORD *)(this + 284) = v2; /*0x7c35d8*/
  *(_DWORD *)(this + 300) = v2; /*0x7c35de*/
  *(_DWORD *)(this + 320) = v2; /*0x7c35e4*/
  v4 = *(_DWORD *)(this + 1980) & 0xFFFFF87F; /*0x7c35f0*/
  *(_DWORD *)(this + 32) = 0; /*0x7c35f6*/
  *(_DWORD *)(this + 1980) = v4; /*0x7c35f9*/
  *(_DWORD *)(this + 36) = 0; /*0x7c35ff*/
  *(_DWORD *)(this + 336) = 0; /*0x7c3602*/
  *(_DWORD *)(this + 292) = 0; /*0x7c3608*/
  *(_DWORD *)(this + 288) = -1; /*0x7c360e*/
  *(_DWORD *)(this + 296) = -1; /*0x7c3614*/
  *(_DWORD *)(this + 304) = -1; /*0x7c361a*/
  *(_DWORD *)(this + 308) = -1; /*0x7c3620*/
  *(_DWORD *)(this + 316) = -1; /*0x7c3626*/
  *(_DWORD *)(this + 312) = -1; /*0x7c362c*/
  *(_DWORD *)(this + 324) = -1; /*0x7c3632*/
  *(_DWORD *)(this + 40) = -1; /*0x7c3638*/
  *(_DWORD *)(this + 44) = 0; /*0x7c363b*/
  *(_DWORD *)(this + 1952) = 0; /*0x7c363e*/
  *(_DWORD *)(this + 1956) = -1; /*0x7c3644*/
  *(_DWORD *)(this + 1988) = 0; /*0x7c364a*/
  *(_DWORD *)(this + 56) = 0; /*0x7c3650*/
  *(_DWORD *)(this + 1808) = -1; /*0x7c3653*/
  *(_DWORD *)(this + 1800) = -1; /*0x7c3659*/
  *(_DWORD *)(this + 1804) = -1; /*0x7c365f*/
  return -1; /*0x7c3665*/
}


// ==== 0x007C3670  ObjectClass::method_7C3670  this=ObjectClass  sig=csp ====
int __thiscall sub_7C3670(_DWORD *this)
{
  this->q710 = -1; /*0x7c3673*/
  this->q708 = -1; /*0x7c3679*/
  this->q70C = -1; /*0x7c367f*/
  return -1; /*0x7c3685*/
}


// ==== 0x007C3690  Render_Render_7C3690  this=MovieClass  sig=ida-proto ====
int __fastcall sub_7C3690(int a1, int a2)
{
  int result; // eax

  result = -1; /*0x7c3690*/
  if ( a2 > 0 && *(unsigned __int16 *)(a1 + 236) >= a2 ) /*0x7c36a4*/
  {
    result = *(_DWORD *)(a1 + 284); /*0x7c36a6*/
    *(_DWORD *)(a1 + 284) = (unsigned __int16)a2; /*0x7c36b2*/
  }
  return result; /*0x7c36b8*/
}


// ==== 0x007C36C0  sub_7C36C0  this=-  sig=ida-proto ====
void *sub_7C36C0()
{
  return &MEMORY[0x84E7C0]; /*0x7c36c5*/
}


// ==== 0x007C3710  Render_Render_7C3710  this=MovieClass  sig=csp ====
int __fastcall sub_7C3710(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  *a2 = a1[242]; /*0x7c3718*/
  *a3 = a1[243]; /*0x7c3726*/
  *a4 = a1[264]; /*0x7c3734*/
  return -1; /*0x7c3739*/
}


// ==== 0x007C3740  sub_7C3740  this=-  sig=ida-proto ====
char *sub_7C3740()
{
  return MEMORY[0x84E7C4]; /*0x7c3745*/
}


// ==== 0x007C3750  ObjectClass::Audio_Process_7C3750  this=ObjectClass  sig=csp ====
int __thiscall sub_7C3750(int this)
{
  void (__cdecl *v2)(int, int, _DWORD, _DWORD); // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx

  v2 = *(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 72); /*0x7c3754*/
  v3 = *(_DWORD **)(this + 1756); /*0x7c3757*/
  if ( v2 ) /*0x7c375f*/
  {
    if ( (v3[5] & 0x100) != 0 ) /*0x7c3767*/
    {
      v2(this, 4, v3[7], *(_DWORD *)(this + 288)); /*0x7c3777*/
      v4 = v3[5]; /*0x7c3779*/
      BYTE1(v4) &= ~1u; /*0x7c377f*/
      v3[5] = v4; /*0x7c3782*/
    }
    if ( (v3[5] & 0x200) != 0 ) /*0x7c378b*/
    {
      (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 72))(this, 5, v3[7], *(_DWORD *)(this + 288)); /*0x7c379b*/
      v5 = v3[5]; /*0x7c379e*/
      BYTE1(v5) &= ~2u; /*0x7c37a4*/
      v3[5] = v5; /*0x7c37a7*/
    }
    if ( (v3[5] & 0x400) != 0 ) /*0x7c37b0*/
    {
      Audio_Process_7BE830(this, v3[7]); /*0x7c37b7*/
      v6 = v3[5]; /*0x7c37bc*/
      BYTE1(v6) &= ~4u; /*0x7c37bf*/
      v3[5] = v6; /*0x7c37c2*/
    }
  }
  result = (*(int (__thiscall **)(int))(this + 1920))(this); /*0x7c37c7*/
  *(_DWORD *)(this + 1760) = v3[7]; /*0x7c37d0*/
  v8 = *(_DWORD *)(this + 420); /*0x7c37d6*/
  if ( (v8 & 8) != 0 ) /*0x7c37df*/
  {
    if ( (v8 & 0x10) != 0 ) /*0x7c37f4*/
    {
      v10 = v3[5]; /*0x7c37f6*/
      BYTE1(v10) |= 8u; /*0x7c37f9*/
      v3[5] = v10; /*0x7c37fc*/
      *(_DWORD *)(this + 420) &= ~0x10u; /*0x7c3808*/
    }
    *(_DWORD *)(this + 420) &= ~8u; /*0x7c3818*/
  }
  else
  {
    v9 = v3[5]; /*0x7c37e1*/
    v3[5] = 0; /*0x7c37e4*/
    v3[6] = v9; /*0x7c37eb*/
  }
  return result; /*0x7c37ee*/
}


// ==== 0x007C3840  sub_7C3840  this=-  sig=ida-proto ====
int __fastcall sub_7C3840(int a1, _DWORD *a2, _DWORD *a3)
{
  *a2 = *(unsigned __int16 *)(a1 + 250); /*0x7c3849*/
  *a3 = *(unsigned __int16 *)(a1 + 252); /*0x7c3858*/
  return -1; /*0x7c385d*/
}


// ==== 0x007C3860  Audio_Render_7C3860  this=DSurface  sig=ida-proto ====
int __fastcall sub_7C3860(int a1, int a2)
{
  int result; // eax
  unsigned __int16 *v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // esi
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  result = 0; /*0x7c386d*/
  v11 = 0; /*0x7c3871*/
  if ( *(_WORD *)(a1 + 1812) ) /*0x7c3864*/
  {
    v3 = *(unsigned __int16 **)(a1 + 1820); /*0x7c387d*/
    v12 = *(unsigned __int16 *)(a1 + 1812); /*0x7c3887*/
    while ( 1 ) /*0x7c3892*/
    {
      v4 = v3[1]; /*0x7c3892*/
      v5 = *v3; /*0x7c3896*/
      if ( (unsigned __int16)v4 != *(_DWORD *)(a1 + 16) - 1 ) /*0x7c389c*/
        break; /*0x7c389c*/
      if ( a2 <= 0 ) /*0x7c38ac*/
      {
        v6 = *(_DWORD *)(a1 + 1892); /*0x7c38c5*/
        v7 = *(_DWORD *)(v6 + 4 * v4); /*0x7c38cb*/
        goto LABEL_8; /*0x7c38cb*/
      }
      v8 = 2 * (*(_DWORD *)(*(_DWORD *)(a1 + 1892) + 4 * v5) & 0xFFFFFFF); /*0x7c38bf*/
      v9 = a2; /*0x7c38c1*/
LABEL_9:
      v10 = v9 - v8; /*0x7c38e1*/
      if ( v10 > v11 ) /*0x7c38e9*/
        v11 = v10; /*0x7c38eb*/
      v3 += 2; /*0x7c38f3*/
      if ( !--v12 ) /*0x7c38fb*/
        return v11; /*0x7c38fd*/
    }
    v6 = *(_DWORD *)(a1 + 1892); /*0x7c389e*/
    v7 = *(_DWORD *)(v6 + 4 * v4 + 4); /*0x7c38a4*/
LABEL_8:
    v9 = 2 * (v7 & 0xFFFFFFF); /*0x7c38ce*/
    v8 = 2 * (*(_DWORD *)(v6 + 4 * v5) & 0xFFFFFFF); /*0x7c38df*/
    goto LABEL_9; /*0x7c38df*/
  }
  return result; /*0x7c3904*/
}


// ==== 0x007C3910  CalcAudioStreamOffset  this=DSurface  sig=ida-proto ====
int __fastcall AudioStream_CalcOffset(int a1, int a2)
{
  int v3; // edi
  int result; // eax

  *(_DWORD *)(a1 + 328) = 0; /*0x7c3917*/
  v3 = a2 - (unsigned int)(60 * (*(int (__cdecl **)(int))(a1 + 80))(a1)) / *(_DWORD *)(a1 + 120); /*0x7c3935*/
  result = *(_DWORD *)(a1 + 328); /*0x7c3937*/
  *(_DWORD *)(a1 + 328) = v3 - result; /*0x7c393f*/
  return result; /*0x7c3945*/
}


// ==== 0x007C3950  Audio_Process_7C3950  this=AudioStream  sig=ida-proto ====
void __fastcall sub_7C3950(int a1, int a2)
{
  *(_DWORD *)(a1 + 328) += a2; /*0x7c3950*/
}


// ==== 0x007C3960  AudioStream::GetPosition  this=AudioStream  sig=csp ====
unsigned int __thiscall AudioStream_GetPosition(int this)
{
  return (unsigned int)(60 * (*(int (__cdecl **)(int))(this + 80))(this)) / *(_DWORD *)(this + 120) /*0x7c3982*/
       + *(_DWORD *)(this + 328);
}


// ==== 0x007C3990  MovieClass::ComputeTime  this=MovieClass  sig=csp ====
unsigned int __thiscall sub_7C3990(int this)
{
  unsigned int v1; // edi

  v1 = *(_DWORD *)(this + 120); /*0x7c3995*/
  return 60 * (*(int (__cdecl **)(int))(this + 80))(this) / v1 + *(_DWORD *)(this + 328); /*0x7c39ab*/
}


// ==== 0x007C39C0  IsoTile::Decode16BitV2  this=IsoTile  sig=ida-proto ====
char *__cdecl sub_7C39C0(int a1, unsigned __int16 *a2, int *a3, int a4, int a5, int a6)
{
  unsigned int v6; // edi
  char *result; // eax
  int *v9; // ebp
  char *v10; // ecx
  unsigned __int16 v11; // ax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ecx
  int *v17; // eax
  int *v18; // edx
  unsigned int v19; // edi
  int v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // edi
  unsigned int v23; // edx
  unsigned __int16 v24; // cx
  int v25; // eax
  __int16 *v26; // edi
  int *v27; // ebx
  int v28; // ebp
  __int16 v29; // cx
  int *v30; // eax
  unsigned int v31; // edx
  bool v32; // zf
  int v33; // esi
  _WORD *v34; // eax
  int *v35; // ebx
  int *v36; // edx
  int v37; // edi
  int v38; // edi
  int v39; // esi
  unsigned __int16 *v40; // eax
  int *v41; // edx
  unsigned __int16 v42; // cx
  unsigned __int16 v43; // bx
  unsigned __int16 *v44; // eax
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // bx
  int v47; // edi
  int v48; // edx
  int v49; // eax
  int *v50; // ecx
  char *v51; // [esp+Ch] [ebp-Ch]
  int *v52; // [esp+10h] [ebp-8h]
  unsigned int v53; // [esp+14h] [ebp-4h]
  int v54; // [esp+20h] [ebp+8h]
  unsigned __int16 *v55; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v56; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v57; // [esp+24h] [ebp+Ch]
  char *v58; // [esp+2Ch] [ebp+14h]
  int v59; // [esp+2Ch] [ebp+14h]
  unsigned int v60; // [esp+2Ch] [ebp+14h]
  unsigned int v61; // [esp+2Ch] [ebp+14h]
  unsigned int v62; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7c39ce*/
  result = (char *)a3; /*0x7c39d4*/
  v9 = a3; /*0x7c39e0*/
  v10 = (char *)&a3[2 * a6 * a5]; /*0x7c39e2*/
  v62 = 2 * a6; /*0x7c39ea*/
  v53 = (unsigned int)v10; /*0x7c39ee*/
  v51 = (char *)a3; /*0x7c39f2*/
  v52 = &a3[2 * a4]; /*0x7c39f6*/
  v58 = (char *)a3; /*0x7c39fa*/
  if ( a3 < (int *)v10 ) /*0x7c39fe*/
  {
    do /*0x7c3a05*/
    {
      v11 = *a2++; /*0x7c3a05*/
      v12 = v11; /*0x7c3a10*/
      v13 = v11 & 0xF000; /*0x7c3a12*/
      v14 = v12 & 0xFFFF0FFF; /*0x7c3a17*/
      if ( v13 > 12288 ) /*0x7c3a22*/
      {
        if ( v13 != 20480 ) /*0x7c3bde*/
        {
          if ( v13 == 24576 ) /*0x7c3be9*/
          {
            if ( v14 ) /*0x7c3c68*/
            {
              v38 = 4 * (v6 >> 2); /*0x7c3c71*/
              v61 = v14; /*0x7c3c74*/
              while ( 1 ) /*0x7c3c87*/
              {
                v39 = 4; /*0x7c3c87*/
                v40 = (unsigned __int16 *)(a1 + 32 * *a2); /*0x7c3c8f*/
                v57 = a2 + 1; /*0x7c3c94*/
                v41 = v9; /*0x7c3c98*/
                do /*0x7c3cc8*/
                {
                  v42 = v40[1]; /*0x7c3c9e*/
                  v43 = *v40; /*0x7c3ca2*/
                  v44 = v40 + 2; /*0x7c3caa*/
                  *v41 = v43 | (v42 << 16); /*0x7c3cad*/
                  v45 = v44[1]; /*0x7c3cb1*/
                  v46 = *v44; /*0x7c3cb7*/
                  v40 = v44 + 2; /*0x7c3cba*/
                  v41[1] = v46 | (v45 << 16); /*0x7c3cc2*/
                  v41 = (int *)((char *)v41 + v38); /*0x7c3cc5*/
                  --v39; /*0x7c3cc7*/
                }
                while ( v39 ); /*0x7c3cc8*/
                v9 += 2; /*0x7c3cce*/
                if ( !--v61 ) /*0x7c3cd6*/
                  break; /*0x7c3cd6*/
                a2 = v57; /*0x7c3c7a*/
              }
              a2 = v57; /*0x7c3cd8*/
              v58 = (char *)v9; /*0x7c3cdc*/
            }
          }
          else if ( v13 == 28672 && v14 ) /*0x7c3bf8*/
          {
            v60 = v14; /*0x7c3bfe*/
            while ( 1 ) /*0x7c3c11*/
            {
              v33 = 4; /*0x7c3c11*/
              v34 = (_WORD *)(a1 + 32 * *a2); /*0x7c3c19*/
              v56 = a2 + 1; /*0x7c3c1e*/
              v35 = v9; /*0x7c3c22*/
              do /*0x7c3c49*/
              {
                v36 = v35; /*0x7c3c24*/
                v37 = 4; /*0x7c3c26*/
                do /*0x7c3c3d*/
                {
                  if ( (HIBYTE(*v34) & 0x80u) == 0 ) /*0x7c3c31*/
                    *(_WORD *)v36 = *v34; /*0x7c3c33*/
                  v36 = (int *)((char *)v36 + 2); /*0x7c3c36*/
                  ++v34; /*0x7c3c39*/
                  --v37; /*0x7c3c3c*/
                }
                while ( v37 ); /*0x7c3c3d*/
                --v33; /*0x7c3c45*/
                v35 = (int *)((char *)v35 + 2 * (v62 >> 1)); /*0x7c3c46*/
              }
              while ( v33 ); /*0x7c3c49*/
              v9 += 2; /*0x7c3c4f*/
              if ( !--v60 ) /*0x7c3c57*/
                break; /*0x7c3c57*/
              a2 = v56; /*0x7c3c04*/
            }
            a2 = v56; /*0x7c3c59*/
            v58 = (char *)v9; /*0x7c3c5d*/
          }
          goto LABEL_59; /*0x7c3c61*/
        }
        if ( v14 ) /*0x7c3ce4*/
        {
          v47 = 4 * (v6 >> 2); /*0x7c3ce9*/
          do /*0x7c3d10*/
          {
            v48 = 4; /*0x7c3cee*/
            v49 = *a2 | (*a2 << 16); /*0x7c3cfb*/
            ++a2; /*0x7c3cfd*/
            v50 = v9; /*0x7c3d00*/
            do /*0x7c3d0a*/
            {
              *v50 = v49; /*0x7c3d02*/
              v50[1] = v49; /*0x7c3d04*/
              v50 = (int *)((char *)v50 + v47); /*0x7c3d07*/
              --v48; /*0x7c3d09*/
            }
            while ( v48 ); /*0x7c3d0a*/
            v9 += 2; /*0x7c3d0c*/
            --v14; /*0x7c3d0f*/
          }
          while ( v14 ); /*0x7c3d10*/
LABEL_58:
          v58 = (char *)v9; /*0x7c3d12*/
        }
      }
      else
      {
        switch ( v13 ) /*0x7c3a28*/
        {
          case 12288: /*0x7c3a28*/
            v54 = 4; /*0x7c3b54*/
            v26 = (__int16 *)(a1 + 32 * *a2); /*0x7c3b5f*/
            v55 = a2 + 1; /*0x7c3b64*/
            while ( 1 ) /*0x7c3b6e*/
            {
              v27 = v9; /*0x7c3b6e*/
              v28 = 4; /*0x7c3b70*/
              do /*0x7c3b95*/
              {
                v29 = *v26; /*0x7c3b75*/
                if ( (HIBYTE(*v26) & 0x80u) == 0 ) /*0x7c3b7b*/
                {
                  v30 = v27; /*0x7c3b7f*/
                  if ( v14 ) /*0x7c3b81*/
                  {
                    v31 = v14; /*0x7c3b83*/
                    do /*0x7c3b8c*/
                    {
                      *(_WORD *)v30 = v29; /*0x7c3b85*/
                      v30 += 2; /*0x7c3b88*/
                      --v31; /*0x7c3b8b*/
                    }
                    while ( v31 ); /*0x7c3b8c*/
                  }
                }
                v27 = (int *)((char *)v27 + 2); /*0x7c3b8e*/
                ++v26; /*0x7c3b91*/
                --v28; /*0x7c3b94*/
              }
              while ( v28 ); /*0x7c3b95*/
              v32 = v54 == 1; /*0x7c3ba5*/
              v58 += v62; /*0x7c3ba6*/
              --v54; /*0x7c3baa*/
              if ( v32 ) /*0x7c3bae*/
                break; /*0x7c3bae*/
              v9 = (int *)v58; /*0x7c3b6a*/
            }
            a2 = v55; /*0x7c3bb4*/
            v58 += 8 * v14 - 4 * v62; /*0x7c3bce*/
            v9 = (int *)v58; /*0x7c3bd2*/
            break; /*0x7c3bd4*/
          case 0: /*0x7c3a28*/
            v23 = 2 * v14; /*0x7c3ae7*/
            v24 = *a2++; /*0x7c3aea*/
            v25 = v24 | (v24 << 16); /*0x7c3af5*/
            if ( 2 * v14 ) /*0x7c3ae7*/
              memset32(v9, v25, v23); /*0x7c3aff*/
            if ( v23 ) /*0x7c3b0a*/
            {
              memset32((char *)v9 + v62, v25, v23); /*0x7c3b0e*/
              memset32(&v9[v62 / 2], v25, v23); /*0x7c3b1e*/
              memset32((char *)&v9[v62 / 2] + v62, v25, v23); /*0x7c3b3a*/
            }
            v58 = (char *)&v9[2 * v14]; /*0x7c3b40*/
            v9 = (int *)v58; /*0x7c3b44*/
            break; /*0x7c3b46*/
          case 4096: /*0x7c3a28*/
            v58 = (char *)&v9[2 * v14]; /*0x7c3ada*/
            v9 = (int *)v58; /*0x7c3ade*/
            break;
          case 8192: /*0x7c3a28*/
            v59 = 4; /*0x7c3a55*/
            v15 = (int *)(a1 + 32 * *a2++); /*0x7c3a60*/
            do /*0x7c3abb*/
            {
              v16 = *v15; /*0x7c3a73*/
              v17 = v15 + 1; /*0x7c3a75*/
              v18 = v9; /*0x7c3a7a*/
              if ( v14 ) /*0x7c3a7c*/
              {
                v19 = v14; /*0x7c3a7e*/
                do /*0x7c3a86*/
                {
                  *v18 = v16; /*0x7c3a80*/
                  v18 += 2; /*0x7c3a82*/
                  --v19; /*0x7c3a85*/
                }
                while ( v19 ); /*0x7c3a86*/
              }
              v20 = *v17; /*0x7c3a96*/
              v15 = v17 + 1; /*0x7c3a98*/
              v21 = v9 + 1; /*0x7c3a9d*/
              if ( v14 ) /*0x7c3aa0*/
              {
                v22 = v14; /*0x7c3aa2*/
                do /*0x7c3aaa*/
                {
                  *v21 = v20; /*0x7c3aa4*/
                  v21 += 2; /*0x7c3aa6*/
                  --v22; /*0x7c3aa9*/
                }
                while ( v22 ); /*0x7c3aaa*/
              }
              v9 = (int *)((char *)v9 + v62); /*0x7c3ab4*/
              --v59; /*0x7c3ab7*/
            }
            while ( v59 ); /*0x7c3abb*/
            v9 = (int *)((char *)v9 + 8 * v14 - 4 * v62); /*0x7c3acf*/
            goto LABEL_58; /*0x7c3ad1*/
        }
      }
LABEL_59:
      result = (char *)v52; /*0x7c3d16*/
      v6 = v62; /*0x7c3d1a*/
      if ( v9 == v52 ) /*0x7c3d20*/
      {
        v51 += 4 * v62; /*0x7c3d33*/
        v58 = v51; /*0x7c3d37*/
        result = &v51[8 * a4]; /*0x7c3d3b*/
        v9 = (int *)v51; /*0x7c3d3e*/
        v52 = (int *)result; /*0x7c3d40*/
      }
    }
    while ( (unsigned int)v9 < v53 ); /*0x7c3a05*/
  }
  return result; /*0x7c3d4f*/
}


// ==== 0x007C3D60  sub_7C3D60  this=-  sig=ida-proto ====
unsigned int __cdecl sub_7C3D60(int a1, _WORD *a2, int *a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  unsigned int result; // eax
  int *v10; // edi
  int v11; // ecx
  _WORD *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // eax
  int v17; // esi
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // bx
  unsigned __int16 *v20; // eax
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // bx
  unsigned int v23; // [esp+Ch] [ebp-4h]
  _WORD *v24; // [esp+1Ch] [ebp+Ch]
  int *v25; // [esp+24h] [ebp+14h]
  int *v26; // [esp+28h] [ebp+18h]

  v6 = a3; /*0x7c3d6a*/
  v7 = 2 * a6; /*0x7c3d6e*/
  result = (unsigned int)&a3[2 * a6 * a5]; /*0x7c3d7a*/
  v10 = a3; /*0x7c3d81*/
  v23 = result; /*0x7c3d88*/
  v26 = a3; /*0x7c3d8c*/
  v25 = &a3[2 * a4]; /*0x7c3d90*/
  if ( (unsigned int)a3 < result ) /*0x7c3d94*/
  {
    while ( 1 ) /*0x7c3da9*/
    {
      result = *a2 & 0x1FFF; /*0x7c3da9*/
      v11 = *a2 & 0xE000; /*0x7c3dae*/
      v24 = a2 + 1; /*0x7c3db4*/
      if ( (*a2 & 0xE000) != 0 ) /*0x7c3dba*/
      {
        if ( v11 == 0x2000 ) /*0x7c3dc2*/
        {
          v12 = (_WORD *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x7c3de4*/
          v13 = 4; /*0x7c3de6*/
          do /*0x7c3e0b*/
          {
            v14 = v6; /*0x7c3deb*/
            v15 = 4; /*0x7c3ded*/
            do /*0x7c3e06*/
            {
              if ( *v12 != 0x8000 ) /*0x7c3df5*/
                *(_WORD *)v14 = *v12; /*0x7c3dfc*/
              v14 = (int *)((char *)v14 + 2); /*0x7c3dff*/
              ++v12; /*0x7c3e02*/
              --v15; /*0x7c3e05*/
            }
            while ( v15 ); /*0x7c3e06*/
            v6 = (int *)((char *)v6 + v7); /*0x7c3e08*/
            --v13; /*0x7c3e0a*/
          }
          while ( v13 ); /*0x7c3e0b*/
          v10 = v26; /*0x7c3e0d*/
          result = 4 * v7; /*0x7c3e16*/
          v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x7c3e1f*/
        }
        else if ( v11 == 0x4000 ) /*0x7c3dca*/
        {
          v6 += 2; /*0x7c3dd0*/
        }
      }
      else
      {
        v16 = (unsigned __int16 *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x7c3e2f*/
        v17 = 4; /*0x7c3e31*/
        do /*0x7c3e64*/
        {
          v18 = v16[1]; /*0x7c3e3a*/
          v19 = *v16; /*0x7c3e3e*/
          v20 = v16 + 2; /*0x7c3e46*/
          *v6 = v19 | (v18 << 16); /*0x7c3e49*/
          v21 = v20[1]; /*0x7c3e4d*/
          v22 = *v20; /*0x7c3e53*/
          v16 = v20 + 2; /*0x7c3e56*/
          v6[1] = v22 | (v21 << 16); /*0x7c3e5e*/
          v6 = (int *)((char *)v6 + v7); /*0x7c3e61*/
          --v17; /*0x7c3e63*/
        }
        while ( v17 ); /*0x7c3e64*/
        result = 4 * v7; /*0x7c3e6b*/
        v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x7c3e74*/
      }
      if ( v6 == v25 ) /*0x7c3e7a*/
      {
        v10 += v7; /*0x7c3e83*/
        result = a4; /*0x7c3e85*/
        v26 = v10; /*0x7c3e89*/
        v6 = v10; /*0x7c3e8d*/
        v25 = &v10[2 * a4]; /*0x7c3e92*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x7c3e9a*/
        break; /*0x7c3e9a*/
      a2 = v24; /*0x7c3d9d*/
    }
  }
  return result; /*0x7c3ea1*/
}


// ==== 0x007C3EB0  IsoTile::Decode8Bit  this=IsoTile  sig=ida-proto ====
unsigned int __cdecl IsoTile_Decode8Bit(int a1, unsigned __int8 *a2, int *a3, unsigned int a4, int a5, int a6)
{
  int v6; // ebp
  int *v7; // ebx
  unsigned int result; // eax
  __int16 v10; // ax
  __int16 v11; // cx
  unsigned int v12; // ecx
  int *v13; // edi
  unsigned __int16 *v14; // ecx
  int v15; // eax
  int v16; // esi
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // bp
  unsigned __int16 *v19; // ecx
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // bp
  unsigned __int8 *v22; // ecx
  int *v23; // edx
  unsigned __int16 *v24; // eax
  int v25; // edi
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // bp
  unsigned __int16 *v28; // eax
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // bp
  int v31; // edx
  unsigned __int16 *v32; // eax
  int v33; // edx
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // di
  unsigned __int16 *v36; // eax
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // di
  int v39; // ebp
  __int16 *v40; // eax
  int *v41; // edi
  __int16 v42; // dx
  int *v43; // ecx
  int v44; // esi
  int v45; // edx
  int *v46; // ecx
  int v47; // eax
  int *v48; // ecx
  int *v49; // esi
  int v50; // edi
  int v51; // eax
  _DWORD *v52; // esi
  int v53; // edi
  _WORD *v54; // eax
  int v55; // edi
  int *v56; // edx
  int v57; // esi
  int *v58; // [esp+Ch] [ebp-Ch]
  int *v59; // [esp+10h] [ebp-8h]
  unsigned int v60; // [esp+14h] [ebp-4h]
  int v61; // [esp+20h] [ebp+8h]
  int v62; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v63; // [esp+24h] [ebp+Ch]
  int v64; // [esp+24h] [ebp+Ch]
  int v65; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v66; // [esp+2Ch] [ebp+14h]
  int v67; // [esp+2Ch] [ebp+14h]
  unsigned int v68; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7c3ebd*/
  v7 = a3; /*0x7c3ec0*/
  result = (unsigned int)&a3[2 * a6 * a5]; /*0x7c3ed0*/
  v68 = 2 * a6; /*0x7c3ed8*/
  v60 = result; /*0x7c3edc*/
  v58 = a3; /*0x7c3ee0*/
  v59 = &a3[2 * a4]; /*0x7c3ee4*/
  if ( (unsigned int)a3 < result ) /*0x7c3ee8*/
  {
    do /*0x7c3eef*/
    {
      v10 = *(_WORD *)a2; /*0x7c3eef*/
      a2 += 2; /*0x7c3ef2*/
      v11 = v10; /*0x7c3ef5*/
      result = v10 & 0x1FFF; /*0x7c3ef7*/
      v12 = v11 & 0xE000; /*0x7c3efc*/
      v66 = a2; /*0x7c3f02*/
      if ( v12 > 0x6000 ) /*0x7c3f0c*/
      {
        switch ( v12 ) /*0x7c40a8*/
        {
          case 0x8000u: /*0x7c40a8*/
            v54 = (_WORD *)(a1 + 32 * (unsigned __int16)result); /*0x7c41e0*/
            v55 = 4; /*0x7c41e2*/
            do /*0x7c4207*/
            {
              v56 = v7; /*0x7c41e7*/
              v57 = 4; /*0x7c41e9*/
              do /*0x7c4202*/
              {
                if ( *v54 != 0x8000 ) /*0x7c41f1*/
                  *(_WORD *)v56 = *v54; /*0x7c41f8*/
                v56 = (int *)((char *)v56 + 2); /*0x7c41fb*/
                ++v54; /*0x7c41fe*/
                --v57; /*0x7c4201*/
              }
              while ( v57 ); /*0x7c4202*/
              v7 = (int *)((char *)v7 + v6); /*0x7c4204*/
              --v55; /*0x7c4206*/
            }
            while ( v55 ); /*0x7c4207*/
            result = 4 * v6; /*0x7c420e*/
            v7 = (int *)((char *)v7 + 8 - 4 * v6); /*0x7c4217*/
            goto LABEL_52; /*0x7c4217*/
          case 0xA000u: /*0x7c40a8*/
            goto LABEL_16; /*0x7c40b4*/
          case 0xC000u: /*0x7c40a8*/
            v39 = *a2; /*0x7c40d0*/
            v66 = a2 + 1; /*0x7c40d9*/
            v40 = (__int16 *)(a1 + 32 * (unsigned __int16)result); /*0x7c40dd*/
            v61 = 4; /*0x7c40df*/
            do /*0x7c412c*/
            {
              v41 = v7; /*0x7c40e7*/
              v64 = 4; /*0x7c40e9*/
              do /*0x7c411b*/
              {
                v42 = *v40; /*0x7c40f1*/
                if ( *v40 != (__int16)0x8000 ) /*0x7c40f4*/
                {
                  v43 = v41; /*0x7c40fd*/
                  if ( v39 ) /*0x7c40ff*/
                  {
                    v44 = v39; /*0x7c4101*/
                    do /*0x7c410a*/
                    {
                      *(_WORD *)v43 = v42; /*0x7c4103*/
                      v43 += 2; /*0x7c4106*/
                      --v44; /*0x7c4109*/
                    }
                    while ( v44 ); /*0x7c410a*/
                  }
                }
                v41 = (int *)((char *)v41 + 2); /*0x7c4110*/
                ++v40; /*0x7c4113*/
                --v64; /*0x7c4117*/
              }
              while ( v64 ); /*0x7c411b*/
              v7 = (int *)((char *)v7 + v68); /*0x7c4125*/
              --v61; /*0x7c4128*/
            }
            while ( v61 ); /*0x7c412c*/
            v45 = 8 * v39; /*0x7c4132*/
            v6 = v68; /*0x7c4139*/
            result = 4 * v68; /*0x7c413d*/
            v7 = (int *)((char *)v7 + v45 - 4 * v68); /*0x7c4142*/
            goto LABEL_52; /*0x7c4144*/
        }
      }
      else if ( v12 == 24576 ) /*0x7c3f12*/
      {
        v32 = (unsigned __int16 *)(a1 + 32 * (unsigned __int16)result); /*0x7c4056*/
        v33 = 4; /*0x7c4058*/
        do /*0x7c408b*/
        {
          v34 = v32[1]; /*0x7c4061*/
          v35 = *v32; /*0x7c4065*/
          v36 = v32 + 2; /*0x7c406d*/
          *v7 = v35 | (v34 << 16); /*0x7c4070*/
          v37 = v36[1]; /*0x7c4074*/
          v38 = *v36; /*0x7c407a*/
          v32 = v36 + 2; /*0x7c407d*/
          v7[1] = v38 | (v37 << 16); /*0x7c4085*/
          v7 = (int *)((char *)v7 + v6); /*0x7c4088*/
          --v33; /*0x7c408a*/
        }
        while ( v33 ); /*0x7c408b*/
        result = 4 * v6; /*0x7c4092*/
        v7 = (int *)((char *)v7 + 8 - 4 * v6); /*0x7c409b*/
      }
      else if ( v12 ) /*0x7c3f1a*/
      {
        if ( v12 == 0x2000 ) /*0x7c3f26*/
        {
          v31 = (((unsigned __int16)result >> 7) & 0x3E) + 2; /*0x7c401f*/
          if ( (((unsigned __int16)result >> 7) & 0x3E) == 0xFFFFFFFE ) /*0x7c4024*/
          {
LABEL_16:
            result = (unsigned __int16)result; /*0x7c402a*/
            v31 = *a2; /*0x7c4031*/
            v66 = a2 + 1; /*0x7c4034*/
          }
          else
          {
            result = (unsigned __int8)result; /*0x7c414f*/
          }
          v65 = 4; /*0x7c4155*/
          v46 = (int *)(a1 + 32 * result); /*0x7c4162*/
          do /*0x7c41be*/
          {
            v47 = *v46; /*0x7c4172*/
            v48 = v46 + 1; /*0x7c4174*/
            v49 = v7; /*0x7c4179*/
            if ( v31 ) /*0x7c417b*/
            {
              v50 = v31; /*0x7c417d*/
              do /*0x7c4185*/
              {
                *v49 = v47; /*0x7c417f*/
                v49 += 2; /*0x7c4181*/
                --v50; /*0x7c4184*/
              }
              while ( v50 ); /*0x7c4185*/
              v6 = v68; /*0x7c4187*/
            }
            v51 = *v48; /*0x7c4199*/
            v46 = v48 + 1; /*0x7c419b*/
            v52 = v7 + 1; /*0x7c41a0*/
            if ( v31 ) /*0x7c41a3*/
            {
              v53 = v31; /*0x7c41a5*/
              do /*0x7c41ad*/
              {
                *v52 = v51; /*0x7c41a7*/
                v52 += 2; /*0x7c41a9*/
                --v53; /*0x7c41ac*/
              }
              while ( v53 ); /*0x7c41ad*/
              v6 = v68; /*0x7c41af*/
            }
            v7 = (int *)((char *)v7 + v6); /*0x7c41b7*/
            --v65; /*0x7c41ba*/
          }
          while ( v65 ); /*0x7c41be*/
          result = 4 * v6; /*0x7c41c7*/
          v7 = (int *)((char *)v7 + 8 * v31 - 4 * v6); /*0x7c41d0*/
LABEL_52:
          a2 = v66; /*0x7c4219*/
          goto LABEL_53; /*0x7c4219*/
        }
        if ( v12 == 0x4000 ) /*0x7c3f32*/
        {
          v13 = v7; /*0x7c3f3a*/
          v14 = (unsigned __int16 *)(a1 + 32 * *(a2 - 2)); /*0x7c3f4c*/
          v62 = ((result >> 7) & 0x3E) + 2; /*0x7c3f58*/
          v15 = 4; /*0x7c3f5c*/
          v16 = 4 * (v68 >> 2); /*0x7c3f61*/
          do /*0x7c3f92*/
          {
            v17 = v14[1]; /*0x7c3f68*/
            v18 = *v14; /*0x7c3f6c*/
            v19 = v14 + 2; /*0x7c3f74*/
            *v13 = v18 | (v17 << 16); /*0x7c3f77*/
            v20 = v19[1]; /*0x7c3f7b*/
            v21 = *v19; /*0x7c3f81*/
            v14 = v19 + 2; /*0x7c3f84*/
            v13[1] = v21 | (v20 << 16); /*0x7c3f8c*/
            v13 = (int *)((char *)v13 + v16); /*0x7c3f8f*/
            --v15; /*0x7c3f91*/
          }
          while ( v15 ); /*0x7c3f92*/
          result = v62; /*0x7c3f94*/
          v22 = v66; /*0x7c3f98*/
          v7 += 2; /*0x7c3f9c*/
          if ( v62 ) /*0x7c3fa1*/
          {
            v67 = v62; /*0x7c3fa3*/
            do /*0x7c4000*/
            {
              v23 = v7; /*0x7c3fa9*/
              v63 = v22 + 1; /*0x7c3fae*/
              v24 = (unsigned __int16 *)(a1 + 32 * *v22); /*0x7c3fb9*/
              v25 = 4; /*0x7c3fbb*/
              do /*0x7c3fee*/
              {
                v26 = v24[1]; /*0x7c3fc4*/
                v27 = *v24; /*0x7c3fc8*/
                v28 = v24 + 2; /*0x7c3fd0*/
                *v23 = v27 | (v26 << 16); /*0x7c3fd3*/
                v29 = v28[1]; /*0x7c3fd7*/
                v30 = *v28; /*0x7c3fdd*/
                v24 = v28 + 2; /*0x7c3fe0*/
                v23[1] = v30 | (v29 << 16); /*0x7c3fe8*/
                v23 = (int *)((char *)v23 + v16); /*0x7c3feb*/
                --v25; /*0x7c3fed*/
              }
              while ( v25 ); /*0x7c3fee*/
              v22 = v63; /*0x7c3ff4*/
              v7 += 2; /*0x7c3ff8*/
              result = --v67; /*0x7c3ffb*/
            }
            while ( v67 ); /*0x7c4000*/
          }
          v6 = v68; /*0x7c4002*/
          v66 = v22; /*0x7c4006*/
          goto LABEL_52; /*0x7c400a*/
        }
      }
      else
      {
        result = (unsigned __int8)result; /*0x7c403d*/
        v7 += 2 * (unsigned __int8)result; /*0x7c4042*/
      }
LABEL_53:
      if ( v7 == v59 ) /*0x7c4221*/
      {
        v7 = &v58[v6]; /*0x7c422e*/
        result = a4; /*0x7c4230*/
        v58 = v7; /*0x7c4234*/
        v59 = &v7[2 * a4]; /*0x7c423b*/
      }
    }
    while ( (unsigned int)v7 < v60 ); /*0x7c3eef*/
  }
  return result; /*0x7c424a*/
}


// ==== 0x007C4260  sub_7C4260  this=-  sig=ida-proto ====
unsigned int __cdecl sub_7C4260(int a1, _WORD *a2, int *a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  unsigned int result; // eax
  int *v10; // edi
  int v11; // ecx
  _WORD *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // eax
  int v17; // esi
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // bx
  unsigned __int16 *v20; // eax
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // bx
  unsigned int v23; // [esp+Ch] [ebp-4h]
  _WORD *v24; // [esp+1Ch] [ebp+Ch]
  int *v25; // [esp+24h] [ebp+14h]
  int *v26; // [esp+28h] [ebp+18h]

  v6 = a3; /*0x7c426a*/
  v7 = 2 * a6; /*0x7c426e*/
  result = (unsigned int)a3 + 2 * 2 * a6 * a5; /*0x7c427a*/
  v10 = a3; /*0x7c4281*/
  v23 = result; /*0x7c4288*/
  v26 = a3; /*0x7c428c*/
  v25 = &a3[2 * a4]; /*0x7c4290*/
  if ( (unsigned int)a3 < result ) /*0x7c4294*/
  {
    while ( 1 ) /*0x7c42a9*/
    {
      result = *a2 & 0x1FFF; /*0x7c42a9*/
      v11 = *a2 & 0xE000; /*0x7c42ae*/
      v24 = a2 + 1; /*0x7c42b4*/
      if ( (*a2 & 0xE000) != 0 ) /*0x7c42ba*/
      {
        if ( v11 == 0x2000 ) /*0x7c42c2*/
        {
          v12 = (_WORD *)(a1 + 16 * (*a2 & 0x1FFF)); /*0x7c42e4*/
          v13 = 2; /*0x7c42e6*/
          do /*0x7c430b*/
          {
            v14 = v6; /*0x7c42eb*/
            v15 = 4; /*0x7c42ed*/
            do /*0x7c4306*/
            {
              if ( *v12 != 0x8000 ) /*0x7c42f5*/
                *(_WORD *)v14 = *v12; /*0x7c42fc*/
              v14 = (int *)((char *)v14 + 2); /*0x7c42ff*/
              ++v12; /*0x7c4302*/
              --v15; /*0x7c4305*/
            }
            while ( v15 ); /*0x7c4306*/
            v6 = (int *)((char *)v6 + v7); /*0x7c4308*/
            --v13; /*0x7c430a*/
          }
          while ( v13 ); /*0x7c430b*/
          v10 = v26; /*0x7c430d*/
          result = 2 * v7; /*0x7c4316*/
          v6 = (int *)((char *)v6 + 8 - 2 * v7); /*0x7c431c*/
        }
        else if ( v11 == 0x4000 ) /*0x7c42ca*/
        {
          v6 += 2; /*0x7c42d0*/
        }
      }
      else
      {
        v16 = (unsigned __int16 *)(a1 + 16 * (*a2 & 0x1FFF)); /*0x7c432c*/
        v17 = 2; /*0x7c432e*/
        do /*0x7c4361*/
        {
          v18 = v16[1]; /*0x7c4337*/
          v19 = *v16; /*0x7c433b*/
          v20 = v16 + 2; /*0x7c4343*/
          *v6 = v19 | (v18 << 16); /*0x7c4346*/
          v21 = v20[1]; /*0x7c434a*/
          v22 = *v20; /*0x7c4350*/
          v16 = v20 + 2; /*0x7c4353*/
          v6[1] = v22 | (v21 << 16); /*0x7c435b*/
          v6 = (int *)((char *)v6 + v7); /*0x7c435e*/
          --v17; /*0x7c4360*/
        }
        while ( v17 ); /*0x7c4361*/
        result = 2 * v7; /*0x7c4368*/
        v6 = (int *)((char *)v6 + 8 - 2 * v7); /*0x7c436e*/
      }
      if ( v6 == v25 ) /*0x7c4374*/
      {
        v10 = (int *)((char *)v10 + 2 * v7); /*0x7c437a*/
        result = a4; /*0x7c437c*/
        v26 = v10; /*0x7c4380*/
        v6 = v10; /*0x7c4384*/
        v25 = &v10[2 * a4]; /*0x7c4389*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x7c4391*/
        break; /*0x7c4391*/
      a2 = v24; /*0x7c429d*/
    }
  }
  return result; /*0x7c4398*/
}


// ==== 0x007C43A0  DecodeSHPFrame16bpp  this=-  sig=ida-proto ====
unsigned int __cdecl DecodeSHPFrame16bpp(int a1, unsigned __int8 *a2, int *a3, unsigned int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ecx
  int *v8; // ebx
  unsigned int result; // eax
  __int16 v11; // ax
  __int16 v12; // cx
  unsigned int v13; // ecx
  int *v14; // edi
  unsigned __int16 *v15; // ecx
  int v16; // eax
  int v17; // esi
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // bp
  unsigned __int16 *v20; // ecx
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // bp
  unsigned __int8 *v23; // ecx
  int *v24; // edx
  unsigned __int16 *v25; // eax
  int v26; // edi
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // bp
  unsigned __int16 *v29; // eax
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // bp
  int v32; // edx
  unsigned __int16 *v33; // eax
  int v34; // edx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // bp
  unsigned __int16 *v37; // eax
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // bp
  int v40; // ebp
  __int16 *v41; // eax
  int *v42; // edi
  __int16 v43; // dx
  int *v44; // ecx
  int v45; // esi
  int v46; // ebp
  int *v47; // ecx
  int v48; // eax
  int *v49; // ecx
  int *v50; // esi
  int v51; // edi
  int v52; // eax
  _DWORD *v53; // esi
  int v54; // edi
  _WORD *v55; // eax
  int v56; // ebp
  int *v57; // edx
  int v58; // esi
  int *v59; // [esp+Ch] [ebp-Ch]
  int *v60; // [esp+10h] [ebp-8h]
  unsigned int v61; // [esp+14h] [ebp-4h]
  int v62; // [esp+20h] [ebp+8h]
  int v63; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v64; // [esp+24h] [ebp+Ch]
  int v65; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v66; // [esp+2Ch] [ebp+14h]
  int v67; // [esp+2Ch] [ebp+14h]
  unsigned int v68; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7c43ae*/
  v7 = 2 * a6 * a5; /*0x7c43b1*/
  v8 = a3; /*0x7c43b4*/
  v68 = 2 * a6; /*0x7c43c0*/
  result = (unsigned int)a3 + 2 * v7; /*0x7c43c4*/
  v61 = result; /*0x7c43cc*/
  v59 = a3; /*0x7c43d0*/
  v60 = &a3[2 * a4]; /*0x7c43d4*/
  if ( (unsigned int)a3 < result ) /*0x7c43d8*/
  {
    do /*0x7c43df*/
    {
      v11 = *(_WORD *)a2; /*0x7c43df*/
      a2 += 2; /*0x7c43e2*/
      v12 = v11; /*0x7c43e5*/
      result = v11 & 0x1FFF; /*0x7c43e7*/
      v13 = v12 & 0xE000; /*0x7c43ec*/
      v66 = a2; /*0x7c43f2*/
      if ( v13 > 0x6000 ) /*0x7c43fc*/
      {
        switch ( v13 ) /*0x7c4594*/
        {
          case 0x8000u: /*0x7c4594*/
            v55 = (_WORD *)(a1 + 16 * (unsigned __int16)result); /*0x7c46bc*/
            v56 = 2; /*0x7c46be*/
            do /*0x7c46e3*/
            {
              v57 = v8; /*0x7c46c3*/
              v58 = 4; /*0x7c46c5*/
              do /*0x7c46de*/
              {
                if ( *v55 != 0x8000 ) /*0x7c46cd*/
                  *(_WORD *)v57 = *v55; /*0x7c46d4*/
                v57 = (int *)((char *)v57 + 2); /*0x7c46d7*/
                ++v55; /*0x7c46da*/
                --v58; /*0x7c46dd*/
              }
              while ( v58 ); /*0x7c46de*/
              v8 = (int *)((char *)v8 + v6); /*0x7c46e0*/
              --v56; /*0x7c46e2*/
            }
            while ( v56 ); /*0x7c46e3*/
            result = 2 * v6; /*0x7c46ea*/
            v8 = (int *)((char *)v8 + 8 - 2 * v6); /*0x7c46ef*/
            goto LABEL_52; /*0x7c46ef*/
          case 0xA000u: /*0x7c4594*/
            goto LABEL_16; /*0x7c45a0*/
          case 0xC000u: /*0x7c4594*/
            v40 = *a2; /*0x7c45bc*/
            v66 = a2 + 1; /*0x7c45c5*/
            v41 = (__int16 *)(a1 + 16 * (unsigned __int16)result); /*0x7c45c9*/
            v62 = 2; /*0x7c45cb*/
            do /*0x7c4618*/
            {
              v42 = v8; /*0x7c45d3*/
              v65 = 4; /*0x7c45d5*/
              do /*0x7c4607*/
              {
                v43 = *v41; /*0x7c45dd*/
                if ( *v41 != (__int16)0x8000 ) /*0x7c45e0*/
                {
                  v44 = v42; /*0x7c45e9*/
                  if ( v40 ) /*0x7c45eb*/
                  {
                    v45 = v40; /*0x7c45ed*/
                    do /*0x7c45f6*/
                    {
                      *(_WORD *)v44 = v43; /*0x7c45ef*/
                      v44 += 2; /*0x7c45f2*/
                      --v45; /*0x7c45f5*/
                    }
                    while ( v45 ); /*0x7c45f6*/
                  }
                }
                v42 = (int *)((char *)v42 + 2); /*0x7c45fc*/
                ++v41; /*0x7c45ff*/
                --v65; /*0x7c4603*/
              }
              while ( v65 ); /*0x7c4607*/
              v8 = (int *)((char *)v8 + v68); /*0x7c4611*/
              --v62; /*0x7c4614*/
            }
            while ( v62 ); /*0x7c4618*/
            v6 = v68; /*0x7c461e*/
            result = 2 * v68; /*0x7c4629*/
            v8 = (int *)((char *)v8 + 8 * v40 - 2 * v68); /*0x7c462d*/
            goto LABEL_52; /*0x7c462f*/
        }
      }
      else if ( v13 == 24576 ) /*0x7c4402*/
      {
        v33 = (unsigned __int16 *)(a1 + 16 * (unsigned __int16)result); /*0x7c4546*/
        v34 = 2; /*0x7c4548*/
        do /*0x7c457b*/
        {
          v35 = v33[1]; /*0x7c4551*/
          v36 = *v33; /*0x7c4555*/
          v37 = v33 + 2; /*0x7c455d*/
          *v8 = v36 | (v35 << 16); /*0x7c4560*/
          v38 = v37[1]; /*0x7c4564*/
          v39 = *v37; /*0x7c456a*/
          v33 = v37 + 2; /*0x7c456d*/
          v8[1] = v39 | (v38 << 16); /*0x7c4575*/
          v8 = (int *)((char *)v8 + v6); /*0x7c4578*/
          --v34; /*0x7c457a*/
        }
        while ( v34 ); /*0x7c457b*/
        result = 2 * v6; /*0x7c4582*/
        v8 = (int *)((char *)v8 + 8 - 2 * v6); /*0x7c4587*/
      }
      else if ( v13 ) /*0x7c440a*/
      {
        if ( v13 == 0x2000 ) /*0x7c4416*/
        {
          v32 = (((unsigned __int16)result >> 7) & 0x3E) + 2; /*0x7c450f*/
          if ( (((unsigned __int16)result >> 7) & 0x3E) == 0xFFFFFFFE ) /*0x7c4514*/
          {
LABEL_16:
            result = (unsigned __int16)result; /*0x7c451a*/
            v32 = *a2; /*0x7c4521*/
            v66 = a2 + 1; /*0x7c4524*/
          }
          else
          {
            result = (unsigned __int8)result; /*0x7c463a*/
          }
          v46 = 2; /*0x7c4640*/
          v47 = (int *)(a1 + 16 * result); /*0x7c464a*/
          do /*0x7c469e*/
          {
            v48 = *v47; /*0x7c465a*/
            v49 = v47 + 1; /*0x7c465c*/
            v50 = v8; /*0x7c4661*/
            if ( v32 ) /*0x7c4663*/
            {
              v51 = v32; /*0x7c4665*/
              do /*0x7c466d*/
              {
                *v50 = v48; /*0x7c4667*/
                v50 += 2; /*0x7c4669*/
                --v51; /*0x7c466c*/
              }
              while ( v51 ); /*0x7c466d*/
              v6 = v68; /*0x7c466f*/
            }
            v52 = *v49; /*0x7c4681*/
            v47 = v49 + 1; /*0x7c4683*/
            v53 = v8 + 1; /*0x7c4688*/
            if ( v32 ) /*0x7c468b*/
            {
              v54 = v32; /*0x7c468d*/
              do /*0x7c4695*/
              {
                *v53 = v52; /*0x7c468f*/
                v53 += 2; /*0x7c4691*/
                --v54; /*0x7c4694*/
              }
              while ( v54 ); /*0x7c4695*/
              v6 = v68; /*0x7c4697*/
            }
            v8 = (int *)((char *)v8 + v6); /*0x7c469b*/
            --v46; /*0x7c469d*/
          }
          while ( v46 ); /*0x7c469e*/
          result = 2 * v6; /*0x7c46a7*/
          v8 = (int *)((char *)v8 + 8 * v32 - 2 * v6); /*0x7c46ac*/
LABEL_52:
          a2 = v66; /*0x7c46f1*/
          goto LABEL_53; /*0x7c46f1*/
        }
        if ( v13 == 0x4000 ) /*0x7c4422*/
        {
          v14 = v8; /*0x7c442a*/
          v15 = (unsigned __int16 *)(a1 + 16 * *(a2 - 2)); /*0x7c443c*/
          v63 = ((result >> 7) & 0x3E) + 2; /*0x7c4448*/
          v16 = 2; /*0x7c444c*/
          v17 = 4 * (v68 >> 2); /*0x7c4451*/
          do /*0x7c4482*/
          {
            v18 = v15[1]; /*0x7c4458*/
            v19 = *v15; /*0x7c445c*/
            v20 = v15 + 2; /*0x7c4464*/
            *v14 = v19 | (v18 << 16); /*0x7c4467*/
            v21 = v20[1]; /*0x7c446b*/
            v22 = *v20; /*0x7c4471*/
            v15 = v20 + 2; /*0x7c4474*/
            v14[1] = v22 | (v21 << 16); /*0x7c447c*/
            v14 = (int *)((char *)v14 + v17); /*0x7c447f*/
            --v16; /*0x7c4481*/
          }
          while ( v16 ); /*0x7c4482*/
          result = v63; /*0x7c4484*/
          v23 = v66; /*0x7c4488*/
          v8 += 2; /*0x7c448c*/
          if ( v63 ) /*0x7c4491*/
          {
            v67 = v63; /*0x7c4493*/
            do /*0x7c44f0*/
            {
              v24 = v8; /*0x7c4499*/
              v64 = v23 + 1; /*0x7c449e*/
              v25 = (unsigned __int16 *)(a1 + 16 * *v23); /*0x7c44a9*/
              v26 = 2; /*0x7c44ab*/
              do /*0x7c44de*/
              {
                v27 = v25[1]; /*0x7c44b4*/
                v28 = *v25; /*0x7c44b8*/
                v29 = v25 + 2; /*0x7c44c0*/
                *v24 = v28 | (v27 << 16); /*0x7c44c3*/
                v30 = v29[1]; /*0x7c44c7*/
                v31 = *v29; /*0x7c44cd*/
                v25 = v29 + 2; /*0x7c44d0*/
                v24[1] = v31 | (v30 << 16); /*0x7c44d8*/
                v24 = (int *)((char *)v24 + v17); /*0x7c44db*/
                --v26; /*0x7c44dd*/
              }
              while ( v26 ); /*0x7c44de*/
              v23 = v64; /*0x7c44e4*/
              v8 += 2; /*0x7c44e8*/
              result = --v67; /*0x7c44eb*/
            }
            while ( v67 ); /*0x7c44f0*/
          }
          v6 = v68; /*0x7c44f2*/
          v66 = v23; /*0x7c44f6*/
          goto LABEL_52; /*0x7c44fa*/
        }
      }
      else
      {
        result = (unsigned __int8)result; /*0x7c452d*/
        v8 += 2 * (unsigned __int8)result; /*0x7c4532*/
      }
LABEL_53:
      if ( v8 == v60 ) /*0x7c46f9*/
      {
        v8 = (int *)((char *)v59 + 2 * v6); /*0x7c4702*/
        result = a4; /*0x7c4704*/
        v59 = v8; /*0x7c4708*/
        v60 = &v8[2 * a4]; /*0x7c470f*/
      }
    }
    while ( (unsigned int)v8 < v61 ); /*0x7c43df*/
  }
  return result; /*0x7c471e*/
}


// ==== 0x007C4730  DrawTile4x4Block  this=-  sig=ida-proto ====
int __cdecl TileRenderer_DrawBlock(int a1, unsigned __int16 *a2, _BYTE *a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ebx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // dx
  int v18; // edi
  int v19; // eax
  _BYTE *v20; // ecx
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  char v25; // bp
  int v26; // eax
  unsigned int v27; // ecx
  _BYTE *v28; // eax
  int v29; // ebp
  int v30; // ecx
  __int16 *v31; // ebp
  unsigned int v32; // ecx
  __int16 v33; // dx
  char v34; // cl
  int v35; // ebp
  int v36; // edi
  _BYTE *v37; // esi
  int v38; // eax
  _BYTE *v39; // esi
  int v40; // edi
  int v41; // ecx
  _BYTE *v42; // esi
  int v43; // eax
  bool v44; // zf
  int v45; // edi
  _BYTE *v46; // esi
  unsigned int v47; // eax
  _BYTE *v48; // eax
  int v49; // edi
  int v50; // edx
  _BYTE *v51; // edx
  int v52; // edi
  int v53; // eax
  int v54; // [esp+4h] [ebp-Ch]
  int v55; // [esp+4h] [ebp-Ch]
  int v56; // [esp+4h] [ebp-Ch]
  _BYTE *v57; // [esp+8h] [ebp-8h]
  unsigned int v58; // [esp+Ch] [ebp-4h]
  unsigned int v59; // [esp+1Ch] [ebp+Ch]
  int v60; // [esp+24h] [ebp+14h]
  int v61; // [esp+24h] [ebp+14h]
  int v62; // [esp+24h] [ebp+14h]
  int v63; // [esp+24h] [ebp+14h]
  unsigned int v64; // [esp+24h] [ebp+14h]

  result = a5 * a4; /*0x7c4740*/
  v59 = 0; /*0x7c4749*/
  v57 = a3; /*0x7c4753*/
  v58 = a5 * a4; /*0x7c4757*/
  if ( a5 * a4 ) /*0x7c4740*/
  {
    v8 = a6; /*0x7c4762*/
    do /*0x7c476c*/
    {
      v9 = *a2; /*0x7c476c*/
      if ( (HIBYTE(*a2) & 0x80u) == 0 ) /*0x7c4773*/
      {
        v51 = (_BYTE *)(a1 + 16 * *a2); /*0x7c4b16*/
        v52 = 4; /*0x7c4b18*/
        do /*0x7c4b30*/
        {
          v53 = 4; /*0x7c4b1d*/
          do /*0x7c4b29*/
          {
            *a3++ = *v51++; /*0x7c4b24*/
            --v53; /*0x7c4b28*/
          }
          while ( v53 ); /*0x7c4b29*/
          --v52; /*0x7c4b2b*/
          a3 = &a3[v8 - 4]; /*0x7c4b2c*/
        }
        while ( v52 ); /*0x7c4b30*/
        a3 += 4 - 4 * v8; /*0x7c4b40*/
        goto LABEL_75; /*0x7c4b40*/
      }
      v10 = *a2; /*0x7c477b*/
      v11 = v9 & 0xF000; /*0x7c4782*/
      if ( v11 > 0xC000 ) /*0x7c478e*/
      {
        if ( v11 == 57344 ) /*0x7c4a85*/
        {
          v48 = (_BYTE *)(a1 + 16 * (v9 & 0xFFF)); /*0x7c4ad0*/
          v49 = 4; /*0x7c4ad2*/
          do /*0x7c4aee*/
          {
            v50 = 4; /*0x7c4ad7*/
            do /*0x7c4ae7*/
            {
              if ( *v48 ) /*0x7c4adc*/
                *a3 = *v48; /*0x7c4ae2*/
              ++a3; /*0x7c4ae4*/
              ++v48; /*0x7c4ae5*/
              --v50; /*0x7c4ae6*/
            }
            while ( v50 ); /*0x7c4ae7*/
            --v49; /*0x7c4ae9*/
            a3 = &a3[v8 - 4]; /*0x7c4aea*/
          }
          while ( v49 ); /*0x7c4aee*/
          a3 += 4 - 4 * v8; /*0x7c4afe*/
          ++a2; /*0x7c4b03*/
          goto LABEL_76; /*0x7c4b07*/
        }
        if ( v11 == 61440 ) /*0x7c4a8d*/
        {
          if ( (_BYTE)v9 ) /*0x7c4a95*/
          {
            v45 = 4; /*0x7c4a9a*/
            do /*0x7c4ab6*/
            {
              v46 = a3 + 4; /*0x7c4aa1*/
              LOBYTE(v11) = v9; /*0x7c4aa4*/
              BYTE1(v11) = v9; /*0x7c4aa6*/
              v47 = v11 << 16; /*0x7c4aaa*/
              LOWORD(v47) = v11; /*0x7c4aad*/
              *((_DWORD *)v46 - 1) = v47; /*0x7c4ab0*/
              a3 = &v46[v8 - 4]; /*0x7c4ab3*/
              --v45; /*0x7c4ab5*/
            }
            while ( v45 ); /*0x7c4ab6*/
            a3 -= 4 * v8; /*0x7c4abc*/
          }
          a3 += 4; /*0x7c4abf*/
LABEL_75:
          ++a2; /*0x7c4b42*/
LABEL_76:
          v23 = v59 + 1; /*0x7c4b47*/
LABEL_77:
          v59 = v23; /*0x7c4b4c*/
        }
      }
      else
      {
        if ( v11 == 49152 ) /*0x7c4794*/
        {
          v31 = (__int16 *)(a2 + 1); /*0x7c49cf*/
          v32 = v9 & 0xFFF; /*0x7c49d2*/
          ++a2; /*0x7c49d4*/
          v64 = v32; /*0x7c49da*/
          if ( v32 >> 1 ) /*0x7c49d8*/
          {
            v56 = (unsigned __int16)(v9 & 0xFFF) >> 1; /*0x7c49e4*/
            do /*0x7c4a6a*/
            {
              v33 = *v31; /*0x7c49e8*/
              v34 = HIBYTE(*v31); /*0x7c49ee*/
              if ( v34 ) /*0x7c49f2*/
              {
                v35 = v8 - 4; /*0x7c49f4*/
                v36 = 4; /*0x7c49f7*/
                do /*0x7c4a13*/
                {
                  v37 = a3 + 4; /*0x7c49fe*/
                  LOBYTE(v8) = v34; /*0x7c4a01*/
                  BYTE1(v8) = v34; /*0x7c4a03*/
                  v38 = v8 << 16; /*0x7c4a07*/
                  LOWORD(v38) = v8; /*0x7c4a0a*/
                  *((_DWORD *)v37 - 1) = v38; /*0x7c4a0d*/
                  a3 = &v37[v35]; /*0x7c4a10*/
                  --v36; /*0x7c4a12*/
                }
                while ( v36 ); /*0x7c4a13*/
                v8 = a6; /*0x7c4a15*/
                a3 -= 4 * a6; /*0x7c4a1d*/
              }
              v39 = a3 + 4; /*0x7c4a20*/
              if ( (_BYTE)v33 ) /*0x7c4a25*/
              {
                v40 = v8 - 4; /*0x7c4a27*/
                v41 = 4; /*0x7c4a2a*/
                do /*0x7c4a46*/
                {
                  v42 = v39 + 4; /*0x7c4a31*/
                  LOBYTE(v8) = v33; /*0x7c4a34*/
                  BYTE1(v8) = v33; /*0x7c4a36*/
                  v43 = v8 << 16; /*0x7c4a3a*/
                  LOWORD(v43) = v8; /*0x7c4a3d*/
                  *((_DWORD *)v42 - 1) = v43; /*0x7c4a40*/
                  v39 = &v42[v40]; /*0x7c4a43*/
                  --v41; /*0x7c4a45*/
                }
                while ( v41 ); /*0x7c4a46*/
                v8 = a6; /*0x7c4a48*/
                v39 -= 4 * a6; /*0x7c4a50*/
              }
              a3 = v39 + 4; /*0x7c4a5b*/
              v31 = (__int16 *)(a2 + 1); /*0x7c4a5e*/
              v44 = v56 == 1; /*0x7c4a61*/
              ++a2; /*0x7c4a62*/
              --v56; /*0x7c4a66*/
            }
            while ( !v44 ); /*0x7c4a6a*/
            v32 = v64; /*0x7c4a70*/
          }
          v23 = v32 + v59; /*0x7c4a78*/
          goto LABEL_77; /*0x7c4a7a*/
        }
        if ( v11 != 40960 ) /*0x7c47a0*/
        {
          if ( v11 == 45056 ) /*0x7c47ac*/
          {
            v12 = HIBYTE(v9) & 0xF; /*0x7c47b5*/
            v60 = v12; /*0x7c47ba*/
            if ( (_BYTE)v9 ) /*0x7c47be*/
            {
              v13 = 4 * v12; /*0x7c47c0*/
              v54 = 4; /*0x7c47c7*/
              do /*0x7c4811*/
              {
                if ( v13 ) /*0x7c47d1*/
                {
                  v14 = v13; /*0x7c47d5*/
                  LOBYTE(v8) = v9; /*0x7c47d7*/
                  BYTE1(v8) = v9; /*0x7c47db*/
                  v15 = v8 << 16; /*0x7c47df*/
                  LOWORD(v15) = v8; /*0x7c47e2*/
                  v8 = a6; /*0x7c47e5*/
                  v16 = v13 >> 2; /*0x7c47e9*/
                  memset32(a3, v15, v16); /*0x7c47ec*/
                  memset(&a3[4 * v16], v15, v14 & 3); /*0x7c47f3*/
                  v12 = HIBYTE(v9) & 0xF; /*0x7c47f5*/
                  v13 = 4 * v60; /*0x7c47f9*/
                  a3 += 4 * v60; /*0x7c4800*/
                }
                a3 += v8 - v13; /*0x7c4806*/
                --v54; /*0x7c480d*/
              }
              while ( v54 ); /*0x7c4811*/
              a3 -= 4 * v8; /*0x7c4817*/
            }
            a3 += 4 * v12; /*0x7c481e*/
            v59 += v12; /*0x7c482a*/
            ++a2; /*0x7c482e*/
          }
          goto LABEL_78; /*0x7c4832*/
        }
        v17 = a2[1]; /*0x7c4837*/
        ++a2; /*0x7c4843*/
        v18 = v10 & 0xFFF; /*0x7c4847*/
        v61 = v18; /*0x7c484c*/
        if ( (v17 & 0x8000u) == 0 ) /*0x7c4850*/
        {
          v63 = 4; /*0x7c496e*/
          v28 = (_BYTE *)(a1 + 16 * v17); /*0x7c4976*/
          do /*0x7c49ab*/
          {
            if ( v18 ) /*0x7c497a*/
            {
              v29 = v18; /*0x7c497c*/
              do /*0x7c4990*/
              {
                v30 = 4; /*0x7c497e*/
                do /*0x7c498a*/
                {
                  *a3++ = *v28++; /*0x7c4985*/
                  --v30; /*0x7c4989*/
                }
                while ( v30 ); /*0x7c498a*/
                v28 -= 4; /*0x7c498c*/
                --v29; /*0x7c498f*/
              }
              while ( v29 ); /*0x7c4990*/
            }
            v28 += 4; /*0x7c49a1*/
            a3 += v8 - 4 * v18; /*0x7c49a4*/
            --v63; /*0x7c49a7*/
          }
          while ( v63 ); /*0x7c49ab*/
          ++a2; /*0x7c49b8*/
          a3 += 4 * (v18 - v8); /*0x7c49bc*/
          v23 = v18 + v59; /*0x7c49c3*/
          goto LABEL_77; /*0x7c49c5*/
        }
        v19 = v17 & 0xC000; /*0x7c4860*/
        if ( v19 == 0x8000 ) /*0x7c486a*/
        {
          if ( (_BYTE)v17 ) /*0x7c48e6*/
          {
            v24 = 4 * v18; /*0x7c48e8*/
            v55 = 4; /*0x7c48ef*/
            do /*0x7c4939*/
            {
              if ( v24 ) /*0x7c48f9*/
              {
                v25 = v24; /*0x7c48fd*/
                LOBYTE(v8) = v17; /*0x7c48ff*/
                BYTE1(v8) = v17; /*0x7c4903*/
                v26 = v8 << 16; /*0x7c4907*/
                LOWORD(v26) = v8; /*0x7c490a*/
                v8 = a6; /*0x7c490d*/
                v27 = v24 >> 2; /*0x7c4911*/
                memset32(a3, v26, v27); /*0x7c4914*/
                memset(&a3[4 * v27], v26, v25 & 3); /*0x7c491b*/
                v18 = v61; /*0x7c491d*/
                v24 = 4 * v61; /*0x7c4921*/
                a3 += 4 * v61; /*0x7c4928*/
              }
              a3 += v8 - v24; /*0x7c492e*/
              --v55; /*0x7c4935*/
            }
            while ( v55 ); /*0x7c4939*/
            a3 -= 4 * v8; /*0x7c493f*/
          }
          a3 += 4 * v18; /*0x7c494f*/
          v59 += v18; /*0x7c4952*/
          ++a2; /*0x7c4956*/
          goto LABEL_78; /*0x7c495a*/
        }
        if ( v19 == 49152 ) /*0x7c4871*/
        {
          v20 = (_BYTE *)(a1 + 16 * (v17 & 0xFFF)); /*0x7c4884*/
          v62 = 4; /*0x7c4886*/
          do /*0x7c48c5*/
          {
            if ( v18 ) /*0x7c4890*/
            {
              v21 = v18; /*0x7c4892*/
              do /*0x7c48aa*/
              {
                v22 = 4; /*0x7c4894*/
                do /*0x7c48a4*/
                {
                  if ( *v20 ) /*0x7c4899*/
                    *a3 = *v20; /*0x7c489f*/
                  ++a3; /*0x7c48a1*/
                  ++v20; /*0x7c48a2*/
                  --v22; /*0x7c48a3*/
                }
                while ( v22 ); /*0x7c48a4*/
                v20 -= 4; /*0x7c48a6*/
                --v21; /*0x7c48a9*/
              }
              while ( v21 ); /*0x7c48aa*/
            }
            v20 += 4; /*0x7c48b7*/
            a3 += v8 - 4 * v18; /*0x7c48ba*/
            --v62; /*0x7c48c1*/
          }
          while ( v62 ); /*0x7c48c5*/
          a3 += 4 * (v18 - v8); /*0x7c48cf*/
          v23 = v18 + v59; /*0x7c48d9*/
          ++a2; /*0x7c48db*/
          goto LABEL_77; /*0x7c48df*/
        }
      }
LABEL_78:
      result = v59 / a4; /*0x7c4b50*/
      if ( !(v59 % a4) ) /*0x7c4b58*/
      {
        a3 = &v57[4 * v8]; /*0x7c4b64*/
        v57 = a3; /*0x7c4b67*/
      }
    }
    while ( v59 < v58 ); /*0x7c476c*/
  }
  return result; /*0x7c4b78*/
}


// ==== 0x007C4B80  DrawTileBlock16BPP  this=-  sig=ida-proto ====
int __cdecl TileRenderer_DrawBlock16BPP(int a1, unsigned __int16 *a2, _BYTE *a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  unsigned __int16 *v7; // ebp
  _BYTE *v8; // esi
  int v9; // ebx
  unsigned __int16 v10; // dx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // dx
  int v18; // edi
  int v19; // ecx
  _BYTE *v20; // eax
  int v21; // ebp
  int v22; // ecx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  _BYTE *v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // ebp
  int v34; // edi
  unsigned __int16 v35; // dx
  char v36; // cl
  _BYTE *v37; // esi
  int v38; // eax
  int v39; // ecx
  _BYTE *v40; // esi
  _BYTE *v41; // esi
  int v42; // eax
  bool v43; // zf
  int v44; // edi
  _BYTE *v45; // esi
  unsigned int v46; // eax
  _BYTE *v47; // eax
  int v48; // edi
  int v49; // ecx
  _BYTE *v50; // edx
  int v51; // edi
  int v52; // eax
  int v53; // [esp+8h] [ebp-Ch]
  int v54; // [esp+8h] [ebp-Ch]
  unsigned int v55; // [esp+8h] [ebp-Ch]
  _BYTE *v56; // [esp+Ch] [ebp-8h]
  unsigned int v57; // [esp+10h] [ebp-4h]
  unsigned int v58; // [esp+20h] [ebp+Ch]
  int v59; // [esp+28h] [ebp+14h]
  int v60; // [esp+28h] [ebp+14h]
  int v61; // [esp+28h] [ebp+14h]
  unsigned int v62; // [esp+28h] [ebp+14h]

  result = a5 * a4; /*0x7c4b88*/
  v7 = a2; /*0x7c4b8d*/
  v8 = a3; /*0x7c4b92*/
  v56 = a3; /*0x7c4b9c*/
  v58 = 0; /*0x7c4ba0*/
  v57 = a5 * a4; /*0x7c4ba8*/
  if ( a5 * a4 ) /*0x7c4b88*/
  {
    v9 = a6; /*0x7c4bb3*/
    while ( 1 ) /*0x7c4bbe*/
    {
      v10 = *v7; /*0x7c4bbe*/
      if ( (HIBYTE(*v7) & 0x80u) == 0 ) /*0x7c4bc5*/
        break; /*0x7c4bc5*/
      v11 = v10 & 0xF000; /*0x7c4bd4*/
      if ( v11 > 0xC000 ) /*0x7c4be0*/
      {
        if ( v11 == 57344 ) /*0x7c4ea5*/
        {
          v47 = (_BYTE *)(a1 + 16 * (v10 & 0xFFF)); /*0x7c4ee2*/
          v48 = 4; /*0x7c4ee4*/
          do /*0x7c4efc*/
          {
            v49 = 4; /*0x7c4ee9*/
            do /*0x7c4ef5*/
            {
              *v8++ = *v47++; /*0x7c4ef0*/
              --v49; /*0x7c4ef4*/
            }
            while ( v49 ); /*0x7c4ef5*/
            --v48; /*0x7c4ef7*/
            v8 = &v8[v9 - 4]; /*0x7c4ef8*/
          }
          while ( v48 ); /*0x7c4efc*/
          v8 += 4 - 4 * v9; /*0x7c4f0c*/
        }
        else
        {
          if ( v11 != 61440 ) /*0x7c4ead*/
            goto LABEL_66; /*0x7c4ead*/
          v44 = 4; /*0x7c4eb6*/
          do /*0x7c4ed2*/
          {
            v45 = v8 + 4; /*0x7c4ebd*/
            LOBYTE(v11) = v10; /*0x7c4ec0*/
            BYTE1(v11) = v10; /*0x7c4ec2*/
            v46 = v11 << 16; /*0x7c4ec6*/
            LOWORD(v46) = v11; /*0x7c4ec9*/
            *((_DWORD *)v45 - 1) = v46; /*0x7c4ecc*/
            v8 = &v45[v9 - 4]; /*0x7c4ecf*/
            --v44; /*0x7c4ed1*/
          }
          while ( v44 ); /*0x7c4ed2*/
LABEL_63:
          v8 += 4 - 4 * v9; /*0x7c4f39*/
        }
        v31 = v58 + 1; /*0x7c4f54*/
        ++a2; /*0x7c4f55*/
        goto LABEL_65; /*0x7c4f55*/
      }
      switch ( v11 ) /*0x7c4be6*/
      {
        case 0xC000u: /*0x7c4be6*/
          v32 = v10 & 0xFFF; /*0x7c4df3*/
          v62 = v32; /*0x7c4dfd*/
          a2 = v7 + 1; /*0x7c4e03*/
          if ( v32 >> 1 ) /*0x7c4e01*/
          {
            v33 = v9 - 4; /*0x7c4e0d*/
            v55 = v32 >> 1; /*0x7c4e10*/
            do /*0x7c4e8c*/
            {
              v34 = 4; /*0x7c4e1a*/
              v35 = *a2; /*0x7c4e1f*/
              v36 = HIBYTE(*a2); /*0x7c4e22*/
              do /*0x7c4e3b*/
              {
                v37 = v8 + 4; /*0x7c4e26*/
                LOBYTE(v9) = v36; /*0x7c4e29*/
                BYTE1(v9) = v36; /*0x7c4e2b*/
                v38 = v9 << 16; /*0x7c4e2f*/
                LOWORD(v38) = v9; /*0x7c4e32*/
                *((_DWORD *)v37 - 1) = v38; /*0x7c4e35*/
                v8 = &v37[v33]; /*0x7c4e38*/
                --v34; /*0x7c4e3a*/
              }
              while ( v34 ); /*0x7c4e3b*/
              v39 = 4; /*0x7c4e4d*/
              v40 = &v8[4 - 4 * a6]; /*0x7c4e54*/
              do /*0x7c4e6d*/
              {
                v41 = v40 + 4; /*0x7c4e58*/
                LOBYTE(v9) = v35; /*0x7c4e5b*/
                BYTE1(v9) = v35; /*0x7c4e5d*/
                v42 = v9 << 16; /*0x7c4e61*/
                LOWORD(v42) = v9; /*0x7c4e64*/
                *((_DWORD *)v41 - 1) = v42; /*0x7c4e67*/
                v40 = &v41[v33]; /*0x7c4e6a*/
                --v39; /*0x7c4e6c*/
              }
              while ( v39 ); /*0x7c4e6d*/
              v8 = &v40[4 - 4 * a6]; /*0x7c4e7a*/
              v43 = v55 == 1; /*0x7c4e83*/
              ++a2; /*0x7c4e84*/
              --v55; /*0x7c4e88*/
            }
            while ( !v43 ); /*0x7c4e8c*/
            v32 = v62; /*0x7c4e8e*/
            v9 = a6; /*0x7c4e92*/
          }
          v58 += v32; /*0x7c4e96*/
          break;
        case 0xA000u: /*0x7c4be6*/
          v17 = v7[1]; /*0x7c4c82*/
          a2 = v7 + 1; /*0x7c4c8e*/
          v18 = *v7 & 0xFFF; /*0x7c4c92*/
          v60 = v18; /*0x7c4c97*/
          if ( (v17 & 0x8000u) == 0 ) /*0x7c4c9b*/
          {
            v27 = (_BYTE *)(a1 + 16 * v7[1]); /*0x7c4d9e*/
            v28 = 4; /*0x7c4da0*/
            do /*0x7c4dd4*/
            {
              if ( v18 ) /*0x7c4da7*/
              {
                v29 = v18; /*0x7c4da9*/
                do /*0x7c4dbd*/
                {
                  v30 = 4; /*0x7c4dab*/
                  do /*0x7c4db7*/
                  {
                    *v8++ = *v27++; /*0x7c4db2*/
                    --v30; /*0x7c4db6*/
                  }
                  while ( v30 ); /*0x7c4db7*/
                  v27 -= 4; /*0x7c4db9*/
                  --v29; /*0x7c4dbc*/
                }
                while ( v29 ); /*0x7c4dbd*/
                v9 = a6; /*0x7c4dbf*/
              }
              v27 += 4; /*0x7c4dce*/
              v8 += v9 - 4 * v18; /*0x7c4dd1*/
              --v28; /*0x7c4dd3*/
            }
            while ( v28 ); /*0x7c4dd4*/
            v8 += 4 * (v18 - v9); /*0x7c4dda*/
            goto LABEL_39; /*0x7c4dda*/
          }
          v19 = v17 & 0xC000; /*0x7c4caa*/
          if ( v19 != 0x8000 ) /*0x7c4cb6*/
          {
            if ( v19 != 49152 ) /*0x7c4cbe*/
              break; /*0x7c4cbe*/
            v20 = (_BYTE *)(a1 + 16 * (v17 & 0xFFF)); /*0x7c4cd0*/
            v61 = 4; /*0x7c4cd2*/
            do /*0x7c4d0d*/
            {
              if ( v18 ) /*0x7c4cdc*/
              {
                v21 = v18; /*0x7c4cde*/
                do /*0x7c4cf2*/
                {
                  v22 = 4; /*0x7c4ce0*/
                  do /*0x7c4cec*/
                  {
                    *v8++ = *v20++; /*0x7c4ce7*/
                    --v22; /*0x7c4ceb*/
                  }
                  while ( v22 ); /*0x7c4cec*/
                  v20 -= 4; /*0x7c4cee*/
                  --v21; /*0x7c4cf1*/
                }
                while ( v21 ); /*0x7c4cf2*/
              }
              v20 += 4; /*0x7c4d03*/
              v8 += v9 - 4 * v18; /*0x7c4d06*/
              --v61; /*0x7c4d09*/
            }
            while ( v61 ); /*0x7c4d0d*/
            v8 += 4 * (v18 - v9); /*0x7c4d13*/
LABEL_39:
            v31 = v18 + v58; /*0x7c4ddd*/
            ++a2; /*0x7c4dea*/
LABEL_65:
            v58 = v31; /*0x7c4f59*/
            break; /*0x7c4f59*/
          }
          v23 = 4 * v18; /*0x7c4d1b*/
          v54 = 4; /*0x7c4d22*/
          do /*0x7c4d6c*/
          {
            if ( v23 ) /*0x7c4d2c*/
            {
              v24 = v23; /*0x7c4d30*/
              LOBYTE(v9) = v17; /*0x7c4d32*/
              BYTE1(v9) = v17; /*0x7c4d36*/
              v25 = v9 << 16; /*0x7c4d3a*/
              LOWORD(v25) = v9; /*0x7c4d3d*/
              v9 = a6; /*0x7c4d40*/
              v26 = v23 >> 2; /*0x7c4d44*/
              memset32(v8, v25, v26); /*0x7c4d47*/
              memset(&v8[4 * v26], v25, v24 & 3); /*0x7c4d4e*/
              v18 = v60; /*0x7c4d50*/
              v23 = 4 * v60; /*0x7c4d54*/
              v8 += 4 * v60; /*0x7c4d5b*/
            }
            v8 += v9 - v23; /*0x7c4d61*/
            --v54; /*0x7c4d68*/
          }
          while ( v54 ); /*0x7c4d6c*/
          v8 += 4 * (v18 - v9); /*0x7c4d76*/
          v58 += v18; /*0x7c4d82*/
          ++a2; /*0x7c4d86*/
          break;
        case 0xB000u: /*0x7c4be6*/
          v12 = HIBYTE(v10) & 0xF; /*0x7c4c07*/
          v53 = 4; /*0x7c4c0a*/
          v59 = v12; /*0x7c4c12*/
          v13 = 4 * v12; /*0x7c4c16*/
          do /*0x7c4c5f*/
          {
            if ( v13 ) /*0x7c4c1f*/
            {
              v14 = v13; /*0x7c4c23*/
              LOBYTE(v9) = v10; /*0x7c4c25*/
              BYTE1(v9) = v10; /*0x7c4c29*/
              v15 = v9 << 16; /*0x7c4c2d*/
              LOWORD(v15) = v9; /*0x7c4c30*/
              v9 = a6; /*0x7c4c33*/
              v16 = v13 >> 2; /*0x7c4c37*/
              memset32(v8, v15, v16); /*0x7c4c3a*/
              memset(&v8[4 * v16], v15, v14 & 3); /*0x7c4c41*/
              v12 = v59; /*0x7c4c43*/
              v13 = 4 * v59; /*0x7c4c47*/
              v8 += 4 * v59; /*0x7c4c4e*/
            }
            v8 += v9 - v13; /*0x7c4c54*/
            --v53; /*0x7c4c5b*/
          }
          while ( v53 ); /*0x7c4c5f*/
          v8 += 4 * (v12 - v9); /*0x7c4c65*/
          v58 += v12; /*0x7c4c75*/
          ++a2; /*0x7c4c79*/
          break;
      }
LABEL_66:
      result = v58 / a4; /*0x7c4f5d*/
      if ( !(v58 % a4) ) /*0x7c4f65*/
      {
        v8 = &v56[4 * v9]; /*0x7c4f71*/
        v56 = v8; /*0x7c4f74*/
      }
      if ( v58 >= v57 ) /*0x7c4f7c*/
        return result; /*0x7c4f7c*/
      v7 = a2; /*0x7c4bba*/
    }
    v50 = (_BYTE *)(a1 + 16 * *v7); /*0x7c4f1d*/
    v51 = 4; /*0x7c4f1f*/
    do /*0x7c4f37*/
    {
      v52 = 4; /*0x7c4f24*/
      do /*0x7c4f30*/
      {
        *v8++ = *v50++; /*0x7c4f2b*/
        --v52; /*0x7c4f2f*/
      }
      while ( v52 ); /*0x7c4f30*/
      --v51; /*0x7c4f32*/
      v8 = &v8[v9 - 4]; /*0x7c4f33*/
    }
    while ( v51 ); /*0x7c4f37*/
    goto LABEL_63; /*0x7c4f37*/
  }
  return result; /*0x7c4f84*/
}


// ==== 0x007C4F90  DrawTileBlock8BPP  this=-  sig=ida-proto ====
int __cdecl TileRenderer_DrawBlock8BPP(int a1, unsigned __int16 *a2, _BYTE *a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ebx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // dx
  int v18; // edi
  int v19; // ecx
  _BYTE *v20; // eax
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  char *v27; // eax
  int v28; // ebp
  int v29; // ecx
  char v30; // dl
  unsigned int v31; // eax
  __int16 *v32; // ebp
  unsigned int v33; // ecx
  __int16 v34; // dx
  char v35; // cl
  int v36; // edi
  __int16 v37; // ax
  _BYTE *v38; // esi
  _BYTE *v39; // esi
  int v40; // ecx
  __int16 v41; // ax
  _BYTE *v42; // esi
  bool v43; // zf
  int v44; // edi
  __int16 v45; // ax
  _BYTE *v46; // esi
  _BYTE *v47; // eax
  int v48; // edi
  int v49; // edx
  char *v50; // edx
  int v51; // edi
  int v52; // eax
  char v53; // cl
  int v54; // [esp+4h] [ebp-Ch]
  int v55; // [esp+4h] [ebp-Ch]
  int v56; // [esp+4h] [ebp-Ch]
  _BYTE *v57; // [esp+8h] [ebp-8h]
  unsigned int v58; // [esp+Ch] [ebp-4h]
  unsigned int v59; // [esp+1Ch] [ebp+Ch]
  int v60; // [esp+24h] [ebp+14h]
  int v61; // [esp+24h] [ebp+14h]
  int v62; // [esp+24h] [ebp+14h]
  int v63; // [esp+24h] [ebp+14h]
  unsigned int v64; // [esp+24h] [ebp+14h]

  result = a5 * a4; /*0x7c4fa0*/
  v59 = 0; /*0x7c4fa9*/
  v57 = a3; /*0x7c4fb3*/
  v58 = a5 * a4; /*0x7c4fb7*/
  if ( a5 * a4 ) /*0x7c4fa0*/
  {
    v8 = a6; /*0x7c4fc2*/
    do /*0x7c4fcc*/
    {
      v9 = *a2; /*0x7c4fcc*/
      if ( (HIBYTE(*a2) & 0x80u) == 0 ) /*0x7c4fd3*/
      {
        v50 = (char *)(a1 + 16 * *a2); /*0x7c532d*/
        v51 = 2; /*0x7c532f*/
        do /*0x7c5349*/
        {
          v52 = 2; /*0x7c5334*/
          do /*0x7c5342*/
          {
            v53 = *v50; /*0x7c5339*/
            v50 += 2; /*0x7c533b*/
            *a3++ = v53; /*0x7c533e*/
            --v52; /*0x7c5341*/
          }
          while ( v52 ); /*0x7c5342*/
          --v51; /*0x7c5344*/
          a3 = &a3[v8 - 2]; /*0x7c5345*/
        }
        while ( v51 ); /*0x7c5349*/
        a3 += 2 - 2 * v8; /*0x7c5355*/
        goto LABEL_76; /*0x7c5355*/
      }
      v10 = *a2; /*0x7c4fdb*/
      v11 = v9 & 0xF000; /*0x7c4fe2*/
      if ( v11 > 0xC000 ) /*0x7c4fee*/
      {
        if ( v11 == 57344 ) /*0x7c52a7*/
        {
          v47 = (_BYTE *)(a1 + 16 * (v9 & 0xFFF)); /*0x7c52e9*/
          v48 = 2; /*0x7c52eb*/
          do /*0x7c5309*/
          {
            v49 = 2; /*0x7c52f0*/
            do /*0x7c5302*/
            {
              if ( *v47 ) /*0x7c52f5*/
                *a3 = *v47; /*0x7c52fb*/
              ++a3; /*0x7c52fd*/
              v47 += 2; /*0x7c52fe*/
              --v49; /*0x7c5301*/
            }
            while ( v49 ); /*0x7c5302*/
            --v48; /*0x7c5304*/
            a3 = &a3[v8 - 2]; /*0x7c5305*/
          }
          while ( v48 ); /*0x7c5309*/
          a3 += 2 - 2 * v8; /*0x7c5315*/
          ++a2; /*0x7c531a*/
          goto LABEL_77; /*0x7c531e*/
        }
        if ( v11 == 61440 ) /*0x7c52af*/
        {
          if ( (_BYTE)v9 ) /*0x7c52b7*/
          {
            v44 = 2; /*0x7c52bc*/
            do /*0x7c52cf*/
            {
              LOBYTE(v45) = v9; /*0x7c52c1*/
              v46 = a3 + 2; /*0x7c52c3*/
              HIBYTE(v45) = v9; /*0x7c52c6*/
              *((_WORD *)v46 - 1) = v45; /*0x7c52c8*/
              a3 = &v46[v8 - 2]; /*0x7c52cc*/
              --v44; /*0x7c52ce*/
            }
            while ( v44 ); /*0x7c52cf*/
            a3 -= 2 * v8; /*0x7c52d5*/
          }
          a3 += 2; /*0x7c52d8*/
LABEL_76:
          ++a2; /*0x7c5357*/
LABEL_77:
          v31 = v59 + 1; /*0x7c535c*/
          goto LABEL_78; /*0x7c5360*/
        }
      }
      else
      {
        if ( v11 == 49152 ) /*0x7c4ff4*/
        {
          v32 = (__int16 *)(a2 + 1); /*0x7c520b*/
          v33 = v9 & 0xFFF; /*0x7c520e*/
          ++a2; /*0x7c5210*/
          v64 = v33; /*0x7c5216*/
          if ( v33 >> 1 ) /*0x7c5214*/
          {
            v56 = (unsigned __int16)(v9 & 0xFFF) >> 1; /*0x7c521c*/
            do /*0x7c5290*/
            {
              v34 = *v32; /*0x7c5220*/
              v35 = HIBYTE(*v32); /*0x7c5226*/
              if ( v35 ) /*0x7c522a*/
              {
                v36 = 2; /*0x7c522f*/
                do /*0x7c5242*/
                {
                  LOBYTE(v37) = v35; /*0x7c5234*/
                  v38 = a3 + 2; /*0x7c5236*/
                  HIBYTE(v37) = v35; /*0x7c5239*/
                  *((_WORD *)v38 - 1) = v37; /*0x7c523b*/
                  a3 = &v38[v8 - 2]; /*0x7c523f*/
                  --v36; /*0x7c5241*/
                }
                while ( v36 ); /*0x7c5242*/
                v8 = a6; /*0x7c5244*/
                a3 -= 2 * a6; /*0x7c524c*/
              }
              v39 = a3 + 2; /*0x7c524f*/
              if ( (_BYTE)v34 ) /*0x7c5254*/
              {
                v40 = 2; /*0x7c5259*/
                do /*0x7c526c*/
                {
                  LOBYTE(v41) = v34; /*0x7c525e*/
                  v42 = v39 + 2; /*0x7c5260*/
                  HIBYTE(v41) = v34; /*0x7c5263*/
                  *((_WORD *)v42 - 1) = v41; /*0x7c5265*/
                  v39 = &v42[v8 - 2]; /*0x7c5269*/
                  --v40; /*0x7c526b*/
                }
                while ( v40 ); /*0x7c526c*/
                v8 = a6; /*0x7c526e*/
                v39 -= 2 * a6; /*0x7c5276*/
              }
              a3 = v39 + 2; /*0x7c5281*/
              v32 = (__int16 *)(a2 + 1); /*0x7c5284*/
              v43 = v56 == 1; /*0x7c5287*/
              ++a2; /*0x7c5288*/
              --v56; /*0x7c528c*/
            }
            while ( !v43 ); /*0x7c5290*/
            v33 = v64; /*0x7c5292*/
          }
          v31 = v33 + v59; /*0x7c529a*/
          goto LABEL_78; /*0x7c529c*/
        }
        if ( v11 != 40960 ) /*0x7c5000*/
        {
          if ( v11 == 45056 ) /*0x7c500c*/
          {
            v12 = HIBYTE(v9) & 0xF; /*0x7c5015*/
            v60 = v12; /*0x7c501a*/
            if ( (_BYTE)v9 ) /*0x7c501e*/
            {
              v13 = 2 * v12; /*0x7c5020*/
              v54 = 2; /*0x7c5023*/
              do /*0x7c5069*/
              {
                if ( v13 ) /*0x7c502d*/
                {
                  v14 = v13; /*0x7c5031*/
                  LOBYTE(v8) = v9; /*0x7c5033*/
                  BYTE1(v8) = v9; /*0x7c5037*/
                  v15 = v8 << 16; /*0x7c503b*/
                  LOWORD(v15) = v8; /*0x7c503e*/
                  v8 = a6; /*0x7c5041*/
                  v16 = v13 >> 2; /*0x7c5045*/
                  memset32(a3, v15, v16); /*0x7c5048*/
                  memset(&a3[4 * v16], v15, v14 & 3); /*0x7c504f*/
                  v12 = HIBYTE(v9) & 0xF; /*0x7c5051*/
                  v13 = 2 * v60; /*0x7c5055*/
                  a3 += 2 * v60; /*0x7c5058*/
                }
                a3 += v8 - v13; /*0x7c505e*/
                --v54; /*0x7c5065*/
              }
              while ( v54 ); /*0x7c5069*/
              a3 -= 2 * v8; /*0x7c506f*/
            }
            a3 += 2 * v12; /*0x7c5076*/
            v59 += v12; /*0x7c5082*/
            ++a2; /*0x7c5086*/
          }
          goto LABEL_79; /*0x7c508a*/
        }
        v17 = a2[1]; /*0x7c508f*/
        ++a2; /*0x7c509b*/
        v18 = v10 & 0xFFF; /*0x7c509f*/
        v61 = v18; /*0x7c50a4*/
        if ( (v17 & 0x8000u) == 0 ) /*0x7c50a8*/
        {
          v63 = 2; /*0x7c51ac*/
          v27 = (char *)(a1 + 16 * v17); /*0x7c51b4*/
          do /*0x7c51e7*/
          {
            if ( v18 ) /*0x7c51b8*/
            {
              v28 = v18; /*0x7c51ba*/
              do /*0x7c51d0*/
              {
                v29 = 2; /*0x7c51bc*/
                do /*0x7c51ca*/
                {
                  v30 = *v27; /*0x7c51c1*/
                  v27 += 2; /*0x7c51c3*/
                  *a3++ = v30; /*0x7c51c6*/
                  --v29; /*0x7c51c9*/
                }
                while ( v29 ); /*0x7c51ca*/
                v27 -= 4; /*0x7c51cc*/
                --v28; /*0x7c51cf*/
              }
              while ( v28 ); /*0x7c51d0*/
            }
            v27 += 4; /*0x7c51dd*/
            a3 += v8 - 2 * v18; /*0x7c51e0*/
            --v63; /*0x7c51e3*/
          }
          while ( v63 ); /*0x7c51e7*/
          a3 += 2 * (v18 - v8); /*0x7c51ed*/
LABEL_43:
          v31 = v18 + v59; /*0x7c51f0*/
          ++a2; /*0x7c51fd*/
LABEL_78:
          v59 = v31; /*0x7c5361*/
          goto LABEL_79; /*0x7c5361*/
        }
        v19 = v17 & 0xC000; /*0x7c50b7*/
        if ( v19 == 0x8000 ) /*0x7c50c3*/
        {
          if ( (_BYTE)v17 ) /*0x7c512c*/
          {
            v23 = 2 * v18; /*0x7c512e*/
            v55 = 2; /*0x7c5131*/
            do /*0x7c5177*/
            {
              if ( v23 ) /*0x7c513b*/
              {
                v24 = v23; /*0x7c513f*/
                LOBYTE(v8) = v17; /*0x7c5141*/
                BYTE1(v8) = v17; /*0x7c5145*/
                v25 = v8 << 16; /*0x7c5149*/
                LOWORD(v25) = v8; /*0x7c514c*/
                v8 = a6; /*0x7c514f*/
                v26 = v23 >> 2; /*0x7c5153*/
                memset32(a3, v25, v26); /*0x7c5156*/
                memset(&a3[4 * v26], v25, v24 & 3); /*0x7c515d*/
                v18 = v61; /*0x7c515f*/
                v23 = 2 * v61; /*0x7c5163*/
                a3 += 2 * v61; /*0x7c5166*/
              }
              a3 += v8 - v23; /*0x7c516c*/
              --v55; /*0x7c5173*/
            }
            while ( v55 ); /*0x7c5177*/
            a3 -= 2 * v8; /*0x7c517d*/
          }
          a3 += 2 * v18; /*0x7c518d*/
          v59 += v18; /*0x7c5190*/
          ++a2; /*0x7c5194*/
          goto LABEL_79; /*0x7c5198*/
        }
        if ( v19 == 49152 ) /*0x7c50cb*/
        {
          v20 = (_BYTE *)(a1 + 16 * (v17 & 0xFFF)); /*0x7c50dd*/
          v62 = 2; /*0x7c50df*/
          do /*0x7c511c*/
          {
            if ( v18 ) /*0x7c50e9*/
            {
              v21 = v18; /*0x7c50eb*/
              do /*0x7c5105*/
              {
                v22 = 2; /*0x7c50ed*/
                do /*0x7c50ff*/
                {
                  if ( *v20 ) /*0x7c50f2*/
                    *a3 = *v20; /*0x7c50f8*/
                  ++a3; /*0x7c50fa*/
                  v20 += 2; /*0x7c50fb*/
                  --v22; /*0x7c50fe*/
                }
                while ( v22 ); /*0x7c50ff*/
                v20 -= 4; /*0x7c5101*/
                --v21; /*0x7c5104*/
              }
              while ( v21 ); /*0x7c5105*/
            }
            v20 += 4; /*0x7c510e*/
            a3 += v8 - 2 * v18; /*0x7c5111*/
            --v62; /*0x7c5118*/
          }
          while ( v62 ); /*0x7c511c*/
          a3 += 2 * (v18 - v8); /*0x7c5122*/
          goto LABEL_43; /*0x7c5125*/
        }
      }
LABEL_79:
      result = v59 / a4; /*0x7c5365*/
      if ( !(v59 % a4) ) /*0x7c536d*/
      {
        a3 = &v57[2 * v8]; /*0x7c5379*/
        v57 = a3; /*0x7c537c*/
      }
    }
    while ( v59 < v58 ); /*0x7c4fcc*/
  }
  return result; /*0x7c538d*/
}


// ==== 0x007C53A0  DrawTileBlock2  this=-  sig=ida-proto ====
int __cdecl TileRenderer_DrawBlock2(int a1, unsigned __int16 *a2, _BYTE *a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ebx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // bp
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 v17; // dx
  int v18; // edi
  int v19; // ecx
  _BYTE *v20; // ecx
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  _BYTE *v27; // eax
  int v28; // ebp
  int v29; // ecx
  unsigned int v30; // eax
  __int16 *v31; // ebp
  unsigned int v32; // ecx
  __int16 v33; // dx
  char v34; // cl
  int v35; // ebp
  int v36; // edi
  _BYTE *v37; // esi
  int v38; // eax
  _BYTE *v39; // esi
  int v40; // edi
  int v41; // ecx
  _BYTE *v42; // esi
  int v43; // eax
  bool v44; // zf
  int v45; // edi
  _BYTE *v46; // esi
  unsigned int v47; // eax
  int v48; // edi
  _BYTE *v49; // eax
  int v50; // edx
  int v51; // edi
  _BYTE *v52; // edx
  int v53; // eax
  int v54; // [esp+4h] [ebp-Ch]
  int v55; // [esp+4h] [ebp-Ch]
  int v56; // [esp+4h] [ebp-Ch]
  _BYTE *v57; // [esp+8h] [ebp-8h]
  unsigned int v58; // [esp+Ch] [ebp-4h]
  unsigned int v59; // [esp+1Ch] [ebp+Ch]
  int v60; // [esp+24h] [ebp+14h]
  int v61; // [esp+24h] [ebp+14h]
  int v62; // [esp+24h] [ebp+14h]
  int v63; // [esp+24h] [ebp+14h]
  unsigned int v64; // [esp+24h] [ebp+14h]

  result = a5 * a4; /*0x7c53b0*/
  v59 = 0; /*0x7c53b9*/
  v57 = a3; /*0x7c53c3*/
  v58 = a5 * a4; /*0x7c53c7*/
  if ( a5 * a4 ) /*0x7c53b0*/
  {
    v8 = a6; /*0x7c53d2*/
    do /*0x7c53dc*/
    {
      v9 = *a2; /*0x7c53dc*/
      if ( (HIBYTE(*a2) & 0x80u) == 0 ) /*0x7c53e3*/
      {
        v51 = 2; /*0x7c575f*/
        v52 = (_BYTE *)(a1 + 8 * *a2); /*0x7c5764*/
        do /*0x7c577a*/
        {
          v53 = 4; /*0x7c5767*/
          do /*0x7c5773*/
          {
            *a3++ = *v52++; /*0x7c576e*/
            --v53; /*0x7c5772*/
          }
          while ( v53 ); /*0x7c5773*/
          --v51; /*0x7c5775*/
          a3 = &a3[v8 - 4]; /*0x7c5776*/
        }
        while ( v51 ); /*0x7c577a*/
        a3 += 2 * (2 - v8); /*0x7c5783*/
        goto LABEL_75; /*0x7c5783*/
      }
      v10 = *a2; /*0x7c53eb*/
      v11 = v9 & 0xF000; /*0x7c53f2*/
      if ( v11 > 0xC000 ) /*0x7c53fe*/
      {
        if ( v11 == 57344 ) /*0x7c56d9*/
        {
          v48 = 2; /*0x7c5721*/
          v49 = (_BYTE *)(a1 + 8 * (v9 & 0xFFF)); /*0x7c5726*/
          do /*0x7c5740*/
          {
            v50 = 4; /*0x7c5729*/
            do /*0x7c5739*/
            {
              if ( *v49 ) /*0x7c572e*/
                *a3 = *v49; /*0x7c5734*/
              ++a3; /*0x7c5736*/
              ++v49; /*0x7c5737*/
              --v50; /*0x7c5738*/
            }
            while ( v50 ); /*0x7c5739*/
            --v48; /*0x7c573b*/
            a3 = &a3[v8 - 4]; /*0x7c573c*/
          }
          while ( v48 ); /*0x7c5740*/
          ++a2; /*0x7c574c*/
          a3 += 2 * (2 - v8); /*0x7c5750*/
          goto LABEL_76; /*0x7c5753*/
        }
        if ( v11 == 61440 ) /*0x7c56e1*/
        {
          if ( (_BYTE)v9 ) /*0x7c56e9*/
          {
            v45 = 2; /*0x7c56ee*/
            do /*0x7c570a*/
            {
              v46 = a3 + 4; /*0x7c56f5*/
              LOBYTE(v11) = v9; /*0x7c56f8*/
              BYTE1(v11) = v9; /*0x7c56fa*/
              v47 = v11 << 16; /*0x7c56fe*/
              LOWORD(v47) = v11; /*0x7c5701*/
              *((_DWORD *)v46 - 1) = v47; /*0x7c5704*/
              a3 = &v46[v8 - 4]; /*0x7c5707*/
              --v45; /*0x7c5709*/
            }
            while ( v45 ); /*0x7c570a*/
            a3 -= 2 * v8; /*0x7c5710*/
          }
          a3 += 4; /*0x7c5713*/
LABEL_75:
          ++a2; /*0x7c5786*/
LABEL_76:
          v30 = v59 + 1; /*0x7c578b*/
          goto LABEL_77; /*0x7c578f*/
        }
      }
      else
      {
        if ( v11 == 49152 ) /*0x7c5404*/
        {
          v31 = (__int16 *)(a2 + 1); /*0x7c5623*/
          v32 = v9 & 0xFFF; /*0x7c5626*/
          ++a2; /*0x7c5628*/
          v64 = v32; /*0x7c562e*/
          if ( v32 >> 1 ) /*0x7c562c*/
          {
            v56 = (unsigned __int16)(v9 & 0xFFF) >> 1; /*0x7c5638*/
            do /*0x7c56be*/
            {
              v33 = *v31; /*0x7c563c*/
              v34 = HIBYTE(*v31); /*0x7c5642*/
              if ( v34 ) /*0x7c5646*/
              {
                v35 = v8 - 4; /*0x7c5648*/
                v36 = 2; /*0x7c564b*/
                do /*0x7c5667*/
                {
                  v37 = a3 + 4; /*0x7c5652*/
                  LOBYTE(v8) = v34; /*0x7c5655*/
                  BYTE1(v8) = v34; /*0x7c5657*/
                  v38 = v8 << 16; /*0x7c565b*/
                  LOWORD(v38) = v8; /*0x7c565e*/
                  *((_DWORD *)v37 - 1) = v38; /*0x7c5661*/
                  a3 = &v37[v35]; /*0x7c5664*/
                  --v36; /*0x7c5666*/
                }
                while ( v36 ); /*0x7c5667*/
                v8 = a6; /*0x7c5669*/
                a3 -= 2 * a6; /*0x7c5671*/
              }
              v39 = a3 + 4; /*0x7c5674*/
              if ( (_BYTE)v33 ) /*0x7c5679*/
              {
                v40 = v8 - 4; /*0x7c567b*/
                v41 = 2; /*0x7c567e*/
                do /*0x7c569a*/
                {
                  v42 = v39 + 4; /*0x7c5685*/
                  LOBYTE(v8) = v33; /*0x7c5688*/
                  BYTE1(v8) = v33; /*0x7c568a*/
                  v43 = v8 << 16; /*0x7c568e*/
                  LOWORD(v43) = v8; /*0x7c5691*/
                  *((_DWORD *)v42 - 1) = v43; /*0x7c5694*/
                  v39 = &v42[v40]; /*0x7c5697*/
                  --v41; /*0x7c5699*/
                }
                while ( v41 ); /*0x7c569a*/
                v8 = a6; /*0x7c569c*/
                v39 -= 2 * a6; /*0x7c56a4*/
              }
              a3 = v39 + 4; /*0x7c56af*/
              v31 = (__int16 *)(a2 + 1); /*0x7c56b2*/
              v44 = v56 == 1; /*0x7c56b5*/
              ++a2; /*0x7c56b6*/
              --v56; /*0x7c56ba*/
            }
            while ( !v44 ); /*0x7c56be*/
            v32 = v64; /*0x7c56c4*/
          }
          v30 = v32 + v59; /*0x7c56cc*/
          goto LABEL_77; /*0x7c56ce*/
        }
        if ( v11 != 40960 ) /*0x7c5410*/
        {
          if ( v11 == 45056 ) /*0x7c541c*/
          {
            v12 = HIBYTE(v9) & 0xF; /*0x7c5425*/
            v60 = v12; /*0x7c542a*/
            if ( (_BYTE)v9 ) /*0x7c542e*/
            {
              v13 = 4 * v12; /*0x7c5430*/
              v54 = 2; /*0x7c5437*/
              do /*0x7c5481*/
              {
                if ( v13 ) /*0x7c5441*/
                {
                  v14 = v13; /*0x7c5445*/
                  LOBYTE(v8) = v9; /*0x7c5447*/
                  BYTE1(v8) = v9; /*0x7c544b*/
                  v15 = v8 << 16; /*0x7c544f*/
                  LOWORD(v15) = v8; /*0x7c5452*/
                  v8 = a6; /*0x7c5455*/
                  v16 = v13 >> 2; /*0x7c5459*/
                  memset32(a3, v15, v16); /*0x7c545c*/
                  memset(&a3[4 * v16], v15, v14 & 3); /*0x7c5463*/
                  v12 = HIBYTE(v9) & 0xF; /*0x7c5465*/
                  v13 = 4 * v60; /*0x7c5469*/
                  a3 += 4 * v60; /*0x7c5470*/
                }
                a3 += v8 - v13; /*0x7c5476*/
                --v54; /*0x7c547d*/
              }
              while ( v54 ); /*0x7c5481*/
              a3 -= 2 * v8; /*0x7c5487*/
            }
            a3 += 4 * v12; /*0x7c548e*/
            v59 += v12; /*0x7c549a*/
            ++a2; /*0x7c549e*/
          }
          goto LABEL_78; /*0x7c54a2*/
        }
        v17 = a2[1]; /*0x7c54a7*/
        ++a2; /*0x7c54b3*/
        v18 = v10 & 0xFFF; /*0x7c54b7*/
        v61 = v18; /*0x7c54bc*/
        if ( (v17 & 0x8000u) == 0 ) /*0x7c54c0*/
        {
          v63 = 2; /*0x7c55c0*/
          v27 = (_BYTE *)(a1 + 8 * v17); /*0x7c55c8*/
          do /*0x7c55fe*/
          {
            if ( v18 ) /*0x7c55cd*/
            {
              v28 = v18; /*0x7c55cf*/
              do /*0x7c55e3*/
              {
                v29 = 4; /*0x7c55d1*/
                do /*0x7c55dd*/
                {
                  *a3++ = *v27++; /*0x7c55d8*/
                  --v29; /*0x7c55dc*/
                }
                while ( v29 ); /*0x7c55dd*/
                v27 -= 4; /*0x7c55df*/
                --v28; /*0x7c55e2*/
              }
              while ( v28 ); /*0x7c55e3*/
            }
            v27 += 4; /*0x7c55f4*/
            a3 += v8 - 4 * v18; /*0x7c55f7*/
            --v63; /*0x7c55fa*/
          }
          while ( v63 ); /*0x7c55fe*/
LABEL_42:
          ++a2; /*0x7c5600*/
          a3 += 2 * (2 * v18 - v8); /*0x7c5610*/
          v30 = v18 + v59; /*0x7c5617*/
LABEL_77:
          v59 = v30; /*0x7c5790*/
          goto LABEL_78; /*0x7c5790*/
        }
        v19 = v17 & 0xC000; /*0x7c54cf*/
        if ( v19 == 0x8000 ) /*0x7c54db*/
        {
          if ( (_BYTE)v17 ) /*0x7c553d*/
          {
            v23 = 4 * v18; /*0x7c553f*/
            v55 = 2; /*0x7c5546*/
            do /*0x7c5590*/
            {
              if ( v23 ) /*0x7c5550*/
              {
                v24 = v23; /*0x7c5554*/
                LOBYTE(v8) = v17; /*0x7c5556*/
                BYTE1(v8) = v17; /*0x7c555a*/
                v25 = v8 << 16; /*0x7c555e*/
                LOWORD(v25) = v8; /*0x7c5561*/
                v8 = a6; /*0x7c5564*/
                v26 = v23 >> 2; /*0x7c5568*/
                memset32(a3, v25, v26); /*0x7c556b*/
                memset(&a3[4 * v26], v25, v24 & 3); /*0x7c5572*/
                v18 = v61; /*0x7c5574*/
                v23 = 4 * v61; /*0x7c5578*/
                a3 += 4 * v61; /*0x7c557f*/
              }
              a3 += v8 - v23; /*0x7c5585*/
              --v55; /*0x7c558c*/
            }
            while ( v55 ); /*0x7c5590*/
            a3 -= 2 * v8; /*0x7c5596*/
          }
          a3 += 4 * v18; /*0x7c55a6*/
          v59 += v18; /*0x7c55a9*/
          ++a2; /*0x7c55ad*/
          goto LABEL_78; /*0x7c55b1*/
        }
        if ( v19 == 49152 ) /*0x7c54e3*/
        {
          v62 = 2; /*0x7c54f2*/
          v20 = (_BYTE *)(a1 + 8 * (v17 & 0xFFF)); /*0x7c54fa*/
          do /*0x7c5534*/
          {
            if ( (v10 & 0xFFF) != 0 ) /*0x7c54ff*/
            {
              v21 = v10 & 0xFFF; /*0x7c5501*/
              do /*0x7c5519*/
              {
                v22 = 4; /*0x7c5503*/
                do /*0x7c5513*/
                {
                  if ( *v20 ) /*0x7c5508*/
                    *a3 = *v20; /*0x7c550e*/
                  ++a3; /*0x7c5510*/
                  ++v20; /*0x7c5511*/
                  --v22; /*0x7c5512*/
                }
                while ( v22 ); /*0x7c5513*/
                v20 -= 4; /*0x7c5515*/
                --v21; /*0x7c5518*/
              }
              while ( v21 ); /*0x7c5519*/
            }
            v20 += 4; /*0x7c552a*/
            a3 += v8 - 4 * v18; /*0x7c552d*/
            --v62; /*0x7c5530*/
          }
          while ( v62 ); /*0x7c5534*/
          goto LABEL_42; /*0x7c5534*/
        }
      }
LABEL_78:
      result = v59 / a4; /*0x7c5794*/
      if ( !(v59 % a4) ) /*0x7c579c*/
      {
        result = (int)v57; /*0x7c57a4*/
        a3 = &v57[2 * v8]; /*0x7c57a8*/
        v57 = a3; /*0x7c57ab*/
      }
    }
    while ( v59 < v58 ); /*0x7c53dc*/
  }
  return result; /*0x7c57bc*/
}


// ==== 0x007C57D0  DrawTileBlock2Sub  this=-  sig=ida-proto ====
int __cdecl TileRenderer_DrawBlock2Sub(int a1, unsigned __int16 *a2, _BYTE *a3, unsigned int a4, int a5, int a6)
{
  int result; // eax
  unsigned __int16 *v7; // ebp
  _BYTE *v8; // esi
  int v9; // ebx
  unsigned __int16 v10; // dx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  _BYTE *v16; // edi
  unsigned __int16 v17; // dx
  int v18; // edi
  int v19; // ecx
  _BYTE *v20; // eax
  int v21; // ebp
  int v22; // ecx
  unsigned int v23; // ecx
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  _BYTE *v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // ebp
  int v34; // edi
  unsigned __int16 v35; // dx
  char v36; // cl
  _BYTE *v37; // esi
  int v38; // eax
  int v39; // edi
  int v40; // ecx
  _BYTE *v41; // esi
  _BYTE *v42; // esi
  int v43; // eax
  bool v44; // zf
  int v45; // edi
  _BYTE *v46; // esi
  int v47; // ecx
  int v48; // edi
  _BYTE *v49; // eax
  int v50; // ecx
  int v51; // edi
  _BYTE *v52; // eax
  int v53; // ecx
  int v54; // [esp+8h] [ebp-10h]
  int v55; // [esp+8h] [ebp-10h]
  unsigned int v56; // [esp+8h] [ebp-10h]
  _BYTE *v57; // [esp+Ch] [ebp-Ch]
  char v58; // [esp+10h] [ebp-8h]
  unsigned int v59; // [esp+14h] [ebp-4h]
  unsigned int v60; // [esp+24h] [ebp+Ch]
  int v61; // [esp+2Ch] [ebp+14h]
  int v62; // [esp+2Ch] [ebp+14h]
  int v63; // [esp+2Ch] [ebp+14h]
  unsigned int v64; // [esp+2Ch] [ebp+14h]

  result = a5 * a4; /*0x7c57d8*/
  v7 = a2; /*0x7c57dd*/
  v8 = a3; /*0x7c57e2*/
  v57 = a3; /*0x7c57ec*/
  v60 = 0; /*0x7c57f0*/
  v59 = a5 * a4; /*0x7c57f8*/
  if ( a5 * a4 ) /*0x7c57d8*/
  {
    v9 = a6; /*0x7c5803*/
    while ( 1 ) /*0x7c580e*/
    {
      v10 = *v7; /*0x7c580e*/
      v58 = *v7; /*0x7c5815*/
      if ( (HIBYTE(*v7) & 0x80u) == 0 ) /*0x7c5819*/
        break; /*0x7c5819*/
      v11 = v10; /*0x7c5821*/
      v12 = v10 & 0xF000; /*0x7c5828*/
      if ( v12 > 0xC000 ) /*0x7c5834*/
      {
        if ( v12 != 57344 ) /*0x7c5ae6*/
        {
          if ( v12 != 61440 ) /*0x7c5aee*/
            goto LABEL_66; /*0x7c5aee*/
          v45 = 2; /*0x7c5af7*/
          do /*0x7c5b13*/
          {
            v46 = v8 + 4; /*0x7c5afe*/
            LOBYTE(v11) = v10; /*0x7c5b01*/
            BYTE1(v11) = v10; /*0x7c5b03*/
            v47 = v11 << 16; /*0x7c5b07*/
            LOWORD(v47) = v11; /*0x7c5b0a*/
            *((_DWORD *)v46 - 1) = v47; /*0x7c5b0d*/
            v8 = &v46[v9 - 4]; /*0x7c5b10*/
            --v45; /*0x7c5b12*/
          }
          while ( v45 ); /*0x7c5b13*/
          v8 += 2 * (2 - v9); /*0x7c5b1c*/
          goto LABEL_64; /*0x7c5b1f*/
        }
        v48 = 2; /*0x7c5b2a*/
        v49 = (_BYTE *)(a1 + 8 * (v10 & 0xFFF)); /*0x7c5b2f*/
        do /*0x7c5b45*/
        {
          v50 = 4; /*0x7c5b32*/
          do /*0x7c5b3e*/
          {
            *v8++ = *v49++; /*0x7c5b39*/
            --v50; /*0x7c5b3d*/
          }
          while ( v50 ); /*0x7c5b3e*/
          --v48; /*0x7c5b40*/
          v8 = &v8[v9 - 4]; /*0x7c5b41*/
        }
        while ( v48 ); /*0x7c5b45*/
LABEL_63:
        v8 += 2 * (2 - v9); /*0x7c5b70*/
LABEL_64:
        v31 = v60 + 1; /*0x7c5b7a*/
        ++a2; /*0x7c5b86*/
        goto LABEL_65; /*0x7c5b86*/
      }
      switch ( v12 ) /*0x7c583a*/
      {
        case 0xC000u: /*0x7c583a*/
          v32 = v10 & 0xFFF; /*0x7c5a44*/
          v64 = v32; /*0x7c5a4e*/
          a2 = v7 + 1; /*0x7c5a54*/
          if ( v32 >> 1 ) /*0x7c5a52*/
          {
            v33 = v9 - 4; /*0x7c5a5a*/
            v56 = v32 >> 1; /*0x7c5a5d*/
            do /*0x7c5acd*/
            {
              v34 = 2; /*0x7c5a67*/
              v35 = *a2; /*0x7c5a6c*/
              v36 = HIBYTE(*a2); /*0x7c5a6f*/
              do /*0x7c5a88*/
              {
                v37 = v8 + 4; /*0x7c5a73*/
                LOBYTE(v9) = v36; /*0x7c5a76*/
                BYTE1(v9) = v36; /*0x7c5a78*/
                v38 = v9 << 16; /*0x7c5a7c*/
                LOWORD(v38) = v9; /*0x7c5a7f*/
                *((_DWORD *)v37 - 1) = v38; /*0x7c5a82*/
                v8 = &v37[v33]; /*0x7c5a85*/
                --v34; /*0x7c5a87*/
              }
              while ( v34 ); /*0x7c5a88*/
              HIWORD(v9) = HIWORD(a6); /*0x7c5a8a*/
              v39 = 2; /*0x7c5a95*/
              v40 = 2 * (2 - a6); /*0x7c5a9a*/
              v41 = &v8[v40]; /*0x7c5a9c*/
              do /*0x7c5ab5*/
              {
                v42 = v41 + 4; /*0x7c5aa0*/
                LOBYTE(v9) = v35; /*0x7c5aa3*/
                BYTE1(v9) = v35; /*0x7c5aa5*/
                v43 = v9 << 16; /*0x7c5aa9*/
                LOWORD(v43) = v9; /*0x7c5aac*/
                *((_DWORD *)v42 - 1) = v43; /*0x7c5aaf*/
                v41 = &v42[v33]; /*0x7c5ab2*/
                --v39; /*0x7c5ab4*/
              }
              while ( v39 ); /*0x7c5ab5*/
              v8 = &v41[v40]; /*0x7c5abb*/
              v44 = v56 == 1; /*0x7c5ac4*/
              ++a2; /*0x7c5ac5*/
              --v56; /*0x7c5ac9*/
            }
            while ( !v44 ); /*0x7c5acd*/
            v32 = v64; /*0x7c5acf*/
            v9 = a6; /*0x7c5ad3*/
          }
          v60 += v32; /*0x7c5ad7*/
          break;
        case 0xA000u: /*0x7c583a*/
          v17 = v7[1]; /*0x7c58d6*/
          a2 = v7 + 1; /*0x7c58e2*/
          v18 = v11 & 0xFFF; /*0x7c58e6*/
          v62 = v18; /*0x7c58eb*/
          if ( (v17 & 0x8000u) == 0 ) /*0x7c58ef*/
          {
            v27 = (_BYTE *)(a1 + 8 * v7[1]); /*0x7c59ed*/
            v28 = 2; /*0x7c59f0*/
            do /*0x7c5a24*/
            {
              if ( v18 ) /*0x7c59f7*/
              {
                v29 = v18; /*0x7c59f9*/
                do /*0x7c5a0d*/
                {
                  v30 = 4; /*0x7c59fb*/
                  do /*0x7c5a07*/
                  {
                    *v8++ = *v27++; /*0x7c5a02*/
                    --v30; /*0x7c5a06*/
                  }
                  while ( v30 ); /*0x7c5a07*/
                  v27 -= 4; /*0x7c5a09*/
                  --v29; /*0x7c5a0c*/
                }
                while ( v29 ); /*0x7c5a0d*/
                v9 = a6; /*0x7c5a0f*/
              }
              v27 += 4; /*0x7c5a1e*/
              v8 += v9 - 4 * v18; /*0x7c5a21*/
              --v28; /*0x7c5a23*/
            }
            while ( v28 ); /*0x7c5a24*/
            v8 += 2 * (2 * v18 - v9); /*0x7c5a2b*/
            goto LABEL_39; /*0x7c5a2b*/
          }
          v19 = v17 & 0xC000; /*0x7c58fe*/
          if ( v19 != 0x8000 ) /*0x7c590a*/
          {
            if ( v19 != 49152 ) /*0x7c5912*/
              break; /*0x7c5912*/
            v63 = 2; /*0x7c5921*/
            v20 = (_BYTE *)(a1 + 8 * (v17 & 0xFFF)); /*0x7c5929*/
            do /*0x7c595f*/
            {
              if ( v18 ) /*0x7c592e*/
              {
                v21 = v18; /*0x7c5930*/
                do /*0x7c5944*/
                {
                  v22 = 4; /*0x7c5932*/
                  do /*0x7c593e*/
                  {
                    *v8++ = *v20++; /*0x7c5939*/
                    --v22; /*0x7c593d*/
                  }
                  while ( v22 ); /*0x7c593e*/
                  v20 -= 4; /*0x7c5940*/
                  --v21; /*0x7c5943*/
                }
                while ( v21 ); /*0x7c5944*/
              }
              v20 += 4; /*0x7c5955*/
              v8 += v9 - 4 * v18; /*0x7c5958*/
              --v63; /*0x7c595b*/
            }
            while ( v63 ); /*0x7c595f*/
            v8 += 2 * (2 * v18 - v9); /*0x7c5966*/
LABEL_39:
            v31 = v18 + v60; /*0x7c5a2e*/
            ++a2; /*0x7c5a3b*/
LABEL_65:
            v60 = v31; /*0x7c5b8a*/
            break; /*0x7c5b8a*/
          }
          v23 = 4 * v18; /*0x7c596e*/
          v55 = 2; /*0x7c5975*/
          do /*0x7c59bf*/
          {
            if ( v23 ) /*0x7c597f*/
            {
              v24 = v23; /*0x7c5983*/
              LOBYTE(v9) = v17; /*0x7c5985*/
              BYTE1(v9) = v17; /*0x7c5989*/
              v25 = v9 << 16; /*0x7c598d*/
              LOWORD(v25) = v9; /*0x7c5990*/
              v9 = a6; /*0x7c5993*/
              v26 = v23 >> 2; /*0x7c5997*/
              memset32(v8, v25, v26); /*0x7c599a*/
              memset(&v8[4 * v26], v25, v24 & 3); /*0x7c59a1*/
              v18 = v62; /*0x7c59a3*/
              v23 = 4 * v62; /*0x7c59a7*/
              v8 += 4 * v62; /*0x7c59ae*/
            }
            v8 += v9 - v23; /*0x7c59b4*/
            --v55; /*0x7c59bb*/
          }
          while ( v55 ); /*0x7c59bf*/
          v8 += 2 * (2 * v18 - v9); /*0x7c59ca*/
          v60 += v18; /*0x7c59d6*/
          ++a2; /*0x7c59da*/
          break;
        case 0xB000u: /*0x7c583a*/
          v13 = HIBYTE(v10) & 0xF; /*0x7c585b*/
          v54 = 2; /*0x7c585e*/
          v61 = v13; /*0x7c5866*/
          v14 = 4 * v13; /*0x7c586a*/
          do /*0x7c58b2*/
          {
            if ( v14 ) /*0x7c5873*/
            {
              LOBYTE(v9) = v10; /*0x7c5879*/
              BYTE1(v9) = v10; /*0x7c587d*/
              v15 = v9 << 16; /*0x7c5883*/
              LOWORD(v15) = v9; /*0x7c5886*/
              v9 = a6; /*0x7c5889*/
              memset32(v8, v15, v14 >> 2); /*0x7c5890*/
              v16 = &v8[4 * (v14 >> 2)]; /*0x7c5890*/
              LOBYTE(v10) = v58; /*0x7c5894*/
              v8 += v14; /*0x7c589b*/
              memset(v16, v15, v14 & 3); /*0x7c589d*/
              v13 = v61; /*0x7c589f*/
            }
            v8 += v9 - v14; /*0x7c58a7*/
            --v54; /*0x7c58ae*/
          }
          while ( v54 ); /*0x7c58b2*/
          v60 += v13; /*0x7c58c6*/
          ++a2; /*0x7c58ca*/
          v8 += 2 * (2 * v13 - v9); /*0x7c58ce*/
          break;
      }
LABEL_66:
      result = v60 / a4; /*0x7c5b8e*/
      if ( !(v60 % a4) ) /*0x7c5b96*/
      {
        v8 = &v57[2 * v9]; /*0x7c5ba2*/
        v57 = v8; /*0x7c5ba5*/
      }
      if ( v60 >= v59 ) /*0x7c5bad*/
        return result; /*0x7c5bad*/
      v7 = a2; /*0x7c580a*/
    }
    v51 = 2; /*0x7c5b53*/
    v52 = (_BYTE *)(a1 + 8 * *v7); /*0x7c5b58*/
    do /*0x7c5b6e*/
    {
      v53 = 4; /*0x7c5b5b*/
      do /*0x7c5b67*/
      {
        *v8++ = *v52++; /*0x7c5b62*/
        --v53; /*0x7c5b66*/
      }
      while ( v53 ); /*0x7c5b67*/
      --v51; /*0x7c5b69*/
      v8 = &v8[v9 - 4]; /*0x7c5b6a*/
    }
    while ( v51 ); /*0x7c5b6e*/
    goto LABEL_63; /*0x7c5b6e*/
  }
  return result; /*0x7c5bb5*/
}


// ==== 0x007C5EE0  sub_7C5EE0  this=-  sig=ida-proto ====
void *sub_7C5EE0()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr; /*0x7c5ee3*/
}


// ==== 0x007C5EE4  CRT_FPU_InitControlWord  this=-  sig=ida-proto ====
int sub_7C5EE4()
{
  unsigned __int16 v1; // [esp+Ah] [ebp-2h]

  dword_822D80 = v1; /*0x7c5ef9*/
  return v1; /*0x7c5efe*/
}


// ==== 0x007C5F00  Math::RoundToInt  this=BuildingTypeClass  sig=csp ====
__int64 __usercall Math::RoundToInt@<edx:eax>(double a1@<st0>)
{
  return (__int64)a1; /*0x7c5f22*/
}


// ==== 0x007C5F3D  Event_Process_7C5F3D  this=-  sig=csp ====
int sub_7C5F3D()
{
  unsigned int v0; // kr00_4
  unsigned int v1; // kr04_4
  unsigned int v2; // kr08_4
  char v19; // [esp+6h] [ebp-2h]

  MEMORY[0x84E864] = 0; /*0x7c5f46*/
  v0 = __readeflags(); /*0x7c5f51*/
  __writeeflags(v0 ^ 0x40000); /*0x7c5f5b*/
  v1 = __readeflags(); /*0x7c5f5c*/
  v19 = 3; /*0x7c5f60*/
  if ( v0 != v1 ) /*0x7c5f5e*/
  {
    __writeeflags(v0); /*0x7c5f67*/
    v19 = 4; /*0x7c5f68*/
    __writeeflags(v0 ^ 0x200000); /*0x7c5f74*/
    v2 = __readeflags(); /*0x7c5f75*/
    if ( v0 != v2 ) /*0x7c5f77*/
    {
      _EAX = 0; /*0x7c5f7f*/
      __asm { cpuid } /*0x7c5f81*/
      *(_DWORD *)MEMORY[0x84E865] = _EBX; /*0x7c5f83*/
      *(_DWORD *)&MEMORY[0x84E865][4] = _EDX; /*0x7c5f89*/
      *(_DWORD *)&MEMORY[0x84E865][8] = _ECX; /*0x7c5f8f*/
      *(_DWORD *)&MEMORY[0x84E865][12] = 32; /*0x7c5f95*/
      if ( _EAX >= 1 ) /*0x7c5fa2*/
      {
        _EAX = 1; /*0x7c5fa6*/
        __asm { cpuid } /*0x7c5fa7*/
        MEMORY[0x84E864] = (unsigned __int8)(_EAX & 0xF0) >> 4; /*0x7c5fb4*/
        v19 = (unsigned __int16)(_EAX & 0xF00) >> 8; /*0x7c5fc2*/
      }
    }
  }
  MEMORY[0x84E863] = v19; /*0x7c5fc8*/
  if ( (unsigned __int8)v19 < 5u ) /*0x7c5fcf*/
    goto LABEL_8; /*0x7c5fcf*/
  _EAX = 1; /*0x7c5fd1*/
  __asm { cpuid } /*0x7c5fd6*/
  if ( ((unsigned int)&unk_800000 & _EDX) != 0 ) /*0x7c5fde*/
  {
    MEMORY[0x84E862] = 1; /*0x7c5fe5*/
    return 1; /*0x7c5fe0*/
  }
  else
  {
LABEL_8:
    MEMORY[0x84E862] = 0; /*0x7c5ff3*/
    return 0; /*0x7c5ff1*/
  }
}


// ==== 0x007C5FFF  Event_Process_7C5FFF  this=-  sig=ida-proto ====
int sub_7C5FFF()
{
  if ( (unsigned __int8)MEMORY[0x84E863] < 5u ) /*0x7c6008*/
    goto LABEL_4; /*0x7c6008*/
  _EAX = 1; /*0x7c600a*/
  __asm { cpuid } /*0x7c600f*/
  if ( (_EDX & 0x8000) != 0 ) /*0x7c6017*/
  {
    MEMORY[0x84E860] = (unsigned __int8)MEMORY[0x84E863] > 5u; /*0x7c6020*/
    MEMORY[0x84E861] = 1; /*0x7c6029*/
    return 1; /*0x7c6030*/
  }
  else
  {
LABEL_4:
    MEMORY[0x84E860] = 0; /*0x7c604e*/
    MEMORY[0x84E861] = 0; /*0x7c6055*/
    return 0; /*0x7c605c*/
  }
}


// ==== 0x007C6064  Timer::ReadTSC  this=Timer  sig=csp ====
unsigned __int64 __cdecl sub_7C6064(_DWORD *a1)
{
  unsigned __int64 result; // rax

  result = __rdtsc(); /*0x7c6068*/
  *a1 = HIDWORD(result); /*0x7c606d*/
  return result; /*0x7c606f*/
}


// ==== 0x007C61CF  globalHelper_0C61CF  this=-  sig=csp ====
int __cdecl sub_7C61CF(int a1)
{
  char v1; // ch
  char *v2; // esi
  char v3; // cl
  char v4; // al
  _WORD *v5; // edx
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int result; // eax

  v1 = 0; /*0x7c61d6*/
  v2 = *(char **)(a1 + 76); /*0x7c61d8*/
  do /*0x7c625a*/
  {
    v3 = 0; /*0x7c61db*/
    do /*0x7c6232*/
    {
      v4 = *v2++; /*0x7c61dd*/
      if ( v4 ) /*0x7c61e3*/
      {
        v5 = *(_WORD **)(a1 + 64); /*0x7c61ea*/
        v6 = *(_DWORD *)(a1 + 16) + **(unsigned __int8 **)(a1 + 80); /*0x7c61ef*/
        if ( (unsigned __int16)v6 < *v5 ) /*0x7c61fa*/
        {
          *v5 = v6; /*0x7c61fc*/
          v7 = **(unsigned __int16 **)(a1 + 68); /*0x7c6205*/
          LOWORD(v7) = *(_WORD *)(*(_DWORD *)(a1 + 144) + 2 * v7); /*0x7c620e*/
          LOBYTE(v7) = v4; /*0x7c6212*/
          **(_WORD **)(a1 + 72) = *(_WORD *)(*(_DWORD *)(a1 + 88) + 2 * v7); /*0x7c621b*/
        }
      }
      ++v3; /*0x7c621e*/
      ++*(_DWORD *)(a1 + 80); /*0x7c6220*/
      *(_DWORD *)(a1 + 72) += 2; /*0x7c6223*/
      *(_DWORD *)(a1 + 64) += 2; /*0x7c6227*/
      *(_DWORD *)(a1 + 68) += 2; /*0x7c622b*/
    }
    while ( v3 < *(char *)a1 ); /*0x7c6232*/
    *(_DWORD *)(a1 + 72) += *(_DWORD *)(a1 + 28); /*0x7c6237*/
    v8 = *(_DWORD *)(a1 + 20); /*0x7c623a*/
    *(_DWORD *)(a1 + 64) += v8; /*0x7c623d*/
    *(_DWORD *)(a1 + 64) += v8; /*0x7c6240*/
    v9 = *(_DWORD *)(a1 + 24); /*0x7c6243*/
    *(_DWORD *)(a1 + 68) += v9; /*0x7c6246*/
    *(_DWORD *)(a1 + 68) += v9; /*0x7c6249*/
    result = *(_DWORD *)(a1 + 32); /*0x7c624c*/
    v2 += result; /*0x7c624f*/
    *(_DWORD *)(a1 + 80) += result; /*0x7c6252*/
    ++v1; /*0x7c6255*/
  }
  while ( v1 < *(char *)(a1 + 4) ); /*0x7c625a*/
  return result; /*0x7c6260*/
}


// ==== 0x007C6620  sub_7C6620  this=-  sig=csp ====
int __cdecl sub_7C6620(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // esi
  int v8; // eax
  int v9; // [esp-8h] [ebp-20h]
  unsigned int v10; // [esp+14h] [ebp-4h]

  v10 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * a1 + 2 * dword_8759A4 * a2); /*0x7c6642*/
  v4 = -1; /*0x7c6645*/
  do /*0x7c6719*/
  {
    v5 = -1; /*0x7c664a*/
    do /*0x7c670f*/
    {
      if ( v5 | v4 ) /*0x7c6651*/
      {
        v6 = (char *)MEMORY[0xB0B6EC] + 8 * v5 + 8 * a1 + 8 * dword_8759A4 * (v4 + a2); /*0x7c667a*/
        if ( (v6[1] & 1) != 0 ) /*0x7c6684*/
        {
          if ( !a4 && abs32(*v6 - v10) > 0xC ) /*0x7c6699*/
            return 0; /*0x7c66a2*/
        }
        else if ( abs32(*v6 - v10) > 0xC ) /*0x7c66b0*/
        {
          if ( a3 == 1 ) /*0x7c66b6*/
          {
            if ( *v6 < v10 ) /*0x7c66bd*/
            {
              *v6 = v10 - 12; /*0x7c66c5*/
              v6[1] |= 2u; /*0x7c66c7*/
            }
          }
          else if ( *v6 > v10 ) /*0x7c66d2*/
          {
            *v6 = v10 + 12; /*0x7c66da*/
            v6[1] |= 2u; /*0x7c66dc*/
          }
          v9 = v5; /*0x7c66e0*/
          v8 = sub_7C6620(v5 + a1, v4 + a2, a3, a4); /*0x7c66ee*/
          v5 = v9; /*0x7c66f8*/
          if ( !v8 && !a4 ) /*0x7c6701*/
            return 0; /*0x7c670a*/
        }
      }
      ++v5; /*0x7c670b*/
    }
    while ( v5 < 2 ); /*0x7c670f*/
    ++v4; /*0x7c6715*/
  }
  while ( v4 < 2 ); /*0x7c6719*/
  return 1; /*0x7c669e*/
}


// ==== 0x007C6B70  sub_7C6B70  this=-  sig=ida-proto ====
__int16 __cdecl sub_7C6B70(int a1, _BYTE *a2, int *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  __int16 v19; // bx
  int v20; // ebx
  int v21; // ebx
  int *v23; // [esp+8h] [ebp-10h]
  int v24; // [esp+Ch] [ebp-Ch]
  int *v25; // [esp+10h] [ebp-8h]
  unsigned int v26; // [esp+14h] [ebp-4h]
  int v27; // [esp+34h] [ebp+1Ch]

  v27 = 2 * a6; /*0x7c6b7b*/
  v24 = v27; /*0x7c6b84*/
  v6 = a2; /*0x7c6b87*/
  v26 = (unsigned int)&a2[a4 * a5]; /*0x7c6b95*/
  v7 = a3; /*0x7c6b98*/
  v25 = a3; /*0x7c6b9b*/
  do /*0x7c6c6b*/
  {
LABEL_2:
    v8 = a4; /*0x7c6b9e*/
    do /*0x7c6c59*/
    {
      while ( 1 ) /*0x7c6ba1*/
      {
        v9 = a4 * a5; /*0x7c6ba1*/
        HIWORD(v10) = 0; /*0x7c6ba4*/
        BYTE1(v10) = v6[a4 * a5]; /*0x7c6ba6*/
        LOBYTE(v10) = *v6++; /*0x7c6ba9*/
        if ( (v10 & 0x8000) != 0 ) /*0x7c6baf*/
          break; /*0x7c6baf*/
        v11 = (int *)(a1 + 32 * v10); /*0x7c6bb4*/
        v12 = v11[1]; /*0x7c6bb9*/
        *v7 = *v11; /*0x7c6bbc*/
        v7[1] = v12; /*0x7c6bbe*/
        v13 = v11[3]; /*0x7c6bc4*/
        v23 = v11; /*0x7c6bc7*/
        *(int *)((char *)v7 + v27) = v11[2]; /*0x7c6bcd*/
        *(int *)((char *)v7 + v27 + 4) = v13; /*0x7c6bd0*/
        v14 = v11[5]; /*0x7c6bda*/
        v15 = 2 * v27; /*0x7c6be0*/
        *(int *)((char *)v7 + v15) = v23[4]; /*0x7c6be2*/
        *(int *)((char *)v7 + v15 + 4) = v14; /*0x7c6be5*/
        v16 = v23[6]; /*0x7c6bec*/
        v17 = v23[7]; /*0x7c6bef*/
        v18 = 3 * v27; /*0x7c6bf7*/
        *(int *)((char *)v7 + v18) = v16; /*0x7c6bfa*/
        *(int *)((char *)v7 + v18 + 4) = v17; /*0x7c6bfd*/
        v7 += 2; /*0x7c6c01*/
        if ( !--v8 ) /*0x7c6c05*/
        {
          v7 = &v25[v24]; /*0x7c6c0a*/
          v25 = (int *)((char *)v25 + v24 * 4); /*0x7c6c0d*/
          if ( (unsigned int)v6 >= v26 ) /*0x7c6c13*/
            return v16; /*0x7c6c13*/
          goto LABEL_2; /*0x7c6c13*/
        }
      }
      v19 = *((_WORD *)unk_B1D14C + (v10 & 0x7FFF)); /*0x7c6c29*/
      LOWORD(v9) = v19; /*0x7c6c25*/
      v16 = v9 << 16; /*0x7c6c2c*/
      LOWORD(v16) = v19; /*0x7c6c2f*/
      *v7 = v16; /*0x7c6c32*/
      v7[1] = v16; /*0x7c6c34*/
      *(int *)((char *)v7 + v27) = v16; /*0x7c6c3a*/
      *(int *)((char *)v7 + v27 + 4) = v16; /*0x7c6c3d*/
      v20 = 2 * v27; /*0x7c6c41*/
      *(int *)((char *)v7 + v20) = v16; /*0x7c6c44*/
      *(int *)((char *)v7 + v20 + 4) = v16; /*0x7c6c47*/
      v21 = 3 * v27; /*0x7c6c4b*/
      *(int *)((char *)v7 + v21) = v16; /*0x7c6c4e*/
      *(int *)((char *)v7 + v21 + 4) = v16; /*0x7c6c51*/
      v7 += 2; /*0x7c6c55*/
      --v8; /*0x7c6c58*/
    }
    while ( v8 ); /*0x7c6c59*/
    v7 = &v25[v24]; /*0x7c6c62*/
    v25 = (int *)((char *)v25 + v24 * 4); /*0x7c6c65*/
  }
  while ( (unsigned int)v6 < v26 ); /*0x7c6c6b*/
  return v16; /*0x7c6c76*/
}


// ==== 0x007C6C79  sub_7C6C79  this=-  sig=ida-proto ====
__int16 __cdecl sub_7C6C79(int a1, _BYTE *a2, int *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // ebx
  __int16 v16; // bx
  int v17; // ebx
  int v19; // [esp+Ch] [ebp-Ch]
  int *v20; // [esp+10h] [ebp-8h]
  unsigned int v21; // [esp+14h] [ebp-4h]
  int v22; // [esp+34h] [ebp+1Ch]

  v22 = 2 * a6; /*0x7c6c84*/
  v19 = v22; /*0x7c6c8d*/
  v6 = a2; /*0x7c6c90*/
  v21 = (unsigned int)&a2[a4 * a5]; /*0x7c6c9e*/
  v7 = a3; /*0x7c6ca1*/
  v20 = a3; /*0x7c6ca4*/
  do /*0x7c6d31*/
  {
LABEL_2:
    v8 = a4; /*0x7c6ca7*/
    do /*0x7c6d23*/
    {
      while ( 1 ) /*0x7c6caa*/
      {
        v9 = a4 * a5; /*0x7c6caa*/
        HIWORD(v10) = 0; /*0x7c6cad*/
        BYTE1(v10) = v6[a4 * a5]; /*0x7c6caf*/
        LOBYTE(v10) = *v6++; /*0x7c6cb2*/
        if ( (v10 & 0x8000) != 0 ) /*0x7c6cb8*/
          break; /*0x7c6cb8*/
        v11 = (int *)(a1 + 32 * v10); /*0x7c6cbd*/
        v12 = v11[1]; /*0x7c6cc2*/
        *v7 = *v11; /*0x7c6cc5*/
        v7[1] = v12; /*0x7c6cc7*/
        v13 = v11[4]; /*0x7c6cca*/
        v14 = v11[5]; /*0x7c6ccd*/
        v15 = 2 * v22; /*0x7c6cd3*/
        *(int *)((char *)v7 + v15) = v13; /*0x7c6cd5*/
        *(int *)((char *)v7 + v15 + 4) = v14; /*0x7c6cd8*/
        v7 += 2; /*0x7c6cdc*/
        if ( !--v8 ) /*0x7c6ce0*/
        {
          v7 = &v20[v19]; /*0x7c6ce5*/
          v20 = (int *)((char *)v20 + v19 * 4); /*0x7c6ce8*/
          if ( (unsigned int)v6 >= v21 ) /*0x7c6cee*/
            return v13; /*0x7c6cee*/
          goto LABEL_2; /*0x7c6cee*/
        }
      }
      v16 = *((_WORD *)unk_B1D14C + (v10 & 0x7FFF)); /*0x7c6d04*/
      LOWORD(v9) = v16; /*0x7c6d00*/
      v13 = v9 << 16; /*0x7c6d07*/
      LOWORD(v13) = v16; /*0x7c6d0a*/
      *v7 = v13; /*0x7c6d0d*/
      v7[1] = v13; /*0x7c6d0f*/
      v17 = 2 * v22; /*0x7c6d15*/
      *(int *)((char *)v7 + v17) = v13; /*0x7c6d18*/
      *(int *)((char *)v7 + v17 + 4) = v13; /*0x7c6d1b*/
      v7 += 2; /*0x7c6d1f*/
      --v8; /*0x7c6d22*/
    }
    while ( v8 ); /*0x7c6d23*/
    v7 = &v20[v19]; /*0x7c6d28*/
    v20 = (int *)((char *)v20 + v19 * 4); /*0x7c6d2b*/
  }
  while ( (unsigned int)v6 < v21 ); /*0x7c6d31*/
  return v13; /*0x7c6d3c*/
}


// ==== 0x007C6D40  sub_7C6D40  this=-  sig=ida-proto ====
__int16 __cdecl sub_7C6D40(int a1, _BYTE *a2, int *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // eax
  int v13; // edx
  int v15; // [esp+8h] [ebp-Ch]
  int *v16; // [esp+Ch] [ebp-8h]
  unsigned int v17; // [esp+10h] [ebp-4h]

  v15 = 2 * a6; /*0x7c6d50*/
  v6 = a2; /*0x7c6d53*/
  v17 = (unsigned int)&a2[a4 * a5]; /*0x7c6d61*/
  v7 = a3; /*0x7c6d64*/
  v16 = a3; /*0x7c6d67*/
  do /*0x7c6dcb*/
  {
LABEL_2:
    v8 = a4; /*0x7c6d6a*/
    do /*0x7c6dbd*/
    {
      while ( 1 ) /*0x7c6d6d*/
      {
        v9 = a4 * a5; /*0x7c6d6d*/
        HIWORD(v10) = 0; /*0x7c6d70*/
        BYTE1(v10) = v6[a4 * a5]; /*0x7c6d72*/
        LOBYTE(v10) = *v6++; /*0x7c6d75*/
        if ( BYTE1(v10) == 0xFF ) /*0x7c6d7b*/
          break; /*0x7c6d7b*/
        v11 = (int *)(a1 + 8 * v10); /*0x7c6d80*/
        v12 = *v11; /*0x7c6d83*/
        v13 = v11[1]; /*0x7c6d85*/
        *v7 = *v11; /*0x7c6d8b*/
        *(int *)((char *)v7++ + a6) = v13; /*0x7c6d8d*/
        if ( !--v8 ) /*0x7c6d94*/
        {
          v7 = (int *)((char *)v16 + v15); /*0x7c6d99*/
          v16 = (int *)((char *)v16 + v15); /*0x7c6d9c*/
          if ( (unsigned int)v6 >= v17 ) /*0x7c6da2*/
            return v12; /*0x7c6da2*/
          goto LABEL_2; /*0x7c6da2*/
        }
      }
      BYTE1(v10) = v10; /*0x7c6da6*/
      LOWORD(v9) = v10; /*0x7c6da8*/
      v12 = __ROL4__(v9, 16); /*0x7c6dab*/
      LOWORD(v12) = v10; /*0x7c6dae*/
      *v7 = v12; /*0x7c6db4*/
      *(int *)((char *)v7++ + a6) = v12; /*0x7c6db6*/
      --v8; /*0x7c6dbc*/
    }
    while ( v8 ); /*0x7c6dbd*/
    v7 = (int *)((char *)v16 + v15); /*0x7c6dc2*/
    v16 = (int *)((char *)v16 + v15); /*0x7c6dc5*/
  }
  while ( (unsigned int)v6 < v17 ); /*0x7c6dcb*/
  return v12; /*0x7c6dd3*/
}


// ==== 0x007C6DD6  sub_7C6DD6  this=-  sig=ida-proto ====
__int16 __cdecl sub_7C6DD6(int a1, _BYTE *a2, _DWORD *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  _DWORD *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v16; // [esp+8h] [ebp-Ch]
  _DWORD *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v16 = a6; /*0x7c6de7*/
  v6 = a2; /*0x7c6dea*/
  v18 = (unsigned int)&a2[a4 * a5]; /*0x7c6df8*/
  v7 = a3; /*0x7c6dfb*/
  v17 = a3; /*0x7c6dfe*/
  do /*0x7c6e86*/
  {
LABEL_2:
    v8 = a4; /*0x7c6e01*/
    do /*0x7c6e78*/
    {
      while ( 1 ) /*0x7c6e04*/
      {
        v9 = a4 * a5; /*0x7c6e04*/
        HIWORD(v10) = 0; /*0x7c6e07*/
        BYTE1(v10) = v6[a4 * a5]; /*0x7c6e09*/
        LOBYTE(v10) = *v6++; /*0x7c6e0c*/
        if ( BYTE1(v10) == 0xFF ) /*0x7c6e12*/
          break; /*0x7c6e12*/
        v11 = (_DWORD *)(a1 + 16 * v10); /*0x7c6e17*/
        v12 = v11[1]; /*0x7c6e1c*/
        *v7 = *v11; /*0x7c6e1f*/
        *(_DWORD *)((char *)v7 + a6) = v12; /*0x7c6e26*/
        v13 = v11[2]; /*0x7c6e2b*/
        v14 = v11[3]; /*0x7c6e2e*/
        *(_DWORD *)((char *)v7 + 2 * a6) = v13; /*0x7c6e36*/
        *(_DWORD *)((char *)v7++ + 3 * a6) = v14; /*0x7c6e3c*/
        if ( !--v8 ) /*0x7c6e43*/
        {
          v7 = &v17[v16]; /*0x7c6e48*/
          v17 = (_DWORD *)((char *)v17 + v16 * 4); /*0x7c6e4b*/
          if ( (unsigned int)v6 >= v18 ) /*0x7c6e51*/
            return v13; /*0x7c6e51*/
          goto LABEL_2; /*0x7c6e51*/
        }
      }
      BYTE1(v10) = v10; /*0x7c6e55*/
      LOWORD(v9) = v10; /*0x7c6e57*/
      v13 = __ROL4__(v9, 16); /*0x7c6e5a*/
      LOWORD(v13) = v10; /*0x7c6e5d*/
      *v7 = v13; /*0x7c6e60*/
      *(_DWORD *)((char *)v7 + a6) = v13; /*0x7c6e65*/
      *(_DWORD *)((char *)v7 + 2 * a6) = v13; /*0x7c6e6b*/
      *(_DWORD *)((char *)v7++ + 3 * a6) = v13; /*0x7c6e71*/
      --v8; /*0x7c6e77*/
    }
    while ( v8 ); /*0x7c6e78*/
    v7 = &v17[v16]; /*0x7c6e7d*/
    v17 = (_DWORD *)((char *)v17 + v16 * 4); /*0x7c6e80*/
  }
  while ( (unsigned int)v6 < v18 ); /*0x7c6e86*/
  return v13; /*0x7c6e91*/
}


// ==== 0x007C6E94  sub_7C6E94  this=-  sig=ida-proto ====
__int16 __cdecl sub_7C6E94(int a1, _BYTE *a2, _WORD *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  _WORD *v7; // edi
  int v8; // ecx
  int v9; // ebx
  _BYTE *v10; // ebx
  __int16 v11; // ax
  __int16 result; // ax
  int v13; // [esp+8h] [ebp-Ch]
  _WORD *v14; // [esp+Ch] [ebp-8h]
  unsigned int v15; // [esp+10h] [ebp-4h]

  v13 = a6; /*0x7c6ea4*/
  v6 = a2; /*0x7c6ea7*/
  v15 = (unsigned int)&a2[a4 * a5]; /*0x7c6eb5*/
  v7 = a3; /*0x7c6eb8*/
  v14 = a3; /*0x7c6ebb*/
  do /*0x7c6f23*/
  {
LABEL_2:
    v8 = a4; /*0x7c6ebe*/
    do /*0x7c6f15*/
    {
      while ( 1 ) /*0x7c6ec4*/
      {
        HIWORD(v9) = 0; /*0x7c6ec4*/
        BYTE1(v9) = v6[a4 * a5]; /*0x7c6ec6*/
        LOBYTE(v9) = *v6++; /*0x7c6ec9*/
        if ( BYTE1(v9) == 0xFF ) /*0x7c6ecf*/
          break; /*0x7c6ecf*/
        v10 = (_BYTE *)(a1 + 16 * v9); /*0x7c6ed4*/
        LOBYTE(v11) = *v10; /*0x7c6ed7*/
        HIBYTE(v11) = v10[2]; /*0x7c6ed9*/
        *v7 = v11; /*0x7c6edc*/
        LOBYTE(result) = v10[8]; /*0x7c6edf*/
        HIBYTE(result) = v10[10]; /*0x7c6ee2*/
        *(_WORD *)((char *)v7++ + a6) = result; /*0x7c6ee8*/
        if ( !--v8 ) /*0x7c6ef0*/
        {
          v7 = &v14[v13]; /*0x7c6ef5*/
          v14 = (_WORD *)((char *)v14 + v13 * 2); /*0x7c6ef8*/
          if ( (unsigned int)v6 >= v15 ) /*0x7c6efe*/
            return result; /*0x7c6efe*/
          goto LABEL_2; /*0x7c6efe*/
        }
      }
      BYTE1(v9) = v9; /*0x7c6f02*/
      result = v9; /*0x7c6f04*/
      *v7 = v9; /*0x7c6f07*/
      *(_WORD *)((char *)v7++ + a6) = v9; /*0x7c6f0d*/
      --v8; /*0x7c6f14*/
    }
    while ( v8 ); /*0x7c6f15*/
    v7 = &v14[v13]; /*0x7c6f1a*/
    v14 = (_WORD *)((char *)v14 + v13 * 2); /*0x7c6f1d*/
  }
  while ( (unsigned int)v6 < v15 ); /*0x7c6f23*/
  return result; /*0x7c6f2b*/
}


// ==== 0x007C6FC8  sub_7C6FC8  this=-  sig=ida-proto ====
__int16 __cdecl sub_7C6FC8(int a1, _BYTE *a2, int *a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  int *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int *v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  __int16 v19; // bx
  int v20; // ebx
  int v21; // ebx
  int *v23; // [esp+8h] [ebp-10h]
  int v24; // [esp+Ch] [ebp-Ch]
  int *v25; // [esp+10h] [ebp-8h]
  unsigned int v26; // [esp+14h] [ebp-4h]
  int v27; // [esp+34h] [ebp+1Ch]

  v27 = 2 * a6; /*0x7c6fd3*/
  v24 = v27; /*0x7c6fdc*/
  v6 = a2; /*0x7c6fdf*/
  v26 = (unsigned int)&a2[a4 * a5]; /*0x7c6fed*/
  v7 = a3; /*0x7c6ff0*/
  v25 = a3; /*0x7c6ff3*/
  do /*0x7c70b6*/
  {
LABEL_2:
    v8 = a4; /*0x7c6ff6*/
    do /*0x7c70a4*/
    {
      while ( 1 ) /*0x7c6ff9*/
      {
        v9 = a4 * a5; /*0x7c6ff9*/
        HIWORD(v10) = 0; /*0x7c6ffc*/
        BYTE1(v10) = v6[a4 * a5]; /*0x7c6ffe*/
        LOBYTE(v10) = *v6++; /*0x7c7001*/
        if ( (v10 & 0x8000) != 0 ) /*0x7c7007*/
          break; /*0x7c7007*/
        v11 = (int *)(a1 + 32 * v10); /*0x7c700c*/
        v12 = v11[1]; /*0x7c7011*/
        *v7 = *v11; /*0x7c7014*/
        v7[1] = v12; /*0x7c7016*/
        v13 = v11[3]; /*0x7c701c*/
        v23 = v11; /*0x7c701f*/
        *(int *)((char *)v7 + v27) = v11[2]; /*0x7c7025*/
        *(int *)((char *)v7 + v27 + 4) = v13; /*0x7c7028*/
        v14 = v11[5]; /*0x7c7032*/
        v15 = 2 * v27; /*0x7c7038*/
        *(int *)((char *)v7 + v15) = v23[4]; /*0x7c703a*/
        *(int *)((char *)v7 + v15 + 4) = v14; /*0x7c703d*/
        v16 = v23[6]; /*0x7c7044*/
        v17 = v23[7]; /*0x7c7047*/
        v18 = 3 * v27; /*0x7c704f*/
        *(int *)((char *)v7 + v18) = v16; /*0x7c7052*/
        *(int *)((char *)v7 + v18 + 4) = v17; /*0x7c7055*/
        v7 += 2; /*0x7c7059*/
        if ( !--v8 ) /*0x7c705d*/
        {
          v7 = &v25[v24]; /*0x7c7062*/
          v25 = (int *)((char *)v25 + v24 * 4); /*0x7c7065*/
          if ( (unsigned int)v6 >= v26 ) /*0x7c706b*/
            return v16; /*0x7c706b*/
          goto LABEL_2; /*0x7c706b*/
        }
      }
      v19 = v10 & 0x7FFF; /*0x7c706f*/
      LOWORD(v9) = v19; /*0x7c7074*/
      v16 = v9 << 16; /*0x7c7077*/
      LOWORD(v16) = v19; /*0x7c707a*/
      *v7 = v16; /*0x7c707d*/
      v7[1] = v16; /*0x7c707f*/
      *(int *)((char *)v7 + v27) = v16; /*0x7c7085*/
      *(int *)((char *)v7 + v27 + 4) = v16; /*0x7c7088*/
      v20 = 2 * v27; /*0x7c708c*/
      *(int *)((char *)v7 + v20) = v16; /*0x7c708f*/
      *(int *)((char *)v7 + v20 + 4) = v16; /*0x7c7092*/
      v21 = 3 * v27; /*0x7c7096*/
      *(int *)((char *)v7 + v21) = v16; /*0x7c7099*/
      *(int *)((char *)v7 + v21 + 4) = v16; /*0x7c709c*/
      v7 += 2; /*0x7c70a0*/
      --v8; /*0x7c70a3*/
    }
    while ( v8 ); /*0x7c70a4*/
    v7 = &v25[v24]; /*0x7c70ad*/
    v25 = (int *)((char *)v25 + v24 * 4); /*0x7c70b0*/
  }
  while ( (unsigned int)v6 < v26 ); /*0x7c70b6*/
  return v16; /*0x7c70c1*/
}


// ==== 0x007C7350  Audio_Render_7C7350  this=-  sig=csp ====
int __cdecl sub_7C7350(int a1)
{
  *(_WORD *)(a1 + 4) = 0; /*0x7c7356*/
  *(_DWORD *)a1 = 0; /*0x7c735c*/
  *(_WORD *)(a1 + 10) = 0; /*0x7c7362*/
  *(_DWORD *)(a1 + 6) = 0; /*0x7c7368*/
  return a1; /*0x7c736f*/
}


// ==== 0x007C7371  Render::DrawTileBitmap  this=Render  sig=csp ====
void __cdecl Render_DrawTileBitmap(int a1, _WORD *a2, __int16 a3, __int16 a4, unsigned int a5, int a6)
{
  int v6; // eax
  int v7; // edx
  int v8; // esi
  _WORD *v9; // edi
  signed int v10; // ebp
  int v11; // ebx
  bool v12; // zf
  bool k; // cc
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // esi
  _WORD *v21; // edi
  unsigned int v22; // ebp
  signed int v23; // ebp
  int v24; // ebx
  bool v25; // zf
  bool i; // cc
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _WORD *v31; // edi
  int v32; // esi
  int v33; // eax
  int v34; // edx
  unsigned int v35; // ebp
  signed int v36; // ebp
  int v37; // ebx
  bool v38; // zf
  bool j; // cc
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // [esp-14h] [ebp-20h]
  unsigned int v45; // [esp-14h] [ebp-20h]
  unsigned int v46; // [esp-14h] [ebp-20h]

  if ( a3 == 16 ) /*0x7c7388*/
  {
    if ( a4 == 2 ) /*0x7c73b2*/
    {
      v18 = *(_DWORD *)a6; /*0x7c778c*/
      v19 = *(unsigned __int16 *)(a6 + 4); /*0x7c778e*/
      v20 = a1; /*0x7c7792*/
      v21 = a2; /*0x7c7795*/
      v22 = a5 >> 1; /*0x7c779b*/
      if ( a5 >> 1 >= 0x10 && (a1 & 3) != 0 ) /*0x7c77a7*/
      {
        switch ( a1 & 3 ) /*0x7c77b6*/
        {
          case 0: /*0x7c77b6*/
            break;
          case 1: /*0x7c77b6*/
            v45 = v22 - 12; /*0x7c77c3*/
            v24 = 0; /*0x7c77c7*/
            v23 = ((v22 - 12) >> 4) + 1; /*0x7c77c9*/
LABEL_121:
            v30 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ae0*/
            LOWORD(v30) = *(_WORD *)v20; /*0x7c7ae8*/
            LOBYTE(v24) = *(_WORD *)v20; /*0x7c7aeb*/
            v27 = v30 >> 8; /*0x7c7aed*/
            --v20; /*0x7c7af0*/
            v21 -= 4; /*0x7c7af3*/
            LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7af6*/
            goto LABEL_79; /*0x7c7afc*/
          case 2: /*0x7c77b6*/
            v45 = v22 - 8; /*0x7c77d3*/
            v24 = 0; /*0x7c77d7*/
            v23 = ((v22 - 8) >> 4) + 1; /*0x7c77d9*/
LABEL_119:
            LOWORD(v27) = *(_WORD *)v20; /*0x7c7aa4*/
            LOBYTE(v24) = *(_WORD *)v20; /*0x7c7aa9*/
            v21 -= 8; /*0x7c7aab*/
            v20 -= 2; /*0x7c7aae*/
            LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7ab1*/
            goto LABEL_87; /*0x7c7ab7*/
          case 3: /*0x7c77b6*/
            v45 = v22 - 4; /*0x7c77e3*/
            v24 = 0; /*0x7c77e7*/
            v23 = ((v22 - 4) >> 4) + 1; /*0x7c77e9*/
LABEL_117:
            LOBYTE(v24) = *(_BYTE *)v20; /*0x7c7a70*/
            v21 -= 12; /*0x7c7a76*/
            v20 -= 3; /*0x7c7a79*/
            LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7a7c*/
            goto LABEL_95; /*0x7c7a82*/
        }
      }
      v45 = a5 >> 1; /*0x7c77a9*/
      v23 = a5 >> 5; /*0x7c77aa*/
      v24 = 0; /*0x7c77ad*/
      v25 = a5 >> 5 == 0; /*0x7c77af*/
      for ( i = v25; !i; i = v23-- <= 1 ) /*0x7c77af*/
      {
        v28 = *(_DWORD *)v20; /*0x7c796b*/
        LOBYTE(v24) = *(_DWORD *)v20; /*0x7c796d*/
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c796f*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c77f0*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c77f7*/
        if ( v18 > 0x7FFF ) /*0x7c7803*/
        {
          v18 = 0x7FFF; /*0x7c7998*/
        }
        else if ( v18 < -32768 ) /*0x7c780e*/
        {
          v18 = -32768; /*0x7c79a4*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7814*/
        *v21 = v18; /*0x7c781a*/
LABEL_75:
        LOBYTE(v24) = BYTE1(v28); /*0x7c781d*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c781f*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7826*/
        if ( v18 > 0x7FFF ) /*0x7c7832*/
        {
          v18 = 0x7FFF; /*0x7c79b0*/
        }
        else if ( v18 < -32768 ) /*0x7c783d*/
        {
          v18 = -32768; /*0x7c79bc*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7843*/
        v21[2] = v18; /*0x7c7849*/
        v27 = HIWORD(v28); /*0x7c784d*/
LABEL_79:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7850*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7857*/
        if ( v18 > 0x7FFF ) /*0x7c7863*/
        {
          v18 = 0x7FFF; /*0x7c79c8*/
        }
        else if ( v18 < -32768 ) /*0x7c786e*/
        {
          v18 = -32768; /*0x7c79d4*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7874*/
        v21[4] = v18; /*0x7c787a*/
LABEL_83:
        LOBYTE(v24) = v27; /*0x7c787e*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7880*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7887*/
        if ( v18 > 0x7FFF ) /*0x7c7893*/
        {
          v18 = 0x7FFF; /*0x7c79e0*/
        }
        else if ( v18 < -32768 ) /*0x7c789e*/
        {
          v18 = -32768; /*0x7c79ec*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c78a4*/
        v21[6] = v18; /*0x7c78aa*/
LABEL_87:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78ae*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78b5*/
        if ( v18 > 0x7FFF ) /*0x7c78c1*/
        {
          v18 = 0x7FFF; /*0x7c79f8*/
        }
        else if ( v18 < -32768 ) /*0x7c78cc*/
        {
          v18 = -32768; /*0x7c7a04*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c78d2*/
        v21[8] = v18; /*0x7c78d8*/
LABEL_91:
        LOBYTE(v24) = BYTE1(v27); /*0x7c78dc*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78de*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78e5*/
        if ( v18 > 0x7FFF ) /*0x7c78f1*/
        {
          v18 = 0x7FFF; /*0x7c7a10*/
        }
        else if ( v18 < -32768 ) /*0x7c78fc*/
        {
          v18 = -32768; /*0x7c7a1c*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[v24] | v19; /*0x7c7902*/
        v21[10] = v18; /*0x7c7908*/
LABEL_95:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c790c*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7913*/
        if ( v18 > 0x7FFF ) /*0x7c791f*/
        {
          v18 = 0x7FFF; /*0x7c7a28*/
        }
        else if ( v18 < -32768 ) /*0x7c792a*/
        {
          v18 = -32768; /*0x7c7a34*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7930*/
        v21[12] = v18; /*0x7c7936*/
LABEL_99:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c793a*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7941*/
        if ( v18 > 0x7FFF ) /*0x7c794d*/
        {
          v18 = 0x7FFF; /*0x7c7a40*/
        }
        else if ( v18 < -32768 ) /*0x7c7958*/
        {
          v18 = -32768; /*0x7c7a4c*/
        }
        v21[14] = v18; /*0x7c795e*/
        v20 += 4; /*0x7c7962*/
        v21 += 16; /*0x7c7965*/
        v25 = v23 == 1; /*0x7c7968*/
      }
      if ( v25 ) /*0x7c797a*/
      {
        switch ( (v45 >> 1) & 7 ) /*0x7c7982*/
        {
          case 0u: /*0x7c7982*/
            break;
          case 1u: /*0x7c7982*/
            LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7a5f*/
            v21 -= 14; /*0x7c7a61*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7a64*/
            goto LABEL_99; /*0x7c7a6a*/
          case 2u: /*0x7c7982*/
            goto LABEL_117;
          case 3u: /*0x7c7982*/
            LOWORD(v27) = 16 * *(_WORD *)v20; /*0x7c7a8d*/
            LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7a91*/
            v21 -= 10; /*0x7c7a93*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7a96*/
            goto LABEL_91; /*0x7c7a9c*/
          case 4u: /*0x7c7982*/
            goto LABEL_119;
          case 5u: /*0x7c7982*/
            v29 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ac1*/
            LOWORD(v29) = *(_WORD *)v20; /*0x7c7ac4*/
            v27 = v29 >> 4; /*0x7c7ac9*/
            LOBYTE(v24) = 16 * *(_WORD *)v20; /*0x7c7acc*/
            v21 -= 6; /*0x7c7acf*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7ad2*/
            goto LABEL_83; /*0x7c7ad8*/
          case 6u: /*0x7c7982*/
            goto LABEL_121;
          case 7u: /*0x7c7982*/
            v28 = 16 * *(_DWORD *)v20; /*0x7c7b08*/
            LOBYTE(v24) = 16 * *(_BYTE *)v20; /*0x7c7b0b*/
            v21 -= 2; /*0x7c7b0d*/
            LOBYTE(v19) = g_ScreenRenderFlag[v24] | v19; /*0x7c7b10*/
            goto LABEL_75; /*0x7c7b16*/
        }
      }
      *(_DWORD *)a6 = v18; /*0x7c7989*/
      *(_WORD *)(a6 + 4) = v19; /*0x7c798d*/
      v31 = a2 + 1; /*0x7c7b54*/
      v32 = (a5 >> 3) + a1; /*0x7c7b5d*/
      v33 = *(_DWORD *)(a6 + 6); /*0x7c7b61*/
      v34 = *(unsigned __int16 *)(a6 + 10); /*0x7c7b64*/
      v35 = a5 >> 1; /*0x7c7b6b*/
      if ( a5 >> 1 >= 0x10 && (v32 & 3) != 0 ) /*0x7c7b77*/
      {
        switch ( v32 & 3 ) /*0x7c7b86*/
        {
          case 0: /*0x7c7b86*/
            break;
          case 1: /*0x7c7b86*/
            v46 = v35 - 12; /*0x7c7b93*/
            v37 = 0; /*0x7c7b97*/
            v36 = ((v35 - 12) >> 4) + 1; /*0x7c7b99*/
LABEL_180:
            v43 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7eb4*/
            LOWORD(v43) = *(_WORD *)v32; /*0x7c7ebc*/
            LOBYTE(v37) = *(_WORD *)v32; /*0x7c7ebf*/
            v40 = v43 >> 8; /*0x7c7ec1*/
            --v32; /*0x7c7ec4*/
            v31 -= 4; /*0x7c7ec7*/
            LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7eca*/
            goto LABEL_138; /*0x7c7ed0*/
          case 2: /*0x7c7b86*/
            v46 = v35 - 8; /*0x7c7ba3*/
            v37 = 0; /*0x7c7ba7*/
            v36 = ((v35 - 8) >> 4) + 1; /*0x7c7ba9*/
LABEL_178:
            LOWORD(v40) = *(_WORD *)v32; /*0x7c7e78*/
            LOBYTE(v37) = *(_WORD *)v32; /*0x7c7e7d*/
            v31 -= 8; /*0x7c7e7f*/
            v32 -= 2; /*0x7c7e82*/
            LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7e85*/
            goto LABEL_146; /*0x7c7e8b*/
          case 3: /*0x7c7b86*/
            v46 = v35 - 4; /*0x7c7bb3*/
            v37 = 0; /*0x7c7bb7*/
            v36 = ((v35 - 4) >> 4) + 1; /*0x7c7bb9*/
LABEL_176:
            LOBYTE(v37) = *(_BYTE *)v32; /*0x7c7e44*/
            v31 -= 12; /*0x7c7e4a*/
            v32 -= 3; /*0x7c7e4d*/
            LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7e50*/
            goto LABEL_154; /*0x7c7e56*/
        }
      }
      v46 = a5 >> 1; /*0x7c7b79*/
      v36 = a5 >> 5; /*0x7c7b7a*/
      v37 = 0; /*0x7c7b7d*/
      v38 = a5 >> 5 == 0; /*0x7c7b7f*/
      for ( j = v38; !j; j = v36-- <= 1 ) /*0x7c7b7f*/
      {
        v41 = *(_DWORD *)v32; /*0x7c7d3b*/
        LOBYTE(v37) = *(_DWORD *)v32; /*0x7c7d3d*/
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7d3f*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bc0*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bc7*/
        if ( v33 > 0x7FFF ) /*0x7c7bd3*/
        {
          v33 = 0x7FFF; /*0x7c7d6c*/
        }
        else if ( v33 < -32768 ) /*0x7c7bde*/
        {
          v33 = -32768; /*0x7c7d78*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7be4*/
        *v31 = v33; /*0x7c7bea*/
LABEL_134:
        LOBYTE(v37) = BYTE1(v41); /*0x7c7bed*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bef*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bf6*/
        if ( v33 > 0x7FFF ) /*0x7c7c02*/
        {
          v33 = 0x7FFF; /*0x7c7d84*/
        }
        else if ( v33 < -32768 ) /*0x7c7c0d*/
        {
          v33 = -32768; /*0x7c7d90*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7c13*/
        v31[2] = v33; /*0x7c7c19*/
        v40 = HIWORD(v41); /*0x7c7c1d*/
LABEL_138:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c20*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c27*/
        if ( v33 > 0x7FFF ) /*0x7c7c33*/
        {
          v33 = 0x7FFF; /*0x7c7d9c*/
        }
        else if ( v33 < -32768 ) /*0x7c7c3e*/
        {
          v33 = -32768; /*0x7c7da8*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7c44*/
        v31[4] = v33; /*0x7c7c4a*/
LABEL_142:
        LOBYTE(v37) = v40; /*0x7c7c4e*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c50*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c57*/
        if ( v33 > 0x7FFF ) /*0x7c7c63*/
        {
          v33 = 0x7FFF; /*0x7c7db4*/
        }
        else if ( v33 < -32768 ) /*0x7c7c6e*/
        {
          v33 = -32768; /*0x7c7dc0*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7c74*/
        v31[6] = v33; /*0x7c7c7a*/
LABEL_146:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c7e*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c85*/
        if ( v33 > 0x7FFF ) /*0x7c7c91*/
        {
          v33 = 0x7FFF; /*0x7c7dcc*/
        }
        else if ( v33 < -32768 ) /*0x7c7c9c*/
        {
          v33 = -32768; /*0x7c7dd8*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ca2*/
        v31[8] = v33; /*0x7c7ca8*/
LABEL_150:
        LOBYTE(v37) = BYTE1(v40); /*0x7c7cac*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cae*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7cb5*/
        if ( v33 > 0x7FFF ) /*0x7c7cc1*/
        {
          v33 = 0x7FFF; /*0x7c7de4*/
        }
        else if ( v33 < -32768 ) /*0x7c7ccc*/
        {
          v33 = -32768; /*0x7c7df0*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[v37] | v34; /*0x7c7cd2*/
        v31[10] = v33; /*0x7c7cd8*/
LABEL_154:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cdc*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7ce3*/
        if ( v33 > 0x7FFF ) /*0x7c7cef*/
        {
          v33 = 0x7FFF; /*0x7c7dfc*/
        }
        else if ( v33 < -32768 ) /*0x7c7cfa*/
        {
          v33 = -32768; /*0x7c7e08*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7d00*/
        v31[12] = v33; /*0x7c7d06*/
LABEL_158:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7d0a*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7d11*/
        if ( v33 > 0x7FFF ) /*0x7c7d1d*/
        {
          v33 = 0x7FFF; /*0x7c7e14*/
        }
        else if ( v33 < -32768 ) /*0x7c7d28*/
        {
          v33 = -32768; /*0x7c7e20*/
        }
        v31[14] = v33; /*0x7c7d2e*/
        v32 += 4; /*0x7c7d32*/
        v31 += 16; /*0x7c7d35*/
        v38 = v36 == 1; /*0x7c7d38*/
      }
      if ( v38 ) /*0x7c7d4a*/
      {
        switch ( (v46 >> 1) & 7 ) /*0x7c7d52*/
        {
          case 0u: /*0x7c7d52*/
            break;
          case 1u: /*0x7c7d52*/
            LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7e33*/
            v31 -= 14; /*0x7c7e35*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7e38*/
            goto LABEL_158; /*0x7c7e3e*/
          case 2u: /*0x7c7d52*/
            goto LABEL_176;
          case 3u: /*0x7c7d52*/
            LOWORD(v40) = 16 * *(_WORD *)v32; /*0x7c7e61*/
            LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7e65*/
            v31 -= 10; /*0x7c7e67*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7e6a*/
            goto LABEL_150; /*0x7c7e70*/
          case 4u: /*0x7c7d52*/
            goto LABEL_178;
          case 5u: /*0x7c7d52*/
            v42 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7e95*/
            LOWORD(v42) = *(_WORD *)v32; /*0x7c7e98*/
            v40 = v42 >> 4; /*0x7c7e9d*/
            LOBYTE(v37) = 16 * *(_WORD *)v32; /*0x7c7ea0*/
            v31 -= 6; /*0x7c7ea3*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ea6*/
            goto LABEL_142; /*0x7c7eac*/
          case 6u: /*0x7c7d52*/
            goto LABEL_180;
          case 7u: /*0x7c7d52*/
            v41 = 16 * *(_DWORD *)v32; /*0x7c7edc*/
            LOBYTE(v37) = 16 * *(_BYTE *)v32; /*0x7c7edf*/
            v31 -= 2; /*0x7c7ee1*/
            LOBYTE(v34) = g_ScreenRenderFlag[v37] | v34; /*0x7c7ee4*/
            goto LABEL_134; /*0x7c7eea*/
        }
      }
      *(_DWORD *)(a6 + 6) = v33; /*0x7c7d59*/
      *(_WORD *)(a6 + 10) = v34; /*0x7c7d5e*/
    }
    else if ( a4 == 1 ) /*0x7c73bd*/
    {
      v6 = *(_DWORD *)a6; /*0x7c73c7*/
      v7 = *(unsigned __int16 *)(a6 + 4); /*0x7c73c9*/
      v8 = a1; /*0x7c73cd*/
      v9 = a2; /*0x7c73d0*/
      if ( (int)a5 >= 16 && (a1 & 3) != 0 ) /*0x7c73e0*/
      {
        switch ( a1 & 3 ) /*0x7c73ef*/
        {
          case 0: /*0x7c73ef*/
            break;
          case 1: /*0x7c73ef*/
            v44 = a5 - 12; /*0x7c73fb*/
            v11 = 0; /*0x7c73ff*/
            v10 = ((a5 - 12) >> 4) + 1; /*0x7c7401*/
LABEL_62:
            v17 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c771c*/
            LOWORD(v17) = *(_WORD *)v8; /*0x7c7724*/
            LOBYTE(v11) = *(_WORD *)v8; /*0x7c7727*/
            v14 = v17 >> 8; /*0x7c7729*/
            --v8; /*0x7c772c*/
            v9 -= 2; /*0x7c772f*/
            LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c7732*/
            goto LABEL_19; /*0x7c7738*/
          case 2: /*0x7c73ef*/
            v44 = a5 - 8; /*0x7c740b*/
            v11 = 0; /*0x7c740f*/
            v10 = ((a5 - 8) >> 4) + 1; /*0x7c7411*/
LABEL_60:
            LOWORD(v14) = *(_WORD *)v8; /*0x7c76e0*/
            LOBYTE(v11) = *(_WORD *)v8; /*0x7c76e5*/
            v9 -= 4; /*0x7c76e7*/
            v8 -= 2; /*0x7c76ea*/
            LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c76ed*/
            goto LABEL_27; /*0x7c76f3*/
          case 3: /*0x7c73ef*/
            v44 = a5 - 4; /*0x7c741b*/
            v11 = 0; /*0x7c741f*/
            v10 = ((a5 - 4) >> 4) + 1; /*0x7c7421*/
LABEL_58:
            LOBYTE(v11) = *(_BYTE *)v8; /*0x7c76ac*/
            v9 -= 6; /*0x7c76b2*/
            v8 -= 3; /*0x7c76b5*/
            LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c76b8*/
            goto LABEL_35; /*0x7c76be*/
        }
      }
      v44 = a5; /*0x7c73e2*/
      v10 = a5 >> 4; /*0x7c73e3*/
      v11 = 0; /*0x7c73e6*/
      v12 = a5 >> 4 == 0; /*0x7c73e8*/
      for ( k = v12; !k; k = v10-- <= 1 ) /*0x7c73e8*/
      {
        v15 = *(_DWORD *)v8; /*0x7c75a3*/
        LOBYTE(v11) = *(_DWORD *)v8; /*0x7c75a5*/
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c75a7*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7428*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c742f*/
        if ( v6 > 0x7FFF ) /*0x7c743b*/
        {
          v6 = 0x7FFF; /*0x7c75d4*/
        }
        else if ( v6 < -32768 ) /*0x7c7446*/
        {
          v6 = -32768; /*0x7c75e0*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c744c*/
        *v9 = v6; /*0x7c7452*/
LABEL_15:
        LOBYTE(v11) = BYTE1(v15); /*0x7c7455*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7457*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c745e*/
        if ( v6 > 0x7FFF ) /*0x7c746a*/
        {
          v6 = 0x7FFF; /*0x7c75ec*/
        }
        else if ( v6 < -32768 ) /*0x7c7475*/
        {
          v6 = -32768; /*0x7c75f8*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c747b*/
        v9[1] = v6; /*0x7c7481*/
        v14 = HIWORD(v15); /*0x7c7485*/
LABEL_19:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7488*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c748f*/
        if ( v6 > 0x7FFF ) /*0x7c749b*/
        {
          v6 = 0x7FFF; /*0x7c7604*/
        }
        else if ( v6 < -32768 ) /*0x7c74a6*/
        {
          v6 = -32768; /*0x7c7610*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c74ac*/
        v9[2] = v6; /*0x7c74b2*/
LABEL_23:
        LOBYTE(v11) = v14; /*0x7c74b6*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74b8*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74bf*/
        if ( v6 > 0x7FFF ) /*0x7c74cb*/
        {
          v6 = 0x7FFF; /*0x7c761c*/
        }
        else if ( v6 < -32768 ) /*0x7c74d6*/
        {
          v6 = -32768; /*0x7c7628*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c74dc*/
        v9[3] = v6; /*0x7c74e2*/
LABEL_27:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74e6*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74ed*/
        if ( v6 > 0x7FFF ) /*0x7c74f9*/
        {
          v6 = 0x7FFF; /*0x7c7634*/
        }
        else if ( v6 < -32768 ) /*0x7c7504*/
        {
          v6 = -32768; /*0x7c7640*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c750a*/
        v9[4] = v6; /*0x7c7510*/
LABEL_31:
        LOBYTE(v11) = BYTE1(v14); /*0x7c7514*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7516*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c751d*/
        if ( v6 > 0x7FFF ) /*0x7c7529*/
        {
          v6 = 0x7FFF; /*0x7c764c*/
        }
        else if ( v6 < -32768 ) /*0x7c7534*/
        {
          v6 = -32768; /*0x7c7658*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[v11] | v7; /*0x7c753a*/
        v9[5] = v6; /*0x7c7540*/
LABEL_35:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7544*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c754b*/
        if ( v6 > 0x7FFF ) /*0x7c7557*/
        {
          v6 = 0x7FFF; /*0x7c7664*/
        }
        else if ( v6 < -32768 ) /*0x7c7562*/
        {
          v6 = -32768; /*0x7c7670*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c7568*/
        v9[6] = v6; /*0x7c756e*/
LABEL_39:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7572*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c7579*/
        if ( v6 > 0x7FFF ) /*0x7c7585*/
        {
          v6 = 0x7FFF; /*0x7c767c*/
        }
        else if ( v6 < -32768 ) /*0x7c7590*/
        {
          v6 = -32768; /*0x7c7688*/
        }
        v9[7] = v6; /*0x7c7596*/
        v8 += 4; /*0x7c759a*/
        v9 += 8; /*0x7c759d*/
        v12 = v10 == 1; /*0x7c75a0*/
      }
      if ( v12 ) /*0x7c75b2*/
      {
        switch ( (v44 >> 1) & 7 ) /*0x7c75ba*/
        {
          case 0u: /*0x7c75ba*/
            break;
          case 1u: /*0x7c75ba*/
            LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c769b*/
            v9 -= 7; /*0x7c769d*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c76a0*/
            goto LABEL_39; /*0x7c76a6*/
          case 2u: /*0x7c75ba*/
            goto LABEL_58;
          case 3u: /*0x7c75ba*/
            LOWORD(v14) = 16 * *(_WORD *)v8; /*0x7c76c9*/
            LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c76cd*/
            v9 -= 5; /*0x7c76cf*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c76d2*/
            goto LABEL_31; /*0x7c76d8*/
          case 4u: /*0x7c75ba*/
            goto LABEL_60;
          case 5u: /*0x7c75ba*/
            v16 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c76fd*/
            LOWORD(v16) = *(_WORD *)v8; /*0x7c7700*/
            v14 = v16 >> 4; /*0x7c7705*/
            LOBYTE(v11) = 16 * *(_WORD *)v8; /*0x7c7708*/
            v9 -= 3; /*0x7c770b*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c770e*/
            goto LABEL_23; /*0x7c7714*/
          case 6u: /*0x7c75ba*/
            goto LABEL_62;
          case 7u: /*0x7c75ba*/
            v15 = 16 * *(_DWORD *)v8; /*0x7c7744*/
            LOBYTE(v11) = 16 * *(_BYTE *)v8; /*0x7c7747*/
            --v9; /*0x7c7749*/
            LOBYTE(v7) = g_ScreenRenderFlag[v11] | v7; /*0x7c774c*/
            goto LABEL_15; /*0x7c7752*/
        }
      }
      *(_DWORD *)a6 = v6; /*0x7c75c1*/
      *(_WORD *)(a6 + 4) = v7; /*0x7c75c5*/
    }
  }
}


// ==== 0x007C7F20  Audio_Helper_7C7F20  this=-  sig=csp ====
int __usercall sub_7C7F20@<eax>(int a1@<edx>, _WORD *a2, _BYTE *a3, int a4)
{
  unsigned int v4; // kr00_4
  _WORD *v5; // esi
  _BYTE *v6; // edi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int i; // ecx
  unsigned int v12; // ecx
  _BYTE *v13; // edi
  unsigned __int8 v14; // ah
  char v15; // bl
  int v16; // ebx
  unsigned int v17; // kr04_4
  char v18; // cf
  unsigned int v19; // kr08_4
  char v20; // ah
  unsigned int v21; // ebx
  unsigned int v22; // kr0C_4
  unsigned int v23; // ebx
  int v24; // edx
  unsigned int v25; // kr10_4
  unsigned int v26; // ebx
  int v27; // edx
  unsigned int v28; // kr14_4
  unsigned int v29; // ebx
  int v30; // edx
  unsigned int v31; // kr18_4
  int v32; // edx
  int v34; // [esp+4h] [ebp-8h]

  v4 = __readeflags(); /*0x7c7f2b*/
  v34 = 0; /*0x7c7f2d*/
  if ( a2 && a3 && a4 ) /*0x7c7f4c*/
  {
    v5 = a2; /*0x7c7f52*/
    v6 = a3; /*0x7c7f55*/
    v7 = a4; /*0x7c7f58*/
    LOBYTE(a1) = 0x80; /*0x7c7f5b*/
    while ( v7 > 0 ) /*0x7c7f60*/
    {
      v8 = *(unsigned __int8 *)v5; /*0x7c7f68*/
      ++v34; /*0x7c7f6a*/
      v5 = (_WORD *)((char *)v5 + 1); /*0x7c7f6d*/
      v9 = 4 * v8; /*0x7c7f6e*/
      LOBYTE(v9) = (unsigned __int8)v9 >> 2; /*0x7c7f71*/
      if ( BYTE1(v9) == 2 ) /*0x7c7f77*/
      {
        if ( (v9 & 0x20) != 0 ) /*0x7c7f7b*/
        {
          LOBYTE(a1) = ((char)(8 * v9) >> 3) + a1; /*0x7c7f83*/
          *v6 = a1; /*0x7c7f85*/
          --v7; /*0x7c7f87*/
          ++v6; /*0x7c7f88*/
        }
        else
        {
          v10 = v7; /*0x7c7f8b*/
          LOWORD(v9) = (unsigned __int8)(v9 + 1); /*0x7c7f8f*/
          for ( i = v9 >> 1; i; --i ) /*0x7c7f93*/
          {
            *(_WORD *)v6 = *v5++; /*0x7c7f95*/
            v6 += 2; /*0x7c7f95*/
          }
          v12 = v9 & 1; /*0x7c7f98*/
          qmemcpy(v6, v5, v12); /*0x7c7f9a*/
          v5 = (_WORD *)((char *)v5 + v12); /*0x7c7f9a*/
          v13 = &v6[v12]; /*0x7c7f9a*/
          v34 += v9; /*0x7c7f9e*/
          v7 = v10 - v9; /*0x7c7fa1*/
          LOBYTE(a1) = *--v13; /*0x7c7fa4*/
          v6 = v13 + 1; /*0x7c7fa6*/
        }
      }
      else
      {
        LOBYTE(v9) = v9 + 1; /*0x7c7fa9*/
        if ( BYTE1(v9) == 1 ) /*0x7c7fae*/
        {
          do /*0x7c8007*/
          {
            v14 = *(_BYTE *)v5; /*0x7c7fb0*/
            v15 = *(_BYTE *)v5; /*0x7c7fb2*/
            ++v34; /*0x7c7fb4*/
            v5 = (_WORD *)((char *)v5 + 1); /*0x7c7fb7*/
            v16 = v15 & 0xF; /*0x7c7fb8*/
            LOBYTE(a1) = byte_7C80F6[v16] + a1; /*0x7c7fbb*/
            v17 = __readeflags(); /*0x7c7fc1*/
            if ( byte_7C80F6[v16] < 0 ) /*0x7c7fc9*/
            {
              __writeeflags(v17); /*0x7c7fd2*/
              if ( !v18 ) /*0x7c7fd3*/
                LOBYTE(a1) = 0; /*0x7c7fd5*/
            }
            else
            {
              __writeeflags(v17); /*0x7c7fcb*/
              if ( v18 ) /*0x7c7fcc*/
                LOBYTE(a1) = -1; /*0x7c7fce*/
            }
            LOBYTE(v16) = v14 >> 4; /*0x7c7fdb*/
            BYTE1(a1) = byte_7C80F6[v16] + a1; /*0x7c7fde*/
            v19 = __readeflags(); /*0x7c7fe4*/
            if ( byte_7C80F6[v16] < 0 ) /*0x7c7fec*/
            {
              __writeeflags(v19); /*0x7c7ff5*/
              if ( !v18 ) /*0x7c7ff6*/
                BYTE1(a1) = 0; /*0x7c7ff8*/
            }
            else
            {
              __writeeflags(v19); /*0x7c7fee*/
              if ( v18 ) /*0x7c7fef*/
                BYTE1(a1) = -1; /*0x7c7ff1*/
            }
            *(_WORD *)v6 = a1; /*0x7c7ffa*/
            v7 -= 2; /*0x7c7ffd*/
            v6 += 2; /*0x7c8000*/
            LOBYTE(a1) = BYTE1(a1); /*0x7c8003*/
            LOBYTE(v9) = v9 - 1; /*0x7c8005*/
          }
          while ( (_BYTE)v9 ); /*0x7c8007*/
        }
        else if ( BYTE1(v9) ) /*0x7c8011*/
        {
          memset(v6, a1, (unsigned __int8)v9); /*0x7c80de*/
          v6 += (unsigned __int8)v9; /*0x7c80de*/
          v7 -= (unsigned __int8)v9; /*0x7c80e0*/
        }
        else
        {
          do /*0x7c80c9*/
          {
            v20 = *(_BYTE *)v5; /*0x7c8017*/
            ++v34; /*0x7c8019*/
            v5 = (_WORD *)((char *)v5 + 1); /*0x7c801c*/
            v21 = v20 & 3; /*0x7c801f*/
            LOBYTE(a1) = byte_7C80F2[v21] + a1; /*0x7c8022*/
            v22 = __readeflags(); /*0x7c8028*/
            if ( byte_7C80F2[v21] < 0 ) /*0x7c8030*/
            {
              __writeeflags(v22); /*0x7c8039*/
              if ( !v18 ) /*0x7c803a*/
                LOBYTE(a1) = 0; /*0x7c803c*/
            }
            else
            {
              __writeeflags(v22); /*0x7c8032*/
              if ( v18 ) /*0x7c8033*/
                LOBYTE(a1) = -1; /*0x7c8035*/
            }
            BYTE1(a1) = a1; /*0x7c803e*/
            v24 = __ROR4__(a1, 8); /*0x7c8040*/
            LOBYTE(v21) = v20; /*0x7c8043*/
            v23 = v21 >> 2; /*0x7c8045*/
            LOBYTE(v23) = v23 & 3; /*0x7c8048*/
            LOBYTE(v24) = byte_7C80F2[v23] + v24; /*0x7c804b*/
            v25 = __readeflags(); /*0x7c8051*/
            if ( byte_7C80F2[v23] < 0 ) /*0x7c8059*/
            {
              __writeeflags(v25); /*0x7c8062*/
              if ( !v18 ) /*0x7c8063*/
                LOBYTE(v24) = 0; /*0x7c8065*/
            }
            else
            {
              __writeeflags(v25); /*0x7c805b*/
              if ( v18 ) /*0x7c805c*/
                LOBYTE(v24) = -1; /*0x7c805e*/
            }
            BYTE1(v24) = v24; /*0x7c8067*/
            v27 = __ROR4__(v24, 8); /*0x7c8069*/
            LOBYTE(v23) = v20; /*0x7c806c*/
            v26 = v23 >> 4; /*0x7c806e*/
            LOBYTE(v26) = v26 & 3; /*0x7c8071*/
            LOBYTE(v27) = byte_7C80F2[v26] + v27; /*0x7c8074*/
            v28 = __readeflags(); /*0x7c807a*/
            if ( byte_7C80F2[v26] < 0 ) /*0x7c8082*/
            {
              __writeeflags(v28); /*0x7c808b*/
              if ( !v18 ) /*0x7c808c*/
                LOBYTE(v27) = 0; /*0x7c808e*/
            }
            else
            {
              __writeeflags(v28); /*0x7c8084*/
              if ( v18 ) /*0x7c8085*/
                LOBYTE(v27) = -1; /*0x7c8087*/
            }
            BYTE1(v27) = v27; /*0x7c8090*/
            v30 = __ROR4__(v27, 8); /*0x7c8092*/
            LOBYTE(v26) = v20; /*0x7c8095*/
            v29 = v26 >> 6; /*0x7c8097*/
            LOBYTE(v29) = v29 & 3; /*0x7c809a*/
            LOBYTE(v30) = byte_7C80F2[v29] + v30; /*0x7c809d*/
            v31 = __readeflags(); /*0x7c80a3*/
            if ( byte_7C80F2[v29] < 0 ) /*0x7c80ab*/
            {
              __writeeflags(v31); /*0x7c80b4*/
              if ( !v18 ) /*0x7c80b5*/
                LOBYTE(v30) = 0; /*0x7c80b7*/
            }
            else
            {
              __writeeflags(v31); /*0x7c80ad*/
              if ( v18 ) /*0x7c80ae*/
                LOBYTE(v30) = -1; /*0x7c80b0*/
            }
            v32 = __ROR4__(v30, 8); /*0x7c80b9*/
            *(_DWORD *)v6 = v32; /*0x7c80bc*/
            v7 -= 4; /*0x7c80be*/
            v6 += 4; /*0x7c80c1*/
            a1 = __ROL4__(v32, 8); /*0x7c80c4*/
            LOBYTE(v9) = v9 - 1; /*0x7c80c7*/
          }
          while ( (_BYTE)v9 ); /*0x7c80c9*/
        }
      }
    }
  }
  __writeeflags(v4); /*0x7c80e7*/
  return v34; /*0x7c80ef*/
}


// ==== 0x007C81DB  AudioCodec::Decode  this=AudioCodec  sig=csp ====
char *__cdecl AudioCodec_Decode(unsigned __int8 *a1, char *a2, int a3)
{
  char *v3; // edi
  unsigned __int8 *v4; // ebx
  unsigned int v5; // eax
  _WORD *v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  char v11; // al
  char *v12; // eax
  unsigned __int8 *v14; // ebx
  unsigned int v15; // eax
  _WORD *v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  char v21; // al
  char *v22; // [esp+Ch] [ebp-Ch]
  char *v23; // [esp+Ch] [ebp-Ch]
  unsigned int v24; // [esp+10h] [ebp-8h]
  unsigned int v25; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x7c81e6*/
  if ( *a1 ) /*0x7c81ef*/
  {
    v22 = &a2[a3]; /*0x7c81fe*/
    v4 = a1; /*0x7c8202*/
    while ( v22 != v3 && v22 - v3 >= 0 ) /*0x7c820b*/
    {
      v24 = v22 - v3; /*0x7c820d*/
      v5 = *v4; /*0x7c8214*/
      v6 = v4 + 1; /*0x7c8214*/
      if ( (v5 & 0x80u) != 0 ) /*0x7c8217*/
      {
        if ( (v5 & 0x40) != 0 ) /*0x7c823d*/
        {
          v9 = (v5 & 0x3F) + 3; /*0x7c8263*/
          if ( (_BYTE)v5 == 0xFE ) /*0x7c8268*/
          {
            v10 = (unsigned __int16)*v6; /*0x7c826e*/
            v11 = v4[3]; /*0x7c8272*/
            v4 += 4; /*0x7c8273*/
            if ( v10 > v24 ) /*0x7c8278*/
              v10 = v22 - v3; /*0x7c827a*/
            memset(v3, v11, v10); /*0x7c827d*/
            v3 += v10; /*0x7c827d*/
          }
          else
          {
            if ( (_BYTE)v5 == 0xFF ) /*0x7c8283*/
            {
              v5 = (unsigned __int16)*v6; /*0x7c8287*/
              v6 = v4 + 3; /*0x7c8287*/
              v9 = v5; /*0x7c8289*/
            }
            LOWORD(v5) = *v6; /*0x7c828b*/
            v4 = (unsigned __int8 *)(v6 + 1); /*0x7c828d*/
            v12 = &a2[v5]; /*0x7c828f*/
            if ( v9 > v24 ) /*0x7c8297*/
              v9 = v22 - v3; /*0x7c8299*/
            qmemcpy(v3, v12, v9); /*0x7c829c*/
            v3 += v9; /*0x7c829c*/
          }
        }
        else
        {
          if ( (_BYTE)v5 == 0x80 ) /*0x7c823f*/
            return (char *)(v3 - a2); /*0x7c8241*/
          v8 = v5 & 0x3F; /*0x7c8245*/
          if ( v8 > v24 ) /*0x7c824b*/
            v8 = v22 - v3; /*0x7c824d*/
          qmemcpy(v3, v6, v8); /*0x7c8250*/
          v3 += v8; /*0x7c8250*/
          v4 = (unsigned __int8 *)v6 + v8; /*0x7c8252*/
        }
      }
      else
      {
        BYTE1(v5) = v5 & 0xF; /*0x7c821b*/
        v7 = ((unsigned __int8)v5 >> 4) + 3; /*0x7c8225*/
        if ( v7 > v24 ) /*0x7c822b*/
          v7 = v22 - v3; /*0x7c822d*/
        LOBYTE(v5) = *(_BYTE *)v6; /*0x7c8230*/
        v4 += 2; /*0x7c8231*/
        qmemcpy(v3, &v3[-v5], v7); /*0x7c8237*/
        v3 += v7; /*0x7c8237*/
      }
    }
  }
  else
  {
    v23 = &a2[a3]; /*0x7c82b5*/
    v14 = a1 + 1; /*0x7c82b9*/
    while ( v23 != v3 ) /*0x7c82c0*/
    {
      v25 = v23 - v3; /*0x7c82c2*/
      v15 = *v14; /*0x7c82c9*/
      v16 = v14 + 1; /*0x7c82c9*/
      if ( (v15 & 0x80u) != 0 ) /*0x7c82cc*/
      {
        if ( (v15 & 0x40) != 0 ) /*0x7c82f2*/
        {
          v19 = (v15 & 0x3F) + 3; /*0x7c8317*/
          if ( (_BYTE)v15 == 0xFE ) /*0x7c831c*/
          {
            v20 = (unsigned __int16)*v16; /*0x7c8322*/
            v21 = v14[3]; /*0x7c8326*/
            v14 += 4; /*0x7c8327*/
            if ( v20 > v25 ) /*0x7c832c*/
              v20 = v23 - v3; /*0x7c832e*/
            memset(v3, v21, v20); /*0x7c8331*/
            v3 += v20; /*0x7c8331*/
          }
          else
          {
            if ( (_BYTE)v15 == 0xFF ) /*0x7c8337*/
            {
              v15 = (unsigned __int16)*v16; /*0x7c833b*/
              v16 = v14 + 3; /*0x7c833b*/
              v19 = v15; /*0x7c833d*/
            }
            v14 = (unsigned __int8 *)(v16 + 1); /*0x7c8341*/
            if ( v19 > v25 ) /*0x7c834a*/
              v19 = v23 - v3; /*0x7c834c*/
            LOWORD(v15) = *v16; /*0x7c833f*/
            qmemcpy(v3, &v3[-v15], v19); /*0x7c834f*/
            v3 += v19; /*0x7c834f*/
          }
        }
        else
        {
          if ( (_BYTE)v15 == 0x80 ) /*0x7c82f4*/
            return (char *)(v3 - a2); /*0x7c82f6*/
          v18 = v15 & 0x3F; /*0x7c82fa*/
          if ( v18 > v25 ) /*0x7c8300*/
            v18 = v23 - v3; /*0x7c8302*/
          qmemcpy(v3, v16, v18); /*0x7c8305*/
          v3 += v18; /*0x7c8305*/
          v14 = (unsigned __int8 *)v16 + v18; /*0x7c8307*/
        }
      }
      else
      {
        BYTE1(v15) = v15 & 0xF; /*0x7c82d0*/
        v17 = ((unsigned __int8)v15 >> 4) + 3; /*0x7c82da*/
        if ( v17 > v25 ) /*0x7c82e0*/
          v17 = v23 - v3; /*0x7c82e2*/
        LOBYTE(v15) = *(_BYTE *)v16; /*0x7c82e5*/
        v14 += 2; /*0x7c82e6*/
        qmemcpy(v3, &v3[-v15], v17); /*0x7c82ec*/
        v3 += v17; /*0x7c82ec*/
      }
    }
  }
  return (char *)(v3 - a2); /*0x7c835f*/
}


// ==== 0x007C8362  FindClose  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FindClose(HANDLE hFindFile)
{
  return __imp_FindClose(hFindFile);
}


// ==== 0x007C8368  FindNextFileA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
{
  return __imp_FindNextFileA(hFindFile, lpFindFileData);
}


// ==== 0x007C836E  FindFirstFileA  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
  return __imp_FindFirstFileA(lpFileName, lpFindFileData);
}


// ==== 0x007C8374  FormatMessageA  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall FormatMessageA(
        DWORD dwFlags,
        LPCVOID lpSource,
        DWORD dwMessageId,
        DWORD dwLanguageId,
        LPSTR lpBuffer,
        DWORD nSize,
        va_list *Arguments)
{
  return __imp_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}


// ==== 0x007C837A  GetLastError  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall GetLastError()
{
  return __imp_GetLastError();
}


// ==== 0x007C8380  SetThreadPriority  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetThreadPriority(HANDLE hThread, int nPriority)
{
  return __imp_SetThreadPriority(hThread, nPriority);
}


// ==== 0x007C8386  CreateThread  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall CreateThread(
        LPSECURITY_ATTRIBUTES lpThreadAttributes,
        SIZE_T dwStackSize,
        LPTHREAD_START_ROUTINE lpStartAddress,
        LPVOID lpParameter,
        DWORD dwCreationFlags,
        LPDWORD lpThreadId)
{
  return __imp_CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}


// ==== 0x007C838C  InitializeCriticalSection  this=-  sig=csp ====
// attributes: thunk
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_InitializeCriticalSection(lpCriticalSection); /*0x7c838c*/
}


// ==== 0x007C8392  Sleep  this=-  sig=csp ====
// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds); /*0x7c8392*/
}


// ==== 0x007C8398  LeaveCriticalSection  this=-  sig=csp ====
// attributes: thunk
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_LeaveCriticalSection(lpCriticalSection); /*0x7c8398*/
}


// ==== 0x007C839E  EnterCriticalSection  this=-  sig=csp ====
// attributes: thunk
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_EnterCriticalSection(lpCriticalSection); /*0x7c839e*/
}


// ==== 0x007C83A4  DeleteCriticalSection  this=-  sig=csp ====
// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection); /*0x7c83a4*/
}


// ==== 0x007C83AA  CloseHandle  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CloseHandle(HANDLE hObject)
{
  return __imp_CloseHandle(hObject);
}


// ==== 0x007C83B0  WaitForSingleObject  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
{
  return __imp_WaitForSingleObject(hHandle, dwMilliseconds);
}


// ==== 0x007C83B6  QueryPerformanceFrequency  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency)
{
  return __imp_QueryPerformanceFrequency(lpFrequency);
}


// ==== 0x007C83BC  QueryPerformanceCounter  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}


// ==== 0x007C83C2  GetCurrentThreadId  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}


// ==== 0x007C83C8  InterlockedDecrement  this=-  sig=csp ====
// attributes: thunk
LONG __stdcall InterlockedDecrement(volatile LONG *lpAddend)
{
  return __imp_InterlockedDecrement(lpAddend);
}


// ==== 0x007C83CE  InterlockedIncrement  this=-  sig=csp ====
// attributes: thunk
LONG __stdcall InterlockedIncrement(volatile LONG *lpAddend)
{
  return __imp_InterlockedIncrement(lpAddend);
}


// ==== 0x007C83D4  MultiByteToWideChar  this=-  sig=csp ====
// attributes: thunk
int __stdcall MultiByteToWideChar(
        UINT CodePage,
        DWORD dwFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  return __imp_MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}


// ==== 0x007C83DA  SetFilePointer  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
  return __imp_SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}


// ==== 0x007C83E0  CreateFileA  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall CreateFileA(
        LPCSTR lpFileName,
        DWORD dwDesiredAccess,
        DWORD dwShareMode,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        DWORD dwCreationDisposition,
        DWORD dwFlagsAndAttributes,
        HANDLE hTemplateFile)
{
  return __imp_CreateFileA(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           dwFlagsAndAttributes,
           hTemplateFile);
}


// ==== 0x007C83E6  DeviceIoControl  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall DeviceIoControl(
        HANDLE hDevice,
        DWORD dwIoControlCode,
        LPVOID lpInBuffer,
        DWORD nInBufferSize,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        LPDWORD lpBytesReturned,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_DeviceIoControl(
           hDevice,
           dwIoControlCode,
           lpInBuffer,
           nInBufferSize,
           lpOutBuffer,
           nOutBufferSize,
           lpBytesReturned,
           lpOverlapped);
}


// ==== 0x007C83EC  GetDriveTypeA  this=-  sig=csp ====
// attributes: thunk
UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName)
{
  return __imp_GetDriveTypeA(lpRootPathName);
}


// ==== 0x007C83F2  WideCharToMultiByte  this=-  sig=csp ====
// attributes: thunk
int __stdcall WideCharToMultiByte(
        UINT CodePage,
        DWORD dwFlags,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        LPCCH lpDefaultChar,
        LPBOOL lpUsedDefaultChar)
{
  return __imp_WideCharToMultiByte(
           CodePage,
           dwFlags,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           lpDefaultChar,
           lpUsedDefaultChar);
}


// ==== 0x007C83F8  GetDiskFreeSpaceA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetDiskFreeSpaceA(
        LPCSTR lpRootPathName,
        LPDWORD lpSectorsPerCluster,
        LPDWORD lpBytesPerSector,
        LPDWORD lpNumberOfFreeClusters,
        LPDWORD lpTotalNumberOfClusters)
{
  return __imp_GetDiskFreeSpaceA(
           lpRootPathName,
           lpSectorsPerCluster,
           lpBytesPerSector,
           lpNumberOfFreeClusters,
           lpTotalNumberOfClusters);
}


// ==== 0x007C83FE  GetProcAddress  this=-  sig=csp ====
// attributes: thunk
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress(hModule, lpProcName);
}


// ==== 0x007C8404  GetModuleHandleA  this=-  sig=csp ====
// attributes: thunk
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
  return __imp_GetModuleHandleA(lpModuleName);
}


// ==== 0x007C840A  CreateMutexA  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName)
{
  return __imp_CreateMutexA(lpMutexAttributes, bInitialOwner, lpName);
}


// ==== 0x007C8410  MapViewOfFileEx  this=-  sig=csp ====
// attributes: thunk
LPVOID __stdcall MapViewOfFileEx(
        HANDLE hFileMappingObject,
        DWORD dwDesiredAccess,
        DWORD dwFileOffsetHigh,
        DWORD dwFileOffsetLow,
        SIZE_T dwNumberOfBytesToMap,
        LPVOID lpBaseAddress)
{
  return __imp_MapViewOfFileEx(
           hFileMappingObject,
           dwDesiredAccess,
           dwFileOffsetHigh,
           dwFileOffsetLow,
           dwNumberOfBytesToMap,
           lpBaseAddress);
}


// ==== 0x007C8416  SetEvent  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetEvent(HANDLE hEvent)
{
  return __imp_SetEvent(hEvent);
}


// ==== 0x007C841C  OpenEventA  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall OpenEventA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName)
{
  return __imp_OpenEventA(dwDesiredAccess, bInheritHandle, lpName);
}


// ==== 0x007C8422  UnmapViewOfFile  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress)
{
  return __imp_UnmapViewOfFile(lpBaseAddress);
}


// ==== 0x007C8428  LockResource  this=-  sig=csp ====
// attributes: thunk
LPVOID __stdcall LockResource(HGLOBAL hResData)
{
  return __imp_LockResource(hResData);
}


// ==== 0x007C842E  LoadResource  this=-  sig=csp ====
// attributes: thunk
HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
{
  return __imp_LoadResource(hModule, hResInfo);
}


// ==== 0x007C8434  FindResourceA  this=-  sig=csp ====
// attributes: thunk
HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
{
  return __imp_FindResourceA(hModule, lpName, lpType);
}


// ==== 0x007C843A  GetVolumeInformationA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetVolumeInformationA(
        LPCSTR lpRootPathName,
        LPSTR lpVolumeNameBuffer,
        DWORD nVolumeNameSize,
        LPDWORD lpVolumeSerialNumber,
        LPDWORD lpMaximumComponentLength,
        LPDWORD lpFileSystemFlags,
        LPSTR lpFileSystemNameBuffer,
        DWORD nFileSystemNameSize)
{
  return __imp_GetVolumeInformationA(
           lpRootPathName,
           lpVolumeNameBuffer,
           nVolumeNameSize,
           lpVolumeSerialNumber,
           lpMaximumComponentLength,
           lpFileSystemFlags,
           lpFileSystemNameBuffer,
           nFileSystemNameSize);
}


// ==== 0x007C8440  FreeLibrary  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  return __imp_FreeLibrary(hLibModule);
}


// ==== 0x007C8446  LoadLibraryA  this=-  sig=csp ====
// attributes: thunk
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
{
  return __imp_LoadLibraryA(lpLibFileName);
}


// ==== 0x007C844C  FreeConsole  this=-  sig=ida-proto ====
// attributes: thunk
BOOL __stdcall FreeConsole()
{
  return __imp_FreeConsole();
}


// ==== 0x007C8452  AllocConsole  this=-  sig=ida-proto ====
// attributes: thunk
BOOL __stdcall AllocConsole()
{
  return __imp_AllocConsole();
}


// ==== 0x007C8458  ExitProcess  this=-  sig=csp ====
// attributes: thunk
void __stdcall __noreturn ExitProcess(UINT uExitCode)
{
  __imp_ExitProcess(uExitCode); /*0x7c8458*/
}


// ==== 0x007C845E  IsBadReadPtr  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall IsBadReadPtr(const void *lp, UINT_PTR ucb)
{
  return __imp_IsBadReadPtr(lp, ucb);
}


// ==== 0x007C8464  IsBadCodePtr  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall IsBadCodePtr(FARPROC lpfn)
{
  return __imp_IsBadCodePtr(lpfn);
}


// ==== 0x007C846A  lstrcatA  this=-  sig=csp ====
// attributes: thunk
LPSTR __stdcall lstrcatA(LPSTR lpString1, LPCSTR lpString2)
{
  return __imp_lstrcatA(lpString1, lpString2);
}


// ==== 0x007C8470  lstrlenA  this=-  sig=csp ====
// attributes: thunk
int __stdcall lstrlenA(LPCSTR lpString)
{
  return __imp_lstrlenA(lpString);
}


// ==== 0x007C8476  GetModuleFileNameA  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}


// ==== 0x007C847C  GetCurrentProcess  this=-  sig=ida-proto ====
// attributes: thunk
HANDLE __stdcall GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}


// ==== 0x007C8482  WriteFile  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall WriteFile(
        HANDLE hFile,
        LPCVOID lpBuffer,
        DWORD nNumberOfBytesToWrite,
        LPDWORD lpNumberOfBytesWritten,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}


// ==== 0x007C8488  FlushInstructionCache  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FlushInstructionCache(HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize)
{
  return __imp_FlushInstructionCache(hProcess, lpBaseAddress, dwSize);
}


// ==== 0x007C848E  VirtualProtect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
{
  return __imp_VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}


// ==== 0x007C8494  VirtualQuery  this=-  sig=csp ====
// attributes: thunk
SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)
{
  return __imp_VirtualQuery(lpAddress, lpBuffer, dwLength);
}


// ==== 0x007C849A  GetTickCount  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall GetTickCount()
{
  return __imp_GetTickCount();
}


// ==== 0x007C84A0  GetSystemTime  this=-  sig=csp ====
// attributes: thunk
void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)
{
  __imp_GetSystemTime(lpSystemTime); /*0x7c84a0*/
}


// ==== 0x007C84A6  GlobalMemoryStatus  this=-  sig=csp ====
// attributes: thunk
void __stdcall GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)
{
  __imp_GlobalMemoryStatus(lpBuffer); /*0x7c84a6*/
}


// ==== 0x007C84AC  CreateProcessA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CreateProcessA(
        LPCSTR lpApplicationName,
        LPSTR lpCommandLine,
        LPSECURITY_ATTRIBUTES lpProcessAttributes,
        LPSECURITY_ATTRIBUTES lpThreadAttributes,
        BOOL bInheritHandles,
        DWORD dwCreationFlags,
        LPVOID lpEnvironment,
        LPCSTR lpCurrentDirectory,
        LPSTARTUPINFOA lpStartupInfo,
        LPPROCESS_INFORMATION lpProcessInformation)
{
  return __imp_CreateProcessA(
           lpApplicationName,
           lpCommandLine,
           lpProcessAttributes,
           lpThreadAttributes,
           bInheritHandles,
           dwCreationFlags,
           lpEnvironment,
           lpCurrentDirectory,
           lpStartupInfo,
           lpProcessInformation);
}


// ==== 0x007C84B2  DeleteFileA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall DeleteFileA(LPCSTR lpFileName)
{
  return __imp_DeleteFileA(lpFileName);
}


// ==== 0x007C84B8  GetTempFileNameA  this=-  sig=csp ====
// attributes: thunk
UINT __stdcall GetTempFileNameA(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName)
{
  return __imp_GetTempFileNameA(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}


// ==== 0x007C84BE  GetWindowsDirectoryA  this=-  sig=csp ====
// attributes: thunk
UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize)
{
  return __imp_GetWindowsDirectoryA(lpBuffer, uSize);
}


// ==== 0x007C84C4  GetTimeFormatA  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetTimeFormatA(
        LCID Locale,
        DWORD dwFlags,
        const SYSTEMTIME *lpTime,
        LPCSTR lpFormat,
        LPSTR lpTimeStr,
        int cchTime)
{
  return __imp_GetTimeFormatA(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}


// ==== 0x007C84CA  GetDateFormatA  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetDateFormatA(
        LCID Locale,
        DWORD dwFlags,
        const SYSTEMTIME *lpDate,
        LPCSTR lpFormat,
        LPSTR lpDateStr,
        int cchDate)
{
  return __imp_GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}


// ==== 0x007C84D0  FileTimeToSystemTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FileTimeToSystemTime(const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime)
{
  return __imp_FileTimeToSystemTime(lpFileTime, lpSystemTime);
}


// ==== 0x007C84D6  FileTimeToLocalFileTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FileTimeToLocalFileTime(const FILETIME *lpFileTime, LPFILETIME lpLocalFileTime)
{
  return __imp_FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
}


// ==== 0x007C84DC  SystemTimeToFileTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SystemTimeToFileTime(const SYSTEMTIME *lpSystemTime, LPFILETIME lpFileTime)
{
  return __imp_SystemTimeToFileTime(lpSystemTime, lpFileTime);
}


// ==== 0x007C84E2  CompareFileTime  this=-  sig=csp ====
// attributes: thunk
LONG __stdcall CompareFileTime(const FILETIME *lpFileTime1, const FILETIME *lpFileTime2)
{
  return __imp_CompareFileTime(lpFileTime1, lpFileTime2);
}


// ==== 0x007C84E8  CopyFileA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, BOOL bFailIfExists)
{
  return __imp_CopyFileA(lpExistingFileName, lpNewFileName, bFailIfExists);
}


// ==== 0x007C84EE  CreateDirectoryA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
  return __imp_CreateDirectoryA(lpPathName, lpSecurityAttributes);
}


// ==== 0x007C84F4  MulDiv  this=-  sig=csp ====
// attributes: thunk
int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator)
{
  return __imp_MulDiv(nNumber, nNumerator, nDenominator);
}


// ==== 0x007C84FA  EscapeCommFunction  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall EscapeCommFunction(HANDLE hFile, DWORD dwFunc)
{
  return __imp_EscapeCommFunction(hFile, dwFunc);
}


// ==== 0x007C8500  ClearCommBreak  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ClearCommBreak(HANDLE hFile)
{
  return __imp_ClearCommBreak(hFile);
}


// ==== 0x007C8506  SetCommBreak  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetCommBreak(HANDLE hFile)
{
  return __imp_SetCommBreak(hFile);
}


// ==== 0x007C850C  ReadFile  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ReadFile(
        HANDLE hFile,
        LPVOID lpBuffer,
        DWORD nNumberOfBytesToRead,
        LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}


// ==== 0x007C8512  GetFileSize  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
{
  return __imp_GetFileSize(hFile, lpFileSizeHigh);
}


// ==== 0x007C8518  FileTimeToDosDateTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall FileTimeToDosDateTime(const FILETIME *lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
{
  return __imp_FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
}


// ==== 0x007C851E  GetFileInformationByHandle  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetFileInformationByHandle(HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation)
{
  return __imp_GetFileInformationByHandle(hFile, lpFileInformation);
}


// ==== 0x007C8524  SetFileTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetFileTime(
        HANDLE hFile,
        const FILETIME *lpCreationTime,
        const FILETIME *lpLastAccessTime,
        const FILETIME *lpLastWriteTime)
{
  return __imp_SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}


// ==== 0x007C852A  DosDateTimeToFileTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall DosDateTimeToFileTime(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime)
{
  return __imp_DosDateTimeToFileTime(wFatDate, wFatTime, lpFileTime);
}


// ==== 0x007C8530  GetStartupInfoA  this=-  sig=csp ====
// attributes: thunk
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
{
  __imp_GetStartupInfoA(lpStartupInfo); /*0x7c8530*/
}


// ==== 0x007C8536  TerminateProcess  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}


// ==== 0x007C853C  WaitForMultipleObjects  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall WaitForMultipleObjects(DWORD nCount, const HANDLE *lpHandles, BOOL bWaitAll, DWORD dwMilliseconds)
{
  return __imp_WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}


// ==== 0x007C8542  lstrcpyA  this=-  sig=csp ====
// attributes: thunk
LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
{
  return __imp_lstrcpyA(lpString1, lpString2);
}


// ==== 0x007C8548  SetUnhandledExceptionFilter  this=-  sig=csp ====
// attributes: thunk
LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
  return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}


// ==== 0x007C854E  SetCurrentDirectoryA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetCurrentDirectoryA(LPCSTR lpPathName)
{
  return __imp_SetCurrentDirectoryA(lpPathName);
}


// ==== 0x007C8554  OpenMutexA  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall OpenMutexA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName)
{
  return __imp_OpenMutexA(dwDesiredAccess, bInheritHandle, lpName);
}


// ==== 0x007C855A  GetFileTime  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetFileTime(
        HANDLE hFile,
        LPFILETIME lpCreationTime,
        LPFILETIME lpLastAccessTime,
        LPFILETIME lpLastWriteTime)
{
  return __imp_GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}


// ==== 0x007C8560  GetLogicalDriveStringsA  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetLogicalDriveStringsA(DWORD nBufferLength, LPSTR lpBuffer)
{
  return __imp_GetLogicalDriveStringsA(nBufferLength, lpBuffer);
}


// ==== 0x007C8566  ClearCommError  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ClearCommError(HANDLE hFile, LPDWORD lpErrors, LPCOMSTAT lpStat)
{
  return __imp_ClearCommError(hFile, lpErrors, lpStat);
}


// ==== 0x007C856C  SetCommTimeouts  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetCommTimeouts(HANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts)
{
  return __imp_SetCommTimeouts(hFile, lpCommTimeouts);
}


// ==== 0x007C8572  SetCommState  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetCommState(HANDLE hFile, LPDCB lpDCB)
{
  return __imp_SetCommState(hFile, lpDCB);
}


// ==== 0x007C8578  GetCommState  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetCommState(HANDLE hFile, LPDCB lpDCB)
{
  return __imp_GetCommState(hFile, lpDCB);
}


// ==== 0x007C857E  CreateEventA  this=-  sig=csp ====
// attributes: thunk
HANDLE __stdcall CreateEventA(
        LPSECURITY_ATTRIBUTES lpEventAttributes,
        BOOL bManualReset,
        BOOL bInitialState,
        LPCSTR lpName)
{
  return __imp_CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
}


// ==== 0x007C8584  PurgeComm  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall PurgeComm(HANDLE hFile, DWORD dwFlags)
{
  return __imp_PurgeComm(hFile, dwFlags);
}


// ==== 0x007C858A  SetupComm  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetupComm(HANDLE hFile, DWORD dwInQueue, DWORD dwOutQueue)
{
  return __imp_SetupComm(hFile, dwInQueue, dwOutQueue);
}


// ==== 0x007C8590  GetCommMask  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetCommMask(HANDLE hFile, LPDWORD lpEvtMask)
{
  return __imp_GetCommMask(hFile, lpEvtMask);
}


// ==== 0x007C8596  ResetEvent  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ResetEvent(HANDLE hEvent)
{
  return __imp_ResetEvent(hEvent);
}


// ==== 0x007C859C  GetCommModemStatus  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetCommModemStatus(HANDLE hFile, LPDWORD lpModemStat)
{
  return __imp_GetCommModemStatus(hFile, lpModemStat);
}


// ==== 0x007C85A2  GetOverlappedResult  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetOverlappedResult(
        HANDLE hFile,
        LPOVERLAPPED lpOverlapped,
        LPDWORD lpNumberOfBytesTransferred,
        BOOL bWait)
{
  return __imp_GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
}


// ==== 0x007C85A8  GetVersionExA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
{
  return __imp_GetVersionExA(lpVersionInformation);
}


// ==== 0x007C85AE  GetExitCodeProcess  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode)
{
  return __imp_GetExitCodeProcess(hProcess, lpExitCode);
}


// ==== 0x007C85B4  GetCurrentDirectoryA  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer)
{
  return __imp_GetCurrentDirectoryA(nBufferLength, lpBuffer);
}


// ==== 0x007C85BA  HeapDestroy  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall HeapDestroy(HANDLE hHeap)
{
  return __imp_HeapDestroy(hHeap);
}


// ==== 0x007C85C0  GetComputerNameA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetComputerNameA(LPSTR lpBuffer, LPDWORD nSize)
{
  return __imp_GetComputerNameA(lpBuffer, nSize);
}


// ==== 0x007C85C6  ReleaseMutex  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ReleaseMutex(HANDLE hMutex)
{
  return __imp_ReleaseMutex(hMutex);
}


// ==== 0x007C85CC  GetClientRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
{
  return __imp_GetClientRect(hWnd, lpRect);
}


// ==== 0x007C85D2  DispatchMessageA  this=-  sig=csp ====
// attributes: thunk
LRESULT __stdcall DispatchMessageA(const MSG *lpMsg)
{
  return __imp_DispatchMessageA(lpMsg);
}


// ==== 0x007C85D8  TranslateMessage  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall TranslateMessage(const MSG *lpMsg)
{
  return __imp_TranslateMessage(lpMsg);
}


// ==== 0x007C85DE  ClientToScreen  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
{
  return __imp_ClientToScreen(hWnd, lpPoint);
}


// ==== 0x007C85E4  SetRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom)
{
  return __imp_SetRect(lprc, xLeft, yTop, xRight, yBottom);
}


// ==== 0x007C85EA  wsprintfA  this=-  sig=ida-proto ====
// attributes: thunk
BOOL __stdcall PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_PostMessageA(hWnd, Msg, wParam, lParam);
}


// ==== 0x007C85F0  PostMessageA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_PostMessageA(hWnd, Msg, wParam, lParam);
}


// ==== 0x007C85F6  GetDlgItem  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall GetDlgItem(HWND hDlg, int nIDDlgItem)
{
  return __imp_GetDlgItem(hDlg, nIDDlgItem);
}


// ==== 0x007C85FC  SendMessageA  this=-  sig=csp ====
// attributes: thunk
LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_SendMessageA(hWnd, Msg, wParam, lParam);
}


// ==== 0x007C8602  EnableWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable)
{
  return __imp_EnableWindow(hWnd, bEnable);
}


// ==== 0x007C8608  InvalidateRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall InvalidateRect(HWND hWnd, const RECT *lpRect, BOOL bErase)
{
  return __imp_InvalidateRect(hWnd, lpRect, bErase);
}


// ==== 0x007C860E  ShowWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow)
{
  return __imp_ShowWindow(hWnd, nCmdShow);
}


// ==== 0x007C8614  SetTimer  this=-  sig=csp ====
// attributes: thunk
UINT_PTR __stdcall SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc)
{
  return __imp_SetTimer(hWnd, nIDEvent, uElapse, lpTimerFunc);
}


// ==== 0x007C861A  SendDlgItemMessageA  this=-  sig=csp ====
// attributes: thunk
LRESULT __stdcall SendDlgItemMessageA(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_SendDlgItemMessageA(hDlg, nIDDlgItem, Msg, wParam, lParam);
}


// ==== 0x007C8620  KillTimer  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent)
{
  return __imp_KillTimer(hWnd, uIDEvent);
}


// ==== 0x007C8626  ValidateRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ValidateRect(HWND hWnd, const RECT *lpRect)
{
  return __imp_ValidateRect(hWnd, lpRect);
}


// ==== 0x007C862C  GetWindowLongA  this=-  sig=csp ====
// attributes: thunk
LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
{
  return __imp_GetWindowLongA(hWnd, nIndex);
}


// ==== 0x007C8632  SetWindowLongA  this=-  sig=csp ====
// attributes: thunk
LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
{
  return __imp_SetWindowLongA(hWnd, nIndex, dwNewLong);
}


// ==== 0x007C8638  UpdateWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall UpdateWindow(HWND hWnd)
{
  return __imp_UpdateWindow(hWnd);
}


// ==== 0x007C863E  MessageBoxIndirectA  this=-  sig=csp ====
// attributes: thunk
int __stdcall MessageBoxIndirectA(const MSGBOXPARAMSA *lpmbp)
{
  return __imp_MessageBoxIndirectA(lpmbp);
}


// ==== 0x007C8644  PeekMessageA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
  return __imp_PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}


// ==== 0x007C864A  MessageBoxA  this=-  sig=csp ====
// attributes: thunk
int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
  return __imp_MessageBoxA(hWnd, lpText, lpCaption, uType);
}


// ==== 0x007C8650  ReleaseDC  this=-  sig=csp ====
// attributes: thunk
int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
{
  return __imp_ReleaseDC(hWnd, hDC);
}


// ==== 0x007C8656  GetDC  this=-  sig=csp ====
// attributes: thunk
HDC __stdcall GetDC(HWND hWnd)
{
  return __imp_GetDC(hWnd);
}


// ==== 0x007C865C  CloseWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CloseWindow(HWND hWnd)
{
  return __imp_CloseWindow(hWnd);
}


// ==== 0x007C8662  DefWindowProcA  this=-  sig=csp ====
// attributes: thunk
LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_DefWindowProcA(hWnd, Msg, wParam, lParam);
}


// ==== 0x007C8668  GetActiveWindow  this=-  sig=ida-proto ====
// attributes: thunk
HWND __stdcall GetActiveWindow()
{
  return __imp_GetActiveWindow();
}


// ==== 0x007C866E  EndDialog  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult)
{
  return __imp_EndDialog(hDlg, nResult);
}


// ==== 0x007C8674  SetFocus  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall SetFocus(HWND hWnd)
{
  return __imp_SetFocus(hWnd);
}


// ==== 0x007C867A  SetDlgItemTextA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString)
{
  return __imp_SetDlgItemTextA(hDlg, nIDDlgItem, lpString);
}


// ==== 0x007C8680  DialogBoxParamA  this=-  sig=csp ====
// attributes: thunk
INT_PTR __stdcall DialogBoxParamA(
        HINSTANCE hInstance,
        LPCSTR lpTemplateName,
        HWND hWndParent,
        DLGPROC lpDialogFunc,
        LPARAM dwInitParam)
{
  return __imp_DialogBoxParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}


// ==== 0x007C8686  DialogBoxIndirectParamA  this=-  sig=csp ====
// attributes: thunk
INT_PTR __stdcall DialogBoxIndirectParamA(
        HINSTANCE hInstance,
        LPCDLGTEMPLATEA hDialogTemplate,
        HWND hWndParent,
        DLGPROC lpDialogFunc,
        LPARAM dwInitParam)
{
  return __imp_DialogBoxIndirectParamA(hInstance, hDialogTemplate, hWndParent, lpDialogFunc, dwInitParam);
}


// ==== 0x007C868C  ShowCursor  this=-  sig=csp ====
// attributes: thunk
int __stdcall ShowCursor(BOOL bShow)
{
  return __imp_ShowCursor(bShow);
}


// ==== 0x007C8692  SetWindowPos  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags)
{
  return __imp_SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags);
}


// ==== 0x007C8698  DestroyWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall DestroyWindow(HWND hWnd)
{
  return __imp_DestroyWindow(hWnd);
}


// ==== 0x007C869E  ReleaseCapture  this=-  sig=ida-proto ====
// attributes: thunk
BOOL __stdcall ReleaseCapture()
{
  return __imp_ReleaseCapture();
}


// ==== 0x007C86A4  GetCapture  this=-  sig=ida-proto ====
// attributes: thunk
HWND __stdcall GetCapture()
{
  return __imp_GetCapture();
}


// ==== 0x007C86AA  SetCapture  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall SetCapture(HWND hWnd)
{
  return __imp_SetCapture(hWnd);
}


// ==== 0x007C86B0  GetDlgCtrlID  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetDlgCtrlID(HWND hWnd)
{
  return __imp_GetDlgCtrlID(hWnd);
}


// ==== 0x007C86B6  ChildWindowFromPointEx  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall ChildWindowFromPointEx(HWND hwnd, POINT pt, UINT flags)
{
  return __imp_ChildWindowFromPointEx(hwnd, pt, flags);
}


// ==== 0x007C86BC  GetWindowRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
{
  return __imp_GetWindowRect(hWnd, lpRect);
}


// ==== 0x007C86C2  GetCursorPos  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetCursorPos(LPPOINT lpPoint)
{
  return __imp_GetCursorPos(lpPoint);
}


// ==== 0x007C86C8  GetKeyState  this=-  sig=csp ====
// attributes: thunk
SHORT __stdcall GetKeyState(int nVirtKey)
{
  return __imp_GetKeyState(nVirtKey);
}


// ==== 0x007C86CE  GetAsyncKeyState  this=-  sig=csp ====
// attributes: thunk
SHORT __stdcall GetAsyncKeyState(int vKey)
{
  return __imp_GetAsyncKeyState(vKey);
}


// ==== 0x007C86D4  ToAscii  this=-  sig=csp ====
// attributes: thunk
int __stdcall ToAscii(UINT uVirtKey, UINT uScanCode, const BYTE *lpKeyState, LPWORD lpChar, UINT uFlags)
{
  return __imp_ToAscii(uVirtKey, uScanCode, lpKeyState, lpChar, uFlags);
}


// ==== 0x007C86DA  MapVirtualKeyA  this=-  sig=csp ====
// attributes: thunk
UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType)
{
  return __imp_MapVirtualKeyA(uCode, uMapType);
}


// ==== 0x007C86E0  GetSystemMetrics  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetSystemMetrics(int nIndex)
{
  return __imp_GetSystemMetrics(nIndex);
}


// ==== 0x007C86E6  MoveWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint)
{
  return __imp_MoveWindow(hWnd, X, Y, nWidth, nHeight, bRepaint);
}


// ==== 0x007C86EC  AdjustWindowRectEx  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect, DWORD dwStyle, BOOL bMenu, DWORD dwExStyle)
{
  return __imp_AdjustWindowRectEx(lpRect, dwStyle, bMenu, dwExStyle);
}


// ==== 0x007C86F2  GetMenu  this=-  sig=csp ====
// attributes: thunk
HMENU __stdcall GetMenu(HWND hWnd)
{
  return __imp_GetMenu(hWnd);
}


// ==== 0x007C86F8  AdjustWindowRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall AdjustWindowRect(LPRECT lpRect, DWORD dwStyle, BOOL bMenu)
{
  return __imp_AdjustWindowRect(lpRect, dwStyle, bMenu);
}


// ==== 0x007C86FE  GetSysColor  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetSysColor(int nIndex)
{
  return __imp_GetSysColor(nIndex);
}


// ==== 0x007C8704  CreateDialogParamA  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall CreateDialogParamA(
        HINSTANCE hInstance,
        LPCSTR lpTemplateName,
        HWND hWndParent,
        DLGPROC lpDialogFunc,
        LPARAM dwInitParam)
{
  return __imp_CreateDialogParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}


// ==== 0x007C870A  EndPaint  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall EndPaint(HWND hWnd, const PAINTSTRUCT *lpPaint)
{
  return __imp_EndPaint(hWnd, lpPaint);
}


// ==== 0x007C8710  BeginPaint  this=-  sig=csp ====
// attributes: thunk
HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
{
  return __imp_BeginPaint(hWnd, lpPaint);
}


// ==== 0x007C8716  CharToOemBuffA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CharToOemBuffA(LPCSTR lpszSrc, LPSTR lpszDst, DWORD cchDstLength)
{
  return __imp_CharToOemBuffA(lpszSrc, lpszDst, cchDstLength);
}


// ==== 0x007C871C  TranslateAcceleratorA  this=-  sig=csp ====
// attributes: thunk
int __stdcall TranslateAcceleratorA(HWND hWnd, HACCEL hAccTable, LPMSG lpMsg)
{
  return __imp_TranslateAcceleratorA(hWnd, hAccTable, lpMsg);
}


// ==== 0x007C8722  IsDialogMessageA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall IsDialogMessageA(HWND hDlg, LPMSG lpMsg)
{
  return __imp_IsDialogMessageA(hDlg, lpMsg);
}


// ==== 0x007C8728  GetWindowTextA  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
{
  return __imp_GetWindowTextA(hWnd, lpString, nMaxCount);
}


// ==== 0x007C872E  IsWindowEnabled  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall IsWindowEnabled(HWND hWnd)
{
  return __imp_IsWindowEnabled(hWnd);
}


// ==== 0x007C8734  GetNextDlgTabItem  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall GetNextDlgTabItem(HWND hDlg, HWND hCtl, BOOL bPrevious)
{
  return __imp_GetNextDlgTabItem(hDlg, hCtl, bPrevious);
}


// ==== 0x007C873A  GetParent  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall GetParent(HWND hWnd)
{
  return __imp_GetParent(hWnd);
}


// ==== 0x007C8740  GetClassNameA  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)
{
  return __imp_GetClassNameA(hWnd, lpClassName, nMaxCount);
}


// ==== 0x007C8746  EnumChildWindows  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall EnumChildWindows(HWND hWndParent, WNDENUMPROC lpEnumFunc, LPARAM lParam)
{
  return __imp_EnumChildWindows(hWndParent, lpEnumFunc, lParam);
}


// ==== 0x007C874C  IsWindowVisible  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall IsWindowVisible(HWND hWnd)
{
  return __imp_IsWindowVisible(hWnd);
}


// ==== 0x007C8752  SetForegroundWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetForegroundWindow(HWND hWnd)
{
  return __imp_SetForegroundWindow(hWnd);
}


// ==== 0x007C8758  RegisterClassA  this=-  sig=csp ====
// attributes: thunk
ATOM __stdcall RegisterClassA(const WNDCLASSA *lpWndClass)
{
  return __imp_RegisterClassA(lpWndClass);
}


// ==== 0x007C875E  CreateWindowExA  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall CreateWindowExA(
        DWORD dwExStyle,
        LPCSTR lpClassName,
        LPCSTR lpWindowName,
        DWORD dwStyle,
        int X,
        int Y,
        int nWidth,
        int nHeight,
        HWND hWndParent,
        HMENU hMenu,
        HINSTANCE hInstance,
        LPVOID lpParam)
{
  return __imp_CreateWindowExA(
           dwExStyle,
           lpClassName,
           lpWindowName,
           dwStyle,
           X,
           Y,
           nWidth,
           nHeight,
           hWndParent,
           hMenu,
           hInstance,
           lpParam);
}


// ==== 0x007C8764  CallWindowProcA  this=-  sig=csp ====
// attributes: thunk
LRESULT __stdcall CallWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_CallWindowProcA(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
}


// ==== 0x007C876A  BringWindowToTop  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall BringWindowToTop(HWND hWnd)
{
  return __imp_BringWindowToTop(hWnd);
}


// ==== 0x007C8770  GetWindow  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
{
  return __imp_GetWindow(hWnd, uCmd);
}


// ==== 0x007C8776  IntersectRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall IntersectRect(LPRECT lprcDst, const RECT *lprcSrc1, const RECT *lprcSrc2)
{
  return __imp_IntersectRect(lprcDst, lprcSrc1, lprcSrc2);
}


// ==== 0x007C877C  WindowFromPoint  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall WindowFromPoint(POINT Point)
{
  return __imp_WindowFromPoint(Point);
}


// ==== 0x007C8782  GetUpdateRect  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetUpdateRect(HWND hWnd, LPRECT lpRect, BOOL bErase)
{
  return __imp_GetUpdateRect(hWnd, lpRect, bErase);
}


// ==== 0x007C8788  GetFocus  this=-  sig=ida-proto ====
// attributes: thunk
HWND __stdcall GetFocus()
{
  return __imp_GetFocus();
}


// ==== 0x007C878E  LockWindowUpdate  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall LockWindowUpdate(HWND hWndLock)
{
  return __imp_LockWindowUpdate(hWndLock);
}


// ==== 0x007C8794  ScreenToClient  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
{
  return __imp_ScreenToClient(hWnd, lpPoint);
}


// ==== 0x007C879A  GetKeyNameTextA  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize)
{
  return __imp_GetKeyNameTextA(lParam, lpString, cchSize);
}


// ==== 0x007C87A0  CreateDialogIndirectParamA  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall CreateDialogIndirectParamA(
        HINSTANCE hInstance,
        LPCDLGTEMPLATEA lpTemplate,
        HWND hWndParent,
        DLGPROC lpDialogFunc,
        LPARAM dwInitParam)
{
  return __imp_CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, dwInitParam);
}


// ==== 0x007C87A6  SetCursorPos  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetCursorPos(int X, int Y)
{
  return __imp_SetCursorPos(X, Y);
}


// ==== 0x007C87AC  FindWindowA  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
{
  return __imp_FindWindowA(lpClassName, lpWindowName);
}


// ==== 0x007C87B2  PostQuitMessage  this=-  sig=csp ====
// attributes: thunk
void __stdcall PostQuitMessage(int nExitCode)
{
  __imp_PostQuitMessage(nExitCode); /*0x7c87b2*/
}


// ==== 0x007C87B8  SetCursor  this=-  sig=csp ====
// attributes: thunk
HCURSOR __stdcall SetCursor(HCURSOR hCursor)
{
  return __imp_SetCursor(hCursor);
}


// ==== 0x007C87BE  LoadCursorA  this=-  sig=csp ====
// attributes: thunk
HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)
{
  return __imp_LoadCursorA(hInstance, lpCursorName);
}


// ==== 0x007C87C4  ChildWindowFromPoint  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall ChildWindowFromPoint(HWND hWndParent, POINT Point)
{
  return __imp_ChildWindowFromPoint(hWndParent, Point);
}


// ==== 0x007C87CA  WinHelpA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall WinHelpA(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData)
{
  return __imp_WinHelpA(hWndMain, lpszHelp, uCommand, dwData);
}


// ==== 0x007C87D0  GetWindowContextHelpId  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetWindowContextHelpId(HWND a1)
{
  return __imp_GetWindowContextHelpId(a1);
}


// ==== 0x007C87D6  RedrawWindow  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall RedrawWindow(HWND hWnd, const RECT *lprcUpdate, HRGN hrgnUpdate, UINT flags)
{
  return __imp_RedrawWindow(hWnd, lprcUpdate, hrgnUpdate, flags);
}


// ==== 0x007C87DC  SetActiveWindow  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall SetActiveWindow(HWND hWnd)
{
  return __imp_SetActiveWindow(hWnd);
}


// ==== 0x007C87E2  RegisterHotKey  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall RegisterHotKey(HWND hWnd, int id, UINT fsModifiers, UINT vk)
{
  return __imp_RegisterHotKey(hWnd, id, fsModifiers, vk);
}


// ==== 0x007C87E8  LoadIconA  this=-  sig=csp ====
// attributes: thunk
HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)
{
  return __imp_LoadIconA(hInstance, lpIconName);
}


// ==== 0x007C87EE  GetForegroundWindow  this=-  sig=ida-proto ====
// attributes: thunk
HWND __stdcall GetForegroundWindow()
{
  return __imp_GetForegroundWindow();
}


// ==== 0x007C87F4  GetTopWindow  this=-  sig=csp ====
// attributes: thunk
HWND __stdcall GetTopWindow(HWND hWnd)
{
  return __imp_GetTopWindow(hWnd);
}


// ==== 0x007C87FA  WaitForInputIdle  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall WaitForInputIdle(HANDLE hProcess, DWORD dwMilliseconds)
{
  return __imp_WaitForInputIdle(hProcess, dwMilliseconds);
}


// ==== 0x007C8800  CheckDlgButton  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck)
{
  return __imp_CheckDlgButton(hDlg, nIDButton, uCheck);
}


// ==== 0x007C8806  IsDlgButtonChecked  this=-  sig=csp ====
// attributes: thunk
UINT __stdcall IsDlgButtonChecked(HWND hDlg, int nIDButton)
{
  return __imp_IsDlgButtonChecked(hDlg, nIDButton);
}


// ==== 0x007C880C  CreateDIBSection  this=-  sig=csp ====
// attributes: thunk
HBITMAP __stdcall CreateDIBSection(
        HDC hdc,
        const BITMAPINFO *pbmi,
        UINT usage,
        void **ppvBits,
        HANDLE hSection,
        DWORD offset)
{
  return __imp_CreateDIBSection(hdc, pbmi, usage, ppvBits, hSection, offset);
}


// ==== 0x007C8812  DeleteObject  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall DeleteObject(HGDIOBJ ho)
{
  return __imp_DeleteObject(ho);
}


// ==== 0x007C8818  GetTextMetricsA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)
{
  return __imp_GetTextMetricsA(hdc, lptm);
}


// ==== 0x007C881E  SelectObject  this=-  sig=csp ====
// attributes: thunk
HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
{
  return __imp_SelectObject(hdc, h);
}


// ==== 0x007C8824  CreateFontIndirectA  this=-  sig=csp ====
// attributes: thunk
HFONT __stdcall CreateFontIndirectA(const LOGFONTA *lplf)
{
  return __imp_CreateFontIndirectA(lplf);
}


// ==== 0x007C882A  GetDeviceCaps  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetDeviceCaps(HDC hdc, int index)
{
  return __imp_GetDeviceCaps(hdc, index);
}


// ==== 0x007C8830  TextOutA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c)
{
  return __imp_TextOutA(hdc, x, y, lpString, c);
}


// ==== 0x007C8836  SetTextColor  this=-  sig=csp ====
// attributes: thunk
COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
{
  return __imp_SetTextColor(hdc, color);
}


// ==== 0x007C883C  SetBkColor  this=-  sig=csp ====
// attributes: thunk
COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
{
  return __imp_SetBkColor(hdc, color);
}


// ==== 0x007C8842  SetBkMode  this=-  sig=csp ====
// attributes: thunk
int __stdcall SetBkMode(HDC hdc, int mode)
{
  return __imp_SetBkMode(hdc, mode);
}


// ==== 0x007C8848  CreateSolidBrush  this=-  sig=csp ====
// attributes: thunk
HBRUSH __stdcall CreateSolidBrush(COLORREF color)
{
  return __imp_CreateSolidBrush(color);
}


// ==== 0x007C884E  GetTextColor  this=-  sig=csp ====
// attributes: thunk
COLORREF __stdcall GetTextColor(HDC hdc)
{
  return __imp_GetTextColor(hdc);
}


// ==== 0x007C8854  GetBkColor  this=-  sig=csp ====
// attributes: thunk
COLORREF __stdcall GetBkColor(HDC hdc)
{
  return __imp_GetBkColor(hdc);
}


// ==== 0x007C885A  GetBkMode  this=-  sig=csp ====
// attributes: thunk
int __stdcall GetBkMode(HDC hdc)
{
  return __imp_GetBkMode(hdc);
}


// ==== 0x007C8860  GetStockObject  this=-  sig=csp ====
// attributes: thunk
HGDIOBJ __stdcall GetStockObject(int i)
{
  return __imp_GetStockObject(i);
}


// ==== 0x007C8866  RestoreDC  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall RestoreDC(HDC hdc, int nSavedDC)
{
  return __imp_RestoreDC(hdc, nSavedDC);
}


// ==== 0x007C886C  DPtoLP  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall DPtoLP(HDC hdc, LPPOINT lppt, int c)
{
  return __imp_DPtoLP(hdc, lppt, c);
}


// ==== 0x007C8872  SetWindowOrgEx  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
{
  return __imp_SetWindowOrgEx(hdc, x, y, lppt);
}


// ==== 0x007C8878  SetViewportOrgEx  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall SetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
{
  return __imp_SetViewportOrgEx(hdc, x, y, lppt);
}


// ==== 0x007C887E  ModifyWorldTransform  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ModifyWorldTransform(HDC hdc, const XFORM *lpxf, DWORD mode)
{
  return __imp_ModifyWorldTransform(hdc, lpxf, mode);
}


// ==== 0x007C8884  SetGraphicsMode  this=-  sig=csp ====
// attributes: thunk
int __stdcall SetGraphicsMode(HDC hdc, int iMode)
{
  return __imp_SetGraphicsMode(hdc, iMode);
}


// ==== 0x007C888A  SaveDC  this=-  sig=csp ====
// attributes: thunk
int __stdcall SaveDC(HDC hdc)
{
  return __imp_SaveDC(hdc);
}


// ==== 0x007C8890  RegCloseKey  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegCloseKey(HKEY hKey)
{
  return __imp_RegCloseKey(hKey);
}


// ==== 0x007C8896  RegQueryValueExA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegQueryValueExA(
        HKEY hKey,
        LPCSTR lpValueName,
        LPDWORD lpReserved,
        LPDWORD lpType,
        LPBYTE lpData,
        LPDWORD lpcbData)
{
  return __imp_RegQueryValueExA(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}


// ==== 0x007C889C  RegOpenKeyExA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult)
{
  return __imp_RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult);
}


// ==== 0x007C88A2  RegDeleteValueA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegDeleteValueA(HKEY hKey, LPCSTR lpValueName)
{
  return __imp_RegDeleteValueA(hKey, lpValueName);
}


// ==== 0x007C88A8  RegSetValueExA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegSetValueExA(
        HKEY hKey,
        LPCSTR lpValueName,
        DWORD Reserved,
        DWORD dwType,
        const BYTE *lpData,
        DWORD cbData)
{
  return __imp_RegSetValueExA(hKey, lpValueName, Reserved, dwType, lpData, cbData);
}


// ==== 0x007C88AE  RegCreateKeyExA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegCreateKeyExA(
        HKEY hKey,
        LPCSTR lpSubKey,
        DWORD Reserved,
        LPSTR lpClass,
        DWORD dwOptions,
        REGSAM samDesired,
        const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        PHKEY phkResult,
        LPDWORD lpdwDisposition)
{
  return __imp_RegCreateKeyExA(
           hKey,
           lpSubKey,
           Reserved,
           lpClass,
           dwOptions,
           samDesired,
           lpSecurityAttributes,
           phkResult,
           lpdwDisposition);
}


// ==== 0x007C88B4  RegEnumKeyExA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegEnumKeyExA(
        HKEY hKey,
        DWORD dwIndex,
        LPSTR lpName,
        LPDWORD lpcchName,
        LPDWORD lpReserved,
        LPSTR lpClass,
        LPDWORD lpcchClass,
        PFILETIME lpftLastWriteTime)
{
  return __imp_RegEnumKeyExA(hKey, dwIndex, lpName, lpcchName, lpReserved, lpClass, lpcchClass, lpftLastWriteTime);
}


// ==== 0x007C88BA  RegDeleteKeyA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegDeleteKeyA(HKEY hKey, LPCSTR lpSubKey)
{
  return __imp_RegDeleteKeyA(hKey, lpSubKey);
}


// ==== 0x007C88C0  RegQueryInfoKeyA  this=-  sig=csp ====
// attributes: thunk
LSTATUS __stdcall RegQueryInfoKeyA(
        HKEY hKey,
        LPSTR lpClass,
        LPDWORD lpcchClass,
        LPDWORD lpReserved,
        LPDWORD lpcSubKeys,
        LPDWORD lpcbMaxSubKeyLen,
        LPDWORD lpcbMaxClassLen,
        LPDWORD lpcValues,
        LPDWORD lpcbMaxValueNameLen,
        LPDWORD lpcbMaxValueLen,
        LPDWORD lpcbSecurityDescriptor,
        PFILETIME lpftLastWriteTime)
{
  return __imp_RegQueryInfoKeyA(
           hKey,
           lpClass,
           lpcchClass,
           lpReserved,
           lpcSubKeys,
           lpcbMaxSubKeyLen,
           lpcbMaxClassLen,
           lpcValues,
           lpcbMaxValueNameLen,
           lpcbMaxValueLen,
           lpcbSecurityDescriptor,
           lpftLastWriteTime);
}


// ==== 0x007C88C6  FindExecutableA  this=-  sig=csp ====
// attributes: thunk
HINSTANCE __stdcall FindExecutableA(LPCSTR lpFile, LPCSTR lpDirectory, LPSTR lpResult)
{
  return __imp_FindExecutableA(lpFile, lpDirectory, lpResult);
}


// ==== 0x007C88CC  OleRun  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall OleRun(LPUNKNOWN pUnknown)
{
  return __imp_OleRun(pUnknown);
}


// ==== 0x007C88D2  CoCreateInstance  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall CoCreateInstance(
        const IID *const rclsid,
        LPUNKNOWN pUnkOuter,
        DWORD dwClsContext,
        const IID *const riid,
        LPVOID *ppv)
{
  return __imp_CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}


// ==== 0x007C88D8  OleLoadFromStream  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall OleLoadFromStream(LPSTREAM pStm, const IID *const iidInterface, LPVOID *ppvObj)
{
  return __imp_OleLoadFromStream(pStm, iidInterface, ppvObj);
}


// ==== 0x007C88DE  OleSaveToStream  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall OleSaveToStream(LPPERSISTSTREAM pPStm, LPSTREAM pStm)
{
  return __imp_OleSaveToStream(pPStm, pStm);
}


// ==== 0x007C88E4  CLSIDFromString  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall CLSIDFromString(LPCOLESTR lpsz, LPCLSID pclsid)
{
  return __imp_CLSIDFromString(lpsz, pclsid);
}


// ==== 0x007C88EA  StringFromCLSID  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall StringFromCLSID(const IID *const rclsid, LPOLESTR *lplpsz)
{
  return __imp_StringFromCLSID(rclsid, lplpsz);
}


// ==== 0x007C88F0  CoFileTimeNow  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall CoFileTimeNow(FILETIME *lpFileTime)
{
  return __imp_CoFileTimeNow(lpFileTime);
}


// ==== 0x007C88F6  StgCreateDocfile  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall StgCreateDocfile(const WCHAR *pwcsName, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen)
{
  return __imp_StgCreateDocfile(pwcsName, grfMode, reserved, ppstgOpen);
}


// ==== 0x007C88FC  StgOpenStorage  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall StgOpenStorage(
        const WCHAR *pwcsName,
        IStorage *pstgPriority,
        DWORD grfMode,
        SNB snbExclude,
        DWORD reserved,
        IStorage **ppstgOpen)
{
  return __imp_StgOpenStorage(pwcsName, pstgPriority, grfMode, snbExclude, reserved, ppstgOpen);
}


// ==== 0x007C8902  StringFromGUID2  this=-  sig=csp ====
// attributes: thunk
int __stdcall StringFromGUID2(const GUID *const rguid, LPOLESTR lpsz, int cchMax)
{
  return __imp_StringFromGUID2(rguid, lpsz, cchMax);
}


// ==== 0x007C8908  CoDisconnectObject  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall CoDisconnectObject(LPUNKNOWN pUnk, DWORD dwReserved)
{
  return __imp_CoDisconnectObject(pUnk, dwReserved);
}


// ==== 0x007C890E  CoRegisterClassObject  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall CoRegisterClassObject(
        const IID *const rclsid,
        LPUNKNOWN pUnk,
        DWORD dwClsContext,
        DWORD flags,
        LPDWORD lpdwRegister)
{
  return __imp_CoRegisterClassObject(rclsid, pUnk, dwClsContext, flags, lpdwRegister);
}


// ==== 0x007C8914  OleInitialize  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall OleInitialize(LPVOID pvReserved)
{
  return __imp_OleInitialize(pvReserved);
}


// ==== 0x007C891A  OleUninitialize::0  this=OleUninitialize  sig=ida-proto ====
// attributes: thunk
void __stdcall OleUninitialize::0()
{
  OleUninitialize(); /*0x7c891a*/
}


// ==== 0x007C8920  CoRevokeClassObject  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall CoRevokeClassObject(DWORD dwRegister)
{
  return __imp_CoRevokeClassObject(dwRegister);
}


// ==== 0x007C8926  SysAllocString  this=-  sig=csp ====
// attributes: thunk
BSTR __stdcall SysAllocString(const OLECHAR *psz)
{
  return __imp_SysAllocString(psz);
}


// ==== 0x007C892C  SysFreeString  this=-  sig=csp ====
// attributes: thunk
void __stdcall SysFreeString(BSTR bstrString)
{
  __imp_SysFreeString(bstrString); /*0x7c892c*/
}


// ==== 0x007C8932  LoadTypeLib  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall LoadTypeLib(LPCOLESTR szFile, ITypeLib **pptlib)
{
  return __imp_LoadTypeLib(szFile, pptlib);
}


// ==== 0x007C8938  RevokeActiveObject  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall RevokeActiveObject(DWORD dwRegister, void *pvReserved)
{
  return __imp_RevokeActiveObject(dwRegister, pvReserved);
}


// ==== 0x007C893E  RegisterActiveObject  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall RegisterActiveObject(IUnknown *punk, const IID *const rclsid, DWORD dwFlags, DWORD *pdwRegister)
{
  return __imp_RegisterActiveObject(punk, rclsid, dwFlags, pdwRegister);
}


// ==== 0x007C8944  _1timeGetTime  this=-  sig=ida-proto ====
// attributes: thunk
DWORD __stdcall 1timeGetTime()
{
  return timeGetTime();
}


// ==== 0x007C894A  timeEndPeriod  this=-  sig=csp ====
// attributes: thunk
MMRESULT __stdcall timeEndPeriod(UINT uPeriod)
{
  return __imp_timeEndPeriod(uPeriod);
}


// ==== 0x007C8950  timeKillEvent  this=-  sig=csp ====
// attributes: thunk
MMRESULT __stdcall timeKillEvent(UINT uTimerID)
{
  return __imp_timeKillEvent(uTimerID);
}


// ==== 0x007C8956  timeSetEvent  this=-  sig=csp ====
// attributes: thunk
MMRESULT __stdcall timeSetEvent(UINT uDelay, UINT uResolution, LPTIMECALLBACK fptc, DWORD_PTR dwUser, UINT fuEvent)
{
  return __imp_timeSetEvent(uDelay, uResolution, fptc, dwUser, fuEvent);
}


// ==== 0x007C895C  timeBeginPeriod  this=-  sig=csp ====
// attributes: thunk
MMRESULT __stdcall timeBeginPeriod(UINT uPeriod)
{
  return __imp_timeBeginPeriod(uPeriod);
}


// ==== 0x007C8962  htonl  this=AbstractClass  sig=csp ====
// attributes: thunk
u_long __stdcall htonl(IUnknown *aP0)
{
  return __imp_htonl((u_long)aP0);
}


// ==== 0x007C8968  htons  this=-  sig=csp ====
// attributes: thunk
u_short __stdcall htons(IUnknown *aP0)
{
  return __imp_htons((u_short)aP0);
}


// ==== 0x007C896E  ntohl  this=-  sig=csp ====
// attributes: thunk
u_long __stdcall ntohl(u_long netlong)
{
  return __imp_ntohl(netlong);
}


// ==== 0x007C8974  ntohs  this=AbstractClass  sig=csp ====
// attributes: thunk
u_short __stdcall ntohs(ObjectClass *aP0)
{
  return __imp_ntohs((u_short)aP0);
}


// ==== 0x007C897A  WSAGetLastError  this=-  sig=ida-proto ====
// attributes: thunk
int __stdcall WSAGetLastError()
{
  return __imp_WSAGetLastError();
}


// ==== 0x007C8980  gethostbyname  this=-  sig=csp ====
// attributes: thunk
struct hostent *__stdcall gethostbyname(IUnknown *aP0)
{
  return __imp_gethostbyname((const char *)aP0);
}


// ==== 0x007C8986  ntoainet  this=-  sig=csp ====
// attributes: thunk
char *__stdcall ntoainet(struct in_addr in)
{
  return inet_ntoa(in);
}


// ==== 0x007C898C  getsockopt  this=-  sig=csp ====
// attributes: thunk
int __stdcall getsockopt(AnimClass *aP0, int level, int optname, char *optval, int *optlen)
{
  return __imp_getsockopt((SOCKET)aP0, level, optname, optval, optlen);
}


// ==== 0x007C8992  closesocket  this=IPXInterfaceClass  sig=csp ====
// attributes: thunk
int __thiscall closesocket(Color *this)
{
  SOCKET s; // [esp+4h] [ebp+4h]

  return __imp_closesocket(s);
}


// ==== 0x007C8998  bind  this=IPXInterfaceClass  sig=csp ====
// attributes: thunk
int __stdcall bind(IUnknown *aP0, IUnknown *aP1, int namelen)
{
  return __imp_bind((SOCKET)aP0, (const struct sockaddr *)aP1, namelen);
}


// ==== 0x007C899E  socket  this=-  sig=csp ====
// attributes: thunk
SOCKET __stdcall socket(int af, int type, int protocol)
{
  return __imp_socket(af, type, protocol);
}


// ==== 0x007C89A4  setsockopt  this=IPXInterfaceClass  sig=csp ====
// attributes: thunk
int __stdcall setsockopt(IUnknown *aP0, int level, int optname, IUnknown *aP3, int optlen)
{
  return __imp_setsockopt((SOCKET)aP0, level, optname, (const char *)aP3, optlen);
}


// ==== 0x007C89AA  recvfrom  this=-  sig=csp ====
// attributes: thunk
int __stdcall recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen)
{
  return __imp_recvfrom(s, buf, len, flags, from, fromlen);
}


// ==== 0x007C89B0  sendto  this=-  sig=csp ====
// attributes: thunk
int __stdcall sendto(SOCKET s, const char *buf, IUnknown *aP2, int flags, IUnknown *aP4, int tolen)
{
  return __imp_sendto(s, buf, (int)aP2, flags, (const struct sockaddr *)aP4, tolen);
}


// ==== 0x007C89B6  WSACleanup  this=-  sig=ida-proto ====
// attributes: thunk
int __stdcall WSACleanup()
{
  return __imp_WSACleanup();
}


// ==== 0x007C89BC  WSAAsyncSelect  this=ObjectClass  sig=csp ====
// attributes: thunk
int __stdcall WSAAsyncSelect(SOCKET s, IUnknown *aP1, IUnknown *aP2, int lEvent)
{
  return __imp_WSAAsyncSelect(s, (HWND)aP1, (u_int)aP2, lEvent);
}


// ==== 0x007C89C2  EnumProtocolsA  this=-  sig=csp ====
// attributes: thunk
INT __stdcall EnumProtocolsA(LPINT lpiProtocols, LPVOID lpProtocolBuffer, LPDWORD lpdwBufferLength)
{
  return __imp_EnumProtocolsA(lpiProtocols, lpProtocolBuffer, lpdwBufferLength);
}


// ==== 0x007C89C8  WSAStartup  this=-  sig=csp ====
// attributes: thunk
int __stdcall WSAStartup(WORD wVersionRequested, CCINIClass *aP1)
{
  return __imp_WSAStartup(wVersionRequested, (LPWSADATA)aP1);
}


// ==== 0x007C89CE  gethostname  this=-  sig=csp ====
// attributes: thunk
int __stdcall gethostname(IUnknown *aP0, AnimClass *aP1)
{
  return __imp_gethostname((char *)aP0, (int)aP1);
}


// ==== 0x007C89D4  DirectDrawCreate  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall DirectDrawCreate(GUID *lpGUID, LPDIRECTDRAW *lplpDD, IUnknown *pUnkOuter)
{
  return __imp_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}


// ==== 0x007C89DA  DirectSoundCreate  this=-  sig=csp ====
// attributes: thunk
HRESULT __stdcall DirectSoundCreate(LPCGUID pcGuidDevice, LPDIRECTSOUND *ppDS, LPUNKNOWN pUnkOuter)
{
  return __imp_DirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);
}


// ==== 0x007C89E0  VerQueryValueA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall VerQueryValueA(CCINIClass *aP0, LPCSTR lpSubBlock, LPVOID *lplpBuffer, INIClass *aP3)
{
  return __imp_VerQueryValueA(aP0, lpSubBlock, lplpBuffer, (PUINT)aP3);
}


// ==== 0x007C89E6  GetFileVersionInfoA  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, AbstractClass *aP2, CCINIClass *aP3)
{
  return __imp_GetFileVersionInfoA(lptstrFilename, dwHandle, (DWORD)aP2, aP3);
}


// ==== 0x007C89EC  GetFileVersionInfoSizeA  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
{
  return __imp_GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle);
}


// ==== 0x007C89F2  ImageList::DragEnter  this=ImageList  sig=csp ====
// attributes: thunk
BOOL __stdcall ImageList::DragEnter(HWND hwndLock, int x, int y)
{
  return ImageList_DragEnter(hwndLock, x, y);
}


// ==== 0x007C89F8  ImageList::BeginDrag  this=ImageList  sig=csp ====
// attributes: thunk
BOOL __stdcall ImageList::BeginDrag(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot)
{
  return ImageList_BeginDrag(himlTrack, iTrack, dxHotspot, dyHotspot);
}


// ==== 0x007C89FE  ImageList::Destroy  this=ImageList  sig=csp ====
// attributes: thunk
BOOL __stdcall ImageList::Destroy(HIMAGELIST himl)
{
  return ImageList_Destroy(himl);
}


// ==== 0x007C8A04  ImageList::EndDrag  this=ImageList  sig=ida-proto ====
// attributes: thunk
void __stdcall ImageList::EndDrag()
{
  ImageList_EndDrag(); /*0x7c8a04*/
}


// ==== 0x007C8A0A  ImageList::DragMove  this=ImageList  sig=csp ====
// attributes: thunk
BOOL __stdcall ImageList::DragMove(int x, int y)
{
  return ImageList_DragMove(x, y);
}


// ==== 0x007C8A10  ImageList::DragShowNolock  this=ImageList  sig=csp ====
// attributes: thunk
BOOL __stdcall ImageList::DragShowNolock(BOOL fShow)
{
  return ImageList_DragShowNolock(fShow);
}


// ==== 0x007C8A16  InitCommonControls  this=-  sig=ida-proto ====
// attributes: thunk
void __stdcall InitCommonControls()
{
  __imp_InitCommonControls(); /*0x7c8a16*/
}


// ==== 0x007C8A1C  ImmAssociateContext  this=-  sig=csp ====
// attributes: thunk
HIMC __stdcall ImmAssociateContext(ObjectClass *aP0, ObjectClass *aP1)
{
  return __imp_ImmAssociateContext((HWND)aP0, (HIMC)aP1);
}


// ==== 0x007C8A22  ImmGetContext  this=ObjectClass  sig=csp ====
// attributes: thunk
HIMC __stdcall ImmGetContext(ObjectClass *aP0)
{
  return __imp_ImmGetContext((HWND)aP0);
}


// ==== 0x007C8A28  ImmNotifyIME  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ImmNotifyIME(ObjectClass *aP0, DWORD dwAction, DWORD dwIndex, DWORD dwValue)
{
  return __imp_ImmNotifyIME((HIMC)aP0, dwAction, dwIndex, dwValue);
}


// ==== 0x007C8A2E  ImmGetCandidateListA  this=-  sig=csp ====
// attributes: thunk
DWORD __stdcall ImmGetCandidateListA(HIMC a1, DWORD deIndex, LPCANDIDATELIST lpCandList, DWORD dwBufLen)
{
  return __imp_ImmGetCandidateListA(a1, deIndex, lpCandList, dwBufLen);
}


// ==== 0x007C8A34  ImmGetCompositionStringA  this=-  sig=csp ====
// attributes: thunk
LONG __stdcall ImmGetCompositionStringA(ObjectClass *aP0, DWORD a2, LPVOID lpBuf, DWORD dwBufLen)
{
  return __imp_ImmGetCompositionStringA((HIMC)aP0, a2, lpBuf, dwBufLen);
}


// ==== 0x007C8A3A  ImmSetOpenStatus  this=-  sig=csp ====
// attributes: thunk
BOOL __stdcall ImmSetOpenStatus(HIMC a1, BOOL a2)
{
  return __imp_ImmSetOpenStatus(a1, a2);
}


// ==== 0x007C8A40  _BinkClose_4  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkClose_4(int a1)
{
  return BinkClose(a1);
}


// ==== 0x007C8A46  _BinkDDSurfaceType_4  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkDDSurfaceType_4(int a1)
{
  return BinkDDSurfaceType(a1);
}


// ==== 0x007C8A4C  _BinkSetVolume_8  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkSetVolume_8(int a1, int a2)
{
  return BinkSetVolume(a1, a2);
}


// ==== 0x007C8A52  _BinkGetError_0  this=-  sig=ida-proto ====
// attributes: thunk
int __stdcall BinkGetError_0()
{
  return BinkGetError();
}


// ==== 0x007C8A58  _BinkOpen_8  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkOpen_8(int a1, int a2)
{
  return BinkOpen(a1, a2);
}


// ==== 0x007C8A5E  _BinkSetSoundSystem_8  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkSetSoundSystem_8(int a1, int a2)
{
  return BinkSetSoundSystem(a1, a2);
}


// ==== 0x007C8A64  _BinkOpenDirectSound_4  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkOpenDirectSound_4(int a1)
{
  return BinkOpenDirectSound(a1);
}


// ==== 0x007C8A6A  _BinkGoto_12  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkGoto_12(int a1, int a2, int a3)
{
  return BinkGoto(a1, a2, a3);
}


// ==== 0x007C8A70  _BinkPause_8  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkPause_8(int a1, int a2)
{
  return BinkPause(a1, a2);
}


// ==== 0x007C8A76  _BinkNextFrame_4  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkNextFrame_4(int a1)
{
  return BinkNextFrame(a1);
}


// ==== 0x007C8A7C  _BinkCopyToBuffer_28  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkCopyToBuffer_28(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return BinkCopyToBuffer(a1, a2, a3, a4, a5, a6, a7);
}


// ==== 0x007C8A82  _BinkDoFrame_4  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkDoFrame_4(int a1)
{
  return BinkDoFrame(a1);
}


// ==== 0x007C8A88  _BinkWait_4  this=-  sig=csp ====
// attributes: thunk
int __stdcall BinkWait_4(int a1)
{
  return BinkWait(a1);
}


// ==== 0x007C8A8E  type_info::??1type_info_UAE_XZ  this=type_info  sig=csp ====
void __thiscall __1type_info_UAE_XZ(type_info *this)
{
  void *v2; // esi

  *(_DWORD *)this = &off_7F9594; /*0x7c8a93*/
  _lock(27); /*0x7c8a99*/
  v2 = (void *)this->q004; /*0x7c8a9e*/
  if ( v2 ) /*0x7c8aa4*/
    free(v2); /*0x7c8aa7*/
  _unlock(27); /*0x7c8aaf*/
}


// ==== 0x007C8AB7  ObjectClass::??_Gtype_info_UAEPAXI_Z  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall ___Gtype_info_UAEPAXI_Z(type_info *this, char a2)
{
  __1type_info_UAE_XZ(this); /*0x7c8aba*/
  if ( (a2 & 1) != 0 ) /*0x7c8ac4*/
    __3_YAXPAX_Z(this); /*0x7c8ac7*/
  return (ObjectClass *)this; /*0x7c8acf*/
}


// ==== 0x007C8AD3  ??8type_info_QBEHABV0__Z  this=-  sig=csp ====
BOOL __thiscall __8type_info_QBEHABV0__Z(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0; /*0x7c8aeb*/
}


// ==== 0x007C8AEE  ??9type_info_QBEHABV0__Z  this=-  sig=csp ====
BOOL __thiscall __9type_info_QBEHABV0__Z(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) != 0; /*0x7c8b07*/
}


// ==== 0x007C8B0A  ObjectClass::?before_type_info__QBEHABV1__Z  this=ObjectClass  sig=csp ====
BOOL __thiscall _before_type_info__QBEHABV1__Z(type_info *this, const struct type_info *a2)
{
  return strcmp((const char *)a2 + 9, (const char *)this + 9) > 0; /*0x7c8b26*/
}


// ==== 0x007C8B29  ObjectClass::method_7C8B29  this=ObjectClass  sig=csp ====
char *__thiscall sub_7C8B29(char *this)
{
  return this + 8; /*0x7c8b2c*/
}


// ==== 0x007C8B2D  ObjectClass::method_7C8B2D  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_7C8B2D(_DWORD *this, int a2)
{
  *this = &off_7F9594; /*0x7c8b2f*/
  return this; /*0x7c8b35*/
}


// ==== 0x007C8B38  ObjectClass::method_7C8B38  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_7C8B38(void *this, int a2)
{
  return (ObjectClass *)this; /*0x7c8b3a*/
}


// ==== 0x007C8B3D  ??3_YAXPAX_Z  this=-  sig=csp ====
void __cdecl __3_YAXPAX_Z(void *Block)
{
  free(Block); /*0x7c8b41*/
}


// ==== 0x007C8B48  _qsort  this=ObjectClass  sig=csp ====
void __cdecl qsort(
        AbstractClass *aP0,
        IUnknown *aP1,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  AbstractClass *v5; // esi
  size_t v6; // eax
  char *i; // edi
  char *v8; // eax
  AbstractClass *v9; // eax
  IUnknown *v10; // edx
  AbstractClass *v11; // ecx
  IUnknown *v12; // ecx
  AbstractClass *v13; // eax
  char v14; // [esp+Ch] [ebp-F8h] BYREF
  char v15; // [esp+84h] [ebp-80h] BYREF
  AbstractClass *v16; // [esp+FCh] [ebp-8h]
  int v17; // [esp+100h] [ebp-4h]
  AbstractClass *Base; // [esp+10Ch] [ebp+8h]
  IUnknown *NumOfElements; // [esp+110h] [ebp+Ch]

  if ( (unsigned int)aP1 >= 2 && SizeOfElements ) /*0x7c8b64*/
  {
    v17 = 0; /*0x7c8b6a*/
    Base = (AbstractClass *)&v15; /*0x7c8b79*/
    v5 = (AbstractClass *)((char *)aP0 + SizeOfElements * ((_DWORD)aP1 - 1)); /*0x7c8b82*/
    NumOfElements = (IUnknown *)&v14; /*0x7c8b84*/
    while ( 1 ) /*0x7c8c35*/
    {
      while ( 1 ) /*0x7c8b92*/
      {
        v6 = ((char *)v5 - (char *)aP0) / SizeOfElements + 1; /*0x7c8b92*/
        if ( v6 <= 8 ) /*0x7c8b96*/
        {
          shortsort(aP0, (unsigned int)v5, SizeOfElements, (int (__cdecl *)(unsigned int))CompareFunction); /*0x7c8b9e*/
          goto LABEL_6; /*0x7c8b9e*/
        }
        swap(&aP0->__pad_0[SizeOfElements * (v6 >> 1)], aP0->__pad_0, SizeOfElements); /*0x7c8bd1*/
        v16 = aP0; /*0x7c8bd9*/
        for ( i = &v5->__pad_0[SizeOfElements]; ; swap(v16->__pad_0, i, SizeOfElements) ) /*0x7c8bdc*/
        {
          do /*0x7c8bf4*/
          {
            v8 = &v16->__pad_0[SizeOfElements]; /*0x7c8be1*/
            v16 = (AbstractClass *)((char *)v16 + SizeOfElements); /*0x7c8be6*/
          }
          while ( v16 <= v5 && ((int (__cdecl *)(char *))CompareFunction)(v8) <= 0 ); /*0x7c8bf4*/
          do /*0x7c8c06*/
            i -= SizeOfElements; /*0x7c8bf6*/
          while ( i > (char *)aP0 && ((int (__cdecl *)(char *))CompareFunction)(i) >= 0 ); /*0x7c8c06*/
          if ( i < (char *)v16 ) /*0x7c8c0f*/
            break; /*0x7c8c0f*/
        }
        swap(aP0->__pad_0, i, SizeOfElements); /*0x7c8c1f*/
        v9 = v16; /*0x7c8c24*/
        if ( i - (char *)aP0 - 1 >= (char *)v5 - (char *)v16 ) /*0x7c8c35*/
          break; /*0x7c8c35*/
        if ( v16 < v5 ) /*0x7c8c69*/
        {
          v12 = NumOfElements; /*0x7c8c6b*/
          ++v17; /*0x7c8c6e*/
          NumOfElements = (IUnknown *)((char *)NumOfElements + 4); /*0x7c8c71*/
          v12->field_0 = (int)v16; /*0x7c8c75*/
          v13 = Base; /*0x7c8c77*/
          Base = (AbstractClass *)((char *)Base + 4); /*0x7c8c7a*/
          *(_DWORD *)v13->__pad_0 = v5; /*0x7c8c7e*/
        }
        if ( &aP0->__pad_0[SizeOfElements] >= i ) /*0x7c8c87*/
        {
LABEL_6:
          --v17; /*0x7c8ba6*/
          NumOfElements = (IUnknown *)((char *)NumOfElements - 4); /*0x7c8ba9*/
          Base = (AbstractClass *)((char *)Base - 4); /*0x7c8bad*/
          if ( v17 < 0 ) /*0x7c8bb5*/
            return; /*0x7c8bb5*/
          aP0 = (AbstractClass *)NumOfElements->field_0; /*0x7c8bbe*/
          v5 = *(AbstractClass **)Base->__pad_0; /*0x7c8bc3*/
        }
        else
        {
          v5 = (AbstractClass *)&i[-SizeOfElements]; /*0x7c8c90*/
        }
      }
      if ( &aP0->__pad_0[SizeOfElements] < i ) /*0x7c8c3f*/
      {
        v10 = NumOfElements; /*0x7c8c41*/
        NumOfElements = (IUnknown *)((char *)NumOfElements + 4); /*0x7c8c44*/
        v11 = Base; /*0x7c8c4a*/
        ++v17; /*0x7c8c4d*/
        Base = (AbstractClass *)((char *)Base + 4); /*0x7c8c50*/
        v10->field_0 = (int)aP0; /*0x7c8c54*/
        *(_DWORD *)v11->__pad_0 = &i[-SizeOfElements]; /*0x7c8c56*/
      }
      if ( v9 >= v5 ) /*0x7c8c5a*/
        goto LABEL_6; /*0x7c8c5a*/
      aP0 = v9; /*0x7c8c60*/
    }
  }
}


// ==== 0x007C8C9C  _shortsort  this=-  sig=csp ====
unsigned int __cdecl shortsort(AbstractClass *aP0, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int))
{
  AbstractClass *result; // eax
  char *v5; // edi
  AbstractClass *v6; // ebx
  AbstractClass *i; // esi

  result = aP0; /*0x7c8c9f*/
  v5 = (char *)a2; /*0x7c8ca3*/
  if ( a2 > (unsigned int)aP0 ) /*0x7c8ca8*/
  {
    do /*0x7c8ce3*/
    {
      v6 = aP0; /*0x7c8cb4*/
      for ( i = (AbstractClass *)((char *)aP0 + a3); i <= (AbstractClass *)v5; i = (AbstractClass *)((char *)i + a3) ) /*0x7c8cb7*/
      {
        if ( a4((unsigned int)i) > 0 ) /*0x7c8cc7*/
          v6 = i; /*0x7c8cc9*/
      }
      result = (AbstractClass *)swap(v6->__pad_0, v5, a3); /*0x7c8cd5*/
      v5 -= a3; /*0x7c8cda*/
    }
    while ( v5 > (char *)aP0 ); /*0x7c8ce3*/
  }
  return (unsigned int)result; /*0x7c8ce7*/
}


// ==== 0x007C8CEA  ObjectClass::_swap  this=ObjectClass  sig=csp ====
char *__cdecl swap(char *a1, char *a2, int a3)
{
  char *result; // eax
  char *v4; // ecx
  int v5; // esi
  char v6; // dl

  result = a1; /*0x7c8cea*/
  v4 = a2; /*0x7c8cee*/
  if ( a1 != a2 && a3 ) /*0x7c8d00*/
  {
    v5 = a3; /*0x7c8d03*/
    do /*0x7c8d11*/
    {
      v6 = *result; /*0x7c8d08*/
      *result++ = *v4; /*0x7c8d0a*/
      *v4++ = v6; /*0x7c8d0d*/
      --v5; /*0x7c8d10*/
    }
    while ( v5 ); /*0x7c8d11*/
  }
  return result; /*0x7c8d14*/
}


// ==== 0x007C8D20  __strcmpi  this=-  sig=csp ====
int __cdecl _strcmpi(char *a1, char *a2)
{
  int result; // eax
  char v5; // t0
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+0h] [ebp-10h]

  if ( CRTGlobal_B782A0 )
  {
    _InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7c8d73*/
    if ( CRTGlobal_B78BA0 > 0 ) /*0x7c8d81*/
    {
      _InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7c8d87*/
      _lock(19); /*0x7c8d90*/
      v10 = 1; /*0x7c8d95*/
    }
    else
    {
      v10 = 0; /*0x7c8d83*/
    }
    v6 = 255; /*0x7c8d9c*/
    v7 = 0; /*0x7c8da1*/
    while ( (_BYTE)v6 ) /*0x7c8da6*/
    {
      LOBYTE(v6) = *a2++; /*0x7c8da8*/
      LOBYTE(v7) = *a1++; /*0x7c8dab*/
      if ( (_BYTE)v6 != (_BYTE)v7 ) /*0x7c8db0*/
      {
        v9 = v6; /*0x7c8db2*/
        v7 = tolower_0(v7); /*0x7c8db9*/
        v6 = tolower_0(v9); /*0x7c8dbe*/
        if ( (_BYTE)v7 != (_BYTE)v6 ) /*0x7c8dc8*/
        {
          v6 = -((unsigned __int8)v7 < (unsigned __int8)v6) - (((unsigned __int8)v7 < (unsigned __int8)v6) - 1); /*0x7c8dcc*/
          break; /*0x7c8dcc*/
        }
      }
    }
    v8 = v6; /*0x7c8dcf*/
    if ( v10 ) /*0x7c8dd4*/
      _unlock(19); /*0x7c8de1*/
    else
      _InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7c8dd6*/
    return v8; /*0x7c8de9*/
  }
  else
  {
    LOBYTE(result) = -1; /*0x7c8d38*/
    while ( (_BYTE)result )
    {
      LOBYTE(result) = *a2++; /*0x7c8d40*/
      BYTE1(result) = *a1++; /*0x7c8d43*/
      if ( BYTE1(result) != (_BYTE)result )
      {
        v5 = BYTE1(result); /*0x7c8d57*/
        BYTE1(result) = ((unsigned __int8)(result - 65) < 0x1Au ? 0x20 : 0) + result;
        LOBYTE(result) = ((unsigned __int8)(v5 - 65) < 0x1Au ? 0x20 : 0) + v5;
        if ( (_BYTE)result != BYTE1(result) ) /*0x7c8d68*/
        {
          LOBYTE(result) = -((unsigned __int8)result < BYTE1(result)) - (((unsigned __int8)result < BYTE1(result)) - 1); /*0x7c8d6c*/
          return (char)result; /*0x7c8d6c*/
        }
      }
    }
    return (char)result; /*0x7c8d6e*/
  }
}


// ==== 0x007C8DF0  _strrchr  this=-  sig=csp ====
char *__cdecl strrchr(const char *Str, int Ch)
{
  unsigned int v2; // ecx
  const char *v3; // edi
  bool v4; // zf
  char *v5; // edi

  v2 = strlen(Str) + 1; /*0x7c8dff*/
  v3 = &Str[v2 - 1]; /*0x7c8e01*/
  do /*0x7c8e06*/
  {
    if ( !v2 ) /*0x7c8e06*/
      break; /*0x7c8e06*/
    v4 = *v3-- == (unsigned __int8)Ch; /*0x7c8e06*/
    --v2; /*0x7c8e06*/
  }
  while ( !v4 ); /*0x7c8e06*/
  v5 = (char *)(v3 + 1); /*0x7c8e08*/
  if ( *v5 == (_BYTE)Ch ) /*0x7c8e0b*/
    return v5; /*0x7c8e11*/
  else
    return 0; /*0x7c8e0d*/
}


// ==== 0x007C8E17  ??2_YAPAXI_Z  this=TechnoTypeClass  sig=csp ====
int __cdecl __2_YAPAXI_Z(size_t Size)
{
  return _nh_malloc(Size, 1); /*0x7c8e24*/
}


// ==== 0x007C8E25  _bsearch  this=ObjectClass  sig=csp ====
void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        ObjectClass *aP2,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  ObjectClass *v5; // eax
  char *v6; // edi
  ObjectClass *v7; // ebx
  unsigned int v8; // eax
  char *v9; // esi
  int v10; // eax
  char NumOfElementsa; // [esp+1Ch] [ebp+10h]
  size_t NumOfElements; // [esp+1Ch] [ebp+10h]

  v5 = aP2; /*0x7c8e28*/
  v6 = (char *)Base + SizeOfElements * ((_DWORD)aP2 - 1); /*0x7c8e38*/
  if ( Base > v6 ) /*0x7c8e3f*/
    return 0; /*0x7c8e3f*/
  while ( 1 ) /*0x7c8e43*/
  {
    v7 = (ObjectClass *)((unsigned int)v5 >> 1); /*0x7c8e43*/
    if ( !((unsigned int)v5 >> 1) ) /*0x7c8e43*/
      break; /*0x7c8e43*/
    NumOfElementsa = (char)v5; /*0x7c8e47*/
    v8 = (unsigned int)v5 >> 1; /*0x7c8e4a*/
    NumOfElements = NumOfElementsa & 1; /*0x7c8e4c*/
    if ( !NumOfElements ) /*0x7c8e50*/
      v8 = (unsigned int)&v7[-1].lineTrailer + 3; /*0x7c8e52*/
    v9 = (char *)Base + SizeOfElements * v8; /*0x7c8e5c*/
    v10 = ((int (__cdecl *)(const void *))CompareFunction)(Key); /*0x7c8e62*/
    if ( !v10 ) /*0x7c8e69*/
      return v9; /*0x7c8e95*/
    if ( v10 >= 0 ) /*0x7c8e6b*/
    {
      Base = &v9[SizeOfElements]; /*0x7c8e82*/
LABEL_10:
      v5 = v7; /*0x7c8e85*/
      goto LABEL_11; /*0x7c8e85*/
    }
    v6 = &v9[-SizeOfElements]; /*0x7c8e74*/
    if ( NumOfElements ) /*0x7c8e76*/
      goto LABEL_10; /*0x7c8e76*/
    v5 = (ObjectClass *)((char *)v7 - 1); /*0x7c8e78*/
LABEL_11:
    if ( Base > v6 ) /*0x7c8e8a*/
      return 0; /*0x7c8e8a*/
  }
  if ( !v5 ) /*0x7c8e99*/
    return 0; /*0x7c8e92*/
  return CompareFunction(Key, Base) == 0 ? (void *)Base : 0;
}


// ==== 0x007C8EC0  __allmul  this=-  sig=csp ====
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( HIDWORD(a1) | HIDWORD(a2) ) /*0x7c8ec8*/
    return a1 * a2; /*0x7c8eec*/
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1; /*0x7c8ed4*/
}


// ==== 0x007C8EF4  _sprintf  this=AbstractClass  sig=csp ====
int sprintf(char *const Buffer, ObjectClass *aP1, INIClass *aP2)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = Buffer; /*0x7c8efe*/
  File._ptr = Buffer; /*0x7c8f01*/
  File._flag = 66; /*0x7c8f07*/
  File._cnt = 0x7FFFFFFF; /*0x7c8f15*/
  v3 = _output(&File, aP1->__pad_0, (int)&aP2); /*0x7c8f1d*/
  v4 = --File._cnt < 0; /*0x7c8f25*/
  v5 = v3; /*0x7c8f28*/
  if ( v4 ) /*0x7c8f2a*/
    _flsbuf(0, &File); /*0x7c8f3a*/
  else
    *File._ptr = 0; /*0x7c8f2f*/
  return v5; /*0x7c8f43*/
}


// ==== 0x007C8F46  System_Helper  this=-  sig=ida-proto ====
int sub_7C8F46()
{
  int result; // eax

  _cfltcvt_init_13(); /*0x7c8f46*/
  dword_B781A0 = _ms_p5_mp_test_fdiv(); /*0x7c8f50*/
  result = _setdefaultprecision(); /*0x7c8f55*/
  __asm { fnclex } /*0x7c8f5a*/
  return result; /*0x7c8f5c*/
}


// ==== 0x007C8F5D  nullsub_268  this=-  sig=ida-proto ====
void nullsub_268()
{
  ; /*0x7c8f5d*/
}


// ==== 0x007C8F5E  __cfltcvt_init_13  this=-  sig=ida-proto ====
int (__cdecl *_cfltcvt_init_13())(int, void *Src, int, size_t Size, int)
{
  MEMORY[0x87C4D4][0] = (void (__noreturn *)())_cropzeros; /*0x7c8f63*/
  MEMORY[0x87C4D0] = (void (__noreturn *)())_cfltcvt; /*0x7c8f6d*/
  MEMORY[0x87C4D8] = (void (__noreturn *)())_fassign; /*0x7c8f72*/
  MEMORY[0x87C4DC][0] = (void (__noreturn *)())_forcdecpt; /*0x7c8f7c*/
  MEMORY[0x87C4E0][0] = (void (__noreturn *)())_positive; /*0x7c8f86*/
  MEMORY[0x87C4E4] = (void (__noreturn *)())_cfltcvt; /*0x7c8f90*/
  return _cfltcvt; /*0x7c8f95*/
}


// ==== 0x007C8F96  sub_7C8F96  this=-  sig=csp ====
int __cdecl sub_7C8F96(int a1)
{
  int result; // eax

  result = CRTGlobal_B7819C; /*0x7c8f9a*/
  CRTGlobal_B7819C = a1; /*0x7c8f9f*/
  return result; /*0x7c8fa5*/
}


// ==== 0x007C8FB0  __CIpow  this=-  sig=ida-proto ====
long double __usercall _CIpow@<st0>(unsigned __int64 x@<st0>, unsigned __int64 y@<st1>)
{
  return CIpow_Helper(HIDWORD(y), *(double *)&x, *(long double *)&y, x, HIDWORD(x), y, HIDWORD(y)); /*0x7c8fc5*/
}


// ==== 0x007C8FC9  _pow  this=-  sig=ida-proto ====
double __cdecl pow(double X, double Y)
{
  int v2; // ecx
  double v3; // st6
  long double v4; // st7
  int v5; // eax

  v5 = _fload_withFB(v2); /*0x7c8fcd*/
  return CIpow_Helper(v5, v3, v4, SLODWORD(X), SHIDWORD(X), SLODWORD(Y), SHIDWORD(Y));
}


// ==== 0x007C8FD2  ObjectClass::CIpow_Helper  this=ObjectClass  sig=csp ====
// local variable allocation has failed, the output may be wrong!
long double __usercall CIpow_Helper@<st0>(
        int CW@<eax>,
        double a2@<st1>,
        long double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  char v10; // zf
  long double result; // st7
  char v12; // cl
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // ch
  char v19; // cl
  _BYTE *v20; // [esp+10h] [ebp-7Ch]
  long double *v21; // [esp+10h] [ebp-7Ch]
  _BYTE v22[116]; // [esp+14h] [ebp-78h] BYREF
  int v23; // [esp+88h] [ebp-4h]

  v7 = CW; /*0x7c8fd2*/
  v23 = CW; /*0x7c8fd4*/
  if ( (_WORD)CW != 639 ) /*0x7c8fdf*/
    CW = _load_CW(v23); /*0x7c8fe1*/
  v8 = v7 & 0x7FF00000; /*0x7c8fe6*/
  if ( v8 == 2146435072 ) /*0x7c8ff6*/
  {
    if ( a6 | CW & 0xFFFFF ) /*0x7c90a0*/
    {
      _fload_withFB(0, &a4); /*0x7c906d*/
      if ( (a7 & 0x80000) != 0 ) /*0x7c9077*/
        goto LABEL_15; /*0x7c9077*/
      v14 = v13 + 1; /*0x7c9079*/
    }
    else
    {
      _fload_withFB(0, &a4); /*0x7c90aa*/
    }
LABEL_21:
    if ( (a5 & 0x7FF00000) != 0x7FF00000 || !(a4 | a5 & 0xFFFFF) ) /*0x7c90c7*/
    {
      if ( !v14 ) /*0x7c90cf*/
      {
        v20 = v22; /*0x7c90d6*/
        __asm { fsave byte ptr [ecx+8] } /*0x7c90e1*/
        v15 = _powhlp(a2, a3, v22); /*0x7c90e5*/
        _ECX = v21; /*0x7c90ed*/
        __asm { frstor byte ptr [ecx+8] } /*0x7c90ee*/
        result = *v21; /*0x7c90f1*/
        if ( !v15 ) /*0x7c90f8*/
          return result; /*0x7c90f8*/
        goto LABEL_11; /*0x7c90f8*/
      }
      goto LABEL_17; /*0x7c90cf*/
    }
    if ( (a5 & 0x80000) == 0 ) /*0x7c908a*/
    {
LABEL_17:
      result = a3 + a2; /*0x7c908c*/
      goto LABEL_11; /*0x7c9093*/
    }
LABEL_15:
    result = a3 + a2; /*0x7c907c*/
    goto LABEL_11; /*0x7c9083*/
  }
  v9 = _fload_withFB(v8, &a4); /*0x7c8ffc*/
  if ( v10 ) /*0x7c9001*/
  {
    v14 = 0; /*0x7c9095*/
    goto LABEL_21; /*0x7c9097*/
  }
  if ( (v9 & 0x7FF00000) != 0 || a4 | a5 & 0xFFFFF ) /*0x7c9111*/
  {
    if ( a5 >= 0 || (CIpow_Helper_Helper(a3), a2 = -a2, v19) ) /*0x7c918b*/
    {
      result = __FYL2X__(a2, a3); /*0x7c901f*/
      _twoToTOS(); /*0x7c9021*/
      if ( v12 == 1 ) /*0x7c9029*/
        result = -result; /*0x7c902b*/
      if ( !CRTGlobal_B7819C ) /*0x7c9034*/
        _check_range_exit(&off_87BED8, 29); /*0x7c9045*/
      return result; /*0x7c9045*/
    }
    result = *(double *)&MEMORY[0x87C550]; /*0x7c9195*/
LABEL_11:
    if ( !CRTGlobal_B7819C ) /*0x7c9051*/
      _startTwoArgErrorHandling(); /*0x7c9062*/
    return result; /*0x7c9051*/
  }
  if ( (a7 & 0x7FF00000) == 0 ) /*0x7c9126*/
  {
    if ( a6 | a7 & 0xFFFFF ) /*0x7c916c*/
      return 0.0; /*0x7c9179*/
    else
      return 1.0; /*0x7c9172*/
  }
  CIpow_Helper_Helper(a3); /*0x7c9128*/
  v18 = HIBYTE(a5) >> 7; /*0x7c9131*/
  if ( a7 < 0 ) /*0x7c913c*/
  {
    result = *(double *)&MEMORY[0x87C4F0]; /*0x7c913e*/
    if ( (v17 & v18) != 0 ) /*0x7c9146*/
      result = -*(double *)&MEMORY[0x87C4F0]; /*0x7c9148*/
    goto LABEL_11; /*0x7c9148*/
  }
  result = 0.0; /*0x7c9154*/
  if ( (v17 & v18) != 0 ) /*0x7c9158*/
    return -0.0; /*0x7c915e*/
  return result; /*0x7cf43a*/
}


// ==== 0x007C91A5  CIpow_Helper_Helper  this=-  sig=ida-proto ====
void __usercall CIpow_Helper_Helper(double a1@<st0>)
{
  _ST6 = a1; /*0x7c91a5*/
  __asm { frndint } /*0x7c91a7*/
  if ( _ST6 == a1 ) /*0x7c91b1*/
  {
    _ST6 = a1 * dbl_87BED0; /*0x7c91bb*/
    __asm { frndint } /*0x7c91bd*/
  }
}


// ==== 0x007C91D0  _strncpy  this=AbstractClass  sig=csp ====
char *__cdecl strncpy(char *Destination, const char *Source, IUnknown *aP2)
{
  INIClass *v3; // ecx
  INIClass *v4; // ebx
  const char *v5; // esi
  char *v6; // edi
  unsigned int v7; // ecx
  char v8; // al
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // edx

  v3 = (INIClass *)aP2; /*0x7c91d0*/
  if ( !aP2 ) /*0x7c91d7*/
    return Destination; /*0x7c9258*/
  v4 = (INIClass *)aP2; /*0x7c91db*/
  v5 = Source; /*0x7c91dd*/
  v6 = Destination; /*0x7c91e7*/
  if ( ((unsigned __int8)Source & 3) == 0 ) /*0x7c91eb*/
  {
    v7 = (unsigned int)aP2 >> 2; /*0x7c91ed*/
    if ( (unsigned int)aP2 >> 2 ) /*0x7c91ed*/
      goto main_loop_entrance; /*0x7c91f0*/
copy_tail_loop:
    while ( 1 ) /*0x7c9215*/
    {
      v8 = *v5++; /*0x7c9215*/
      *v6++ = v8; /*0x7c9218*/
      if ( !v8 ) /*0x7c921d*/
        break; /*0x7c921d*/
      v4 = (INIClass *)((char *)v4 - 1); /*0x7c921f*/
      if ( !v4 ) /*0x7c9220*/
        return Destination; /*0x7c9220*/
    }
    while ( 1 ) /*0x7c924e*/
    {
      v4 = (INIClass *)((char *)v4 - 1); /*0x7c924e*/
      if ( !v4 ) /*0x7c924f*/
        break; /*0x7c924f*/
finish_loop:
      *v6++ = v8; /*0x7c924b*/
    }
    return Destination; /*0x7c924f*/
  }
  do /*0x7c9207*/
  {
    v8 = *v5++; /*0x7c91f4*/
    *v6++ = v8; /*0x7c91f7*/
    v3 = (INIClass *)((char *)v3 - 1); /*0x7c91fa*/
    if ( !v3 ) /*0x7c91fb*/
      return Destination; /*0x7c91fb*/
    if ( !v8 ) /*0x7c91ff*/
    {
      while ( ((unsigned __int8)v6 & 3) != 0 ) /*0x7c9230*/
      {
        *v6++ = 0; /*0x7c9232*/
        v3 = (INIClass *)((char *)v3 - 1); /*0x7c9235*/
        if ( !v3 ) /*0x7c9236*/
          return Destination; /*0x7c9236*/
      }
      v4 = v3; /*0x7c9244*/
      v10 = (unsigned int)v3 >> 2; /*0x7c9246*/
      if ( !v10 ) /*0x7c9249*/
        goto finish_loop; /*0x7c9249*/
      goto fill_dwords_with_EOS; /*0x7c9249*/
    }
  }
  while ( ((unsigned __int8)v5 & 3) != 0 ); /*0x7c9207*/
  LOBYTE(v4) = (_BYTE)v3; /*0x7c9209*/
  v7 = (unsigned int)v3 >> 2; /*0x7c920b*/
  if ( !v7 ) /*0x7c920e*/
  {
tail_loop_start:
    v4 = (INIClass *)((unsigned __int8)v4 & 3); /*0x7c9210*/
    if ( v4 ) /*0x7c9213*/
      goto copy_tail_loop; /*0x7c9213*/
    return Destination; /*0x7c9229*/
  }
  while ( 1 ) /*0x7c926d*/
  {
main_loop_entrance:
    v11 = (*(_DWORD *)v5 + 2130640639) ^ ~*(_DWORD *)v5; /*0x7c9261*/
    v12 = *(_DWORD *)v5; /*0x7c926f*/
    v5 += 4; /*0x7c9271*/
    if ( (v11 & 0x81010100) == 0 ) /*0x7c9279*/
      goto main_loop; /*0x7c9279*/
    if ( !(_BYTE)v12 ) /*0x7c927d*/
      break; /*0x7c927d*/
    if ( !BYTE1(v12) ) /*0x7c9281*/
    {
      *(_DWORD *)v6 = (unsigned __int8)v12; /*0x7c92a7*/
      goto fill_with_EOS_dwords; /*0x7c92a9*/
    }
    if ( (v12 & 0xFF0000) == 0 ) /*0x7c9289*/
    {
      *(_DWORD *)v6 = (unsigned __int16)v12; /*0x7c929d*/
      goto fill_with_EOS_dwords; /*0x7c929f*/
    }
    if ( (v12 & 0xFF000000) == 0 ) /*0x7c9291*/
    {
      *(_DWORD *)v6 = v12; /*0x7c9293*/
      goto fill_with_EOS_dwords; /*0x7c9295*/
    }
main_loop:
    *(_DWORD *)v6 = v12; /*0x7c9259*/
    v6 += 4; /*0x7c925b*/
    if ( !--v7 ) /*0x7c925f*/
      goto tail_loop_start; /*0x7c925f*/
  }
  *(_DWORD *)v6 = 0; /*0x7c92ad*/
fill_with_EOS_dwords:
  v6 += 4; /*0x7c92af*/
  v8 = 0; /*0x7c92b2*/
  v10 = v7 - 1; /*0x7c92b4*/
  if ( v10 ) /*0x7c92b5*/
  {
fill_dwords_with_EOS:
    v8 = 0; /*0x7c92b7*/
    do /*0x7c92bf*/
    {
      *(_DWORD *)v6 = 0; /*0x7c92b9*/
      v6 += 4; /*0x7c92bb*/
      --v10; /*0x7c92be*/
    }
    while ( v10 ); /*0x7c92bf*/
  }
  v4 = (INIClass *)((unsigned __int8)v4 & 3); /*0x7c92c1*/
  if ( v4 ) /*0x7c92c4*/
    goto finish_loop; /*0x7c92c4*/
  return Destination; /*0x7c9228*/
}


// ==== 0x007C92D0  __alldiv  this=-  sig=csp ====
int __stdcall _alldiv(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  v2 = 0; /*0x7c92d3*/
  if ( (a1 & 0x8000000000000000uLL) != 0LL ) /*0x7c92db*/
  {
    v2 = 1; /*0x7c92dd*/
    HIDWORD(a1) = -HIDWORD(a1) - ((_DWORD)a1 != 0); /*0x7c92e9*/
    LODWORD(a1) = -(int)a1; /*0x7c92ed*/
  }
  v3 = HIDWORD(a2); /*0x7c92f1*/
  if ( a2 < 0 ) /*0x7c92f7*/
  {
    ++v2; /*0x7c92f9*/
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0); /*0x7c9302*/
    HIDWORD(a2) = v3; /*0x7c9305*/
    LODWORD(a2) = -(int)a2; /*0x7c9309*/
  }
  if ( v3 ) /*0x7c930f*/
  {
    v6 = __PAIR64__(v3, a2); /*0x7c932b*/
    v7 = a1; /*0x7c9333*/
    do /*0x7c9341*/
    {
      v6 >>= 1; /*0x7c9337*/
      v7 >>= 1; /*0x7c933b*/
    }
    while ( HIDWORD(v6) ); /*0x7c9341*/
    v8 = v7 / (unsigned int)v6; /*0x7c9345*/
    v9 = v8 * (unsigned __int64)(unsigned int)a2; /*0x7c9351*/
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) ) /*0x7c9363*/
      --v8; /*0x7c9365*/
    v5 = v8; /*0x7c9368*/
  }
  else
  {
    LODWORD(v4) = a1; /*0x7c9323*/
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2; /*0x7c9323*/
    LODWORD(v5) = v4 / (unsigned int)a2; /*0x7c9323*/
    HIDWORD(v5) = HIDWORD(a1) / (unsigned int)a2; /*0x7c9325*/
  }
  if ( v2 == 1 ) /*0x7c936b*/
    return -v5; /*0x7c9371*/
  return v5; /*0x7c9374*/
}


// ==== 0x007C9380  __aulldiv  this=-  sig=csp ====
unsigned int __stdcall _aulldiv(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  if ( HIDWORD(a2) ) /*0x7c9388*/
  {
    v4 = HIDWORD(a2); /*0x7c93a2*/
    v5 = a2; /*0x7c93a4*/
    v6 = a1; /*0x7c93ac*/
    do /*0x7c93ba*/
    {
      v7 = v4 & 1; /*0x7c93b0*/
      v4 >>= 1; /*0x7c93b0*/
      v5 = (v5 >> 1) | (v7 << 31); /*0x7c93b2*/
      v6 >>= 1; /*0x7c93b4*/
    }
    while ( v4 ); /*0x7c93ba*/
    v8 = v6 / v5; /*0x7c93be*/
    v9 = v8 * (unsigned __int64)(unsigned int)a2; /*0x7c93ca*/
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) ) /*0x7c93dc*/
      --v8; /*0x7c93de*/
    return v8; /*0x7c93e1*/
  }
  else
  {
    LODWORD(v3) = a1; /*0x7c939c*/
    HIDWORD(v3) = HIDWORD(a1) % (unsigned int)a2; /*0x7c939c*/
    return v3 / (unsigned int)a2; /*0x7c939c*/
  }
}


// ==== 0x007C93E8  _free  this=IUnknown  sig=csp ====
void __cdecl free(void *Block)
{
  int v1; // eax

  if ( Block ) /*0x7c93ef*/
  {
    _lock(9); /*0x7c93f3*/
    v1 = __sbh_find_block(Block); /*0x7c93f9*/
    if ( v1 ) /*0x7c9402*/
    {
      __sbh_free_block(v1, Block); /*0x7c9406*/
      _unlock(9); /*0x7c940d*/
    }
    else
    {
      _unlock(9); /*0x7c9419*/
      HeapFree(hHeap, 0, Block); /*0x7c9428*/
    }
  }
}


// ==== 0x007C9430  _malloc  this=char*  sig=csp ====
void *__cdecl malloc(AbstractClass *aP0)
{
  return (void *)_nh_malloc((IUnknown *)aP0, CRTGlobal_B782B8.headNode[2]); /*0x7c9441*/
}


// ==== 0x007C9442  __nh_malloc  this=-  sig=csp ====
int __cdecl _nh_malloc(IUnknown *aP0, int a2)
{
  int result; // eax

  if ( (unsigned int)aP0 > 0xFFFFFFE0 ) /*0x7c9447*/
    return 0; /*0x7c946b*/
  while ( 1 ) /*0x7c944d*/
  {
    result = (int)_heap_alloc(aP0); /*0x7c944d*/
    if ( result || !a2 ) /*0x7c945b*/
      break; /*0x7c945b*/
    if ( !_callnewh(aP0) ) /*0x7c9461*/
      return 0; /*0x7c9469*/
  }
  return result; /*0x7c946d*/
}


// ==== 0x007C946E  __heap_alloc  this=-  sig=csp ====
LPVOID __cdecl _heap_alloc(IUnknown *aP0)
{
  IUnknown *v1; // esi
  _DWORD *v2; // edi

  v1 = aP0; /*0x7c946f*/
  if ( (unsigned int)aP0 <= *(_DWORD *)&stru_87C374.__pad_1D8[56] ) /*0x7c947a*/
  {
    _lock(9); /*0x7c947e*/
    v2 = __sbh_alloc_block(aP0); /*0x7c948b*/
    _unlock(9); /*0x7c948d*/
    if ( v2 ) /*0x7c9497*/
      return v2; /*0x7c9499*/
  }
  if ( !aP0 ) /*0x7c949f*/
    v1 = (IUnknown *)1; /*0x7c94a3*/
  return HeapAlloc(hHeap, 0, ((unsigned int)&v1->field_C + 3) & 0xFFFFFFF0); /*0x7c94b9*/
}


// ==== 0x007C94BC  Audio_Write  this=-  sig=csp ====
size_t __cdecl sub_7C94BC(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // esi

  _lock_file(Stream); /*0x7c94c3*/
  v4 = fread(Buffer, ElementSize, ElementCount, Stream); /*0x7c94dc*/
  _unlock_file(Stream); /*0x7c94de*/
  return v4; /*0x7c94e8*/
}


// ==== 0x007C94EB  _fread  this=-  sig=csp ====
size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // edi
  size_t v6; // ecx
  unsigned int cnt; // eax
  size_t v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  size_t Buffera; // [esp+18h] [ebp+8h]
  unsigned int Streama; // [esp+24h] [ebp+14h]

  v4 = ElementCount * ElementSize; /*0x7c94f5*/
  v6 = ElementCount * ElementSize; /*0x7c94fc*/
  Buffera = ElementCount * ElementSize; /*0x7c9503*/
  if ( !(ElementCount * ElementSize) ) /*0x7c94f5*/
    return 0; /*0x7c950a*/
  if ( (Stream->_flag & 0x10C) != 0 ) /*0x7c9518*/
    Streama = Stream->_bufsiz; /*0x7c951d*/
  else
    Streama = 4096; /*0x7c9522*/
  while ( 1 ) /*0x7c952e*/
  {
    if ( (Stream->_flag & 0x10C) != 0 ) /*0x7c9534*/
    {
      cnt = Stream->_cnt; /*0x7c9536*/
      if ( cnt ) /*0x7c953b*/
      {
        v10 = v6; /*0x7c953f*/
        if ( v6 >= cnt ) /*0x7c9541*/
          v10 = Stream->_cnt; /*0x7c9543*/
        memcpy_0(Buffer, Stream->_ptr, v10); /*0x7c9549*/
        Buffera -= v10; /*0x7c954e*/
        Stream->_cnt -= v10; /*0x7c9551*/
        Stream->_ptr += v10; /*0x7c9554*/
        Buffer = (char *)Buffer + v10; /*0x7c9559*/
        v4 = ElementCount * ElementSize; /*0x7c955b*/
        goto LABEL_20; /*0x7c955e*/
      }
    }
    if ( v6 >= Streama ) /*0x7c9563*/
      break; /*0x7c9563*/
    v13 = _filbuf(Stream); /*0x7c9594*/
    if ( v13 == -1 ) /*0x7c959d*/
      return (v4 - Buffera) / ElementSize; /*0x7c959d*/
    *(_BYTE *)Buffer = v13; /*0x7c959f*/
    Buffer = (char *)Buffer + 1; /*0x7c95a4*/
    --Buffera; /*0x7c95a5*/
    Streama = Stream->_bufsiz; /*0x7c95a8*/
LABEL_20:
    if ( !Buffera ) /*0x7c95af*/
      return ElementCount; /*0x7c95bc*/
    v6 = Buffera; /*0x7c952b*/
  }
  v11 = v6; /*0x7c9569*/
  if ( Streama ) /*0x7c956b*/
    v11 = v6 - v6 % Streama; /*0x7c9574*/
  v12 = _read(Stream->_file, Buffer, v11); /*0x7c957b*/
  if ( !v12 ) /*0x7c9585*/
  {
    Stream->_flag |= 0x10u; /*0x7c95bd*/
    return (v4 - Buffera) / ElementSize; /*0x7c95c1*/
  }
  if ( v12 != -1 ) /*0x7c958a*/
  {
    Buffera -= v12; /*0x7c958c*/
    Buffer = (char *)Buffer + v12; /*0x7c958f*/
    goto LABEL_20; /*0x7c9591*/
  }
  Stream->_flag |= 0x20u; /*0x7c95c3*/
  return (v4 - Buffera) / ElementSize; /*0x7c95b8*/
}


// ==== 0x007C95D3  Audio_Write_7C95D3  this=-  sig=csp ====
size_t __cdecl sub_7C95D3(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // esi

  _lock_file(Stream); /*0x7c95da*/
  v4 = fwrite(Buffer, ElementSize, ElementCount, Stream); /*0x7c95f3*/
  _unlock_file(Stream); /*0x7c95f5*/
  return v4; /*0x7c95ff*/
}


// ==== 0x007C9602  _fwrite  this=-  sig=csp ====
size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // edi
  size_t v5; // ebx
  unsigned int cnt; // eax
  size_t v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // eax
  size_t v12; // eax
  int Streama; // [esp+24h] [ebp+14h]

  v4 = ElementCount * ElementSize; /*0x7c960c*/
  v5 = ElementCount * ElementSize; /*0x7c961b*/
  if ( !(ElementCount * ElementSize) ) /*0x7c960c*/
    return 0; /*0x7c9621*/
  if ( (Stream->_flag & 0x10C) != 0 ) /*0x7c962f*/
    Streama = Stream->_bufsiz; /*0x7c9634*/
  else
    Streama = 4096; /*0x7c9639*/
  while ( 1 ) /*0x7c9640*/
  {
    if ( (Stream->_flag & 0x108) != 0 ) /*0x7c9649*/
    {
      cnt = Stream->_cnt; /*0x7c964b*/
      if ( cnt ) /*0x7c9650*/
      {
        v9 = v5; /*0x7c9654*/
        if ( v5 >= cnt ) /*0x7c9656*/
          v9 = Stream->_cnt; /*0x7c9658*/
        memcpy_0(Stream->_ptr, Buffer, v9); /*0x7c9660*/
        Stream->_cnt -= v9; /*0x7c9665*/
        Stream->_ptr += v9; /*0x7c9668*/
        v5 -= v9; /*0x7c966d*/
        Buffer = (char *)Buffer + v9; /*0x7c966f*/
LABEL_19:
        v4 = ElementCount * ElementSize; /*0x7c96ba*/
        goto LABEL_23; /*0x7c96bd*/
      }
    }
    if ( v5 >= Streama ) /*0x7c9677*/
      break; /*0x7c9677*/
    if ( _flsbuf(*(char *)Buffer, Stream) == -1 ) /*0x7c96d1*/
      goto LABEL_26; /*0x7c96d1*/
    Buffer = (char *)Buffer + 1; /*0x7c96d3*/
    --v5; /*0x7c96d9*/
    Streama = Stream->_bufsiz; /*0x7c96da*/
    if ( Streama <= 0 ) /*0x7c96df*/
      Streama = 1; /*0x7c96e1*/
LABEL_23:
    if ( !v5 ) /*0x7c96ea*/
      return ElementCount; /*0x7c96f7*/
  }
  if ( (Stream->_flag & 0x108) == 0 || !_flush(Stream) ) /*0x7c967e*/
  {
    if ( Streama ) /*0x7c968c*/
      v10 = v5 - v5 % Streama; /*0x7c9697*/
    else
      v10 = v5; /*0x7c969b*/
    v11 = _write(Stream->_file, Buffer, v10); /*0x7c96a4*/
    if ( v11 == -1 || (Buffer = (char *)Buffer + v11, v5 -= v11, v11 < v10) ) /*0x7c96b8*/
    {
      Stream->_flag |= 0x20u; /*0x7c96f8*/
      v12 = ElementCount * ElementSize; /*0x7c96fc*/
      return (v12 - v5) / ElementSize; /*0x7c96ff*/
    }
    goto LABEL_19; /*0x7c96b8*/
  }
LABEL_26:
  v12 = v4; /*0x7c9701*/
  return (v12 - v5) / ElementSize; /*0x7c96f3*/
}


// ==== 0x007C970C  __onexit  this=-  sig=csp ====
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  size_t v1; // eax
  _onexit_t *v2; // ecx
  size_t v3; // eax
  char *v4; // eax
  int (__cdecl *v5)(); // esi
  int v6; // ecx

  _lockexit(); /*0x7c970d*/
  v1 = _msize(CRTGlobal_B78BC0); /*0x7c9718*/
  v2 = (_onexit_t *)CRTGlobal_B78BBC; /*0x7c9724*/
  if ( v1 >= CRTGlobal_B78BBC - (int)CRTGlobal_B78BC0 + 4 ) /*0x7c9733*/
    goto LABEL_5; /*0x7c9733*/
  v3 = _msize(CRTGlobal_B78BC0); /*0x7c9736*/
  v4 = (char *)realloc(CRTGlobal_B78BC0, v3 + 16); /*0x7c9745*/
  if ( v4 ) /*0x7c974f*/
  {
    v6 = CRTGlobal_B78BBC - (_DWORD)CRTGlobal_B78BC0; /*0x7c975b*/
    CRTGlobal_B78BC0 = v4; /*0x7c9761*/
    v2 = (_onexit_t *)&v4[4 * (v6 >> 2)]; /*0x7c9769*/
    CRTGlobal_B78BBC = (int)v2; /*0x7c976c*/
LABEL_5:
    *v2 = Func; /*0x7c9772*/
    CRTGlobal_B78BBC += 4; /*0x7c9778*/
    v5 = Func; /*0x7c977f*/
    goto LABEL_6; /*0x7c977f*/
  }
  v5 = 0; /*0x7c9751*/
LABEL_6:
  _unlockexit(); /*0x7c9781*/
  return v5; /*0x7c9788*/
}


// ==== 0x007C978A  _atexit  this=-  sig=csp ====
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != 0) - 1; /*0x7c979b*/
}


// ==== 0x007C979C  ___onexitinit  this=-  sig=ida-proto ====
void *__onexitinit()
{
  _DWORD *v0; // eax

  v0 = malloc(0x80u); /*0x7c97a1*/
  CRTGlobal_B78BC0 = v0; /*0x7c97a9*/
  if ( !v0 ) /*0x7c97ae*/
    _amsg_exit(0x18u); /*0x7c97b2*/
  *v0 = 0; /*0x7c97bd*/
  CRTGlobal_B78BBC = (int)CRTGlobal_B78BC0; /*0x7c97c5*/
  return CRTGlobal_B78BC0; /*0x7c97ca*/
}


// ==== 0x007C97CB  __toupper  this=-  sig=ida-proto ====
int __cdecl _toupper(int C)
{
  return C - 32; /*0x7c97d2*/
}


// ==== 0x007C97D3  _toupper  this=-  sig=csp ====
int __cdecl toupper(Color *aP0)
{
  int v1; // ebx
  int result; // eax
  int C; // [esp+8h] [ebp+4h]

  v1 = 0; /*0x7c97d4*/
  if ( CRTGlobal_B782A0 ) /*0x7c97dc*/
  {
    InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7c97f9*/
    if ( CRTGlobal_B78BA0 ) /*0x7c980b*/
    {
      InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7c980e*/
      _lock(19); /*0x7c9812*/
      v1 = 1; /*0x7c981a*/
    }
    C = toupper_0((int)aP0); /*0x7c9827*/
    if ( v1 ) /*0x7c982b*/
      _unlock(19); /*0x7c982f*/
    else
      InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7c9838*/
    return C; /*0x7c983a*/
  }
  else
  {
    result = (int)aP0; /*0x7c97de*/
    if ( (int)aP0 >= 97 && (int)aP0 <= 122 ) /*0x7c97ea*/
      return (int)&aP0[-8]; /*0x7c97ec*/
  }
  return result; /*0x7c97ef*/
}


// ==== 0x007C9842  _toupper_0  this=-  sig=csp ====
int __cdecl toupper_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  CHAR DestStr[4]; // [esp+4h] [ebp-4h] BYREF

  if ( CRTGlobal_B782A0 )
  {
    v2 = C; /*0x7c986d*/
    if ( (C >= 256
       || ((int)MEMORY[0x87C79C] <= 1 ? (v3 = *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 2) : (v3 = _isctype(C, 2)), v3))
      && (*((char *)MEMORY[0x87C590] + 2 * BYTE1(v2) + 1) >= 0
        ? (LOWORD(C) = (unsigned __int8)v2,
           v4 = __crtLCMapStringA((LCID)CRTGlobal_B782A0, 0x200u, (LPCSTR)&C, 1, DestStr, 3, 0, 1))
        : (LOBYTE(C) = BYTE1(v2),
           *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2,
           v4 = __crtLCMapStringA((LCID)CRTGlobal_B782A0, 0x200u, (LPCSTR)&C, 2, DestStr, 3, 0, 1)),
          v4) )
    {
      if ( v4 == 1 ) /*0x7c98f6*/
        return (unsigned __int8)DestStr[0]; /*0x7c98f8*/
      else
        return *(unsigned __int16 *)DestStr; /*0x7c9909*/
    }
    else
    {
      return v2; /*0x7c989c*/
    }
  }
  else
  {
    result = C; /*0x7c9850*/
    if ( C >= 97 && C <= 122 ) /*0x7c985f*/
      return C - 32; /*0x7c9865*/
  }
  return result; /*0x7c990b*/
}


// ==== 0x007C990E  _isalpha  this=-  sig=csp ====
int __cdecl isalpha(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9915*/
    return *((_WORD *)MEMORY[0x87C590] + C) & 0x103; /*0x7c9936*/
  else
    return _isctype(C, 259); /*0x7c9920*/
}


// ==== 0x007C993C  _isupper  this=-  sig=ida-proto ====
int __cdecl isupper(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9943*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 1; /*0x7c9960*/
  else
    return _isctype(C, 1); /*0x7c994b*/
}


// ==== 0x007C9964  _islower  this=-  sig=ida-proto ====
int __cdecl islower(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c996b*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 2; /*0x7c9988*/
  else
    return _isctype(C, 2); /*0x7c9973*/
}


// ==== 0x007C998C  _isdigit  this=-  sig=csp ====
int __cdecl isdigit(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9993*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 4; /*0x7c99b0*/
  else
    return _isctype(C, 4); /*0x7c999b*/
}


// ==== 0x007C99B4  _isxdigit  this=-  sig=csp ====
int __cdecl isxdigit(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c99bb*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 0x80; /*0x7c99db*/
  else
    return _isctype(C, 128); /*0x7c99c6*/
}


// ==== 0x007C99E1  _isspace  this=-  sig=csp ====
int __cdecl isspace(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c99e8*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 8; /*0x7c9a05*/
  else
    return _isctype(C, 8); /*0x7c99f0*/
}


// ==== 0x007C9A09  _ispunct  this=-  sig=ida-proto ====
int __cdecl ispunct(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9a10*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 0x10; /*0x7c9a2d*/
  else
    return _isctype(C, 16); /*0x7c9a18*/
}


// ==== 0x007C9A31  _isalnum  this=-  sig=csp ====
int __cdecl isalnum(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9a38*/
    return *((_WORD *)MEMORY[0x87C590] + C) & 0x107; /*0x7c9a59*/
  else
    return _isctype(C, 263); /*0x7c9a43*/
}


// ==== 0x007C9A5F  _isprint  this=-  sig=ida-proto ====
int __cdecl isprint(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9a66*/
    return *((_WORD *)MEMORY[0x87C590] + C) & 0x157; /*0x7c9a87*/
  else
    return _isctype(C, 343); /*0x7c9a71*/
}


// ==== 0x007C9A8D  _isgraph  this=-  sig=csp ====
int __cdecl isgraph(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9a94*/
    return *((_WORD *)MEMORY[0x87C590] + C) & 0x117; /*0x7c9ab5*/
  else
    return _isctype(C, 279); /*0x7c9a9f*/
}


// ==== 0x007C9ABB  _iscntrl  this=-  sig=ida-proto ====
int __cdecl iscntrl(int C)
{
  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9ac2*/
    return *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 0x20; /*0x7c9adf*/
  else
    return _isctype(C, 32); /*0x7c9aca*/
}


// ==== 0x007C9AE3  ___isascii  this=-  sig=ida-proto ====
int __cdecl __isascii(int C)
{
  return (unsigned int)C < 0x80; /*0x7c9aef*/
}


// ==== 0x007C9AF0  ___toascii  this=-  sig=ida-proto ====
int __cdecl __toascii(int C)
{
  return C & 0x7F; /*0x7c9af7*/
}


// ==== 0x007C9AF8  ___iscsymf  this=-  sig=ida-proto ====
int __cdecl __iscsymf(int C)
{
  int result; // eax

  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9aff*/
    result = *((_WORD *)MEMORY[0x87C590] + C) & 0x103; /*0x7c9b20*/
  else
    result = _isctype(C, 259); /*0x7c9b0a*/
  if ( result || C == 95 ) /*0x7c9b2e*/
    return 1; /*0x7c9b33*/
  return result; /*0x7c9b30*/
}


// ==== 0x007C9B35  ___iscsym  this=-  sig=ida-proto ====
int __cdecl __iscsym(int C)
{
  int result; // eax

  if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9b3c*/
    result = *((_WORD *)MEMORY[0x87C590] + C) & 0x107; /*0x7c9b5d*/
  else
    result = _isctype(C, 263); /*0x7c9b47*/
  if ( result || C == 95 ) /*0x7c9b6b*/
    return 1; /*0x7c9b70*/
  return result; /*0x7c9b6d*/
}


// ==== 0x007C9B72  _atol  this=-  sig=csp ====
int __cdecl atol(const char *String)
{
  int v3; // esi
  const char *v4; // edi
  int v5; // ebp
  int v6; // ebx
  int result; // eax

  while ( (int)MEMORY[0x87C79C] <= 1
        ? *((_BYTE *)MEMORY[0x87C590] + 2 * *(unsigned __int8 *)String) & 8
        : _isctype(*(unsigned __int8 *)String, 8) )
    ++String; /*0x7c9ba5*/
  v3 = *(unsigned __int8 *)String; /*0x7c9ba8*/
  v4 = String + 1; /*0x7c9bab*/
  v5 = v3; /*0x7c9baf*/
  if ( v3 == 45 || v3 == 43 ) /*0x7c9bb6*/
    v3 = *(unsigned __int8 *)v4++; /*0x7c9bb8*/
  v6 = 0; /*0x7c9bbc*/
  while ( (int)MEMORY[0x87C79C] <= 1 ? *((_BYTE *)MEMORY[0x87C590] + 2 * v3) & 4 : _isctype(v3, 4) )
  {
    v6 = v3 + 10 * v6 - 48; /*0x7c9be5*/
    v3 = *(unsigned __int8 *)v4++; /*0x7c9be9*/
  }
  result = v6; /*0x7c9bf2*/
  if ( v5 == 45 ) /*0x7c9bf4*/
    return -v6; /*0x7c9bf6*/
  return result; /*0x7c9bf8*/
}


// ==== 0x007C9BFD  _atoi  this=-  sig=csp ====
int __cdecl atoi(const char *String)
{
  return atol(String); /*0x7c9c07*/
}


// ==== 0x007C9C08  __atoi64  this=-  sig=ida-proto ====
__int64 __cdecl _atoi64(const char *String)
{
  int v3; // esi
  const char *v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v8; // kr00_8
  __int64 result; // rax
  int v10; // [esp+10h] [ebp-4h]

  while ( (int)MEMORY[0x87C79C] <= 1
        ? *((_BYTE *)MEMORY[0x87C590] + 2 * *(unsigned __int8 *)String) & 8
        : _isctype(*(unsigned __int8 *)String, 8) )
    ++String; /*0x7c9c3c*/
  v3 = *(unsigned __int8 *)String; /*0x7c9c3f*/
  v4 = String + 1; /*0x7c9c42*/
  v10 = v3; /*0x7c9c46*/
  if ( v3 == 45 || v3 == 43 ) /*0x7c9c4f*/
    v3 = *(unsigned __int8 *)v4++; /*0x7c9c51*/
  v5 = 0; /*0x7c9c55*/
  v6 = 0; /*0x7c9c57*/
  while ( (int)MEMORY[0x87C79C] <= 1 ? *((_BYTE *)MEMORY[0x87C590] + 2 * v3) & 4 : _isctype(v3, 4) )
  {
    v8 = 10 * __PAIR64__(v6, v5) + v3 - 48; /*0x7c9c9a*/
    v6 = HIDWORD(v8); /*0x7c9c9e*/
    v5 = v8; /*0x7c9c9e*/
    v3 = *(unsigned __int8 *)v4++; /*0x7c9ca0*/
  }
  LODWORD(result) = v5; /*0x7c9cab*/
  if ( v10 == 45 ) /*0x7c9cad*/
    return -__SPAIR64__(v6, v5); /*0x7c9cb6*/
  HIDWORD(result) = v6; /*0x7c9cba*/
  return result; /*0x7c9cbc*/
}


// ==== 0x007C9CC2  _strtok  this=IUnknown  sig=csp ====
char *__cdecl strtok(char *String, ObjectClass *aP1)
{
  char v3; // dl
  VectorClass *v4; // edx
  VectorClass *v5; // ebx
  _BYTE v7[32]; // [esp+Ch] [ebp-20h] BYREF
  const char *Delimiter; // [esp+38h] [ebp+Ch]

  Delimiter = (const char *)_getptd(); /*0x7c9cd5*/
  memset(v7, 0, sizeof(v7)); /*0x7c9ce0*/
  do /*0x7c9cfc*/
  {
    v3 = aP1->__pad_0[0]; /*0x7c9ce3*/
    v7[(unsigned __int8)aP1->__pad_0[0] >> 3] |= 1 << (aP1->__pad_0[0] & 7); /*0x7c9cf7*/
    aP1 = (ObjectClass *)((char *)aP1 + 1); /*0x7c9cf9*/
  }
  while ( v3 ); /*0x7c9cfc*/
  v4 = (VectorClass *)String; /*0x7c9cfe*/
  if ( !String ) /*0x7c9d03*/
    v4 = (VectorClass *)*((_DWORD *)Delimiter + 6); /*0x7c9d08*/
  while ( ((unsigned __int8)(1 << (v4->vtable0[0] & 7)) & v7[(unsigned __int8)v4->vtable0[0] >> 3]) != 0 /*0x7c9d26*/
       && v4->vtable0[0] )
    v4 = (VectorClass *)((char *)v4 + 1); /*0x7c9d28*/
  v5 = v4; /*0x7c9d2b*/
  while ( v4->vtable0[0] ) /*0x7c9d31*/
  {
    if ( ((unsigned __int8)(1 << (v4->vtable0[0] & 7)) & v7[(unsigned __int8)v4->vtable0[0] >> 3]) != 0 ) /*0x7c9d48*/
    {
      v4->vtable0[0] = 0; /*0x7c9d4d*/
      v4 = (VectorClass *)((char *)v4 + 1); /*0x7c9d50*/
      break; /*0x7c9d50*/
    }
    v4 = (VectorClass *)((char *)v4 + 1); /*0x7c9d4a*/
  }
  *((_DWORD *)Delimiter + 6) = v4; /*0x7c9d51*/
  return v4 != v5 ? (char *)v5 : 0;
}


// ==== 0x007C9D66  _atof  this=-  sig=csp ====
double __cdecl atof(CCINIClass *aP0)
{
  _BYTE v4[24]; // [esp+4h] [ebp-18h] BYREF

  while ( *(int *)&stru_87C374.__pad_3BC[108] <= 1
        ? *(_BYTE *)(stru_87C374.field_21C + 2 * (unsigned __int8)aP0->__pad_0[0]) & 8
        : _isctype((unsigned __int8)aP0->__pad_0[0], 8) )
    aP0 = (CCINIClass *)((char *)aP0 + 1); /*0x7c9d9b*/
  strlen(aP0->__pad_0); /*0x7c9da3*/
  return *(double *)(_fltin2((int)v4, (int)aP0) + 16); /*0x7c9dba*/
}


// ==== 0x007C9DBD  globalHelper_0C9DBD  this=-  sig=csp ====
int __cdecl globalHelper_0C9DBD(int a1, CCINIClass *aP1, int a3)
{
  return strtoxl((unsigned __int8 *)a1, (unsigned __int8 **)aP1, a3, 0); /*0x7c9dd3*/
}


// ==== 0x007C9DD4  ObjectClass::_strtoxl  this=ObjectClass  sig=csp ====
int __cdecl strtoxl(unsigned __int8 *a1, unsigned __int8 **a2, int a3, int a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 *i; // esi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned __int8 *v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-Ch]
  unsigned int v13; // [esp+10h] [ebp-8h]
  unsigned __int8 *v14; // [esp+14h] [ebp-4h]
  unsigned __int8 *v15; // [esp+14h] [ebp-4h]

  v13 = 0; /*0x7c9ddb*/
  v4 = *a1; /*0x7c9de4*/
  for ( i = a1 + 1; (int)MEMORY[0x87C79C] <= 1 ? *((_BYTE *)MEMORY[0x87C590] + 2 * v4) & 8 : _isctype(v4, 8); ++i )
    v4 = *i; /*0x7c9e17*/
  v14 = i; /*0x7c9e1f*/
  if ( v4 == 45 ) /*0x7c9e22*/
  {
    a4 |= 2u; /*0x7c9e24*/
LABEL_10:
    v4 = *i++; /*0x7c9e2f*/
    v14 = i; /*0x7c9e32*/
    goto LABEL_11; /*0x7c9e32*/
  }
  if ( v4 == 43 ) /*0x7c9e2d*/
    goto LABEL_10; /*0x7c9e2d*/
LABEL_11:
  if ( a3 >= 0 && a3 != 1 && a3 <= 36 ) /*0x7c9e4c*/
  {
    if ( !a3 ) /*0x7c9e57*/
    {
      if ( v4 != 48 ) /*0x7c9e5c*/
      {
        a3 = 10; /*0x7c9e5e*/
LABEL_26:
        v12 = 0xFFFFFFFF / a3; /*0x7c9e99*/
        while ( 1 ) /*0x7c9ea9*/
        {
          if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9eb3*/
            v7 = *((_BYTE *)MEMORY[0x87C590] + 2 * v4) & 4; /*0x7c9ec9*/
          else
            v7 = _isctype(v4, 4); /*0x7c9eb8*/
          if ( v7 ) /*0x7c9ece*/
          {
            v8 = (char)v4 - 48; /*0x7c9ed3*/
          }
          else
          {
            if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7c9edf*/
              v9 = *((_WORD *)MEMORY[0x87C590] + v4) & 0x103; /*0x7c9ef5*/
            else
              v9 = _isctype(v4, 259); /*0x7c9ee3*/
            if ( !v9 ) /*0x7c9ef9*/
            {
LABEL_44:
              v15 = v14 - 1; /*0x7c9f45*/
              if ( (a4 & 8) != 0 ) /*0x7c9f50*/
              {
                if ( (a4 & 4) != 0 /*0x7c9f84*/
                  || (a4 & 1) == 0 && ((a4 & 2) != 0 && v13 > 0x80000000 || (a4 & 2) == 0 && v13 > 0x7FFFFFFF) )
                {
                  *_errno() = 34; /*0x7c9f8f*/
                  if ( (a4 & 1) != 0 ) /*0x7c9f95*/
                    v13 = -1; /*0x7c9f97*/
                  else
                    v13 = ((a4 & 2) != 0) + 0x7FFFFFFF; /*0x7c9faa*/
                }
              }
              else
              {
                if ( a2 ) /*0x7c9f54*/
                  v15 = a1; /*0x7c9f59*/
                v13 = 0; /*0x7c9f5c*/
              }
              if ( a2 ) /*0x7c9faf*/
                *a2 = v15; /*0x7c9fb4*/
              if ( (a4 & 2) != 0 ) /*0x7c9fba*/
                return -v13; /*0x7c9fc1*/
              return v13; /*0x7c9fc7*/
            }
            v8 = toupper((char)v4) - 55; /*0x7c9f07*/
          }
          if ( v8 >= a3 ) /*0x7c9f0d*/
            goto LABEL_44; /*0x7c9f0d*/
          a4 |= 8u; /*0x7c9f12*/
          if ( v13 < v12 || v13 == v12 && v8 <= 0xFFFFFFFF % a3 ) /*0x7c9f27*/
            v13 = v8 + a3 * v13; /*0x7c9f35*/
          else
            a4 |= 4u; /*0x7c9f29*/
          v10 = v14++; /*0x7c9f38*/
          v4 = *v10; /*0x7c9f3e*/
        }
      }
      if ( *i != 120 && *i != 88 ) /*0x7c9e6f*/
      {
        a3 = 8; /*0x7c9e71*/
        goto LABEL_26; /*0x7c9e78*/
      }
      a3 = 16; /*0x7c9e7a*/
    }
    if ( a3 == 16 && v4 == 48 && (*i == 120 || *i == 88) ) /*0x7c9e8f*/
    {
      v4 = i[1]; /*0x7c9e91*/
      v14 = i + 2; /*0x7c9e96*/
    }
    goto LABEL_26; /*0x7c9e96*/
  }
  if ( a2 ) /*0x7c9fce*/
    *a2 = a1; /*0x7c9fd0*/
  return 0; /*0x7c9fd4*/
}


// ==== 0x007C9FD9  _strtoul  this=-  sig=csp ====
unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return strtoxl((unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1); /*0x7c9fef*/
}


// ==== 0x007C9FF0  __makepath  this=ScenarioClass  sig=csp ====
void __cdecl _makepath(char *Buffer, const char *Drive, const char *Dir, ObjectClass *aP3, const char *Ext)
{
  char *v5; // esi
  const char *v6; // ecx
  char v7; // al
  unsigned __int8 v8; // al
  ObjectClass *v9; // ecx
  char v10; // al
  ObjectClass *v11; // eax
  char v12; // cl

  if ( Drive && *Drive ) /*0x7c9ffb*/
  {
    *Buffer = *Drive; /*0x7ca004*/
    Buffer[1] = 58; /*0x7ca007*/
    v5 = Buffer + 2; /*0x7ca00a*/
  }
  else
  {
    v5 = Buffer; /*0x7ca00d*/
  }
  v6 = Dir; /*0x7ca015*/
  if ( Dir ) /*0x7ca017*/
  {
    v7 = *Dir; /*0x7ca019*/
    if ( *Dir ) /*0x7ca019*/
    {
      do /*0x7ca028*/
      {
        *v5 = v7; /*0x7ca01f*/
        v7 = v6[1]; /*0x7ca021*/
        ++v5; /*0x7ca024*/
        ++v6; /*0x7ca025*/
      }
      while ( v7 ); /*0x7ca028*/
      v8 = *_mbsdec((const unsigned __int8 *)Dir, (const unsigned __int8 *)v6); /*0x7ca031*/
      if ( v8 != 47 && v8 != 92 ) /*0x7ca03b*/
        *v5++ = 92; /*0x7ca03d*/
    }
  }
  v9 = aP3; /*0x7ca046*/
  if ( aP3 ) /*0x7ca048*/
  {
    v10 = aP3->__pad_0[0]; /*0x7ca04a*/
    while ( v10 ) /*0x7ca04e*/
    {
      *v5 = v10; /*0x7ca050*/
      v10 = v9->__pad_0[1]; /*0x7ca052*/
      ++v5; /*0x7ca055*/
      v9 = (ObjectClass *)((char *)v9 + 1); /*0x7ca056*/
    }
  }
  v11 = (ObjectClass *)Ext; /*0x7ca059*/
  if ( Ext ) /*0x7ca05e*/
  {
    if ( *Ext && *Ext != 46 ) /*0x7ca069*/
      *v5++ = 46; /*0x7ca06b*/
    do /*0x7ca077*/
    {
      v12 = v11->__pad_0[0]; /*0x7ca06f*/
      *v5++ = v11->__pad_0[0]; /*0x7ca071*/
      v11 = (ObjectClass *)((char *)v11 + 1); /*0x7ca074*/
    }
    while ( v12 ); /*0x7ca077*/
  }
  else
  {
    *v5 = 0; /*0x7ca07b*/
  }
}


// ==== 0x007CA090  _memcpy  this=BlowStraw  sig=csp ====
void *__cdecl memcpy(void *a0, AbstractClass *aP1, size_t Size)
{
  AbstractClass *v3; // esi
  BlowStraw *v4; // edi
  size_t v5; // ecx
  BlowStraw *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = aP1; /*0x7ca095*/
  v4 = (BlowStraw *)a0; /*0x7ca09b*/
  if ( a0 > aP1 && a0 < &aP1->__pad_0[Size] ) /*0x7ca0aa*/
  {
    v7 = &aP1->__pad_0[Size - 4]; /*0x7ca228*/
    v8 = (char *)a0 + Size - 4; /*0x7ca22c*/
    if ( ((unsigned __int8)v8 & 3) == 0 ) /*0x7ca236*/
    {
      v9 = Size >> 2; /*0x7ca238*/
      if ( Size >> 2 >= 8 ) /*0x7ca241*/
      {
        while ( v9 ) /*0x7ca244*/
        {
          *(_DWORD *)v8 = *(_DWORD *)v7; /*0x7ca244*/
          v7 -= 4; /*0x7ca244*/
          v8 -= 4; /*0x7ca244*/
          --v9; /*0x7ca244*/
        }
        switch ( Size & 3 ) /*0x7ca247*/
        {
          case 0u: /*0x7ca247*/
            goto TrailDown0;
          case 1u: /*0x7ca247*/
            goto TrailDown1;
          case 2u: /*0x7ca247*/
            goto TrailDown2;
          case 3u: /*0x7ca247*/
            goto TrailDown3;
        }
      }
      switch ( Size & 3 ) /*0x7ca367*/
      {
        case 0u: /*0x7ca367*/
          goto TrailDown0;
        case 1u: /*0x7ca367*/
          goto TrailDown1;
        case 2u: /*0x7ca367*/
          goto TrailDown2;
        case 3u: /*0x7ca367*/
          goto TrailDown3;
      }
    }
    switch ( Size ) /*0x7ca274*/
    {
      case 0u: /*0x7ca274*/
TrailDown0:
        result = (BlowStraw *)a0; /*0x7ca380*/
        break; /*0x7ca386*/
      case 1u: /*0x7ca274*/
TrailDown1:
        v8[3] = v7[3]; /*0x7ca388*/
        result = (BlowStraw *)a0; /*0x7ca38e*/
        break; /*0x7ca394*/
      case 2u: /*0x7ca274*/
TrailDown2:
        v8[3] = v7[3]; /*0x7ca398*/
        v8[2] = v7[2]; /*0x7ca3a1*/
        result = (BlowStraw *)a0; /*0x7ca3a4*/
        break; /*0x7ca3aa*/
      case 3u: /*0x7ca274*/
TrailDown3:
        v8[3] = v7[3]; /*0x7ca3ac*/
        v8[2] = v7[2]; /*0x7ca3b5*/
        v8[1] = v7[1]; /*0x7ca3bb*/
        result = (BlowStraw *)a0; /*0x7ca3be*/
        break; /*0x7ca3be*/
      default:
        __asm { jmp dword ptr ds:loc_7CA274+4[eax*4] } /*0x7ca26d*/
        return result; /*0x7ca26d*/
    }
  }
  else
  {
    if ( ((unsigned __int8)a0 & 3) != 0 ) /*0x7ca0b6*/
    {
      if ( Size >= 4 ) /*0x7ca0d6*/
        __asm { jmp dword ptr ds:loc_7CA0EC+4[eax*4] } /*0x7ca0dd*/
      __asm { jmp dword ptr ds:TrailUp0[ecx*4]; jumptable 007CA0C5 case 0 } /*0x7ca0e4*/
    }
    v5 = Size >> 2; /*0x7ca0b8*/
    switch ( v5 ) /*0x7ca0ec*/
    {
      case 0u: /*0x7ca0ec*/
        goto UnwindUp0;
      case 1u: /*0x7ca0ec*/
        goto UnwindUp1;
      case 2u: /*0x7ca0ec*/
        goto UnwindUp2;
      case 3u: /*0x7ca0ec*/
        goto UnwindUp3;
      case 4u: /*0x7ca0ec*/
        goto UnwindUp4;
      case 5u: /*0x7ca0ec*/
        goto UnwindUp5;
      case 6u: /*0x7ca0ec*/
        goto UnwindUp6;
      case 7u: /*0x7ca0ec*/
        *((_DWORD *)a0 + v5 - 7) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 28]; /*0x7ca190*/
UnwindUp6:
        *((_DWORD *)a0 + v5 - 6) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 24]; /*0x7ca194*/
UnwindUp5:
        *((_DWORD *)a0 + v5 - 5) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 20]; /*0x7ca19c*/
UnwindUp4:
        *((_DWORD *)a0 + v5 - 4) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 16]; /*0x7ca1a4*/
UnwindUp3:
        *((_DWORD *)a0 + v5 - 3) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 12]; /*0x7ca1ac*/
UnwindUp2:
        *((_DWORD *)a0 + v5 - 2) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 8]; /*0x7ca1b4*/
UnwindUp1:
        *((_DWORD *)a0 + v5 - 1) = *(_DWORD *)&aP1->__pad_0[4 * v5 - 4]; /*0x7ca1bc*/
        v3 = (AbstractClass *)((char *)aP1 + 4 * v5); /*0x7ca1cb*/
        v4 = (BlowStraw *)((char *)a0 + 4 * v5); /*0x7ca1cd*/
UnwindUp0:
        switch ( Size & 3 ) /*0x7ca1cf*/
        {
          case 0u: /*0x7ca1cf*/
            goto TrailUp0;
          case 1u: /*0x7ca1cf*/
            goto TrailUp1;
          case 2u: /*0x7ca1cf*/
            goto TrailUp2;
          case 3u: /*0x7ca1cf*/
            goto TrailUp3;
        }
      default:
        qmemcpy(a0, aP1, 4 * v5); /*0x7ca0c3*/
        v3 = (AbstractClass *)((char *)aP1 + 4 * v5); /*0x7ca0c3*/
        v4 = (BlowStraw *)((char *)a0 + 4 * v5); /*0x7ca0c3*/
        switch ( Size & 3 ) /*0x7ca0c5*/
        {
          case 0u: /*0x7ca0c5*/
TrailUp0:
            result = (BlowStraw *)a0; /*0x7ca1e8*/
            break; /*0x7ca1ee*/
          case 1u: /*0x7ca0c5*/
TrailUp1:
            v4->__pad_0[0] = v3->__pad_0[0]; /*0x7ca1f0*/
            result = (BlowStraw *)a0; /*0x7ca1f4*/
            break; /*0x7ca1fa*/
          case 2u: /*0x7ca0c5*/
TrailUp2:
            v4->__pad_0[0] = v3->__pad_0[0]; /*0x7ca1fc*/
            v4->__pad_0[1] = v3->__pad_0[1]; /*0x7ca203*/
            result = (BlowStraw *)a0; /*0x7ca206*/
            break; /*0x7ca20c*/
          case 3u: /*0x7ca0c5*/
TrailUp3:
            v4->__pad_0[0] = v3->__pad_0[0]; /*0x7ca210*/
            v4->__pad_0[1] = v3->__pad_0[1]; /*0x7ca217*/
            v4->__pad_0[2] = v3->__pad_0[2]; /*0x7ca21d*/
            result = (BlowStraw *)a0; /*0x7ca220*/
            break; /*0x7ca226*/
        }
        break; /*0x7ca226*/
    }
  }
  return result; /*0x7ca1eb*/
}


// ==== 0x007CA3C5  _wcsrchr  this=-  sig=csp ====
wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // eax
  wchar_t i; // si
  const wchar_t *j; // eax

  v2 = Str; /*0x7ca3c5*/
  for ( i = *Str; ; i = *v2 ) /*0x7ca3ce*/
  {
    ++v2; /*0x7ca3d2*/
    if ( !i ) /*0x7ca3d7*/
      break; /*0x7ca3d7*/
  }
  for ( j = v2 - 1; j != Str; --j ) /*0x7ca3e7*/
  {
    if ( *j == Ch ) /*0x7ca3ec*/
      break; /*0x7ca3ec*/
  }
  return Ch == *j ? (wchar_t *)j : 0;
}


// ==== 0x007CA405  _wcslen  this=AbstractClass  sig=csp ====
size_t __cdecl wcslen(const wchar_t *String)
{
  const wchar_t *v1; // eax

  v1 = String + 1; /*0x7ca40d*/
  if ( *String ) /*0x7ca409*/
  {
    while ( *v1++ ) /*0x7ca41a*/
      ; /*0x7ca412*/
  }
  return v1 - String - 1; /*0x7ca421*/
}


// ==== 0x007CA422  _wcsncpy  this=-  sig=csp ====
wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, DropListClass *aP2)
{
  DropListClass *v3; // ecx
  wchar_t *v4; // edi
  wchar_t v6; // ax
  unsigned int v7; // ecx
  char v8; // cf
  unsigned int v9; // ecx
  wchar_t *v10; // edi
  int i; // ecx

  v3 = aP2; /*0x7ca422*/
  v4 = Destination; /*0x7ca428*/
  if ( aP2 ) /*0x7ca430*/
  {
    do /*0x7ca446*/
    {
      v6 = *Source; /*0x7ca436*/
      *v4++ = *Source++; /*0x7ca439*/
      if ( !v6 ) /*0x7ca443*/
        break; /*0x7ca443*/
      v3 = (DropListClass *)((char *)v3 - 1); /*0x7ca445*/
    }
    while ( v3 ); /*0x7ca446*/
    if ( v3 ) /*0x7ca44a*/
    {
      v7 = (unsigned int)&v3[-1].DropListClass_field_0x50 + 3; /*0x7ca44c*/
      if ( v7 ) /*0x7ca44d*/
      {
        v8 = v7 & 1; /*0x7ca451*/
        v9 = v7 >> 1; /*0x7ca451*/
        memset(v4, 0, 4 * v9); /*0x7ca453*/
        v10 = &v4[2 * v9]; /*0x7ca453*/
        for ( i = v8; i; --i ) /*0x7ca455*/
          *v10++ = 0; /*0x7ca457*/
      }
    }
  }
  return Destination; /*0x7ca45c*/
}


// ==== 0x007CA45F  _wcscat  this=CampaignScore  sig=csp ====
wchar_t *__cdecl wcscat(wchar_t *Destination, CampaignScore *aP1)
{
  wchar_t *result; // eax
  wchar_t *i; // ecx
  __int16 v5; // si

  result = Destination; /*0x7ca45f*/
  for ( i = Destination; *i; ++i ) /*0x7ca465*/
    ; /*0x7ca46c*/
  do /*0x7ca485*/
  {
    v5 = *(_WORD *)aP1->__pad_0; /*0x7ca478*/
    *i++ = *(_WORD *)aP1->__pad_0; /*0x7ca47b*/
    aP1 = (CampaignScore *)((char *)aP1 + 2); /*0x7ca481*/
  }
  while ( v5 ); /*0x7ca485*/
  return result; /*0x7ca488*/
}


// ==== 0x007CA489  _wcscpy  this=-  sig=csp ====
wchar_t *__cdecl wcscpy(wchar_t *Destination, const wchar_t *Source)
{
  const wchar_t *v2; // ecx
  wchar_t *result; // eax
  wchar_t v4; // dx
  wchar_t *v5; // esi

  v2 = Source; /*0x7ca489*/
  result = Destination; /*0x7ca48d*/
  v4 = *Source; /*0x7ca492*/
  v5 = Destination + 1; /*0x7ca495*/
  *Destination = *Source; /*0x7ca498*/
  while ( 1 ) /*0x7ca49c*/
  {
    ++v2; /*0x7ca49c*/
    if ( !v4 ) /*0x7ca4a0*/
      break; /*0x7ca4a0*/
    v4 = *v2; /*0x7ca4a2*/
    *v5++ = *v2; /*0x7ca4a5*/
  }
  return result; /*0x7ca4ac*/
}


// ==== 0x007CA4B0  _strstr  this=-  sig=csp ====
char *__cdecl strstr(ObjectClass *aP0, const char *SubStr)
{
  char v2; // dl
  ObjectClass *v3; // edi
  char v4; // dh
  const char *v5; // ecx
  char *v6; // esi
  char v7; // al
  char v9; // ah
  char v10; // al
  char v11; // al

  v2 = *SubStr; /*0x7ca4b7*/
  v3 = aP0; /*0x7ca4b9*/
  if ( !*SubStr ) /*0x7ca4b7*/
    return aP0->__pad_0; /*0x7ca52a*/
  v4 = SubStr[1]; /*0x7ca4c1*/
  if ( !v4 ) /*0x7ca4c6*/
    JUMPOUT(0x7CAF36); /*0x7caf36*/
findnext:
  v5 = SubStr; /*0x7ca4c8*/
  v6 = &v3->__pad_0[1]; /*0x7ca4d0*/
  if ( v3->__pad_0[0] == v2 ) /*0x7ca4d3*/
    goto first_char_found; /*0x7ca4d3*/
  if ( v3->__pad_0[0] ) /*0x7ca4ce*/
  {
    while ( 2 ) /*0x7ca4d9*/
    {
      v7 = *v6++; /*0x7ca4d9*/
      while ( v7 == v2 ) /*0x7ca4de*/
      {
first_char_found:
        v7 = *v6++; /*0x7ca4ea*/
        if ( v7 == v4 ) /*0x7ca4ef*/
        {
          v3 = (ObjectClass *)(v6 - 1); /*0x7ca4f1*/
          while ( 1 ) /*0x7ca4f4*/
          {
            v9 = v5[2]; /*0x7ca4f4*/
            if ( !v9 ) /*0x7ca4f9*/
              break; /*0x7ca4f9*/
            v10 = *v6; /*0x7ca4fb*/
            v6 += 2; /*0x7ca4fd*/
            if ( v10 != v9 ) /*0x7ca502*/
              goto findnext; /*0x7ca502*/
            v11 = v5[3]; /*0x7ca504*/
            if ( !v11 ) /*0x7ca509*/
              break; /*0x7ca509*/
            v5 += 2; /*0x7ca50e*/
            if ( v11 != *(v6 - 1) ) /*0x7ca513*/
              goto findnext; /*0x7ca513*/
          }
          return (char *)&v3[-1].lineTrailer + 3; /*0x7ca529*/
        }
      }
      if ( v7 ) /*0x7ca4e2*/
        continue; /*0x7ca4e2*/
      break;
    }
  }
  return 0; /*0x7ca4e4*/
}


// ==== 0x007CA530  _sscanf  this=AbstractClass  sig=csp ====
int sscanf(const char *const Buffer, const char *const Format, ...)
{
  FILE Stream; // [esp+0h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, Format);
  Stream._flag = 73; /*0x7ca539*/
  Stream._base = (char *)Buffer; /*0x7ca541*/
  Stream._ptr = (char *)Buffer; /*0x7ca544*/
  Stream._cnt = strlen(Buffer); /*0x7ca54c*/
  return _input(&Stream, (int)Format, (int)va); /*0x7ca562*/
}


// ==== 0x007CA564  _swprintf  this=-  sig=csp ====
int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, CampaignScore *aP3)
{
  int v4; // eax
  bool v5; // sf
  int v6; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = (char *)Buffer; /*0x7ca56e*/
  File._ptr = (char *)Buffer; /*0x7ca571*/
  File._flag = 66; /*0x7ca577*/
  File._cnt = 0x7FFFFFFF; /*0x7ca585*/
  v4 = _woutput(&File, (CampaignScore *)BufferCount, (ObjectClass *)&Format); /*0x7ca58d*/
  v5 = --File._cnt < 0; /*0x7ca595*/
  v6 = v4; /*0x7ca598*/
  if ( v5 ) /*0x7ca59a*/
    _flsbuf(0, &File); /*0x7ca5ad*/
  else
    *File._ptr++ = 0; /*0x7ca59f*/
  if ( --File._cnt < 0 ) /*0x7ca5b7*/
    _flsbuf(0, &File); /*0x7ca5c7*/
  else
    *File._ptr = 0; /*0x7ca5bc*/
  return v6; /*0x7ca5d0*/
}


// ==== 0x007CA5D3  _wcscmp  this=-  sig=csp ====
int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v3; // esi
  wchar_t i; // cx
  int result; // eax

  v3 = String2; /*0x7ca5d8*/
  for ( i = *String2; ; i = *v3 ) /*0x7ca5dd*/
  {
    result = *String1 - i; /*0x7ca5e6*/
    if ( result || !i ) /*0x7ca5ed*/
      break; /*0x7ca5ed*/
    ++String1; /*0x7ca5f0*/
    ++v3; /*0x7ca5f2*/
  }
  if ( result < 0 ) /*0x7ca5fc*/
    return -1; /*0x7ca5fe*/
  if ( result > 0 ) /*0x7ca602*/
    return 1; /*0x7ca606*/
  return result; /*0x7ca5f8*/
}


// ==== 0x007CA610  _strncmp  this=-  sig=csp ====
int __cdecl strncmp(AnimClass *aP0, const char *Str2, size_t MaxCount)
{
  size_t v3; // ecx
  CellStruct *v4; // edi
  bool v5; // zf
  size_t v6; // ecx
  CellStruct *v7; // edi
  unsigned __int8 v9; // al

  v3 = MaxCount; /*0x7ca616*/
  if ( MaxCount ) /*0x7ca619*/
  {
    v4 = (CellStruct *)aP0; /*0x7ca61d*/
    do /*0x7ca624*/
    {
      if ( !v3 ) /*0x7ca624*/
        break; /*0x7ca624*/
      v5 = LOBYTE(v4->field_0) == 0; /*0x7ca624*/
      v4 = (CellStruct *)((char *)v4 + 1); /*0x7ca624*/
      --v3; /*0x7ca624*/
    }
    while ( !v5 ); /*0x7ca624*/
    v6 = MaxCount - v3; /*0x7ca628*/
    v7 = (CellStruct *)aP0; /*0x7ca62a*/
    do /*0x7ca62f*/
    {
      if ( !v6 ) /*0x7ca62f*/
        break; /*0x7ca62f*/
      v5 = *Str2++ == LOBYTE(v7->field_0); /*0x7ca62f*/
      v7 = (CellStruct *)((char *)v7 + 1); /*0x7ca62f*/
      --v6; /*0x7ca62f*/
    }
    while ( v5 ); /*0x7ca62f*/
    v9 = *(Str2 - 1); /*0x7ca631*/
    v3 = 0; /*0x7ca634*/
    if ( v9 > HIBYTE(v7[-1].field_2C4) ) /*0x7ca639*/
      return ~v3; /*0x7ca639*/
    if ( v9 != HIBYTE(v7[-1].field_2C4) ) /*0x7ca63b*/
    {
      v3 = -2; /*0x7ca63e*/
      return ~v3; /*0x7ca63f*/
    }
  }
  return v3; /*0x7ca643*/
}


// ==== 0x007CA650  ObjectClass::__alloca_probe  this=ObjectClass  sig=csp ====
void _alloca_probe(WinModemClass *aP0, char a2)
{
  unsigned int v2; // eax
  WinModemClass **i; // ecx

  for ( i = &aP0; v2 >= 0x1000; v2 -= 4096 ) /*0x7ca65a*/
    i -= 1024; /*0x7ca65c*/
  __asm { retn } /*0x7ca67e*/
}


// ==== 0x007CA67F  _time  this=-  sig=csp ====
__time32_t __cdecl time(__time32_t *const Time)
{
  int v1; // eax
  DWORD v2; // eax
  __time32_t result; // eax
  struct _TIME_ZONE_INFORMATION TimeZoneInformation; // [esp+0h] [ebp-CCh] BYREF
  struct _SYSTEMTIME v5; // [esp+ACh] [ebp-20h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+BCh] [ebp-10h] BYREF

  GetLocalTime(&SystemTime); /*0x7ca68c*/
  GetSystemTime(&v5); /*0x7ca696*/
  if ( v5.wMinute == WORD5(CRTGlobal_B781B0) /*0x7ca6db*/
    && v5.wHour == WORD4(CRTGlobal_B781B0)
    && v5.wDay == WORD3(CRTGlobal_B781B0)
    && v5.wMonth == WORD1(CRTGlobal_B781B0)
    && v5.wYear == (_WORD)CRTGlobal_B781B0 )
  {
    v1 = CRTGlobal_B781A8; /*0x7ca6dd*/
  }
  else
  {
    v2 = GetTimeZoneInformation(&TimeZoneInformation); /*0x7ca6eb*/
    if ( v2 == -1 ) /*0x7ca6f4*/
      v1 = -1; /*0x7ca711*/
    else
      v1 = v2 == 2 && TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias; /*0x7ca70a*/
    CRTGlobal_B781B0 = (__int128)v5; /*0x7ca71e*/
    CRTGlobal_B781A8 = v1; /*0x7ca723*/
  }
  result = __loctotime_t( /*0x7ca748*/
             SystemTime.wYear,
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond,
             v1);
  if ( Time ) /*0x7ca755*/
    *Time = result; /*0x7ca757*/
  return result; /*0x7ca759*/
}


// ==== 0x007CA75B  _fclose  this=-  sig=csp ====
int __cdecl fclose(MouseClass *aP0)
{
  int v1; // edi

  v1 = -1; /*0x7ca761*/
  if ( ((int)aP0->field_C & 0x40) != 0 ) /*0x7ca768*/
  {
    aP0->field_C = 0; /*0x7ca76a*/
  }
  else
  {
    _lock_file(aP0); /*0x7ca771*/
    v1 = _fclose_lk(aP0); /*0x7ca77d*/
    _unlock_file(aP0); /*0x7ca77f*/
  }
  return v1; /*0x7ca789*/
}


// ==== 0x007CA78C  __fclose_lk  this=-  sig=csp ====
int __cdecl _fclose_lk(MouseClass *aP0)
{
  int v1; // edi

  v1 = -1; /*0x7ca792*/
  if ( ((int)aP0->field_C & 0x83) != 0 ) /*0x7ca799*/
  {
    v1 = _flush(aP0); /*0x7ca7a2*/
    _freebuf(aP0); /*0x7ca7a4*/
    if ( _close((int)aP0->field_10) >= 0 ) /*0x7ca7b6*/
    {
      if ( *(_DWORD *)&aP0->__pad_18[4] ) /*0x7ca7bd*/
      {
        free(*(void **)&aP0->__pad_18[4]); /*0x7ca7c5*/
        *(_DWORD *)&aP0->__pad_18[4] = 0; /*0x7ca7ca*/
      }
    }
    else
    {
      v1 = -1; /*0x7ca7b8*/
    }
  }
  aP0->field_C = 0; /*0x7ca7cf*/
  return v1; /*0x7ca7d5*/
}


// ==== 0x007CA7D8  _fprintf  this=-  sig=csp ====
int fprintf(MouseClass *aP0, const char *const Format, CellStruct *aP2)
{
  int v3; // edi
  int v4; // ebx

  _lock_file(aP0); /*0x7ca7e0*/
  v3 = _stbuf((int)aP0); /*0x7ca7eb*/
  v4 = _output((FILE *)aP0, (char *)Format, (int)&aP2); /*0x7ca7fe*/
  _ftbuf(v3, (int)aP0); /*0x7ca800*/
  _unlock_file(aP0); /*0x7ca806*/
  return v4; /*0x7ca810*/
}


// ==== 0x007CA814  __fsopen  this=-  sig=csp ====
FILE *__cdecl _fsopen(const char *FileName, const char *Mode, int ShFlag)
{
  FILE *result; // eax
  FILE *v4; // esi
  FILE *v5; // edi

  result = (FILE *)_getstream(); /*0x7ca815*/
  v4 = result; /*0x7ca81a*/
  if ( result ) /*0x7ca81e*/
  {
    v5 = (FILE *)_openfile((char *)FileName, (int)Mode, ShFlag, (int)result); /*0x7ca836*/
    _unlock_file(v4); /*0x7ca838*/
    return v5; /*0x7ca840*/
  }
  return result; /*0x7ca820*/
}


// ==== 0x007CA845  _fopen  this=-  sig=csp ====
FILE *__cdecl fopen(const char *FileName, const char *Mode)
{
  return _fsopen(FileName, Mode, 64); /*0x7ca857*/
}


// ==== 0x007CA858  _vswprintf  this=-  sig=csp ====
int __cdecl vswprintf(wchar_t *const Buffer, CampaignScore *aP1, ObjectClass *aP2, SessionClass *aP3)
{
  int v4; // eax
  bool v5; // sf
  int v6; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = (char *)Buffer; /*0x7ca865*/
  File._ptr = (char *)Buffer; /*0x7ca868*/
  File._flag = 66; /*0x7ca871*/
  File._cnt = 0x7FFFFFFF; /*0x7ca878*/
  v4 = _woutput(&File, aP1, aP2); /*0x7ca880*/
  v5 = --File._cnt < 0; /*0x7ca888*/
  v6 = v4; /*0x7ca88b*/
  if ( v5 ) /*0x7ca88d*/
    _flsbuf(0, &File); /*0x7ca8a0*/
  else
    *File._ptr++ = 0; /*0x7ca892*/
  if ( --File._cnt < 0 ) /*0x7ca8aa*/
    _flsbuf(0, &File); /*0x7ca8ba*/
  else
    *File._ptr = 0; /*0x7ca8af*/
  return v6; /*0x7ca8c3*/
}


// ==== 0x007CA8C6  _wcschr  this=ObjectClass  sig=csp ====
wchar_t *__cdecl wcschr(BlowStraw *aP0, CCINIClass *aP1)
{
  while ( *(_WORD *)aP0->__pad_0 && *(_WORD *)aP0->__pad_0 != (_WORD)aP1 ) /*0x7ca8d7*/
    aP0 = (BlowStraw *)((char *)aP0 + 2); /*0x7ca8da*/
  return (_WORD)aP1 == *(_WORD *)aP0->__pad_0 ? (wchar_t *)aP0 : 0;
}


// ==== 0x007CA8EF  ___RTCastToVoid  this=-  sig=ida-proto ====
void *__cdecl __RTCastToVoid(void **a1)
{
  if ( a1 ) /*0x7ca919*/
    return _FindCompleteObject_YAPAXPAPAX_Z(a1); /*0x7ca933*/
  else
    return 0; /*0x7ca91b*/
}


// ==== 0x007CA971  __non_rtti_object::??0__non_rtti_object_QAE_PBD_Z  this=__non_rtti_object  sig=csp ====
__non_rtti_object *__thiscall __0__non_rtti_object_QAE_PBD_Z(__non_rtti_object *this, char *a2)
{
  __0exception_QAE_ABQBD_Z(this, (const char *const *)&a2); /*0x7ca981*/
  *(_DWORD *)this = &vt_non_rtti_object; /*0x7ca986*/
  return this; /*0x7ca98e*/
}


// ==== 0x007CA993  ObjectClass::method_7CA993  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_7CA993(void *Block, char a2)
{
  j_Exception_Destructor(Block); /*0x7ca996*/
  if ( (a2 & 1) != 0 ) /*0x7ca9a0*/
    __3_YAXPAX_Z(Block); /*0x7ca9a3*/
  return (ObjectClass *)Block; /*0x7ca9ab*/
}


// ==== 0x007CA9AF  ObjectClass::j_Exception_Destructor  this=ObjectClass  sig=csp ====
// attributes: thunk
void __thiscall j_Exception_Destructor(void *this)
{
  Exception::Destructor(this); /*0x7ca9af*/
}


// ==== 0x007CA9B4  __non_rtti_object::method_7CA9B4  this=__non_rtti_object  sig=csp ====
exception *__thiscall sub_7CA9B4(exception *this, struct exception *a2)
{
  __0exception_QAE_ABV0__Z(this, a2); /*0x7ca9bb*/
  *(_DWORD *)this = &vt_non_rtti_object; /*0x7ca9c0*/
  return this; /*0x7ca9c8*/
}


// ==== 0x007CA9CC  bad_typeid::method_7CA9CC  this=bad_typeid  sig=csp ====
exception *__thiscall sub_7CA9CC(bad_typeid *this, struct exception *a1)
{
  __0exception_QAE_ABV0__Z((exception *)this, a1); /*0x7ca9d3*/
  this->vfptr = &vt_bad_typeid; /*0x7ca9d8*/
  return (exception *)this; /*0x7ca9e0*/
}


// ==== 0x007CA9E4  ObjectClass::method_7CA9E4  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_7CA9E4(void *Block, char a2)
{
  j_Exception_Destructor_2(Block); /*0x7ca9e7*/
  if ( (a2 & 1) != 0 ) /*0x7ca9f1*/
    __3_YAXPAX_Z(Block); /*0x7ca9f4*/
  return (ObjectClass *)Block; /*0x7ca9fc*/
}


// ==== 0x007CAA00  ObjectClass::j_Exception_Destructor_2  this=ObjectClass  sig=csp ====
// attributes: thunk
void __thiscall j_Exception_Destructor_2(void *this)
{
  Exception::Destructor(this); /*0x7caa00*/
}


// ==== 0x007CAA05  ___RTtypeid  this=-  sig=csp ====
int __cdecl __RTtypeid(_DWORD *a1)
{
  int v1; // esi
  int result; // eax
  _BYTE v3[12]; // [esp+1Ch] [ebp-34h] BYREF
  int v4; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  if ( !a1 ) /*0x7caa30*/
    JUMPOUT(0x7CAACB); /*0x7caacb*/
  ms_exc.registration.TryLevel = 0; /*0x7caa4d*/
  v1 = *(_DWORD *)(*a1 - 4); /*0x7caa53*/
  v4 = v1; /*0x7caa56*/
  if ( IsBadReadPtr(*(const void **)(v1 + 12), 8u) ) /*0x7caa5e*/
  {
    __0__non_rtti_object_QAE_PBD_Z((__non_rtti_object *)v3, "Bad read pointer - no RTTI data!"); /*0x7caa86*/
    _CxxThrowException_8(v3, (_ThrowInfo *)&unk_80F038); /*0x7caa94*/
  }
  result = *(_DWORD *)(v1 + 12); /*0x7caa68*/
  ms_exc.registration.TryLevel = -1; /*0x7caa6b*/
  return result; /*0x7caa6f*/
}


// ==== 0x007CAAE4  ___RTDynamicCast  this=-  sig=csp ====
_BYTE *__cdecl __RTDynamicCast(IUnknown *aP0, int arg4, struct TypeDescriptor *a2, struct TypeDescriptor *a3, int a5)
{
  _BYTE *result; // eax
  char *CompleteObject_YAPAXPAPAX_Z; // edi
  int v7; // eax
  char *v8; // esi
  int v9; // ecx
  const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z; // eax

  if ( !aP0 ) /*0x7cab0f*/
    return 0; /*0x7cab11*/
  CompleteObject_YAPAXPAPAX_Z = _FindCompleteObject_YAPAXPAPAX_Z((void **)aP0); /*0x7cab2d*/
  v7 = *(_DWORD *)(aP0->field_0 - 4); /*0x7cab34*/
  v8 = (char *)((char *)aP0 - arg4 - CompleteObject_YAPAXPAPAX_Z); /*0x7cab40*/
  v9 = *(_DWORD *)(*(_DWORD *)(v7 + 16) + 4); /*0x7cab48*/
  if ( (v9 & 1) != 0 ) /*0x7cab4e*/
  {
    if ( (v9 & 2) != 0 ) /*0x7cab6c*/
      VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab75*/
    else
      VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab6e*/
  }
  else
  {
    VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab59*/
  }
  if ( VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z ) /*0x7cab82*/
    return &CompleteObject_YAPAXPAPAX_Z[_PMDtoOffset_YAHPAXABUPMD___Z( /*0x7cab90*/
                                          CompleteObject_YAPAXPAPAX_Z,
                                          (const struct PMD *)((char *)VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z
                                                             + 8))];
  result = 0; /*0x7cab9e*/
  if ( a5 ) /*0x7caba6*/
    JUMPOUT(0x7CABFB); /*0x7cabfb*/
  return result; /*0x7cab13*/
}


// ==== 0x007CAC13  ObjectClass::method_7CAC13  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_7CAC13(void *Block, char a2)
{
  j_Exception_Destructor_3(Block); /*0x7cac16*/
  if ( (a2 & 1) != 0 ) /*0x7cac20*/
    __3_YAXPAX_Z(Block); /*0x7cac23*/
  return (ObjectClass *)Block; /*0x7cac2b*/
}


// ==== 0x007CAC2F  ObjectClass::j_Exception_Destructor_3  this=ObjectClass  sig=csp ====
// attributes: thunk
void __thiscall j_Exception_Destructor_3(void *this)
{
  Exception::Destructor(this); /*0x7cac2f*/
}


// ==== 0x007CAC34  bad_cast::method_7CAC34  this=bad_cast  sig=csp ====
exception *__thiscall sub_7CAC34(exception *this, struct exception *a2)
{
  __0exception_QAE_ABV0__Z(this, a2); /*0x7cac3b*/
  *(_DWORD *)this = &vt_bad_cast; /*0x7cac40*/
  return this; /*0x7cac48*/
}


// ==== 0x007CAC4C  ?FindCompleteObject_YAPAXPAPAX_Z  this=-  sig=csp ====
char *__cdecl _FindCompleteObject_YAPAXPAPAX_Z(void **a1)
{
  int v1; // edx
  char *result; // eax
  int v3; // edx

  v1 = *((_DWORD *)*a1 - 1); /*0x7cac52*/
  result = (char *)a1 - *(_DWORD *)(v1 + 4); /*0x7cac57*/
  v3 = *(_DWORD *)(v1 + 8); /*0x7cac5a*/
  if ( v3 ) /*0x7cac5f*/
    return &result[*(_DWORD *)((char *)a1 - v3)]; /*0x7cac63*/
  return result; /*0x7cac65*/
}


// ==== 0x007CAC66  ?FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z  this=-  sig=csp ====
const struct _s_RTTIBaseClassDescriptor *__cdecl _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(
        void *a1,
        const struct _s_RTTICompleteObjectLocator *a2,
        struct TypeDescriptor *a3,
        int a4,
        struct TypeDescriptor *a5)
{
  int v5; // eax
  int **v6; // esi
  int *v7; // edi
  int v8; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v10 = 0; /*0x7cac6a*/
  v5 = *((_DWORD *)a2 + 4); /*0x7cac74*/
  v6 = *(int ***)(v5 + 12); /*0x7cac7b*/
  if ( !*(_DWORD *)(v5 + 8) ) /*0x7cac77*/
    return 0; /*0x7cacb5*/
  while ( 1 ) /*0x7cac80*/
  {
    v7 = *v6; /*0x7cac80*/
    v8 = **v6; /*0x7cac85*/
    if ( ((struct TypeDescriptor *)v8 == a5 || !strcmp((const char *)(v8 + 8), a5->name)) && (v7[5] & 1) == 0 ) /*0x7caca2*/
      break; /*0x7caca2*/
    ++v10; /*0x7caca4*/
    ++v6; /*0x7cacad*/
    if ( v10 >= *(_DWORD *)(*((_DWORD *)a2 + 4) + 8) ) /*0x7cacb3*/
      return 0; /*0x7cacb3*/
  }
  return (const struct _s_RTTIBaseClassDescriptor *)v7; /*0x7cacb7*/
}


// ==== 0x007CACC0  ?FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z  this=-  sig=csp ====
const struct _s_RTTIBaseClassDescriptor *__cdecl _FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(
        void *a1,
        const struct _s_RTTICompleteObjectLocator *a2,
        struct TypeDescriptor *a3,
        int a4,
        struct TypeDescriptor *a5)
{
  const struct _s_RTTICompleteObjectLocator *v5; // ebx
  int v6; // eax
  int **v7; // edi
  int *v8; // esi
  int v9; // eax
  int *v10; // ebx
  int v11; // eax
  int v12; // eax
  int **v13; // edi
  int v14; // eax
  unsigned int v16; // [esp+Ch] [ebp-Ch]
  int **v17; // [esp+10h] [ebp-8h]
  unsigned int v18; // [esp+14h] [ebp-4h]
  unsigned int v19; // [esp+14h] [ebp-4h]

  v18 = 0; /*0x7cacc6*/
  v5 = a2; /*0x7caccb*/
  v6 = *((_DWORD *)a2 + 4); /*0x7cacd0*/
  v7 = *(int ***)(v6 + 12); /*0x7cacd7*/
  if ( *(_DWORD *)(v6 + 8) ) /*0x7cacd3*/
  {
    while ( 1 ) /*0x7cace0*/
    {
      v8 = *v7; /*0x7cace0*/
      v9 = **v7; /*0x7cace5*/
      if ( (struct TypeDescriptor *)v9 == a5 || !strcmp((const char *)(v9 + 8), a5->name) ) /*0x7cacf3*/
      {
        v16 = 0; /*0x7cacfe*/
        v17 = v7 + 1; /*0x7cad09*/
        if ( v8[1] ) /*0x7cad02*/
          break; /*0x7cad02*/
      }
LABEL_10:
      ++v18; /*0x7cad54*/
      ++v7; /*0x7cad5d*/
      if ( v18 >= *(_DWORD *)(*((_DWORD *)v5 + 4) + 8) ) /*0x7cad63*/
        goto LABEL_11; /*0x7cad63*/
    }
    while ( 1 ) /*0x7cad14*/
    {
      v10 = *v17; /*0x7cad14*/
      v11 = **v17; /*0x7cad16*/
      if ( ((struct TypeDescriptor *)v11 == a3 || !strcmp((const char *)(v11 + 8), a3->name)) /*0x7cad40*/
        && _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)(v10 + 2)) == a4 )
      {
        break; /*0x7cad40*/
      }
      ++v16; /*0x7cad42*/
      ++v17; /*0x7cad45*/
      if ( v16 >= v8[1] ) /*0x7cad4f*/
      {
        v5 = a2; /*0x7cad51*/
        goto LABEL_10; /*0x7cad51*/
      }
    }
  }
  else
  {
LABEL_11:
    v12 = *((_DWORD *)v5 + 4); /*0x7cad69*/
    v19 = 0; /*0x7cad6c*/
    v13 = *(int ***)(v12 + 12); /*0x7cad74*/
    if ( !*(_DWORD *)(v12 + 8) ) /*0x7cad77*/
      return 0; /*0x7cadb4*/
    while ( 1 ) /*0x7cad79*/
    {
      v8 = *v13; /*0x7cad79*/
      v14 = **v13; /*0x7cad7e*/
      if ( ((struct TypeDescriptor *)v14 == a5 || !strcmp((const char *)(v14 + 8), a5->name)) && (v8[5] & 3) == 0 ) /*0x7cad9b*/
        break; /*0x7cad9b*/
      ++v19; /*0x7cad9d*/
      ++v13; /*0x7cada6*/
      if ( v19 >= *(_DWORD *)(*((_DWORD *)v5 + 4) + 8) ) /*0x7cadac*/
        return 0; /*0x7cadac*/
    }
  }
  return (const struct _s_RTTIBaseClassDescriptor *)v8; /*0x7cadb0*/
}


// ==== 0x007CADB9  ?FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z  this=-  sig=csp ====
const struct _s_RTTIBaseClassDescriptor *__cdecl _FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(
        void *a1,
        const struct _s_RTTICompleteObjectLocator *a2,
        struct TypeDescriptor *a3,
        int a4,
        struct TypeDescriptor *a5)
{
  const struct _s_RTTICompleteObjectLocator *v5; // edi
  int v6; // eax
  int **v7; // ebx
  int *v8; // esi
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  const struct _s_RTTIBaseClassDescriptor *v12; // edi
  const struct _s_RTTIBaseClassDescriptor *result; // eax
  int v14; // eax
  int **v15; // ebx
  int *v16; // esi
  int v17; // eax
  const struct _s_RTTIBaseClassDescriptor *v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+Ch] [ebp-10h]
  unsigned int v20; // [esp+10h] [ebp-Ch]
  int **v21; // [esp+14h] [ebp-8h]
  unsigned int v22; // [esp+18h] [ebp-4h]
  unsigned int v23; // [esp+18h] [ebp-4h]

  v5 = a2; /*0x7cadc2*/
  v6 = *((_DWORD *)a2 + 4); /*0x7cadc7*/
  v18 = 0; /*0x7cadca*/
  v22 = 0; /*0x7cadcd*/
  v7 = *(int ***)(v6 + 12); /*0x7cadd3*/
  if ( !*(_DWORD *)(v6 + 8) ) /*0x7cadd0*/
    goto LABEL_15; /*0x7cadd0*/
  do /*0x7cae94*/
  {
    v8 = *v7; /*0x7caddc*/
    v9 = **v7; /*0x7cade1*/
    if ( (struct TypeDescriptor *)v9 == a5 || !strcmp((const char *)(v9 + 8), a5->name) ) /*0x7cadef*/
    {
      v20 = 0; /*0x7cadfe*/
      v21 = v7 + 1; /*0x7cae09*/
      if ( v8[1] ) /*0x7cae02*/
      {
        do /*0x7cae80*/
        {
          v10 = *v21; /*0x7cae14*/
          v11 = **v21; /*0x7cae16*/
          if ( ((struct TypeDescriptor *)v11 == a3 || !strcmp((const char *)(v11 + 8), a3->name)) /*0x7cae40*/
            && _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)(v10 + 2)) == a4 )
          {
            v12 = v18; /*0x7cae42*/
            if ( v18 ) /*0x7cae47*/
            {
              v19 = _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)(v8 + 2)); /*0x7cae5b*/
              if ( _PMDtoOffset_YAHPAXABUPMD___Z(a1, (const struct PMD *)((char *)v12 + 8)) != v19 ) /*0x7cae6e*/
                return 0; /*0x7cae6e*/
            }
            v18 = (const struct _s_RTTIBaseClassDescriptor *)v8; /*0x7cae70*/
          }
          ++v20; /*0x7cae73*/
          ++v21; /*0x7cae76*/
        }
        while ( v20 < v8[1] ); /*0x7cae80*/
        v5 = a2; /*0x7cae82*/
      }
    }
    ++v22; /*0x7cae85*/
    ++v7; /*0x7cae8e*/
  }
  while ( v22 < *(_DWORD *)(*((_DWORD *)v5 + 4) + 8) ); /*0x7cae94*/
  result = v18; /*0x7cae9a*/
  if ( !v18 ) /*0x7caea1*/
  {
LABEL_15:
    v14 = *((_DWORD *)v5 + 4); /*0x7caea3*/
    v23 = 0; /*0x7caea6*/
    v15 = *(int ***)(v14 + 12); /*0x7caeac*/
    if ( *(_DWORD *)(v14 + 8) ) /*0x7caea9*/
    {
      while ( 1 ) /*0x7caeb1*/
      {
        v16 = *v15; /*0x7caeb1*/
        v17 = **v15; /*0x7caeb6*/
        if ( ((struct TypeDescriptor *)v17 == a5 || !strcmp((const char *)(v17 + 8), a5->name)) && (v16[5] & 3) == 0 ) /*0x7caed3*/
          break; /*0x7caed3*/
        ++v23; /*0x7caed5*/
        ++v15; /*0x7caede*/
        if ( v23 >= *(_DWORD *)(*((_DWORD *)v5 + 4) + 8) ) /*0x7caee4*/
          return 0; /*0x7caee4*/
      }
      return (const struct _s_RTTIBaseClassDescriptor *)v16; /*0x7caeed*/
    }
    else
    {
      return 0; /*0x7caee6*/
    }
  }
  return result; /*0x7caee8*/
}


// ==== 0x007CAEF1  ?PMDtoOffset_YAHPAXABUPMD___Z  this=-  sig=csp ====
int __cdecl _PMDtoOffset_YAHPAXABUPMD___Z(char *a1, const struct PMD *a2)
{
  int v2; // ecx
  int pdisp; // edx

  v2 = 0; /*0x7caef5*/
  pdisp = a2->pdisp; /*0x7caef7*/
  if ( pdisp >= 0 ) /*0x7caefc*/
    v2 = *(_DWORD *)(*(_DWORD *)&a1[pdisp] + a2->vdisp) + a2->pdisp; /*0x7caf0b*/
  return v2 + a2->mdisp; /*0x7caf13*/
}


// ==== 0x007CAF30  _strchr  this=-  sig=csp ====
char *__cdecl strchr(const char *Str, int Val)
{
  const char *v2; // edx
  char v3; // cl
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  v2 = Str; /*0x7caf3c*/
  if ( ((unsigned __int8)Str & 3) != 0 ) /*0x7caf46*/
  {
    while ( 1 ) /*0x7caf48*/
    {
      v3 = *v2++; /*0x7caf48*/
      if ( v3 == (_BYTE)Val ) /*0x7caf4d*/
        return (char *)(v2 - 1); /*0x7caf20*/
      if ( !v3 ) /*0x7caf51*/
        return 0; /*0x7caf51*/
      if ( ((unsigned __int8)v2 & 3) == 0 ) /*0x7caf59*/
        goto main_loop_0; /*0x7caf59*/
    }
  }
  else
  {
    while ( 1 ) /*0x7caf8a*/
    {
main_loop_0:
      while ( 1 ) /*0x7caf71*/
      {
        v4 = (((unsigned __int8)Val << 8) /*0x7caf71*/
            | (unsigned __int8)Val
            | ((((unsigned __int8)Val << 8) | (unsigned __int8)Val) << 16))
           ^ *(_DWORD *)v2;
        v5 = *(_DWORD *)v2 + 2130640639; /*0x7caf73*/
        v6 = v5 ^ ~*(_DWORD *)v2; /*0x7caf7f*/
        v2 += 4; /*0x7caf81*/
        if ( (((v4 + 2130640639) ^ ~v4) & 0x81010100) != 0 ) /*0x7caf8a*/
          break; /*0x7caf8a*/
        v7 = v6 & 0x81010100; /*0x7caf8c*/
        if ( v7 && ((v7 & 0x1010100) != 0 || (v5 & 0x80000000) == 0) ) /*0x7cafa0*/
          return 0; /*0x7cafa7*/
      }
      v9 = *((_DWORD *)v2 - 1); /*0x7cafa8*/
      if ( (_BYTE)v9 == (_BYTE)Val ) /*0x7cafad*/
        break; /*0x7cafad*/
      if ( !(_BYTE)v9 ) /*0x7cafb1*/
        return 0; /*0x7cafb1*/
      if ( BYTE1(v9) == (_BYTE)Val ) /*0x7cafb5*/
        return (char *)(v2 - 3); /*0x7cafe4*/
      if ( !BYTE1(v9) ) /*0x7cafb9*/
        return 0; /*0x7cafb9*/
      v10 = HIWORD(v9); /*0x7cafbb*/
      if ( (_BYTE)v10 == (_BYTE)Val ) /*0x7cafc0*/
        return (char *)(v2 - 2); /*0x7cafdd*/
      if ( !(_BYTE)v10 ) /*0x7cafc4*/
        return 0; /*0x7cafc4*/
      if ( BYTE1(v10) == (_BYTE)Val ) /*0x7cafc8*/
        return (char *)(v2 - 1); /*0x7cafd6*/
      if ( !BYTE1(v10) ) /*0x7cafcc*/
        return 0; /*0x7cafcc*/
    }
    return (char *)(v2 - 4); /*0x7cafe5*/
  }
}


// ==== 0x007CAFEC  __tolower  this=-  sig=ida-proto ====
int __cdecl _tolower(int C)
{
  return C + 32; /*0x7caff3*/
}


// ==== 0x007CAFF4  _tolower  this=-  sig=csp ====
int __cdecl tolower(int C)
{
  int v1; // ebx
  int result; // eax
  int Ca; // [esp+8h] [ebp+4h]

  v1 = 0; /*0x7caff5*/
  if ( CRTGlobal_B782A0 ) /*0x7caffd*/
  {
    InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7cb01a*/
    if ( CRTGlobal_B78BA0 ) /*0x7cb02c*/
    {
      InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cb02f*/
      _lock(19); /*0x7cb033*/
      v1 = 1; /*0x7cb03b*/
    }
    Ca = tolower_0(C); /*0x7cb048*/
    if ( v1 ) /*0x7cb04c*/
      _unlock(19); /*0x7cb050*/
    else
      InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cb059*/
    return Ca; /*0x7cb05b*/
  }
  else
  {
    result = C; /*0x7cafff*/
    if ( C >= 65 && C <= 90 ) /*0x7cb00b*/
      return C + 32; /*0x7cb00d*/
  }
  return result; /*0x7cb010*/
}


// ==== 0x007CB063  _tolower_0  this=-  sig=csp ====
int __cdecl tolower_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  CHAR DestStr[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( CRTGlobal_B782A0 )
  {
    v2 = C; /*0x7cb090*/
    if ( (C >= 256
       || ((int)MEMORY[0x87C79C] <= 1 ? (v3 = *((_BYTE *)MEMORY[0x87C590] + 2 * C) & 1) : (v3 = _isctype(C, 1)), v3))
      && (*((char *)MEMORY[0x87C590] + 2 * BYTE1(v2) + 1) >= 0
        ? (LOWORD(C) = (unsigned __int8)v2, v4 = 1)
        : (LOBYTE(C) = BYTE1(v2), *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2, v4 = 2),
          (v5 = __crtLCMapStringA((LCID)CRTGlobal_B782A0, 0x100u, (LPCSTR)&C, v4, DestStr, 3, 0, 1)) != 0) )
    {
      if ( v5 == 1 ) /*0x7cb114*/
        return (unsigned __int8)DestStr[0]; /*0x7cb116*/
      else
        return *(unsigned __int16 *)DestStr; /*0x7cb127*/
    }
    else
    {
      return v2; /*0x7cb0c0*/
    }
  }
  else
  {
    result = C; /*0x7cb073*/
    if ( C >= 65 && C <= 90 ) /*0x7cb082*/
      return C + 32; /*0x7cb088*/
  }
  return result; /*0x7cb129*/
}


// ==== 0x007CB12E  __putws  this=-  sig=csp ====
int __cdecl _putws(const wchar_t *Buffer)
{
  int v1; // ebx
  wchar_t v3; // ax
  int v5; // [esp+Ch] [ebp-4h]

  v1 = 0xFFFF; /*0x7cb13d*/
  _lock_file2(1, &File); /*0x7cb142*/
  v5 = _stbuf(&File); /*0x7cb153*/
  while ( 1 ) /*0x7cb156*/
  {
    v3 = *Buffer; /*0x7cb156*/
    if ( !*Buffer ) /*0x7cb156*/
      break; /*0x7cb156*/
    ++Buffer; /*0x7cb161*/
    if ( (unsigned __int16)_putwc_lk(v3, &File) == 0xFFFF ) /*0x7cb16c*/
      goto LABEL_7; /*0x7cb16c*/
  }
  if ( (unsigned __int16)_putwc_lk(0xAu, &File) != 0xFFFF ) /*0x7cb17d*/
    v1 = 0; /*0x7cb17f*/
LABEL_7:
  _ftbuf(v5, (int)&File); /*0x7cb181*/
  _unlock_file2(1, &File); /*0x7cb18d*/
  return v1; /*0x7cb197*/
}


// ==== 0x007CB19C  _fflush  this=-  sig=csp ====
int __cdecl fflush(MouseClass *aP0)
{
  int v2; // edi

  if ( !aP0 ) /*0x7cb1a3*/
    return flsall(0); /*0x7cb1a6*/
  _lock_file(aP0); /*0x7cb1b0*/
  v2 = _fflush_lk((int)aP0); /*0x7cb1bc*/
  _unlock_file(aP0); /*0x7cb1be*/
  return v2; /*0x7cb1ac*/
}


// ==== 0x007CB1CB  __fflush_lk  this=-  sig=csp ====
int __cdecl _fflush_lk(int a1)
{
  if ( _flush((_DWORD *)a1) ) /*0x7cb1d1*/
    return -1; /*0x7cb1db*/
  if ( (*(_BYTE *)(a1 + 13) & 0x40) != 0 ) /*0x7cb1e4*/
    return -(_commit(*(_DWORD *)(a1 + 16)) != 0); /*0x7cb1f2*/
  return 0; /*0x7cb1de*/
}


// ==== 0x007CB1F9  __flush  this=-  sig=csp ====
int __cdecl _flush(MouseClass *aP0)
{
  int v1; // ebx
  CCINIClass *v2; // eax
  unsigned int v3; // edi
  void *v4; // eax
  void *v5; // eax

  v1 = 0; /*0x7cb1ff*/
  if ( ((int)aP0->field_C & 3) == 2 && ((int)aP0->field_C & 0x108) != 0 ) /*0x7cb213*/
  {
    v2 = (CCINIClass *)aP0->field_8; /*0x7cb215*/
    if ( aP0->field_0 - (int)v2 > 0 ) /*0x7cb21e*/
    {
      v3 = aP0->field_0 - (_DWORD)v2; /*0x7cb21a*/
      if ( _write((int)aP0->field_10, v2, v3) == v3 ) /*0x7cb22f*/
      {
        v4 = aP0->field_C; /*0x7cb231*/
        if ( (char)v4 < 0 ) /*0x7cb236*/
        {
          LOBYTE(v4) = (unsigned __int8)v4 & 0xFD; /*0x7cb238*/
          aP0->field_C = v4; /*0x7cb23a*/
        }
      }
      else
      {
        aP0->field_C = (void *)((int)aP0->field_C | 0x20); /*0x7cb23f*/
        v1 = -1; /*0x7cb243*/
      }
    }
  }
  v5 = aP0->field_8; /*0x7cb246*/
  aP0->field_4 = 0; /*0x7cb249*/
  aP0->field_0 = (int)v5; /*0x7cb24d*/
  return v1; /*0x7cb24f*/
}


// ==== 0x007CB255  Endstdio_Helper  this=-  sig=ida-proto ====
int sub_7CB255()
{
  return flsall(1); /*0x7cb25d*/
}


// ==== 0x007CB25E  _flsall  this=-  sig=csp ====
int __cdecl flsall(MouseClass *aP0)
{
  int v1; // ebx
  type_info *v2; // edi
  int i; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int result; // eax

  v1 = 0; /*0x7cb263*/
  v2 = 0; /*0x7cb265*/
  _lock(2); /*0x7cb267*/
  for ( i = 0; i < (int)CRTStreamCount; ++i ) /*0x7cb275*/
  {
    v4 = *(_DWORD *)(CRTGlobal_B78BC4 + 4 * i); /*0x7cb27c*/
    if ( v4 && (*(_BYTE *)(v4 + 12) & 0x83) != 0 ) /*0x7cb287*/
    {
      _lock_file2(i, *(_DWORD *)(CRTGlobal_B78BC4 + 4 * i)); /*0x7cb28b*/
      v5 = *(_DWORD *)(CRTGlobal_B78BC4 + 4 * i); /*0x7cb297*/
      v6 = *(_DWORD *)(v5 + 12); /*0x7cb29a*/
      if ( (v6 & 0x83) != 0 ) /*0x7cb2a0*/
      {
        if ( aP0 == (MouseClass *)1 ) /*0x7cb2a7*/
        {
          if ( _fflush_lk(v5) != -1 ) /*0x7cb2b3*/
            ++v1; /*0x7cb2b5*/
        }
        else if ( !aP0 && (v6 & 2) != 0 && _fflush_lk(*(_DWORD *)(CRTGlobal_B78BC4 + 4 * i)) == -1 ) /*0x7cb2ce*/
        {
          v2 = (type_info *)-1; /*0x7cb2d0*/
        }
      }
      _unlock_file2(i, *(_DWORD *)(CRTGlobal_B78BC4 + 4 * i)); /*0x7cb2db*/
    }
  }
  _unlock(2); /*0x7cb2ed*/
  result = v1; /*0x7cb2f8*/
  if ( aP0 != (MouseClass *)1 ) /*0x7cb2fa*/
    return (int)v2; /*0x7cb2fc*/
  return result; /*0x7cb2fe*/
}


// ==== 0x007CB302  sub_7CB302  this=-  sig=ida-proto ====
int __cdecl sub_7CB302(FILE *Stream, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx

  _lock_file(Stream); /*0x7cb30a*/
  v3 = _stbuf(Stream); /*0x7cb319*/
  v4 = _output(Stream, a2, a3); /*0x7cb327*/
  _ftbuf(v3, Stream); /*0x7cb329*/
  _unlock_file(Stream); /*0x7cb32f*/
  return v4; /*0x7cb339*/
}


// ==== 0x007CB33D  ObjectClass::___initstdio  this=ObjectClass  sig=csp ====
int __initstdio()
{
  size_t v0; // eax
  int v1; // ecx
  _UNKNOWN **v2; // eax
  int v3; // ecx
  _DWORD *v4; // edx
  int result; // eax

  v0 = CRTStreamCount; /*0x7cb33d*/
  if ( !CRTStreamCount ) /*0x7cb348*/
  {
    v0 = 512; /*0x7cb34a*/
LABEL_5:
    CRTStreamCount = v0; /*0x7cb357*/
    goto LABEL_6; /*0x7cb357*/
  }
  if ( (int)CRTStreamCount < 20 ) /*0x7cb353*/
  {
    v0 = 20; /*0x7cb355*/
    goto LABEL_5; /*0x7cb355*/
  }
LABEL_6:
  CRTGlobal_B78BC4 = (int)calloc(v0, 4u); /*0x7cb35c*/
  if ( !CRTGlobal_B78BC4 ) /*0x7cb36d*/
  {
    CRTStreamCount = 20; /*0x7cb372*/
    CRTGlobal_B78BC4 = (int)calloc(0x14u, 4u); /*0x7cb37e*/
    if ( !CRTGlobal_B78BC4 ) /*0x7cb386*/
      _amsg_exit(0x1Au); /*0x7cb38a*/
  }
  v1 = 0; /*0x7cb390*/
  v2 = &off_87BF50; /*0x7cb392*/
  do /*0x7cb3ab*/
  {
    *(_DWORD *)(v1 + CRTGlobal_B78BC4) = v2; /*0x7cb39d*/
    v2 += 8; /*0x7cb3a0*/
    v1 += 4; /*0x7cb3a3*/
  }
  while ( (int)v2 < (int)&unk_87C1D0 ); /*0x7cb3ab*/
  v3 = 0; /*0x7cb3ad*/
  v4 = &unk_87BF60; /*0x7cb3af*/
  do /*0x7cb3e1*/
  {
    result = *(_DWORD *)(CRTGlobal_B78A80[v3 >> 5] + 36 * (v3 & 0x1F)); /*0x7cb3c8*/
    if ( result == -1 || !result ) /*0x7cb3d2*/
      *v4 = -1; /*0x7cb3d4*/
    v4 += 8; /*0x7cb3d7*/
    ++v3; /*0x7cb3da*/
  }
  while ( (int)v4 < (int)dword_87BFC0 ); /*0x7cb3e1*/
  return result; /*0x7cb3e3*/
}


// ==== 0x007CB3E5  ___endstdio  this=-  sig=ida-proto ====
int __endstdio()
{
  int result; // eax

  result = Endstdio_Helper(); /*0x7cb3e5*/
  if ( CRTGlobal_B781FC ) /*0x7cb3f1*/
    return _fcloseall(); /*0x7cb3f3*/
  return result; /*0x7cb3f8*/
}


// ==== 0x007CB3F9  __lock_file  this=-  sig=csp ====
void __cdecl _lock_file(MouseClass *aP0)
{
  if ( aP0 < (MouseClass *)&off_87BF50 || aP0 > (MouseClass *)&stru_87C1B0 ) /*0x7cb40b*/
    EnterCriticalSection((LPCRITICAL_SECTION)&aP0->__pad_18[8]); /*0x7cb421*/
  else
    _lock((((char *)aP0 - (char *)&off_87BF50) >> 5) + 28); /*0x7cb416*/
}


// ==== 0x007CB428  __lock_file2  this=-  sig=csp ====
void __cdecl _lock_file2(int a1, int a2)
{
  if ( a1 >= 20 ) /*0x7cb42f*/
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32)); /*0x7cb444*/
  else
    _lock(a1 + 28); /*0x7cb435*/
}


// ==== 0x007CB44B  __unlock_file  this=-  sig=csp ====
void __cdecl _unlock_file(MouseClass *aP0)
{
  if ( aP0 < (MouseClass *)&off_87BF50 || aP0 > (MouseClass *)&stru_87C1B0 ) /*0x7cb45d*/
    LeaveCriticalSection((LPCRITICAL_SECTION)&aP0->__pad_18[8]); /*0x7cb473*/
  else
    _unlock((((char *)aP0 - (char *)&off_87BF50) >> 5) + 28); /*0x7cb468*/
}


// ==== 0x007CB47A  __unlock_file2  this=-  sig=csp ====
void __cdecl _unlock_file2(int a1, int a2)
{
  if ( a1 >= 20 ) /*0x7cb481*/
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32)); /*0x7cb496*/
  else
    _unlock(a1 + 28); /*0x7cb487*/
}


// ==== 0x007CB49D  _srand  this=-  sig=csp ====
IUnknown *srand(IUnknown *aP0)
{
  IUnknown *result; // eax

  result = (IUnknown *)_getptd(); /*0x7cb49d*/
  *(_DWORD *)&result->__pad_10[4] = aP0; /*0x7cb4a6*/
  return result; /*0x7cb4a9*/
}


// ==== 0x007CB4AA  _rand  this=-  sig=csp ====
int __cdecl rand()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = _getptd(); /*0x7cb4aa*/
  v1 = 214013 * *(_DWORD *)(v0 + 20) + 2531011; /*0x7cb4b8*/
  *(_DWORD *)(v0 + 20) = v1; /*0x7cb4be*/
  return HIWORD(v1) & 0x7FFF; /*0x7cb4cb*/
}


// ==== 0x007CB4CC  _wcsncmp  this=-  sig=csp ====
int __cdecl wcsncmp(const wchar_t *String1, CampaignScore *aP1, size_t MaxCount)
{
  bool v4; // zf
  size_t MaxCounta; // [esp+10h] [ebp+10h]

  if ( !MaxCount ) /*0x7cb4d3*/
    return 0; /*0x7cb4d5*/
  v4 = MaxCount == 1; /*0x7cb4d9*/
  MaxCounta = MaxCount - 1; /*0x7cb4d9*/
  if ( !v4 ) /*0x7cb4e2*/
  {
    do /*0x7cb4f8*/
    {
      if ( !*String1 ) /*0x7cb4e4*/
        break; /*0x7cb4ea*/
      if ( *String1 != *(_WORD *)aP1->__pad_0 ) /*0x7cb4ef*/
        break; /*0x7cb4ef*/
      ++String1; /*0x7cb4f2*/
      aP1 = (CampaignScore *)((char *)aP1 + 2); /*0x7cb4f4*/
      --MaxCounta; /*0x7cb4f5*/
    }
    while ( MaxCounta ); /*0x7cb4f8*/
  }
  return *String1 - *(unsigned __int16 *)aP1->__pad_0; /*0x7cb4d7*/
}


// ==== 0x007CB504  _wcsncat  this=ObjectClass  sig=csp ====
wchar_t *__cdecl wcsncat(AbstractClass *aP0, const wchar_t *Source, size_t Count)
{
  AbstractClass *v3; // ecx
  AbstractClass *result; // eax
  __int16 v5; // dx
  _WORD *v6; // ecx
  size_t v7; // ebx
  wchar_t v9; // dx

  v3 = aP0; /*0x7cb504*/
  result = aP0; /*0x7cb508*/
  do /*0x7cb512*/
  {
    v5 = *(_WORD *)v3->__pad_0; /*0x7cb50a*/
    v3 = (AbstractClass *)((char *)v3 + 2); /*0x7cb50e*/
  }
  while ( v5 ); /*0x7cb512*/
  v6 = (_WORD *)&v3[-1].NeedsSaveOrLink + 1; /*0x7cb51c*/
  v7 = Count - 1; /*0x7cb51d*/
  if ( Count ) /*0x7cb521*/
  {
    while ( 1 ) /*0x7cb527*/
    {
      v9 = *Source; /*0x7cb527*/
      *v6++ = *Source++; /*0x7cb52a*/
      if ( !v9 ) /*0x7cb534*/
        break; /*0x7cb534*/
      if ( !v7-- ) /*0x7cb536*/
        goto LABEL_6; /*0x7cb53b*/
    }
  }
  else
  {
LABEL_6:
    *v6 = 0; /*0x7cb53d*/
  }
  return (wchar_t *)result; /*0x7cb541*/
}


// ==== 0x007CB550  _strncat  this=-  sig=csp ====
char *__cdecl strncat(CCINIClass *aP0, const char *Source, size_t Count)
{
  size_t v3; // ecx
  CCINIClass *v4; // edi
  char v5; // al
  int v6; // eax
  int unknown54; // eax
  int *p_unknown54; // edi
  const char *v9; // esi
  char v10; // bl
  size_t v11; // ecx
  int v12; // edx
  char v13; // dl
  int v15; // eax

  v3 = Count; /*0x7cb550*/
  if ( !Count ) /*0x7cb557*/
    return aP0->__pad_0; /*0x7cb557*/
  v4 = aP0; /*0x7cb55d*/
  if ( ((unsigned __int8)aP0 & 3) == 0 ) /*0x7cb569*/
    goto find_end_of_front_string_loop; /*0x7cb569*/
  do /*0x7cb578*/
  {
    v5 = v4->__pad_0[0]; /*0x7cb56b*/
    v4 = (CCINIClass *)((char *)v4 + 1); /*0x7cb56d*/
    if ( !v5 ) /*0x7cb570*/
    {
start_byte_3:
      p_unknown54 = (int *)((char *)&v4[-1].unknown54 + 3); /*0x7cb5ab*/
      goto copy_start; /*0x7cb5ac*/
    }
  }
  while ( ((unsigned __int8)v4 & 3) != 0 ); /*0x7cb578*/
  while ( 1 ) /*0x7cb590*/
  {
    do /*0x7cb590*/
    {
find_end_of_front_string_loop:
      v6 = (*(_DWORD *)v4->__pad_0 + 2130640639) ^ ~*(_DWORD *)v4->__pad_0; /*0x7cb57a*/
      v4 = (CCINIClass *)((char *)v4 + 4); /*0x7cb588*/
    }
    while ( (v6 & 0x81010100) == 0 ); /*0x7cb590*/
    unknown54 = v4[-1].unknown54; /*0x7cb592*/
    if ( !(_BYTE)unknown54 ) /*0x7cb597*/
      break; /*0x7cb597*/
    if ( !BYTE1(unknown54) ) /*0x7cb59b*/
    {
      p_unknown54 = (int *)((char *)&v4[-1].unknown54 + 1); /*0x7cb5b3*/
      goto copy_start; /*0x7cb5b6*/
    }
    if ( (unknown54 & 0xFF0000) == 0 ) /*0x7cb5a2*/
    {
      p_unknown54 = (int *)((char *)&v4[-1].unknown54 + 2); /*0x7cb5ae*/
      goto copy_start; /*0x7cb5b1*/
    }
    if ( (unknown54 & 0xFF000000) == 0 ) /*0x7cb5a9*/
      goto start_byte_3; /*0x7cb5a9*/
  }
  p_unknown54 = &v4[-1].unknown54; /*0x7cb5b8*/
copy_start:
  v9 = Source; /*0x7cb5bb*/
  if ( ((unsigned __int8)Source & 3) == 0 ) /*0x7cb5c5*/
  {
    v10 = Count; /*0x7cb5c7*/
    v11 = Count >> 2; /*0x7cb5c9*/
    if ( Count >> 2 ) /*0x7cb5c9*/
      goto main_loop_entrance_0; /*0x7cb5cc*/
tail_loop_start_0:
    v3 = v10 & 3; /*0x7cb5ec*/
    if ( (v10 & 3) != 0 ) /*0x7cb5f1*/
    {
      while ( 1 ) /*0x7cb5f3*/
      {
        v13 = *v9++; /*0x7cb5f3*/
        *(_BYTE *)p_unknown54 = v13; /*0x7cb5f6*/
        p_unknown54 = (int *)((char *)p_unknown54 + 1); /*0x7cb5f8*/
        if ( !v13 ) /*0x7cb5fb*/
          break; /*0x7cb5fb*/
        if ( !--v3 ) /*0x7cb5fe*/
          goto empty_counter; /*0x7cb5fe*/
      }
    }
    else
    {
empty_counter:
      *(_BYTE *)p_unknown54 = v3; /*0x7cb600*/
    }
    return aP0->__pad_0; /*0x7cb609*/
  }
  do /*0x7cb5e3*/
  {
    LOBYTE(v12) = *v9++; /*0x7cb5d0*/
    if ( !(_BYTE)v12 ) /*0x7cb5d5*/
    {
LABEL_26:
      *(_BYTE *)p_unknown54 = v12; /*0x7cb60a*/
      return aP0->__pad_0; /*0x7cb613*/
    }
    *(_BYTE *)p_unknown54 = v12; /*0x7cb5d7*/
    p_unknown54 = (int *)((char *)p_unknown54 + 1); /*0x7cb5d9*/
    if ( !--v3 ) /*0x7cb5db*/
      goto empty_counter; /*0x7cb5db*/
  }
  while ( ((unsigned __int8)v9 & 3) != 0 ); /*0x7cb5e3*/
  v10 = v3; /*0x7cb5e5*/
  v11 = v3 >> 2; /*0x7cb5e7*/
  if ( !v11 ) /*0x7cb5ea*/
    goto tail_loop_start_0; /*0x7cb5ea*/
  while ( 1 ) /*0x7cb628*/
  {
main_loop_entrance_0:
    v15 = (*(_DWORD *)v9 + 2130640639) ^ ~*(_DWORD *)v9; /*0x7cb61c*/
    v12 = *(_DWORD *)v9; /*0x7cb62a*/
    v9 += 4; /*0x7cb62c*/
    if ( (v15 & 0x81010100) == 0 ) /*0x7cb634*/
      goto main_loop_1; /*0x7cb634*/
    if ( !(_BYTE)v12 ) /*0x7cb638*/
      goto LABEL_26; /*0x7cb638*/
    if ( !BYTE1(v12) ) /*0x7cb63c*/
      break; /*0x7cb63c*/
    if ( (v12 & 0xFF0000) == 0 ) /*0x7cb644*/
    {
      *(_WORD *)p_unknown54 = v12; /*0x7cb658*/
      *((_BYTE *)p_unknown54 + 2) = 0; /*0x7cb661*/
      return aP0->__pad_0; /*0x7cb667*/
    }
    if ( (v12 & 0xFF000000) == 0 ) /*0x7cb64c*/
    {
      *p_unknown54 = v12; /*0x7cb64e*/
      return aP0->__pad_0; /*0x7cb657*/
    }
main_loop_1:
    *p_unknown54++ = v12; /*0x7cb614*/
    if ( !--v11 ) /*0x7cb61a*/
      goto tail_loop_start_0; /*0x7cb61a*/
  }
  *(_WORD *)p_unknown54 = (unsigned __int8)v12; /*0x7cb668*/
  return aP0->__pad_0; /*0x7cb608*/
}


// ==== 0x007CB673  __splitpath  this=-  sig=csp ====
void __cdecl _splitpath(const char *FullPath, char *Drive, char *Dir, ObjectClass *aP3, char *Ext)
{
  const char *v5; // ebx
  char *v6; // eax
  size_t v7; // esi
  unsigned __int8 v8; // cl
  size_t v9; // edi
  size_t v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 *Source; // [esp+Ch] [ebp-4h]
  const char *FullPatha; // [esp+18h] [ebp+8h]
  char *Drivea; // [esp+1Ch] [ebp+Ch]

  Source = 0; /*0x7cb677*/
  v5 = FullPath; /*0x7cb67c*/
  if ( strlen(FullPath) && FullPath[1] == 58 ) /*0x7cb691*/
  {
    if ( Drive ) /*0x7cb698*/
    {
      _mbsnbcpy((IUnknown *)Drive, (const unsigned __int8 *)FullPath, 2u); /*0x7cb69e*/
      Drive[2] = 0; /*0x7cb6a6*/
    }
    v5 = FullPath + 2; /*0x7cb6ab*/
  }
  else if ( Drive ) /*0x7cb6b3*/
  {
    *Drive = 0; /*0x7cb6b5*/
  }
  Drivea = 0; /*0x7cb6b8*/
  v6 = (char *)v5; /*0x7cb6bf*/
  v7 = 255; /*0x7cb6c1*/
  FullPatha = v5; /*0x7cb6c6*/
  if ( !*v5 ) /*0x7cb6bc*/
    goto LABEL_23; /*0x7cb6bc*/
  do /*0x7cb6f7*/
  {
    v8 = *v6; /*0x7cb6cb*/
    if ( (CRTGlobal_B78961[(unsigned __int8)*v6] & 4) != 0 ) /*0x7cb6d7*/
    {
      ++v6; /*0x7cb6d9*/
    }
    else if ( v8 == 47 || v8 == 92 ) /*0x7cb6e4*/
    {
      Drivea = v6 + 1; /*0x7cb6f3*/
    }
    else if ( v8 == 46 ) /*0x7cb6e9*/
    {
      Source = (unsigned __int8 *)v6; /*0x7cb6eb*/
    }
    ++v6; /*0x7cb6f6*/
  }
  while ( *v6 ); /*0x7cb6f7*/
  FullPatha = v6; /*0x7cb6ff*/
  if ( Drivea ) /*0x7cb704*/
  {
    if ( Dir ) /*0x7cb70a*/
    {
      v9 = Drivea - v5; /*0x7cb70c*/
      if ( (unsigned int)(Drivea - v5) >= 0xFF ) /*0x7cb710*/
        v9 = 255; /*0x7cb712*/
      _mbsnbcpy((IUnknown *)Dir, (const unsigned __int8 *)v5, v9); /*0x7cb719*/
      Dir[v9] = 0; /*0x7cb724*/
      v6 = (char *)FullPatha; /*0x7cb728*/
    }
    v5 = Drivea; /*0x7cb72b*/
  }
  else
  {
LABEL_23:
    if ( Dir ) /*0x7cb735*/
      *Dir = 0; /*0x7cb737*/
  }
  if ( Source && Source >= (unsigned __int8 *)v5 ) /*0x7cb743*/
  {
    if ( aP3 ) /*0x7cb749*/
    {
      v10 = Source - (unsigned __int8 *)v5; /*0x7cb74b*/
      if ( (unsigned int)(Source - (unsigned __int8 *)v5) >= 0xFF ) /*0x7cb74f*/
        v10 = 255; /*0x7cb751*/
      _mbsnbcpy((IUnknown *)aP3, (const unsigned __int8 *)v5, v10); /*0x7cb758*/
      aP3->__pad_0[v10] = 0; /*0x7cb763*/
      v6 = (char *)FullPatha; /*0x7cb767*/
    }
    if ( Ext ) /*0x7cb76f*/
    {
      v11 = v6 - (char *)Source; /*0x7cb771*/
      if ( v11 < 0xFF ) /*0x7cb776*/
        v7 = v11; /*0x7cb778*/
      _mbsnbcpy((IUnknown *)Ext, Source, v7); /*0x7cb77f*/
      Ext[v7] = 0; /*0x7cb787*/
    }
  }
  else
  {
    if ( aP3 ) /*0x7cb792*/
    {
      v12 = v6 - v5; /*0x7cb794*/
      if ( v12 < 0xFF ) /*0x7cb798*/
        v7 = v12; /*0x7cb79a*/
      _mbsnbcpy((IUnknown *)aP3, (const unsigned __int8 *)v5, v7); /*0x7cb79f*/
      aP3->__pad_0[v7] = 0; /*0x7cb7a7*/
    }
    if ( Ext ) /*0x7cb7b0*/
      *Ext = 0; /*0x7cb7b2*/
  }
}


// ==== 0x007CB7BA  _vsprintf  this=char*  sig=csp ====
int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = Buffer; /*0x7cb7c7*/
  File._ptr = Buffer; /*0x7cb7ca*/
  File._flag = 66; /*0x7cb7d3*/
  File._cnt = 0x7FFFFFFF; /*0x7cb7da*/
  v3 = _output(&File, (char *)Format, (int)ArgList); /*0x7cb7e2*/
  v4 = --File._cnt < 0; /*0x7cb7ea*/
  v5 = v3; /*0x7cb7ed*/
  if ( v4 ) /*0x7cb7ef*/
    _flsbuf(0, &File); /*0x7cb7ff*/
  else
    *File._ptr = 0; /*0x7cb7f4*/
  return v5; /*0x7cb808*/
}


// ==== 0x007CB80B  _fgetc  this=-  sig=csp ====
int __cdecl fgetc(MouseClass *aP0)
{
  int v2; // edi

  _lock_file(aP0); /*0x7cb812*/
  if ( (int)--aP0->field_4 < 0 ) /*0x7cb817*/
    v2 = _filbuf(aP0); /*0x7cb82e*/
  else
    v2 = *(unsigned __int8 *)aP0->field_0++; /*0x7cb81f*/
  _unlock_file(aP0); /*0x7cb831*/
  return v2; /*0x7cb839*/
}


// ==== 0x007CB847  _isleadbyte  this=-  sig=ida-proto ====
int __cdecl isleadbyte(int C)
{
  return *((_WORD *)MEMORY[0x87C590] + (unsigned __int8)C) & 0x8000; /*0x7cb85b*/
}


// ==== 0x007CB85C  _iswalpha  this=-  sig=ida-proto ====
int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u); /*0x7cb86c*/
}


// ==== 0x007CB87B  _iswlower  this=-  sig=ida-proto ====
int __cdecl iswlower(wint_t C)
{
  return iswctype(C, 2u); /*0x7cb888*/
}


// ==== 0x007CB889  _iswdigit  this=-  sig=ida-proto ====
int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u); /*0x7cb896*/
}


// ==== 0x007CB897  _iswxdigit  this=-  sig=ida-proto ====
int __cdecl iswxdigit(wint_t C)
{
  return iswctype(C, 0x80u); /*0x7cb8a7*/
}


// ==== 0x007CB8A8  _iswspace  this=-  sig=csp ====
int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u); /*0x7cb8b5*/
}


// ==== 0x007CB8C4  _iswalnum  this=-  sig=ida-proto ====
int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u); /*0x7cb8d4*/
}


// ==== 0x007CB8D5  _iswprint  this=-  sig=ida-proto ====
int __cdecl iswprint(wint_t C)
{
  return iswctype(C, 0x157u); /*0x7cb8e5*/
}


// ==== 0x007CB8E6  _iswgraph  this=-  sig=csp ====
int __cdecl iswgraph(wint_t C)
{
  return iswctype(C, 0x117u); /*0x7cb8f6*/
}


// ==== 0x007CB8F7  _iswcntrl  this=-  sig=ida-proto ====
int __cdecl iswcntrl(wint_t C)
{
  return iswctype(C, 0x20u); /*0x7cb904*/
}


// ==== 0x007CB905  _iswascii  this=-  sig=ida-proto ====
int __cdecl iswascii(wint_t C)
{
  return C < 0x80u; /*0x7cb910*/
}


// ==== 0x007CB911  _wcstok  this=-  sig=csp ====
wchar_t *__cdecl wcstok(wchar_t *String, CampaignScore *aP1, wchar_t **Context)
{
  ObjectClass *v3; // eax
  wchar_t *referenceCount; // ecx
  wchar_t i; // dx
  CampaignScore *v6; // esi
  __int16 v7; // di
  wchar_t v8; // dx
  CampaignScore *v9; // esi
  __int16 v10; // di
  wchar_t *Stringa; // [esp+Ch] [ebp+8h]

  v3 = (ObjectClass *)_getptd(); /*0x7cb915*/
  referenceCount = String; /*0x7cb91a*/
  if ( !String ) /*0x7cb922*/
    referenceCount = (wchar_t *)v3->referenceCount; /*0x7cb924*/
  for ( i = *referenceCount; *referenceCount; i = *referenceCount ) /*0x7cb927*/
  {
    v6 = aP1; /*0x7cb937*/
    if ( *(_WORD *)aP1->__pad_0 ) /*0x7cb934*/
    {
      v7 = *(_WORD *)aP1->__pad_0; /*0x7cb93f*/
      do /*0x7cb948*/
      {
        if ( v7 == i ) /*0x7cb944*/
          break; /*0x7cb944*/
        v6 = (CampaignScore *)((char *)v6 + 2); /*0x7cb947*/
        v7 = *(_WORD *)v6->__pad_0; /*0x7cb948*/
      }
      while ( *(_WORD *)v6->__pad_0 ); /*0x7cb948*/
    }
    if ( !*(_WORD *)v6->__pad_0 ) /*0x7cb950*/
      break; /*0x7cb954*/
    ++referenceCount; /*0x7cb957*/
  }
  v8 = *referenceCount; /*0x7cb960*/
  Stringa = referenceCount; /*0x7cb963*/
  if ( *referenceCount ) /*0x7cb960*/
  {
    while ( 1 ) /*0x7cb971*/
    {
      v9 = aP1; /*0x7cb971*/
      if ( *(_WORD *)aP1->__pad_0 ) /*0x7cb96e*/
      {
        v10 = *(_WORD *)aP1->__pad_0; /*0x7cb979*/
        do /*0x7cb982*/
        {
          if ( v10 == v8 ) /*0x7cb97e*/
            break; /*0x7cb97e*/
          v9 = (CampaignScore *)((char *)v9 + 2); /*0x7cb981*/
          v10 = *(_WORD *)v9->__pad_0; /*0x7cb982*/
        }
        while ( *(_WORD *)v9->__pad_0 ); /*0x7cb982*/
      }
      if ( *(_WORD *)v9->__pad_0 ) /*0x7cb98a*/
        break; /*0x7cb98a*/
      v8 = *++referenceCount; /*0x7cb992*/
      if ( !*referenceCount ) /*0x7cb992*/
        goto LABEL_19; /*0x7cb998*/
    }
    *referenceCount++ = 0; /*0x7cb99c*/
  }
LABEL_19:
  v3->referenceCount = (int)referenceCount; /*0x7cb9a2*/
  return referenceCount != Stringa ? Stringa : 0;
}


// ==== 0x007CB9B8  _wcstol  this=-  sig=csp ====
int __cdecl wcstol(BlowStraw *aP0, wchar_t **EndPtr, int Radix)
{
  return wcstoxl((wint_t *)aP0, EndPtr, Radix, 0); /*0x7cb9ce*/
}


// ==== 0x007CB9CF  _wcstoxl  this=-  sig=csp ====
int __cdecl wcstoxl(wint_t *a1, wint_t **a2, int a3, int a4)
{
  wint_t v4; // si
  wint_t *v5; // edi
  unsigned int v6; // ebx
  wint_t *v7; // edi
  unsigned int v8; // ecx
  wint_t *v9; // edi
  int v11; // [esp-4h] [ebp-14h]
  unsigned int v12; // [esp+Ch] [ebp-4h]
  unsigned int v13; // [esp+20h] [ebp+10h]

  v12 = 0; /*0x7cb9d3*/
  v4 = *a1; /*0x7cb9dd*/
  v5 = a1 + 1; /*0x7cb9e0*/
  while ( iswctype(v4, 8u) ) /*0x7cb9ef*/
    v4 = *v5++; /*0x7cb9f1*/
  if ( v4 == 45 ) /*0x7cb9fc*/
  {
    a4 |= 2u; /*0x7cb9fe*/
LABEL_7:
    v4 = *v5++; /*0x7cba0a*/
    goto LABEL_8; /*0x7cba0e*/
  }
  if ( v4 == 43 ) /*0x7cba08*/
    goto LABEL_7; /*0x7cba08*/
LABEL_8:
  v6 = a3; /*0x7cba0f*/
  if ( a3 < 0 || a3 == 1 || a3 > 36 ) /*0x7cba26*/
  {
    if ( a2 ) /*0x7cbb68*/
      *a2 = a1; /*0x7cbb6d*/
    return 0; /*0x7cbb6f*/
  }
  if ( !a3 ) /*0x7cba2e*/
  {
    if ( v4 != 48 ) /*0x7cba34*/
    {
      v11 = 10; /*0x7cba36*/
LABEL_17:
      v6 = v11; /*0x7cba4b*/
      goto LABEL_24; /*0x7cba4c*/
    }
    if ( *v5 != 120 && *v5 != 88 ) /*0x7cba47*/
    {
      v11 = 8; /*0x7cba49*/
      goto LABEL_17; /*0x7cba49*/
    }
    v6 = 16; /*0x7cba50*/
  }
  if ( v6 == 16 && v4 == 48 && (*v5 == 120 || *v5 == 88) ) /*0x7cba69*/
  {
    v7 = v5 + 1; /*0x7cba6c*/
    v4 = *v7; /*0x7cba6d*/
    v5 = v7 + 1; /*0x7cba71*/
  }
LABEL_24:
  v13 = 0xFFFFFFFF / v6; /*0x7cba72*/
  while ( 1 ) /*0x7cba88*/
  {
    if ( iswctype(v4, 4u) ) /*0x7cba7f*/
    {
      v8 = v4 - 48; /*0x7cba8d*/
    }
    else
    {
      if ( !iswctype(v4, 0x103u) ) /*0x7cbaa1*/
        break; /*0x7cbaa1*/
      v8 = towupper(v4) - 55; /*0x7cbaad*/
    }
    if ( v8 >= v6 ) /*0x7cbab2*/
      break; /*0x7cbab2*/
    a4 |= 8u; /*0x7cbab7*/
    if ( v12 < v13 || v12 == v13 && v8 <= 0xFFFFFFFF % v6 ) /*0x7cbacb*/
      v12 = v8 + v6 * v12; /*0x7cbad8*/
    else
      a4 |= 4u; /*0x7cbacd*/
    v4 = *v5++; /*0x7cbadb*/
  }
  v9 = v5 - 1; /*0x7cbae2*/
  if ( (a4 & 8) != 0 ) /*0x7cbaea*/
  {
    if ( (a4 & 4) != 0 || (a4 & 1) == 0 && ((a4 & 2) != 0 && v12 > 0x80000000 || (a4 & 2) == 0 && v12 > 0x7FFFFFFF) ) /*0x7cbb21*/
    {
      *_errno() = 34; /*0x7cbb2b*/
      if ( (a4 & 1) != 0 ) /*0x7cbb31*/
        v12 = -1; /*0x7cbb33*/
      else
        v12 = ((a4 & 2) != 0) + 0x7FFFFFFF; /*0x7cbb45*/
    }
  }
  else
  {
    if ( a2 ) /*0x7cbaf0*/
      v9 = a1; /*0x7cbaf2*/
    v12 = 0; /*0x7cbaf5*/
  }
  if ( a2 ) /*0x7cbb4d*/
    *a2 = v9; /*0x7cbb4f*/
  if ( (a4 & 2) != 0 ) /*0x7cbb54*/
    return -v12; /*0x7cbb5b*/
  return v12; /*0x7cbb71*/
}


// ==== 0x007CBB76  WideChar::ToLong  this=WideChar  sig=csp ====
int __cdecl WideChar::ToLong(BlowStraw *aP0, int a2, int a3)
{
  return wcstoxl((wint_t *)aP0, (wint_t **)a2, a3, 1); /*0x7cbb8c*/
}


// ==== 0x007CBB8D  __mbsnccnt  this=-  sig=csp ====
size_t __cdecl _mbsnccnt(const unsigned __int8 *Str, size_t MaxCount)
{
  size_t v2; // esi
  size_t v3; // edx

  _lock(25); /*0x7cbb90*/
  v2 = 0; /*0x7cbb99*/
  v3 = MaxCount - 1; /*0x7cbb9d*/
  if ( MaxCount ) /*0x7cbba1*/
  {
    do /*0x7cbbcd*/
    {
      if ( !*Str ) /*0x7cbba7*/
        break; /*0x7cbba7*/
      if ( (CRTGlobal_B78961[*Str] & 4) != 0 ) /*0x7cbbb7*/
      {
        if ( !v3-- ) /*0x7cbbb9*/
          break; /*0x7cbbbe*/
        if ( !*++Str ) /*0x7cbbc1*/
          break; /*0x7cbbc4*/
      }
      ++v2; /*0x7cbbc6*/
      ++Str; /*0x7cbbc7*/
    }
    while ( v3-- ); /*0x7cbbcd*/
  }
  _unlock(25); /*0x7cbbd1*/
  return v2; /*0x7cbbd9*/
}


// ==== 0x007CBBDB  _swscanf  this=-  sig=csp ====
int swscanf(const wchar_t *const Buffer, CampaignScore *aP1, ...)
{
  FILE File; // [esp+0h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, aP1);
  File._flag = 73; /*0x7cbbe4*/
  File._base = (char *)Buffer; /*0x7cbbec*/
  File._ptr = (char *)Buffer; /*0x7cbbef*/
  File._cnt = 2 * wcslen(Buffer); /*0x7cbbf9*/
  return _winput(&File, aP1, (int)va); /*0x7cbc0f*/
}


// ==== 0x007CBC11  Object_Init_7CBC11  this=-  sig=csp ====
char *__cdecl sub_7CBC11(char *VarName)
{
  char *v1; // esi

  _lock(12); /*0x7cbc14*/
  v1 = getenv(VarName); /*0x7cbc24*/
  _unlock(12); /*0x7cbc26*/
  return v1; /*0x7cbc30*/
}


// ==== 0x007CBC32  _getenv  this=-  sig=csp ====
char *__cdecl getenv(const char *VarName)
{
  const char **v1; // esi
  size_t v2; // edi

  v1 = (const char **)CRTGlobal_B781E4; /*0x7cbc3b*/
  if ( CRTGlobal_B78BB4 ) /*0x7cbc42*/
  {
    if ( CRTGlobal_B781E4 || CRTGlobal_B781EC && !__wtomb_environ() && (v1 = (const char **)CRTGlobal_B781E4) != 0 ) /*0x7cbc61*/
    {
      if ( VarName ) /*0x7cbc69*/
      {
        v2 = strlen(VarName); /*0x7cbc72*/
        while ( *v1 ) /*0x7cbc78*/
        {
          if ( strlen(*v1) > v2 /*0x7cbc9a*/
            && (*v1)[v2] == 61
            && !_mbsnbicoll((const unsigned __int8 *)*v1, (const unsigned __int8 *)VarName, v2) )
          {
            return (char *)&(*v1)[v2 + 1]; /*0x7cbca7*/
          }
          ++v1; /*0x7cbc9c*/
        }
      }
    }
  }
  return 0; /*0x7cbcab*/
}


// ==== 0x007CBCAF  __itow  this=-  sig=csp ====
wchar_t *__cdecl _itow(int Value, wchar_t *Buffer, int Radix)
{
  CHAR MultiByteStr[20]; // [esp+0h] [ebp-14h] BYREF

  _itoa(Value, MultiByteStr, Radix); /*0x7cbcbf*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 20); /*0x7cbcd6*/
  return Buffer; /*0x7cbcdf*/
}


// ==== 0x007CBCE1  __ltow  this=-  sig=ida-proto ====
wchar_t *__cdecl _ltow(int Value, wchar_t *Buffer, int Radix)
{
  CHAR MultiByteStr[40]; // [esp+0h] [ebp-28h] BYREF

  _ltoa(Value, MultiByteStr, Radix); /*0x7cbcf1*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 40); /*0x7cbd08*/
  return Buffer; /*0x7cbd11*/
}


// ==== 0x007CBD13  __ultow  this=-  sig=ida-proto ====
wchar_t *__cdecl _ultow(unsigned int Value, wchar_t *Buffer, int Radix)
{
  CHAR MultiByteStr[40]; // [esp+0h] [ebp-28h] BYREF

  _ultoa(Value, MultiByteStr, Radix); /*0x7cbd23*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 40); /*0x7cbd3a*/
  return Buffer; /*0x7cbd43*/
}


// ==== 0x007CBD45  __i64tow  this=-  sig=ida-proto ====
wchar_t *__cdecl _i64tow(__int64 Value, wchar_t *Buffer, int Radix)
{
  CHAR MultiByteStr[80]; // [esp+0h] [ebp-50h] BYREF

  _i64toa(Value, MultiByteStr, Radix); /*0x7cbd58*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 80); /*0x7cbd6f*/
  return Buffer; /*0x7cbd78*/
}


// ==== 0x007CBD7A  __ui64tow  this=-  sig=ida-proto ====
wchar_t *__cdecl _ui64tow(unsigned __int64 Value, wchar_t *Buffer, int Radix)
{
  CHAR MultiByteStr[80]; // [esp+0h] [ebp-50h] BYREF

  _ui64toa(Value, MultiByteStr, Radix); /*0x7cbd8d*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 80); /*0x7cbda4*/
  return Buffer; /*0x7cbdad*/
}


// ==== 0x007CBDAF  __cinit  this=-  sig=ida-proto ====
void _cinit()
{
  if ( off_87BEB8 ) /*0x7cbdb6*/
    off_87BEB8(); /*0x7cbdb8*/
  _initterm(&First, &Last); /*0x7cbdc4*/
  _initterm(&dword_812000, &dword_815DA4); /*0x7cbdd3*/
}


// ==== 0x007CBDDC  _exit  this=-  sig=csp ====
void __cdecl __noreturn exit(int Code)
{
  doexit(Code, 0, 0); /*0x7cbde4*/
}


// ==== 0x007CBDED  __exit  this=-  sig=csp ====
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0); /*0x7cbdf5*/
}


// ==== 0x007CBDFE  __cexit  this=-  sig=ida-proto ====
void __cdecl _cexit()
{
  doexit(0, 0, 1); /*0x7cbe04*/
}


// ==== 0x007CBE0D  __c_exit  this=-  sig=ida-proto ====
void __cdecl _c_exit()
{
  doexit(0, 1, 1); /*0x7cbe13*/
}


// ==== 0x007CBE1C  _doexit  this=-  sig=csp ====
int __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  void (**v4)(void); // esi

  _lockexit(); /*0x7cbe1d*/
  if ( CRTGlobal_B78204 == 1 ) /*0x7cbe2b*/
  {
    CurrentProcess = GetCurrentProcess(); /*0x7cbe31*/
    TerminateProcess(CurrentProcess, uExitCode); /*0x7cbe38*/
  }
  CRTGlobal_B78200 = 1; /*0x7cbe48*/
  CRTGlobal_B781FC = a3; /*0x7cbe4e*/
  if ( !a2 ) /*0x7cbe54*/
  {
    if ( CRTGlobal_B78BC0 ) /*0x7cbe5d*/
    {
      v4 = (void (**)(void))(CRTGlobal_B78BBC - 4); /*0x7cbe66*/
      if ( CRTGlobal_B78BBC - 4 >= (unsigned int)CRTGlobal_B78BC0 ) /*0x7cbe6b*/
      {
        do /*0x7cbe7e*/
        {
          if ( *v4 ) /*0x7cbe6d*/
            (*v4)(); /*0x7cbe73*/
          --v4; /*0x7cbe75*/
        }
        while ( v4 >= CRTGlobal_B78BC0 ); /*0x7cbe7e*/
      }
    }
    _initterm(&dword_815DC0, &dword_815DD0); /*0x7cbe8b*/
  }
  _initterm(&dword_815DD4, &dword_815DDC); /*0x7cbe9c*/
  if ( !a3 ) /*0x7cbea6*/
  {
    CRTGlobal_B78204 = 1; /*0x7cbeb3*/
    ExitProcess(uExitCode); /*0x7cbeb9*/
  }
  return _unlockexit(); /*0x7cbead*/
}


// ==== 0x007CBEC1  __lockexit  this=-  sig=csp ====
void _lockexit()
{
  _lock(13); /*0x7cbec3*/
}


// ==== 0x007CBECA  __unlockexit  this=-  sig=ida-proto ====
int _unlockexit()
{
  return _unlock(13); /*0x7cbed2*/
}


// ==== 0x007CBED3  __initterm  this=-  sig=csp ====
void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  while ( First < Last ) /*0x7cbedc*/
  {
    if ( *First ) /*0x7cbede*/
      (*First)(); /*0x7cbee4*/
    ++First; /*0x7cbee6*/
  }
}


// ==== 0x007CBEED  __statusfp  this=-  sig=ida-proto ====
unsigned int __cdecl _statusfp()
{
  return _abstract_sw(); /*0x7cbefe*/
}


// ==== 0x007CBF00  __clearfp  this=-  sig=ida-proto ====
unsigned int __cdecl _clearfp()
{
  __asm { fnclex } /*0x7cbf07*/
  return _abstract_sw(); /*0x7cbf12*/
}


// ==== 0x007CBF14  __control87  this=-  sig=csp ====
unsigned int __cdecl _control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v2; // esi

  v2 = Mask & NewValue | ~Mask & _abstract_cw(); /*0x7cbf34*/
  _hw_cw(v2); /*0x7cbf37*/
  return v2; /*0x7cbf46*/
}


// ==== 0x007CBF49  __controlfp  this=-  sig=csp ====
unsigned int __cdecl _controlfp(unsigned int NewValue, unsigned int Mask)
{
  return _control87(NewValue, Mask & 0xFFF7FFFF); /*0x7cbf5e*/
}


// ==== 0x007CBF5F  __fpreset  this=-  sig=ida-proto ====
void __cdecl _fpreset()
{
  _DWORD *v0; // esi
  _DWORD *v1; // eax

  v0 = *__pxcptinfoptrs(); /*0x7cbf65*/
  __asm { fninit } /*0x7cbf67*/
  _setdefaultprecision(); /*0x7cbf69*/
  if ( v0 ) /*0x7cbf70*/
  {
    v1 = (_DWORD *)v0[1]; /*0x7cbf72*/
    if ( (*v1 & 0x10008) != 0 ) /*0x7cbf7b*/
    {
      v1[8] = 0; /*0x7cbf7d*/
      v1[9] = 0xFFFF; /*0x7cbf81*/
    }
  }
}


// ==== 0x007CBF8A  __abstract_cw  this=-  sig=csp ====
char __cdecl _abstract_cw(char a1)
{
  char result; // al

  result = 0; /*0x7cbf8f*/
  if ( (a1 & 1) != 0 ) /*0x7cbf96*/
    result = 16; /*0x7cbf9a*/
  if ( (a1 & 4) != 0 ) /*0x7cbf9e*/
    result |= 8u; /*0x7cbfa0*/
  if ( (a1 & 8) != 0 ) /*0x7cbfa5*/
    result |= 4u; /*0x7cbfa7*/
  if ( (a1 & 0x10) != 0 ) /*0x7cbfac*/
    result |= 2u; /*0x7cbfae*/
  if ( (a1 & 0x20) != 0 ) /*0x7cbfb3*/
    return result | 1; /*0x7cbfb5*/
  return result; /*0x7cc00e*/
}


// ==== 0x007CC01C  __hw_cw  this=-  sig=csp ====
char __cdecl _hw_cw(int a1)
{
  char result; // al

  result = (a1 & 0x10) != 0; /*0x7cc02b*/
  if ( (a1 & 8) != 0 ) /*0x7cc02f*/
    result |= 4u; /*0x7cc031*/
  if ( (a1 & 4) != 0 ) /*0x7cc036*/
    result |= 8u; /*0x7cc038*/
  if ( (a1 & 2) != 0 ) /*0x7cc03d*/
    result |= 0x10u; /*0x7cc03f*/
  if ( (a1 & 1) != 0 ) /*0x7cc044*/
    result |= 0x20u; /*0x7cc046*/
  if ( (a1 & 0x80000) != 0 ) /*0x7cc04e*/
    return result | 2; /*0x7cc050*/
  return result; /*0x7cc097*/
}


// ==== 0x007CC0A5  __abstract_sw  this=-  sig=csp ====
char __cdecl _abstract_sw(char a1)
{
  char result; // al

  result = 0; /*0x7cc0a9*/
  if ( (a1 & 1) != 0 ) /*0x7cc0ae*/
    result = 16; /*0x7cc0b2*/
  if ( (a1 & 4) != 0 ) /*0x7cc0b6*/
    result |= 8u; /*0x7cc0b8*/
  if ( (a1 & 8) != 0 ) /*0x7cc0bd*/
    result |= 4u; /*0x7cc0bf*/
  if ( (a1 & 0x10) != 0 ) /*0x7cc0c4*/
    result |= 2u; /*0x7cc0c6*/
  if ( (a1 & 0x20) != 0 ) /*0x7cc0cb*/
    return result | 1; /*0x7cc0cd*/
  return result; /*0x7cc0d9*/
}


// ==== 0x007CC0DC  __global_unwind2  this=-  sig=csp ====
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, 0, 0); /*0x7cc0ef*/
}


// ==== 0x007CC0FC  ObjectClass::__unwind_handler  this=ObjectClass  sig=csp ====
int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = 1; /*0x7cc107*/
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 ) /*0x7cc10c*/
  {
    *a4 = a2; /*0x7cc116*/
    return 3; /*0x7cc118*/
  }
  return result; /*0x7cc11d*/
}


// ==== 0x007CC11E  __local_unwind2  this=-  sig=csp ====
int __cdecl _local_unwind2(int a1, int a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // esi
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-1Ch]
  int (__cdecl *v7)(int, int, int, _DWORD *); // [esp-4h] [ebp-18h]

  v7 = _unwind_handler; /*0x7cc128*/
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList; /*0x7cc12d*/
  while ( 1 ) /*0x7cc13b*/
  {
    result = a1; /*0x7cc13b*/
    v3 = *(_DWORD *)(a1 + 8); /*0x7cc13f*/
    v4 = *(_DWORD *)(a1 + 12); /*0x7cc142*/
    if ( v4 == -1 || v4 == a2 ) /*0x7cc14e*/
      break; /*0x7cc14e*/
    v5 = 3 * v4; /*0x7cc150*/
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 4 * v5); /*0x7cc15a*/
    if ( !*(_DWORD *)(v3 + 4 * v5 + 4) ) /*0x7cc15d*/
    {
      _NLG_Notify(257); /*0x7cc16d*/
      (*(void (__cdecl **)(struct _EXCEPTION_REGISTRATION_RECORD *, int (__cdecl *)(int, int, int, _DWORD *)))(v3 + 4 * v5 + 8))( /*0x7cc172*/
        ExceptionList,
        v7);
    }
  }
  return result; /*0x7cc182*/
}


// ==== 0x007CC186  __abnormal_termination  this=-  sig=ida-proto ====
int __cdecl _abnormal_termination()
{
  int result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = 0; /*0x7cc186*/
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList; /*0x7cc188*/
  if ( (int (__cdecl *)(int, int, int, _DWORD *))ExceptionList->Handler == _unwind_handler ) /*0x7cc196*/
    return ExceptionList[1].Next == (struct _EXCEPTION_REGISTRATION_RECORD *)*((_DWORD *)ExceptionList[1].Handler + 3); /*0x7cc1a3*/
  return result; /*0x7cc1a8*/
}


// ==== 0x007CC1A9  __NLG_Notify1  this=-  sig=csp ====
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x7CC1BC); /*0x7cc1bc*/
}


// ==== 0x007CC1B2  __NLG_Notify  this=-  sig=csp ====
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_87C1D8 = *(_DWORD *)(a2 + 8); /*0x7cc1bc*/
  unk_87C1D4 = result; /*0x7cc1bf*/
  unk_87C1DC = a2; /*0x7cc1c2*/
  return result; /*0x7cc1c6*/
}


// ==== 0x007CC1D4  __except_handler3  this=-  sig=ida-proto ====
int __cdecl _except_handler3(int a1, _DWORD *TargetFrame, int a3)
{
  int *v3; // ebp
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  _DWORD v11[2]; // [esp+10h] [ebp-8h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v3 = &savedregs; /*0x7cc1d5*/
  v4 = TargetFrame; /*0x7cc1df*/
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 ) /*0x7cc1ec*/
  {
    _local_unwind2((int)TargetFrame, -1); /*0x7cc27b*/
    return 1; /*0x7cc284*/
  }
  else
  {
    v11[0] = a1; /*0x7cc1f2*/
    v11[1] = a3; /*0x7cc1f8*/
    *(TargetFrame - 1) = v11; /*0x7cc1fe*/
    v5 = TargetFrame[3]; /*0x7cc201*/
    v6 = TargetFrame[2]; /*0x7cc204*/
    while ( v5 != -1 ) /*0x7cc20a*/
    {
      if ( *(_DWORD *)(v6 + 12 * v5 + 4) ) /*0x7cc20f*/
      {
        v7 = (*(int (**)(void))(v6 + 12 * v5 + 4))(); /*0x7cc21b*/
        v4 = (_DWORD *)v3[3]; /*0x7cc221*/
        if ( v7 ) /*0x7cc226*/
        {
          if ( v7 < 0 ) /*0x7cc228*/
            return 0; /*0x7cc26b*/
          v8 = v4[2]; /*0x7cc22a*/
          _global_unwind2((PVOID)v3[3]); /*0x7cc22e*/
          v3 = v4 + 4; /*0x7cc236*/
          _local_unwind2((int)v4, v5); /*0x7cc23b*/
          _NLG_Notify(*(_DWORD *)(v8 + 12 * v5 + 8), (int)(v4 + 4), 1); /*0x7cc24c*/
          v4[3] = *(_DWORD *)(v8 + 4 * v9); /*0x7cc254*/
          (*(void (**)(void))(v8 + 4 * v9 + 8))(); /*0x7cc257*/
        }
      }
      v6 = v4[2]; /*0x7cc25b*/
      v5 = *(_DWORD *)(v6 + 12 * v5); /*0x7cc261*/
    }
    return 1; /*0x7cc26d*/
  }
}


// ==== 0x007CC291  ObjectClass::__seh_longjmp_unwind_4  this=ObjectClass  sig=csp ====
int __stdcall _seh_longjmp_unwind_4(int a1)
{
  return _local_unwind2(*(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28)); /*0x7cc2a8*/
}


// ==== 0x007CC2AC  _mbstowcs  this=-  sig=csp ====
size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // ebx
  int MaxCounta; // [esp+1Ch] [ebp+10h]

  InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7cc2b8*/
  v3 = 0; /*0x7cc2c4*/
  if ( CRTGlobal_B78BA0 ) /*0x7cc2cc*/
  {
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cc2cf*/
    _lock(19); /*0x7cc2d3*/
    v3 = 1; /*0x7cc2db*/
  }
  MaxCounta = _mbstowcs_lk(Dest, Source, MaxCount); /*0x7cc2ed*/
  if ( v3 ) /*0x7cc2f2*/
    _unlock(19); /*0x7cc2f6*/
  else
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cc2ff*/
  return MaxCounta; /*0x7cc304*/
}


// ==== 0x007CC309  __mbstowcs_lk  this=-  sig=csp ====
size_t __cdecl _mbstowcs_lk(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int cchWideChar)
{
  LPWSTR v3; // edx
  size_t result; // eax
  int v6; // eax
  LPCCH v7; // eax
  LPCCH v8; // ecx
  LPCCH lpMultiByteStra; // [esp+18h] [ebp+Ch]

  v3 = lpWideCharStr; /*0x7cc30c*/
  result = 0; /*0x7cc313*/
  if ( !lpWideCharStr ) /*0x7cc318*/
  {
    if ( !CRTGlobal_B782A0 ) /*0x7cc3dd*/
      return strlen(lpMultiByteStr); /*0x7cc3e8*/
    v6 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, -1, 0, 0); /*0x7cc3f9*/
    if ( !v6 ) /*0x7cc401*/
    {
LABEL_9:
      *_errno() = 42; /*0x7cc385*/
      return -1; /*0x7cc393*/
    }
    return v6 - 1; /*0x7cc403*/
  }
  if ( !cchWideChar ) /*0x7cc323*/
    return result; /*0x7cc323*/
  if ( !CRTGlobal_B782A0 ) /*0x7cc32f*/
  {
    do /*0x7cc353*/
    {
      *v3 = (unsigned __int8)lpMultiByteStr[result]; /*0x7cc342*/
      if ( !lpMultiByteStr[result] ) /*0x7cc345*/
        break; /*0x7cc348*/
      ++result; /*0x7cc34e*/
      ++v3; /*0x7cc350*/
    }
    while ( result < cchWideChar ); /*0x7cc353*/
    return result; /*0x7cc353*/
  }
  v6 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, -1, lpWideCharStr, cchWideChar); /*0x7cc370*/
  if ( v6 ) /*0x7cc374*/
    return v6 - 1; /*0x7cc374*/
  if ( GetLastError() != 122 ) /*0x7cc383*/
    goto LABEL_9; /*0x7cc383*/
  v7 = lpMultiByteStr; /*0x7cc398*/
  lpMultiByteStra = (LPCCH)(cchWideChar - 1); /*0x7cc39a*/
  do /*0x7cc3bd*/
  {
    if ( !*v7 ) /*0x7cc39d*/
      break; /*0x7cc3a1*/
    if ( *((char *)MEMORY[0x87C590] + 2 * *(unsigned __int8 *)v7 + 1) < 0 ) /*0x7cc3b1*/
      ++v7; /*0x7cc3b3*/
    v8 = lpMultiByteStra; /*0x7cc3b4*/
    ++v7; /*0x7cc3b7*/
    --lpMultiByteStra; /*0x7cc3b8*/
  }
  while ( v8 ); /*0x7cc3bd*/
  result = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, v7 - lpMultiByteStr, lpWideCharStr, cchWideChar); /*0x7cc3cf*/
  if ( !result ) /*0x7cc3d3*/
    goto LABEL_9; /*0x7cc3d3*/
  return result; /*0x7cc404*/
}


// ==== 0x007CC409  _wcspbrk  this=-  sig=csp ====
wchar_t *__cdecl wcspbrk(BlowStraw *aP0, CampaignScore *aP1)
{
  BlowStraw *result; // eax
  __int16 v3; // dx
  CampaignScore *v4; // esi
  __int16 v5; // cx

  result = aP0; /*0x7cc409*/
  v3 = *(_WORD *)aP0->__pad_0; /*0x7cc410*/
  if ( !*(_WORD *)aP0->__pad_0 ) /*0x7cc410*/
    return 0; /*0x7cc441*/
  while ( 1 ) /*0x7cc422*/
  {
    v4 = aP1; /*0x7cc422*/
    if ( *(_WORD *)aP1->__pad_0 ) /*0x7cc41c*/
      break; /*0x7cc41c*/
LABEL_6:
    result = (BlowStraw *)((char *)result + 2); /*0x7cc437*/
    v3 = *(_WORD *)result->__pad_0; /*0x7cc439*/
    if ( !*(_WORD *)result->__pad_0 ) /*0x7cc439*/
      return 0; /*0x7cc43f*/
  }
  v5 = *(_WORD *)aP1->__pad_0; /*0x7cc426*/
  while ( v5 != v3 ) /*0x7cc42b*/
  {
    v4 = (CampaignScore *)((char *)v4 + 2); /*0x7cc42e*/
    v5 = *(_WORD *)v4->__pad_0; /*0x7cc42f*/
    if ( !*(_WORD *)v4->__pad_0 ) /*0x7cc42f*/
      goto LABEL_6; /*0x7cc435*/
  }
  return (wchar_t *)result; /*0x7cc443*/
}


// ==== 0x007CC447  _wcstombs  this=-  sig=csp ====
size_t __cdecl wcstombs(CCINIClass *aP0, ObjectClass *aP1, size_t MaxCount)
{
  int v3; // ebx
  size_t MaxCounta; // [esp+1Ch] [ebp+10h]

  InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7cc453*/
  v3 = 0; /*0x7cc45f*/
  if ( CRTGlobal_B78BA0 ) /*0x7cc467*/
  {
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cc46a*/
    _lock(19); /*0x7cc46e*/
    v3 = 1; /*0x7cc476*/
  }
  MaxCounta = _wcstombs_lk(aP0, aP1, MaxCount); /*0x7cc488*/
  if ( v3 ) /*0x7cc48d*/
    _unlock(19); /*0x7cc491*/
  else
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cc49a*/
  return MaxCounta; /*0x7cc49f*/
}


// ==== 0x007CC4A4  __wcstombs_lk  this=-  sig=csp ====
size_t __cdecl _wcstombs_lk(CCINIClass *aP0, ObjectClass *aP1, unsigned int cchWideChar)
{
  size_t v3; // edi
  size_t result; // eax
  ObjectClass *v5; // ecx
  __int16 v6; // ax
  int v7; // eax
  size_t v8; // esi
  int v9; // eax
  int i; // edx
  char v11; // cl
  BOOL UsedDefaultChar; // [esp+10h] [ebp-8h] BYREF
  CHAR MultiByteStr[2]; // [esp+16h] [ebp-2h] BYREF
  unsigned int cchWideChara; // [esp+28h] [ebp+10h]

  v3 = 0; /*0x7cc4b2*/
  UsedDefaultChar = 0; /*0x7cc4b6*/
  if ( !aP0 ) /*0x7cc4b9*/
  {
    if ( !CRTGlobal_B782A0 ) /*0x7cc60a*/
      return wcslen((const wchar_t *)aP1); /*0x7cc615*/
    result = WideCharToMultiByte(CodePage, 0x220u, (LPCWCH)aP1, -1, 0, 0, 0, &UsedDefaultChar); /*0x7cc62e*/
    if ( !result || UsedDefaultChar ) /*0x7cc63b*/
      goto LABEL_34; /*0x7cc63b*/
    return --result; /*0x7cc63e*/
  }
  if ( !cchWideChar ) /*0x7cc4c4*/
    return 0; /*0x7cc4c8*/
  if ( !CRTGlobal_B782A0 ) /*0x7cc4d3*/
  {
    v5 = aP1; /*0x7cc4d9*/
    while ( *(_WORD *)v5->__pad_0 <= 0xFFu ) /*0x7cc4e1*/
    {
      aP0->__pad_0[v3] = v5->__pad_0[0]; /*0x7cc4e9*/
      v6 = *(_WORD *)v5->__pad_0; /*0x7cc4ec*/
      v5 = (ObjectClass *)((char *)v5 + 2); /*0x7cc4f0*/
      if ( v6 ) /*0x7cc4f4*/
      {
        if ( ++v3 < cchWideChar ) /*0x7cc4f9*/
          continue; /*0x7cc4f9*/
      }
      return v3; /*0x7cc4fd*/
    }
    goto LABEL_34; /*0x7cc4e1*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_3BC[108] == 1 ) /*0x7cc509*/
  {
    cchWideChara = wcsncnt(aP1, cchWideChar); /*0x7cc519*/
    result = WideCharToMultiByte( /*0x7cc535*/
               CodePage,
               0x220u,
               (LPCWCH)aP1,
               cchWideChara,
               aP0->__pad_0,
               cchWideChara,
               0,
               &UsedDefaultChar);
    if ( result && !UsedDefaultChar ) /*0x7cc546*/
    {
      if ( aP0->__pad_0[result - 1] ) /*0x7cc54c*/
        return result; /*0x7cc550*/
      return --result; /*0x7cc550*/
    }
LABEL_34:
    *_errno() = 42; /*0x7cc640*/
    return -1; /*0x7cc64b*/
  }
  v7 = WideCharToMultiByte(CodePage, 0x220u, (LPCWCH)aP1, -1, aP0->__pad_0, cchWideChar, 0, &UsedDefaultChar); /*0x7cc578*/
  v8 = v7; /*0x7cc57a*/
  if ( v7 ) /*0x7cc57e*/
  {
    if ( !UsedDefaultChar ) /*0x7cc583*/
      return v7 - 1; /*0x7cc58c*/
    goto LABEL_34; /*0x7cc583*/
  }
  if ( UsedDefaultChar || GetLastError() != 122 ) /*0x7cc5a3*/
    goto LABEL_34; /*0x7cc5a3*/
  while ( v8 < cchWideChar ) /*0x7cc5ac*/
  {
    v9 = WideCharToMultiByte( /*0x7cc5c9*/
           CodePage,
           0,
           (LPCWCH)aP1,
           1,
           MultiByteStr,
           *(int *)&stru_87C374.__pad_3BC[108],
           0,
           &UsedDefaultChar);
    if ( !v9 || UsedDefaultChar ) /*0x7cc5d5*/
      goto LABEL_34; /*0x7cc5d5*/
    if ( v9 + v8 > cchWideChar ) /*0x7cc5dd*/
      break; /*0x7cc5dd*/
    for ( i = 0; i < v9; ++v8 ) /*0x7cc5e3*/
    {
      v11 = MultiByteStr[i]; /*0x7cc5e5*/
      aP0->__pad_0[v8] = v11; /*0x7cc5ee*/
      if ( !v11 ) /*0x7cc5f1*/
        return v8; /*0x7cc5f1*/
      ++i; /*0x7cc5f3*/
    }
    aP1 = (ObjectClass *)((char *)aP1 + 2); /*0x7cc5fa*/
  }
  return v8; /*0x7cc64e*/
}


// ==== 0x007CC653  _wcsncnt  this=-  sig=csp ====
int __cdecl wcsncnt(ObjectClass *aP0, int a2)
{
  int v2; // ecx
  ObjectClass *v3; // eax

  v2 = a2; /*0x7cc656*/
  v3 = aP0; /*0x7cc659*/
  if ( !a2 ) /*0x7cc660*/
    return a2; /*0x7cc660*/
  do /*0x7cc66a*/
  {
    if ( !*(_WORD *)v3->__pad_0 ) /*0x7cc662*/
      break; /*0x7cc665*/
    v3 = (ObjectClass *)((char *)v3 + 2); /*0x7cc668*/
    --v2; /*0x7cc669*/
  }
  while ( v2 ); /*0x7cc66a*/
  if ( v2 && !*(_WORD *)v3->__pad_0 ) /*0x7cc670*/
    return (((char *)v3 - (char *)aP0) >> 1) + 1; /*0x7cc67a*/
  else
    return a2; /*0x7cc67d*/
}


// ==== 0x007CC682  _wcsstr  this=-  sig=csp ====
wchar_t *__cdecl wcsstr(CampaignScore *aP0, const wchar_t *SubStr)
{
  CampaignScore *result; // eax
  const wchar_t *v3; // ecx
  int v4; // edx

  for ( result = aP0; *(_WORD *)result->__pad_0; result = (CampaignScore *)((char *)result + 2) ) /*0x7cc682*/
  {
    v3 = SubStr; /*0x7cc690*/
    v4 = (char *)result - (char *)SubStr; /*0x7cc696*/
    do /*0x7cc6ad*/
    {
      if ( !*v3 ) /*0x7cc698*/
        break; /*0x7cc69e*/
      if ( *(const wchar_t *)((char *)v3 + v4) != *v3 ) /*0x7cc6a7*/
        break; /*0x7cc6a9*/
      ++v3; /*0x7cc6ac*/
    }
    while ( *(const wchar_t *)((char *)v3 + v4) ); /*0x7cc6ad*/
    if ( !*v3 ) /*0x7cc6b8*/
      return (wchar_t *)result; /*0x7cc6b8*/
  }
  return 0; /*0x7cc6c0*/
}


// ==== 0x007CC6C3  __Getdays  this=-  sig=ida-proto ====
char *__cdecl _Getdays()
{
  const char **v0; // esi
  int v1; // ebx
  size_t v2; // edi
  size_t v3; // eax
  bool v4; // zf
  char *v5; // esi
  const char **v6; // edi
  int v7; // ebx
  char *v8; // esi
  char *v9; // eax
  char *v10; // esi
  char *v11; // eax
  const char **v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]
  char *v15; // [esp+10h] [ebp-4h]

  v0 = (const char **)off_87C1E0; /*0x7cc6ca*/
  v13 = (const char **)off_87C1E0; /*0x7cc6d1*/
  v1 = 0; /*0x7cc6d4*/
  v14 = 7; /*0x7cc6d6*/
  do /*0x7cc6fc*/
  {
    v2 = strlen(v0[7]); /*0x7cc6e7*/
    v3 = v1 + strlen(*v0++); /*0x7cc6ee*/
    v4 = v14-- == 1; /*0x7cc6f4*/
    v1 = v3 + v2 + 2; /*0x7cc6f8*/
  }
  while ( !v4 ); /*0x7cc6fc*/
  v5 = (char *)malloc(v3 + v2 + 3); /*0x7cc705*/
  v15 = v5; /*0x7cc70a*/
  if ( v5 ) /*0x7cc70d*/
  {
    v6 = v13; /*0x7cc70f*/
    v7 = 7; /*0x7cc714*/
    do /*0x7cc745*/
    {
      *v5 = 58; /*0x7cc715*/
      v8 = v5 + 1; /*0x7cc71a*/
      v9 = strcpy(v8, *v6); /*0x7cc71c*/
      v10 = &v8[strlen(v9)]; /*0x7cc727*/
      *v10++ = 58; /*0x7cc729*/
      v11 = strcpy(v10, v6[7]); /*0x7cc731*/
      v5 = &v10[strlen(v11)]; /*0x7cc73f*/
      ++v6; /*0x7cc741*/
      --v7; /*0x7cc744*/
    }
    while ( v7 ); /*0x7cc745*/
    *v5 = 0; /*0x7cc747*/
  }
  return v15; /*0x7cc74d*/
}


// ==== 0x007CC752  __Getmonths  this=-  sig=ida-proto ====
char *__cdecl _Getmonths()
{
  char *v0; // edi
  const char **v1; // esi
  size_t v2; // ebx
  size_t v3; // eax
  bool v4; // zf
  int v5; // eax
  char *v6; // esi
  const char **v7; // edi
  int v8; // ebx
  char *v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v14; // [esp+Ch] [ebp-8h]
  char *v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]

  v16 = 0; /*0x7cc757*/
  v0 = (char *)off_87C1E0; /*0x7cc75e*/
  v14 = 12; /*0x7cc764*/
  v1 = (const char **)((char *)off_87C1E0 + 56); /*0x7cc76b*/
  do /*0x7cc791*/
  {
    v2 = strlen(v1[12]); /*0x7cc778*/
    v3 = strlen(*v1++); /*0x7cc77a*/
    v4 = v14-- == 1; /*0x7cc786*/
    v5 = v16 + v3 + v2 + 2; /*0x7cc78a*/
    v16 = v5; /*0x7cc78e*/
  }
  while ( !v4 ); /*0x7cc791*/
  v6 = (char *)malloc(v5 + 1); /*0x7cc79a*/
  v15 = v6; /*0x7cc79f*/
  if ( v6 ) /*0x7cc7a2*/
  {
    v7 = (const char **)(v0 + 104); /*0x7cc7a6*/
    v8 = 12; /*0x7cc7a9*/
    do /*0x7cc7da*/
    {
      *v6 = 58; /*0x7cc7aa*/
      v9 = v6 + 1; /*0x7cc7b0*/
      v10 = strcpy(v9, *(v7 - 12)); /*0x7cc7b2*/
      v11 = &v9[strlen(v10)]; /*0x7cc7bd*/
      *v11++ = 58; /*0x7cc7bf*/
      v12 = strcpy(v11, *v7); /*0x7cc7c6*/
      v6 = &v11[strlen(v12)]; /*0x7cc7d4*/
      ++v7; /*0x7cc7d6*/
      --v8; /*0x7cc7d9*/
    }
    while ( v8 ); /*0x7cc7da*/
    *v6 = 0; /*0x7cc7dc*/
  }
  return v15; /*0x7cc7e2*/
}


// ==== 0x007CC7E7  __Gettnames  this=-  sig=ida-proto ====
void *__cdecl _Gettnames()
{
  const char **v0; // esi
  int v1; // edi
  size_t v2; // eax
  bool v3; // zf
  size_t v4; // eax
  size_t v5; // ebx
  size_t v6; // edi
  size_t v7; // edi
  size_t v8; // edi
  size_t v9; // eax
  char *v10; // eax
  _DWORD *v11; // ebx
  char *v12; // edi
  char *v13; // eax
  char *v14; // edi
  char *v15; // eax
  size_t v16; // eax
  const char **v17; // eax
  char *v18; // eax
  char *v19; // edi
  char *v20; // eax
  size_t v21; // eax
  char *v22; // eax
  char *v23; // edi
  char *v24; // eax
  char *v25; // edi
  char *v26; // eax
  char *v27; // edi
  char *v28; // eax
  size_t v30; // [esp+Ch] [ebp-10h]
  size_t v31; // [esp+Ch] [ebp-10h]
  int v32; // [esp+Ch] [ebp-10h]
  int v33; // [esp+Ch] [ebp-10h]
  int v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+10h] [ebp-Ch]
  char **v36; // [esp+10h] [ebp-Ch]
  char **v37; // [esp+10h] [ebp-Ch]
  const char **v38; // [esp+14h] [ebp-8h]
  const char **v39; // [esp+14h] [ebp-8h]
  int v40; // [esp+14h] [ebp-8h]
  const char **v41; // [esp+18h] [ebp-4h]
  const char **i; // [esp+18h] [ebp-4h]

  v0 = (const char **)off_87C1E0; /*0x7cc7ef*/
  v1 = 0; /*0x7cc7f6*/
  v38 = (const char **)off_87C1E0; /*0x7cc7f8*/
  v34 = 7; /*0x7cc7fb*/
  do /*0x7cc82b*/
  {
    v30 = strlen(v38[7]); /*0x7cc811*/
    v2 = strlen(*v38++); /*0x7cc814*/
    v3 = v34-- == 1; /*0x7cc824*/
    v1 += v2 + v30 + 2; /*0x7cc827*/
  }
  while ( !v3 ); /*0x7cc82b*/
  v35 = 12; /*0x7cc830*/
  v39 = (const char **)((char *)off_87C1E0 + 56); /*0x7cc837*/
  do /*0x7cc863*/
  {
    v31 = strlen(v39[12]); /*0x7cc849*/
    v4 = strlen(*v39++); /*0x7cc84c*/
    v3 = v35-- == 1; /*0x7cc85c*/
    v1 += v4 + v31 + 2; /*0x7cc85f*/
  }
  while ( !v3 ); /*0x7cc863*/
  v5 = strlen(*((const char **)off_87C1E0 + 38)); /*0x7cc876*/
  v6 = v1 + strlen(*((const char **)off_87C1E0 + 39)) + v5 + 2; /*0x7cc885*/
  v7 = v6 + strlen(*((const char **)off_87C1E0 + 40)) + 1; /*0x7cc894*/
  v8 = v7 + strlen(*((const char **)off_87C1E0 + 41)) + 1; /*0x7cc8a3*/
  v9 = strlen(*((const char **)off_87C1E0 + 42)); /*0x7cc8a7*/
  v10 = (char *)malloc(v8 + v9 + 173); /*0x7cc8b6*/
  v11 = v10; /*0x7cc8bb*/
  if ( v10 ) /*0x7cc8c2*/
  {
    v12 = v10 + 172; /*0x7cc8cd*/
    memcpy_0(v10, off_87C1E0, 0xACu); /*0x7cc8da*/
    v40 = (char *)v11 - (char *)v0; /*0x7cc8e8*/
    v36 = (char **)v11; /*0x7cc8eb*/
    v41 = v0 + 7; /*0x7cc8ee*/
    v32 = 7; /*0x7cc8f1*/
    do /*0x7cc93c*/
    {
      *v36 = v12; /*0x7cc8fb*/
      v13 = strcpy(v12, *(v41 - 7)); /*0x7cc904*/
      v14 = &v12[strlen(v13) + 1]; /*0x7cc912*/
      *(const char **)((char *)v41 + v40) = v14; /*0x7cc919*/
      v15 = strcpy(v14, *v41); /*0x7cc91f*/
      v16 = strlen(v15); /*0x7cc925*/
      ++v36; /*0x7cc92a*/
      ++v41; /*0x7cc92e*/
      v3 = v32-- == 1; /*0x7cc935*/
      v12 = &v14[v16 + 1]; /*0x7cc938*/
    }
    while ( !v3 ); /*0x7cc93c*/
    v33 = 12; /*0x7cc941*/
    v37 = (char **)(v11 + 26); /*0x7cc948*/
    v17 = v0 + 14; /*0x7cc94b*/
    for ( i = v0 + 14; ; v17 = i ) /*0x7cc94e*/
    {
      *(const char **)((char *)v17 + v40) = v12; /*0x7cc959*/
      v18 = strcpy(v12, *v17); /*0x7cc95f*/
      v19 = &v12[strlen(v18) + 1]; /*0x7cc96a*/
      *v37 = v19; /*0x7cc971*/
      v20 = strcpy(v19, i[12]); /*0x7cc97a*/
      v21 = strlen(v20); /*0x7cc980*/
      ++i; /*0x7cc985*/
      ++v37; /*0x7cc989*/
      v3 = v33-- == 1; /*0x7cc990*/
      v12 = &v19[v21 + 1]; /*0x7cc993*/
      if ( v3 ) /*0x7cc997*/
        break; /*0x7cc997*/
    }
    v11[38] = v12; /*0x7cc999*/
    v22 = strcpy(v12, v0[38]); /*0x7cc9a6*/
    v23 = &v12[strlen(v22) + 1]; /*0x7cc9b1*/
    v11[39] = v23; /*0x7cc9b5*/
    v24 = strcpy(v23, v0[39]); /*0x7cc9c2*/
    v25 = &v23[strlen(v24) + 1]; /*0x7cc9cd*/
    v11[40] = v25; /*0x7cc9d1*/
    v26 = strcpy(v25, v0[40]); /*0x7cc9de*/
    v27 = &v25[strlen(v26) + 1]; /*0x7cc9e9*/
    v11[41] = v27; /*0x7cc9ed*/
    v28 = strcpy(v27, v0[41]); /*0x7cc9fa*/
    v11[42] = &v27[strlen(v28) + 1]; /*0x7cca0c*/
  }
  return v11; /*0x7cca12*/
}


// ==== 0x007CCA19  String::Wrapper5to4  this=String  sig=csp ====
int __cdecl String::Wrapper5to4(CampaignScore *aP0, int a2, int a3, int a4)
{
  return String_Helper_7CCA34((unsigned __int8 *)aP0, a2, (unsigned __int8 *)a3, a4, 0); /*0x7cca33*/
}


// ==== 0x007CCA34  String_Helper_7CCA34  this=-  sig=csp ====
unsigned int __cdecl sub_7CCA34(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, int a4, void *a5)
{
  void *v5; // eax
  unsigned __int8 *v6; // esi
  unsigned __int8 v7; // al
  char *v8; // esi
  int v10; // [esp+Ch] [ebp-8h]
  unsigned int v11; // [esp+10h] [ebp-4h] BYREF

  v11 = a2; /*0x7cca44*/
  InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7cca48*/
  if ( CRTGlobal_B78BA0 ) /*0x7cca5c*/
  {
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cca5f*/
    _lock(19); /*0x7cca63*/
    v10 = 1; /*0x7cca69*/
  }
  else
  {
    v10 = 0; /*0x7cca72*/
  }
  v5 = a5; /*0x7cca75*/
  if ( !a5 ) /*0x7cca7a*/
    v5 = off_87C1E0; /*0x7cca7c*/
  a5 = v5; /*0x7cca84*/
  if ( v11 ) /*0x7cca87*/
  {
    v6 = a3; /*0x7cca89*/
    do /*0x7ccafe*/
    {
      v7 = *v6; /*0x7cca8c*/
      if ( !*v6 ) /*0x7cca8c*/
        break; /*0x7cca90*/
      if ( v7 == 37 ) /*0x7cca94*/
      {
        CRTGlobal_B78BAC = 0; /*0x7ccac8*/
        v8 = (char *)(v6 + 1); /*0x7ccacf*/
        if ( *v8 == 35 ) /*0x7ccad3*/
        {
          CRTGlobal_B78BAC = 1; /*0x7ccad5*/
          ++v8; /*0x7ccadf*/
        }
        _expandtime(*v8, a4, &a1, &v11, a5); /*0x7ccaf1*/
        v6 = (unsigned __int8 *)(v8 + 1); /*0x7ccaf9*/
      }
      else
      {
        if ( *((char *)MEMORY[0x87C590] + 2 * v7 + 1) < 0 && v11 > 1 ) /*0x7ccaaa*/
        {
          *a1++ = v7; /*0x7ccaaf*/
          ++v6; /*0x7ccab4*/
          --v11; /*0x7ccab5*/
        }
        *a1++ = *v6++; /*0x7ccabd*/
        --v11; /*0x7ccac3*/
      }
    }
    while ( v11 ); /*0x7ccafe*/
  }
  if ( v10 ) /*0x7ccb04*/
    _unlock(19); /*0x7ccb08*/
  else
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7ccb11*/
  if ( !v11 ) /*0x7ccb1a*/
    return 0; /*0x7ccb2a*/
  *a1 = 0; /*0x7ccb1f*/
  return a2 - v11; /*0x7ccb17*/
}


// ==== 0x007CCB2E  ObjectClass::__expandtime  this=ObjectClass  sig=csp ====
void __cdecl _expandtime(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _BYTE **a5)
{
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // [esp-Ch] [ebp-18h]
  _DWORD *v13; // [esp-8h] [ebp-14h]
  _DWORD *v14; // [esp-8h] [ebp-14h]
  _DWORD *v15; // [esp-4h] [ebp-10h]
  _DWORD *v16; // [esp-4h] [ebp-10h]

  if ( a1 <= 90 ) /*0x7ccb3b*/
  {
    if ( a1 != 90 ) /*0x7ccb41*/
    {
      if ( a1 > 77 ) /*0x7ccb4a*/
      {
        if ( a1 == 83 ) /*0x7ccc1b*/
        {
          CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7cccfc*/
          _store_num(*a2, 2, a3, a4); /*0x7ccd0b*/
          return; /*0x7ccd0b*/
        }
        if ( a1 == 85 ) /*0x7ccc23*/
        {
          CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7cccb9*/
          v6 = a2; /*0x7cccbe*/
          v8 = a2[6]; /*0x7cccc1*/
        }
        else
        {
          if ( a1 != 87 ) /*0x7ccc2b*/
          {
            if ( a1 == 88 ) /*0x7ccc2e*/
            {
              CRTGlobal_B78BAC = 0; /*0x7ccc7a*/
              _store_winword(a5[42], (int)a2, a3, a4, (int)a5); /*0x7ccc91*/
            }
            else if ( a1 == 89 ) /*0x7ccc31*/
            {
              CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccc3f*/
              _store_num(a2[5] % 100 + 100 * (a2[5] / 100 + 19), 4, a3, a4); /*0x7ccc6a*/
            }
            return; /*0x7ccc72*/
          }
          CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccc9b*/
          v6 = a2; /*0x7ccca0*/
          v7 = a2[6]; /*0x7ccca3*/
          if ( v7 ) /*0x7ccca8*/
            v8 = v7 - 1; /*0x7cccaf*/
          else
            v8 = 6; /*0x7cccac*/
        }
        v9 = v6[7]; /*0x7cccc4*/
        if ( v9 >= v8 ) /*0x7cccc9*/
        {
          v10 = v9 / 7; /*0x7cccd9*/
          if ( v9 % 7 >= v8 ) /*0x7ccce3*/
            ++v10; /*0x7ccce5*/
        }
        else
        {
          v10 = 0; /*0x7ccccb*/
        }
        _store_num(v10, 2, a3, a4); /*0x7cccef*/
      }
      else
      {
        switch ( a1 ) /*0x7ccb50*/
        {
          case 'M': /*0x7ccb50*/
            CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccc06*/
            _store_num(a2[1], 2, a3, a4); /*0x7ccc16*/
            break;
          case '%': /*0x7ccb50*/
            *(_BYTE *)(*a3)++ = 37; /*0x7ccbef*/
            --*a4; /*0x7ccbf7*/
            break;
          case 'A': /*0x7ccb50*/
            _store_str(a5[a2[6] + 7], a3, a4); /*0x7ccbe5*/
            break;
          case 'B': /*0x7ccb50*/
            _store_str(a5[a2[4] + 26], a3, a4); /*0x7ccbcd*/
            break;
          case 'H': /*0x7ccb50*/
            CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccba5*/
            _store_num(a2[2], 2, a3, a4); /*0x7ccbb5*/
            break;
          case 'I': /*0x7ccb50*/
            CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccb7a*/
            v5 = a2[2] % 12; /*0x7ccb87*/
            if ( !v5 ) /*0x7ccb8b*/
              v5 = 12; /*0x7ccb8e*/
            v15 = a4; /*0x7ccb8f*/
            v13 = a3; /*0x7ccb92*/
            goto LABEL_13; /*0x7ccb92*/
          default:
            return; /*0x7ccb6d*/
        }
      }
      return; /*0x7ccbb5*/
    }
LABEL_59:
    __tzset(); /*0x7cce4c*/
    _store_str(*(&MEMORY[0x87CAEC] + (a2[8] != 0)), a3, a4); /*0x7cce69*/
    return; /*0x7cce69*/
  }
  if ( a1 <= 109 ) /*0x7ccd13*/
  {
    switch ( a1 ) /*0x7ccd19*/
    {
      case 'm': /*0x7ccd19*/
        v16 = a4; /*0x7cce15*/
        CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7cce18*/
        v14 = a3; /*0x7cce20*/
        v11 = a2[4]; /*0x7cce23*/
        v12 = 2; /*0x7cce26*/
        break;
      case 'a': /*0x7ccd19*/
        _store_str(a5[a2[6]], a3, a4); /*0x7cce0b*/
        return; /*0x7cce0b*/
      case 'b': /*0x7ccd19*/
        _store_str(a5[a2[4] + 14], a3, a4); /*0x7ccdf4*/
        return; /*0x7ccdf4*/
      case 'c': /*0x7ccd19*/
        if ( CRTGlobal_B78BAC ) /*0x7ccd81*/
        {
          CRTGlobal_B78BAC = 0; /*0x7ccd8c*/
          _store_winword(a5[41], (int)a2, a3, a4, (int)a5); /*0x7ccd9f*/
        }
        else
        {
          _store_winword(a5[40], (int)a2, a3, a4, (int)a5); /*0x7ccdb6*/
        }
        if ( *a4 ) /*0x7ccdbe*/
        {
          *(_BYTE *)(*a3)++ = 32; /*0x7ccdcf*/
          --*a4; /*0x7ccdd4*/
          _store_winword(a5[42], (int)a2, a3, a4, (int)a5); /*0x7ccddc*/
        }
        return; /*0x7ccddc*/
      case 'd': /*0x7ccd19*/
        CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccd65*/
        _store_num(a2[3], 2, a3, a4); /*0x7ccd75*/
        return; /*0x7ccd75*/
      case 'j': /*0x7ccd19*/
        v16 = a4; /*0x7ccd43*/
        CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccd46*/
        v14 = a3; /*0x7ccd4e*/
        v11 = a2[7]; /*0x7ccd51*/
        v12 = 3; /*0x7ccd54*/
        break;
      default:
        return; /*0x7ccd38*/
    }
    _store_num(v11 + 1, v12, v14, v16); /*0x7ccd58*/
    return; /*0x7ccd58*/
  }
  switch ( a1 ) /*0x7cce30*/
  {
    case 'p': /*0x7cce30*/
      if ( (int)a2[2] > 11 ) /*0x7ccf00*/
        _store_str(a5[39], a3, a4); /*0x7ccf10*/
      else
        _store_str(a5[38], a3, a4); /*0x7ccf08*/
      return; /*0x7ccf08*/
    case 'w': /*0x7cce30*/
      CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7ccedb*/
      _store_num(a2[6], 1, a3, a4); /*0x7cceeb*/
      return; /*0x7cceeb*/
    case 'x': /*0x7cce30*/
      if ( CRTGlobal_B78BAC ) /*0x7cce98*/
      {
        CRTGlobal_B78BAC = 0; /*0x7cce9d*/
        _store_winword(a5[41], (int)a2, a3, a4, (int)a5); /*0x7cceb4*/
      }
      else
      {
        _store_winword(a5[40], (int)a2, a3, a4, (int)a5); /*0x7cced1*/
      }
      return; /*0x7ccebc*/
    case 'y': /*0x7cce30*/
      v15 = a4; /*0x7cce73*/
      CRTGlobal_B78BB0 = CRTGlobal_B78BAC; /*0x7cce76*/
      v13 = a3; /*0x7cce7e*/
      v5 = a2[5] % 100; /*0x7cce8a*/
LABEL_13:
      _store_num(v5, 2, v13, v15); /*0x7ccb97*/
      return; /*0x7ccb98*/
    case 'z': /*0x7cce30*/
      goto LABEL_59; /*0x7cce46*/
  }
}


// ==== 0x007CCF1D  ObjectClass::__store_str  this=ObjectClass  sig=csp ====
void __cdecl _store_str(_BYTE *a1, _DWORD *a2, _DWORD *a3)
{
  if ( *a3 ) /*0x7ccf23*/
  {
    do /*0x7ccf3f*/
    {
      if ( !*a1 ) /*0x7ccf30*/
        break; /*0x7ccf34*/
      *(_BYTE *)(*a2)++ = *a1++; /*0x7ccf38*/
    }
    while ( (*a3)-- != 1 ); /*0x7ccf3f*/
  }
}


// ==== 0x007CCF44  ObjectClass::__store_num  this=ObjectClass  sig=csp ====
int __cdecl _store_num(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  int result; // eax
  unsigned int v5; // ecx
  int v6; // [esp+4h] [ebp-4h]

  result = 0; /*0x7ccf48*/
  v6 = 0; /*0x7ccf51*/
  if ( CRTGlobal_B78BB0 ) /*0x7ccf54*/
    return _store_number(a1, a3, a4); /*0x7ccf5f*/
  if ( a2 >= *a4 ) /*0x7ccf71*/
  {
    *a4 = 0; /*0x7ccfae*/
  }
  else
  {
    v5 = a2 - 1; /*0x7ccf73*/
    if ( a2 ) /*0x7ccf7d*/
    {
      do /*0x7ccfa1*/
      {
        *(_BYTE *)(*a3 + v5) = a1 % 10 + 48; /*0x7ccf8e*/
        ++v6; /*0x7ccf97*/
        --v5; /*0x7ccf9a*/
        a1 /= 10; /*0x7ccf9e*/
      }
      while ( v5 != -1 ); /*0x7ccfa1*/
    }
    *a3 += v6; /*0x7ccfa7*/
    *a4 -= v6; /*0x7ccfa9*/
    return v6; /*0x7ccfa4*/
  }
  return result; /*0x7ccfb0*/
}


// ==== 0x007CCFB3  ObjectClass::__store_number  this=ObjectClass  sig=csp ====
char *__cdecl _store_number(int a1, char **a2, _DWORD *a3)
{
  char *v3; // ecx
  char *result; // eax
  char *v5; // ecx
  char v6; // dl

  v3 = *a2; /*0x7ccfbf*/
  do /*0x7ccfe2*/
  {
    if ( *a3 <= 1u ) /*0x7ccfc4*/
      break; /*0x7ccfc4*/
    *v3++ = a1 % 10 + 48; /*0x7ccfd5*/
    --*a3; /*0x7ccfdb*/
    a1 /= 10; /*0x7ccfdf*/
  }
  while ( a1 > 0 ); /*0x7ccfe2*/
  result = *a2; /*0x7ccfe4*/
  *a2 = v3; /*0x7ccfe6*/
  v5 = v3 - 1; /*0x7ccfe8*/
  do /*0x7ccff5*/
  {
    v6 = *v5; /*0x7ccfeb*/
    *v5-- = *result; /*0x7ccfed*/
    *result++ = v6; /*0x7ccff0*/
  }
  while ( result < v5 ); /*0x7ccff5*/
  return result; /*0x7ccff7*/
}


// ==== 0x007CCFFC  __store_winword  this=-  sig=csp ====
void __cdecl _store_winword(unsigned __int8 *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // ebx
  int v8; // ecx
  _BYTE *v9; // eax
  unsigned __int8 v10; // dl
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _BYTE *v15; // ebx
  unsigned __int8 v16; // al
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned __int8 *v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char *v24; // [esp+18h] [ebp+8h]
  int v25; // [esp+20h] [ebp+10h]
  int v26; // [esp+20h] [ebp+10h]
  char v27; // [esp+24h] [ebp+14h]

  v5 = a1; /*0x7cd001*/
  while ( *v5 ) /*0x7cd006*/
  {
    v8 = 0; /*0x7cd015*/
    if ( !*a4 ) /*0x7cd019*/
      return; /*0x7cd019*/
    CRTGlobal_B78BB0 = 0; /*0x7cd01f*/
    v25 = (int)(v5 + 1); /*0x7cd030*/
    do /*0x7cd041*/
    {
      v9 = (_BYTE *)v25; /*0x7cd033*/
      v10 = *v5; /*0x7cd036*/
      ++v8; /*0x7cd039*/
      ++v25; /*0x7cd03a*/
    }
    while ( *v9 == *v5 ); /*0x7cd041*/
    v26 = v25 - 1; /*0x7cd043*/
    v24 = (char *)v8; /*0x7cd046*/
    if ( (char)v10 > 100 ) /*0x7cd04f*/
    {
      switch ( v10 ) /*0x7cd1c4*/
      {
        case 'h': /*0x7cd1c4*/
          v23 = v8 - 1; /*0x7cd29d*/
          if ( v23 ) /*0x7cd29e*/
          {
            if ( v23 != 1 ) /*0x7cd2a1*/
            {
LABEL_12:
              if ( *((char *)MEMORY[0x87C590] + 2 * v10 + 1) < 0 ) /*0x7cd08e*/
              {
                ++v5; /*0x7cd092*/
                *(_BYTE *)(*a3)++ = v10; /*0x7cd095*/
                --*a4; /*0x7cd099*/
              }
              *(_BYTE *)(*a3)++ = *v5++; /*0x7cd09f*/
              --*a4; /*0x7cd0a4*/
              continue; /*0x7cd0a4*/
            }
          }
          else
          {
            CRTGlobal_B78BB0 = 1; /*0x7cd2a8*/
          }
          v27 = 73; /*0x7cd2b2*/
          break;
        case 'm': /*0x7cd1c4*/
          v22 = v8 - 1; /*0x7cd282*/
          if ( v22 ) /*0x7cd283*/
          {
            if ( v22 != 1 ) /*0x7cd286*/
              goto LABEL_12; /*0x7cd286*/
          }
          else
          {
            CRTGlobal_B78BB0 = 1; /*0x7cd28d*/
          }
          v27 = 77; /*0x7cd297*/
          break;
        case 's': /*0x7cd1c4*/
          v21 = v8 - 1; /*0x7cd267*/
          if ( v21 ) /*0x7cd268*/
          {
            if ( v21 != 1 ) /*0x7cd26b*/
              goto LABEL_12; /*0x7cd26b*/
          }
          else
          {
            CRTGlobal_B78BB0 = 1; /*0x7cd272*/
          }
          v27 = 83; /*0x7cd27c*/
          break;
        case 't': /*0x7cd1c4*/
          if ( *(int *)(a2 + 8) > 11 ) /*0x7cd212*/
            v20 = *(unsigned __int8 **)(a5 + 156); /*0x7cd21c*/
          else
            v20 = *(unsigned __int8 **)(a5 + 152); /*0x7cd214*/
          if ( v8 > 0 ) /*0x7cd224*/
          {
            do /*0x7cd25d*/
            {
              if ( !*a4 ) /*0x7cd226*/
                break; /*0x7cd229*/
              if ( *((char *)MEMORY[0x87C590] + 2 * *v20 + 1) < 0 && *a4 > 1u ) /*0x7cd240*/
              {
                *(_BYTE *)(*a3)++ = *v20++; /*0x7cd244*/
                --*a4; /*0x7cd249*/
              }
              *(_BYTE *)(*a3)++ = *v20++; /*0x7cd24f*/
              --*a4; /*0x7cd254*/
              --v24; /*0x7cd256*/
            }
            while ( (int)v24 > 0 ); /*0x7cd25d*/
          }
          goto LABEL_73; /*0x7cd25d*/
        case 'y': /*0x7cd1c4*/
          if ( v8 == 2 ) /*0x7cd1ec*/
          {
            v27 = 121; /*0x7cd1ff*/
          }
          else
          {
            if ( v8 != 4 ) /*0x7cd1f0*/
              goto LABEL_12; /*0x7cd1f0*/
            v27 = 89; /*0x7cd1f6*/
          }
          break;
        default:
          goto LABEL_12; /*0x7cd1e2*/
      }
    }
    else
    {
      switch ( v10 ) /*0x7cd055*/
      {
        case 'd': /*0x7cd055*/
          v17 = v8 - 1; /*0x7cd18c*/
          if ( v17 ) /*0x7cd18d*/
          {
            v18 = v17 - 1; /*0x7cd18f*/
            if ( v18 ) /*0x7cd190*/
            {
              v19 = v18 - 1; /*0x7cd192*/
              if ( v19 ) /*0x7cd193*/
              {
                if ( v19 != 1 ) /*0x7cd196*/
                  goto LABEL_12; /*0x7cd196*/
                v27 = 65; /*0x7cd19c*/
              }
              else
              {
                v27 = 97; /*0x7cd1a5*/
              }
              break; /*0x7cd1a0*/
            }
          }
          else
          {
            CRTGlobal_B78BB0 = 1; /*0x7cd1ae*/
          }
          v27 = 100; /*0x7cd1b8*/
          break;
        case '\'': /*0x7cd055*/
          if ( (v8 & 1) != 0 ) /*0x7cd139*/
          {
            for ( v5 += v8; ; ++v5 ) /*0x7cd13b*/
            {
              v16 = *v5; /*0x7cd13d*/
              if ( !*v5 || !*a4 ) /*0x7cd147*/
                break; /*0x7cd147*/
              if ( v16 == 39 ) /*0x7cd152*/
              {
                ++v5; /*0x7cd17f*/
                goto LABEL_15; /*0x7cd180*/
              }
              if ( *((char *)MEMORY[0x87C590] + 2 * v16 + 1) < 0 && *a4 > 1u ) /*0x7cd167*/
              {
                *(_BYTE *)(*a3)++ = v16; /*0x7cd16b*/
                ++v5; /*0x7cd16f*/
                --*a4; /*0x7cd170*/
              }
              *(_BYTE *)(*a3)++ = *v5; /*0x7cd176*/
              --*a4; /*0x7cd17b*/
            }
          }
          else
          {
            v5 += v8; /*0x7cd185*/
          }
          continue; /*0x7cd14a*/
        case 'A': /*0x7cd055*/
          goto LABEL_30; /*0x7cd067*/
        case 'H': /*0x7cd055*/
          v14 = v8 - 1; /*0x7cd0e5*/
          if ( v14 ) /*0x7cd0e6*/
          {
            if ( v14 != 1 ) /*0x7cd0e9*/
              goto LABEL_12; /*0x7cd0e9*/
          }
          else
          {
            CRTGlobal_B78BB0 = 1; /*0x7cd0ed*/
          }
          v27 = 72; /*0x7cd0f7*/
          break; /*0x7cd0fb*/
        case 'M': /*0x7cd055*/
          v11 = v8 - 1; /*0x7cd0b4*/
          if ( v11 ) /*0x7cd0b5*/
          {
            v12 = v11 - 1; /*0x7cd0b7*/
            if ( v12 ) /*0x7cd0b8*/
            {
              v13 = v12 - 1; /*0x7cd0ba*/
              if ( v13 ) /*0x7cd0bb*/
              {
                if ( v13 != 1 ) /*0x7cd0be*/
                  goto LABEL_12; /*0x7cd0be*/
                v27 = 66; /*0x7cd0c0*/
              }
              else
              {
                v27 = 98; /*0x7cd0c9*/
              }
              break; /*0x7cd0c4*/
            }
          }
          else
          {
            CRTGlobal_B78BB0 = 1; /*0x7cd0d2*/
          }
          v27 = 109; /*0x7cd0dc*/
          break;
        case 'a': /*0x7cd055*/
LABEL_30:
          if ( !_strcmpi(v5, "am/pm") ) /*0x7cd106*/
          {
            v15 = v5 + 5; /*0x7cd111*/
            goto LABEL_34; /*0x7cd114*/
          }
          if ( !_strcmpi(v5, &off_7F978C) ) /*0x7cd11c*/
          {
            v15 = v5 + 3; /*0x7cd127*/
LABEL_34:
            v26 = (int)v15; /*0x7cd12a*/
          }
          v27 = 112; /*0x7cd12d*/
          break; /*0x7cd131*/
        default:
          goto LABEL_12; /*0x7cd07a*/
      }
    }
    _expandtime(v27, a2, a3, a4, a5); /*0x7cd2b6*/
LABEL_73:
    v5 = (unsigned __int8 *)v26; /*0x7cd25f*/
LABEL_15:
    ; /*0x7cd0a6*/
  }
}


// ==== 0x007CD2CB  _localtime  this=-  sig=csp ====
struct tm *__cdecl localtime(CampaignScore *aP0)
{
  CampaignScore *v1; // esi
  int v3; // eax
  CampaignScore *v4; // eax
  CampaignScore *v5; // esi
  bool v6; // zf
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  CampaignScore *v11; // ecx
  bool v12; // sf
  int CampaignScore_field_0x0C; // eax

  v1 = aP0; /*0x7cd2cf*/
  if ( *(int *)aP0->__pad_0 < 0 ) /*0x7cd2d5*/
    return 0; /*0x7cd2d9*/
  __tzset(); /*0x7cd2de*/
  v3 = *(_DWORD *)v1->__pad_0; /*0x7cd2e3*/
  if ( *(int *)v1->__pad_0 > 259200 && v3 < 2147224447 ) /*0x7cd2f1*/
  {
    aP0 = (CampaignScore *)(v3 - *(_DWORD *)&stru_87C374.__pad_690[92]); /*0x7cd2f9*/
    v4 = (CampaignScore *)gmtime((CampaignScore *)&aP0); /*0x7cd300*/
    v5 = v4; /*0x7cd30d*/
    if ( *(_DWORD *)&stru_87C374.__pad_690[96] ) /*0x7cd30f*/
    {
      if ( _isindst(v4) ) /*0x7cd316*/
      {
        aP0 = (CampaignScore *)((char *)aP0 - *(_DWORD *)&stru_87C374.__pad_690[100]); /*0x7cd329*/
        v5 = (CampaignScore *)gmtime((CampaignScore *)&aP0); /*0x7cd335*/
        v5->CampaignScore_field_0x20 = 1; /*0x7cd338*/
      }
    }
    return (struct tm *)v5; /*0x7cd33f*/
  }
  v5 = (CampaignScore *)gmtime(v1); /*0x7cd34a*/
  v6 = _isindst(v5) == 0; /*0x7cd353*/
  v7 = *(_DWORD *)v5->__pad_0; /*0x7cd355*/
  if ( !v6 ) /*0x7cd358*/
    v7 -= *(_DWORD *)&stru_87C374.__pad_690[100]; /*0x7cd35a*/
  aP0 = (CampaignScore *)(v7 - *(_DWORD *)&stru_87C374.__pad_690[92]); /*0x7cd369*/
  v8 = (v7 - *(_DWORD *)&stru_87C374.__pad_690[92]) % 60; /*0x7cd370*/
  *(_DWORD *)v5->__pad_0 = v8; /*0x7cd374*/
  if ( v8 < 0 ) /*0x7cd376*/
  {
    *(_DWORD *)v5->__pad_0 = v8 + 60; /*0x7cd37a*/
    aP0 = (CampaignScore *)((char *)aP0 - 60); /*0x7cd37c*/
  }
  aP0 = (CampaignScore *)(v5->CampaignScore_field_0x04 + (int)aP0 / 60); /*0x7cd38a*/
  v9 = (int)aP0 % 60; /*0x7cd38e*/
  v12 = (int)aP0 % 60 < 0; /*0x7cd391*/
  v5->CampaignScore_field_0x04 = (int)aP0 % 60; /*0x7cd393*/
  if ( v12 ) /*0x7cd396*/
  {
    v5->CampaignScore_field_0x04 = v9 + 60; /*0x7cd39b*/
    aP0 = (CampaignScore *)((char *)aP0 - 60); /*0x7cd39e*/
  }
  aP0 = (CampaignScore *)(v5->CampaignScore_field_0x08 + (int)aP0 / 60); /*0x7cd3ad*/
  v10 = (int)aP0 % 24; /*0x7cd3b1*/
  v12 = (int)aP0 % 24 < 0; /*0x7cd3b3*/
  v5->CampaignScore_field_0x08 = (int)aP0 % 24; /*0x7cd3b5*/
  if ( v12 ) /*0x7cd3b8*/
  {
    v5->CampaignScore_field_0x08 = v10 + 24; /*0x7cd3bc*/
    aP0 = (CampaignScore *)((char *)aP0 - 24); /*0x7cd3bf*/
  }
  v11 = (CampaignScore *)((int)aP0 / 24); /*0x7cd3cb*/
  v12 = (int)aP0 / 24 < 0; /*0x7cd3cd*/
  aP0 = (CampaignScore *)((int)aP0 / 24); /*0x7cd3cf*/
  if ( (int)aP0 <= 0 ) /*0x7cd3d2*/
  {
    if ( !v12 ) /*0x7cd3f3*/
      return (struct tm *)v5; /*0x7cd3f3*/
    v5->CampaignScore_field_0x18 = (int)&v11->__pad_0[v5->CampaignScore_field_0x18 + 7] % 7; /*0x7cd402*/
    v5->CampaignScore_field_0x0C += (int)aP0; /*0x7cd408*/
    CampaignScore_field_0x0C = v5->CampaignScore_field_0x0C; /*0x7cd40b*/
    if ( CampaignScore_field_0x0C <= 0 ) /*0x7cd410*/
    {
      --v5->CampaignScore_field_0x14; /*0x7cd415*/
      v5->CampaignScore_field_0x0C = CampaignScore_field_0x0C + 31; /*0x7cd418*/
      v5->CampaignScore_field_0x1C = 364; /*0x7cd41b*/
      v5->CampaignScore_field_0x10 = 11; /*0x7cd422*/
      return (struct tm *)v5; /*0x7cd429*/
    }
  }
  else
  {
    v5->CampaignScore_field_0x18 = (int)&v11->__pad_0[v5->CampaignScore_field_0x18] % 7; /*0x7cd3df*/
    v5->CampaignScore_field_0x0C += (int)aP0; /*0x7cd3e5*/
  }
  v5->CampaignScore_field_0x1C += (int)aP0; /*0x7cd3eb*/
  return (struct tm *)v5; /*0x7cd3f0*/
}


// ==== 0x007CD42B  _remove  this=-  sig=csp ====
int __cdecl remove(const char *FileName)
{
  DWORD LastError; // eax

  if ( DeleteFileA(FileName) ) /*0x7cd42f*/
    LastError = 0; /*0x7cd441*/
  else
    LastError = GetLastError(); /*0x7cd439*/
  if ( !LastError ) /*0x7cd445*/
    return 0; /*0x7cd452*/
  _dosmaperr(LastError); /*0x7cd448*/
  return -1; /*0x7cd451*/
}


// ==== 0x007CD455  __unlink  this=-  sig=csp ====
int __cdecl _unlink(const char *FileName)
{
  return remove(FileName); /*0x7cd45f*/
}


// ==== 0x007CD460  _tmpnam  this=-  sig=csp ====
char *__cdecl tmpnam(char *Buffer)
{
  char *v1; // edi
  int v2; // edi
  void *v3; // eax

  _lock(3); /*0x7cd465*/
  if ( Source ) /*0x7cd478*/
    goto LABEL_4; /*0x7cd478*/
  init_namebuf(0); /*0x7cd47b*/
  while ( !_access(&Source, 0) ) /*0x7cd48c*/
  {
LABEL_4:
    if ( genfname((char)&Source) ) /*0x7cd48f*/
    {
      v1 = 0; /*0x7cd499*/
      goto LABEL_12; /*0x7cd49b*/
    }
  }
  v1 = Buffer; /*0x7cd49d*/
  if ( Buffer ) /*0x7cd4a3*/
    goto LABEL_11; /*0x7cd4a3*/
  v2 = _getptd(); /*0x7cd4aa*/
  if ( *(_DWORD *)(v2 + 40) || (v3 = malloc(0xEu), (*(_DWORD *)(v2 + 40) = v3) != 0) ) /*0x7cd4be*/
  {
    v1 = *(char **)(v2 + 40); /*0x7cd4c4*/
LABEL_11:
    strcpy(v1, &Source); /*0x7cd4c7*/
    goto LABEL_12; /*0x7cd4c9*/
  }
  v1 = &Source; /*0x7cd4c0*/
LABEL_12:
  _unlock(3); /*0x7cd4d0*/
  return v1; /*0x7cd4da*/
}


// ==== 0x007CD4DE  _tmpfile  this=-  sig=ida-proto ====
FILE *__cdecl tmpfile()
{
  FILE *v0; // esi
  int v1; // ebp
  char *v2; // eax
  int v3; // eax

  _lock(3); /*0x7cd4e4*/
  if ( CRTGlobal_B78218 ) /*0x7cd4f6*/
  {
    if ( genfname((char)&CRTGlobal_B78218) ) /*0x7cd503*/
      goto LABEL_13; /*0x7cd50b*/
  }
  else
  {
    init_namebuf(1); /*0x7cd4fa*/
  }
  v0 = (FILE *)_getstream(); /*0x7cd512*/
  if ( v0 ) /*0x7cd516*/
  {
    v1 = _sopen(&CRTGlobal_B78218, 34114, 64, 384); /*0x7cd52b*/
    if ( v1 != -1 ) /*0x7cd533*/
      goto LABEL_10; /*0x7cd533*/
    do /*0x7cd560*/
    {
      if ( *_errno() != 17 ) /*0x7cd53d*/
        break; /*0x7cd53d*/
      if ( genfname((char)&CRTGlobal_B78218) ) /*0x7cd540*/
        break; /*0x7cd548*/
      v1 = _sopen(&CRTGlobal_B78218, 34114, 64, 384); /*0x7cd558*/
    }
    while ( v1 == -1 ); /*0x7cd560*/
    if ( v1 != -1 ) /*0x7cd565*/
    {
LABEL_10:
      v2 = _strdup(&CRTGlobal_B78218); /*0x7cd568*/
      v0->_tmpfname = v2; /*0x7cd56e*/
      if ( v2 ) /*0x7cd575*/
      {
        v0->_cnt = 0; /*0x7cd589*/
        v0->_ptr = 0; /*0x7cd58c*/
        v0->_base = 0; /*0x7cd58e*/
        v3 = CRTGlobal_B783D4; /*0x7cd591*/
        LOBYTE(v3) = CRTGlobal_B783D4 | 0x80; /*0x7cd596*/
        v0->_flag = v3; /*0x7cd599*/
        v0->_file = v1; /*0x7cd59c*/
        _unlock_file(v0); /*0x7cd59f*/
        goto LABEL_15; /*0x7cd59f*/
      }
      _close(v1); /*0x7cd578*/
    }
    _unlock_file(v0); /*0x7cd57f*/
  }
LABEL_13:
  v0 = 0; /*0x7cd585*/
LABEL_15:
  _unlock(3); /*0x7cd5a5*/
  return v0; /*0x7cd5af*/
}


// ==== 0x007CD5B4  _init_namebuf  this=-  sig=csp ====
char *__cdecl init_namebuf(int a1)
{
  char *v1; // esi
  _BYTE *v2; // eax
  DWORD CurrentProcessId; // eax
  char *v5; // [esp-8h] [ebp-Ch]

  v1 = &Source; /*0x7cd5ba*/
  if ( a1 ) /*0x7cd5bf*/
    v1 = &CRTGlobal_B78218; /*0x7cd5c1*/
  strcpy(v1, asc_815E74); /*0x7cd5cc*/
  v2 = v1 + 1; /*0x7cd5d2*/
  if ( *v1 != 92 && *v1 != 47 ) /*0x7cd5e1*/
  {
    *v2 = 92; /*0x7cd5e3*/
    v2 = v1 + 2; /*0x7cd5e6*/
  }
  if ( a1 ) /*0x7cd5ec*/
    *v2 = 116; /*0x7cd5ee*/
  else
    *v2 = 115; /*0x7cd5f3*/
  v5 = v2 + 1; /*0x7cd5f9*/
  CurrentProcessId = GetCurrentProcessId(); /*0x7cd5fa*/
  _ultoa(CurrentProcessId, v5, 32); /*0x7cd600*/
  return strcat(v1, stru_826598.__pad_0); /*0x7cd613*/
}


// ==== 0x007CD615  _genfname  this=-  sig=csp ====
int __cdecl genfname(const unsigned __int8 *Buffer)
{
  char *v1; // esi
  unsigned int v2; // eax
  char *v4; // eax

  v1 = (char *)(_mbsrchr(Buffer, 0x2Eu) + 1); /*0x7cd627*/
  v2 = strtoul(v1, 0, 32) + 1; /*0x7cd633*/
  if ( v2 >= 0x7FFF ) /*0x7cd639*/
    return -1; /*0x7cd63b*/
  v4 = _ultoa(v2, (char *)&Buffer, 32); /*0x7cd647*/
  strcpy(v1, v4); /*0x7cd64e*/
  return 0; /*0x7cd658*/
}


// ==== 0x007CD65B  sub_7CD65B  this=-  sig=ida-proto ====
void sub_7CD65B()
{
  ++MEMORY[0x87CB14]; /*0x7cd65b*/
}


// ==== 0x007CD662  unknown_libname_75  this=-  sig=csp ====
// Microsoft VisualC 2-14/net runtime
char *__cdecl unknown_libname_75(CampaignScore *aP0)
{
  struct tm *v1; // eax

  v1 = localtime(aP0); /*0x7cd666*/
  if ( v1 ) /*0x7cd66e*/
    return asctime(v1); /*0x7cd671*/
  else
    return 0; /*0x7cd678*/
}


// ==== 0x007CD680  __strnicmp  this=AbstractClass  sig=csp ====
int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  size_t v3; // ecx
  unsigned __int8 v6; // ah
  unsigned __int8 v7; // al
  bool v8; // cf
  unsigned int v9; // eax
  unsigned int v10; // ebx
  bool v11; // cf
  int v12; // ebx
  int v14; // [esp-8h] [ebp-18h]
  size_t v15; // [esp-4h] [ebp-14h]
  int v16; // [esp+0h] [ebp-10h]

  v3 = MaxCount; /*0x7cd686*/
  if ( MaxCount ) /*0x7cd68b*/
  {
    if ( CRTGlobal_B782A0 ) /*0x7cd6a1*/
    {
      _InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7cd6f1*/
      if ( CRTGlobal_B78BA0 > 0 ) /*0x7cd6ff*/
      {
        _InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cd705*/
        _lock(19); /*0x7cd710*/
        v16 = 1; /*0x7cd715*/
        v3 = MaxCount; /*0x7cd71c*/
      }
      else
      {
        v16 = 0; /*0x7cd701*/
      }
      v9 = 0; /*0x7cd71e*/
      v10 = 0; /*0x7cd720*/
      do /*0x7cd74d*/
      {
        LOBYTE(v9) = *String1; /*0x7cd724*/
        LOBYTE(v10) = *String2; /*0x7cd728*/
        if ( !v9 || !v10 ) /*0x7cd72e*/
          break; /*0x7cd72e*/
        ++String1; /*0x7cd730*/
        ++String2; /*0x7cd731*/
        v15 = v3; /*0x7cd732*/
        v14 = v9; /*0x7cd733*/
        v10 = tolower_0(v10); /*0x7cd73a*/
        v9 = tolower_0(v14); /*0x7cd73f*/
        v11 = v9 < v10; /*0x7cd748*/
        if ( v9 != v10 ) /*0x7cd74a*/
          goto differ2; /*0x7cd74a*/
        v3 = v15 - 1; /*0x7cd74c*/
      }
      while ( v15 != 1 ); /*0x7cd74d*/
      v3 = 0; /*0x7cd74f*/
      v11 = v9 < v10; /*0x7cd751*/
      if ( v9 == v10 ) /*0x7cd753*/
        goto toend2; /*0x7cd753*/
differ2:
      v3 = -1; /*0x7cd755*/
      if ( !v11 ) /*0x7cd75a*/
        v3 = 1; /*0x7cd75c*/
toend2:
      if ( v16 ) /*0x7cd761*/
      {
        v12 = v3; /*0x7cd76c*/
        _unlock(19); /*0x7cd770*/
        return v12; /*0x7cd778*/
      }
      else
      {
        _InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cd763*/
      }
    }
    else
    {
      do /*0x7cd6d3*/
      {
        v6 = *String1; /*0x7cd6ac*/
        v7 = *String2; /*0x7cd6b0*/
        if ( !*String1 || !v7 ) /*0x7cd6b6*/
          break; /*0x7cd6b6*/
        ++String1; /*0x7cd6b8*/
        ++String2; /*0x7cd6b9*/
        if ( v6 >= 0x41u && v6 <= 0x5Au ) /*0x7cd6c0*/
          v6 += 32; /*0x7cd6c2*/
        if ( v7 >= 0x41u && v7 <= 0x5Au ) /*0x7cd6ca*/
          v7 += 32; /*0x7cd6cc*/
        v8 = v6 < v7; /*0x7cd6ce*/
        if ( v6 != v7 ) /*0x7cd6d0*/
          goto differ; /*0x7cd6d0*/
        --v3; /*0x7cd6d2*/
      }
      while ( v3 ); /*0x7cd6d3*/
      v3 = 0; /*0x7cd6d5*/
      v8 = v6 < v7; /*0x7cd6d7*/
      if ( v6 == v7 ) /*0x7cd6d9*/
        return v3; /*0x7cd6d9*/
differ:
      v3 = -1; /*0x7cd6df*/
      if ( !v8 ) /*0x7cd6e4*/
        return 1; /*0x7cd6ea*/
    }
  }
  return v3; /*0x7cd77c*/
}


// ==== 0x007CD790  _strcspn  this=-  sig=csp ====
size_t __cdecl strcspn(IUnknown *aP0, const char *Control)
{
  unsigned int v2; // eax
  size_t v5; // ecx
  signed __int32 v7[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0; /*0x7cd794*/
  memset(v7, 0, 32); /*0x7cd79d*/
  while ( 1 ) /*0x7cd7a4*/
  {
    LOBYTE(v2) = *Control; /*0x7cd7a4*/
    if ( !*Control ) /*0x7cd7a4*/
      break; /*0x7cd7a4*/
    ++Control; /*0x7cd7aa*/
    _bittestandset(v7, v2); /*0x7cd7ab*/
  }
  v5 = -1; /*0x7cd7b4*/
  do /*0x7cd7c4*/
  {
    ++v5; /*0x7cd7b8*/
    LOBYTE(v2) = aP0->field_0; /*0x7cd7b9*/
    if ( !LOBYTE(aP0->field_0) ) /*0x7cd7b9*/
      break; /*0x7cd7bd*/
    aP0 = (IUnknown *)((char *)aP0 + 1); /*0x7cd7bf*/
  }
  while ( !_bittest(v7, v2) ); /*0x7cd7c4*/
  return v5; /*0x7cd7cb*/
}


// ==== 0x007CD7CE  _wcscspn  this=-  sig=csp ====
size_t __cdecl wcscspn(ObjectClass *aP0, const wchar_t *Control)
{
  ObjectClass *v2; // eax
  const wchar_t *v3; // edx
  wchar_t v4; // cx

  v2 = aP0; /*0x7cd7ce*/
  if ( *(_WORD *)aP0->__pad_0 ) /*0x7cd7d5*/
  {
    while ( 1 ) /*0x7cd7e5*/
    {
      v3 = Control; /*0x7cd7e5*/
      if ( *Control ) /*0x7cd7df*/
        break; /*0x7cd7df*/
LABEL_6:
      v2 = (ObjectClass *)((char *)v2 + 2); /*0x7cd7fd*/
      if ( !*(_WORD *)v2->__pad_0 ) /*0x7cd7ff*/
        return ((char *)v2 - (char *)aP0) >> 1; /*0x7cd803*/
    }
    v4 = *Control; /*0x7cd7ec*/
    while ( v4 != *(_WORD *)v2->__pad_0 ) /*0x7cd7f1*/
    {
      v4 = *++v3; /*0x7cd7f5*/
      if ( !*v3 ) /*0x7cd7f5*/
        goto LABEL_6; /*0x7cd7fb*/
    }
  }
  return ((char *)v2 - (char *)aP0) >> 1; /*0x7cd809*/
}


// ==== 0x007CD80F  ObjectClass::start  this=ObjectClass  sig=csp ====
void __noreturn start()
{
  DWORD Version; // eax
  int wShowWindow; // eax
  HMODULE ModuleHandleA; // eax
  int v3; // [esp-4h] [ebp-78h]
  CHAR *lpCmdLine; // [esp+10h] [ebp-64h]
  int v5; // [esp+14h] [ebp-60h]
  struct _STARTUPINFOA StartupInfo; // [esp+18h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  Version = GetVersion(); /*0x7cd835*/
  CRTGlobal_B781D4 = BYTE1(Version); /*0x7cd83f*/
  CRTGlobal_B781D0 = (unsigned __int8)Version; /*0x7cd84d*/
  CRTGlobal_B781CC = BYTE1(Version) + ((unsigned __int8)Version << 8); /*0x7cd858*/
  CRTGlobal_B781C8 = HIWORD(Version); /*0x7cd861*/
  if ( !_heap_init(1) ) /*0x7cd868*/
    fast_error_exit(0x1Cu); /*0x7cd874*/
  if ( !_mtinit() ) /*0x7cd87a*/
    fast_error_exit(0x10u); /*0x7cd885*/
  ms_exc.registration.TryLevel = 0; /*0x7cd88d*/
  _ioinit(); /*0x7cd890*/
  CRTGlobal_B78BA8 = (int)GetCommandLineA(); /*0x7cd89b*/
  MEMORY[0xB78228] = (char *)__crtGetEnvironmentStringsA(); /*0x7cd8a5*/
  _setargv(); /*0x7cd8aa*/
  _setenvp(); /*0x7cd8af*/
  _cinit(); /*0x7cd8b4*/
  StartupInfo.dwFlags = 0; /*0x7cd8b9*/
  GetStartupInfoA(&StartupInfo); /*0x7cd8c0*/
  lpCmdLine = (CHAR *)_wincmdln(); /*0x7cd8cb*/
  if ( (StartupInfo.dwFlags & 1) != 0 ) /*0x7cd8d2*/
    wShowWindow = StartupInfo.wShowWindow; /*0x7cd8d4*/
  else
    wShowWindow = 10; /*0x7cd8dc*/
  v3 = wShowWindow; /*0x7cd8dd*/
  ModuleHandleA = GetModuleHandleA(0); /*0x7cd8e3*/
  v5 = WinMain(ModuleHandleA, 0, lpCmdLine, v3); /*0x7cd8ef*/
  exit(v5); /*0x7cd8f3*/
}


// ==== 0x007CD917  __amsg_exit  this=-  sig=csp ====
void __cdecl __noreturn _amsg_exit(DWORD NumberOfBytesWritten)
{
  if ( MEMORY[0xB78230] == 1 ) /*0x7cd91e*/
    _FF_MSGBANNER(); /*0x7cd920*/
  _NMSG_WRITE(NumberOfBytesWritten); /*0x7cd929*/
  off_87C2A0(255); /*0x7cd933*/
}


// ==== 0x007CD93C  _fast_error_exit  this=-  sig=csp ====
void __cdecl __noreturn fast_error_exit(DWORD NumberOfBytesWritten)
{
  if ( MEMORY[0xB78230] == 1 ) /*0x7cd943*/
    _FF_MSGBANNER(); /*0x7cd945*/
  _NMSG_WRITE(NumberOfBytesWritten); /*0x7cd94e*/
  ExitProcess(0xFFu); /*0x7cd959*/
}


// ==== 0x007CD95F  nullsub_269  this=-  sig=ida-proto ====
void nullsub_269()
{
  ; /*0x7cd95f*/
}


// ==== 0x007CD960  __mtinitlocks  this=-  sig=csp ====
void _mtinitlocks()
{
  InitializeCriticalSection(lpCriticalSection); /*0x7cd96d*/
  InitializeCriticalSection(off_87C2DC); /*0x7cd975*/
  InitializeCriticalSection(off_87C2CC); /*0x7cd97d*/
  InitializeCriticalSection(off_87C2AC); /*0x7cd985*/
}


// ==== 0x007CD989  __mtdeletelocks  this=-  sig=ida-proto ====
void _mtdeletelocks()
{
  LPCRITICAL_SECTION *v0; // esi

  v0 = &dword_87C2A8; /*0x7cd991*/
  do /*0x7cd9d0*/
  {
    if ( *v0 && v0 != &lpCriticalSection && v0 != &off_87C2DC && v0 != &off_87C2CC && v0 != &off_87C2AC ) /*0x7cd9ba*/
    {
      DeleteCriticalSection(*v0); /*0x7cd9bd*/
      free(*v0); /*0x7cd9c1*/
    }
    ++v0; /*0x7cd9c7*/
  }
  while ( (int)v0 < (int)dword_87C368 ); /*0x7cd9d0*/
  DeleteCriticalSection(off_87C2CC); /*0x7cd9d8*/
  DeleteCriticalSection(off_87C2DC); /*0x7cd9e0*/
  DeleteCriticalSection(lpCriticalSection); /*0x7cd9e8*/
  DeleteCriticalSection(off_87C2AC); /*0x7cd9f0*/
}


// ==== 0x007CD9F5  __lock  this=-  sig=csp ====
void __cdecl _lock(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi

  if ( !*(&dword_87C2A8 + a1) ) /*0x7cd9fc*/
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)malloc(0x18u); /*0x7cda15*/
    if ( !v1 ) /*0x7cda1a*/
      _amsg_exit(0x11u); /*0x7cda1e*/
    _lock(17); /*0x7cda26*/
    if ( *(&dword_87C2A8 + a1) ) /*0x7cda2b*/
    {
      free(v1); /*0x7cda3c*/
    }
    else
    {
      InitializeCriticalSection(v1); /*0x7cda32*/
      *(&dword_87C2A8 + a1) = v1; /*0x7cda38*/
    }
    _unlock(17); /*0x7cda44*/
  }
  EnterCriticalSection(*(&dword_87C2A8 + a1)); /*0x7cda4d*/
}


// ==== 0x007CDA56  __unlock  this=-  sig=csp ====
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&dword_87C2A8 + a1)); /*0x7cda63*/
}


// ==== 0x007CDA82  nullsub_270  this=-  sig=ida-proto ====
void nullsub_270()
{
  ; /*0x7cda82*/
}


// ==== 0x007CDA90  _strcmp  this=-  sig=csp ====
int __cdecl strcmp(IUnknown *aP0, IUnknown *aP1)
{
  IUnknown *v2; // edx
  IUnknown *v3; // ecx
  unsigned int v4; // eax
  bool v5; // cf
  unsigned int v6; // eax
  __int16 v8; // ax

  v2 = aP0; /*0x7cda90*/
  v3 = aP1; /*0x7cda94*/
  if ( ((unsigned __int8)aP0 & 3) == 0 ) /*0x7cda9e*/
  {
dodwords:
    while ( 1 ) /*0x7cdaa0*/
    {
      v4 = v2->field_0; /*0x7cdaa0*/
      v5 = (unsigned __int8)v2->field_0 < LOBYTE(v3->field_0); /*0x7cdaa2*/
      if ( (unsigned __int8)v2->field_0 != LOBYTE(v3->field_0) ) /*0x7cdaa4*/
        break; /*0x7cdaa4*/
      if ( !(_BYTE)v4 ) /*0x7cdaa8*/
        return 0; /*0x7cdaa8*/
      v5 = BYTE1(v4) < BYTE1(v3->field_0); /*0x7cdaaa*/
      if ( BYTE1(v4) != BYTE1(v3->field_0) ) /*0x7cdaad*/
        break; /*0x7cdaad*/
      if ( !BYTE1(v4) ) /*0x7cdab1*/
        return 0; /*0x7cdab1*/
      v6 = HIWORD(v4); /*0x7cdab3*/
      v5 = (unsigned __int8)v6 < BYTE2(v3->field_0); /*0x7cdab6*/
      if ( (_BYTE)v6 != BYTE2(v3->field_0) ) /*0x7cdab9*/
        break; /*0x7cdab9*/
      if ( !(_BYTE)v6 ) /*0x7cdabd*/
        return 0; /*0x7cdabd*/
      v5 = BYTE1(v6) < HIBYTE(v3->field_0); /*0x7cdabf*/
      if ( BYTE1(v6) != HIBYTE(v3->field_0) ) /*0x7cdac2*/
        break; /*0x7cdac2*/
      v3 = (IUnknown *)((char *)v3 + 4); /*0x7cdac4*/
      v2 = (IUnknown *)((char *)v2 + 4); /*0x7cdac7*/
      if ( !BYTE1(v6) ) /*0x7cdacc*/
        return 0; /*0x7cdacc*/
    }
    return -2 * v5 + 1; /*0x7cdac2*/
  }
  if ( ((unsigned __int8)aP0 & 1) != 0 ) /*0x7cdae2*/
  {
    v2 = (IUnknown *)((char *)&aP0->field_0 + 1); /*0x7cdae6*/
    v5 = LOBYTE(aP0->field_0) < LOBYTE(aP1->field_0); /*0x7cdae7*/
    if ( LOBYTE(aP0->field_0) != LOBYTE(aP1->field_0) ) /*0x7cdae9*/
      return -2 * v5 + 1; /*0x7cdae9*/
    v3 = (IUnknown *)((char *)&aP1->field_0 + 1); /*0x7cdaeb*/
    if ( !LOBYTE(aP0->field_0) ) /*0x7cdaee*/
      return 0; /*0x7cdad2*/
    if ( ((unsigned __int8)v2 & 2) == 0 ) /*0x7cdaf6*/
      goto dodwords; /*0x7cdaf6*/
  }
  v8 = v2->field_0; /*0x7cdaf8*/
  v2 = (IUnknown *)((char *)v2 + 2); /*0x7cdafb*/
  v5 = (unsigned __int8)v8 < LOBYTE(v3->field_0); /*0x7cdafe*/
  if ( (_BYTE)v8 != LOBYTE(v3->field_0) ) /*0x7cdb00*/
    return -2 * v5 + 1; /*0x7cdb00*/
  if ( !(_BYTE)v8 ) /*0x7cdb04*/
    return 0; /*0x7cdb04*/
  v5 = HIBYTE(v8) < BYTE1(v3->field_0); /*0x7cdb06*/
  if ( HIBYTE(v8) == BYTE1(v3->field_0) ) /*0x7cdb09*/
  {
    if ( HIBYTE(v8) ) /*0x7cdb0d*/
    {
      v3 = (IUnknown *)((char *)v3 + 2); /*0x7cdb0f*/
      goto dodwords; /*0x7cdb12*/
    }
    return 0; /*0x7cdb0d*/
  }
  return -2 * v5 + 1; /*0x7cdad2*/
}


// ==== 0x007CDB14  _setlocale  this=-  sig=ida-proto ====
char *__cdecl setlocale(int Category, const char *Locale)
{
  char *v2; // ebx
  int v3; // eax
  char *all; // esi
  const char *v5; // edi
  char *i; // esi
  size_t v7; // eax
  const char **v8; // ebx
  const char *v9; // esi
  size_t v10; // eax
  size_t v11; // edi
  const char *v12; // edi
  bool v13; // zf
  const char **v14; // edi
  char Destination[132]; // [esp+8h] [ebp-88h] BYREF
  int v17; // [esp+8Ch] [ebp-4h]
  int Categorya; // [esp+98h] [ebp+8h]
  int Localea; // [esp+9Ch] [ebp+Ch]

  v2 = 0; /*0x7cdb22*/
  if ( (unsigned int)Category <= 5 ) /*0x7cdb26*/
  {
    _lock(19); /*0x7cdb37*/
    ++CRTGlobal_B78BA0; /*0x7cdb3c*/
    while ( CRTGlobal_B78BA4 ) /*0x7cdb49*/
      Sleep(1u); /*0x7cdb4d*/
    if ( Category ) /*0x7cdb58*/
    {
      if ( Locale ) /*0x7cdb5d*/
      {
        v3 = _setlocale_set_cat((void *)Category, (void *)Locale); /*0x7cdb63*/
LABEL_45:
        all = (char *)v3; /*0x7cdd3f*/
        goto LABEL_46; /*0x7cdd3f*/
      }
      all = (&MEMORY[0x87C484])[3 * Category]; /*0x7cdb72*/
LABEL_46:
      _unlock(19); /*0x7cdd41*/
LABEL_47:
      --CRTGlobal_B78BA0; /*0x7cdd49*/
      return all; /*0x7cdd52*/
    }
    v5 = Locale; /*0x7cdb7e*/
    v17 = 1; /*0x7cdb81*/
    Categorya = 0; /*0x7cdb8a*/
    if ( Locale ) /*0x7cdb8d*/
    {
      if ( *Locale == 76 && Locale[1] == 67 && Locale[2] == 95 ) /*0x7cdbaa*/
      {
        for ( i = strpbrk(Locale, "=;"); i; i = strpbrk(v5, "=;") ) /*0x7cdbc1*/
        {
          v7 = i - v5; /*0x7cdbcd*/
          v17 = i - v5; /*0x7cdbcf*/
          if ( i == v5 || *i == 59 ) /*0x7cdbdb*/
            break; /*0x7cdbdb*/
          Localea = 1; /*0x7cdbe1*/
          v8 = (const char **)&MEMORY[0x87C48C]; /*0x7cdbe8*/
          while ( strncmp(*v8, v5, v7) || v17 != strlen(*v8) ) /*0x7cdbf6*/
          {
            ++Localea; /*0x7cdc0f*/
            v8 += 3; /*0x7cdc12*/
            if ( (int)v8 > (int)&MEMORY[0x87C4BC] ) /*0x7cdc1b*/
              break; /*0x7cdc1b*/
            v7 = v17; /*0x7cdbef*/
          }
          v9 = i + 1; /*0x7cdc1d*/
          v10 = strcspn(v9, Control); /*0x7cdc24*/
          v11 = v10; /*0x7cdc29*/
          if ( !v10 && *v9 != 59 ) /*0x7cdc34*/
            break; /*0x7cdc34*/
          if ( Localea <= 5 ) /*0x7cdc3a*/
          {
            strncpy(Destination, v9, v10); /*0x7cdc45*/
            Destination[v11] = 0; /*0x7cdc4a*/
            if ( _setlocale_set_cat((void *)Localea, Destination) ) /*0x7cdc5c*/
              ++Categorya; /*0x7cdc68*/
          }
          v12 = &v9[v11]; /*0x7cdc6b*/
          if ( *v12 ) /*0x7cdc6d*/
          {
            v5 = v12 + 1; /*0x7cdc72*/
            if ( *v5 ) /*0x7cdc73*/
              continue; /*0x7cdc73*/
          }
          v13 = Categorya == 0; /*0x7cdca0*/
          goto LABEL_31; /*0x7cdca0*/
        }
        _unlock(19); /*0x7cdc91*/
        all = 0; /*0x7cdc99*/
        goto LABEL_47; /*0x7cdc9b*/
      }
      all = (char *)_expandlocale((char *)Locale, Destination, 0, 0); /*0x7cdcc1*/
      if ( !all ) /*0x7cdcc8*/
        goto LABEL_46; /*0x7cdcc8*/
      v14 = (const char **)&MEMORY[0x87C484]; /*0x7cdccf*/
      do /*0x7cdd0e*/
      {
        if ( v14 != (const char **)&MEMORY[0x87C484] ) /*0x7cdcd3*/
        {
          if ( !strcmp(Destination, *v14) || _setlocale_set_cat(v2, Destination) ) /*0x7cdcf1*/
            ++Categorya; /*0x7cdd01*/
          else
            v17 = 0; /*0x7cdcfc*/
        }
        v14 += 3; /*0x7cdd04*/
        ++v2; /*0x7cdd07*/
      }
      while ( (int)v14 <= (int)&MEMORY[0x87C4C0] ); /*0x7cdd0e*/
      if ( v17 ) /*0x7cdd15*/
      {
        all = (char *)_setlocale_get_all(); /*0x7cdd22*/
        free(MEMORY[0x87C484]); /*0x7cdd24*/
        MEMORY[0x87C484] = 0; /*0x7cdd2a*/
        goto LABEL_46; /*0x7cdd30*/
      }
      v13 = Categorya == 0; /*0x7cdd32*/
LABEL_31:
      if ( v13 ) /*0x7cdca4*/
      {
        all = 0; /*0x7cdcaa*/
        goto LABEL_46; /*0x7cdcac*/
      }
    }
    v3 = _setlocale_get_all(); /*0x7cdd3a*/
    goto LABEL_45; /*0x7cdd3a*/
  }
  return 0; /*0x7cdd56*/
}


// ==== 0x007CDD5A  __setlocale_set_cat  this=-  sig=csp ====
char *__cdecl _setlocale_set_cat(void *a0, IUnknown *aP1)
{
  size_t v3; // eax
  char Str[132]; // [esp+Ch] [ebp-A4h] BYREF
  _BYTE v6[8]; // [esp+90h] [ebp-20h] BYREF
  int a3; // [esp+98h] [ebp-18h] BYREF
  int v8; // [esp+9Ch] [ebp-14h]
  _WORD Src[4]; // [esp+A0h] [ebp-10h] BYREF
  void *v10; // [esp+A8h] [ebp-8h]
  UINT v11; // [esp+ACh] [ebp-4h]
  void *a0a; // [esp+B8h] [ebp+8h]
  IUnknown *Block; // [esp+BCh] [ebp+Ch]

  if ( !_expandlocale(aP1, (IUnknown *)Str, Src, &a3) ) /*0x7cdd7c*/
    return 0; /*0x7cdd7c*/
  v3 = strlen(Str); /*0x7cdd93*/
  Block = (IUnknown *)malloc((AbstractClass *)(v3 + 1)); /*0x7cdda0*/
  if ( !Block ) /*0x7cdda6*/
    return 0; /*0x7cdda6*/
  a0a = *(void **)&stru_87C374.__pad_FC[12 * (_DWORD)a0 + 20]; /*0x7cddc1*/
  v8 = CRTGlobal_B78298[(_DWORD)a0]; /*0x7cddc6*/
  v10 = (void *)(6 * (_DWORD)a0 + 12027168); /*0x7cddd3*/
  memcpy_0(v6, (CCINIClass *)v10, (AbstractClass *)6); /*0x7cdddb*/
  v11 = CodePage; /*0x7cdde5*/
  *(_DWORD *)&stru_87C374.__pad_FC[12 * (_DWORD)a0 + 20] = strcpy(Block, Str); /*0x7cddf7*/
  CRTGlobal_B78298[(_DWORD)a0] = Src[0]; /*0x7cde03*/
  memcpy_0(v10, (CCINIClass *)Src, (AbstractClass *)6); /*0x7cde0c*/
  if ( a0 == (void *)2 ) /*0x7cde1a*/
    CodePage = a3; /*0x7cde1c*/
  if ( a0 == (void *)1 ) /*0x7cde24*/
    CRTGlobal_B782B4 = a3; /*0x7cde26*/
  if ( (*(int (__stdcall **)())&stru_87C374.__pad_FC[12 * (_DWORD)a0 + 24])() ) /*0x7cde2b*/
  {
    *(_DWORD *)&stru_87C374.__pad_FC[12 * (_DWORD)a0 + 20] = a0a; /*0x7cde3b*/
    free(Block); /*0x7cde41*/
    CRTGlobal_B78298[(_DWORD)a0] = v8; /*0x7cde4a*/
    CodePage = v11; /*0x7cde4f*/
    return 0; /*0x7cde56*/
  }
  if ( a0a != &unk_87C370 ) /*0x7cde5f*/
    free(a0a); /*0x7cde64*/
  return *(char **)&stru_87C374.__pad_FC[12 * (_DWORD)a0 + 20]; /*0x7cde70*/
}


// ==== 0x007CDE75  __setlocale_get_all  this=-  sig=ida-proto ====
CCINIClass *_setlocale_get_all()
{
  CCINIClass *v0; // eax
  int v1; // ebp
  char *pad_11C; // esi
  char *v3; // ebx
  IUnknown *v5; // [esp-Ch] [ebp-1Ch]

  v0 = *(CCINIClass **)&stru_87C374.__pad_FC[20]; /*0x7cde75*/
  v1 = 1; /*0x7cde82*/
  if ( !*(_DWORD *)&stru_87C374.__pad_FC[20] ) /*0x7cde83*/
  {
    v0 = (CCINIClass *)malloc((AbstractClass *)0x351); /*0x7cde8a*/
    *(_DWORD *)&stru_87C374.__pad_FC[20] = v0; /*0x7cde90*/
  }
  v0->__pad_0[0] = 0; /*0x7cde95*/
  _strcats(*(CCINIClass **)&stru_87C374.__pad_FC[20], 3); /*0x7cdeb2*/
  pad_11C = stru_87C374.__pad_11C; /*0x7cdeb7*/
  v3 = stru_87C374.__pad_11C; /*0x7cdebf*/
  do /*0x7cdf05*/
  {
    strcat(*(CCINIClass **)&stru_87C374.__pad_FC[20], &Control); /*0x7cdecc*/
    v5 = (IUnknown *)*((_DWORD *)pad_11C + 3); /*0x7cded1*/
    pad_11C += 12; /*0x7cded4*/
    if ( strcmp(*(IUnknown **)v3, v5) ) /*0x7cded9*/
      v1 = 0; /*0x7cdee5*/
    v3 = pad_11C; /*0x7cdee9*/
    _strcats(*(CCINIClass **)&stru_87C374.__pad_FC[20], 3); /*0x7cdef7*/
  }
  while ( (int)pad_11C < (int)&stru_87C374.__pad_144[8] ); /*0x7cdf05*/
  if ( !v1 ) /*0x7cdf0d*/
    return *(CCINIClass **)&stru_87C374.__pad_FC[20]; /*0x7cdf0f*/
  free(*(void **)&stru_87C374.__pad_FC[20]); /*0x7cdf1b*/
  *(_DWORD *)&stru_87C374.__pad_FC[20] = 0; /*0x7cdf20*/
  return *(CCINIClass **)&stru_87C374.__pad_11C[12]; /*0x7cdf07*/
}


// ==== 0x007CDF2E  __expandlocale  this=-  sig=csp ====
char *__cdecl _expandlocale(IUnknown *aP0, IUnknown *aP1, _WORD *a2, _DWORD *a3)
{
  AbstractClass *result; // eax
  char Source[136]; // [esp+Ch] [ebp-88h] BYREF

  if ( !aP0 ) /*0x7cdf41*/
    return 0; /*0x7cdf41*/
  if ( LOBYTE(aP0->field_0) == 67 && !BYTE1(aP0->field_0) ) /*0x7cdf4c*/
  {
    result = (AbstractClass *)aP1; /*0x7cdf51*/
    BYTE1(aP1->field_0) = 0; /*0x7cdf57*/
    LOBYTE(aP1->field_0) = 67; /*0x7cdf5c*/
    if ( a2 ) /*0x7cdf5f*/
    {
      *a2 = 0; /*0x7cdf61*/
      a2[1] = 0; /*0x7cdf64*/
      a2[2] = 0; /*0x7cdf68*/
    }
    if ( a3 ) /*0x7cdf71*/
      *a3 = 0; /*0x7cdf77*/
    return result->__pad_0; /*0x7cdf79*/
  }
  if ( strcmp((IUnknown *)&stru_87C374.__pad_68[28], aP0) && strcmp(&stru_87C374, aP0) ) /*0x7cdf97*/
  {
    if ( __lc_strtolc(Source, aP0) || !__get_qualified_locale(Source, &CRTGlobal_B782B8, (int)Source) ) /*0x7cdfc8*/
      return 0; /*0x7cdfd6*/
    CRTGlobal_B782B8.headNode[1] = LOWORD(CRTGlobal_B782B8.headNode[0]); /*0x7cdfdf*/
    __lc_lctostr(&stru_87C374.__pad_68[28], Source); /*0x7cdfec*/
    if ( LOBYTE(aP0->field_0) ) /*0x7cdff1*/
      strcpy(&stru_87C374, (const char *)aP0); /*0x7cdff9*/
    else
      strcpy(&stru_87C374, &stru_87C374.__pad_68[28]); /*0x7cdffd*/
  }
  if ( a2 ) /*0x7ce008*/
    memcpy_0(a2, &CRTGlobal_B782B8, (AbstractClass *)6); /*0x7ce014*/
  if ( a3 ) /*0x7ce020*/
    memcpy_0(a3, (CCINIClass *)&CRTGlobal_B782B8.headNode[1], (AbstractClass *)4); /*0x7ce02c*/
  strcpy(aP1, &stru_87C374.__pad_68[28]); /*0x7ce038*/
  return &stru_87C374.__pad_68[28]; /*0x7ce041*/
}


// ==== 0x007CE046  ReturnNull3  this=-  sig=ida-proto ====
int ReturnNull3()
{
  return 0; /*0x7ce048*/
}


// ==== 0x007CE049  __strcats  this=-  sig=csp ====
char *__cdecl _strcats(CCINIClass *aP0, int a2)
{
  int v2; // edi
  ObjectClass *v3; // esi
  char *result; // eax
  CCINIClass *v5; // [esp-8h] [ebp-Ch]

  v2 = a2; /*0x7ce04a*/
  if ( a2 > 0 ) /*0x7ce050*/
  {
    v3 = (ObjectClass *)&a2; /*0x7ce053*/
    do /*0x7ce069*/
    {
      v5 = *(CCINIClass **)&v3->__pad_0[4]; /*0x7ce057*/
      v3 = (ObjectClass *)((char *)v3 + 4); /*0x7ce05a*/
      result = strcat(aP0, (ObjectClass *)v5); /*0x7ce061*/
      --v2; /*0x7ce067*/
    }
    while ( v2 ); /*0x7ce069*/
  }
  return result; /*0x7ce06c*/
}


// ==== 0x007CE06E  ___lc_strtolc  this=-  sig=csp ====
int __cdecl __lc_strtolc(char *a0, IUnknown *aP1)
{
  ObjectClass *v2; // esi
  signed int v4; // eax
  char v5; // bl
  char *v6; // edi
  char *v7; // eax
  ObjectClass *v8; // [esp-8h] [ebp-14h]
  IUnknown *v9; // [esp-4h] [ebp-10h]
  char *Source; // [esp+18h] [ebp+Ch]

  memset(a0, 0, (AbstractClass *)0x88); /*0x7ce07f*/
  v2 = (ObjectClass *)aP1; /*0x7ce084*/
  if ( !LOBYTE(aP1->field_0) ) /*0x7ce08e*/
    return 0; /*0x7ce08e*/
  if ( LOBYTE(aP1->field_0) == 46 && BYTE1(aP1->field_0) ) /*0x7ce094*/
  {
    strcpy((IUnknown *)(a0 + 128), (const char *)&aP1->field_0 + 1); /*0x7ce0a5*/
    return 0; /*0x7ce0ae*/
  }
  for ( Source = 0; ; ++Source ) /*0x7ce0b3*/
  {
    v4 = strcspn((IUnknown *)v2, "_.,"); /*0x7ce0bd*/
    if ( !v4 ) /*0x7ce0c6*/
      break; /*0x7ce0c6*/
    v5 = v2->__pad_0[v4]; /*0x7ce0cc*/
    v6 = &v2->__pad_0[v4]; /*0x7ce0cf*/
    if ( Source ) /*0x7ce0d2*/
    {
      if ( Source == (char *)1 ) /*0x7ce0e9*/
      {
        if ( v4 >= 64 || v5 == 95 ) /*0x7ce0f3*/
          return -1; /*0x7ce0f3*/
        v9 = (IUnknown *)v4; /*0x7ce0f5*/
        v8 = v2; /*0x7ce0f9*/
        v7 = a0 + 64; /*0x7ce0fa*/
      }
      else
      {
        if ( Source != (char *)2 || v5 && v5 != 44 ) /*0x7ce10c*/
          return -1; /*0x7ce10c*/
        v9 = (IUnknown *)v4; /*0x7ce10e*/
        v8 = v2; /*0x7ce112*/
        v7 = a0 + 128; /*0x7ce113*/
      }
      strncpy(v7, v8->__pad_0, v9); /*0x7ce119*/
    }
    else
    {
      if ( v4 >= 64 || v5 == 46 ) /*0x7ce0dc*/
        return -1; /*0x7ce0dc*/
      strncpy(a0, v2->__pad_0, (IUnknown *)v4); /*0x7ce0e3*/
    }
    if ( v5 == 44 || !v5 ) /*0x7ce128*/
      return 0; /*0x7ce128*/
    v2 = (ObjectClass *)(v6 + 1); /*0x7ce12d*/
  }
  return -1; /*0x7ce135*/
}


// ==== 0x007CE13A  ___lc_lctostr  this=-  sig=csp ====
char *__cdecl __lc_lctostr(char *Destination, char *Source)
{
  char *result; // eax

  strcpy(Destination, Source); /*0x7ce144*/
  if ( Source[64] ) /*0x7ce149*/
    _strcats(Destination, 2); /*0x7ce160*/
  result = Source + 128; /*0x7ce16f*/
  if ( Source[128] ) /*0x7ce168*/
    return _strcats(Destination, 2); /*0x7ce184*/
  return result; /*0x7ce175*/
}


// ==== 0x007CE18D  __flsbuf  this=-  sig=csp ====
int __cdecl _flsbuf(int Ch, FILE *File)
{
  FILE *v2; // esi
  int flag; // eax
  int v4; // ebx
  int v5; // eax
  char *base; // eax
  signed int v7; // edi
  _BYTE *v8; // eax

  v2 = File; /*0x7ce192*/
  flag = File->_flag; /*0x7ce195*/
  v4 = File->_file; /*0x7ce198*/
  if ( (flag & 0x82) == 0 || (flag & 0x40) != 0 ) /*0x7ce1a5*/
    goto LABEL_24; /*0x7ce1a5*/
  if ( (flag & 1) == 0 ) /*0x7ce1ad*/
    goto LABEL_6; /*0x7ce1ad*/
  File->_cnt = 0; /*0x7ce1af*/
  if ( (flag & 0x10) == 0 ) /*0x7ce1b5*/
  {
LABEL_24:
    LOBYTE(flag) = flag | 0x20; /*0x7ce299*/
    v2->_flag = flag; /*0x7ce29b*/
    return -1; /*0x7ce29b*/
  }
  LOBYTE(flag) = flag & 0xFE; /*0x7ce1be*/
  v2->_ptr = v2->_base; /*0x7ce1c0*/
  v2->_flag = flag; /*0x7ce1c2*/
LABEL_6:
  v5 = v2->_flag; /*0x7ce1c5*/
  v2->_cnt = 0; /*0x7ce1c8*/
  File = 0; /*0x7ce1cc*/
  LOBYTE(v5) = v5 & 0xED | 2; /*0x7ce1d2*/
  v2->_flag = v5; /*0x7ce1d8*/
  if ( (v5 & 0x10C) == 0 && (v2 != &::File && v2 != (FILE *)&unk_87BF90 || !_isatty(v4)) ) /*0x7ce1ee*/
    _getbuf(v2); /*0x7ce1f9*/
  if ( (v2->_flag & 0x108) != 0 ) /*0x7ce206*/
  {
    base = v2->_base; /*0x7ce208*/
    v7 = v2->_ptr - base; /*0x7ce20d*/
    v2->_ptr = base + 1; /*0x7ce212*/
    v2->_cnt = v2->_bufsiz - 1; /*0x7ce21a*/
    if ( v7 <= 0 ) /*0x7ce21d*/
    {
      if ( v4 == -1 ) /*0x7ce232*/
        v8 = &MEMORY[0x87C928]; /*0x7ce24d*/
      else
        v8 = (_BYTE *)(CRTGlobal_B78A80[v4 >> 5] + 36 * (v4 & 0x1F)); /*0x7ce248*/
      if ( (v8[4] & 0x20) != 0 ) /*0x7ce256*/
        _lseek(v4, 0, 2); /*0x7ce25d*/
    }
    else
    {
      File = (FILE *)_write(v4, base, v7); /*0x7ce22a*/
    }
    *v2->_base = Ch; /*0x7ce26b*/
  }
  else
  {
    v7 = 1; /*0x7ce274*/
    File = (FILE *)_write(v4, &Ch, 1u); /*0x7ce280*/
  }
  if ( File == (FILE *)v7 ) /*0x7ce287*/
    return (unsigned __int8)Ch; /*0x7ce297*/
  v2->_flag |= 0x20u; /*0x7ce289*/
  return -1; /*0x7ce2a1*/
}


// ==== 0x007CE2A5  __output  this=-  sig=csp ====
int __cdecl _output(FILE *File, char *a2, int a3)
{
  int v3; // esi
  char v4; // bl
  char *v5; // edi
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int int_arg; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // ecx
  char *i; // eax
  int v15; // edx
  wchar_t short_arg; // ax
  __int16 *v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  char *j; // eax
  int v22; // edx
  _WORD *v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  int v26; // eax
  int v27; // ebx
  unsigned __int64 v28; // kr08_8
  _BYTE *v29; // eax
  char *v30; // eax
  char v31; // bl
  int v32; // esi
  wchar_t *v33; // ebx
  int v34; // edi
  wchar_t v35; // ax
  int v36; // eax
  char MbCh; // [esp+Ch] [ebp-248h] BYREF
  char v40; // [esp+20Bh] [ebp-49h] BYREF
  int v41; // [esp+20Ch] [ebp-48h]
  int v42; // [esp+210h] [ebp-44h]
  __int64 v43; // [esp+214h] [ebp-40h]
  char v44[4]; // [esp+21Ch] [ebp-38h] BYREF
  int v45; // [esp+220h] [ebp-34h]
  int v46; // [esp+224h] [ebp-30h]
  int v47; // [esp+228h] [ebp-2Ch]
  int v48; // [esp+22Ch] [ebp-28h]
  int v49; // [esp+230h] [ebp-24h]
  int v50; // [esp+234h] [ebp-20h]
  int v51; // [esp+238h] [ebp-1Ch]
  _WORD v52[3]; // [esp+23Eh] [ebp-16h] BYREF
  int v53; // [esp+244h] [ebp-10h]
  int v54; // [esp+248h] [ebp-Ch]
  int p_MbCh; // [esp+24Ch] [ebp-8h]
  int v56; // [esp+250h] [ebp-4h]
  char *v57; // [esp+260h] [ebp+Ch]

  v3 = 0; /*0x7ce2b4*/
  v4 = *a2; /*0x7ce2b6*/
  v5 = a2 + 1; /*0x7ce2b8*/
  v6 = *a2 == 0; /*0x7ce2b9*/
  v54 = 0; /*0x7ce2bb*/
  *(_DWORD *)&v52[1] = 0; /*0x7ce2be*/
  v57 = a2 + 1; /*0x7ce2c1*/
  if ( !v6 ) /*0x7ce2c4*/
  {
    v7 = v53; /*0x7ce2ca*/
    while ( 1 ) /*0x7ce2d9*/
    {
      if ( *(int *)&v52[1] < 0 ) /*0x7ce2dc*/
        return *(_DWORD *)&v52[1]; /*0x7ce2dc*/
      if ( v4 < 32 || v4 > 120 ) /*0x7ce2ea*/
        v8 = 0; /*0x7ce2fa*/
      else
        v8 = byte_7F97CC[v4] & 0xF; /*0x7ce2f5*/
      v46 = byte_7F97EC[8 * v8 + v3] >> 4; /*0x7ce30a*/
      switch ( v46 ) /*0x7ce313*/
      {
        case 0: /*0x7ce313*/
          goto $NORMAL_STATE$1535;
        case 1: /*0x7ce313*/
          v53 = -1; /*0x7ce31a*/
          v45 = 0; /*0x7ce31e*/
          v48 = 0; /*0x7ce321*/
          v50 = 0; /*0x7ce324*/
          v51 = 0; /*0x7ce327*/
          v56 = 0; /*0x7ce32a*/
          v49 = 0; /*0x7ce32d*/
          goto LABEL_171; /*0x7ce330*/
        case 2: /*0x7ce313*/
          switch ( v4 ) /*0x7ce33b*/
          {
            case ' ': /*0x7ce33b*/
              v56 |= 2u; /*0x7ce378*/
              break;
            case '#': /*0x7ce33b*/
              LOBYTE(v56) = v56 | 0x80; /*0x7ce36f*/
              break;
            case '+': /*0x7ce33b*/
              v56 |= 1u; /*0x7ce366*/
              break;
            case '-': /*0x7ce33b*/
              v56 |= 4u; /*0x7ce35d*/
              break;
            case '0': /*0x7ce33b*/
              v56 |= 8u; /*0x7ce354*/
              break;
          }
          goto LABEL_171; /*0x7ce358*/
        case 3: /*0x7ce313*/
          if ( v4 == 42 ) /*0x7ce384*/
          {
            int_arg = get_int_arg(&a3); /*0x7ce38a*/
            v50 = int_arg; /*0x7ce392*/
            if ( int_arg >= 0 ) /*0x7ce395*/
              goto LABEL_171; /*0x7ce395*/
            v56 |= 4u; /*0x7ce39b*/
            v10 = -int_arg; /*0x7ce39f*/
          }
          else
          {
            v10 = v4 + 10 * v50 - 48; /*0x7ce3b2*/
          }
          v50 = v10; /*0x7ce3a1*/
          goto LABEL_171; /*0x7ce3a4*/
        case 4: /*0x7ce313*/
          v53 = 0; /*0x7ce3b8*/
          goto LABEL_171; /*0x7ce3bb*/
        case 5: /*0x7ce313*/
          if ( v4 == 42 ) /*0x7ce3c3*/
          {
            v53 = get_int_arg(&a3); /*0x7ce3d1*/
            if ( v53 < 0 ) /*0x7ce3d4*/
              v53 = -1; /*0x7ce3da*/
          }
          else
          {
            v53 = v4 + 10 * v7 - 48; /*0x7ce3ed*/
          }
          goto LABEL_171; /*0x7ce3de*/
        case 6: /*0x7ce313*/
          switch ( v4 ) /*0x7ce3f8*/
          {
            case 'I': /*0x7ce3f8*/
              if ( *v5 == 54 && v5[1] == 52 ) /*0x7ce431*/
              {
                BYTE1(v56) |= 0x80u; /*0x7ce435*/
                v57 = v5 + 2; /*0x7ce439*/
              }
              else
              {
                v46 = 0; /*0x7ce441*/
$NORMAL_STATE$1535: /*0x7ce444*/
                v49 = 0; /*0x7ce444*/
                if ( *((char *)MEMORY[0x87C590] + 2 * (unsigned __int8)v4 + 1) < 0 ) /*0x7ce455*/
                {
                  write_char(v4, File, (int)&v52[1]); /*0x7ce462*/
                  v4 = *v5; /*0x7ce467*/
                  v57 = v5 + 1; /*0x7ce46d*/
                }
                write_char(v4, File, (int)&v52[1]); /*0x7ce47b*/
              }
              break;
            case 'h': /*0x7ce3f8*/
              v56 |= 0x20u; /*0x7ce41f*/
              break;
            case 'l': /*0x7ce3f8*/
              v56 |= 0x10u; /*0x7ce416*/
              break;
            case 'w': /*0x7ce3f8*/
              BYTE1(v56) |= 8u; /*0x7ce40d*/
              break;
          }
          goto LABEL_171; /*0x7ce411*/
        case 7: /*0x7ce313*/
          if ( v4 > 103 ) /*0x7ce48e*/
          {
            switch ( v4 ) /*0x7ce6b3*/
            {
              case 'i': /*0x7ce6b3*/
                goto LABEL_114; /*0x7ce6b3*/
              case 'n': /*0x7ce6b3*/
                v23 = (_WORD *)get_int_arg(&a3); /*0x7ce764*/
                if ( (v56 & 0x20) != 0 ) /*0x7ce76e*/
                  *v23 = v52[1]; /*0x7ce774*/
                else
                  *(_DWORD *)v23 = *(_DWORD *)&v52[1]; /*0x7ce77c*/
                v48 = 1; /*0x7ce77e*/
                goto LABEL_171; /*0x7ce785*/
              case 'o': /*0x7ce6b3*/
                v54 = 8; /*0x7ce751*/
                if ( (v56 & 0x80u) != 0 ) /*0x7ce758*/
                  BYTE1(v56) |= 2u; /*0x7ce75a*/
                break;
              default:
                switch ( v4 ) /*0x7ce6ca*/
                {
                  case 'p': /*0x7ce6ca*/
                    v53 = 8; /*0x7ce71d*/
LABEL_105:
                    v47 = 7; /*0x7ce724*/
                    break;
                  case 's': /*0x7ce6ca*/
                    goto LABEL_55; /*0x7ce6cf*/
                  case 'u': /*0x7ce6ca*/
                    goto LABEL_115; /*0x7ce6d7*/
                  case 'x': /*0x7ce6ca*/
                    v47 = 39; /*0x7ce6e6*/
                    break;
                  default:
                    goto LABEL_148; /*0x7ce6e0*/
                }
                v54 = 16; /*0x7ce72f*/
                if ( (v56 & 0x80u) != 0 ) /*0x7ce736*/
                {
                  LOBYTE(v52[0]) = 48; /*0x7ce73b*/
                  v51 = 2; /*0x7ce741*/
                  HIBYTE(v52[0]) = v47 + 81; /*0x7ce748*/
                }
                break;
            }
LABEL_116:
            if ( (v56 & 0x8000) == 0 ) /*0x7ce799*/
            {
              if ( (v56 & 0x20) != 0 ) /*0x7ce7ab*/
              {
                if ( (v56 & 0x40) != 0 ) /*0x7ce7b5*/
                  LODWORD(v24) = (__int16)get_int_arg(&a3); /*0x7ce7bd*/
                else
                  LODWORD(v24) = (unsigned __int16)get_int_arg(&a3); /*0x7ce7c9*/
              }
              else
              {
                if ( (v56 & 0x40) == 0 ) /*0x7ce7d6*/
                {
                  v24 = (unsigned int)get_int_arg(&a3); /*0x7ce7e0*/
                  goto LABEL_126; /*0x7ce7e0*/
                }
                LODWORD(v24) = get_int_arg(&a3); /*0x7ce7d8*/
              }
              v24 = (int)v24; /*0x7ce7c0*/
            }
            else
            {
              LODWORD(v24) = get_int64_arg(&a3); /*0x7ce79f*/
            }
LABEL_126:
            if ( (v56 & 0x40) != 0 && v24 < 0 ) /*0x7ce7f0*/
            {
              HIDWORD(v25) = -(int)v24; /*0x7ce7fd*/
              BYTE1(v56) |= 1u; /*0x7ce801*/
              LODWORD(v25) = (unsigned __int64)-v24 >> 32; /*0x7ce805*/
            }
            else
            {
              v25 = __PAIR64__(v24, HIDWORD(v24)); /*0x7ce80b*/
            }
            if ( (v56 & 0x8000) == 0 ) /*0x7ce811*/
              LODWORD(v25) = 0; /*0x7ce813*/
            if ( v53 >= 0 ) /*0x7ce81a*/
              v56 &= ~8u; /*0x7ce825*/
            else
              v53 = 1; /*0x7ce81c*/
            if ( !v25 ) /*0x7ce82d*/
              v51 = 0; /*0x7ce82f*/
            p_MbCh = (int)&v40; /*0x7ce836*/
            while ( 1 ) /*0x7ce839*/
            {
              v26 = v53--; /*0x7ce839*/
              if ( v26 <= 0 && !v25 ) /*0x7ce847*/
                break; /*0x7ce847*/
              v43 = v54; /*0x7ce851*/
              v27 = __PAIR64__(v25, HIDWORD(v25)) % v54 + 48; /*0x7ce861*/
              v28 = __PAIR64__(v25, HIDWORD(v25)) / v54; /*0x7ce873*/
              v25 = __PAIR64__(v28, HIDWORD(v28)); /*0x7ce873*/
              if ( v27 > 57 ) /*0x7ce875*/
                LOBYTE(v27) = v47 + v27; /*0x7ce877*/
              v29 = (_BYTE *)p_MbCh--; /*0x7ce87a*/
              *v29 = v27; /*0x7ce880*/
            }
            v30 = &v40 - p_MbCh++; /*0x7ce887*/
            v54 = (int)v30; /*0x7ce891*/
            if ( (v56 & 0x200) != 0 && (*(_BYTE *)p_MbCh != 48 || !v30) ) /*0x7ce8a0*/
            {
              --p_MbCh; /*0x7ce8a2*/
              v20 = (int)(v30 + 1); /*0x7ce8a5*/
              *(_BYTE *)p_MbCh = 48; /*0x7ce8a9*/
              goto LABEL_147; /*0x7ce8a9*/
            }
            goto LABEL_148; /*0x7ce8a0*/
          }
          if ( v4 >= 101 ) /*0x7ce497*/
            goto LABEL_65; /*0x7ce497*/
          if ( v4 > 88 ) /*0x7ce4a0*/
          {
            if ( v4 == 90 ) /*0x7ce594*/
            {
              v17 = (__int16 *)get_int_arg(&a3); /*0x7ce5cc*/
              if ( v17 && (v18 = *((_DWORD *)v17 + 1)) != 0 ) /*0x7ce5db*/
              {
                if ( (v56 & 0x800) != 0 ) /*0x7ce5e1*/
                {
                  v19 = (unsigned int)*v17 >> 1; /*0x7ce5e6*/
                  p_MbCh = v18; /*0x7ce5e8*/
                  v54 = v19; /*0x7ce5eb*/
                  v49 = 1; /*0x7ce5ee*/
                  goto LABEL_148; /*0x7ce5f5*/
                }
                v49 = 0; /*0x7ce5fa*/
                p_MbCh = v18; /*0x7ce5fe*/
                v20 = *v17; /*0x7ce601*/
              }
              else
              {
                p_MbCh = (int)MEMORY[0x87C4C8]; /*0x7ce60e*/
                v20 = strlen(MEMORY[0x87C4C8]); /*0x7ce6a5*/
              }
              goto LABEL_147; /*0x7ce604*/
            }
            if ( v4 == 99 ) /*0x7ce599*/
              goto LABEL_69; /*0x7ce599*/
            if ( v4 != 100 ) /*0x7ce59c*/
              goto LABEL_148; /*0x7ce59c*/
LABEL_114:
            v56 |= 0x40u; /*0x7ce78a*/
LABEL_115:
            v54 = 10; /*0x7ce78e*/
            goto LABEL_116; /*0x7ce78e*/
          }
          switch ( v4 ) /*0x7ce4a6*/
          {
            case 'X': /*0x7ce4a6*/
              goto LABEL_105; /*0x7ce4a6*/
            case 'C': /*0x7ce4a6*/
              if ( (v56 & 0x830) == 0 ) /*0x7ce55a*/
                BYTE1(v56) |= 8u; /*0x7ce55c*/
LABEL_69:
              if ( (v56 & 0x810) != 0 ) /*0x7ce56a*/
              {
                short_arg = get_short_arg(&a3); /*0x7ce56c*/
                v54 = wctomb(&MbCh, short_arg); /*0x7ce581*/
                if ( v54 < 0 ) /*0x7ce586*/
                  v48 = 1; /*0x7ce588*/
              }
              else
              {
                MbCh = get_int_arg(&a3); /*0x7ce5ad*/
                v54 = 1; /*0x7ce5b3*/
              }
              p_MbCh = (int)&MbCh; /*0x7ce5c0*/
              break; /*0x7ce5c3*/
            case 'E': /*0x7ce4a6*/
            case 'G': /*0x7ce4a6*/
              v45 = 1; /*0x7ce529*/
              v4 += 32; /*0x7ce530*/
LABEL_65:
              v56 |= 0x40u; /*0x7ce533*/
              p_MbCh = (int)&MbCh; /*0x7ce53f*/
              if ( v7 >= 0 ) /*0x7ce542*/
              {
                if ( !v7 && v4 == 103 ) /*0x7ce61c*/
                  v53 = 1; /*0x7ce61e*/
              }
              else
              {
                v53 = 6; /*0x7ce548*/
              }
              a3 += 8; /*0x7ce62e*/
              v41 = *(_DWORD *)(a3 - 8); /*0x7ce637*/
              v42 = *(_DWORD *)(a3 - 4); /*0x7ce63d*/
              MEMORY[0x87C4D0](); /*0x7ce64f*/
            case 'S': /*0x7ce4a6*/
              if ( (v56 & 0x830) == 0 ) /*0x7ce4cc*/
                BYTE1(v56) |= 8u; /*0x7ce4ce*/
LABEL_55:
              v11 = v53; /*0x7ce4d2*/
              if ( v53 == -1 ) /*0x7ce4d8*/
                v11 = 0x7FFFFFFF; /*0x7ce4da*/
              v12 = get_int_arg(&a3); /*0x7ce4e3*/
              v13 = (char *)v12; /*0x7ce4ef*/
              p_MbCh = v12; /*0x7ce4f1*/
              if ( (v56 & 0x810) != 0 ) /*0x7ce4f4*/
              {
                if ( !v12 ) /*0x7ce4fc*/
                {
                  v13 = (char *)MEMORY[0x87C4CC]; /*0x7ce4fe*/
                  p_MbCh = (int)MEMORY[0x87C4CC]; /*0x7ce504*/
                }
                v49 = 1; /*0x7ce507*/
                for ( i = v13; ; i += 2 ) /*0x7ce50e*/
                {
                  v15 = v11--; /*0x7ce510*/
                  if ( !v15 || !*(_WORD *)i ) /*0x7ce51b*/
                    break; /*0x7ce51b*/
                }
                v20 = (i - v13) >> 1; /*0x7ce6f1*/
              }
              else
              {
                if ( !v12 ) /*0x7ce6fa*/
                {
                  v13 = MEMORY[0x87C4C8]; /*0x7ce6fc*/
                  p_MbCh = (int)MEMORY[0x87C4C8]; /*0x7ce702*/
                }
                for ( j = v13; ; ++j ) /*0x7ce705*/
                {
                  v22 = v11--; /*0x7ce707*/
                  if ( !v22 || !*j ) /*0x7ce70e*/
                    break; /*0x7ce70e*/
                }
                v20 = j - v13; /*0x7ce716*/
              }
LABEL_147:
              v54 = v20; /*0x7ce8ac*/
              break;
          }
LABEL_148:
          if ( v48 ) /*0x7ce8b3*/
            goto LABEL_171; /*0x7ce8b3*/
          v31 = v56; /*0x7ce8b9*/
          if ( (v56 & 0x40) == 0 ) /*0x7ce8bf*/
            goto LABEL_157; /*0x7ce8bf*/
          if ( (v56 & 0x100) != 0 ) /*0x7ce8c4*/
          {
            LOBYTE(v52[0]) = 45; /*0x7ce8c6*/
LABEL_156:
            v51 = 1; /*0x7ce8e0*/
            goto LABEL_157; /*0x7ce8e0*/
          }
          if ( (v56 & 1) != 0 ) /*0x7ce8cf*/
          {
            LOBYTE(v52[0]) = 43; /*0x7ce8d1*/
            goto LABEL_156; /*0x7ce8d5*/
          }
          if ( (v56 & 2) != 0 ) /*0x7ce8da*/
          {
            LOBYTE(v52[0]) = 32; /*0x7ce8dc*/
            goto LABEL_156; /*0x7ce8dc*/
          }
LABEL_157:
          v32 = v50 - v51 - v54; /*0x7ce8e7*/
          if ( (v56 & 0xC) == 0 ) /*0x7ce8f3*/
            write_multi_char(32, v50 - v51 - v54, File, (int)&v52[1]); /*0x7ce8ff*/
          write_string((int)v52, v51, File, (int)&v52[1]); /*0x7ce915*/
          if ( (v31 & 8) != 0 && (v31 & 4) == 0 ) /*0x7ce925*/
            write_multi_char(48, v32, File, (int)&v52[1]); /*0x7ce931*/
          if ( v49 && v54 > 0 ) /*0x7ce943*/
          {
            v33 = (wchar_t *)p_MbCh; /*0x7ce948*/
            v34 = v54 - 1; /*0x7ce94b*/
            do /*0x7ce97c*/
            {
              v35 = *v33++; /*0x7ce94e*/
              v36 = wctomb(v44, v35); /*0x7ce958*/
              if ( v36 <= 0 ) /*0x7ce961*/
                break; /*0x7ce961*/
              write_string((int)v44, v36, File, (int)&v52[1]); /*0x7ce96f*/
            }
            while ( v34-- ); /*0x7ce97c*/
          }
          else
          {
            write_string(p_MbCh, v54, File, (int)&v52[1]); /*0x7ce98d*/
          }
          if ( (v56 & 4) != 0 ) /*0x7ce999*/
            write_multi_char(32, v32, File, (int)&v52[1]); /*0x7ce9a5*/
LABEL_171:
          v4 = *v57; /*0x7ce9ad*/
          v5 = v57 + 1; /*0x7ce9b2*/
          v6 = *v57++ == 0; /*0x7ce9b3*/
          if ( v6 ) /*0x7ce9b8*/
            return *(_DWORD *)&v52[1]; /*0x7ce9b8*/
          v7 = v53; /*0x7ce2d1*/
          v3 = v46; /*0x7ce2d4*/
          break; /*0x7ce2d4*/
        default:
          goto LABEL_171;
      }
    }
  }
  return *(_DWORD *)&v52[1]; /*0x7ce9c1*/
}


// ==== 0x007CE9E6  _write_char  this=-  sig=csp ====
_DWORD *__cdecl write_char(int a1, FILE *File, _DWORD *a3)
{
  int v4; // eax
  bool v5; // zf
  _DWORD *result; // eax

  if ( --File->_cnt < 0 ) /*0x7ce9ec*/
  {
    v4 = _flsbuf(a1, File); /*0x7cea03*/
  }
  else
  {
    *File->_ptr++ = a1; /*0x7ce9f6*/
    v4 = (unsigned __int8)a1; /*0x7ce9fa*/
  }
  v5 = v4 == -1; /*0x7cea0a*/
  result = a3; /*0x7cea0d*/
  if ( v5 ) /*0x7cea10*/
    *a3 = -1; /*0x7cea12*/
  else
    ++*a3; /*0x7cea17*/
  return result; /*0x7cea15*/
}


// ==== 0x007CEA1B  _write_multi_char  this=-  sig=csp ====
_DWORD *__cdecl write_multi_char(int a1, _DWORD *a2, FILE *File, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *i; // edi

  result = a2; /*0x7cea21*/
  for ( i = (_DWORD *)((char *)a2 - 1); (int)result > 0; i = (_DWORD *)((char *)i - 1) ) /*0x7cea26*/
  {
    result = write_char(a1, File, a4); /*0x7cea35*/
    if ( *a4 == -1 ) /*0x7cea40*/
      break; /*0x7cea40*/
    result = i; /*0x7cea42*/
  }
  return result; /*0x7cea49*/
}


// ==== 0x007CEA4C  _write_string  this=-  sig=csp ====
_DWORD *__cdecl write_string(char *a1, _DWORD *a2, FILE *File, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *i; // ebx
  int v7; // eax

  result = a2; /*0x7cea51*/
  for ( i = (_DWORD *)((char *)a2 - 1); (int)result > 0; i = (_DWORD *)((char *)i - 1) ) /*0x7cea58*/
  {
    v7 = *a1++; /*0x7cea62*/
    result = write_char(v7, File, a4); /*0x7cea6c*/
    if ( *a4 == -1 ) /*0x7cea77*/
      break; /*0x7cea77*/
    result = i; /*0x7cea79*/
  }
  return result; /*0x7cea80*/
}


// ==== 0x007CEA84  _get_int_arg  this=-  sig=csp ====
int __cdecl get_int_arg(_DWORD *a1)
{
  *a1 += 4; /*0x7cea88*/
  return *(_DWORD *)(*a1 - 4); /*0x7cea90*/
}


// ==== 0x007CEA91  ObjectClass::_get_int64_arg  this=ObjectClass  sig=csp ====
__int64 __cdecl get_int64_arg(_DWORD *a1)
{
  *a1 += 8; /*0x7cea95*/
  return *(_QWORD *)(*a1 - 8); /*0x7ceaa0*/
}


// ==== 0x007CEAA1  _get_short_arg  this=-  sig=ida-proto ====
__int16 __cdecl get_short_arg(_DWORD *a1)
{
  *a1 += 4; /*0x7ceaa5*/
  return *(_WORD *)(*a1 - 4); /*0x7ceaae*/
}


// ==== 0x007CEAAF  __setdefaultprecision  this=-  sig=ida-proto ====
unsigned int _setdefaultprecision()
{
  return _controlfp(0x10000u, 0x30000u); /*0x7ceac0*/
}


// ==== 0x007CEAC1  __ms_p5_test_fdiv  this=-  sig=ida-proto ====
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0; /*0x7ceaf9*/
}


// ==== 0x007CEAFF  __ms_p5_mp_test_fdiv  this=-  sig=ida-proto ====
int _ms_p5_mp_test_fdiv()
{
  HMODULE ModuleHandleA; // eax
  FARPROC ProcAddress; // eax

  ModuleHandleA = GetModuleHandleA("KERNEL32"); /*0x7ceb04*/
  if ( ModuleHandleA && (ProcAddress = GetProcAddress(ModuleHandleA, "IsProcessorFeaturePresent")) != 0 ) /*0x7ceb1c*/
    return ((int (__stdcall *)(_DWORD))ProcAddress)(0); /*0x7ceb20*/
  else
    return _ms_p5_test_fdiv(); /*0x7ceb23*/
}


// ==== 0x007CEB28  ObjectClass::__forcdecpt  this=ObjectClass  sig=csp ====
char __cdecl _forcdecpt(char *a1)
{
  char *v1; // esi
  int v2; // eax
  char result; // al
  char *v4; // esi
  char v5; // cl

  v1 = a1; /*0x7ceb29*/
  if ( tolower(*a1) != 101 ) /*0x7ceb3a*/
  {
    do /*0x7ceb66*/
    {
      ++v1; /*0x7ceb3c*/
      if ( (int)MEMORY[0x87C79C] <= 1 ) /*0x7ceb44*/
        v2 = *((_BYTE *)MEMORY[0x87C590] + 2 * *v1) & 4; /*0x7ceb61*/
      else
        v2 = _isctype(*v1, 4); /*0x7ceb4c*/
    }
    while ( v2 ); /*0x7ceb66*/
  }
  result = *v1; /*0x7ceb6e*/
  *v1 = MEMORY[0x87C7A0]; /*0x7ceb70*/
  v4 = v1 + 1; /*0x7ceb72*/
  do /*0x7ceb7e*/
  {
    v5 = *v4; /*0x7ceb73*/
    *v4 = result; /*0x7ceb75*/
    result = v5; /*0x7ceb77*/
  }
  while ( *v4++ ); /*0x7ceb7e*/
  return result; /*0x7ceb80*/
}


// ==== 0x007CEB82    this=-  sig=? ====
char *__cdecl _cropzeros(char *a1)
{
  char *v1; // eax
  char i; // cl
  char v3; // cl
  char *result; // eax
  char v5; // cl
  char *v6; // ecx
  char v7; // dl

  v1 = a1; /*0x7ceb82*/
  for ( i = *a1; i; i = *++v1 ) /*0x7ceb8c*/
  {
    if ( i == MEMORY[0x87C7A0][0] ) /*0x7ceb94*/
      break; /*0x7ceb94*/
  }
  v3 = *v1; /*0x7ceb9e*/
  result = v1 + 1; /*0x7ceba0*/
  if ( v3 ) /*0x7ceba3*/
  {
    while ( 1 ) /*0x7ceba5*/
    {
      v5 = *result; /*0x7ceba5*/
      if ( !*result || v5 == 101 || v5 == 69 ) /*0x7cebb3*/
        break; /*0x7cebb3*/
      ++result; /*0x7cebb5*/
    }
    v6 = result; /*0x7cebb8*/
    do /*0x7cebbe*/
      --result; /*0x7cebba*/
    while ( *result == 48 ); /*0x7cebbe*/
    if ( *result == MEMORY[0x87C7A0][0] ) /*0x7cebc2*/
      --result; /*0x7cebc4*/
    do /*0x7cebcd*/
    {
      v7 = *v6; /*0x7cebc5*/
      ++result; /*0x7cebc7*/
      ++v6; /*0x7cebc8*/
      *result = v7; /*0x7cebcb*/
    }
    while ( v7 ); /*0x7cebcd*/
  }
  return result; /*0x7cebcf*/
}


// ==== 0x007CEBD0    this=-  sig=? ====
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0; /*0x7cebe4*/
}


// ==== 0x007CEBE8  __fassign  this=-  sig=ida-proto ====
int *__cdecl _fassign(int a1, int *a2, int a3)
{
  _DWORD v4[2]; // [esp+0h] [ebp-8h] BYREF

  if ( a1 ) /*0x7cebf4*/
  {
    Fassign_Helper((int)v4, a3); /*0x7cebfa*/
    *a2 = v4[0]; /*0x7cec07*/
    a2[1] = v4[1]; /*0x7cec0c*/
    return a2; /*0x7cebff*/
  }
  else
  {
    Fassign_Helper_7D7D1C((int)&a3, a3); /*0x7cec15*/
    *a2 = a3; /*0x7cec22*/
    return a2; /*0x7cec1a*/
  }
}


// ==== 0x007CEC26  __cftoe  this=-  sig=csp ====
_BYTE *__cdecl _cftoe(double *a1, _BYTE *a2, int a3, int a4)
{
  double v6; // [esp+0h] [ebp-3Ch]
  char Destination[24]; // [esp+14h] [ebp-28h] BYREF
  int v8[4]; // [esp+2Ch] [ebp-10h] BYREF

  v6 = *a1; /*0x7cec3c*/
  _fltout2(SLOBYTE(v6), SHIDWORD(v6), v8, Destination); /*0x7cec3f*/
  _fptostr(&a2[(v8[0] == 45) + (a3 > 0)], (char *)(a3 + 1), (int)v8); /*0x7cec67*/
  _cftoe2(a2, a3, a4, (int)v8, 0); /*0x7cec79*/
  return a2; /*0x7cec84*/
}


// ==== 0x007CEC87  ObjectClass::__cftoe2  this=ObjectClass  sig=csp ====
_BYTE *__cdecl _cftoe2(_BYTE *a1, int a2, int a3, int a4, char a5)
{
  _BYTE *v5; // eax
  char *v6; // eax
  int v7; // ebx

  if ( a5 ) /*0x7cec98*/
    _shift(&a1[*(_DWORD *)a4 == 45], a2 > 0); /*0x7cecae*/
  v5 = a1; /*0x7cecb8*/
  if ( *(_DWORD *)a4 == 45 ) /*0x7cecba*/
  {
    *a1 = 45; /*0x7cecbc*/
    v5 = a1 + 1; /*0x7cecbf*/
  }
  if ( a2 > 0 ) /*0x7cecc5*/
  {
    *v5 = v5[1]; /*0x7ceccd*/
    *++v5 = MEMORY[0x87C7A0]; /*0x7cecd7*/
  }
  v6 = strcpy(&v5[(a5 == 0) + a2], "e+000"); /*0x7cecec*/
  if ( a3 ) /*0x7cecf8*/
    *v6 = 69; /*0x7cecfa*/
  if ( **(_BYTE **)(a4 + 12) != 48 ) /*0x7ced04*/
  {
    v7 = *(_DWORD *)(a4 + 4) - 1; /*0x7ced09*/
    if ( v7 < 0 ) /*0x7ced0a*/
    {
      v7 = 1 - *(_DWORD *)(a4 + 4); /*0x7ced0c*/
      v6[1] = 45; /*0x7ced0e*/
    }
    if ( v7 >= 100 ) /*0x7ced15*/
    {
      v6[2] += v7 / 100; /*0x7ced1f*/
      v7 %= 100; /*0x7ced26*/
    }
    if ( v7 >= 10 ) /*0x7ced2c*/
    {
      v6[3] += v7 / 10; /*0x7ced36*/
      v7 %= 10; /*0x7ced3d*/
    }
    v6[4] += v7; /*0x7ced3f*/
  }
  return a1; /*0x7ced44*/
}


// ==== 0x007CED49  __cftof  this=-  sig=csp ====
char *__cdecl _cftof(double *a1, char *Src, size_t Size)
{
  double v5; // [esp+0h] [ebp-3Ch]
  char Destination[24]; // [esp+14h] [ebp-28h] BYREF
  int v7[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = *a1; /*0x7ced5f*/
  _fltout2(SLOBYTE(v5), SHIDWORD(v5), v7, Destination); /*0x7ced62*/
  _fptostr(&Src[v7[0] == 45], (char *)(Size + v7[1]), (int)v7); /*0x7ced81*/
  _cftof2(Src, Size, (int)v7, 0); /*0x7ced90*/
  return Src; /*0x7ced9b*/
}


// ==== 0x007CED9E  __cftof2  this=-  sig=csp ====
char *__cdecl _cftof2(char *Src, int Size, _DWORD *a3, char a4)
{
  int v4; // eax
  char *v5; // eax
  char *v6; // edi
  int v7; // eax
  char *v8; // edi
  int v9; // esi
  char *v10; // edi
  int v11; // esi

  v4 = a3[1] - 1; /*0x7cedad*/
  if ( a4 && v4 == Size ) /*0x7cedb7*/
  {
    v5 = &Src[v4 + (*a3 == 45)]; /*0x7cedc5*/
    *v5 = 48; /*0x7cedc7*/
    v5[1] = 0; /*0x7cedca*/
  }
  v6 = Src; /*0x7cedd1*/
  if ( *a3 == 45 ) /*0x7cedd3*/
  {
    *Src = 45; /*0x7cedd5*/
    v6 = Src + 1; /*0x7cedd8*/
  }
  v7 = a3[1]; /*0x7ceddb*/
  if ( v7 > 0 ) /*0x7cede0*/
  {
    v8 = &v6[v7]; /*0x7cedf2*/
  }
  else
  {
    _shift(v6, 1); /*0x7cede5*/
    *v6 = 48; /*0x7cedeb*/
    v8 = v6 + 1; /*0x7cedef*/
  }
  if ( Size > 0 ) /*0x7cedf8*/
  {
    _shift(v8, 1); /*0x7cedfd*/
    *v8 = MEMORY[0x87C7A0][0]; /*0x7cee08*/
    v9 = a3[1]; /*0x7cee0a*/
    v10 = v8 + 1; /*0x7cee0d*/
    if ( v9 < 0 ) /*0x7cee11*/
    {
      if ( a4 ) /*0x7cee17*/
      {
        v11 = -v9; /*0x7cee19*/
      }
      else
      {
        v11 = -v9; /*0x7cee1d*/
        if ( Size < v11 ) /*0x7cee22*/
        {
LABEL_15:
          _shift(v10, Size); /*0x7cee27*/
          memset(v10, 48, Size); /*0x7cee36*/
          return Src; /*0x7cee36*/
        }
      }
      Size = v11; /*0x7cee24*/
      goto LABEL_15; /*0x7cee24*/
    }
  }
  return Src; /*0x7cee3e*/
}


// ==== 0x007CEE45  __cftog  this=-  sig=csp ====
char *__cdecl _cftog(double *a1, char *Src, char *Size, int a4)
{
  int v5; // esi
  char *v6; // edi
  double v8; // [esp+0h] [ebp-44h]
  char Destination[24]; // [esp+1Ch] [ebp-28h] BYREF
  int v10; // [esp+34h] [ebp-10h] BYREF
  int v11; // [esp+38h] [ebp-Ch]

  v8 = *a1; /*0x7cee5d*/
  _fltout2(SLOBYTE(v8), SHIDWORD(v8), &v10, Destination); /*0x7cee60*/
  v5 = v11 - 1; /*0x7cee6b*/
  v6 = &Src[v10 == 45]; /*0x7cee7a*/
  _fptostr(v6, Size, (int)&v10); /*0x7cee82*/
  if ( v11 - 1 < -4 || v11 - 1 >= (int)Size ) /*0x7cee9a*/
    return _cftoe2(Src, (int)Size, a4, (int)&v10, 1); /*0x7ceecb*/
  if ( v5 < v11 - 1 ) /*0x7cee9e*/
    v6[strlen(v6) - 1] = 0; /*0x7ceea7*/
  return _cftof2(Src, (int)Size, &v10, 1); /*0x7ceed3*/
}


// ==== 0x007CEED8  __cfltcvt  this=-  sig=ida-proto ====
char *__cdecl _cfltcvt(double *a1, char *Src, int a3, char *Size, int a5)
{
  if ( a3 == 101 || a3 == 69 ) /*0x7ceee5*/
    return _cftoe(a1, Src, (int)Size, a5); /*0x7cef1f*/
  if ( a3 == 102 ) /*0x7ceeeb*/
    return _cftof(a1, Src, (size_t)Size); /*0x7ceef6*/
  return _cftog(a1, Src, Size, a5); /*0x7ceefe*/
}


// ==== 0x007CEF29  __shift  this=-  sig=csp ====
void __cdecl _shift(const char *Src, int a2)
{
  size_t v2; // eax

  if ( a2 ) /*0x7cef30*/
  {
    v2 = strlen(Src); /*0x7cef38*/
    memcpy((void *)&Src[a2], Src, v2 + 1); /*0x7cef43*/
  }
}


// ==== 0x007CF037  zerotoxdone  this=-  sig=ida-proto ====
void zerotoxdone()
{
  ; /*0x7cf037*/
}


// ==== 0x007CF082  _expbigret  this=-  sig=ida-proto ====
void expbigret()
{
  ; /*0x7cf082*/
}


// ==== 0x007CF0AE  __ffexpm1  this=-  sig=ida-proto ====
// positive sp value has been detected, the output may be wrong!
void __usercall _ffexpm1(int a1@<ebp>, long double a2@<st0>)
{
  bool v2; // c0
  char v3; // c2
  bool v4; // c3
  double v5; // st6
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  __int16 v10; // fps
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  __int16 v16; // fps
  long double v17; // st6
  bool v18; // c0
  char v19; // c2
  bool v20; // c3

  v5 = fabs(a2); /*0x7cf0b0*/
  v7 = *(double *)&MEMORY[0x87C50E] < v5; /*0x7cf0b8*/
  v8 = 0; /*0x7cf0b8*/
  v9 = *(double *)&MEMORY[0x87C50E] == v5; /*0x7cf0b8*/
  *(_WORD *)(a1 - 160) = v6; /*0x7cf0ba*/
  if ( (*(_BYTE *)(a1 - 159) & 0x41) != 0 ) /*0x7cf0c9*/
  {
    v2 = a2 < 0.0; /*0x7cf061*/
    v3 = 0; /*0x7cf061*/
    v4 = a2 == 0.0; /*0x7cf061*/
    *(_WORD *)(a1 - 160) = v6; /*0x7cf063*/
    if ( (*(_BYTE *)(a1 - 159) & 1) != 0 ) /*0x7cf072*/
    {
      *(_BYTE *)(a1 - 144) = 4; /*0x7cf083*/
      JUMPOUT(0x7CF266); /*0x7cf266*/
    }
    expbigret(); /*0x7cf07e*/
  }
  else
  {
    _ST6 = a2; /*0x7cf0cb*/
    __asm { frndint } /*0x7cf0cd*/
    v13 = _ST6 < 0.0; /*0x7cf0cf*/
    v14 = 0; /*0x7cf0cf*/
    v15 = _ST6 == 0.0; /*0x7cf0cf*/
    *(_WORD *)(a1 - 160) = v10; /*0x7cf0d1*/
    v17 = a2 - _ST6; /*0x7cf0e1*/
    v18 = v17 < 0.0; /*0x7cf0e3*/
    v19 = 0; /*0x7cf0e3*/
    v20 = v17 == 0.0; /*0x7cf0e3*/
    *(_WORD *)(a1 - 160) = v16; /*0x7cf0e5*/
  }
}


// ==== 0x007CF0F1  _isintTOS  this=-  sig=ida-proto ====
int __usercall isintTOS@<eax>(double a1@<st0>)
{
  _ST6 = a1; /*0x7cf0f1*/
  __asm { frndint } /*0x7cf0f3*/
  if ( _ST6 != a1 ) /*0x7cf0fb*/
    return notanint(); /*0x7cf0fb*/
  _ST5 = a1 * MEMORY[0x87C522]; /*0x7cf105*/
  __asm { frndint } /*0x7cf107*/
  if ( _ST5 == a1 * MEMORY[0x87C522] ) /*0x7cf10f*/
    return evenint(); /*0x7cf10f*/
  else
    return isintTOSret(); /*0x7cf112*/
}


// ==== 0x007CF116  _isintTOSret  this=-  sig=ida-proto ====
void isintTOSret()
{
  ; /*0x7cf116*/
}


// ==== 0x007CF117  notanint  this=-  sig=ida-proto ====
void notanint()
{
  isintTOSret(); /*0x7cf11c*/
}


// ==== 0x007CF11E  evenint  this=-  sig=ida-proto ====
void evenint()
{
  isintTOSret(); /*0x7cf123*/
}


// ==== 0x007CF125  _usepowhlp  this=-  sig=ida-proto ====
double __usercall usepowhlp@<st0>(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  double result; // st7
  double *v6; // [esp+10h] [ebp-7Ch]
  double v7[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v7; /*0x7cf129*/
  v6 = v7; /*0x7cf12b*/
  __asm { fsave byte ptr [esi+8] } /*0x7cf138*/
  v4 = _powhlp(a3, a2, v7); /*0x7cf13c*/
  __asm { frstor byte ptr [esi+8] } /*0x7cf144*/
  result = v7[0]; /*0x7cf147*/
  if ( v4 ) /*0x7cf14f*/
    *(_BYTE *)(a1 - 144) = 1; /*0x7cf319*/
  return result; /*0x7cf149*/
}


// ==== 0x007CF330  __startTwoArgErrorHandling  this=-  sig=ida-proto ====
void __noreturn _startTwoArgErrorHandling()
{
  JUMPOUT(0x7CF350); /*0x7cf350*/
}


// ==== 0x007CF347  __startOneArgErrorHandling  this=-  sig=ida-proto ====
double __usercall _startOneArgErrorHandling@<st0>(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        double a4@<st0>,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]

  v9[0] = a1; /*0x7cf34d*/
  v10 = a4; /*0x7cf350*/
  v9[1] = a3; /*0x7cf353*/
  v9[2] = a7; /*0x7cf35c*/
  v9[3] = a8; /*0x7cf35f*/
  _87except(a2, v9, &a5); /*0x7cf36b*/
  return v10; /*0x7cf381*/
}


// ==== 0x007CF390  __twoToTOS  this=-  sig=ida-proto ====
long double __usercall _twoToTOS@<st0>(double a1@<st0>)
{
  _ST6 = a1; /*0x7cf390*/
  __asm { frndint } /*0x7cf392*/
  return __FSCALE__(__F2XM1__(-(_ST6 - a1)) + 1.0, _ST6); /*0x7cf3a4*/
}


// ==== 0x007CF3A5  __load_CW  this=-  sig=ida-proto ====
void _load_CW()
{
  ; /*0x7cf3a5*/
}


// ==== 0x007CF3D5  __fload_withFB  this=-  sig=ida-proto ====
double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 ) /*0x7cf3e2*/
    return *(double *)a2; /*0x7cf3e4*/
  *(_QWORD *)&result = *(_QWORD *)a2 << 11; /*0x7cf409*/
  return result; /*0x7cf3e6*/
}


// ==== 0x007CF429  expspecial  this=-  sig=ida-proto ====
int __cdecl expspecial(int a1, int a2)
{
  return a2; /*0x7cf42d*/
}


// ==== 0x007CF465  __check_overflow_exit  this=-  sig=ida-proto ====
void _check_overflow_exit()
{
  JUMPOUT(0x7CF48D); /*0x7cf48d*/
}


// ==== 0x007CF479  __check_range_exit  this=-  sig=ida-proto ====
int __cdecl _powhlp(double a1, double a2, double *a3)
{
  double v4; // st7
  int v5; // esi
  char v6; // c0
  double v7; // st7
  int v8; // ecx

  v4 = a1; /*0x7cf52a*/
  v5 = 0; /*0x7cf530*/
  if ( v6 ) /*0x7cf535*/
    v4 = -a1; /*0x7cf537*/
  if ( HIDWORD(a2) != 2146435072 ) /*0x7cf549*/
  {
    if ( a2 == -INFINITY ) /*0x7cf582*/
    {
      if ( v4 > 1.0 ) /*0x7cf595*/
        goto LABEL_17; /*0x7cf595*/
      if ( v4 >= 1.0 ) /*0x7cf5a3*/
        goto LABEL_7; /*0x7cf5a3*/
LABEL_15:
      v7 = MEMORY[0x87D550]; /*0x7cf5c3*/
LABEL_29:
      *a3 = v7; /*0x7cf642*/
      return v5; /*0x7cf645*/
    }
LABEL_12:
    if ( HIDWORD(a1) == 2146435072 ) /*0x7cf5aa*/
    {
      if ( LODWORD(a1) ) /*0x7cf5af*/
        return v5; /*0x7cf5af*/
      if ( a2 > 0.0 ) /*0x7cf5c1*/
        goto LABEL_15; /*0x7cf5c1*/
      if ( a2 < 0.0 ) /*0x7cf5d7*/
        goto LABEL_17; /*0x7cf5d7*/
    }
    else
    {
      if ( a1 != -INFINITY ) /*0x7cf5e0*/
        return v5; /*0x7cf5e0*/
      v8 = _d_inttype(a2); /*0x7cf5ff*/
      if ( a2 > 0.0 ) /*0x7cf604*/
      {
        v7 = MEMORY[0x87D550]; /*0x7cf606*/
        if ( v8 == 1 ) /*0x7cf60f*/
          v7 = -MEMORY[0x87D550]; /*0x7cf611*/
        goto LABEL_29; /*0x7cf611*/
      }
      if ( a2 < 0.0 ) /*0x7cf627*/
      {
        if ( v8 == 1 ) /*0x7cf62c*/
          v7 = MEMORY[0x87D570]; /*0x7cf62e*/
        else
          v7 = 0.0; /*0x7cf636*/
        goto LABEL_29; /*0x7cf634*/
      }
    }
    v7 = 1.0; /*0x7cf640*/
    goto LABEL_29; /*0x7cf640*/
  }
  if ( LODWORD(a2) ) /*0x7cf54e*/
    goto LABEL_12; /*0x7cf54e*/
  if ( v4 > 1.0 ) /*0x7cf55c*/
    goto LABEL_15; /*0x7cf55c*/
  if ( v4 < 1.0 ) /*0x7cf56a*/
  {
LABEL_17:
    v7 = 0.0; /*0x7cf5d9*/
    goto LABEL_29; /*0x7cf5db*/
  }
LABEL_7:
  v5 = 1; /*0x7cf56c*/
  *a3 = MEMORY[0x87D558]; /*0x7cf578*/
  return v5; /*0x7cf64a*/
}


// ==== 0x007CF51C  __powhlp  this=-  sig=csp ====
int __cdecl _powhlp(double a1, double a2, double *a3)
{
  double v4; // st7
  int v5; // esi
  char v6; // c0
  double v7; // st7
  int v8; // ecx

  v4 = a1; /*0x7cf52a*/
  v5 = 0; /*0x7cf530*/
  if ( v6 ) /*0x7cf535*/
    v4 = -a1; /*0x7cf537*/
  if ( HIDWORD(a2) != 2146435072 ) /*0x7cf549*/
  {
    if ( a2 == -INFINITY ) /*0x7cf582*/
    {
      if ( v4 > 1.0 ) /*0x7cf595*/
        goto LABEL_17; /*0x7cf595*/
      if ( v4 >= 1.0 ) /*0x7cf5a3*/
        goto LABEL_7; /*0x7cf5a3*/
LABEL_15:
      v7 = MEMORY[0x87D550]; /*0x7cf5c3*/
LABEL_29:
      *a3 = v7; /*0x7cf642*/
      return v5; /*0x7cf645*/
    }
LABEL_12:
    if ( HIDWORD(a1) == 2146435072 ) /*0x7cf5aa*/
    {
      if ( LODWORD(a1) ) /*0x7cf5af*/
        return v5; /*0x7cf5af*/
      if ( a2 > 0.0 ) /*0x7cf5c1*/
        goto LABEL_15; /*0x7cf5c1*/
      if ( a2 < 0.0 ) /*0x7cf5d7*/
        goto LABEL_17; /*0x7cf5d7*/
    }
    else
    {
      if ( a1 != -INFINITY ) /*0x7cf5e0*/
        return v5; /*0x7cf5e0*/
      v8 = _d_inttype(a2); /*0x7cf5ff*/
      if ( a2 > 0.0 ) /*0x7cf604*/
      {
        v7 = MEMORY[0x87D550]; /*0x7cf606*/
        if ( v8 == 1 ) /*0x7cf60f*/
          v7 = -MEMORY[0x87D550]; /*0x7cf611*/
        goto LABEL_29; /*0x7cf611*/
      }
      if ( a2 < 0.0 ) /*0x7cf627*/
      {
        if ( v8 == 1 ) /*0x7cf62c*/
          v7 = MEMORY[0x87D570]; /*0x7cf62e*/
        else
          v7 = 0.0; /*0x7cf636*/
        goto LABEL_29; /*0x7cf634*/
      }
    }
    v7 = 1.0; /*0x7cf640*/
    goto LABEL_29; /*0x7cf640*/
  }
  if ( LODWORD(a2) ) /*0x7cf54e*/
    goto LABEL_12; /*0x7cf54e*/
  if ( v4 > 1.0 ) /*0x7cf55c*/
    goto LABEL_15; /*0x7cf55c*/
  if ( v4 < 1.0 ) /*0x7cf56a*/
  {
LABEL_17:
    v7 = 0.0; /*0x7cf5d9*/
    goto LABEL_29; /*0x7cf5db*/
  }
LABEL_7:
  v5 = 1; /*0x7cf56c*/
  *a3 = MEMORY[0x87D558]; /*0x7cf578*/
  return v5; /*0x7cf64a*/
}


// ==== 0x007CF64C  __d_inttype  this=-  sig=csp ====
int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 ) /*0x7cf662*/
    return 0; /*0x7cf6ad*/
  _frnd(X); /*0x7cf66c*/
  _frnd(X / 2.0); /*0x7cf695*/
  return 2; /*0x7cf6ab*/
}


// ==== 0x007CF6B1  __heap_init  this=-  sig=csp ====
int __cdecl _heap_init(int a1)
{
  hHeap = HeapCreate(a1 == 0, 0x1000u, 0); /*0x7cf6ca*/
  if ( !hHeap ) /*0x7cf6cf*/
    return 0; /*0x7cf6cf*/
  if ( !__sbh_heap_init() ) /*0x7cf6d1*/
  {
    HeapDestroy(hHeap); /*0x7cf6e0*/
    return 0; /*0x7cf6e8*/
  }
  return 1; /*0x7cf6e8*/
}


// ==== 0x007CF6ED  __heap_term  this=-  sig=ida-proto ====
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi

  v0 = 0; /*0x7cf6ee*/
  if ( CRTGlobal_B78B94 > 0 ) /*0x7cf6fd*/
  {
    v1 = (LPVOID *)((char *)lp + 12); /*0x7cf70c*/
    do /*0x7cf73f*/
    {
      VirtualFree(*v1, 0x100000u, 0x4000u); /*0x7cf71b*/
      VirtualFree(*v1, 0, 0x8000u); /*0x7cf726*/
      HeapFree(hHeap, 0, v1[1]); /*0x7cf733*/
      v1 += 5; /*0x7cf735*/
      ++v0; /*0x7cf738*/
    }
    while ( v0 < CRTGlobal_B78B94 ); /*0x7cf73f*/
  }
  HeapFree(hHeap, 0, lp); /*0x7cf751*/
  return HeapDestroy(hHeap); /*0x7cf75f*/
}


// ==== 0x007CF762  sub_7CF762  this=-  sig=ida-proto ====
int sub_7CF762()
{
  return MEMORY[0x87C584]; /*0x7cf767*/
}


// ==== 0x007CF768  __set_sbh_threshold  this=-  sig=ida-proto ====
int __cdecl _set_sbh_threshold(size_t NewValue)
{
  if ( NewValue > 0x3F8 ) /*0x7cf771*/
    return 0; /*0x7cf773*/
  MEMORY[0x87C584] = NewValue; /*0x7cf778*/
  return 1; /*0x7cf775*/
}


// ==== 0x007CF77F  ___sbh_heap_init  this=-  sig=ida-proto ====
int __sbh_heap_init()
{
  int result; // eax

  result = (int)HeapAlloc(hHeap, 0, 0x140u); /*0x7cf78c*/
  lp = (LPVOID)result; /*0x7cf794*/
  if ( result ) /*0x7cf799*/
  {
    CRTGlobal_B78B90 = 0; /*0x7cf79c*/
    CRTGlobal_B78B94 = 0; /*0x7cf7a3*/
    CRTGlobal_B78B8C = result; /*0x7cf7ac*/
    CRTGlobal_B78B84 = 16; /*0x7cf7b1*/
    return 1; /*0x7cf7bb*/
  }
  return result; /*0x7cf79b*/
}


// ==== 0x007CF7BD  ___sbh_find_block  this=-  sig=csp ====
char *__cdecl __sbh_find_block(INIClass *aP0)
{
  AbstractClass *result; // eax

  for ( result = lp; /*0x7cf7c5*/
        result < (AbstractClass *)((char *)lp + 20 * CRTGlobal_B78B94);
        result = (AbstractClass *)((char *)result + 20) )
  {
    if ( (unsigned int)aP0 - *(_DWORD *)&result->__pad_0[12] < 0x100000 ) /*0x7cf7de*/
      return result->__pad_0; /*0x7cf7de*/
  }
  return 0; /*0x7cf7e7*/
}


// ==== 0x007CF7E8  ObjectClass::___sbh_free_block  this=ObjectClass  sig=csp ====
_DWORD *__cdecl __sbh_free_block(AbstractClass *aP0, INIClass *aP1)
{
  int uniqueId; // eax
  int *p_INIClass_field_3C; // edx
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // ecx
  _BYTE *v7; // ecx
  unsigned int v8; // edi
  bool v9; // zf
  _BYTE *v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // ecx
  _BYTE *v16; // ecx
  unsigned int v17; // edx
  _BYTE *v18; // ecx
  unsigned int v19; // edx
  _DWORD *v20; // ecx
  _DWORD *result; // eax
  LPVOID *v22; // eax
  _DWORD *v23; // [esp+10h] [ebp-10h]
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]
  int *v26; // [esp+18h] [ebp-8h]
  int unknown38; // [esp+1Ch] [ebp-4h]
  char aP1_3; // [esp+2Fh] [ebp+Fh]

  uniqueId = aP0->uniqueId; /*0x7cf7f6*/
  p_INIClass_field_3C = &aP1[-1].INIClass_field_3C; /*0x7cf801*/
  v4 = ((unsigned int)aP1 - *(_DWORD *)&aP0->__pad_0[12]) >> 15; /*0x7cf805*/
  v5 = aP1[-1].INIClass_field_3C - 1; /*0x7cf813*/
  unknown38 = aP1[-1].unknown38; /*0x7cf814*/
  v24 = v5; /*0x7cf81e*/
  v23 = (_DWORD *)(516 * v4 + uniqueId + 324); /*0x7cf821*/
  v6 = *(int *)((char *)&aP1[-1].INIClass_field_3C + v5); /*0x7cf824*/
  v25 = v6; /*0x7cf82a*/
  if ( (v6 & 1) == 0 ) /*0x7cf82d*/
  {
    aP1 = (INIClass *)((v6 >> 4) - 1); /*0x7cf836*/
    if ( (unsigned int)aP1 > 0x3F ) /*0x7cf83b*/
      aP1 = (INIClass *)63; /*0x7cf83d*/
    if ( *(int *)((char *)p_INIClass_field_3C + v5 + 4) == *(int *)((char *)p_INIClass_field_3C + v5 + 8) ) /*0x7cf848*/
    {
      if ( (unsigned int)aP1 >= 0x20 ) /*0x7cf850*/
      {
        v10 = (char *)aP1->headNode + uniqueId; /*0x7cf87b*/
        v11 = ~(0x80000000 >> ((_BYTE)aP1 - 32)); /*0x7cf87f*/
        *(_DWORD *)(uniqueId + 4 * v4 + 196) &= v11; /*0x7cf881*/
        v9 = (*v10)-- == 1; /*0x7cf888*/
        if ( v9 ) /*0x7cf88a*/
          *(_DWORD *)&aP0->__pad_0[4] &= v11; /*0x7cf88f*/
      }
      else
      {
        v7 = (char *)aP1->headNode + uniqueId; /*0x7cf859*/
        v8 = ~(0x80000000 >> (char)aP1); /*0x7cf85d*/
        *(_DWORD *)(uniqueId + 4 * v4 + 68) &= v8; /*0x7cf85f*/
        v9 = (*v7)-- == 1; /*0x7cf863*/
        if ( v9 ) /*0x7cf865*/
          *(_DWORD *)aP0->__pad_0 &= v8; /*0x7cf86a*/
      }
    }
    *(_DWORD *)(*(int *)((char *)p_INIClass_field_3C + v5 + 8) + 4) = *(int *)((char *)p_INIClass_field_3C + v5 + 4); /*0x7cf89a*/
    v12 = *(int *)((char *)p_INIClass_field_3C + v5 + 4); /*0x7cf89d*/
    v13 = *(int *)((char *)p_INIClass_field_3C + v5 + 8); /*0x7cf8a1*/
    v5 += v25; /*0x7cf8a5*/
    *(_DWORD *)(v12 + 8) = v13; /*0x7cf8a8*/
    v24 = v5; /*0x7cf8ab*/
  }
  v14 = (v5 >> 4) - 1; /*0x7cf8b3*/
  if ( v14 > 0x3F ) /*0x7cf8b7*/
    v14 = 63; /*0x7cf8bb*/
  if ( (unknown38 & 1) == 0 ) /*0x7cf8c5*/
  {
    v26 = (int *)((char *)p_INIClass_field_3C - unknown38); /*0x7cf8d6*/
    v15 = (unknown38 >> 4) - 1; /*0x7cf8d9*/
    aP1 = (INIClass *)v15; /*0x7cf8dd*/
    if ( v15 > 0x3F ) /*0x7cf8e0*/
    {
      aP1 = (INIClass *)63; /*0x7cf8e2*/
      v15 = 63; /*0x7cf8e5*/
    }
    v5 += unknown38; /*0x7cf8e7*/
    v24 = v5; /*0x7cf8ec*/
    v14 = (v5 >> 4) - 1; /*0x7cf8f2*/
    if ( v14 > 0x3F ) /*0x7cf8f5*/
      v14 = 63; /*0x7cf8f7*/
    if ( v15 != v14 ) /*0x7cf8fb*/
    {
      if ( v26[1] == v26[2] ) /*0x7cf906*/
      {
        if ( (unsigned int)aP1 >= 0x20 ) /*0x7cf90e*/
        {
          v18 = (char *)aP1->headNode + uniqueId; /*0x7cf939*/
          v19 = ~(0x80000000 >> ((_BYTE)aP1 - 32)); /*0x7cf93d*/
          *(_DWORD *)(uniqueId + 4 * v4 + 196) &= v19; /*0x7cf93f*/
          v9 = (*v18)-- == 1; /*0x7cf946*/
          if ( v9 ) /*0x7cf948*/
            *(_DWORD *)&aP0->__pad_0[4] &= v19; /*0x7cf94d*/
        }
        else
        {
          v16 = (char *)aP1->headNode + uniqueId; /*0x7cf917*/
          v17 = ~(0x80000000 >> (char)aP1); /*0x7cf91b*/
          *(_DWORD *)(uniqueId + 4 * v4 + 68) &= v17; /*0x7cf91d*/
          v9 = (*v16)-- == 1; /*0x7cf921*/
          if ( v9 ) /*0x7cf923*/
            *(_DWORD *)aP0->__pad_0 &= v17; /*0x7cf928*/
        }
      }
      *(_DWORD *)(v26[2] + 4) = v26[1]; /*0x7cf959*/
      *(_DWORD *)(v26[1] + 8) = v26[2]; /*0x7cf965*/
    }
    p_INIClass_field_3C = v26; /*0x7cf968*/
  }
  if ( (unknown38 & 1) != 0 || aP1 != (INIClass *)v14 ) /*0x7cf974*/
  {
    p_INIClass_field_3C[1] = v23[2 * v14 + 1]; /*0x7cf983*/
    v20 = &v23[2 * v14]; /*0x7cf989*/
    p_INIClass_field_3C[2] = (int)v20; /*0x7cf98c*/
    v20[1] = p_INIClass_field_3C; /*0x7cf98f*/
    *(_DWORD *)(p_INIClass_field_3C[1] + 8) = p_INIClass_field_3C; /*0x7cf995*/
    if ( p_INIClass_field_3C[1] == p_INIClass_field_3C[2] ) /*0x7cf99e*/
    {
      aP1_3 = *(_BYTE *)(v14 + uniqueId + 4); /*0x7cf9a7*/
      *(_BYTE *)(v14 + uniqueId + 4) = aP1_3 + 1; /*0x7cf9ac*/
      if ( v14 >= 0x20 ) /*0x7cf9b0*/
      {
        if ( !aP1_3 ) /*0x7cf9db*/
          *(_DWORD *)&aP0->__pad_0[4] |= 0x80000000 >> (v14 - 32); /*0x7cf9ea*/
        *(_DWORD *)(uniqueId + 4 * v4 + 196) |= 0x80000000 >> (v14 - 32); /*0x7cf9fe*/
      }
      else
      {
        if ( !aP1_3 ) /*0x7cf9b6*/
          *(_DWORD *)aP0->__pad_0 |= 0x80000000 >> v14; /*0x7cf9c4*/
        *(_DWORD *)(uniqueId + 4 * v4 + 68) |= 0x80000000 >> v14; /*0x7cf9d3*/
      }
      v5 = v24; /*0x7cfa00*/
    }
  }
  result = (_DWORD *)(516 * v4 + uniqueId + 324); /*0x7cfa03*/
  *p_INIClass_field_3C = v5; /*0x7cfa06*/
  *(int *)((char *)p_INIClass_field_3C + v5 - 4) = v5; /*0x7cfa08*/
  v9 = (*v23)-- == 1; /*0x7cfa0c*/
  if ( v9 ) /*0x7cfa0e*/
  {
    if ( !CRTGlobal_B78B90 ) /*0x7cfa1b*/
      goto LABEL_46; /*0x7cfa1b*/
    VirtualFree((LPVOID)(*((_DWORD *)CRTGlobal_B78B90 + 3) + (CRTGlobal_B78B88 << 15)), 0x8000u, 0x4000u); /*0x7cfa3f*/
    *((_DWORD *)CRTGlobal_B78B90 + 2) |= 0x80000000 >> CRTGlobal_B78B88; /*0x7cfa53*/
    *(_DWORD *)(*((_DWORD *)CRTGlobal_B78B90 + 4) + 4 * CRTGlobal_B78B88 + 196) = 0; /*0x7cfa64*/
    --*(_BYTE *)(*((_DWORD *)CRTGlobal_B78B90 + 4) + 67); /*0x7cfa74*/
    v22 = (LPVOID *)CRTGlobal_B78B90; /*0x7cfa77*/
    if ( !*(_BYTE *)(*((_DWORD *)CRTGlobal_B78B90 + 4) + 67) ) /*0x7cfa7f*/
    {
      *((_DWORD *)CRTGlobal_B78B90 + 1) &= ~1u; /*0x7cfa85*/
      v22 = (LPVOID *)CRTGlobal_B78B90; /*0x7cfa89*/
    }
    if ( v22[2] == (LPVOID)-1 ) /*0x7cfa92*/
    {
      VirtualFree(v22[3], 0, 0x8000u); /*0x7cfa9a*/
      HeapFree(hHeap, 0, *((LPVOID *)CRTGlobal_B78B90 + 4)); /*0x7cfaac*/
      memcpy( /*0x7cfad6*/
        CRTGlobal_B78B90,
        (AbstractClass *)((char *)CRTGlobal_B78B90 + 20),
        (size_t)&lp->__pad_0[20 * CRTGlobal_B78B94 - (_DWORD)CRTGlobal_B78B90 - 20]);
      result = aP0->__pad_0; /*0x7cfadb*/
      --CRTGlobal_B78B94; /*0x7cfae1*/
      if ( aP0 > CRTGlobal_B78B90 ) /*0x7cfaed*/
        result = &aP0[-1].uniqueId; /*0x7cfaef*/
      CRTGlobal_B78B8C = lp; /*0x7cfaf8*/
    }
    else
    {
LABEL_46:
      result = aP0->__pad_0; /*0x7cfb00*/
    }
    CRTGlobal_B78B90 = result; /*0x7cfb03*/
    CRTGlobal_B78B88 = v4; /*0x7cfb08*/
  }
  return result; /*0x7cfb0e*/
}


// ==== 0x007CFB13  ObjectClass::___sbh_alloc_block  this=ObjectClass  sig=csp ====
_DWORD *__cdecl __sbh_alloc_block(IUnknown *aP0)
{
  int v1; // ecx
  unsigned int v2; // esi
  AbstractClass *i; // ebx
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  _DWORD *uniqueId; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int *v14; // edx
  int v15; // ecx
  int v16; // esi
  unsigned int v17; // ebx
  _BYTE *v18; // edi
  unsigned int v19; // ebx
  _BYTE *v20; // edi
  int v21; // ebx
  _DWORD *v22; // ecx
  char v23; // cl
  _DWORD *v24; // edx
  int v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+Ch] [ebp-14h]
  signed int v27; // [esp+10h] [ebp-10h]
  unsigned int v28; // [esp+14h] [ebp-Ch]
  _DWORD *v29; // [esp+14h] [ebp-Ch]
  unsigned int v30; // [esp+18h] [ebp-8h]
  int v31; // [esp+18h] [ebp-8h]
  AbstractClass *v32; // [esp+1Ch] [ebp-4h]
  int v33; // [esp+1Ch] [ebp-4h]
  AbstractClass *aP0a; // [esp+28h] [ebp+8h]

  v32 = (AbstractClass *)((char *)lp + 20 * CRTGlobal_B78B94); /*0x7cfb30*/
  v27 = (unsigned int)&aP0->__pad_10[7] & 0xFFFFFFF0; /*0x7cfb39*/
  v1 = (v27 >> 4) - 1; /*0x7cfb3f*/
  if ( v1 >= 32 ) /*0x7cfb43*/
  {
    v2 = 0; /*0x7cfb59*/
    v28 = 0; /*0x7cfb5d*/
    v30 = 0xFFFFFFFF >> ((v27 >> 4) - 33); /*0x7cfb60*/
  }
  else
  {
    v2 = 0xFFFFFFFF >> v1; /*0x7cfb48*/
    v30 = -1; /*0x7cfb4a*/
    v28 = 0xFFFFFFFF >> v1; /*0x7cfb4e*/
  }
  i = CRTGlobal_B78B8C; /*0x7cfb68*/
  aP0a = CRTGlobal_B78B8C; /*0x7cfb6c*/
  if ( CRTGlobal_B78B8C < (AbstractClass *)((char *)lp + 20 * CRTGlobal_B78B94) ) /*0x7cfb6f*/
  {
    do /*0x7cfb88*/
    {
      if ( v2 & *(_DWORD *)i->__pad_0 | v30 & *(_DWORD *)&i->__pad_0[4] ) /*0x7cfb7b*/
        break; /*0x7cfb7d*/
      i = (AbstractClass *)((char *)i + 20); /*0x7cfb7f*/
      aP0a = i; /*0x7cfb85*/
    }
    while ( i < v32 ); /*0x7cfb88*/
  }
  if ( i == v32 ) /*0x7cfb8d*/
  {
    for ( i = lp; ; i = (AbstractClass *)((char *)i + 20) ) /*0x7cfb8f*/
    {
      v4 = i == CRTGlobal_B78B8C; /*0x7cfb91*/
      aP0a = i; /*0x7cfb93*/
      if ( i >= CRTGlobal_B78B8C ) /*0x7cfb96*/
        break; /*0x7cfb96*/
      if ( v2 & *(_DWORD *)i->__pad_0 | v30 & *(_DWORD *)&i->__pad_0[4] ) /*0x7cfba2*/
      {
        v4 = i == CRTGlobal_B78B8C; /*0x7cfbab*/
        break; /*0x7cfbab*/
      }
    }
    if ( v4 ) /*0x7cfbad*/
    {
      while ( 1 ) /*0x7cfbaf*/
      {
        v5 = i == v32; /*0x7cfbaf*/
        if ( i >= v32 ) /*0x7cfbb2*/
          break; /*0x7cfbb2*/
        if ( *(_DWORD *)&i->__pad_0[8] ) /*0x7cfbb4*/
        {
          v5 = i == v32; /*0x7cfbc2*/
          break; /*0x7cfbc2*/
        }
        i = (AbstractClass *)((char *)i + 20); /*0x7cfbba*/
        aP0a = i; /*0x7cfbbd*/
      }
      if ( v5 ) /*0x7cfbc5*/
      {
        for ( i = lp; ; i = (AbstractClass *)((char *)i + 20) ) /*0x7cfbc7*/
        {
          v6 = i == CRTGlobal_B78B8C; /*0x7cfbc9*/
          aP0a = i; /*0x7cfbcb*/
          if ( i >= CRTGlobal_B78B8C ) /*0x7cfbce*/
            break; /*0x7cfbce*/
          if ( *(_DWORD *)&i->__pad_0[8] ) /*0x7cfbd0*/
          {
            v6 = i == CRTGlobal_B78B8C; /*0x7cfbdb*/
            break; /*0x7cfbdb*/
          }
        }
        if ( v6 ) /*0x7cfbdd*/
        {
          i = (AbstractClass *)__sbh_alloc_new_region(); /*0x7cfbe4*/
          aP0a = i; /*0x7cfbe8*/
          if ( !i ) /*0x7cfbeb*/
            return 0; /*0x7cfbeb*/
        }
      }
      *(_DWORD *)i->uniqueId = __sbh_alloc_new_group(i); /*0x7cfbf7*/
      if ( *(_DWORD *)i->uniqueId == -1 ) /*0x7cfbff*/
        return 0; /*0x7cfc03*/
    }
  }
  CRTGlobal_B78B8C = i; /*0x7cfc08*/
  uniqueId = (_DWORD *)i->uniqueId; /*0x7cfc0e*/
  v9 = *uniqueId; /*0x7cfc11*/
  v33 = *uniqueId; /*0x7cfc16*/
  if ( *uniqueId == -1 || !(v2 & uniqueId[v9 + 17] | v30 & uniqueId[v9 + 49]) ) /*0x7cfc2b*/
  {
    v33 = 0; /*0x7cfc3e*/
    v10 = uniqueId + 17; /*0x7cfc42*/
    v2 = v28; /*0x7cfc47*/
    if ( !(v28 & uniqueId[17] | v30 & uniqueId[49]) ) /*0x7cfc45*/
    {
      do /*0x7cfc61*/
      {
        v11 = v10[33]; /*0x7cfc4c*/
        ++v33; /*0x7cfc52*/
        ++v10; /*0x7cfc58*/
      }
      while ( !(*v10 & v28 | v30 & v11) ); /*0x7cfc61*/
    }
    v9 = v33; /*0x7cfc63*/
  }
  v12 = 0; /*0x7cfc68*/
  v29 = &uniqueId[129 * v9 + 81]; /*0x7cfc77*/
  v13 = v2 & uniqueId[v9 + 17]; /*0x7cfc7e*/
  if ( !v13 ) /*0x7cfc80*/
  {
    v13 = v30 & uniqueId[v9 + 49]; /*0x7cfc8b*/
    v12 = 32; /*0x7cfc8e*/
  }
  while ( v13 >= 0 ) /*0x7cfc91*/
  {
    v13 *= 2; /*0x7cfc93*/
    ++v12; /*0x7cfc95*/
  }
  v14 = (int *)v29[2 * v12 + 1]; /*0x7cfc9b*/
  v31 = *v14 - v27; /*0x7cfca6*/
  v15 = v31; /*0x7cfca1*/
  v16 = (v31 >> 4) - 1; /*0x7cfcac*/
  if ( v16 > 63 ) /*0x7cfcb0*/
    v16 = 63; /*0x7cfcb4*/
  if ( v16 == v12 ) /*0x7cfcb7*/
    goto LABEL_57; /*0x7cfcb7*/
  if ( v14[1] != v14[2] ) /*0x7cfcc3*/
    goto LABEL_47; /*0x7cfcc3*/
  if ( v12 >= 32 ) /*0x7cfcc8*/
  {
    v19 = 0x80000000 >> (v12 - 32); /*0x7cfcfd*/
    v20 = (char *)uniqueId + v12 + 4; /*0x7cfd02*/
    v21 = ~v19; /*0x7cfd0d*/
    uniqueId[v33 + 49] &= v21; /*0x7cfd0f*/
    v4 = (*v20)-- == 1; /*0x7cfd11*/
    v26 = v21; /*0x7cfd13*/
    if ( v4 ) /*0x7cfd16*/
    {
      i = aP0a; /*0x7cfd18*/
      *(_DWORD *)&aP0a->__pad_0[4] &= v26; /*0x7cfd1e*/
      goto LABEL_47; /*0x7cfd21*/
    }
  }
  else
  {
    v17 = 0x80000000 >> v12; /*0x7cfcd1*/
    v18 = (char *)uniqueId + v12 + 4; /*0x7cfcd6*/
    v25 = ~v17; /*0x7cfcdc*/
    uniqueId[v33 + 17] &= ~v17; /*0x7cfce3*/
    v4 = (*v18)-- == 1; /*0x7cfce7*/
    if ( v4 ) /*0x7cfce9*/
    {
      i = aP0a; /*0x7cfceb*/
      *(_DWORD *)aP0a->__pad_0 &= v25; /*0x7cfcf1*/
      goto LABEL_47; /*0x7cfcf3*/
    }
  }
  i = aP0a; /*0x7cfd23*/
LABEL_47:
  *(_DWORD *)(v14[2] + 4) = v14[1]; /*0x7cfd26*/
  *(_DWORD *)(v14[1] + 8) = v14[2]; /*0x7cfd39*/
  if ( v31 ) /*0x7cfd3c*/
  {
    v22 = &v29[2 * v16]; /*0x7cfd49*/
    v14[1] = v22[1]; /*0x7cfd4c*/
    v14[2] = (int)v22; /*0x7cfd4f*/
    v22[1] = v14; /*0x7cfd52*/
    *(_DWORD *)(v14[1] + 8) = v14; /*0x7cfd58*/
    if ( v14[1] == v14[2] ) /*0x7cfd61*/
    {
      v23 = *((_BYTE *)uniqueId + v16 + 4); /*0x7cfd63*/
      if ( v16 >= 32 ) /*0x7cfd6d*/
      {
        *((_BYTE *)uniqueId + v16 + 4) = v23 + 1; /*0x7cfd9e*/
        if ( !v23 ) /*0x7cfda2*/
          *(_DWORD *)&i->__pad_0[4] |= 0x80000000 >> (v16 - 32); /*0x7cfdae*/
        uniqueId[v33 + 49] |= 0x80000000 >> (v16 - 32); /*0x7cfdc5*/
      }
      else
      {
        *((_BYTE *)uniqueId + v16 + 4) = v23 + 1; /*0x7cfd75*/
        if ( !v23 ) /*0x7cfd79*/
          *(_DWORD *)i->__pad_0 |= 0x80000000 >> v16; /*0x7cfd84*/
        uniqueId[v33 + 17] |= 0x80000000 >> v16; /*0x7cfd92*/
      }
    }
    v15 = v31; /*0x7cfdc7*/
LABEL_57:
    if ( v15 ) /*0x7cfdcc*/
    {
      *v14 = v15; /*0x7cfdce*/
      *(int *)((char *)v14 + v15 - 4) = v15; /*0x7cfdd0*/
    }
    goto LABEL_60; /*0x7cfdd4*/
  }
  v15 = 0; /*0x7cfdd6*/
LABEL_60:
  v24 = (int *)((char *)v14 + v15); /*0x7cfdd9*/
  *v24 = v27 + 1; /*0x7cfde1*/
  *(_DWORD *)((char *)v24 + v27 - 4) = v27 + 1; /*0x7cfde3*/
  v4 = (*v29)++ == 0; /*0x7cfdec*/
  if ( v4 && i == CRTGlobal_B78B90 && v33 == CRTGlobal_B78B88 ) /*0x7cfe06*/
    CRTGlobal_B78B90 = 0; /*0x7cfe08*/
  *uniqueId = v33; /*0x7cfe12*/
  return v24 + 1; /*0x7cfe17*/
}


// ==== 0x007CFE1C  ObjectClass::___sbh_alloc_new_region  this=ObjectClass  sig=csp ====
char *__sbh_alloc_new_region()
{
  int v0; // eax
  void *v1; // eax
  char *v2; // esi
  LPVOID v3; // eax
  LPVOID v4; // eax

  v0 = CRTGlobal_B78B94; /*0x7cfe1c*/
  if ( CRTGlobal_B78B94 == CRTGlobal_B78B84 ) /*0x7cfe2d*/
  {
    v1 = HeapReAlloc(hHeap, 0, lp, 4 * (5 * CRTGlobal_B78B84 + 80)); /*0x7cfe44*/
    if ( !v1 ) /*0x7cfe4c*/
      return 0; /*0x7cfeb1*/
    CRTGlobal_B78B84 += 16; /*0x7cfe4e*/
    lp = v1; /*0x7cfe55*/
    v0 = CRTGlobal_B78B94; /*0x7cfe5a*/
  }
  v2 = (char *)lp + 20 * v0; /*0x7cfe75*/
  v3 = HeapAlloc(hHeap, 8u, 0x41C4u); /*0x7cfe78*/
  *((_DWORD *)v2 + 4) = v3; /*0x7cfe80*/
  if ( !v3 ) /*0x7cfe83*/
    return 0; /*0x7cfe83*/
  v4 = VirtualAlloc(0, 0x100000u, 0x2000u, 4u); /*0x7cfe92*/
  *((_DWORD *)v2 + 3) = v4; /*0x7cfe9a*/
  if ( !v4 ) /*0x7cfe9d*/
  {
    HeapFree(hHeap, 0, *((LPVOID *)v2 + 4)); /*0x7cfea9*/
    return 0; /*0x7cfea9*/
  }
  *((_DWORD *)v2 + 2) = -1; /*0x7cfeb3*/
  *(_DWORD *)v2 = 0; /*0x7cfeb7*/
  *((_DWORD *)v2 + 1) = 0; /*0x7cfeb9*/
  ++CRTGlobal_B78B94; /*0x7cfebc*/
  **((_DWORD **)v2 + 4) = -1; /*0x7cfec5*/
  return v2; /*0x7cfeca*/
}


// ==== 0x007CFECD  ObjectClass::___sbh_alloc_new_group  this=ObjectClass  sig=csp ====
int __cdecl __sbh_alloc_new_group(AbstractClass *aP0)
{
  int uniqueId; // esi
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v8; // eax

  uniqueId = aP0->uniqueId; /*0x7cfed7*/
  v2 = *(_DWORD *)&aP0->__pad_0[8]; /*0x7cfeda*/
  v3 = 0; /*0x7cfedd*/
  while ( v2 >= 0 ) /*0x7cfee1*/
  {
    v2 *= 2; /*0x7cfee3*/
    ++v3; /*0x7cfee5*/
  }
  v4 = 63; /*0x7cfef2*/
  v5 = 516 * v3 + uniqueId + 324; /*0x7cfef3*/
  do /*0x7cff07*/
  {
    *(_DWORD *)(v5 + 8) = v5; /*0x7cfefd*/
    *(_DWORD *)(v5 + 4) = v5; /*0x7cff00*/
    v5 += 8; /*0x7cff03*/
    --v4; /*0x7cff06*/
  }
  while ( v4 ); /*0x7cff07*/
  v6 = (_DWORD *)(*(_DWORD *)&aP0->__pad_0[12] + (v3 << 15)); /*0x7cff10*/
  if ( !VirtualAlloc(v6, 0x8000u, 0x1000u, 4u) ) /*0x7cff1e*/
    return -1; /*0x7cff28*/
  if ( v6 < v6 + 7168 ) /*0x7cff38*/
  {
    v8 = v6 + 4; /*0x7cff3a*/
    do /*0x7cff74*/
    {
      *(v8 - 2) = -1; /*0x7cff3d*/
      v8[1019] = -1; /*0x7cff41*/
      *(v8 - 1) = 4080; /*0x7cff4e*/
      *v8 = v8 + 1023; /*0x7cff55*/
      v8[1] = v8 - 1025; /*0x7cff5d*/
      v8[1018] = 4080; /*0x7cff60*/
      v8 += 1024; /*0x7cff6a*/
    }
    while ( v8 - 4 <= v6 + 7168 ); /*0x7cff74*/
  }
  *(_DWORD *)(516 * v3 + uniqueId + 832) = v6 + 3; /*0x7cff84*/
  v6[5] = 516 * v3 + uniqueId + 828; /*0x7cff87*/
  *(_DWORD *)(516 * v3 + uniqueId + 836) = v6 + 7171; /*0x7cff8d*/
  v6[7172] = 516 * v3 + uniqueId + 828; /*0x7cff90*/
  *(_DWORD *)(uniqueId + 4 * v3 + 68) = 0; /*0x7cff93*/
  *(_DWORD *)(uniqueId + 4 * v3 + 196) = 1; /*0x7cff98*/
  if ( (*(_BYTE *)(uniqueId + 67))++ == 0 ) /*0x7cffa6*/
    *(_DWORD *)&aP0->__pad_0[4] |= 1u; /*0x7cffb0*/
  *(_DWORD *)&aP0->__pad_0[8] &= ~(0x80000000 >> v3); /*0x7cffbe*/
  return v3; /*0x7cffc3*/
}


// ==== 0x007CFFC8  ObjectClass::___sbh_resize_block  this=ObjectClass  sig=csp ====
int __cdecl __sbh_resize_block(_DWORD *a0, CCINIClass *aP1, AbstractClass *aP2)
{
  int v3; // eax
  signed int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ebx
  char *v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _BYTE *v11; // ecx
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // ebx
  _BYTE *v15; // ecx
  int v16; // ebx
  unsigned int v17; // edi
  char *v18; // ecx
  _DWORD *v19; // eax
  char v20; // cl
  AbstractClass *v21; // edx
  char *v22; // eax
  int v24; // ecx
  char *v25; // ebx
  unsigned int v26; // esi
  unsigned int v27; // esi
  unsigned int v28; // ebx
  _BYTE *v29; // esi
  int v30; // ebx
  _BYTE *v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  _DWORD *v34; // eax
  char v35; // cl
  int v36; // [esp+Ch] [ebp-Ch]
  int v37; // [esp+10h] [ebp-8h]
  int v38; // [esp+14h] [ebp-4h]
  int v39; // [esp+14h] [ebp-4h]
  CCINIClass *aP1a; // [esp+24h] [ebp+Ch]
  char aP1_3; // [esp+27h] [ebp+Fh]
  AbstractClass *aP2a; // [esp+28h] [ebp+10h]
  AbstractClass *aP2c; // [esp+28h] [ebp+10h]
  int aP2b; // [esp+28h] [ebp+10h]
  char aP2_3; // [esp+2Bh] [ebp+13h]

  v3 = a0[4]; /*0x7cffe2*/
  v4 = ((unsigned int)&aP2->abstractFlags + 3) & 0xFFFFFFF0; /*0x7cffe5*/
  v5 = ((unsigned int)aP1 - a0[3]) >> 15; /*0x7cffe8*/
  v36 = 516 * v5 + v3 + 324; /*0x7cfffa*/
  v6 = aP1[-1].unknown54 - 1; /*0x7d0000*/
  aP2a = (AbstractClass *)v6; /*0x7d0003*/
  v7 = *(_DWORD *)&aP1->__pad_0[v6 - 4]; /*0x7d0006*/
  v8 = &aP1->__pad_0[v6 - 4]; /*0x7d000a*/
  v38 = v7; /*0x7d000e*/
  if ( v4 <= v6 ) /*0x7d0011*/
  {
    if ( v4 < v6 ) /*0x7d0176*/
    {
      aP2b = v6 - v4; /*0x7d017f*/
      v24 = v4 + 1; /*0x7d0182*/
      aP1[-1].unknown54 = v4 + 1; /*0x7d0185*/
      v25 = &aP1->__pad_0[v4 - 4]; /*0x7d0188*/
      aP1a = (CCINIClass *)v25; /*0x7d018f*/
      v26 = (aP2b >> 4) - 1; /*0x7d0195*/
      *((_DWORD *)v25 - 1) = v24; /*0x7d0196*/
      if ( v26 > 0x3F ) /*0x7d019c*/
        v26 = 63; /*0x7d01a0*/
      if ( (v38 & 1) == 0 ) /*0x7d01a5*/
      {
        v27 = (v38 >> 4) - 1; /*0x7d01b1*/
        if ( v27 > 0x3F ) /*0x7d01b5*/
          v27 = 63; /*0x7d01b9*/
        if ( *((_DWORD *)v8 + 1) == *((_DWORD *)v8 + 2) ) /*0x7d01c0*/
        {
          if ( v27 >= 0x20 ) /*0x7d01c5*/
          {
            v31 = (_BYTE *)(v27 + v3 + 4); /*0x7d01ef*/
            v32 = ~(0x80000000 >> (v27 - 32)); /*0x7d01f3*/
            *(_DWORD *)(v3 + 4 * v5 + 196) &= v32; /*0x7d01f5*/
            v13 = (*v31)-- == 1; /*0x7d01fc*/
            if ( v13 ) /*0x7d01fe*/
              a0[1] &= v32; /*0x7d0203*/
          }
          else
          {
            v28 = 0x80000000 >> v27; /*0x7d01ce*/
            v29 = (_BYTE *)(v27 + v3 + 4); /*0x7d01d0*/
            v30 = ~v28; /*0x7d01d4*/
            *(_DWORD *)(v3 + 4 * v5 + 68) &= v30; /*0x7d01d6*/
            v13 = (*v29)-- == 1; /*0x7d01da*/
            if ( v13 ) /*0x7d01dc*/
              *a0 &= v30; /*0x7d01e1*/
          }
          v25 = (char *)aP1a; /*0x7d0206*/
        }
        *(_DWORD *)(*((_DWORD *)v8 + 2) + 4) = *((_DWORD *)v8 + 1); /*0x7d020f*/
        *(_DWORD *)(*((_DWORD *)v8 + 1) + 8) = *((_DWORD *)v8 + 2); /*0x7d0218*/
        aP2b += v38; /*0x7d0221*/
        v26 = (aP2b >> 4) - 1; /*0x7d0227*/
        if ( v26 > 0x3F ) /*0x7d022b*/
          v26 = 63; /*0x7d022f*/
      }
      v33 = v36 + 8 * v26; /*0x7d0237*/
      *((_DWORD *)v25 + 1) = *(_DWORD *)(v33 + 4); /*0x7d023a*/
      *((_DWORD *)v25 + 2) = v33; /*0x7d023d*/
      *(_DWORD *)(v33 + 4) = v25; /*0x7d0240*/
      *(_DWORD *)(*((_DWORD *)v25 + 1) + 8) = v25; /*0x7d0246*/
      if ( *((_DWORD *)v25 + 1) == *((_DWORD *)v25 + 2) ) /*0x7d024f*/
      {
        aP1_3 = *(_BYTE *)(v26 + v3 + 4); /*0x7d0258*/
        *(_BYTE *)(v26 + v3 + 4) = aP1_3 + 1; /*0x7d025d*/
        if ( v26 >= 0x20 ) /*0x7d0261*/
        {
          if ( !aP1_3 ) /*0x7d0288*/
            a0[1] |= 0x80000000 >> (v26 - 32); /*0x7d0297*/
          v34 = (_DWORD *)(v3 + 4 * v5 + 196); /*0x7d029a*/
          v35 = v26 - 32; /*0x7d02a1*/
        }
        else
        {
          if ( !aP1_3 ) /*0x7d0267*/
            *a0 |= 0x80000000 >> v26; /*0x7d0275*/
          v34 = (_DWORD *)(v3 + 4 * v5 + 68); /*0x7d0277*/
          v35 = v26; /*0x7d0280*/
        }
        *v34 |= 0x80000000 >> v35; /*0x7d02ab*/
      }
      *(_DWORD *)v25 = aP2b; /*0x7d02b0*/
      *(_DWORD *)&v25[aP2b - 4] = aP2b; /*0x7d02b2*/
    }
  }
  else
  {
    if ( (v7 & 1) != 0 || v4 > v6 + v7 ) /*0x7d0024*/
      return 0; /*0x7d0171*/
    v9 = (v7 >> 4) - 1; /*0x7d0030*/
    v37 = v9; /*0x7d0034*/
    if ( v9 > 0x3F ) /*0x7d0037*/
    {
      v9 = 63; /*0x7d003b*/
      v37 = 63; /*0x7d003c*/
    }
    if ( *((_DWORD *)v8 + 1) == *((_DWORD *)v8 + 2) ) /*0x7d0045*/
    {
      if ( v9 >= 0x20 ) /*0x7d004a*/
      {
        v14 = 0x80000000 >> (v9 - 32); /*0x7d0073*/
        v15 = (_BYTE *)(v37 + v3 + 4); /*0x7d0078*/
        v16 = ~v14; /*0x7d007c*/
        *(_DWORD *)(v3 + 4 * v5 + 196) &= v16; /*0x7d007e*/
        v13 = (*v15)-- == 1; /*0x7d0085*/
        if ( v13 ) /*0x7d0087*/
          a0[1] &= v16; /*0x7d008c*/
      }
      else
      {
        v10 = 0x80000000 >> v9; /*0x7d0051*/
        v11 = (_BYTE *)(v37 + v3 + 4); /*0x7d0056*/
        v12 = ~v10; /*0x7d005a*/
        *(_DWORD *)(v3 + 4 * v5 + 68) &= v12; /*0x7d005c*/
        v13 = (*v11)-- == 1; /*0x7d0060*/
        if ( v13 ) /*0x7d0062*/
          *a0 &= v12; /*0x7d0067*/
      }
    }
    *(_DWORD *)(*((_DWORD *)v8 + 2) + 4) = *((_DWORD *)v8 + 1); /*0x7d0095*/
    *(_DWORD *)(*((_DWORD *)v8 + 1) + 8) = *((_DWORD *)v8 + 2); /*0x7d009e*/
    v39 = (int)&aP2a->__pad_0[v38 - v4]; /*0x7d00a6*/
    if ( v39 <= 0 ) /*0x7d00ad*/
    {
      v21 = (AbstractClass *)aP1; /*0x7d015d*/
    }
    else
    {
      v17 = (v39 >> 4) - 1; /*0x7d00bc*/
      v18 = &aP1->__pad_0[v4 - 4]; /*0x7d00bd*/
      if ( v17 > 0x3F ) /*0x7d00c4*/
        v17 = 63; /*0x7d00c8*/
      aP2c = (AbstractClass *)(v36 + 8 * v17); /*0x7d00cf*/
      *(_DWORD *)&aP1->__pad_0[v4] = *(_DWORD *)&aP2c->__pad_0[4]; /*0x7d00d5*/
      *((_DWORD *)v18 + 2) = aP2c; /*0x7d00db*/
      *(_DWORD *)&aP2c->__pad_0[4] = v18; /*0x7d00de*/
      *(_DWORD *)(*(_DWORD *)&aP1->__pad_0[v4] + 8) = &aP1->__pad_0[v4 - 4]; /*0x7d00e4*/
      if ( *(_DWORD *)&aP1->__pad_0[v4] == *(int *)((char *)aP1->headNode + v4) ) /*0x7d00ed*/
      {
        aP2_3 = *(_BYTE *)(v17 + v3 + 4); /*0x7d00f6*/
        *(_BYTE *)(v17 + v3 + 4) = aP2_3 + 1; /*0x7d00fb*/
        if ( v17 >= 0x20 ) /*0x7d00ff*/
        {
          if ( !aP2_3 ) /*0x7d0126*/
            a0[1] |= 0x80000000 >> (v17 - 32); /*0x7d0135*/
          v19 = (_DWORD *)(v3 + 4 * v5 + 196); /*0x7d0138*/
          v20 = v17 - 32; /*0x7d013f*/
        }
        else
        {
          if ( !aP2_3 ) /*0x7d0105*/
            *a0 |= 0x80000000 >> v17; /*0x7d0113*/
          v19 = (_DWORD *)(v3 + 4 * v5 + 68); /*0x7d0115*/
          v20 = v17; /*0x7d011e*/
        }
        *v19 |= 0x80000000 >> v20; /*0x7d0149*/
      }
      v21 = (AbstractClass *)aP1; /*0x7d014b*/
      v22 = &aP1->__pad_0[v4 - 4]; /*0x7d0151*/
      *(_DWORD *)v22 = v39; /*0x7d0155*/
      *(_DWORD *)&v22[v39 - 4] = v39; /*0x7d0157*/
    }
    v21[-1].NeedsSaveOrLink = (void *)(v4 + 1); /*0x7d0163*/
    *(_DWORD *)&v21->__pad_0[v4 - 8] = v4 + 1; /*0x7d0166*/
  }
  return 1; /*0x7d02b9*/
}

