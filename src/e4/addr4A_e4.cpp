// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A0190
int EnumConnectionsClass::_vt06(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall EnumConnectionsClass::_vt06(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  void *v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int i; // esi
  int v12; // eax
  int v13; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a019a*/
    return -2147467261; /*0x4a019d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a01ad*/
  if ( !v3 ) /*0x4a01b4*/
    return -2147024882; /*0x4a029d*/
  v3[2] = 0; /*0x4a01c8*/
  v3[3] = 0; /*0x4a01cb*/
  *((_BYTE *)v3 + 16) = 1; /*0x4a01ce*/
  *((_BYTE *)v3 + 17) = 0; /*0x4a01d2*/
  v3[1] = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a01d5*/
  if ( v3 + 1 != a1 + 1 ) /*0x4a01db*/
  {
    VectorClass::ClearAndFree2((int)(v3 + 1)); /*0x4a01df*/
    v4 = a1[3]; /*0x4a01e5*/
    v3[3] = v4; /*0x4a01ea*/
    if ( v4 ) /*0x4a01ed*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a01f7*/
      v3[2] = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        v6 = v3[3]; /*0x4a0206*/
        v7 = 0; /*0x4a0209*/
        *((_BYTE *)v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            v8 = (_DWORD *)(a1[2] + 8 * v7); /*0x4a021f*/
            v9 = (_DWORD *)(v3[2] + 8 * v7++); /*0x4a0224*/
            *v9 = *v8; /*0x4a0229*/
            v9[1] = v8[1]; /*0x4a022e*/
          }
          while ( v7 < v3[3] ); /*0x4a0236*/
        }
      }
    }
    else
    {
      v3[2] = 0; /*0x4a023c*/
      *((_BYTE *)v3 + 17) = 0; /*0x4a023f*/
    }
  }
  v3[5] = a1[5]; /*0x4a0249*/
  v3[6] = a1[6]; /*0x4a024f*/
  v3[1] = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0252*/
  v10 = a1[7]; /*0x4a0258*/
  v3[8] = 0; /*0x4a025b*/
  v3[7] = v10; /*0x4a025e*/
  *v3 = &EnumConnectionsClass::`vftable'; /*0x4a0261*/
  for ( i = 0; i < v3[5]; ++i ) /*0x4a026e*/
  {
    v13 = *(_DWORD *)(v3[2] + 8 * i); /*0x4a0276*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a0279*/
  }
  v12 = *v3; /*0x4a0284*/
  v3[8] = 0; /*0x4a0287*/
  (*(void (__stdcall **)(_DWORD *))(v12 + 4))(v3); /*0x4a028a*/
  *a2 = v3; /*0x4a0295*/
  return 0; /*0x4a019c*/
}
}

// 0x4A02B0
namespace gamemd {
unsigned int * sub_4A02B0(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4A02B0(_DWORD *this, _DWORD *a2)
{
  char *v3; // esi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int i; // esi
  int v12; // [esp-4h] [ebp-14h]

  v3 = (char *)(this + 1); /*0x4a02bc*/
  *(this + 2) = 0; /*0x4a02c1*/
  *(this + 3) = 0; /*0x4a02c4*/
  *((_BYTE *)this + 16) = 1; /*0x4a02c7*/
  *((_BYTE *)this + 17) = 0; /*0x4a02cb*/
  *(this + 1) = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a02ce*/
  if ( this + 1 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)(this + 1)); /*0x4a02d8*/
    v4 = a2[2]; /*0x4a02de*/
    *((_DWORD *)v3 + 2) = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a02ec*/
      *((_DWORD *)v3 + 1) = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        v6 = *((_DWORD *)v3 + 2); /*0x4a02fb*/
        v7 = 0; /*0x4a02fe*/
        v3[13] = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            v8 = a2[1]; /*0x4a0308*/
            v9 = *((_DWORD *)v3 + 1); /*0x4a030b*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a0311*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a0318*/
            ++v7; /*0x4a031f*/
          }
          while ( v7 < *((_DWORD *)v3 + 2) ); /*0x4a0322*/
        }
      }
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0; /*0x4a0328*/
      v3[13] = 0; /*0x4a032b*/
    }
  }
  *((_DWORD *)v3 + 4) = a2[4]; /*0x4a0331*/
  *((_DWORD *)v3 + 5) = a2[5]; /*0x4a0337*/
  *(_DWORD *)v3 = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a033a*/
  *(this + 7) = 0; /*0x4a0340*/
  *(this + 8) = 0; /*0x4a0343*/
  *this = &EnumConnectionsClass::`vftable'; /*0x4a0346*/
  for ( i = 0; i < *(this + 5); ++i ) /*0x4a0353*/
  {
    v12 = *(_DWORD *)(*(this + 2) + 8 * i); /*0x4a035b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this; /*0x4a036b*/
}
}
} // namespace gamemd

// 0x4A0380
namespace gamemd {
unsigned int * sub_4A0380(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4A0380(_DWORD *this, _DWORD *a2)
{
  char *v3; // esi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int i; // esi
  int v13; // [esp-4h] [ebp-14h]

  v3 = (char *)(this + 1); /*0x4a038f*/
  *(this + 2) = 0; /*0x4a0394*/
  *(this + 3) = 0; /*0x4a0397*/
  *((_BYTE *)this + 16) = 1; /*0x4a039a*/
  *((_BYTE *)this + 17) = 0; /*0x4a039e*/
  *(this + 1) = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a03a1*/
  if ( this + 1 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)(this + 1)); /*0x4a03ab*/
    v4 = a2[3]; /*0x4a03b1*/
    *((_DWORD *)v3 + 2) = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x4a03c3*/
      *((_DWORD *)v3 + 1) = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        v6 = *((_DWORD *)v3 + 2); /*0x4a03d2*/
        v7 = 0; /*0x4a03d5*/
        v3[13] = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            v8 = a2[2]; /*0x4a03df*/
            v9 = *((_DWORD *)v3 + 1); /*0x4a03e2*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a03e8*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a03ef*/
            ++v7; /*0x4a03f6*/
          }
          while ( v7 < *((_DWORD *)v3 + 2) ); /*0x4a03f9*/
        }
      }
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0; /*0x4a03ff*/
      v3[13] = 0; /*0x4a0402*/
    }
  }
  *((_DWORD *)v3 + 4) = a2[5]; /*0x4a040c*/
  *((_DWORD *)v3 + 5) = a2[6]; /*0x4a0412*/
  *(_DWORD *)v3 = &DynamicVectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0415*/
  v10 = a2[7]; /*0x4a041b*/
  *(this + 8) = 0; /*0x4a041e*/
  *(this + 7) = v10; /*0x4a0421*/
  *this = &EnumConnectionsClass::`vftable'; /*0x4a0424*/
  for ( i = 0; i < *(this + 5); ++i ) /*0x4a0431*/
  {
    v13 = *(_DWORD *)(*(this + 2) + 8 * i); /*0x4a0439*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this; /*0x4a0449*/
}
}
} // namespace gamemd

// 0x4A0450
namespace gamemd {
void sub_4A0450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4A0450(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0457*/
  for ( *this = &EnumConnectionsClass::`vftable'; v2 < *(this + 5); ++v2 ) /*0x4a0464*/
  {
    v6 = *(_DWORD *)(*(this + 2) + 8 * v2); /*0x4a046c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a046f*/
  }
  v3 = *(this + 1); /*0x4a047a*/
  v4 = this + 1; /*0x4a047d*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x4a0482*/
  v5 = (void *)v4[1]; /*0x4a0485*/
  *v4 = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a0488*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x4a0492*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0498*/
    v4[1] = 0; /*0x4a04a0*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x4a04a3*/
  v4[2] = 0; /*0x4a04a6*/
}
}
} // namespace gamemd

// 0x4A08D0
namespace gamemd {
void sub_4A08D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4A08D0(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax

  v2 = *(this + 6); /*0x4a08d4*/
  *this = &ConnectionPointClass::`vftable'; /*0x4a08d7*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a08e0*/
  v3 = *(this + 7); /*0x4a08e3*/
  v4 = this + 7; /*0x4a08e6*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x4a08eb*/
  v5 = (void *)v4[1]; /*0x4a08ee*/
  *v4 = &VectorClass<tagCONNECTDATA>::`vftable'; /*0x4a08f5*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x4a08fd*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0903*/
    v4[1] = 0; /*0x4a090b*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x4a090e*/
  v4[2] = 0; /*0x4a0911*/
}
}
} // namespace gamemd

// 0x4A0B20
int EnumConnectionPointsClass::_vt06(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall EnumConnectionPointsClass::_vt06(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v9; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x4a0b3d*/
  if ( !v3 ) /*0x4a0b44*/
    return -2147024882; /*0x4a0c13*/
  v3[1] = a1[1]; /*0x4a0b59*/
  v3[2] = 0; /*0x4a0b5c*/
  v3[4] = 0; /*0x4a0b61*/
  v3[5] = 0; /*0x4a0b64*/
  *((_BYTE *)v3 + 24) = 1; /*0x4a0b67*/
  *((_BYTE *)v3 + 25) = 0; /*0x4a0b6b*/
  v3[3] = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0b6e*/
  if ( v3 + 3 != a1 + 3 ) /*0x4a0b74*/
  {
    VectorClass::CleanupTyped((int)(v3 + 3)); /*0x4a0b78*/
    v4 = a1[5]; /*0x4a0b7e*/
    v3[5] = v4; /*0x4a0b83*/
    if ( v4 ) /*0x4a0b86*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0b90*/
      v3[4] = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        v6 = v3[5]; /*0x4a0b9f*/
        v7 = 0; /*0x4a0ba2*/
        *((_BYTE *)v3 + 25) = 1; /*0x4a0ba6*/
        if ( v6 > 0 ) /*0x4a0baa*/
        {
          do /*0x4a0bbe*/
          {
            *(_DWORD *)(v3[4] + 4 * v7) = *(_DWORD *)(a1[4] + 4 * v7); /*0x4a0bb5*/
            ++v7; /*0x4a0bbb*/
          }
          while ( v7 < v3[5] ); /*0x4a0bbe*/
        }
      }
    }
    else
    {
      v3[4] = 0; /*0x4a0bc2*/
      *((_BYTE *)v3 + 25) = 0; /*0x4a0bc5*/
    }
  }
  v3[7] = a1[7]; /*0x4a0bcb*/
  v3[8] = a1[8]; /*0x4a0bd1*/
  v3[3] = &DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0bd4*/
  *v3 = &EnumConnectionPointsClass::`vftable'; /*0x4a0bda*/
  for ( i = 0; i < v3[7]; ++i ) /*0x4a0be7*/
  {
    v9 = *(_DWORD *)(v3[4] + 4 * i); /*0x4a0bef*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x4a0bf2*/
  }
  (*(void (__stdcall **)(_DWORD *))(*v3 + 4))(v3); /*0x4a0c00*/
  *a2 = v3; /*0x4a0c0b*/
  return 0; /*0x4a0b2c*/
}
}

// 0x4A0CE0
namespace gamemd {
unsigned int * sub_4A0CE0(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4A0CE0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  v3 = this + 3; /*0x4a0cf2*/
  *(this + 1) = a2[1]; /*0x4a0cf5*/
  *(this + 2) = 0; /*0x4a0cf8*/
  *(this + 4) = 0; /*0x4a0cfd*/
  *(this + 5) = 0; /*0x4a0d00*/
  *((_BYTE *)this + 24) = 1; /*0x4a0d03*/
  *((_BYTE *)this + 25) = 0; /*0x4a0d07*/
  *(this + 3) = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0d0a*/
  if ( this + 3 != a2 + 3 ) /*0x4a0d10*/
  {
    VectorClass::CleanupTyped((int)(this + 3)); /*0x4a0d14*/
    v4 = a2[5]; /*0x4a0d1a*/
    *(this + 5) = v4; /*0x4a0d1f*/
    if ( v4 ) /*0x4a0d22*/
    {
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0d2c*/
      *(this + 4) = v5; /*0x4a0d36*/
      if ( v5 ) /*0x4a0d39*/
      {
        v6 = *(this + 5); /*0x4a0d3b*/
        v7 = 0; /*0x4a0d3e*/
        *((_BYTE *)this + 25) = 1; /*0x4a0d42*/
        if ( v6 > 0 ) /*0x4a0d46*/
        {
          do /*0x4a0d5a*/
          {
            *(_DWORD *)(*(this + 4) + 4 * v7) = *(_DWORD *)(a2[4] + 4 * v7); /*0x4a0d51*/
            ++v7; /*0x4a0d57*/
          }
          while ( v7 < *(this + 5) ); /*0x4a0d5a*/
        }
      }
    }
    else
    {
      *(this + 4) = 0; /*0x4a0d5e*/
      *((_BYTE *)this + 25) = 0; /*0x4a0d61*/
    }
  }
  *(this + 7) = a2[7]; /*0x4a0d67*/
  *(this + 8) = a2[8]; /*0x4a0d6d*/
  *v3 = &DynamicVectorClass<IConnectionPoint *>::`vftable'; /*0x4a0d70*/
  *this = &EnumConnectionPointsClass::`vftable'; /*0x4a0d76*/
  for ( i = 0; i < *(this + 7); ++i ) /*0x4a0d83*/
  {
    v10 = *(_DWORD *)(*(this + 4) + 4 * i); /*0x4a0d8b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x4a0d8e*/
  }
  return this; /*0x4a0d9b*/
}
}
} // namespace gamemd

// 0x4A0DB0
namespace gamemd {
void sub_4A0DB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4A0DB0(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0db7*/
  for ( *this = &EnumConnectionPointsClass::`vftable'; v2 < *(this + 7); ++v2 ) /*0x4a0dc4*/
  {
    v6 = *(_DWORD *)(*(this + 4) + 4 * v2); /*0x4a0dcc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4a0dcf*/
  }
  v3 = *(this + 3); /*0x4a0dda*/
  v4 = this + 3; /*0x4a0ddd*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x4a0de2*/
  v5 = (void *)v4[1]; /*0x4a0de5*/
  *v4 = &VectorClass<IConnectionPoint *>::`vftable'; /*0x4a0de8*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x4a0df2*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0df8*/
    v4[1] = 0; /*0x4a0e00*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x4a0e03*/
  v4[2] = 0; /*0x4a0e06*/
}
}
} // namespace gamemd

// 0x4A1540
namespace gamemd {
int sub_4A1540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A1540()
{
  MEMORY[0x89F7E8] = 0; /*0x4a1542*/
  MEMORY[0x89F7EC] = 0; /*0x4a1547*/
  MEMORY[0x89F7F0] = 0; /*0x4a154c*/
  MEMORY[0x89F7F4] = 0; /*0x4a1551*/
  return 0; /*0x4a1556*/
}
}
} // namespace gamemd

// 0x4A1560
namespace gamemd {
void sub_4A1560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A1560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a156c*/
  MEMORY[0x89F800] = Math::Sqrt(v0 + v0); /*0x4a157e*/
}
}
} // namespace gamemd

// 0x4A1590
namespace gamemd {
void sub_4A1590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A1590()
{
  MEMORY[0x89F850] = MEMORY[0x89F800] / 60.0; /*0x4a159c*/
}
}
} // namespace gamemd

// 0x4A15B0
namespace gamemd {
void sub_4A15B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A15B0()
{
  MEMORY[0x89F838] = 1.0 / MEMORY[0x89F850]; /*0x4a15bc*/
}
}
} // namespace gamemd

// 0x4A15D0
namespace gamemd {
void sub_4A15D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A15D0()
{
  MEMORY[0x89F830] = 0.0174532925199433 * 45.0; /*0x4a15dc*/
}
}
} // namespace gamemd

// 0x4A15F0
namespace gamemd {
void sub_4A15F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A15F0()
{
  MEMORY[0x89F808] = 0.0174532925199433 * 60.0; /*0x4a15fc*/
}
}
} // namespace gamemd

// 0x4A1610
namespace gamemd {
void sub_4A1610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A1610()
{
  MEMORY[0x89F7E0] = 0.0174532925199433 * 90.0; /*0x4a161c*/
}
}
} // namespace gamemd

// 0x4A1630
namespace gamemd {
long long sub_4A1630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A1630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89F7E0] - MEMORY[0x89F808]); /*0x4a1642*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F800] * 0.5); /*0x4a1656*/
  MEMORY[0x89F858] = result; /*0x4a165b*/
  return result; /*0x4a1660*/
}
}
} // namespace gamemd

// 0x4A1670
namespace gamemd {
void sub_4A1670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A1670()
{
  MEMORY[0x89F810] = Math::ArcTan((double)MEMORY[0x89F858] * 0.00390625); /*0x4a1687*/
}
}
} // namespace gamemd

// 0x4A16A0
namespace gamemd {
void sub_4A16A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A16A0()
{
  MEMORY[0x89F828] = Math::ArcTan((double)(2 * MEMORY[0x89F858]) / MEMORY[0x89F800]); /*0x4a16c2*/
}
}
} // namespace gamemd

// 0x4A16D0
namespace gamemd {
long long sub_4A16D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A16D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89F858]) + 0.5); /*0x4a16eb*/
  MEMORY[0x89F84C] = result; /*0x4a16f0*/
  return result; /*0x4a16f6*/
}
}
} // namespace gamemd

// 0x4A1700
namespace gamemd {
int sub_4A1700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A1700()
{
  MEMORY[0x89F7F8] = 0; /*0x4a1702*/
  return 0; /*0x4a170e*/
}
}
} // namespace gamemd

// 0x4A1710
namespace gamemd {
int sub_4A1710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A1710()
{
  MEMORY[0x89F818] = 0; /*0x4a1712*/
  MEMORY[0x89F81C] = 0; /*0x4a1717*/
  MEMORY[0x89F820] = 0; /*0x4a171c*/
  return 0; /*0x4a1721*/
}
}
} // namespace gamemd

// 0x4A1730
namespace gamemd {
int sub_4A1730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A1730()
{
  MEMORY[0x89F848] = 0; /*0x4a1735*/
  MEMORY[0x89F840] = 128; /*0x4a173f*/
  MEMORY[0x89F844] = 128; /*0x4a1744*/
  return 128; /*0x4a1749*/
}
}
} // namespace gamemd

// 0x4A2030
namespace gamemd {
int sub_4A2030(Pipe * aP1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4A2030(unsigned int *this, Pipe *aP1, int aP2)
{
  Checksummer::Add_Buffer(this + 3, (unsigned __int8 *)aP1, (IUnknown *)aP2); /*0x4a2042*/
  return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2); /*0x4a2050*/
}
}
} // namespace gamemd

// 0x4A20B0
namespace gamemd {
int sub_4A20B0(Straw * aP1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4A20B0(unsigned int *this, Straw *aP1, int aP2)
{
  IUnknown *v4; // esi

  if ( !aP1 || aP2 < 1 ) /*0x4a20c3*/
    return 0; /*0x4a20e2*/
  v4 = (IUnknown *)Delegate::Invoke(this, (int)aP1, (Straw *)aP2); /*0x4a20cd*/
  Checksummer::Add_Buffer(this + 3, (unsigned __int8 *)aP1, v4); /*0x4a20d4*/
  return (int)v4; /*0x4a20dc*/
}
}
} // namespace gamemd

// 0x4A2140
namespace gamemd {
int sub_4A2140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A2140()
{
  MEMORY[0x89F8E8] = 0; /*0x4a2142*/
  MEMORY[0x89F8EC] = 0; /*0x4a2147*/
  MEMORY[0x89F8F0] = 0; /*0x4a214c*/
  MEMORY[0x89F8F4] = 0; /*0x4a2151*/
  return 0; /*0x4a2156*/
}
}
} // namespace gamemd

// 0x4A2160
namespace gamemd {
void sub_4A2160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A2160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a216c*/
  MEMORY[0x89F900] = Math::Sqrt(v0 + v0); /*0x4a217e*/
}
}
} // namespace gamemd

// 0x4A2190
namespace gamemd {
void sub_4A2190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A2190()
{
  MEMORY[0x89F950] = MEMORY[0x89F900] / 60.0; /*0x4a219c*/
}
}
} // namespace gamemd

// 0x4A21B0
namespace gamemd {
void sub_4A21B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A21B0()
{
  MEMORY[0x89F938] = 1.0 / MEMORY[0x89F950]; /*0x4a21bc*/
}
}
} // namespace gamemd

// 0x4A21D0
namespace gamemd {
void sub_4A21D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A21D0()
{
  MEMORY[0x89F930] = 0.0174532925199433 * 45.0; /*0x4a21dc*/
}
}
} // namespace gamemd

// 0x4A21F0
namespace gamemd {
void sub_4A21F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A21F0()
{
  MEMORY[0x89F908] = 0.0174532925199433 * 60.0; /*0x4a21fc*/
}
}
} // namespace gamemd

// 0x4A2210
namespace gamemd {
void sub_4A2210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A2210()
{
  MEMORY[0x89F8E0] = 0.0174532925199433 * 90.0; /*0x4a221c*/
}
}
} // namespace gamemd

// 0x4A2230
namespace gamemd {
long long sub_4A2230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A2230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89F8E0] - MEMORY[0x89F908]); /*0x4a2242*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F900] * 0.5); /*0x4a2256*/
  MEMORY[0x89F958] = result; /*0x4a225b*/
  return result; /*0x4a2260*/
}
}
} // namespace gamemd

// 0x4A2270
namespace gamemd {
void sub_4A2270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A2270()
{
  MEMORY[0x89F910] = Math::ArcTan((double)MEMORY[0x89F958] * 0.00390625); /*0x4a2287*/
}
}
} // namespace gamemd

// 0x4A22A0
namespace gamemd {
void sub_4A22A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A22A0()
{
  MEMORY[0x89F928] = Math::ArcTan((double)(2 * MEMORY[0x89F958]) / MEMORY[0x89F900]); /*0x4a22c2*/
}
}
} // namespace gamemd

// 0x4A22D0
namespace gamemd {
long long sub_4A22D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A22D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89F958]) + 0.5); /*0x4a22eb*/
  MEMORY[0x89F94C] = result; /*0x4a22f0*/
  return result; /*0x4a22f6*/
}
}
} // namespace gamemd

// 0x4A2300
namespace gamemd {
int sub_4A2300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A2300()
{
  MEMORY[0x89F8F8] = 0; /*0x4a2302*/
  MEMORY[0x89F8FA] = 0; /*0x4a2308*/
  return 0; /*0x4a230e*/
}
}
} // namespace gamemd

// 0x4A2310
namespace gamemd {
int sub_4A2310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A2310()
{
  MEMORY[0x89F918] = 0; /*0x4a2312*/
  MEMORY[0x89F91C] = 0; /*0x4a2317*/
  MEMORY[0x89F920] = 0; /*0x4a231c*/
  return 0; /*0x4a2321*/
}
}
} // namespace gamemd

// 0x4A2330
namespace gamemd {
int sub_4A2330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A2330()
{
  MEMORY[0x89F948] = 0; /*0x4a2335*/
  MEMORY[0x89F940] = 128; /*0x4a233f*/
  MEMORY[0x89F944] = 128; /*0x4a2344*/
  return 128; /*0x4a2349*/
}
}
} // namespace gamemd

// 0x4A2370
namespace gamemd {
int DrawSidebarCreditsTimer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 __userpurge DrawSidebarCreditsTimer@<al>(int a1@<ecx>, int a2@<edi>, char a3)
{
  unsigned __int8 result; // al
  int v5; // kr00_4
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // ecx
  wchar_t *StringCSF; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-Ch] [ebp-30h]
  int v16; // [esp-8h] [ebp-2Ch]
  int v17; // [esp+8h] [ebp-1Ch] BYREF
  int v18[3]; // [esp+Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( a3 || (result = *(_BYTE *)(a1 + 8)) != 0 ) /*0x4a2383*/
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887300] + 124))(MEMORY[0x887300], a2); /*0x4a239f*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(&MEMORY[0x87F7E8]); /*0x4a23b5*/
      v17 = v5 / 2; /*0x4a23c2*/
      v18[0] = 2; /*0x4a23c6*/
      v6 = *(_DWORD *)(a1 + 4); /*0x4a241f*/
      v7 = ((unsigned __int8)MEMORY[0xB0FA1C] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4a2422*/
         | (BYTE1(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
         | (BYTE2(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
      if ( v6 / 3600 > 99 ) /*0x4a243a*/
        v6 = 359999; /*0x4a243c*/
      v8 = v6 / 3600; /*0x4a2454*/
      v9 = 720 * (4 * (v6 / -3600) - v6 / 3600) + v6; /*0x4a246d*/
      v16 = v9 % 60; /*0x4a2488*/
      v15 = v9 / 60; /*0x4a2489*/
      StringCSF = GetStringCSF(g_Str_TXT_TIME_FORMAT_HOURS, 0, aDRa2mdpostCred, 107); /*0x4a2499*/
      swprintf(&MEMORY[0x89F860], (const size_t)StringCSF, (const wchar_t *const)v8, v15, v16); /*0x4a24a4*/
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300]); /*0x4a24c6*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a24db*/
                                  v18,
                                  (size_t)&MEMORY[0x89F860],
                                  MEMORY[0x887300],
                                  v11,
                                  (int)v19,
                                  (int)&v17,
                                  v7,
                                  0,
                                  0x4108u);
      *(_BYTE *)(a1 + 8) = 0; /*0x4a24e3*/
      *(_BYTE *)(a1 + 10) = 0; /*0x4a24e7*/
    }
    else
    {
      if ( *(_BYTE *)(a1 + 10) && MEMORY[0x8871E0]->ScatterSound >= 2 ) /*0x4a250b*/
      {
        if ( *(_BYTE *)(a1 + 9) ) /*0x4a250d*/
          v12 = *(_DWORD *)MEMORY[0x8871E0]->ChuteSound; /*0x4a2526*/
        else
          v12 = *(_DWORD *)(MEMORY[0x8871E0]->ChuteSound + 4); /*0x4a2530*/
        PlayVocClass(v12, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(&MEMORY[0x87F7E8]); /*0x4a253d*/
      v17 = v5 / 2; /*0x4a254e*/
      v18[0] = 2; /*0x4a2552*/
      v14 = ((unsigned __int8)MEMORY[0xB0FA1C] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4a25be*/
          | (BYTE1(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
          | (BYTE2(MEMORY[0xB0FA1C]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300]); /*0x4a25c7*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a25db*/
                                  v18,
                                  (size_t)&off_81FBB4,
                                  MEMORY[0x887300],
                                  v13,
                                  (int)v19,
                                  (int)&v17,
                                  v14,
                                  0,
                                  0x4108u);
      *(_BYTE *)(a1 + 8) = 0; /*0x4a25e3*/
      *(_BYTE *)(a1 + 10) = 0; /*0x4a25e7*/
    }
  }
  return result; /*0x4a24ed*/
}
}
} // namespace gamemd

// 0x4A2880
namespace gamemd {
void sub_4A2880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4A2880(void *this)
{
  int v2; // eax
  void *v3; // ecx
  void *v4; // edx
  int v5; // esi
  ULONG v6; // [esp+0h] [ebp-8h]

  v2 = this->CStreamClass_field_0x08; /*0x4a2886*/
  *(_DWORD *)this = &CStreamClass::`vftable'; /*0x4a2889*/
  this->CStreamClass_field_0x04 = &CStreamClass::`vftable'; /*0x4a2891*/
  if ( v2 ) /*0x4a2898*/
  {
    if ( *((_BYTE *)this + 17) && *((int *)this + 5) > 0 && this->CStreamClass_field_0x08 ) /*0x4a28aa*/
      IStream::Read(*((IStream **)this + 6), *((void **)this + 5), v6); /*0x4a28b4*/
    if ( this->CStreamClass_field_0x08 /*0x4a28da*/
      && (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 32))(this->CStreamClass_field_0x08, 0) >= 0 )
    {
      if ( !this->CStreamClass_field_0x08 ) /*0x4a28dc*/
        WinAPI::Wrapper(-2147467261); /*0x4a28e6*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 2) + 8))(this->CStreamClass_field_0x08); /*0x4a28f1*/
      this->CStreamClass_field_0x08 = 0; /*0x4a28f4*/
    }
  }
  __3_YAXPAX_Z(*((void **)this + 8)); /*0x4a28fb*/
  v3 = (void *)this->CStreamClass_field_0x18; /*0x4a2900*/
  this->CStreamClass_field_0x20 = 0; /*0x4a2903*/
  __3_YAXPAX_Z(v3); /*0x4a2907*/
  v4 = (void *)this->CStreamClass_field_0x1C; /*0x4a290c*/
  this->CStreamClass_field_0x18 = 0; /*0x4a290f*/
  __3_YAXPAX_Z(v4); /*0x4a2913*/
  this->CStreamClass_field_0x1C = 0; /*0x4a2918*/
  v5 = this->CStreamClass_field_0x08; /*0x4a291b*/
  if ( v5 ) /*0x4a2923*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4a2928*/
}
}
} // namespace gamemd

// 0x4A2B60
namespace gamemd {
int CStreamClass___vt03(int a1, char * a2, signed int Size, signed int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall CStreamClass::_vt03(int a1, char *a2, signed int Size, signed int *a4)
{
  int v4; // ebp
  int result; // eax
  _DWORD *v6; // esi
  signed int *v7; // eax
  int v8; // eax
  size_t v9; // edi
  size_t v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // edx
  unsigned __int8 *v14; // ecx
  _BYTE *v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-4h] BYREF

  v4 = Size; /*0x4a2b66*/
  if ( !a2 ) /*0x4a2b6e*/
    return -2147467261; /*0x4a2b72*/
  if ( Size < 0 ) /*0x4a2b7e*/
    return -2147024809; /*0x4a2b82*/
  v6 = (_DWORD *)a1; /*0x4a2b8c*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2b90*/
    return -2147467259; /*0x4a2b99*/
  if ( *(_BYTE *)(a1 + 17) ) /*0x4a2ba3*/
    return -2147467259; /*0x4a2baa*/
  v7 = a4; /*0x4a2bb6*/
  *(_BYTE *)(a1 + 16) = 1; /*0x4a2bba*/
  if ( v7 ) /*0x4a2bc0*/
    *v7 = 0; /*0x4a2bc2*/
  for ( ; v4 > 0; v6[5] = v6[10] ) /*0x4a2bca*/
  {
    v8 = v6[5]; /*0x4a2bd0*/
    if ( v8 > 0 ) /*0x4a2bd5*/
    {
      v9 = v4; /*0x4a2bd9*/
      if ( v4 >= v8 ) /*0x4a2bdb*/
        v9 = v6[5]; /*0x4a2bdd*/
      memcpy(a2, (const void *)(v6[6] + v6[10] - v8), v9); /*0x4a2bf0*/
      v4 -= v9; /*0x4a2c01*/
      v10 = v6[5] - v9; /*0x4a2c03*/
      a2 += v9; /*0x4a2c05*/
      v6[5] = v10; /*0x4a2c09*/
    }
    if ( !v4 ) /*0x4a2c0e*/
      break; /*0x4a2c0e*/
    v11 = v6[2]; /*0x4a2c14*/
    a1 = 0; /*0x4a2c17*/
    if ( !v11 ) /*0x4a2c21*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c28*/
    v12 = v6 + 9; /*0x4a2c34*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6 + 9, 8, &a1); /*0x4a2c3e*/
    if ( result < 0 ) /*0x4a2c43*/
      return result; /*0x4a2c43*/
    if ( a1 != 8 ) /*0x4a2c4a*/
      return -2147467259; /*0x4a2c4a*/
    if ( !v6[2] ) /*0x4a2c50*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c5c*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6[7], *v12, &a1); /*0x4a2c73*/
    if ( result < 0 ) /*0x4a2c78*/
      return result; /*0x4a2c78*/
    v13 = *v12; /*0x4a2c7a*/
    if ( a1 != *v12 ) /*0x4a2c82*/
      return -2147467259; /*0x4a2c82*/
    v15 = (_BYTE *)v6[6]; /*0x4a2c92*/
    v14 = (unsigned __int8 *)v6[7]; /*0x4a2c93*/
    v16 = 0x10000; /*0x4a2c96*/
    DecodeBlockLCW(v14, v13, v15, &v16, 0); /*0x4a2c9e*/
  }
  if ( a4 ) /*0x4a2cb7*/
    *a4 = Size; /*0x4a2cbd*/
  return 0; /*0x4a2b70*/
}
}
} // namespace gamemd

// 0x4A3250
namespace gamemd {
int sub_4A3250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A3250()
{
  MEMORY[0x89F960] = 0; /*0x4a3252*/
  MEMORY[0x89F964] = 0; /*0x4a3257*/
  MEMORY[0x89F968] = 0; /*0x4a325c*/
  MEMORY[0x89F96C] = 0; /*0x4a3261*/
  return 0; /*0x4a3266*/
}
}
} // namespace gamemd

// 0x4A3270
namespace gamemd {
int * sub_4A3270(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_4A3270(int *this, int a2, int a3, int a4)
{
  int *v5; // ebx
  int v6; // ebx
  _DWORD v8[25]; // [esp+10h] [ebp-64h] BYREF

  v5 = this + 28; /*0x4a3287*/
  *this = a4; /*0x4a328f*/
  *(this + 28) = 0; /*0x4a3291*/
  *(this + 29) = 0; /*0x4a3297*/
  memset(this + 1, 0, 0x6Cu); /*0x4a329e*/
  *(this + 1) = 108; /*0x4a32a4*/
  *(this + 2) = 7; /*0x4a32aa*/
  *(this + 27) = dword_81FC60[a4]; /*0x4a32b8*/
  *(this + 4) = a2; /*0x4a32bf*/
  *(this + 3) = a3; /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    *(this + 2) = 71; /*0x4a32c7*/
    *(this + 7) = 16; /*0x4a32ce*/
  }
  if ( !MEMORY[0x8A0E00] /*0x4a32e5*/
    || !(*(int (__stdcall **)(int, int *, int *, _DWORD))(*(_DWORD *)MEMORY[0x8A0E00] + 24))(
          MEMORY[0x8A0E00],
          this + 1,
          this + 28,
          0) )
  {
    v6 = *v5; /*0x4a32ec*/
    if ( v6 ) /*0x4a32f0*/
    {
      if ( a4 ) /*0x4a32f5*/
      {
        if ( a4 == 1 ) /*0x4a32f8*/
        {
          memset(v8, 0, sizeof(v8)); /*0x4a3314*/
          v8[0] = 100; /*0x4a331a*/
          v8[20] = -1; /*0x4a332a*/
          (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v6 + 20))( /*0x4a3339*/
            v6,
            0,
            0,
            0,
            0x2000000,
            v8);
          return this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return this; /*0x4a3306*/
      }
      (**(void (__stdcall ***)(int, void *, int))v6)(v6, &unk_7F8130, (int)(this + 29)); /*0x4a3356*/
    }
  }
  return this; /*0x4a32ff*/
}
}
} // namespace gamemd

// 0x4A3630
namespace gamemd {
unsigned int * sub_4A3630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4A3630(_DWORD *this)
{
  *(this + 24576) = 0; /*0x4a3632*/
  return this; /*0x4a363c*/
}
}
} // namespace gamemd

// 0x4A3650
namespace gamemd {
void nullsub_115()
{
  ;
}
} // namespace gamemd

// 0x4A38D0
namespace gamemd {
void * LoadFileSHP(ConvertClass * aP0, ConvertClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__fastcall LoadFileSHP(ConvertClass *aP0, ConvertClass *aP1)
{
  ConvertClass *v2; // ebx
  void *result; // eax
  void *v5; // esi
  size_t v6; // edi
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF

  v2 = aP1; /*0x4a38d4*/
  LOBYTE(aP1) = 0; /*0x4a38d9*/
  v2->__pad_0[0] = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile(aP0->__pad_0, (IUnknown *)aP1); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
    CCFileClass::Construct(v8, aP0->__pad_0); /*0x4a38ed*/
    v5 = 0; /*0x4a38f2*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a38fd*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a390f*/
      v5 = (void *)__2_YAPAXI_Z(v6); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
LABEL_6:
        v2->__pad_0[0] = !v7; /*0x4a392f*/
        v8[0] = &CCFileClass::`vftable'; /*0x4a3938*/
        v9[3] = 0; /*0x4a3940*/
        Vector::Clear((int)v9); /*0x4a3948*/
        v8[0] = &off_7E1668; /*0x4a3951*/
        BufferIOFileClass::Dtor(v8); /*0x4a3959*/
        return v5; /*0x4a395e*/
      }
      (*(void (__thiscall **)(_DWORD *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result; /*0x4a3961*/
}
}
} // namespace gamemd

// 0x4A3970
namespace gamemd {
int FileClass_LoadToBuffer(char ** a1, bool * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FileClass_LoadToBuffer(char **a1, bool *a2)
{
  char *v3; // esi
  int result; // eax
  void *v5; // esi
  size_t v6; // ebx
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF

  v3 = String::GetOrEmpty_Alt(a1); /*0x4a397c*/
  *a2 = 0; /*0x4a3982*/
  result = SearchMIXFile(v3, 0); /*0x4a3985*/
  if ( !result ) /*0x4a398c*/
  {
    CCFileClass::Construct(v8, v3); /*0x4a3994*/
    v5 = 0; /*0x4a3999*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a39a4*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a39b6*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a39be*/
      v7 = v5 == 0; /*0x4a39c3*/
      if ( !v5 ) /*0x4a39c5*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a39d6*/
        v8[0] = &CCFileClass::`vftable'; /*0x4a39df*/
        v9[3] = 0; /*0x4a39e7*/
        Vector::Clear((int)v9); /*0x4a39ef*/
        v8[0] = &off_7E1668; /*0x4a39f8*/
        BufferIOFileClass::Dtor(v8); /*0x4a3a00*/
        return (int)v5; /*0x4a3a05*/
      }
      (*(void (__thiscall **)(_DWORD *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a39d1*/
    }
    v7 = v5 == 0; /*0x4a39d4*/
    goto LABEL_6; /*0x4a39d4*/
  }
  return result; /*0x4a3a08*/
}
}
} // namespace gamemd

// 0x4A3A10
namespace gamemd {
int sub_4A3A10(int * a1, void ** a2, void ** a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4A3A10(int *a1, void **a2, void **a3, int a4)
{
  int v6; // edx
  char *v7; // edi
  int v8; // ebp
  int result; // eax
  size_t v10; // eax
  int v11; // edx
  size_t v12; // [esp+24h] [ebp-14h] BYREF
  void *v13; // [esp+28h] [ebp-10h]
  _TBYTE Src; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = *a1; /*0x4a3a21*/
  v7 = (char *)*a2; /*0x4a3a23*/
  v13 = *a3; /*0x4a3a25*/
  v8 = 0; /*0x4a3a2b*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(v6 + 24))(a1) ) /*0x4a3a2d*/
  {
    result = (*(int (__thiscall **)(int *, int))(*a1 + 28))(a1, 1); /*0x4a3a3a*/
    if ( !result ) /*0x4a3a3f*/
      return result; /*0x4a3a3f*/
    v8 = 1; /*0x4a3a4b*/
  }
  (*(void (__thiscall **)(int *, size_t *, int))(*a1 + 36))(a1, &v12, 2); /*0x4a3a5b*/
  (*(void (__thiscall **)(int *, _TBYTE *, int))(*a1 + 36))(a1, &Src, 8); /*0x4a3a69*/
  v10 = v12 + 65528; /*0x4a3a75*/
  v12 += 65528; /*0x4a3a7d*/
  if ( WORD3(Src) ) /*0x4a3a81*/
  {
    v11 = *a1; /*0x4a3a89*/
    v12 = v10 - *(_DWORD *)((char *)&Src + 6); /*0x4a3a8b*/
    if ( a4 ) /*0x4a3a95*/
      (*(void (__thiscall **)(int *, int, _DWORD))(v11 + 36))(a1, a4, SWORD3(Src)); /*0x4a3a9e*/
    else
      (*(void (__thiscall **)(int *, _DWORD, int))(v11 + 40))(a1, SWORD3(Src), 1); /*0x4a3aab*/
    LOWORD(v10) = v12; /*0x4a3aae*/
    WORD3(Src) = 0; /*0x4a3ab2*/
  }
  if ( *a2 == *a3 ) /*0x4a3ac1*/
    v7 = (char *)a2[1] + (_DWORD)v7 - (unsigned __int16)v10 - 8; /*0x4a3acd*/
  memcpy(v7, &Src, 8u); /*0x4a3ad9*/
  (*(void (__thiscall **)(int *, char *, _DWORD))(*a1 + 36))(a1, v7 + 8, (unsigned __int16)v12); /*0x4a3af4*/
  v12 = sub_5584F0(v7, v13); /*0x4a3b04*/
  if ( v8 ) /*0x4a3b08*/
    (*(void (__thiscall **)(int *))(*a1 + 52))(a1); /*0x4a3b0e*/
  return (unsigned __int16)v12; /*0x4a3a41*/
}
}
} // namespace gamemd

// 0x4A3B40
namespace gamemd {
HRSRC FindResource(unsigned short a1, const CHAR * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRSRC __fastcall FindResource(unsigned __int16 a1, const CHAR *a2)
{
  HRSRC result; // eax

  result = FindResourceA(*(HMODULE *)&MEMORY[0x89F690].__pad_2B8[44], (LPCSTR)a1, a2); /*0x4a3b4e*/
  if ( result ) /*0x4a3b56*/
  {
    result = (HRSRC)LoadResource(*(HMODULE *)&MEMORY[0x89F690].__pad_2B8[44], result); /*0x4a3b61*/
    if ( result ) /*0x4a3b69*/
      return (HRSRC)LockResource(result); /*0x4a3b6d*/
  }
  return result; /*0x4a3b58*/
}
}
} // namespace gamemd

// 0x4A3C10
namespace gamemd {
int sub_4A3C10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A3C10()
{
  MEMORY[0x89F980] = 0; /*0x4a3c12*/
  MEMORY[0x89F984] = 0; /*0x4a3c17*/
  MEMORY[0x89F988] = 0; /*0x4a3c1c*/
  MEMORY[0x89F98C] = 0; /*0x4a3c21*/
  return 0; /*0x4a3c26*/
}
}
} // namespace gamemd

// 0x4A3C30
namespace gamemd {
int Palette_Fade(const void * a1, signed int a2, void (*a3)(void) a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Palette_Fade(const void *a1, signed int a2, void (*a3)(void))
{
  int result; // eax
  _BYTE *v6; // eax
  int v7; // ecx
  DWORD v8; // edx
  signed int v9; // esi
  DWORD v10; // eax
  signed int v11; // eax
  signed int v12; // esi
  signed int v13; // eax
  int v14; // eax
  signed int v15; // esi
  signed int v16; // eax
  int v17; // edi
  signed int v18; // esi
  DWORD v19; // eax
  signed int v20; // eax
  DWORD Ticks; // [esp+8h] [ebp-910h]
  signed int v22; // [esp+10h] [ebp-908h]
  _BYTE v24[768]; // [esp+18h] [ebp-900h] BYREF
  _BYTE Src[768]; // [esp+318h] [ebp-600h] BYREF
  _BYTE v26[768]; // [esp+618h] [ebp-300h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 112))(MEMORY[0x887308]); /*0x4a3c48*/
  if ( result == 1 ) /*0x4a3c4e*/
  {
    Ticks = Timer::GetTicks(); /*0x4a3c5f*/
    v22 = a2; /*0x4a3c63*/
    v6 = &v24[2]; /*0x4a3c67*/
    v7 = 256; /*0x4a3c6b*/
    do /*0x4a3c7e*/
    {
      *(v6 - 2) = 0; /*0x4a3c72*/
      *(v6 - 1) = 0; /*0x4a3c75*/
      *v6 = 0; /*0x4a3c78*/
      v6 += 3; /*0x4a3c7a*/
      --v7; /*0x4a3c7d*/
    }
    while ( v7 ); /*0x4a3c7e*/
    v8 = Ticks; /*0x4a3c80*/
    qmemcpy(v24, &MEMORY[0x89F990], sizeof(v24)); /*0x4a3c92*/
    qmemcpy(v26, a1, sizeof(v26)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      v9 = v22; /*0x4a3cab*/
      if ( v8 != -1 ) /*0x4a3cb2*/
      {
        v10 = Timer::GetTicks(); /*0x4a3cb8*/
        v8 = Ticks; /*0x4a3cbd*/
        v11 = v10 - Ticks; /*0x4a3cc1*/
        if ( v11 >= v22 ) /*0x4a3cc5*/
          return Surface::CreateSurfacePalette(v26); /*0x4a3cc5*/
        v9 = v22 - v11; /*0x4a3ccb*/
      }
      if ( !v9 ) /*0x4a3ccf*/
        return Surface::CreateSurfacePalette(v26); /*0x4a3daf*/
      qmemcpy(Src, v24, sizeof(Src)); /*0x4a3ce8*/
      v12 = v22; /*0x4a3cea*/
      if ( v8 != -1 ) /*0x4a3cee*/
      {
        v13 = Timer::GetTicks() - Ticks; /*0x4a3cf9*/
        if ( v13 >= v22 ) /*0x4a3cff*/
          v12 = 0; /*0x4a3d05*/
        else
          v12 = v22 - v13; /*0x4a3d01*/
      }
      v14 = ((a2 - v12) << 8) / a2; /*0x4a3d13*/
      if ( v14 >= 255 ) /*0x4a3d1a*/
        v14 = 255; /*0x4a3d1c*/
      Render_Helper(v14, v26); /*0x4a3d31*/
      v15 = v22; /*0x4a3d36*/
      if ( Ticks == -1 ) /*0x4a3d3f*/
        goto LABEL_18; /*0x4a3d3f*/
      v16 = Timer::GetTicks() - Ticks; /*0x4a3d4a*/
      if ( v16 < v22 ) /*0x4a3d50*/
        break; /*0x4a3d50*/
      v17 = 0; /*0x4a3d8c*/
LABEL_19:
      Surface::CreateSurfacePalette(Src); /*0x4a3d56*/
      if ( a3 ) /*0x4a3d64*/
LABEL_20:
        a3(); /*0x4a3d66*/
      v8 = Ticks; /*0x4a3d68*/
      while ( 1 ) /*0x4a3d6c*/
      {
        v18 = v22; /*0x4a3d6c*/
        if ( v8 != -1 ) /*0x4a3d73*/
        {
          v19 = Timer::GetTicks(); /*0x4a3d79*/
          v8 = Ticks; /*0x4a3d7e*/
          v20 = v19 - Ticks; /*0x4a3d82*/
          if ( v20 >= v22 ) /*0x4a3d86*/
            v18 = 0; /*0x4a3d90*/
          else
            v18 = v22 - v20; /*0x4a3d88*/
        }
        if ( v18 != v17 || !v17 ) /*0x4a3d9c*/
          break; /*0x4a3d9c*/
        if ( a3 ) /*0x4a3da4*/
          goto LABEL_20; /*0x4a3da4*/
      }
    }
    v15 = v22 - v16; /*0x4a3d52*/
LABEL_18:
    v17 = v15; /*0x4a3d54*/
    goto LABEL_19; /*0x4a3d54*/
  }
  return result; /*0x4a3db6*/
}
}
} // namespace gamemd

// 0x4A3FD0
namespace gamemd {
void sub_4A3FD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A3FD0()
{
  HRESULT v0; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v2; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-50h] BYREF

  Debug::Log(); /*0x4a3fd8*/
  if ( !MEMORY[0x8A0094] ) /*0x4a3fe7*/
  {
    v0 = DirectDrawCreate(0, &MEMORY[0x8A0094], 0); /*0x4a3ff2*/
    if ( v0 ) /*0x4a3ff9*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4003*/
      {
        MEMORY[0x8A00B0](v0); /*0x4a4007*/
        Debug::Log(); /*0x4a400e*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0); /*0x4a4025*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4040*/
        Debug::Log(); /*0x4a404b*/
      }
    }
    else
    {
      lpVtbl = MEMORY[0x8A0094]->lpVtbl; /*0x4a4063*/
      if ( MEMORY[0x89F978] ) /*0x4a4065*/
        v2 = lpVtbl->SetCooperativeLevel(MEMORY[0x8A0094], g_hWnd, 8); /*0x4a4069*/
      else
        v2 = lpVtbl->SetCooperativeLevel(MEMORY[0x8A0094], g_hWnd, 17); /*0x4a4075*/
      if ( v2 ) /*0x4a407a*/
      {
        if ( MEMORY[0x8A00B0] ) /*0x4a4084*/
        {
          MEMORY[0x8A00B0](v2); /*0x4a4088*/
        }
        else
        {
          sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a4099*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a40b4*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x4A40C0
namespace gamemd {
LPDIRECTDRAW sub_4A40C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPDIRECTDRAW sub_4A40C0()
{
  LPDIRECTDRAW result; // eax
  CHAR Text[80]; // [esp+4h] [ebp-50h] BYREF

  result = MEMORY[0x8A0094]; /*0x4a40c0*/
  if ( MEMORY[0x8A0094] ) /*0x4a40ca*/
  {
    result = (LPDIRECTDRAW)MEMORY[0x8A0094]->lpVtbl->Release(MEMORY[0x8A0094]); /*0x4a40cf*/
    if ( result ) /*0x4a40d4*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a40de*/
      {
        result = (LPDIRECTDRAW)MEMORY[0x8A00B0](result); /*0x4a40e2*/
        MEMORY[0x8A0094] = 0; /*0x4a40e4*/
        return result; /*0x4a40f1*/
      }
      sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, result); /*0x4a40fd*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4118*/
    }
    MEMORY[0x8A0094] = 0; /*0x4a411e*/
  }
  return result; /*0x4a40ee*/
}
}
} // namespace gamemd

// 0x4A4130
namespace gamemd {
unsigned int sub_4A4130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int sub_4A4130()
{
  LPDIRECTDRAW v0; // eax
  char v1; // bl
  HRESULT v2; // eax
  unsigned int v3; // esi
  int v4; // esi
  int v5; // eax
  _DWORD v7[27]; // [esp+Ch] [ebp-1F8h] BYREF
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF
  _DWORD v9[79]; // [esp+C8h] [ebp-13Ch] BYREF

  v0 = MEMORY[0x8A0094]; /*0x4a4130*/
  v1 = 0; /*0x4a413c*/
  if ( !MEMORY[0x8A0094] ) /*0x4a4148*/
  {
    v2 = DirectDrawCreate(0, &MEMORY[0x8A0094], 0); /*0x4a4153*/
    if ( v2 ) /*0x4a415a*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4168*/
      {
        MEMORY[0x8A00B0](v2); /*0x4a4170*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a427b*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4296*/
      }
      v0 = 0; /*0x4a4172*/
      MEMORY[0x8A0094] = 0; /*0x4a4174*/
    }
    else
    {
      v0 = MEMORY[0x8A0094]; /*0x4a429d*/
      v1 = 1; /*0x4a42a2*/
    }
  }
  v3 = 0; /*0x4a4179*/
  if ( v0 ) /*0x4a417d*/
  {
    v9[0] = 316; /*0x4a418a*/
    if ( !v0->lpVtbl->GetCaps(v0, (LPDDCAPS)v9, 0) ) /*0x4a419a*/
    {
      v4 = v9[15]; /*0x4a41af*/
      Debug::Log(); /*0x4a41bb*/
      memset(v7, 0, sizeof(v7)); /*0x4a41ce*/
      v7[0] = 108; /*0x4a41d9*/
      if ( !MEMORY[0x8A0094]->lpVtbl->GetDisplayMode(MEMORY[0x8A0094], (LPDDSURFACEDESC)v7) ) /*0x4a41e5*/
      {
        Debug::Log(); /*0x4a4206*/
        v4 += v7[2] * v7[3] * (v7[21] >> 3); /*0x4a421f*/
      }
      v3 = (v4 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log(); /*0x4a4239*/
    }
    v0 = MEMORY[0x8A0094]; /*0x4a4241*/
  }
  if ( v1 && v0 ) /*0x4a4250*/
  {
    v5 = v0->lpVtbl->Release(v0); /*0x4a4259*/
    if ( v5 ) /*0x4a425e*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4268*/
      {
        MEMORY[0x8A00B0](v5); /*0x4a426c*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v5); /*0x4a42b4*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a42cf*/
      }
    }
    MEMORY[0x8A0094] = 0; /*0x4a42d1*/
  }
  return v3; /*0x4a42dd*/
}
}
} // namespace gamemd

// 0x4A44F0
namespace gamemd {
int sub_4A44F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPDIRECTDRAW __usercall sub_4A44F0@<eax>(int a1@<esi>)
{
  LPDIRECTDRAW result; // eax
  int v2; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-50h] BYREF
  CHAR Text[76]; // [esp+Ch] [ebp-4Ch] BYREF

  result = MEMORY[0x8A0094]; /*0x4a44f0*/
  if ( MEMORY[0x8A0094] ) /*0x4a44fd*/
  {
    v2 = ((int (__stdcall *)(LPDIRECTDRAW, int))MEMORY[0x8A0094]->lpVtbl->RestoreDisplayMode)(MEMORY[0x8A0094], a1); /*0x4a4507*/
    if ( v2 ) /*0x4a4512*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a451c*/
      {
        MEMORY[0x8A00B0](v2); /*0x4a4520*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a452f*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a454a*/
      }
    }
    MEMORY[0x8A00A4] = 0; /*0x4a4551*/
    MEMORY[0x8A00A8] = 0; /*0x4a4557*/
    MEMORY[0x8A00AC] = 0; /*0x4a455d*/
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))MEMORY[0x8A0094]->lpVtbl->Release)(MEMORY[0x8A0094]); /*0x4a4566*/
    if ( result ) /*0x4a456b*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4575*/
      {
        result = (LPDIRECTDRAW)MEMORY[0x8A00B0](result); /*0x4a4579*/
        MEMORY[0x8A0094] = 0; /*0x4a457b*/
        return result; /*0x4a4586*/
      }
      sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, result); /*0x4a4592*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a45ad*/
    }
    MEMORY[0x8A0094] = 0; /*0x4a45af*/
  }
  return result; /*0x4a4582*/
}
}
} // namespace gamemd

// 0x4A45C0
namespace gamemd {
int sub_4A45C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A45C0()
{
  int v1[16]; // [esp+0h] [ebp-23Ch] BYREF
  int v2; // [esp+40h] [ebp-1FCh]
  char Buffer[256]; // [esp+13Ch] [ebp-100h] BYREF

  if ( !MEMORY[0x8A0094] ) /*0x4a45cd*/
    return 0; /*0x4a45cd*/
  v1[0] = 316; /*0x4a45d3*/
  if ( MEMORY[0x8A0094]->lpVtbl->GetCaps(MEMORY[0x8A0094], (LPDDCAPS)v1, 0) ) /*0x4a45e1*/
    return 0; /*0x4a460d*/
  sprintf(Buffer, stru_81FE6C, v2); /*0x4a45fa*/
  return v2; /*0x4a4606*/
}
}
} // namespace gamemd

// 0x4A4700
namespace gamemd {
char sub_4A4700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_4A4700()
{
  HRESULT v0; // eax
  char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

  LOBYTE(v0) = byte_81FC6C; /*0x4a4700*/
  if ( byte_81FC6C ) /*0x4a470a*/
  {
    v0 = MEMORY[0x8A0094]->lpVtbl->WaitForVerticalBlank(MEMORY[0x8A0094], 1, 0); /*0x4a4718*/
    if ( v0 == -2147467263 ) /*0x4a4720*/
    {
      byte_81FC6C = 0; /*0x4a4722*/
    }
    else if ( v0 ) /*0x4a472f*/
    {
      if ( MEMORY[0x8A00B0] ) /*0x4a4739*/
      {
        LOBYTE(v0) = MEMORY[0x8A00B0](v0); /*0x4a473d*/
      }
      else
      {
        sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0); /*0x4a474e*/
        LOBYTE(v0) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a4769*/
      }
    }
  }
  return v0; /*0x4a4729*/
}
}
} // namespace gamemd

// 0x4A4850
namespace gamemd {
int sub_4A4850(const void * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_4A4850(const void *a1, int a2)
{
  void *v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  v2 = __2_YAPAXI_Z(0x6Cu); /*0x4a485e*/
  qmemcpy(v2, a1, 0x6Cu); /*0x4a4867*/
  v3 = *(_DWORD *)(a2 + 8); /*0x4a4870*/
  if ( *(_DWORD *)(a2 + 16) < v3 /*0x4a4895*/
    || (*(_BYTE *)(a2 + 13) || !v3)
    && (v4 = *(_DWORD *)(a2 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a2 + 16); /*0x4a489c*/
    v6 = *(_DWORD *)(a2 + 4); /*0x4a489f*/
    *(_DWORD *)(a2 + 16) = v5 + 1; /*0x4a48a5*/
    *(_DWORD *)(v6 + 4 * v5) = v2; /*0x4a48a8*/
  }
  return 1; /*0x4a48ab*/
}
}
} // namespace gamemd

// 0x4A48C0
namespace gamemd {
int sub_4A48C0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_4A48C0(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edx

  v2 = a1[1]; /*0x4a48cb*/
  v3 = a2[1]; /*0x4a48d0*/
  if ( *a2 > *a1 ) /*0x4a48d5*/
    return -1; /*0x4a48d7*/
  if ( *a2 < *a1 ) /*0x4a48dc*/
    return 1; /*0x4a48de*/
  if ( v2 >= v3 ) /*0x4a48e7*/
    return v3 < v2; /*0x4a48f2*/
  return -1; /*0x4a48da*/
}
}
} // namespace gamemd

// 0x4A4900
namespace gamemd {
unsigned int * sub_4A4900(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int *__fastcall sub_4A4900(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int *v5; // ebx
  unsigned int *v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // esi
  size_t NumOfElements; // [esp+14h] [ebp-24h]
  void **v16; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-Ch]
  int v19; // [esp+30h] [ebp-8h]
  int v20; // [esp+34h] [ebp-4h]

  if ( !MEMORY[0x8A0094] ) /*0x4a4915*/
    return 0; /*0x4a4ab2*/
  sub_4A4E30(&v16, 0, 0); /*0x4a4923*/
  v16 = &DynamicVectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( MEMORY[0x8A0094]->lpVtbl->EnumDisplayModes(MEMORY[0x8A0094], 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) /*0x4a4967*/
    || !v19 )
  {
    v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a93*/
    if ( Block && BYTE1(v18) ) /*0x4a4aa5*/
      __3_YAXPAX_Z(Block); /*0x4a4aa8*/
    return 0; /*0x4a4aa8*/
  }
  v5 = (unsigned int *)__2_YAPAXI_Z(8 * v19 + 4); /*0x4a497e*/
  v6 = v5; /*0x4a4990*/
  memset(v5, 0, 8 * v19 + 4); /*0x4a4995*/
  NumOfElements = 0; /*0x4a4999*/
  v7 = 0; /*0x4a49aa*/
  if ( v19 <= 0 ) /*0x4a49ae*/
    goto LABEL_13; /*0x4a49ae*/
  do /*0x4a4a12*/
  {
    v8 = (_DWORD *)*((_DWORD *)Block + v7); /*0x4a49b9*/
    v9 = v8[3]; /*0x4a49bc*/
    if ( v9 <= a3 ) /*0x4a49c1*/
    {
      v10 = v8[2]; /*0x4a49c3*/
      if ( v10 <= a4 && v9 >= a1 && v10 >= a2 && v8[21] == a5 ) /*0x4a49e3*/
      {
        *v6 = v9; /*0x4a49e5*/
        v11 = v6 + 1; /*0x4a49ea*/
        *v11 = v8[2]; /*0x4a49ed*/
        v6 = v11 + 1; /*0x4a49f3*/
        ++NumOfElements; /*0x4a49f7*/
      }
    }
    __3_YAXPAX_Z(*((void **)Block + v7++)); /*0x4a4a03*/
  }
  while ( v7 < v19 ); /*0x4a4a12*/
  if ( v6 == v5 ) /*0x4a4a17*/
  {
LABEL_13:
    __3_YAXPAX_Z(v5); /*0x4a4a1a*/
    v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a28*/
    if ( Block && BYTE1(v18) ) /*0x4a4a38*/
    {
      __3_YAXPAX_Z(Block); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4a69*/
  if ( Block && BYTE1(v18) ) /*0x4a4a79*/
    __3_YAXPAX_Z(Block); /*0x4a4a7c*/
  return v5; /*0x4a4a45*/
}
}
} // namespace gamemd

// 0x4A4E30
namespace gamemd {
unsigned int * sub_4A4E30(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4A4E30(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x4a4e3b*/
  *(this + 2) = a2; /*0x4a4e3e*/
  *((_BYTE *)this + 12) = 1; /*0x4a4e41*/
  *((_BYTE *)this + 13) = 0; /*0x4a4e45*/
  *this = &VectorClass<_DDSURFACEDESC *>::`vftable'; /*0x4a4e48*/
  if ( a2 ) /*0x4a4e4e*/
  {
    if ( a3 ) /*0x4a4e56*/
    {
      *(this + 1) = a3; /*0x4a4e58*/
      return this; /*0x4a4e5e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x4a4e6d*/
    *((_BYTE *)this + 13) = 1; /*0x4a4e70*/
  }
  return this; /*0x4a4e5d*/
}
}
} // namespace gamemd

// 0x4A4E80
namespace gamemd {
int sub_4A4E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A4E80()
{
  MEMORY[0x8A00C0] = 0; /*0x4a4e82*/
  MEMORY[0x8A00C4] = 0; /*0x4a4e87*/
  MEMORY[0x8A00C8] = 0; /*0x4a4e8c*/
  MEMORY[0x8A00CC] = 0; /*0x4a4e91*/
  return 0; /*0x4a4e96*/
}
}
} // namespace gamemd

// 0x4A4EA0
namespace gamemd {
void sub_4A4EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4EA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a4eac*/
  MEMORY[0x8A00D8] = Math::Sqrt(v0 + v0); /*0x4a4ebe*/
}
}
} // namespace gamemd

// 0x4A4ED0
namespace gamemd {
void sub_4A4ED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4ED0()
{
  MEMORY[0x8A0128] = MEMORY[0x8A00D8] / 60.0; /*0x4a4edc*/
}
}
} // namespace gamemd

// 0x4A4EF0
namespace gamemd {
void sub_4A4EF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4EF0()
{
  MEMORY[0x8A0110] = 1.0 / MEMORY[0x8A0128]; /*0x4a4efc*/
}
}
} // namespace gamemd

// 0x4A4F10
namespace gamemd {
void sub_4A4F10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4F10()
{
  MEMORY[0x8A0108] = 0.0174532925199433 * 45.0; /*0x4a4f1c*/
}
}
} // namespace gamemd

// 0x4A4F30
namespace gamemd {
void sub_4A4F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4F30()
{
  MEMORY[0x8A00E0] = 0.0174532925199433 * 60.0; /*0x4a4f3c*/
}
}
} // namespace gamemd

// 0x4A4F50
namespace gamemd {
void sub_4A4F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4F50()
{
  MEMORY[0x8A00B8] = 0.0174532925199433 * 90.0; /*0x4a4f5c*/
}
}
} // namespace gamemd

// 0x4A4F70
namespace gamemd {
long long sub_4A4F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A4F70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A00B8] - MEMORY[0x8A00E0]); /*0x4a4f82*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A00D8] * 0.5); /*0x4a4f96*/
  MEMORY[0x8A0130] = result; /*0x4a4f9b*/
  return result; /*0x4a4fa0*/
}
}
} // namespace gamemd

// 0x4A4FB0
namespace gamemd {
void sub_4A4FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4FB0()
{
  MEMORY[0x8A00E8] = Math::ArcTan((double)MEMORY[0x8A0130] * 0.00390625); /*0x4a4fc7*/
}
}
} // namespace gamemd

// 0x4A4FE0
namespace gamemd {
void sub_4A4FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A4FE0()
{
  MEMORY[0x8A0100] = Math::ArcTan((double)(2 * MEMORY[0x8A0130]) / MEMORY[0x8A00D8]); /*0x4a5002*/
}
}
} // namespace gamemd

// 0x4A5010
namespace gamemd {
long long sub_4A5010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A5010()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0130]) + 0.5); /*0x4a502b*/
  MEMORY[0x8A0124] = result; /*0x4a5030*/
  return result; /*0x4a5036*/
}
}
} // namespace gamemd

// 0x4A5040
namespace gamemd {
int sub_4A5040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A5040()
{
  MEMORY[0x8A00D0] = 0; /*0x4a5042*/
  MEMORY[0x8A00D2] = 0; /*0x4a5048*/
  return 0; /*0x4a504e*/
}
}
} // namespace gamemd

// 0x4A5050
namespace gamemd {
int sub_4A5050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A5050()
{
  MEMORY[0x8A00F0] = 0; /*0x4a5052*/
  MEMORY[0x8A00F4] = 0; /*0x4a5057*/
  MEMORY[0x8A00F8] = 0; /*0x4a505c*/
  return 0; /*0x4a5061*/
}
}
} // namespace gamemd

// 0x4A5070
namespace gamemd {
int sub_4A5070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A5070()
{
  MEMORY[0x8A0120] = 0; /*0x4a5075*/
  MEMORY[0x8A0118] = 128; /*0x4a507f*/
  MEMORY[0x8A011C] = 128; /*0x4a5084*/
  return 128; /*0x4a5089*/
}
}
} // namespace gamemd

// 0x4A5090
namespace gamemd {
void nullsub_116()
{
  ;
}
} // namespace gamemd

// 0x4A50A0
namespace gamemd {
signed int sub_4A50A0(signed int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
signed int __fastcall sub_4A50A0(signed int a1)
{
  DWORD Ticks; // ecx
  DWORD v3; // eax
  signed int result; // eax
  DWORD v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-4h]

  Ticks = Timer::GetTicks(); /*0x4a50af*/
  v6 = a1; /*0x4a50b1*/
  v5 = Ticks; /*0x4a50b5*/
  do /*0x4a50df*/
  {
    if ( Ticks == -1 ) /*0x4a50bc*/
    {
      result = a1; /*0x4a50db*/
    }
    else
    {
      v3 = Timer::GetTicks(); /*0x4a50c2*/
      Ticks = v5; /*0x4a50c7*/
      result = v3 - v5; /*0x4a50cb*/
      if ( result >= a1 ) /*0x4a50cf*/
        return result; /*0x4a50cf*/
      result = a1 - result; /*0x4a50d3*/
      a1 = v6; /*0x4a50d5*/
    }
  }
  while ( result ); /*0x4a50df*/
  return result; /*0x4a50e1*/
}
}
} // namespace gamemd

// 0x4A52D0
namespace gamemd {
void sub_4A52D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4A52D0(_BYTE *this)
{
  *(this + 24) = 0; /*0x4a52d0*/
  *(this + 25) = 1; /*0x4a52d4*/
}
}
} // namespace gamemd

// 0x4A52E0
namespace gamemd {
char sub_4A52E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4A52E0(_BYTE *this)
{
  *(this + 24) = 0; /*0x4a52e2*/
  *(this + 25) = 0; /*0x4a52e5*/
  return 0; /*0x4a52e8*/
}
}
} // namespace gamemd

// 0x4A5390
namespace gamemd {
int sub_4A5390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A5390()
{
  MEMORY[0x8A0138] = 0; /*0x4a5392*/
  MEMORY[0x8A013C] = 0; /*0x4a5397*/
  MEMORY[0x8A0140] = 0; /*0x4a539c*/
  MEMORY[0x8A0144] = 0; /*0x4a53a1*/
  return 0; /*0x4a53a6*/
}
}
} // namespace gamemd

// 0x4A5950
namespace gamemd {
int _GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall _GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ(
        Concurrency::details::SchedulerProxy *this)
{
  return *((_DWORD *)this + 45); /*0x4a5956*/
}
}
} // namespace gamemd

// 0x4A59C0
namespace gamemd {
int sub_4A59C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A59C0()
{
  MEMORY[0x8A0160] = 0; /*0x4a59c2*/
  MEMORY[0x8A0164] = 0; /*0x4a59c7*/
  MEMORY[0x8A0168] = 0; /*0x4a59cc*/
  MEMORY[0x8A016C] = 0; /*0x4a59d1*/
  return 0; /*0x4a59d6*/
}
}
} // namespace gamemd

// 0x4A59E0
namespace gamemd {
unsigned int * GetTextBoundingRect(unsigned int * a1, CampaignScore * a2, int a3, int a4, short a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall GetTextBoundingRect(_DWORD *a1, CampaignScore *a2, int a3, int a4, __int16 a5, int a6, int a7)
{
  BitFont *v7; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx

  v7 = (BitFont *)aP0; /*0x4a59e4*/
  v9 = Text::MeasureWidth(a2, 0); /*0x4a59f1*/
  v10 = v7[2].field_4; /*0x4a59f6*/
  v11 = v9; /*0x4a59f9*/
  v12 = a3; /*0x4a5a06*/
  if ( (a5 & 0x100) != 0 ) /*0x4a5a08*/
  {
    v13 = a3 - v11 / 2; /*0x4a5a11*/
LABEL_5:
    v12 = v13; /*0x4a5a1c*/
    goto LABEL_6; /*0x4a5a1c*/
  }
  if ( (a5 & 0x200) != 0 ) /*0x4a5a18*/
  {
    v13 = a3 - v11; /*0x4a5a1a*/
    goto LABEL_5; /*0x4a5a1a*/
  }
LABEL_6:
  *a1 = v12 - a6; /*0x4a5a1e*/
  a1[1] = a4 - a7; /*0x4a5a3a*/
  a1[2] = v11 + 2 * a6; /*0x4a5a3d*/
  a1[3] = v10 + 2 * a7; /*0x4a5a40*/
  return a1; /*0x4a5a43*/
}
}
} // namespace gamemd

// 0x4A5A50
namespace gamemd {
int SHP_DrawBuildingTiles(int * a1, int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SHP_DrawBuildingTiles(int *a1, int a2, char a3)
{
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edi
  int v47; // ebx
  int v48; // eax
  int v49; // edx
  int v51; // edi
  int v52; // ebx
  int v53; // eax
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  int v59; // eax
  _DWORD v60[2]; // [esp+24h] [ebp-C0h] BYREF
  _DWORD v61[2]; // [esp+2Ch] [ebp-B8h] BYREF
  _DWORD v62[2]; // [esp+34h] [ebp-B0h] BYREF
  _DWORD v63[2]; // [esp+3Ch] [ebp-A8h] BYREF
  _DWORD v64[2]; // [esp+44h] [ebp-A0h] BYREF
  _DWORD v65[2]; // [esp+4Ch] [ebp-98h] BYREF
  int v66; // [esp+54h] [ebp-90h] BYREF
  int v67; // [esp+58h] [ebp-8Ch]
  _DWORD v68[2]; // [esp+5Ch] [ebp-88h] BYREF
  int v69; // [esp+64h] [ebp-80h] BYREF
  int v70; // [esp+68h] [ebp-7Ch]
  _DWORD v71[2]; // [esp+6Ch] [ebp-78h] BYREF
  _DWORD v72[4]; // [esp+74h] [ebp-70h] BYREF
  _DWORD v73[2]; // [esp+84h] [ebp-60h] BYREF
  int v74; // [esp+8Ch] [ebp-58h]
  int v75; // [esp+90h] [ebp-54h]
  int v76; // [esp+94h] [ebp-50h]
  int v77; // [esp+98h] [ebp-4Ch]
  int v78; // [esp+9Ch] [ebp-48h]
  int v79; // [esp+A0h] [ebp-44h]
  int v80; // [esp+A4h] [ebp-40h]
  int v81; // [esp+A8h] [ebp-3Ch]
  int v82; // [esp+ACh] [ebp-38h]
  int v83; // [esp+B0h] [ebp-34h]
  int v84; // [esp+B4h] [ebp-30h]
  int v85; // [esp+B8h] [ebp-2Ch]
  int v86; // [esp+BCh] [ebp-28h]
  int v87; // [esp+C0h] [ebp-24h]
  int v88; // [esp+C4h] [ebp-20h]
  int v89; // [esp+C8h] [ebp-1Ch]
  int v90; // [esp+CCh] [ebp-18h]
  int v91; // [esp+D0h] [ebp-14h]
  int v92; // [esp+D4h] [ebp-10h]
  int v93; // [esp+D8h] [ebp-Ch]
  int v94; // [esp+DCh] [ebp-8h]
  int v95; // [esp+E0h] [ebp-4h]

  v81 = 15; /*0x4a5a69*/
  v86 = 14; /*0x4a5a74*/
  v5 = (_DWORD *)*((_DWORD *)MEMORY[0xB054D4] + BuildingAnim::GetType()); /*0x4a5a7f*/
  v6 = v5[202]; /*0x4a5a8b*/
  v7 = v5[200]; /*0x4a5a91*/
  v8 = v5[201]; /*0x4a5a97*/
  v74 = v5[199]; /*0x4a5a9d*/
  v77 = v74; /*0x4a5aa1*/
  v73[1] = v6; /*0x4a5aad*/
  v78 = v6; /*0x4a5ab1*/
  v82 = 12; /*0x4a5ab8*/
  v85 = 12; /*0x4a5abf*/
  v73[0] = v7; /*0x4a5acd*/
  v76 = v7; /*0x4a5ad1*/
  v88 = v7; /*0x4a5ad8*/
  v91 = v7; /*0x4a5adf*/
  v92 = v7; /*0x4a5ae6*/
  v95 = v7; /*0x4a5aed*/
  v80 = 13; /*0x4a5afb*/
  v83 = 13; /*0x4a5b02*/
  v84 = 13; /*0x4a5b09*/
  v87 = 13; /*0x4a5b10*/
  v9 = v5[203]; /*0x4a5b17*/
  v75 = v8; /*0x4a5b1d*/
  v79 = v8; /*0x4a5b24*/
  v89 = v9; /*0x4a5b2b*/
  v90 = v9; /*0x4a5b34*/
  v93 = v9; /*0x4a5b3b*/
  v94 = v9; /*0x4a5b42*/
  v10 = &v73[4 * a2]; /*0x4a5b49*/
  if ( a3 ) /*0x4a5b4d*/
  {
    v11 = v5[195]; /*0x4a5b4f*/
    v12 = *v10; /*0x4a5b55*/
    if ( *(_DWORD *)(v11 + 4) == 1 ) /*0x4a5b5b*/
      v13 = *(unsigned __int8 *)(*(_DWORD *)(v11 + 372) + v12); /*0x4a5b68*/
    else
      v13 = *(unsigned __int16 *)(*(_DWORD *)(v11 + 372) + 2 * v12); /*0x4a5b74*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], a1, v13); /*0x4a5b82*/
  }
  v14 = a2 - 4; /*0x4a5b85*/
  if ( v14 ) /*0x4a5b88*/
  {
    if ( v14 == 1 ) /*0x4a5b8f*/
    {
      v51 = v5[195]; /*0x4a5d9c*/
      v52 = v10[2]; /*0x4a5da2*/
      if ( *(_DWORD *)(v51 + 4) == 1 ) /*0x4a5da9*/
        v53 = *(unsigned __int8 *)(*(_DWORD *)(v51 + 372) + v52); /*0x4a5db3*/
      else
        v53 = *(unsigned __int16 *)(*(_DWORD *)(v51 + 372) + 2 * v52); /*0x4a5dc0*/
      v54 = a1[1] + 1; /*0x4a5dca*/
      v72[0] = *a1 + 1; /*0x4a5dcb*/
      v55 = a1[2]; /*0x4a5dcf*/
      v72[1] = v54; /*0x4a5dd2*/
      v56 = a1[3] - 1; /*0x4a5dda*/
      v72[2] = v55 - 1; /*0x4a5ddb*/
      v72[3] = v56; /*0x4a5de6*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 88))(MEMORY[0x887314], v72, v53); /*0x4a5df1*/
    }
    else
    {
      v15 = v5[195]; /*0x4a5b95*/
      v16 = v10[1]; /*0x4a5b9b*/
      v17 = *(_DWORD *)(v15 + 4); /*0x4a5b9e*/
      v18 = *(_DWORD *)(v15 + 372); /*0x4a5ba1*/
      if ( v17 == 1 ) /*0x4a5baa*/
        v19 = *(unsigned __int8 *)(v18 + v16); /*0x4a5bae*/
      else
        v19 = *(unsigned __int16 *)(v18 + 2 * v16); /*0x4a5bb5*/
      v20 = *a1; /*0x4a5bb9*/
      v21 = a1[3]; /*0x4a5bc3*/
      v66 = a1[2] + *a1; /*0x4a5bc6*/
      v67 = v21 + a1[1]; /*0x4a5bd3*/
      v62[1] = v67; /*0x4a5bd7*/
      v62[0] = v20; /*0x4a5be2*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5bed*/
        MEMORY[0x887314],
        v62,
        &v66,
        v19);
      v22 = v5[195]; /*0x4a5bf0*/
      v23 = v10[1]; /*0x4a5bf6*/
      v24 = *(_DWORD *)(v22 + 4); /*0x4a5bf9*/
      v25 = *(_DWORD *)(v22 + 372); /*0x4a5bfc*/
      if ( v24 == 1 ) /*0x4a5c05*/
        v26 = *(unsigned __int8 *)(v25 + v23); /*0x4a5c09*/
      else
        v26 = *(unsigned __int16 *)(v25 + 2 * v23); /*0x4a5c10*/
      v27 = a1[2] + *a1; /*0x4a5c19*/
      v28 = a1[3] + a1[1]; /*0x4a5c21*/
      v64[1] = a1[1]; /*0x4a5c24*/
      v71[0] = v27; /*0x4a5c33*/
      v71[1] = v28; /*0x4a5c37*/
      v64[0] = v27; /*0x4a5c3b*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5c46*/
        MEMORY[0x887314],
        v64,
        v71,
        v26);
      v29 = v5[195]; /*0x4a5c49*/
      v30 = v10[2]; /*0x4a5c4f*/
      v31 = *(_DWORD *)(v29 + 4); /*0x4a5c57*/
      v32 = *(_DWORD *)(v29 + 372); /*0x4a5c5a*/
      if ( v31 == 1 ) /*0x4a5c62*/
        v33 = *(unsigned __int8 *)(v32 + v30); /*0x4a5c66*/
      else
        v33 = *(unsigned __int16 *)(v32 + 2 * v30); /*0x4a5c6d*/
      v34 = a1[2] + *a1; /*0x4a5c7a*/
      v60[0] = *a1; /*0x4a5c7e*/
      v69 = v34; /*0x4a5c86*/
      v70 = a1[1]; /*0x4a5c8d*/
      v60[1] = v70; /*0x4a5c91*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5c9e*/
        MEMORY[0x887314],
        v60,
        &v69,
        v33);
      v35 = v5[195]; /*0x4a5ca1*/
      v36 = v10[2]; /*0x4a5ca7*/
      v37 = *(_DWORD *)(v35 + 4); /*0x4a5caa*/
      v38 = *(_DWORD *)(v35 + 372); /*0x4a5cad*/
      if ( v37 == 1 ) /*0x4a5cb5*/
        v39 = *(unsigned __int8 *)(v38 + v36); /*0x4a5cb9*/
      else
        v39 = *(unsigned __int16 *)(v38 + 2 * v36); /*0x4a5cc0*/
      v40 = *a1; /*0x4a5cc7*/
      v41 = a1[3] + a1[1]; /*0x4a5ccc*/
      v63[1] = a1[1]; /*0x4a5ccf*/
      v61[0] = v40; /*0x4a5cde*/
      v61[1] = v41; /*0x4a5ce2*/
      v63[0] = v40; /*0x4a5ce6*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 48))( /*0x4a5cf1*/
        MEMORY[0x887314],
        v63,
        v61,
        v39);
      v42 = v5[195]; /*0x4a5cf4*/
      v43 = v10[3]; /*0x4a5cfa*/
      if ( *(_DWORD *)(v42 + 4) == 1 ) /*0x4a5d05*/
        v44 = *(unsigned __int8 *)(*(_DWORD *)(v42 + 372) + v43); /*0x4a5d12*/
      else
        v44 = *(unsigned __int16 *)(*(_DWORD *)(v42 + 372) + 2 * v43); /*0x4a5d1e*/
      v45 = a1[1]; /*0x4a5d24*/
      v65[0] = *a1; /*0x4a5d27*/
      v65[1] = a1[3] + v45; /*0x4a5d37*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 36))(MEMORY[0x887314], v65, v44); /*0x4a5d42*/
      v46 = v5[195]; /*0x4a5d45*/
      v47 = v10[3]; /*0x4a5d4b*/
      if ( *(_DWORD *)(v46 + 4) == 1 ) /*0x4a5d51*/
        v48 = *(unsigned __int8 *)(*(_DWORD *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(unsigned __int16 *)(*(_DWORD *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      v49 = a1[1]; /*0x4a5d71*/
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 36))(MEMORY[0x887314], v68, v48); /*0x4a5d8c*/
    }
  }
  else
  {
    v57 = v5[195]; /*0x4a5e01*/
    v58 = v10[2]; /*0x4a5e07*/
    if ( *(_DWORD *)(v57 + 4) == 1 ) /*0x4a5e0e*/
      v59 = *(unsigned __int8 *)(*(_DWORD *)(v57 + 372) + v58); /*0x4a5e18*/
    else
      v59 = *(unsigned __int16 *)(*(_DWORD *)(v57 + 372) + 2 * v58); /*0x4a5e25*/
    return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 88))(MEMORY[0x887314], a1, v59); /*0x4a5e33*/
  }
}
}
} // namespace gamemd

// 0x4A5E50
namespace gamemd {
int sub_4A5E50(int a2, AbstractClass * aP2, AbstractClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4A5E50(unsigned __int16 *this, int a2, AbstractClass *aP2, AbstractClass *aP3)
{
  BitFont *v5; // esi
  int PixelData; // eax

  *(_DWORD *)aP2->__pad_0 = 0; /*0x4a5e5e*/
  *(_DWORD *)aP3->__pad_0 = 0; /*0x4a5e65*/
  v5 = (BitFont *)aP0; /*0x4a5e6b*/
  if ( !this || !aP0 ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  PixelData = FontClass::GetPixelData(aP0, 0x57u); /*0x4a5e7d*/
  Text::Layout(v5, this, aP2, aP3, (AbstractClass *)(a2 * PixelData)); /*0x4a5e8d*/
  return *(_DWORD *)aP3->__pad_0 / v5[2].field_4; /*0x4a5e98*/
}
}
} // namespace gamemd

// 0x4A5EB0
namespace gamemd {
int * RenderTextLabel(int * a0, AbstractClass * aP1, int * a2, AbstractClass aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *RenderTextLabel(int *a0, AbstractClass *aP1, int *a2, AbstractClass aP3)
{
  AbstractClass *v4; // edx
  int *v5; // ecx
  AbstractClass *v6; // edi
  BitFont *v10; // ebx
  int v8; // ebp
  int v9; // esi
  char ah1; // ah
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  AbstractClass *a2a; // [esp+10h] [ebp-28h]
  int *v18; // [esp+14h] [ebp-24h]
  int v19; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-1Ch]
  char *v21; // [esp+20h] [ebp-18h]
  char *v22; // [esp+24h] [ebp-14h]
  _DWORD v23[4]; // [esp+28h] [ebp-10h] BYREF

  v6 = aP1; /*0x4a5ebe*/
  v18 = v5; /*0x4a5ec2*/
  v10 = (BitFont *)aP0; /*0x4a5ec8*/
  v8 = *(_DWORD *)&aP1->__pad_0[4] + a2[1]; /*0x4a5ed3*/
  v9 = *a2 + *(_DWORD *)aP1->__pad_0; /*0x4a5ed8*/
  a2a = v4; /*0x4a5ee8*/
  Text::Layout( /*0x4a5eec*/
    aP0,
    (unsigned __int16 *)v4,
    (AbstractClass *)&a2,
    (AbstractClass *)&aP1,
    *(AbstractClass **)&aP1->__pad_0[8]);
  ah1 = aP3.__pad_0[9]; /*0x4a5ef1*/
  if ( (aP3.__pad_0[9] & 1) != 0 ) /*0x4a5efc*/
  {
    v9 += (int)a2 / -2; /*0x4a5f07*/
    ah1 = aP3.__pad_0[9]; /*0x4a5f09*/
  }
  else if ( (aP3.__pad_0[9] & 2) != 0 ) /*0x4a5f12*/
  {
    v9 -= (int)a2; /*0x4a5f14*/
  }
  if ( ah1 >= 0 ) /*0x4a5f19*/
  {
    if ( (ah1 & 4) != 0 ) /*0x4a5f64*/
    {
      v21 = (char *)a2 + 2; /*0x4a5f6c*/
      v22 = &aP1->__pad_0[2]; /*0x4a5f7a*/
      v20 = v8 - 1; /*0x4a5f82*/
      v19 = v9 - 1; /*0x4a5f86*/
      (*(void (__thiscall **)(int *, int *, _DWORD))(*a0 + 20))(a0, &v19, 0); /*0x4a5f93*/
    }
  }
  else
  {
    v21 = (char *)a2 + 2; /*0x4a5f21*/
    v20 = v8 - 1; /*0x4a5f2c*/
    v22 = &aP1->__pad_0[2]; /*0x4a5f30*/
    v19 = v9 - 1; /*0x4a5f42*/
    v11 = *a0; /*0x4a5f46*/
    *(_WORD *)&aP3.__pad_0[8] = 0; /*0x4a5f4c*/
    aP3.__pad_0[10] = 0; /*0x4a5f57*/
    (*(void (__thiscall **)(int *, int *, char *, int))(v11 + 28))(a0, &v19, &aP3.__pad_0[8], 60); /*0x4a5f5c*/
  }
  v12 = *(_DWORD *)&v6->__pad_0[8]; /*0x4a5f98*/
  v13 = *(_DWORD *)&v6->__pad_0[4]; /*0x4a5f9b*/
  v23[0] = *(_DWORD *)v6->__pad_0; /*0x4a5f9e*/
  v14 = v12 + v23[0]; /*0x4a5fa2*/
  v15 = *(_DWORD *)&v6->__pad_0[12]; /*0x4a5fa4*/
  v23[1] = v13; /*0x4a5fa7*/
  v23[2] = v14; /*0x4a5fb1*/
  v23[3] = v13 + v15; /*0x4a5fb5*/
  Char::Swap(v10, (ObjectClass *)1); /*0x4a5fb9*/
  TextGroup::SetRect(v10, (AbstractClass *)v23); /*0x4a5fc5*/
  Property::Set(v10, *(AbstractClass **)aP3.__pad_0); /*0x4a5fd1*/
  FontRenderer::DrawText((AbstractClass *)v10, a0, (unsigned __int16 *)a2a, v9, v8, 0, 0); /*0x4a5fed*/
  *v18 = v9; /*0x4a5ff7*/
  v18[1] = v8; /*0x4a5ff9*/
  return v18; /*0x4a5ff6*/
}
}
} // namespace gamemd

// 0x4A6010
namespace gamemd {
int globalHelper_0A6010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x4A6360
namespace gamemd {
int RenderTextLabelWordWrap()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall RenderTextLabelWordWrap(
        int *a1,
        const wchar_t *a2,
        int a3,
        _DWORD *a4,
        int *a5,
        __int16 a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int *a10)
{
  int *v10; // esi
  int v11; // edi
  wchar_t *v12; // ebp
  unsigned int v13; // ebx
  wchar_t *v14; // eax
  BitFont *v15; // edx
  unsigned __int16 v16; // ax
  int v17; // esi
  unsigned __int16 *v18; // edi
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int v22; // eax
  _DWORD *v24; // [esp+8h] [ebp-428h]
  int v25; // [esp+Ch] [ebp-424h]
  BitFont *v26; // [esp+10h] [ebp-420h]
  int v28; // [esp+1Ch] [ebp-414h]
  _DWORD v29[2]; // [esp+20h] [ebp-410h] BYREF
  int v30; // [esp+28h] [ebp-408h] BYREF
  wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF

  v10 = a1; /*0x4a636f*/
  v11 = *a5; /*0x4a6371*/
  v28 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy(Destination, a2); /*0x4a638e*/
    v24 = (_DWORD *)aP0; /*0x4a639c*/
    v12 = Destination; /*0x4a63a0*/
    v13 = 0; /*0x4a63a4*/
    v25 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      v15 = (BitFont *)v14; /*0x4a63c3*/
      v26 = (BitFont *)v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      v16 = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        v17 = 0; /*0x4a63e2*/
        v18 = v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v18; /*0x4a63eb*/
          v17 += FontClass::GetPixelData(v24, v16); /*0x4a63f3*/
          v16 = *v18; /*0x4a63f5*/
        }
        while ( *v18 && v17 + v13 < a9 ); /*0x4a6409*/
        if ( v17 + v13 >= a9 ) /*0x4a6417*/
        {
          v17 -= FontClass::GetPixelData(v24, *(v18 - 1)); /*0x4a642a*/
          *(v18 - 1) = 0; /*0x4a642c*/
          v25 = 0; /*0x4a6431*/
        }
        v19 = a5[1]; /*0x4a6444*/
        v29[0] = v13 + *a5; /*0x4a6450*/
        v29[1] = v19; /*0x4a645b*/
        v20 = RenderTextLabel(&v30, (int)v12, a3, a4, (int)v29, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v17; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v26; /*0x4a6491*/
        v28 = v20[1]; /*0x4a6498*/
      }
      if ( !v15 ) /*0x4a649e*/
        break; /*0x4a649e*/
      v21 = a10; /*0x4a64a0*/
      if ( a10 ) /*0x4a64a9*/
      {
        if ( v13 > *a10 ) /*0x4a64ad*/
        {
          do /*0x4a64b7*/
          {
            v22 = v21[1]; /*0x4a64af*/
            ++v21; /*0x4a64b2*/
          }
          while ( v13 > v22 ); /*0x4a64b7*/
          a10 = v21; /*0x4a64b9*/
        }
        v13 = *v21; /*0x4a64c0*/
      }
      else
      {
        v13 = 10 * (5 * v13 + 5); /*0x4a64cb*/
      }
      v12 = (wchar_t *)&v15->__pad_0[2]; /*0x4a64d1*/
    }
    while ( v25 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v28; /*0x4a64e4*/
  return v10; /*0x4a64e9*/
}
}
} // namespace gamemd

// 0x4A6500
namespace gamemd {
int FillRectangle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall FillRectangle(
        IUnknown *aP0,
        IUnknown *aP1,
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
  int *v13; // eax
  int v14; // edx
  int v16; // [esp+8h] [ebp-8h] BYREF

  v12 = Color::ConvertToRGB((unsigned __int8 *)(a6 + 776), (int)&a6); /*0x4a6518*/
  LOWORD(v16) = *(_WORD *)v12; /*0x4a6526*/
  BYTE2(v16) = *(_BYTE *)(v12 + 2); /*0x4a652e*/
  v13 = RenderTextLabelWordWrap( /*0x4a65a7*/
          &v16,
          (const wchar_t *)aP1,
          a3,
          (_DWORD *)a4,
          (int *)a5,
          ((unsigned __int8)v16 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
        | (BYTE1(v16) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
        | (BYTE2(v16) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]),
          a7,
          a8,
          a9,
          (unsigned int *)a10);
  aP0->field_0 = *v13; /*0x4a65ae*/
  v14 = v13[1]; /*0x4a65b1*/
  aP0->field_4 = v14; /*0x4a65b6*/
  return &aP0->field_0; /*0x4a65b0*/
}
}
} // namespace gamemd

// 0x4A65C0
namespace gamemd {
int * sub_4A65C0(int * a1, int a2, int a3, unsigned int * a4, int a5, short a6, int a7, int a8, int a9, int a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall sub_4A65C0(int *a1, int a2, int a3, _DWORD *a4, int a5, __int16 a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a65d0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a65fb*/
  }
  else
  {
    v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)MEMORY[0xB054D4] + a9) + 776), (int)&a9); /*0x4a6628*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6630*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
          | (BYTE2(v15[0]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
          | (LOBYTE(v15[0]) >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return a1; /*0x4a6604*/
}
}
} // namespace gamemd

// 0x4A66D0
namespace gamemd {
int globalHelper_0A66D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x4A67E0
namespace gamemd {
int * sub_4A67E0(char a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall sub_4A67E0(char a1, int a2)
{
  int v2; // ecx

  LOBYTE(a2) = a1; /*0x4a67e0*/
  BYTE1(a2) = a1; /*0x4a67e4*/
  MEMORY[0x8A0150] = 0; /*0x4a67e6*/
  MEMORY[0x8A0154] = 0; /*0x4a67ed*/
  v2 = a2 << 16; /*0x4a67f2*/
  MEMORY[0x8A0158] = 0; /*0x4a67f5*/
  LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&MEMORY[0x8A0158] + 3) = v2; /*0x4a6802*/
  HIBYTE(MEMORY[0x8A015C]) = a2; /*0x4a6808*/
  return &MEMORY[0x8A0150]; /*0x4a6813*/
}
}
} // namespace gamemd

// 0x4A6820
namespace gamemd {
int sub_4A6820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A6820()
{
  MEMORY[0x8A0170] = 0; /*0x4a6822*/
  MEMORY[0x8A0174] = 0; /*0x4a6827*/
  MEMORY[0x8A0178] = 0; /*0x4a682c*/
  MEMORY[0x8A017C] = 0; /*0x4a6831*/
  return 0; /*0x4a6836*/
}
}
} // namespace gamemd

// 0x4A6840
namespace gamemd {
char * sub_4A6840(HWND hWnd, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4A6840(char *this, HWND hWnd, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int i; // eax
  _BYTE *v8; // ecx
  _DWORD *v9; // ebp
  HDC DC; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebp
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // ecx

  *this = 0; /*0x4a6855*/
  this->vtable1 = 0; /*0x4a6857*/
  this->vtable2 = 0; /*0x4a685a*/
  this->vtable3 = 0; /*0x4a685d*/
  this->uniqueId = a3; /*0x4a6860*/
  this->abstractFlags = a4; /*0x4a6863*/
  this->nextArrayIndex = 0; /*0x4a6866*/
  this->referenceCount = 0; /*0x4a6869*/
  this->NeedsSaveOrLink = 0; /*0x4a686c*/
  v6 = __2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  this->vtable1 = v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *(_DWORD *)(this->vtable1 + 4) = a3; /*0x4a688d*/
  *(_DWORD *)(this->vtable1 + 8) = -a4; /*0x4a6893*/
  *(_WORD *)(this->vtable1 + 12) = 1; /*0x4a689d*/
  *(_WORD *)(this->vtable1 + 14) = 8; /*0x4a68a6*/
  *(_DWORD *)(this->vtable1 + 16) = 0; /*0x4a68af*/
  *(_DWORD *)(this->vtable1 + 20) = 0; /*0x4a68b5*/
  *(_DWORD *)(this->vtable1 + 24) = 0; /*0x4a68bb*/
  *(_DWORD *)(this->vtable1 + 28) = 0; /*0x4a68c6*/
  *(_DWORD *)(this->vtable1 + 32) = 256; /*0x4a68cc*/
  *(_DWORD *)(this->vtable1 + 36) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *(_BYTE *)(this->vtable1 + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    v8 = (_BYTE *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *(_BYTE *)(this->vtable1 + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *(_BYTE *)(this->vtable1 + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *(_BYTE *)(this->vtable1 + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  v9 = this + 12; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  this->vtable2 = CreateDIBSection(DC, *((const BITMAPINFO **)this + 1), 0, (void **)this + 3, 0, 0); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !this->vtable2 ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  v11 = this->vtable1; /*0x4a6951*/
  this->uniqueId = *(_DWORD *)(v11 + 4); /*0x4a6957*/
  v12 = this->uniqueId; /*0x4a6962*/
  this->abstractFlags = abs32(*(_DWORD *)(v11 + 8)); /*0x4a6965*/
  v13 = v12 + 3; /*0x4a6968*/
  LOBYTE(v13) = (v12 + 3) & 0xFC; /*0x4a696b*/
  this->referenceCount = v13; /*0x4a696d*/
  if ( *(int *)(v11 + 8) <= 0 ) /*0x4a6975*/
  {
    this->nextArrayIndex = *v9; /*0x4a698b*/
  }
  else
  {
    this->nextArrayIndex = *v9 + v12 * (this->abstractFlags - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  this->referenceCount = v13; /*0x4a698e*/
  v14 = abs32(v13); /*0x4a6998*/
  v15 = __2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    v16 = this->abstractFlags; /*0x4a69a8*/
    v17 = this->vtable3; /*0x4a69ab*/
    v15[2] = v16; /*0x4a69ae*/
    v15[1] = v14; /*0x4a69b9*/
    v15[3] = 0; /*0x4a69bc*/
    *v15 = &XSurface_Vtable; /*0x4a69bf*/
    v15[4] = 1; /*0x4a69c5*/
    Buffer::Init(v15 + 5, v17, v14 * v16); /*0x4a69cc*/
    *v15 = &BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = 0; /*0x4a69d9*/
  }
  this->NeedsSaveOrLink = v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
LABEL_12:
    *this = 1; /*0x4a69e2*/
  return this; /*0x4a69e7*/
}
}
} // namespace gamemd

// 0x4A6A60
namespace gamemd {
void sub_4A6A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a6a6c*/
  MEMORY[0x8A0238] = Math::Sqrt(v0 + v0); /*0x4a6a7e*/
}
}
} // namespace gamemd

// 0x4A6A90
namespace gamemd {
void sub_4A6A90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6A90()
{
  MEMORY[0x8A0288] = MEMORY[0x8A0238] / 60.0; /*0x4a6a9c*/
}
}
} // namespace gamemd

// 0x4A6AB0
namespace gamemd {
void sub_4A6AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6AB0()
{
  MEMORY[0x8A0270] = 1.0 / MEMORY[0x8A0288]; /*0x4a6abc*/
}
}
} // namespace gamemd

// 0x4A6AD0
namespace gamemd {
void sub_4A6AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6AD0()
{
  MEMORY[0x8A0268] = 0.0174532925199433 * 45.0; /*0x4a6adc*/
}
}
} // namespace gamemd

// 0x4A6AF0
namespace gamemd {
void sub_4A6AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6AF0()
{
  MEMORY[0x8A0240] = 0.0174532925199433 * 60.0; /*0x4a6afc*/
}
}
} // namespace gamemd

// 0x4A6B10
namespace gamemd {
void sub_4A6B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6B10()
{
  MEMORY[0x8A0200] = 0.0174532925199433 * 90.0; /*0x4a6b1c*/
}
}
} // namespace gamemd

// 0x4A6B30
namespace gamemd {
long long sub_4A6B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A6B30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0200] - MEMORY[0x8A0240]); /*0x4a6b42*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0238] * 0.5); /*0x4a6b56*/
  MEMORY[0x8A0290] = result; /*0x4a6b5b*/
  return result; /*0x4a6b60*/
}
}
} // namespace gamemd

// 0x4A6B70
namespace gamemd {
void sub_4A6B70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6B70()
{
  MEMORY[0x8A0248] = Math::ArcTan((double)MEMORY[0x8A0290] * 0.00390625); /*0x4a6b87*/
}
}
} // namespace gamemd

// 0x4A6BA0
namespace gamemd {
void sub_4A6BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A6BA0()
{
  MEMORY[0x8A0260] = Math::ArcTan((double)(2 * MEMORY[0x8A0290]) / MEMORY[0x8A0238]); /*0x4a6bc2*/
}
}
} // namespace gamemd

// 0x4A6BD0
namespace gamemd {
long long sub_4A6BD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A6BD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0290]) + 0.5); /*0x4a6beb*/
  MEMORY[0x8A0284] = result; /*0x4a6bf0*/
  return result; /*0x4a6bf6*/
}
}
} // namespace gamemd

// 0x4A6C00
namespace gamemd {
int sub_4A6C00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A6C00()
{
  MEMORY[0x8A0230] = 0; /*0x4a6c02*/
  MEMORY[0x8A0232] = 0; /*0x4a6c08*/
  return 0; /*0x4a6c0e*/
}
}
} // namespace gamemd

// 0x4A6C10
namespace gamemd {
int sub_4A6C10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A6C10()
{
  MEMORY[0x8A0250] = 0; /*0x4a6c12*/
  MEMORY[0x8A0254] = 0; /*0x4a6c17*/
  MEMORY[0x8A0258] = 0; /*0x4a6c1c*/
  return 0; /*0x4a6c21*/
}
}
} // namespace gamemd

// 0x4A6C30
namespace gamemd {
int sub_4A6C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A6C30()
{
  MEMORY[0x8A0280] = 0; /*0x4a6c35*/
  MEMORY[0x8A0278] = 128; /*0x4a6c3f*/
  MEMORY[0x8A027C] = 128; /*0x4a6c44*/
  return 128; /*0x4a6c49*/
}
}
} // namespace gamemd

// 0x4A6C50
namespace gamemd {
int sub_4A6C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A6C50()
{
  MEMORY[0x8A0220] = 0; /*0x4a6c52*/
  MEMORY[0x8A0224] = 0; /*0x4a6c57*/
  MEMORY[0x8A0228] = 0; /*0x4a6c5c*/
  MEMORY[0x8A022C] = 0; /*0x4a6c61*/
  return 0; /*0x4a6c66*/
}
}
} // namespace gamemd

// 0x4A6C70
namespace gamemd {
int sub_4A6C70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A6C70()
{
  MEMORY[0x8A020C] = 0; /*0x4a6c77*/
  MEMORY[0x8A0210] = 0; /*0x4a6c7c*/
  MEMORY[0x8A0214] = 1; /*0x4a6c81*/
  MEMORY[0x8A0215] = 0; /*0x4a6c88*/
  MEMORY[0x8A0208] = (int)&DynamicVectorClass<DiskLaserClass *>::`vftable'; /*0x4a6c8d*/
  MEMORY[0x8A021C] = 10; /*0x4a6c97*/
  MEMORY[0x8A0218] = 0; /*0x4a6ca1*/
  return atexit(sub_4A6CB0); /*0x4a6cac*/
}
}
} // namespace gamemd

// 0x4A6CB0
namespace gamemd {
void sub_4A6CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4A6CB0()
{
  MEMORY[0x8A0208] = (int)&VectorClass<DiskLaserClass *>::`vftable'; /*0x4a6cb8*/
  if ( MEMORY[0x8A020C] && MEMORY[0x8A0215] ) /*0x4a6ccc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A020C]); /*0x4a6ccf*/
    MEMORY[0x8A020C] = 0; /*0x4a6cd7*/
  }
  MEMORY[0x8A0215] = 0; /*0x4a6cdd*/
  MEMORY[0x8A0210] = 0; /*0x4a6ce3*/
}
}
} // namespace gamemd

// 0x4A6CF0
namespace gamemd {
long long Direction_InitOffsets()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 Direction_InitOffsets()
{
  double v0; // st7
  int v1; // esi
  double v2; // st7
  double v3; // st7
  int v4; // esi
  double v5; // st7
  double v6; // st7
  int v7; // esi
  double v8; // st7
  double v9; // st7
  int v10; // esi
  double v11; // st7
  double v12; // st7
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // esi
  double v17; // st7
  double v18; // st7
  int v19; // esi
  double v20; // st7
  double v21; // st7
  int v22; // esi
  double v23; // st7
  double v24; // st7
  int v25; // esi
  double v26; // st7
  double v27; // st7
  int v28; // esi
  double v29; // st7
  double v30; // st7
  int v31; // esi
  double v32; // st7
  double v33; // st7
  int v34; // esi
  double v35; // st7
  double v36; // st7
  int v37; // esi
  double v38; // st7
  double v39; // st7
  int v40; // esi
  double v41; // st7
  double v42; // st7
  int v43; // esi
  double v44; // st7
  double v45; // st7
  int v46; // esi
  double v47; // st7
  __int64 result; // rax

  v0 = Math::SinCos(0.0174532925199433 * 270.0); /*0x4a6d03*/
  v1 = Math::RoundToInt(v0 * 240.0); /*0x4a6d1f*/
  v2 = Math::ArcTan2(0.0174532925199433 * 270.0); /*0x4a6d24*/
  MEMORY[0x8A0180][0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  MEMORY[0x8A0184][0] = v1; /*0x4a6d45*/
  v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  MEMORY[0x8A0188] = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  MEMORY[0x8A018C] = v4; /*0x4a6d90*/
  v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  MEMORY[0x8A0190] = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  MEMORY[0x8A0194] = v7; /*0x4a6ddb*/
  v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  MEMORY[0x8A0198] = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  MEMORY[0x8A019C] = v10; /*0x4a6e1e*/
  v12 = Math::SinCos(0.0); /*0x4a6e24*/
  v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  MEMORY[0x8A01A0] = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  MEMORY[0x8A01A4] = v13; /*0x4a6e5e*/
  v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  MEMORY[0x8A01A8] = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  MEMORY[0x8A01AC] = v16; /*0x4a6ea9*/
  v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  MEMORY[0x8A01B0] = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  MEMORY[0x8A01B4] = v19; /*0x4a6ef4*/
  v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  MEMORY[0x8A01B8] = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  MEMORY[0x8A01BC] = v22; /*0x4a6f3f*/
  v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  MEMORY[0x8A01C0] = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  MEMORY[0x8A01C4] = v25; /*0x4a6f8a*/
  v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  MEMORY[0x8A01C8] = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  MEMORY[0x8A01CC] = v28; /*0x4a6fd5*/
  v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  MEMORY[0x8A01D0] = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  MEMORY[0x8A01D4] = v31; /*0x4a7020*/
  v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  MEMORY[0x8A01D8] = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  MEMORY[0x8A01DC] = v34; /*0x4a706b*/
  v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  MEMORY[0x8A01E0] = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  MEMORY[0x8A01E4] = v37; /*0x4a70b6*/
  v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  MEMORY[0x8A01E8] = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  MEMORY[0x8A01EC] = v40; /*0x4a7101*/
  v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  MEMORY[0x8A01F0] = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  MEMORY[0x8A01F4] = v43; /*0x4a714c*/
  v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  result = Math::RoundToInt(v47 * 240.0); /*0x4a7184*/
  MEMORY[0x8A01FC] = v46; /*0x4a7189*/
  MEMORY[0x8A01F8] = result; /*0x4a718f*/
  return result; /*0x4a7194*/
}
}
} // namespace gamemd

// 0x4A80D6
namespace gamemd {
int sub_4A80D6()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// positive sp value has been detected, the output may be wrong!
int __fastcall sub_4A80D6(int a1, signed int a2)
{
  int v4; // esi
  signed int v5; // ebx
  signed int v6; // eax
  int v7; // ebp
  HANDLE FileA; // eax
  DWORD Ticks; // [esp-110h] [ebp-120h]
  signed int v11; // [esp-108h] [ebp-118h]
  DWORD v12; // [esp-104h] [ebp-114h] BYREF
  DWORD v13[4]; // [esp-100h] [ebp-110h] BYREF
  CHAR v14[128]; // [esp-F0h] [ebp-100h] BYREF
  CHAR v15[128]; // [esp-70h] [ebp-80h] BYREF

  Timer::GetTicks(); /*0x4a80e2*/
  v11 = a2; /*0x4a80fc*/
  v4 = a1 + 65; /*0x4a8100*/
  Ticks = Timer::GetTicks(); /*0x4a8109*/
  wsprintfA(v14, MEMORY[0x81C4B4], a1 + 65); /*0x4a8120*/
  if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a814a*/
  {
LABEL_8:
    if ( !_strcmpi(aYr1, v15) ) /*0x4a81cd*/
    {
      v7 = 0; /*0x4a81e4*/
      wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a81e6*/
      FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a8206*/
      if ( FileA != (HANDLE)-1 ) /*0x4a820b*/
      {
LABEL_12:
        CloseHandle(FileA); /*0x4a8241*/
        return 2; /*0x4a8257*/
      }
      while ( ++v7 < 2 ) /*0x4a820d*/
      {
        wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a821e*/
        FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a823a*/
        if ( FileA != (HANDLE)-1 ) /*0x4a823f*/
          goto LABEL_12; /*0x4a823f*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x4a8154*/
    {
      v5 = v11; /*0x4a8154*/
      if ( Ticks != -1 ) /*0x4a815b*/
      {
        v6 = Timer::GetTicks() - Ticks; /*0x4a8166*/
        if ( v6 >= v11 ) /*0x4a816c*/
          return -1; /*0x4a816c*/
        v5 = v11 - v6; /*0x4a8172*/
      }
      if ( !v5 || GetLastError() != 21 ) /*0x4a8185*/
        break; /*0x4a8185*/
      wsprintfA(v14, MEMORY[0x81C4B4], v4); /*0x4a8196*/
      if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a81ba*/
        goto LABEL_8; /*0x4a81be*/
    }
  }
  return -1; /*0x4a8257*/
}
}
} // namespace gamemd

// 0x4A83D0
namespace gamemd {
bool sub_4A83D0(INIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall sub_4A83D0(INIClass *aP0)
{
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF

  sprintf(Buffer, &stru_81FFCC, aP0); /*0x4a83e5*/
  return MessageBoxA(0, Buffer, aHey, 1u) == 1; /*0x4a8407*/
}
}
} // namespace gamemd

// 0x4A8410
namespace gamemd {
char sub_4A8410(int a1)
{
return 1;
}
} // namespace gamemd

// 0x4A8420
namespace gamemd {
int sub_4A8420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A8420()
{
  MEMORY[0x8A03E8] = 0; /*0x4a8422*/
  MEMORY[0x8A03EC] = 0; /*0x4a8427*/
  MEMORY[0x8A03F0] = 0; /*0x4a842c*/
  MEMORY[0x8A03F4] = 0; /*0x4a8431*/
  return 0; /*0x4a8436*/
}
}
} // namespace gamemd

// 0x4A8440
namespace gamemd {
void sub_4A8440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A8440()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a844c*/
  MEMORY[0x8A0400] = Math::Sqrt(v0 + v0); /*0x4a845e*/
}
}
} // namespace gamemd

// 0x4A8470
namespace gamemd {
void sub_4A8470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A8470()
{
  MEMORY[0x8A0738] = MEMORY[0x8A0400] / 60.0; /*0x4a847c*/
}
}
} // namespace gamemd

// 0x4A8490
namespace gamemd {
void sub_4A8490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A8490()
{
  MEMORY[0x8A0628] = 1.0 / MEMORY[0x8A0738]; /*0x4a849c*/
}
}
} // namespace gamemd

// 0x4A84B0
namespace gamemd {
void sub_4A84B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A84B0()
{
  MEMORY[0x8A0620] = 0.0174532925199433 * 45.0; /*0x4a84bc*/
}
}
} // namespace gamemd

// 0x4A84D0
namespace gamemd {
void sub_4A84D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A84D0()
{
  MEMORY[0x8A0408] = 0.0174532925199433 * 60.0; /*0x4a84dc*/
}
}
} // namespace gamemd

// 0x4A84F0
namespace gamemd {
void sub_4A84F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A84F0()
{
  MEMORY[0x8A03D8] = 0.0174532925199433 * 90.0; /*0x4a84fc*/
}
}
} // namespace gamemd

// 0x4A8510
namespace gamemd {
long long sub_4A8510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A8510()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A03D8] - MEMORY[0x8A0408]); /*0x4a8522*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0400] * 0.5); /*0x4a8536*/
  MEMORY[0x8A0740] = result; /*0x4a853b*/
  return result; /*0x4a8540*/
}
}
} // namespace gamemd

// 0x4A8550
namespace gamemd {
void sub_4A8550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A8550()
{
  MEMORY[0x8A0410] = Math::ArcTan((double)MEMORY[0x8A0740] * 0.00390625); /*0x4a8567*/
}
}
} // namespace gamemd

// 0x4A8580
namespace gamemd {
void sub_4A8580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4A8580()
{
  MEMORY[0x8A0610] = Math::ArcTan((double)(2 * MEMORY[0x8A0740]) / MEMORY[0x8A0400]); /*0x4a85a2*/
}
}
} // namespace gamemd

// 0x4A85B0
namespace gamemd {
long long sub_4A85B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4A85B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0740]) + 0.5); /*0x4a85cb*/
  MEMORY[0x8A0730] = result; /*0x4a85d0*/
  return result; /*0x4a85d6*/
}
}
} // namespace gamemd

// 0x4A85E0
namespace gamemd {
int sub_4A85E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A85E0()
{
  MEMORY[0x8A03F8] = 0; /*0x4a85e2*/
  return 0; /*0x4a85ee*/
}
}
} // namespace gamemd

// 0x4A85F0
namespace gamemd {
int sub_4A85F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A85F0()
{
  MEMORY[0x8A0600] = 0; /*0x4a85f2*/
  MEMORY[0x8A0604] = 0; /*0x4a85f7*/
  MEMORY[0x8A0608] = 0; /*0x4a85fc*/
  return 0; /*0x4a8601*/
}
}
} // namespace gamemd

// 0x4A8610
namespace gamemd {
int sub_4A8610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A8610()
{
  MEMORY[0x8A0728] = 0; /*0x4a8615*/
  MEMORY[0x8A0720] = 128; /*0x4a861f*/
  MEMORY[0x8A0724] = 128; /*0x4a8624*/
  return 128; /*0x4a8629*/
}
}
} // namespace gamemd

// 0x4A8630
namespace gamemd {
int sub_4A8630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A8630()
{
  _DWORD *v0; // eax
  int v1; // edx

  v0 = &MEMORY[0x8A0368]; /*0x4a8630*/
  v1 = 5; /*0x4a8635*/
  do /*0x4a866b*/
  {
    *(v0 - 1) = 0; /*0x4a863c*/
    *v0 = 0; /*0x4a863f*/
    *((_BYTE *)v0 + 4) = 1; /*0x4a8641*/
    *((_BYTE *)v0 + 5) = 0; /*0x4a8645*/
    *(v0 - 2) = &VectorClass<ObjectClass *>::`vftable'; /*0x4a8648*/
    *(v0 - 2) = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4a864f*/
    v0[3] = 10; /*0x4a8656*/
    v0[2] = 0; /*0x4a865d*/
    *(v0 - 2) = &off_7E6060; /*0x4a8660*/
    v0 += 6; /*0x4a8667*/
    --v1; /*0x4a866a*/
  }
  while ( v1 ); /*0x4a866b*/
  return atexit(sub_4A8680); /*0x4a8678*/
}
}
} // namespace gamemd

// 0x4A8680
namespace gamemd {
void sub_4A8680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4A8680()
{
  int v0; // esi
  int v1; // edi
  void *v2; // eax

  if ( (MEMORY[0x8A03E1] & 1) == 0 ) /*0x4a868a*/
  {
    MEMORY[0x8A03E1] |= 1u; /*0x4a8691*/
    v0 = 9044956; /*0x4a8697*/
    v1 = 5; /*0x4a869c*/
    do /*0x4a86cb*/
    {
      v2 = *(void **)(v0 - 24); /*0x4a86a3*/
      v0 -= 24; /*0x4a86a6*/
      *(_DWORD *)(v0 - 4) = &VectorClass<ObjectClass *>::`vftable'; /*0x4a86ab*/
      if ( v2 ) /*0x4a86b2*/
      {
        if ( *(_BYTE *)(v0 + 9) ) /*0x4a86b4*/
        {
          __3_YAXPAX_Z(v2); /*0x4a86ba*/
          *(_DWORD *)v0 = 0; /*0x4a86c2*/
        }
      }
      --v1; /*0x4a86c4*/
      *(_BYTE *)(v0 + 9) = 0; /*0x4a86c5*/
      *(_DWORD *)(v0 + 4) = 0; /*0x4a86c8*/
    }
    while ( v1 ); /*0x4a86cb*/
  }
}
}
} // namespace gamemd

// 0x4A86E0
namespace gamemd {
int sub_4A86E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4A86E0()
{
  GadgetClass::Construct(MEMORY[0x8A06F8], 0, 0, 0, 0, 127, 1); /*0x4a86f1*/
  MEMORY[0x8A06F8][0] = (int)&DisplayClass::TacticalClass::`vftable'; /*0x4a86fb*/
  return atexit(sub_4A8710); /*0x4a870b*/
}
}
} // namespace gamemd

// 0x4A8710
namespace gamemd {
void sub_4A8710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4A8710()
{
  if ( (MEMORY[0x8A03E0] & 1) == 0 ) /*0x4a871a*/
  {
    MEMORY[0x8A03E0] |= 1u; /*0x4a871e*/
    GadgetClass::Dtor(MEMORY[0x8A06F8]); /*0x4a8729*/
  }
}
}
} // namespace gamemd

// 0x4A8D40
namespace gamemd {
void nullsub_10()
{
  ;
}
} // namespace gamemd

// 0x4A8EA0
namespace gamemd {
void nullsub_11()
// 0x4a8d40
{
  ;
}
} // namespace gamemd

// 0x4A8EB0
namespace gamemd {
char GetBuildingPlacement(IUnknown * aP0, int a2, DisplayClass * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall GetBuildingPlacement(IUnknown *aP0, int a2, DisplayClass *aP2, IUnknown *aP3)
{
  int FoundationWidth; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  char *v12; // esi
  int v13; // edi
  _DWORD *v14; // eax
  IUnknown *v15; // eax
  IUnknown *v16; // esi
  _DWORD *v17; // ecx
  __int16 v19[2]; // [esp+8h] [ebp-20h] BYREF
  int v20; // [esp+Ch] [ebp-1Ch]
  char *v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-Ch]
  IUnknown *aP0a; // [esp+2Ch] [ebp+4h]
  char aP2a; // [esp+34h] [ebp+Ch]
  IUnknown *aP3a; // [esp+38h] [ebp+10h]

  if ( a2 != *(_DWORD *)(HouseClass_Player.field_0 + 48) /*0x4a8f19*/
    || HouseClass_Player.__pad_5568[23223]
    || !aP2
    || LOWORD(aP3->field_0) == *(_WORD *)&stru_89E138.__pad_14B0[3600]
    && HIWORD(aP3->field_0) == *(_WORD *)&stru_89E138.__pad_14B0[3602]
    || !aP0
    || (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) != 7 )
  {
    return 1; /*0x4a905d*/
  }
  aP0a = (IUnknown *)BuildingTypeClass::GetFoundationHeight((int)aP0, 0); /*0x4a8f2c*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(aP0); /*0x4a8f30*/
  v6 = SLOWORD(aP3->field_0); /*0x4a8f35*/
  v7 = SHIWORD(aP3->field_0); /*0x4a8f38*/
  v8 = FoundationWidth; /*0x4a8f3c*/
  v9 = *(_DWORD *)&aP0->__pad_DFC[184] + 1; /*0x4a8f48*/
  v20 = v8; /*0x4a8f4b*/
  v23 = v7; /*0x4a8f54*/
  v10 = v6 - v9 + v8 + 2 * v9; /*0x4a8f58*/
  v11 = v7 - v9; /*0x4a8f5a*/
  aP2a = 0; /*0x4a8f61*/
  aP3a = (IUnknown *)(v6 - v9); /*0x4a8f66*/
  v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    v12 = (char *)aP0a + 2 * v9 + v11; /*0x4a8f74*/
    v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      v13 = v11; /*0x4a8f7c*/
      if ( v11 < (int)v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          v19[0] = (__int16)aP3a; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (__int16)aP3a < v6 || (__int16)aP3a >= v6 + v20 || (__int16)v13 < v23 || (__int16)v13 >= (int)aP0a + v23 ) /*0x4a8fb9*/
          {
            v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v19); /*0x4a8fc5*/
            v15 = (IUnknown *)Cell::IsBridge(v14); /*0x4a8fcc*/
            v16 = v15; /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              v17 = (_DWORD *)v15->field_21C; /*0x4a8fd7*/
              if ( v17[12] == a2 && *(_BYTE *)(v15->field_520 + 5455) ) /*0x4a8fec*/
                aP2a = 1; /*0x4a8ff5*/
              if ( HouseClass_Player.__pad_5568[8112] /*0x4a900e*/
                && (unsigned __int8)HouseClass::IsAlliedWith(v17, *(IUnknown **)&HouseClass_Array->__pad_0[4 * a2]) )
              {
                if ( *(_BYTE *)(v16->field_520 + 5456) ) /*0x4a901d*/
                  aP2a = 1; /*0x4a9027*/
              }
            }
          }
          v12 = v21; /*0x4a902c*/
          ++v13; /*0x4a9030*/
        }
        while ( v13 < (int)v21 ); /*0x4a9033*/
        v10 = v22; /*0x4a9039*/
      }
      aP3a = (IUnknown *)((char *)aP3a + 1); /*0x4a9044*/
    }
    while ( (int)aP3a < v10 ); /*0x4a9048*/
  }
  return aP2a; /*0x4a9054*/
}
}
} // namespace gamemd

// 0x4A9070
namespace gamemd {
bool ProcessDataBuildingTypeClass(unsigned int * a0, DisplayClass * aP1, DisplayClass * aP2, short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall ProcessDataBuildingTypeClass(_DWORD *a0, DisplayClass *aP1, DisplayClass *aP2, __int16 *a3)
{
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // edx
  DisplayClass *v8; // eax
  int v9; // ebp
  int v10; // edi
  _DWORD v12[2]; // [esp+10h] [ebp-1Ch] BYREF
  int GroundHeight; // [esp+18h] [ebp-14h]
  int v14; // [esp+20h] [ebp-Ch]
  DisplayClass *aP1a; // [esp+34h] [ebp+8h]
  DisplayClass *aP2a; // [esp+38h] [ebp+Ch]

  if ( aP1 != *(DisplayClass **)(HouseClass_Player.field_0 + 48) /*0x4a90c0*/
    || HouseClass_Player.__pad_5568[23223]
    || !aP2
    || *a3 == *(_WORD *)&stru_89E138.__pad_14B0[3600] && a3[1] == *(_WORD *)&stru_89E138.__pad_14B0[3602] )
  {
    return 1; /*0x4a90c0*/
  }
  if ( !a0 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a0, 0); /*0x4a90ed*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a0); /*0x4a90ef*/
  v6 = *a3; /*0x4a90f4*/
  v7 = a3[1]; /*0x4a90f7*/
  v8 = (DisplayClass *)(v6 + FoundationWidth); /*0x4a90fb*/
  v14 = v7; /*0x4a90fd*/
  v9 = v6; /*0x4a9103*/
  aP2a = v8; /*0x4a9105*/
  if ( v6 >= (int)v8 ) /*0x4a9109*/
    return 1; /*0x4a9109*/
  aP1a = (DisplayClass *)(v7 + FoundationHeight); /*0x4a9111*/
  while ( 1 ) /*0x4a9119*/
  {
    v10 = v7; /*0x4a9119*/
    if ( v7 < (int)aP1a ) /*0x4a911d*/
      break; /*0x4a911d*/
LABEL_14:
    if ( ++v9 >= (int)v8 ) /*0x4a917e*/
      return 1; /*0x4a917e*/
  }
  while ( 1 ) /*0x4a913d*/
  {
    v12[1] = ((__int16)v10 << 8) + 128; /*0x4a913d*/
    v12[0] = ((__int16)v9 << 8) + 128; /*0x4a9146*/
    GroundHeight = 0; /*0x4a914a*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)v12); /*0x4a9157*/
    if ( Cell::IsPassable((IUnknown *)v12) ) /*0x4a9161*/
      return a0[918] != 0; /*0x4a919f*/
    if ( ++v10 >= (int)aP1a ) /*0x4a9171*/
    {
      v7 = v14; /*0x4a9173*/
      v8 = aP2a; /*0x4a9177*/
      goto LABEL_14; /*0x4a9177*/
    }
  }
}
}
} // namespace gamemd

// 0x4A9770
namespace gamemd {
void RemoveTarget(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall RemoveTarget(IUnknown *aP0)
{
  IUnknown *v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  char *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx

  v1 = aP0; /*0x4a9772*/
  if ( aP0 ) /*0x4a9778*/
  {
    v2 = *(_DWORD *)&aP0->__pad_8C[8]; /*0x4a977e*/
    if ( v2 != -1 ) /*0x4a9787*/
    {
      v3 = 3 * v2; /*0x4a978d*/
      v4 = 8 * v3 + 9044832; /*0x4a979b*/
      v5 = (*(int (__thiscall **)(int, IUnknown **))(*(_DWORD *)&stru_89E138.__pad_14B0[8 * v3 + 3448] + 16))(v4, &aP0); /*0x4a97a9*/
      if ( v5 != -1 ) /*0x4a97af*/
      {
        v6 = *(_DWORD *)(v4 + 16); /*0x4a97b1*/
        if ( v5 < v6 ) /*0x4a97b6*/
        {
          v7 = v6 - 1; /*0x4a97b8*/
          for ( *(_DWORD *)(v4 + 16) = v7; /*0x4a97be*/
                v5 < *(_DWORD *)(v4 + 16);
                *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5) )
          {
            ++v5; /*0x4a97c3*/
          }
          *(_DWORD *)&v1->__pad_8C[8] = -1; /*0x4a97d2*/
        }
      }
      if ( *(_DWORD *)&v1->__pad_8C[8] != -1 ) /*0x4a97e3*/
      {
        v8 = &stru_89E138.__pad_14B0[3464]; /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            v9 = *((_DWORD *)v8 - 4); /*0x4a97ea*/
            aP0 = v1; /*0x4a97f4*/
            v10 = (*(int (__thiscall **)(char *, IUnknown **))(v9 + 16))(v8 - 16, &aP0); /*0x4a97f9*/
            if ( v10 == -1 || v10 >= *(_DWORD *)v8 ) /*0x4a9805*/
              break; /*0x4a9805*/
            v11 = *(_DWORD *)v8 - 1; /*0x4a9807*/
            for ( *(_DWORD *)v8 = v11; /*0x4a980c*/
                  v10 < *(_DWORD *)v8;
                  *(_DWORD *)(*((_DWORD *)v8 - 3) + 4 * v10 - 4) = *(_DWORD *)(*((_DWORD *)v8 - 3) + 4 * v10) )
            {
              ++v10; /*0x4a9811*/
            }
          }
          v8 += 24; /*0x4a9821*/
        }
        while ( (int)v8 < (int)&stru_89E138.__pad_14B0[3584] ); /*0x4a982a*/
        *(_DWORD *)&v1->__pad_8C[8] = -1; /*0x4a982c*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x4AA2B0
namespace gamemd {
unsigned char * sub_4AA2B0(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__stdcall sub_4AA2B0(_BYTE *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  _BYTE *v5; // esi
  _BYTE *v6; // edi
  _BYTE v8[5]; // [esp+3h] [ebp-5h]

  v8[4] = 0; /*0x4aa2b7*/
  *(_DWORD *)v8 = a1 == 0; /*0x4aa2c8*/
  v1 = &MEMORY[0x820030]; /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( MEMORY[0x8A0370][v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
LABEL_12:
    if ( (int)++v1 >= (int)MEMORY[0x82003C] ) /*0x4aa35b*/
      return *(_BYTE **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    v4 = MEMORY[0x8A0364][v3]; /*0x4aa2ea*/
    v5 = *(_BYTE **)(v4 + 4 * v2); /*0x4aa2f0*/
    if ( !v5 ) /*0x4aa2f5*/
      goto LABEL_11; /*0x4aa2f5*/
    v6 = (v5[20] & 1) != 0 ? v5 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 100))(*(_DWORD *)(v4 + 4 * v2)) /*0x4aa318*/
      || !v6
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 316))(v6) )
    {
      goto LABEL_11; /*0x4aa320*/
    }
    if ( !*(_DWORD *)&v8[1] ) /*0x4aa328*/
      *(_DWORD *)&v8[1] = v5; /*0x4aa32a*/
    if ( v8[0] ) /*0x4aa334*/
      return v5; /*0x4aa369*/
    v8[0] = a1 == v5; /*0x4aa33c*/
LABEL_11:
    ++v2; /*0x4aa341*/
    v3 = 6 * *v1; /*0x4aa347*/
    if ( v2 >= MEMORY[0x8A0370][v3] ) /*0x4aa350*/
      goto LABEL_12; /*0x4aa350*/
  }
}
}
} // namespace gamemd

// 0x4AA380
namespace gamemd {
unsigned char * sub_4AA380(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__stdcall sub_4AA380(_BYTE *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  _BYTE v6[5]; // [esp+3h] [ebp-5h]

  v6[4] = 0; /*0x4aa387*/
  *(_DWORD *)v6 = a1 == 0; /*0x4aa398*/
  v1 = &MEMORY[0x82003C]; /*0x4aa3a1*/
  while ( 1 ) /*0x4aa3b2*/
  {
    v2 = MEMORY[0x8A0370][6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
LABEL_12:
    if ( (int)++v1 >= (int)&MEMORY[0x820048] ) /*0x4aa41d*/
      return *(_BYTE **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    v3 = *(_BYTE **)(MEMORY[0x8A0364][6 * *v1] + 4 * v2); /*0x4aa3c1*/
    if ( !v3 ) /*0x4aa3c6*/
      goto LABEL_11; /*0x4aa3c6*/
    v4 = (v3[20] & 1) != 0 ? v3 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 100))(v3) /*0x4aa3e8*/
      || !v4
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 316))(v4) )
    {
      goto LABEL_11; /*0x4aa3f0*/
    }
    if ( !*(_DWORD *)&v6[1] ) /*0x4aa3f8*/
      *(_DWORD *)&v6[1] = v3; /*0x4aa3fa*/
    if ( v6[0] ) /*0x4aa404*/
      return v3; /*0x4aa427*/
    v6[0] = a1 == v3; /*0x4aa40c*/
LABEL_11:
    if ( --v2 < 0 ) /*0x4aa412*/
      goto LABEL_12; /*0x4aa412*/
  }
}
}
} // namespace gamemd

// 0x4AC4F0
namespace gamemd {
void * sub_4AC4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_4AC4F0()
{
  int v0; // edi
  int v1; // eax
  int v2; // ebx
  char *v3; // ebp
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  void *result; // eax
  int v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v0 = 0; /*0x4ac4fb*/
  v1 = 0; /*0x4ac4fd*/
  v2 = 0; /*0x4ac4ff*/
  v10 = 0; /*0x4ac503*/
  v11 = 0; /*0x4ac507*/
  v12 = 0; /*0x4ac50b*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x4ac50f*/
  {
    v3 = (char *)MEMORY[0xA8EC7C]; /*0x4ac512*/
    v8 = MEMORY[0xA8EC88]; /*0x4ac519*/
    do /*0x4ac567*/
    {
      v4 = *(_DWORD *)v3; /*0x4ac51d*/
      if ( !*(_BYTE *)(*(_DWORD *)v3 + 129) && *(_BYTE *)(v4 + 1050) ) /*0x4ac52a*/
      {
        v1 += *(_DWORD *)(v4 + 156); /*0x4ac53e*/
        v2 += *(_DWORD *)(v4 + 160); /*0x4ac543*/
        v5 = *(_DWORD *)(v4 + 164); /*0x4ac549*/
        v10 = v1; /*0x4ac54c*/
        v11 = v2; /*0x4ac552*/
        v12 += v5; /*0x4ac556*/
        ++v0; /*0x4ac55a*/
      }
      v3 += 4; /*0x4ac55f*/
      --v8; /*0x4ac563*/
    }
    while ( v8 ); /*0x4ac567*/
  }
  v12 = 0; /*0x4ac56d*/
  if ( v0 ) /*0x4ac575*/
  {
    v10 = v1 / v0; /*0x4ac57a*/
    v6 = v2 / v0; /*0x4ac583*/
    v11 = v2 / v0; /*0x4ac58a*/
    v12 = 0 / v0; /*0x4ac58e*/
  }
  else
  {
    v10 = *HouseClass::GetStartCoords(HouseClass_Player, v13); /*0x4ac5aa*/
    v6 = HouseClass::GetStartCoords(HouseClass_Player, v13)[1]; /*0x4ac5ba*/
    v11 = v6; /*0x4ac5bd*/
  }
  LOWORD(v9) = v10 / 256; /*0x4ac5d3*/
  HIWORD(v9) = v6 / 256; /*0x4ac5e6*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466) = v9; /*0x4ac5f4*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466); /*0x4ac605*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462); /*0x4ac616*/
  *(_DWORD *)((char *)MEMORY[0xA8B230] + 13454) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458); /*0x4ac627*/
  result = MEMORY[0xA8B230]; /*0x4ac62d*/
  *((_DWORD *)MEMORY[0xA8B230] + 132) = *((_DWORD *)MEMORY[0xA8B230] + 131); /*0x4ac638*/
  if ( MEMORY[0x887324] ) /*0x4ac646*/
    return (void *)Tactical::SetTacticalPosition((int)MEMORY[0x887324], &v10); /*0x4ac64d*/
  return result; /*0x4ac5c5*/
}
}
} // namespace gamemd

// 0x4AE750
namespace gamemd {
int DispatchSelectionWaypointMove()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __userpurge DispatchSelectionWaypointMove@<al>(int a1, int a2, int a3, int a4)
{
  _DWORD **v4; // eax
  _DWORD *v5; // eax
  wchar_t *v6; // ecx
  int i; // esi
  int v8; // ecx
  int v9; // ebp
  int v10; // esi
  int *v11; // edi
  int v12; // eax
  wchar_t *v13; // ebp
  int v14; // esi
  int *v15; // edi
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // esi
  _DWORD *v22; // edi
  int v23; // ebp
  int v24; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v27; // [esp+10h] [ebp-8h] BYREF
  int v28; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v4) = MEMORY[0xA8ED6B]; /*0x4ae753*/
  v27 = -1; /*0x4ae761*/
  LOBYTE(v26) = 0; /*0x4ae765*/
  if ( MEMORY[0xA8ED6B] ) /*0x4ae769*/
    return (char)v4; /*0x4ae769*/
  a2 = *(_DWORD *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  v5 = Waypoint::FindByCell((char *)HouseClass_Player, &a2); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)HouseClass_Player, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = MEMORY[0xA8ECC8]; /*0x4ae7b3*/
  v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae7b9*/
  for ( i = 0; i < (int)MEMORY[0xA8ECC8]; ++i ) /*0x4ae7c4*/
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int, int))(*v4[i] + 420))(v4[i], v27, v26); /*0x4ae7d7*/
    v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae7dd*/
    v8 = *((_DWORD *)MEMORY[0xA8ECBC] + i); /*0x4ae7e2*/
    if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x4ae7f6*/
    {
      *(_BYTE *)(v8 + 1072) = 0; /*0x4ae7fa*/
      v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae800*/
    }
    v6 = MEMORY[0xA8ECC8]; /*0x4ae805*/
  }
  v9 = a1; /*0x4ae810*/
  if ( a1 ) /*0x4ae816*/
  {
    v10 = 0; /*0x4ae818*/
    if ( (int)v6 > 0 ) /*0x4ae81c*/
    {
      while ( 1 ) /*0x4ae82d*/
      {
        v11 = v4[v10]; /*0x4ae82d*/
        a1 = *v11; /*0x4ae836*/
        v12 = (*(int (__thiscall **)(int *, int, _DWORD, int, _DWORD))(a1 + 116))(v11, v9, 0, v9, 0); /*0x4ae83a*/
        (*(void (__thiscall **)(int *, int))(a3 + 324))(v11, v12); /*0x4ae844*/
        LOBYTE(v4) = (_BYTE)MEMORY[0xA8ECC8]; /*0x4ae84a*/
        ++v10; /*0x4ae851*/
        g_MoveFeedback = 0; /*0x4ae852*/
        if ( v10 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae85a*/
          break; /*0x4ae85a*/
        v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae824*/
      }
      g_MoveFeedback = 1; /*0x4ae85f*/
      return (char)v4; /*0x4ae86a*/
    }
LABEL_32:
    g_MoveFeedback = 1; /*0x4ae992*/
    return (char)v4; /*0x4ae993*/
  }
  if ( a3 == 1 || a3 == 51 ) /*0x4ae87d*/
  {
    v21 = 0; /*0x4ae94e*/
    if ( (int)v6 > 0 ) /*0x4ae952*/
    {
      while ( 1 ) /*0x4ae96b*/
      {
        v22 = v4[v21]; /*0x4ae96b*/
        v23 = *v22; /*0x4ae972*/
        v24 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v22 + 112))( /*0x4ae976*/
                v22,
                &a2,
                0,
                0,
                &a2,
                &a2,
                0);
        (*(void (__thiscall **)(_DWORD *, int))(v23 + 320))(v22, v24); /*0x4ae97c*/
        LOBYTE(v4) = (_BYTE)MEMORY[0xA8ECC8]; /*0x4ae982*/
        ++v21; /*0x4ae987*/
        g_MoveFeedback = 0; /*0x4ae98a*/
        if ( v21 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae990*/
          break; /*0x4ae990*/
        v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae956*/
      }
    }
    goto LABEL_32; /*0x4ae990*/
  }
  if ( a3 == 2 ) /*0x4ae886*/
  {
    v13 = v6; /*0x4ae888*/
    v14 = 0; /*0x4ae88a*/
    if ( (int)v6 <= 0 ) /*0x4ae88e*/
      goto LABEL_32; /*0x4ae88e*/
    while ( 1 ) /*0x4ae8a8*/
    {
      v15 = v4[v14]; /*0x4ae8a8*/
      a1 = *v15; /*0x4ae8b6*/
      v16 = (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(a1 + 112))( /*0x4ae8ba*/
              v15,
              &a2,
              0,
              0,
              &a2,
              &a2,
              0);
      LOBYTE(v4) = (*(int (__thiscall **)(int *, int))(a4 + 320))(v15, v16); /*0x4ae8c4*/
      ++v14; /*0x4ae8cc*/
      g_MoveFeedback = 0; /*0x4ae8cf*/
      if ( v14 >= (int)v13 ) /*0x4ae8d5*/
        break; /*0x4ae8d5*/
      v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae896*/
    }
    g_MoveFeedback = 1; /*0x4ae8da*/
  }
  else
  {
    v17 = 0; /*0x4ae8e8*/
    if ( (int)v6 <= 0 ) /*0x4ae8ec*/
      goto LABEL_32; /*0x4ae8ec*/
    while ( 1 ) /*0x4ae8fc*/
    {
      a1 = -1; /*0x4ae8fc*/
      v18 = v4[v17]; /*0x4ae916*/
      v19 = *v18; /*0x4ae91d*/
      v20 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v18 + 112))( /*0x4ae921*/
              v18,
              &a2,
              0,
              0,
              &a2,
              &a1,
              0);
      (*(void (__thiscall **)(_DWORD *, int))(v19 + 320))(v18, v20); /*0x4ae927*/
      LOBYTE(v4) = (_BYTE)MEMORY[0xA8ECC8]; /*0x4ae92d*/
      ++v17; /*0x4ae932*/
      g_MoveFeedback = 0; /*0x4ae935*/
      if ( v17 >= (int)MEMORY[0xA8ECC8] ) /*0x4ae93b*/
        break; /*0x4ae93b*/
      v4 = (_DWORD **)MEMORY[0xA8ECBC]; /*0x4ae8f4*/
    }
    g_MoveFeedback = 1; /*0x4ae940*/
  }
  return (char)v4; /*0x4ae85e*/
}
}
} // namespace gamemd

// 0x4AEA20
namespace gamemd {
int sub_4AEA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge sub_4AEA20@<eax>(int a1@<ebx>, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // ebx
  int v8; // eax
  int result; // eax

  if ( a2 == -1 ) /*0x4aea27*/
    v2 = 0; /*0x4aea29*/
  else
    v2 = 8 * (a2 % 12); /*0x4aea35*/
  v3 = 0; /*0x4aea46*/
  v4 = *(_DWORD *)(MEMORY[0x87F6C8] + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    v5 = (v3 + v2) % 256; /*0x4aea5b*/
    v6 = &MEMORY[0x885180][3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    LOWORD(v5) = (unsigned __int8)((unsigned __int8)v6[2] >> MEMORY[0x8A0DDC]); /*0x4aea83*/
    LOWORD(a1) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v6) >> MEMORY[0x8A0DE4]); /*0x4aea97*/
    v7 = a1 << MEMORY[0x8A0DE0]; /*0x4aea9b*/
    v8 = v7 | (v5 << MEMORY[0x8A0DD8]); /*0x4aeaa3*/
    LOWORD(v7) = (unsigned __int8)((unsigned __int8)*(_WORD *)v6 >> MEMORY[0x8A0DD4]); /*0x4aeab1*/
    a1 = v7 << MEMORY[0x8A0DD0]; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(_WORD *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}
}
} // namespace gamemd

// 0x4AECD0
namespace gamemd {
int sub_4AECD0(LPCSTR lpLibFileName)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4AECD0(LPCSTR lpLibFileName)
{
  int v1; // esi
  HMODULE LibraryA; // eax
  HMODULE v3; // edi
  FARPROC ProcAddress; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x4aecd6*/
  LibraryA = LoadLibraryA(lpLibFileName); /*0x4aecd8*/
  v3 = LibraryA; /*0x4aecde*/
  if ( LibraryA ) /*0x4aece2*/
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion); /*0x4aecea*/
    if ( ProcAddress ) /*0x4aecf2*/
    {
      v7 = 0; /*0x4aecff*/
      v6 = 20; /*0x4aed03*/
      v8 = 0; /*0x4aed0b*/
      v9 = 0; /*0x4aed0f*/
      v10 = 0; /*0x4aed13*/
      if ( ((int (__stdcall *)(int *))ProcAddress)(&v6) >= 0 ) /*0x4aed1b*/
        v1 = (unsigned __int16)v8 | ((unsigned __int16)v7 << 16); /*0x4aed33*/
    }
    FreeLibrary(v3); /*0x4aed36*/
  }
  return v1; /*0x4aed3e*/
}
}
} // namespace gamemd

// 0x4AED50
namespace gamemd {
int sub_4AED50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4AED50()
{
  MEMORY[0x8A0748] = 0; /*0x4aed52*/
  MEMORY[0x8A074C] = 0; /*0x4aed57*/
  MEMORY[0x8A0750] = 0; /*0x4aed5c*/
  MEMORY[0x8A0754] = 0; /*0x4aed61*/
  return 0; /*0x4aed66*/
}
}
} // namespace gamemd

// 0x4AED70
namespace gamemd {
int DrawToSurfaceSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall DrawToSurfaceSHP(
        int a1,
        int a2,
        ConvertClass *aP2,
        unsigned int arg4,
        ConvertClass *aP4,
        ConvertClass *aP5,
        ConvertClass *aP6,
        ConvertClass *aP7,
        int aP7a,
        ConvertClass *aP9,
        ConvertClass *aP10,
        ConvertClass *aP11,
        int a13,
        ConvertClass *aP13,
        int a15,
        ConvertClass *aP15)
{
  ConvertClass *v16; // edi
  _DWORD *v19; // eax
  IUnknown **v20; // eax
  int v21; // ecx
  int SubFile; // eax
  int v23; // edx
  int v24; // ebp
  ConvertClass *v25; // esi
  ObjectClass *v28; // esi
  _DWORD *v27; // edx
  int ecx19; // ecx
  IUnknown *v31; // eax
  TechnoClass *v30; // eax
  XSurface *SHPFrame; // eax
  AbstractClass *v32; // [esp-8h] [ebp-A8h]
  ObjectClass *v35; // [esp+Ch] [ebp-94h]
  ObjectClass *v36; // [esp+Ch] [ebp-94h]
  int var90a; // [esp+10h] [ebp-90h]
  ObjectClass *var90; // [esp+10h] [ebp-90h]
  ObjectClass *v39; // [esp+14h] [ebp-8Ch]
  ObjectClass *v40; // [esp+14h] [ebp-8Ch]
  XSurface a4; // [esp+18h] [ebp-88h] BYREF
  XSurface var78; // [esp+28h] [ebp-78h] BYREF
  XSurface *v41; // [esp+38h] [ebp-68h] BYREF
  XSurface *v50; // [esp+3Ch] [ebp-64h]
  int Height; // [esp+40h] [ebp-60h]
  TechnoClass *v52; // [esp+44h] [ebp-5Ch]
  TechnoClass *aP12; // [esp+48h] [ebp-58h]
  int v46; // [esp+4Ch] [ebp-54h]
  XSurface *v55; // [esp+50h] [ebp-50h]
  int v48; // [esp+54h] [ebp-4Ch]
  int v49; // [esp+58h] [ebp-48h]
  _DWORD *var44; // [esp+5Ch] [ebp-44h]
  IUnknown *v59; // [esp+60h] [ebp-40h] BYREF
  IUnknown *var3C; // [esp+64h] [ebp-3Ch]
  int v53; // [esp+68h] [ebp-38h]
  int v54; // [esp+6Ch] [ebp-34h]
  XSurface aP3; // [esp+70h] [ebp-30h] BYREF
  int v56; // [esp+80h] [ebp-20h]
  _DWORD v57[3]; // [esp+84h] [ebp-1Ch] BYREF
  _DWORD v58[4]; // [esp+90h] [ebp-10h] BYREF

  v16 = aP2; /*0x4aed79*/
  var44 = (_DWORD *)a2; /*0x4aed86*/
  v55 = (XSurface *)a1; /*0x4aed8a*/
  if ( aP2 ) /*0x4aed8e*/
  {
    if ( *(_WORD *)aP2->__pad_0 == 0xFFFF ) /*0x4aed98*/
    {
      if ( !aP2->__pad_6[10] ) /*0x4aed9a*/
        House::Constructor((char **)aP2); /*0x4aeda3*/
      v16 = *(ConvertClass **)&aP2->__pad_6[6]; /*0x4aeda8*/
    }
    if ( v16 ) /*0x4aedad*/
    {
      v19 = (_DWORD *)(*(int (__thiscall **)(int, XSurface **))(*(_DWORD *)a1 + 120))(a1, &v41); /*0x4aedbc*/
      v58[0] = *v19; /*0x4aedc1*/
      v58[1] = v19[1]; /*0x4aedcf*/
      v58[2] = v19[2]; /*0x4aedd9*/
      v58[3] = v19[3]; /*0x4aedec*/
      v59 = *(IUnknown **)aP5->__pad_0; /*0x4aedf5*/
      var3C = *(IUnknown **)&aP5->field_2[2]; /*0x4aedfc*/
      v53 = *(_DWORD *)&aP5->__pad_6[2]; /*0x4aee03*/
      v54 = *(_DWORD *)&aP5->__pad_6[6]; /*0x4aee12*/
      v20 = (IUnknown **)ClipRectIntersection((IUnknown *)&v41, (IUnknown *)aP5, (IUnknown *)v58, 0, 0); /*0x4aee1a*/
      v59 = *v20; /*0x4aee23*/
      var3C = v20[1]; /*0x4aee2a*/
      v53 = (int)v20[2]; /*0x4aee31*/
      v21 = (int)v20[3]; /*0x4aee35*/
      v54 = v21; /*0x4aee3a*/
      if ( v53 > 0 && v21 > 0 ) /*0x4aee46*/
      {
        *(_DWORD *)(a2 + 380) = aP7; /*0x4aee5a*/
        v35 = *(ObjectClass **)aP4->__pad_0; /*0x4aee75*/
        v39 = *(ObjectClass **)&aP4->field_2[2]; /*0x4aee79*/
        a4 = *(XSurface *)Building::GetFoundationSize(&v41, arg4); /*0x4aee84*/
        SubFile = MixFileClass::GetSubFile((char **)v16, arg4); /*0x4aeea0*/
        v23 = *(__int16 *)&v16->field_2[2]; /*0x4aeea9*/
        v24 = SubFile; /*0x4aeeb1*/
        v48 = *(__int16 *)v16->field_2; /*0x4aeeb7*/
        v49 = v23; /*0x4aeec1*/
        Surface::Construct(&aP3, (ObjectClass *)a4.Height, (IUnknown *)a4.LockCount); /*0x4aeec7*/
        aP3.LockCount = 0; /*0x4aeed8*/
        *(_DWORD *)aP3.__pad_0 = &XSurface_Vtable; /*0x4aeee3*/
        v56 = 1; /*0x4aeeeb*/
        Buffer::Init(v57, v24, (AbstractClass *)(a4.LockCount * a4.Height)); /*0x4aeef6*/
        *(_DWORD *)aP3.__pad_0 = &BSurface_Vtable; /*0x4aeefb*/
        v25 = aP15; /*0x4aef11*/
        aP12 = (TechnoClass *)a15; /*0x4aef18*/
        v46 = (int)aP15; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          var78 = *(XSurface *)Building::GetFoundationSize(&v41, (unsigned int)aP13); /*0x4aef3e*/
          v28 = (ObjectClass *)__2_YAPAXI_Z(0x20u); /*0x4aef5e*/
          if ( v28 ) /*0x4aef65*/
          {
            var90a = MixFileClass::GetSubFile((char **)a13, (unsigned int)aP13); /*0x4aef7c*/
            Surface::Construct(v28, (ObjectClass *)var78.Height, (IUnknown *)var78.LockCount); /*0x4aef86*/
            *(_DWORD *)&v28->__pad_0[12] = 0; /*0x4aef8b*/
            *(_DWORD *)v28->__pad_0 = &XSurface_Vtable; /*0x4aef92*/
            v32 = (AbstractClass *)(var78.LockCount * var78.Height); /*0x4aefa5*/
            v28->uniqueId = 1; /*0x4aefaa*/
            Buffer::Init(&v28->abstractFlags, var90a, v32); /*0x4aefb1*/
            *(_DWORD *)v28->__pad_0 = &BSurface_Vtable; /*0x4aefb6*/
            var90 = v28; /*0x4aefbc*/
            v25 = (ConvertClass *)v46; /*0x4aefc0*/
          }
          else
          {
            v25 = (ConvertClass *)v46; /*0x4aefc6*/
            var90 = 0; /*0x4aefca*/
          }
        }
        else
        {
          var78 = *(XSurface *)&stru_89E138.__pad_14B0[4448]; /*0x4aefe5*/
          var90 = 0; /*0x4aefee*/
        }
        if ( (BYTE1(aP6) & 2) != 0 ) /*0x4af00c*/
        {
          v35 = (ObjectClass *)((char *)v35 + v48 / -2); /*0x4af027*/
          v39 = (ObjectClass *)((char *)v39 + v49 / -2); /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          aP12 = (TechnoClass *)(a15 - (v48 / 2 - *(_DWORD *)a4.__pad_0)); /*0x4af05e*/
          v25 = (ConvertClass *)((char *)v25 - (v49 / 2 - a4.Width)); /*0x4af062*/
        }
        v36 = (ObjectClass *)((char *)v35 + *(_DWORD *)a4.__pad_0); /*0x4af072*/
        v40 = (ObjectClass *)((char *)v39 + a4.Width); /*0x4af07c*/
        *(_DWORD *)a4.__pad_0 = 0; /*0x4af084*/
        a4.Width = 0; /*0x4af088*/
        if ( !a13 ) /*0x4af08c*/
          goto LABEL_21; /*0x4af08c*/
        aP12 = (TechnoClass *)((char *)aP12 + *(_DWORD *)var78.__pad_0); /*0x4af0a0*/
        v25 = (ConvertClass *)((char *)v25 + var78.Width); /*0x4af0a6*/
        v41 = (XSurface *)-(int)aP12; /*0x4af0a8*/
        v50 = (XSurface *)-(int)v25; /*0x4af0b6*/
        Height = var78.Height; /*0x4af0be*/
        v52 = (TechnoClass *)var78.LockCount; /*0x4af0cb*/
        v27 = ClipRectIntersection((IUnknown *)&var78, (IUnknown *)&a4, (IUnknown *)&v41, 0, 0); /*0x4af0d4*/
        *(_DWORD *)a4.__pad_0 = *v27; /*0x4af0d8*/
        a4.Width = v27[1]; /*0x4af0df*/
        a4.Height = v27[2]; /*0x4af0e6*/
        ecx19 = v27[3]; /*0x4af0ea*/
        a4.LockCount = ecx19; /*0x4af0ef*/
        if ( a4.Height > 0 && ecx19 > 0 ) /*0x4af0fb*/
        {
LABEL_21:
          if ( aP7 ) /*0x4af10a*/
          {
            v31 = (IUnknown *)aP6; /*0x4af10c*/
            LOBYTE(v31) = (unsigned __int8)aP6 | 0x10; /*0x4af113*/
            aP6 = (ConvertClass *)v31; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v16, arg4) ) /*0x4af126*/
          {
            v30 = (TechnoClass *)LightConvertClass::SelectRLEBlitter(var44, (IUnknown *)aP6); /*0x4af13f*/
            if ( v30 ) /*0x4af146*/
            {
              v41 = (XSurface *)v36; /*0x4af154*/
              v50 = (XSurface *)v40; /*0x4af15c*/
              Height = a4.Height; /*0x4af164*/
              v52 = (TechnoClass *)a4.LockCount; /*0x4af16f*/
              BlitterRLEBlitSHP( /*0x4af1bf*/
                (IUnknown *)v55,
                (int *)&v59,
                (TechnoClass *)&v41,
                (IUnknown *)&aP3,
                &a4,
                (int *)a4.__pad_0,
                v30,
                aP7a,
                (int)aP9,
                (TechnoClass *)aP10,
                0,
                (int)var90,
                aP12,
                (int)v25,
                (int)aP11);
            }
          }
          else
          {
            SHPFrame = (XSurface *)BuildingClass::GetSHPFrame(var44, aP6); /*0x4af1d5*/
            if ( SHPFrame ) /*0x4af1dc*/
            {
              v50 = 0; /*0x4af1e6*/
              v41 = 0; /*0x4af1ee*/
              *(_DWORD *)var78.__pad_0 = v36; /*0x4af1f6*/
              var78.Width = (int)v40; /*0x4af1fe*/
              var78.Height = a4.Height; /*0x4af206*/
              var78.LockCount = a4.LockCount; /*0x4af211*/
              Height = aP3.Width; /*0x4af261*/
              v52 = (TechnoClass *)aP3.Height; /*0x4af265*/
              BlitterCopySHP( /*0x4af269*/
                v55,
                (XSurface *)&v59,
                &var78,
                &aP3,
                (int)&v41,
                &a4,
                SHPFrame,
                (XSurface *)aP7a,
                (XSurface *)aP9,
                (int)aP10,
                (int)aP11,
                0);
            }
          }
        }
        if ( var90 ) /*0x4af275*/
          (**(void (__thiscall ***)(ObjectClass *, int))var90->__pad_0)(var90, 1); /*0x4af27b*/
        Vector::Clear((int)v57); /*0x4af284*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x4AF2A0
namespace gamemd {
char BlitterDrawSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall BlitterDrawSHP(IUnknown *this)
{
  _DWORD *v1; // edx
  int SHPFrame; // eax
  int v4; // edx
  int v5; // eax
  XSurface *v7; // [esp-18h] [ebp-40h]
  XSurface aP2; // [esp+8h] [ebp-20h] BYREF
  char v9[16]; // [esp+18h] [ebp-10h] BYREF
  XSurface *aP3; // [esp+2Ch] [ebp+4h]
  XSurface *aP5; // [esp+30h] [ebp+8h]
  XSurface *v12; // [esp+34h] [ebp+Ch]
  XSurface *aP1; // [esp+38h] [ebp+10h]
  int v14; // [esp+3Ch] [ebp+14h]
  XSurface *aP6; // [esp+40h] [ebp+18h]
  XSurface *aP7; // [esp+44h] [ebp+1Ch]
  XSurface *aP8; // [esp+48h] [ebp+20h]
  int v18; // [esp+4Ch] [ebp+24h]
  int v19; // [esp+50h] [ebp+28h]
  int v20; // [esp+54h] [ebp+2Ch]

  SHPFrame = (int)aP6; /*0x4af2a0*/
  v1[95] = v14; /*0x4af2b1*/
  if ( !aP6 )
    SHPFrame = BuildingClass::GetSHPFrame(v1, v14 != 0 ? (ConvertClass *)0x10 : 0);
  v4 = *(_DWORD *)v12->__pad_0; /*0x4af2d0*/
  aP2.Width = v12->Width; /*0x4af2d5*/
  *(_DWORD *)aP2.__pad_0 = v4; /*0x4af2dd*/
  aP2.Height = aP5->Height; /*0x4af2e4*/
  aP2.LockCount = aP5->LockCount; /*0x4af2eb*/
  v7 = (XSurface *)SHPFrame; /*0x4af308*/
  v5 = (*(int (__thiscall **)(XSurface *, char *))(*(_DWORD *)aP3->__pad_0 + 120))(aP3, v9); /*0x4af313*/
  return BlitterCopySHP((XSurface *)this, aP1, &aP2, aP3, v5, aP5, v7, aP7, aP8, v18, v19, v20); /*0x4af328*/
}
}
} // namespace gamemd

// 0x4AF330
namespace gamemd {
void sub_4AF330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4af33c*/
  MEMORY[0x8A0778] = Math::Sqrt(v0 + v0); /*0x4af34e*/
}
}
} // namespace gamemd

// 0x4AF360
namespace gamemd {
void sub_4AF360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF360()
{
  MEMORY[0x8A07C8] = MEMORY[0x8A0778] / 60.0; /*0x4af36c*/
}
}
} // namespace gamemd

// 0x4AF380
namespace gamemd {
void sub_4AF380()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF380()
{
  MEMORY[0x8A07B0] = 1.0 / MEMORY[0x8A07C8]; /*0x4af38c*/
}
}
} // namespace gamemd

// 0x4AF3A0
namespace gamemd {
void sub_4AF3A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF3A0()
{
  MEMORY[0x8A07A8] = 0.0174532925199433 * 45.0; /*0x4af3ac*/
}
}
} // namespace gamemd

// 0x4AF3C0
namespace gamemd {
void sub_4AF3C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF3C0()
{
  MEMORY[0x8A0780] = 0.0174532925199433 * 60.0; /*0x4af3cc*/
}
}
} // namespace gamemd

// 0x4AF3E0
namespace gamemd {
void sub_4AF3E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF3E0()
{
  MEMORY[0x8A0758] = 0.0174532925199433 * 90.0; /*0x4af3ec*/
}
}
} // namespace gamemd

// 0x4AF400
namespace gamemd {
long long sub_4AF400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4AF400()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0758] - MEMORY[0x8A0780]); /*0x4af412*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0778] * 0.5); /*0x4af426*/
  MEMORY[0x8A07D0] = result; /*0x4af42b*/
  return result; /*0x4af430*/
}
}
} // namespace gamemd

// 0x4AF440
namespace gamemd {
void sub_4AF440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF440()
{
  MEMORY[0x8A0788] = Math::ArcTan((double)MEMORY[0x8A07D0] * 0.00390625); /*0x4af457*/
}
}
} // namespace gamemd

// 0x4AF470
namespace gamemd {
void sub_4AF470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4AF470()
{
  MEMORY[0x8A07A0] = Math::ArcTan((double)(2 * MEMORY[0x8A07D0]) / MEMORY[0x8A0778]); /*0x4af492*/
}
}
} // namespace gamemd

// 0x4AF4A0
namespace gamemd {
long long sub_4AF4A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4AF4A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A07D0]) + 0.5); /*0x4af4bb*/
  MEMORY[0x8A07C4] = result; /*0x4af4c0*/
  return result; /*0x4af4c6*/
}
}
} // namespace gamemd

// 0x4AF4D0
namespace gamemd {
int sub_4AF4D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4AF4D0()
{
  MEMORY[0x8A0770] = 0; /*0x4af4d2*/
  MEMORY[0x8A0772] = 0; /*0x4af4d8*/
  return 0; /*0x4af4de*/
}
}
} // namespace gamemd

// 0x4AF4E0
namespace gamemd {
int sub_4AF4E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4AF4E0()
{
  MEMORY[0x8A0790] = 0; /*0x4af4e2*/
  MEMORY[0x8A0794] = 0; /*0x4af4e7*/
  return 0; /*0x4af4f1*/
}
}
} // namespace gamemd

// 0x4AF500
namespace gamemd {
int sub_4AF500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4AF500()
{
  MEMORY[0x8A07C0] = 0; /*0x4af505*/
  MEMORY[0x8A07B8] = 128; /*0x4af50f*/
  MEMORY[0x8A07BC] = 128; /*0x4af514*/
  return 128; /*0x4af519*/
}
}
} // namespace gamemd

// 0x4AF520
namespace gamemd {
int sub_4AF520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4AF520()
{
  MEMORY[0x8A0760] = 0; /*0x4af522*/
  MEMORY[0x8A0764] = 0; /*0x4af527*/
  MEMORY[0x8A0768] = 0; /*0x4af52c*/
  MEMORY[0x8A076C] = 0; /*0x4af531*/
  return 0; /*0x4af536*/
}
}
} // namespace gamemd

// 0x4AF9B0
namespace gamemd {
void * sub_4AF9B0(void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall sub_4AF9B0(int *this, void *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int v11; // edx
  _DWORD v13[12]; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x4af9bc*/
  v3 = *(this + 12); /*0x4af9c1*/
  if ( v3 ) /*0x4af9ca*/
  {
    v4 = *(this + 9); /*0x4af9d0*/
    v5 = *(this + 11); /*0x4af9d3*/
    if ( v4 != -1 ) /*0x4af9df*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x4af9e7*/
        v5 = 0; /*0x4af9ed*/
      else
        v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x4af9e9*/
    }
    if ( (double)(v3 - v5) / (double)*(this + 12) < 1.0 ) /*0x4afa08*/
    {
      v6 = *(this + 12); /*0x4afa0a*/
      if ( v6 ) /*0x4afa13*/
      {
        v8 = *(this + 9); /*0x4afa1d*/
        v9 = *(this + 11); /*0x4afa20*/
        if ( v8 != -1 ) /*0x4afa26*/
        {
          if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x4afa30*/
        }
        v7 = (double)(v6 - v9) / (double)*(this + 12); /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, *(this + 8), *(this + 7), v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  v11 = *(this + 7); /*0x4afa5c*/
  if ( v11 ) /*0x4afa61*/
  {
    v10 = CopyAudioData(v14, v11); /*0x4afa67*/
LABEL_17:
    qmemcpy(v13, v10, sizeof(v13)); /*0x4afa77*/
  }
  qmemcpy(a2, v13, 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/
}
}
} // namespace gamemd

// 0x4AFAA0
namespace gamemd {
double sub_4AFAA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_4AFAA0(int *this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  v1 = *(this + 12); /*0x4afaa4*/
  if ( !v1 ) /*0x4afaad*/
    return 1.0; /*0x4afab9*/
  v3 = *(this + 9); /*0x4afaba*/
  v4 = *(this + 11); /*0x4afabd*/
  if ( v3 != -1 ) /*0x4afac3*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x4afacf*/
      return (double)(v1 - (v4 - ((int)MEMORY[0xA8ED84] - v3))) / (double)v1; /*0x4afae5*/
    v4 = 0; /*0x4afae6*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x4afab5*/
}
}
} // namespace gamemd

// 0x4AFB00
namespace gamemd {
int sub_4AFB00(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4AFB00(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = *(this + 7); /*0x4afb00*/
  if ( a2 != result ) /*0x4afb0c*/
  {
    *(this + 8) = result; /*0x4afb0e*/
    *(this + 7) = a2; /*0x4afb11*/
    v3 = this + 9; /*0x4afb19*/
    *v3 = MEMORY[0xA8ED84]; /*0x4afb22*/
    v3[1] = v4; /*0x4afb2a*/
    v3[2] = 3; /*0x4afb2d*/
    v3[3] = 3; /*0x4afb30*/
    return v4; /*0x4afb24*/
  }
  return result; /*0x4afb34*/
}
}
} // namespace gamemd

// 0x4AFED0
namespace gamemd {
BOOL sub_4AFED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_4AFED0(_DWORD *this)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  BOOL result; // eax

  v1 = *(this + 12); /*0x4afed4*/
  if ( v1 ) /*0x4afedd*/
  {
    v3 = *(this + 11); /*0x4afee7*/
    v4 = *(this + 9); /*0x4afeeb*/
    if ( v4 != -1 ) /*0x4afef1*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v3 ) /*0x4afefd*/
        v3 = 0; /*0x4aff03*/
      else
        v3 -= (int)MEMORY[0xA8ED84] - v4; /*0x4afeff*/
    }
    v2 = (double)(v1 - v3) / (double)(int)*(this + 12); /*0x4aff10*/
  }
  else
  {
    v2 = 1.0; /*0x4afedf*/
  }
  result = 0; /*0x4aff4f*/
  if ( v2 == 1.0 ) /*0x4aff20*/
  {
    v5 = *(this + 3); /*0x4aff22*/
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 ) /*0x4aff4d*/
      return 1; /*0x4aff20*/
  }
  return result; /*0x4aff54*/
}
}
} // namespace gamemd

// 0x4A3B30
namespace gamemd {
int ReturnNull()
{
return 0;
}
} // namespace gamemd

// 0x4A3BF0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_3()
{
return 1;
}
} // namespace gamemd

// 0x4A80D0
namespace gamemd {
int AlwaysFindYRCD()
{
return 2;
}
} // namespace gamemd
