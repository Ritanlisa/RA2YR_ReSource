// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/DynamicVectorArray_e4.hpp"
#include "e4/classes/FileExtension_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/StringVector_e4.hpp"

// 0x626DA0
namespace gamemd {  // G42.18 ns repair
int FileSystem::ProcessNextFileExtension()
{

  FileSystem *v1; // edi
  FileSystem *v2; // eax
  StringVector *v3; // eax
  StringVector *v4; // esi
  FileExtension *v5; // eax
  unsigned int *v6; // eax
  DynamicVectorArray *v7; // eax
  unsigned int *v8; // ebp
  signed int v9; // esi
  int v10; // edi
  int v11; // eax
  Flag *v12; // ebx
  int v15; // edi
  unsigned int *v16; // eax
  signed int v17; // ebp
  int v18; // edi
  const char *v19; // edi
  const char *v20; // edi
  unsigned int *v21; // eax
  int k; // ebp
  unsigned int *v23; // edi
  int v24; // ecx
  Flag *v25; // ebx
  const char *v26; // eax
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]
  int v29; // [esp+14h] [ebp-14h]
  unsigned int *v30; // [esp+18h] [ebp-10h]
  unsigned int *v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch]

  v1 = g_FileExtensionState; /*0x626da7*/
  if ( !g_FileExtensionState ) /*0x626db1*/
  {
    v2 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x626db9*/
    v1 = v2; /*0x626dbe*/
    if ( v2 ) /*0x626dc5*/
    {
      *(unsigned int *)v2 = -1; /*0x626dc9*/
      v3 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x626dcf*/
      v4 = v3; /*0x626dd4*/
      if ( v3 ) /*0x626ddb*/
      {
        StringVector::Construct(v3, 0, 0); /*0x626de1*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E5BC4) */  /*0x626de6*/
        v4->StringVector_field_0x14 = 10; /*0x626dec*/
        v4->StringVector_field_0x10 = 0; /*0x626df3*/
      }
      else
      {
        v4 = 0; /*0x626df8*/
      }
      *(unsigned int *)&v1[4] = v4; /*0x626dfc*/
      v5 = (FileExtension *)__2_YAPAXI_Z(0x18u); /*0x626dff*/
      if ( v5 ) /*0x626e09*/
        v6 = (v5)->Constructor(0, 0); /*0x626e0f*/
      else
        v6 = 0; /*0x626e16*/
      *(unsigned int *)&v1[8] = v6; /*0x626e1a*/
      v7 = (DynamicVectorArray *)__2_YAPAXI_Z(0x10u); /*0x626e1d*/
      if ( v7 ) /*0x626e27*/
        *(unsigned int *)&v1[12] = (v7)->Constructor(10, 31, (int)HashStringMod31); /*0x626e39*/
      else
        *(unsigned int *)&v1[12] = 0; /*0x626e40*/
    }
    else
    {
      v1 = 0; /*0x626e45*/
    }
    g_FileExtensionState = v1; /*0x626e47*/
  }
  v8 = *(unsigned int **)&v1[12]; /*0x626e4d*/
  v9 = 0; /*0x626e50*/
  v32 = 0; /*0x626e52*/
  v29 = 0; /*0x626e56*/
  if ( (int)v8[2] > 0 ) /*0x626e5d*/
  {
    for ( i = 0; ; i += 24 ) /*0x626e63*/
    {
      v10 = i + *v8; /*0x626e6e*/
      if ( *(int *)(v10 + 16) > 0 ) /*0x626e73*/
        break; /*0x626e73*/
LABEL_19:
      v9 = 0; /*0x626e95*/
      if ( ++v32 >= v8[2] ) /*0x626ea6*/
        return 0; /*0x626ebd*/
    }
    while ( 1 ) /*0x626e7d*/
    {
      v11 = 65 * v9++; /*0x626e7d*/
      v12 = (Flag *)(*(unsigned int *)(v10 + 4) + 4 * v11); /*0x626e80*/
      if ( !(unsigned __int8)Flag::IsZero(v12) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v9 >= *(unsigned int *)(v10 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v12 ) /*0x626ec0*/
    {
      v15 = *(unsigned int *)&g_FileExtensionState[12]; /*0x626ece*/
      v16 = (unsigned int *)(*(unsigned int *)v15 /*0x626ee1*/
                           + 24 * ((*(int (**)(Flag *))(v15 + 4))(v12) % *(unsigned int *)(v15 + 8)));
      v17 = v16[4] - 1; /*0x626ee4*/
      v30 = v16; /*0x626ee5*/
      if ( v17 >= 0 ) /*0x626ee9*/
      {
        v18 = 260 * v17; /*0x626ef6*/
        for ( j = 260 * v17; ; v18 = j ) /*0x626ef9*/
        {
          v19 = (const char *)(v16[1] + v18); /*0x626f0b*/
          if ( (unsigned __int8)String::Equals(v19, v12->__pad_0) ) /*0x626f0f*/
            break; /*0x626f0f*/
          --v17; /*0x626f1c*/
          j -= 260; /*0x626f25*/
          if ( v17 < 0 ) /*0x626f29*/
            return 0; /*0x626f36*/
          v16 = v30; /*0x626eff*/
        }
        v20 = v19 + 256; /*0x626f37*/
        if ( v20 && *(unsigned int *)(*(unsigned int *)v20 + 256) ) /*0x626f47*/
        {
          do /*0x626fd6*/
          {
            v21 = *(unsigned int **)&g_FileExtensionState[12]; /*0x626f63*/
            ++v29; /*0x626f66*/
            v31 = v21; /*0x626f6a*/
            if ( v32 >= v21[2] ) /*0x626f71*/
              break; /*0x626f71*/
            for ( k = 24 * v32; ; k += 24 ) /*0x626f77*/
            {
              v23 = (unsigned int *)(*v21 + k); /*0x626f7e*/
              if ( v9 < (int)v23[4] ) /*0x626f83*/
                break; /*0x626f83*/
LABEL_36:
              v9 = 0; /*0x626fb2*/
              if ( ++v32 >= v21[2] ) /*0x626fba*/
                return v29; /*0x626fba*/
            }
            while ( 1 ) /*0x626f8d*/
            {
              v24 = 65 * v9++; /*0x626f8d*/
              v25 = (Flag *)(v23[1] + 4 * v24); /*0x626f90*/
              if ( !(unsigned __int8)Flag::IsZero(v25) ) /*0x626f95*/
                break; /*0x626f95*/
              if ( v9 >= (int)v23[4] ) /*0x626fa1*/
              {
                v21 = v31; /*0x626fa3*/
                goto LABEL_36; /*0x626fa3*/
              }
            }
            if ( !v25 ) /*0x626fc0*/
              break; /*0x626fc0*/
            v26 = FileSystem::openFile(*(FileSystem **)&g_FileExtensionState[12], v25->__pad_0); /*0x626fcb*/
            if ( !v26 ) /*0x626fd2*/
              break; /*0x626fd2*/
          }
          while ( *(unsigned int *)(*(unsigned int *)v26 + 256) ); /*0x626fd6*/
        }
      }
    }
  }
  return v29; /*0x626eb6*/

}
} // namespace gamemd
// 0x5F76B0
namespace gamemd {
void FileSystem::InitPipShapes()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  if ( !FileSystem_PIPBRD_SHP ) /*0x5f76ba*/
  {
    ((RawFileClass *)v0)->Construct((int)aPipbrdShp); /*0x5f76c5*/
    FileSystem_PIPBRD_SHP = (int)(v0)->ReadEntireFile(); /*0x5f76da*/
    byte_AC1488 = FileSystem_PIPBRD_SHP != 0; /*0x5f76df*/
    if ( !FileSystem_PIPBRD_SHP ) /*0x5f76e5*/
      FileSystem_PIPBRD_SHP = (int)(SearchMIXFile(aPipbrdShp, 0)); /*0x5f76f3*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f76fc*/
  }
  if ( !FileSystem_PIPS_SHP ) /*0x5f7708*/
  {
    ((RawFileClass *)v0)->Construct((int)aPipsShp); /*0x5f7713*/
    FileSystem_PIPS_SHP = (int)(v0)->ReadEntireFile(); /*0x5f7728*/
    byte_AC1489 = FileSystem_PIPS_SHP != 0; /*0x5f772d*/
    if ( !FileSystem_PIPS_SHP ) /*0x5f7733*/
      FileSystem_PIPS_SHP = (int)(SearchMIXFile(aPipsShp, 0)); /*0x5f7741*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f774a*/
  }
  if ( !FileSystem_PIPS2_SHP ) /*0x5f7756*/
  {
    ((RawFileClass *)v0)->Construct((int)aPips2Shp); /*0x5f7761*/
    FileSystem_PIPS2_SHP = (int)(v0)->ReadEntireFile(); /*0x5f7776*/
    byte_AC148A = FileSystem_PIPS2_SHP != 0; /*0x5f777b*/
    if ( !FileSystem_PIPS2_SHP ) /*0x5f7781*/
      FileSystem_PIPS2_SHP = (int)(SearchMIXFile(aPips2Shp, 0)); /*0x5f778f*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f7798*/
  }
  if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77a4*/
  {
    ((RawFileClass *)v0)->Construct((int)aTalkbublShp); /*0x5f77af*/
    FileSystem_TALKBUBL_SHP = (int)(v0)->ReadEntireFile(); /*0x5f77c4*/
    byte_AC148B = FileSystem_TALKBUBL_SHP != 0; /*0x5f77c9*/
    if ( !FileSystem_TALKBUBL_SHP ) /*0x5f77cf*/
      FileSystem_TALKBUBL_SHP = (int)(SearchMIXFile(aTalkbublShp, 0)); /*0x5f77dd*/
    ((RawFileClass *)(v0))->Dtor(); /*0x5f77e6*/
  }
}
} // namespace gamemd
// 0x72D350
namespace gamemd {
void FileSystem::CleanupTrees()
{

  if ( DataGlobal_B0FBAC ) /*0x72d35a*/
  {
    DataGlobal_B0FBAC = 0; /*0x72d368*/
    if ( DataGlobal_B0FC70 ) /*0x72d36e*/
    {
      void *v1; // esi
      v1 = *(void **)&DataGlobal_B0FB34; /*0x72d370*/
      if ( *(unsigned int *)&DataGlobal_B0FB34 ) /*0x72d378*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FB34)->Destroy(); /*0x72d37c*/
        operator delete((v1)); /*0x72d382*/
      }
      DataGlobal_B0FC70 = 0; /*0x72d38a*/
    }
    *(unsigned int *)&DataGlobal_B0FB34 = 0; /*0x72d395*/
    if ( DataGlobal_B0FC71 ) /*0x72d39d*/
    {
      void *v2; // esi
      v2 = *(void **)&DataGlobal_B0FB00; /*0x72d39f*/
      if ( *(unsigned int *)&DataGlobal_B0FB00 ) /*0x72d3a7*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FB00)->Destroy(); /*0x72d3ab*/
        operator delete((v2)); /*0x72d3b1*/
      }
      DataGlobal_B0FC71 = 0; /*0x72d3b9*/
    }
    *(unsigned int *)&DataGlobal_B0FB00 = 0; /*0x72d3c4*/
    if ( DataGlobal_B0FC72 ) /*0x72d3cc*/
    {
      void *v3; // esi
      v3 = *(void **)&DataGlobal_B0FB30; /*0x72d3ce*/
      if ( *(unsigned int *)&DataGlobal_B0FB30 ) /*0x72d3d6*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FB30)->Destroy(); /*0x72d3da*/
        operator delete((v3)); /*0x72d3e0*/
      }
      DataGlobal_B0FC72 = 0; /*0x72d3e8*/
    }
    *(unsigned int *)&DataGlobal_B0FB30 = 0; /*0x72d3f3*/
    if ( *(unsigned int *)&DataGlobal_B0FBA4 ) /*0x72d3fc*/
    {
      operator delete((*(void **)&DataGlobal_B0FBA4)); /*0x72d3ff*/
      *(unsigned int *)&DataGlobal_B0FBA4 = 0; /*0x72d407*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FBA8 ) /*0x72d415*/
    {
      (***(void (****)(unsigned int, int))&DataGlobal_B0FBA8)( /*0x72d41b*/
        *(unsigned int *)&DataGlobal_B0FBA8,
        1);
      *(unsigned int *)&DataGlobal_B0FBA8 = 0; /*0x72d41d*/
    }
  }
}
} // namespace gamemd