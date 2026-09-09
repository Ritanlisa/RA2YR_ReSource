// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5F76B0
void FileSystem::InitPipShapes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void FileSystem_InitPipShapes()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  if ( !MEMORY[0xAC1478] ) /*0x5f76ba*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832AA8]); /*0x5f76c5*/
    MEMORY[0xAC1478] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f76da*/
    MEMORY[0xAC1488] = MEMORY[0xAC1478] != 0; /*0x5f76df*/
    if ( !MEMORY[0xAC1478] ) /*0x5f76e5*/
      MEMORY[0xAC1478] = SearchMIXFile(MEMORY[0x832AA8], 0); /*0x5f76f3*/
    RawFileClass::Dtor(v0); /*0x5f76fc*/
  }
  if ( !MEMORY[0xAC147C] ) /*0x5f7708*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832A9C]); /*0x5f7713*/
    MEMORY[0xAC147C] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7728*/
    MEMORY[0xAC1489] = MEMORY[0xAC147C] != 0; /*0x5f772d*/
    if ( !MEMORY[0xAC147C] ) /*0x5f7733*/
      MEMORY[0xAC147C] = SearchMIXFile(MEMORY[0x832A9C], 0); /*0x5f7741*/
    RawFileClass::Dtor(v0); /*0x5f774a*/
  }
  if ( !MEMORY[0xAC1480] ) /*0x5f7756*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832A90]); /*0x5f7761*/
    MEMORY[0xAC1480] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7776*/
    MEMORY[0xAC148A] = MEMORY[0xAC1480] != 0; /*0x5f777b*/
    if ( !MEMORY[0xAC1480] ) /*0x5f7781*/
      MEMORY[0xAC1480] = SearchMIXFile(MEMORY[0x832A90], 0); /*0x5f778f*/
    RawFileClass::Dtor(v0); /*0x5f7798*/
  }
  if ( !MEMORY[0xAC1484] ) /*0x5f77a4*/
  {
    RawFileClass::Construct(v0, (int)MEMORY[0x832A80]); /*0x5f77af*/
    MEMORY[0xAC1484] = (int)CCFileClass::ReadEntireFile(v0); /*0x5f77c4*/
    MEMORY[0xAC148B] = MEMORY[0xAC1484] != 0; /*0x5f77c9*/
    if ( !MEMORY[0xAC1484] ) /*0x5f77cf*/
      MEMORY[0xAC1484] = SearchMIXFile(MEMORY[0x832A80], 0); /*0x5f77dd*/
    RawFileClass::Dtor(v0); /*0x5f77e6*/
  }
}
}

// 0x626DA0
int FileSystem::ProcessNextFileExtension()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int FileSystem::ProcessNextFileExtension()
{
  _DWORD *v0; // edi
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int *v5; // eax
  _DWORD *v6; // ebp
  int v7; // esi
  int v8; // edi
  int v9; // eax
  char *v10; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // ebp
  int v16; // edi
  const char *v17; // edi
  const char *v18; // edi
  _DWORD *v19; // eax
  int k; // ebp
  int v21; // edi
  int v22; // ecx
  _BYTE *v23; // ebx
  int v24; // eax
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]
  int v27; // [esp+14h] [ebp-14h]
  int v28; // [esp+18h] [ebp-10h]
  _DWORD *v29; // [esp+18h] [ebp-10h]
  int v30; // [esp+1Ch] [ebp-Ch]

  v0 = MEMORY[0xAC48F0]; /*0x626da7*/
  if ( !MEMORY[0xAC48F0] ) /*0x626db1*/
  {
    v1 = __2_YAPAXI_Z(0x10u); /*0x626db9*/
    v0 = v1; /*0x626dbe*/
    if ( v1 ) /*0x626dc5*/
    {
      *v1 = -1; /*0x626dc9*/
      v2 = __2_YAPAXI_Z(0x18u); /*0x626dcf*/
      v3 = v2; /*0x626dd4*/
      if ( v2 ) /*0x626ddb*/
      {
        StringVector::Construct(v2, 0, 0); /*0x626de1*/
        *v3 = &DynamicVectorClass<char *>::`vftable'; /*0x626de6*/
        v3[5] = 10; /*0x626dec*/
        v3[4] = 0; /*0x626df3*/
      }
      else
      {
        v3 = 0; /*0x626df8*/
      }
      v0[1] = v3; /*0x626dfc*/
      if ( __2_YAPAXI_Z(0x18u) ) /*0x626dff*/
        v4 = FileExtension::Constructor(0, 0); /*0x626e0f*/
      else
        v4 = 0; /*0x626e16*/
      v0[2] = v4; /*0x626e1a*/
      v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x626e1d*/
      if ( v5 ) /*0x626e27*/
        v0[3] = DynamicVectorArray::Constructor(v5, 10, 31, (int)HashStringMod31); /*0x626e39*/
      else
        v0[3] = 0; /*0x626e40*/
    }
    else
    {
      v0 = 0; /*0x626e45*/
    }
    MEMORY[0xAC48F0] = v0; /*0x626e47*/
  }
  v6 = (_DWORD *)v0[3]; /*0x626e4d*/
  v7 = 0; /*0x626e50*/
  v30 = 0; /*0x626e52*/
  v27 = 0; /*0x626e56*/
  if ( (int)v6[2] > 0 ) /*0x626e5d*/
  {
    for ( i = 0; ; i += 24 ) /*0x626e63*/
    {
      v8 = i + *v6; /*0x626e6e*/
      if ( *(int *)(v8 + 16) > 0 ) /*0x626e73*/
        break; /*0x626e73*/
LABEL_19:
      v7 = 0; /*0x626e95*/
      if ( ++v30 >= v6[2] ) /*0x626ea6*/
        return 0; /*0x626ebd*/
    }
    while ( 1 ) /*0x626e7d*/
    {
      v9 = 65 * v7++; /*0x626e7d*/
      v10 = (char *)(*(_DWORD *)(v8 + 4) + 4 * v9); /*0x626e80*/
      if ( !Flag::IsZero(v10) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v7 >= *(_DWORD *)(v8 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v10 ) /*0x626ec0*/
    {
      v13 = *((_DWORD *)MEMORY[0xAC48F0] + 3); /*0x626ece*/
      v14 = *(_DWORD *)v13 + 24 * ((*(int (__thiscall **)(char *))(v13 + 4))(v10) % *(_DWORD *)(v13 + 8)); /*0x626ee1*/
      v15 = *(_DWORD *)(v14 + 16) - 1; /*0x626ee4*/
      v28 = v14; /*0x626ee5*/
      if ( v15 >= 0 ) /*0x626ee9*/
      {
        v16 = 260 * v15; /*0x626ef6*/
        for ( j = 260 * v15; ; v16 = j ) /*0x626ef9*/
        {
          v17 = (const char *)(*(_DWORD *)(v14 + 4) + v16); /*0x626f0b*/
          if ( String::Equals(v17, v10) ) /*0x626f0f*/
            break; /*0x626f0f*/
          --v15; /*0x626f1c*/
          j -= 260; /*0x626f25*/
          if ( v15 < 0 ) /*0x626f29*/
            return 0; /*0x626f36*/
          v14 = v28; /*0x626eff*/
        }
        v18 = v17 + 256; /*0x626f37*/
        if ( v18 && *(_DWORD *)(*(_DWORD *)v18 + 256) ) /*0x626f47*/
        {
          do /*0x626fd6*/
          {
            v19 = (_DWORD *)*((_DWORD *)MEMORY[0xAC48F0] + 3); /*0x626f63*/
            ++v27; /*0x626f66*/
            v29 = v19; /*0x626f6a*/
            if ( v30 >= v19[2] ) /*0x626f71*/
              break; /*0x626f71*/
            for ( k = 24 * v30; ; k += 24 ) /*0x626f77*/
            {
              v21 = *v19 + k; /*0x626f7e*/
              if ( v7 < *(_DWORD *)(v21 + 16) ) /*0x626f83*/
                break; /*0x626f83*/
LABEL_36:
              v7 = 0; /*0x626fb2*/
              if ( ++v30 >= v19[2] ) /*0x626fba*/
                return v27; /*0x626fba*/
            }
            while ( 1 ) /*0x626f8d*/
            {
              v22 = 65 * v7++; /*0x626f8d*/
              v23 = (_BYTE *)(*(_DWORD *)(v21 + 4) + 4 * v22); /*0x626f90*/
              if ( !Flag::IsZero(v23) ) /*0x626f95*/
                break; /*0x626f95*/
              if ( v7 >= *(_DWORD *)(v21 + 16) ) /*0x626fa1*/
              {
                v19 = v29; /*0x626fa3*/
                goto LABEL_36; /*0x626fa3*/
              }
            }
            if ( !v23 ) /*0x626fc0*/
              break; /*0x626fc0*/
            v24 = FileSystem::openFile(v23); /*0x626fcb*/
            if ( !v24 ) /*0x626fd2*/
              break; /*0x626fd2*/
          }
          while ( *(_DWORD *)(*(_DWORD *)v24 + 256) ); /*0x626fd6*/
        }
      }
    }
  }
  return v27; /*0x626eb6*/
}
}

// 0x72D350
void FileSystem::CleanupTrees()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void FileSystem_CleanupTrees()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi

  if ( MEMORY[0xB0FBAC] ) /*0x72d35a*/
  {
    MEMORY[0xB0FBAC] = 0; /*0x72d368*/
    if ( MEMORY[0xB0FC70] ) /*0x72d36e*/
    {
      v0 = MEMORY[0xB0FB34]; /*0x72d370*/
      if ( MEMORY[0xB0FB34] ) /*0x72d378*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB34]); /*0x72d37c*/
        __3_YAXPAX_Z(v0); /*0x72d382*/
      }
      MEMORY[0xB0FC70] = 0; /*0x72d38a*/
    }
    MEMORY[0xB0FB34] = 0; /*0x72d395*/
    if ( MEMORY[0xB0FC71] ) /*0x72d39d*/
    {
      v1 = MEMORY[0xB0FB00]; /*0x72d39f*/
      if ( MEMORY[0xB0FB00] ) /*0x72d3a7*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB00]); /*0x72d3ab*/
        __3_YAXPAX_Z(v1); /*0x72d3b1*/
      }
      MEMORY[0xB0FC71] = 0; /*0x72d3b9*/
    }
    MEMORY[0xB0FB00] = 0; /*0x72d3c4*/
    if ( MEMORY[0xB0FC72] ) /*0x72d3cc*/
    {
      v2 = MEMORY[0xB0FB30]; /*0x72d3ce*/
      if ( MEMORY[0xB0FB30] ) /*0x72d3d6*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB30]); /*0x72d3da*/
        __3_YAXPAX_Z(v2); /*0x72d3e0*/
      }
      MEMORY[0xB0FC72] = 0; /*0x72d3e8*/
    }
    MEMORY[0xB0FB30] = 0; /*0x72d3f3*/
    if ( MEMORY[0xB0FBA4] ) /*0x72d3fc*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FBA4]); /*0x72d3ff*/
      MEMORY[0xB0FBA4] = 0; /*0x72d407*/
    }
    if ( MEMORY[0xB0FBA8] ) /*0x72d415*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBA8])(MEMORY[0xB0FBA8], 1); /*0x72d41b*/
      MEMORY[0xB0FBA8] = 0; /*0x72d41d*/
    }
  }
}
}
