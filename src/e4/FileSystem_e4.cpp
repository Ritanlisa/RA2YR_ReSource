// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"

// 0x626DA0
int FileSystem::ProcessNextFileExtension()
{
{
  int k; // ebp
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]

  VectorClass *v0 = g_FileExtensionState; /*0x626da7*/
  if ( !g_FileExtensionState ) /*0x626db1*/
  {
    _DWORD * v1 = __2_YAPAXI_Z(0x10u); /*0x626db9*/
    v0 = v1; /*0x626dbe*/
    if ( v1 ) /*0x626dc5*/
    {
      *v1 = -1; /*0x626dc9*/
      _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x626dcf*/
      VectorClass *v3 = v2; /*0x626dd4*/
      if ( v2 ) /*0x626ddb*/
      {
        StringVector::Construct(v2, 0, 0); /*0x626de1*/
        *v3 = &vt_DynamicVectorClass_char; /*0x626de6*/
        v3[5] = 10; /*0x626dec*/
        v3[4] = 0; /*0x626df3*/
      }
      else
      {
        v3 = 0; /*0x626df8*/
      }
      v0[1] = v3; /*0x626dfc*/
      if ( __2_YAPAXI_Z(0x18u) ) /*0x626dff*/
        int v4 = FileExtension::Constructor(0, 0); /*0x626e0f*/
      else
        v4 = 0; /*0x626e16*/
      v0[2] = v4; /*0x626e1a*/
      int * v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x626e1d*/
      if ( v5 ) /*0x626e27*/
        v0[3] = DynamicVectorArray::Constructor(v5, 10, 31, (int)HashStringMod31); /*0x626e39*/
      else
        v0[3] = 0; /*0x626e40*/
    }
    else
    {
      v0 = 0; /*0x626e45*/
    }
    g_FileExtensionState = v0; /*0x626e47*/
  }
  _DWORD * v6 = (_DWORD *)v0[3]; /*0x626e4d*/
  int v7 = 0; /*0x626e50*/
  int v30 = 0; /*0x626e52*/
  int v27 = 0; /*0x626e56*/
  if ( (int)v6[2] > 0 ) /*0x626e5d*/
  {
  char *v10; // ebx
  int v8; // edi
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
      int v9 = 65 * v7++; /*0x626e7d*/
      v10 = (char *)(*(_DWORD *)(v8 + 4) + 4 * v9); /*0x626e80*/
      if ( !Flag::IsZero(v10) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v7 >= *(_DWORD *)(v8 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v10 ) /*0x626ec0*/
    {
      int v13 = g_FileExtensionState->IsInitialized; /*0x626ece*/
      int v14 = *(_DWORD *)v13 + 24 * ((*(int (__thiscall **)(char *))(v13 + 4))(v10) % *(_DWORD *)(v13 + 8)); /*0x626ee1*/
      int v15 = *(_DWORD *)(v14 + 16) - 1; /*0x626ee4*/
      int v28 = v14; /*0x626ee5*/
      if ( v15 >= 0 ) /*0x626ee9*/
      {
  const char *v17; // edi
        int v16 = 260 * v15; /*0x626ef6*/
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
        const char * v18 = v17 + 256; /*0x626f37*/
        if ( v18 && *(_DWORD *)(*(_DWORD *)v18 + 256) ) /*0x626f47*/
        {
  int v24; // eax
          do /*0x626fd6*/
          {
  _BYTE *v23; // ebx
  int v21; // edi
            _DWORD * v19 = (_DWORD *)g_FileExtensionState->IsInitialized; /*0x626f63*/
            ++v27; /*0x626f66*/
            _DWORD * v29 = v19; /*0x626f6a*/
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
              int v22 = 65 * v7++; /*0x626f8d*/
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

// 0x5F76B0
void FileSystem::InitPipShapes()
{
{
    int v0[9];
    if ( !FileSystem_PIPBRD_SHP )
  {
    RawFileClass::Construct(v0, (int)DataGlobal_832AA8);
    FileSystem_PIPBRD_SHP = (int)CCFileClass::ReadEntireFile(v0);
    DataGlobal_AC1488 = FileSystem_PIPBRD_SHP != 0;
    if ( !FileSystem_PIPBRD_SHP )
    FileSystem_PIPBRD_SHP = SearchMIXFile(DataGlobal_832AA8, 0);
    RawFileClass::Dtor(v0);
  }
    if ( !FileSystem_PIPS_SHP )
  {
    RawFileClass::Construct(v0, (int)DataGlobal_832A9C);
    FileSystem_PIPS_SHP = (int)CCFileClass::ReadEntireFile(v0);
    DataGlobal_AC1489 = FileSystem_PIPS_SHP != 0;
    if ( !FileSystem_PIPS_SHP )
    FileSystem_PIPS_SHP = SearchMIXFile(DataGlobal_832A9C, 0);
    RawFileClass::Dtor(v0);
  }
    if ( !FileSystem_PIPS2_SHP )
  {
    RawFileClass::Construct(v0, (int)DataGlobal_832A90);
    FileSystem_PIPS2_SHP = (int)CCFileClass::ReadEntireFile(v0);
    DataGlobal_AC148A = FileSystem_PIPS2_SHP != 0;
    if ( !FileSystem_PIPS2_SHP )
    FileSystem_PIPS2_SHP = SearchMIXFile(DataGlobal_832A90, 0);
    RawFileClass::Dtor(v0);
  }
    if ( !FileSystem_TALKBUBL_SHP )
  {
    RawFileClass::Construct(v0, (int)DataGlobal_832A80);
    FileSystem_TALKBUBL_SHP = (int)CCFileClass::ReadEntireFile(v0);
    DataGlobal_AC148B = FileSystem_TALKBUBL_SHP != 0;
    if ( !FileSystem_TALKBUBL_SHP )
    FileSystem_TALKBUBL_SHP = SearchMIXFile(DataGlobal_832A80, 0);
    RawFileClass::Dtor(v0);
  }
}
}

// 0x72D350
void FileSystem::CleanupTrees()
{
{
    void *v0;
    void *v1;
    void *v2;
    if ( DataGlobal_B0FBAC )
  {
    DataGlobal_B0FBAC = 0;
    if ( DataGlobal_B0FC70 )
    {
    v0 = DataGlobal_B0FB34;
    if ( DataGlobal_B0FB34 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB34);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FC70 = 0;
    }
    DataGlobal_B0FB34 = 0;
    if ( DataGlobal_B0FC71 )
    {
    v1 = DataGlobal_B0FB00;
    if ( DataGlobal_B0FB00 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB00);
    __3_YAXPAX_Z(v1);
      }
    DataGlobal_B0FC71 = 0;
    }
    DataGlobal_B0FB00 = 0;
    if ( DataGlobal_B0FC72 )
    {
    v2 = DataGlobal_B0FB30;
    if ( DataGlobal_B0FB30 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB30);
    __3_YAXPAX_Z(v2);
      }
    DataGlobal_B0FC72 = 0;
    }
    DataGlobal_B0FB30 = 0;
    if ( DataGlobal_B0FBA4 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FBA4);
    DataGlobal_B0FBA4 = 0;
    }
    if ( DataGlobal_B0FBA8 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBA8)(DataGlobal_B0FBA8, 1);
    DataGlobal_B0FBA8 = 0;
    }
  }
}
}
