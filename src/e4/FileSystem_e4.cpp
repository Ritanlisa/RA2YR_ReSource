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

// 0x626DA0
namespace gamemd {
int FileSystem::ProcessNextFileExtension()
{

  unsigned int *v0; // edi
  unsigned int *v1; // eax
  unsigned int *v2; // eax
  unsigned int *v3; // esi
  int v4; // eax
  int *v5; // eax
  unsigned int *v6; // ebp
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
  unsigned int *v19; // eax
  int k; // ebp
  int v21; // edi
  int v22; // ecx
  unsigned char *v23; // ebx
  int v24; // eax
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]
  int v27; // [esp+14h] [ebp-14h]
  int v28; // [esp+18h] [ebp-10h]
  unsigned int *v29; // [esp+18h] [ebp-10h]
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
        *v3 = &vt_DynamicVectorClass_char; /*0x626de6*/
        v3[5] = 10; /*0x626dec*/
        v3[4] = 0; /*0x626df3*/
      }
      else
      {
        v3 = 0; /*0x626df8*/
      }
      v0[1] = (unsigned int)(v3);
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
  v6 = (unsigned int *)v0[3]; /*0x626e4d*/
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
      v10 = (char *)(*(unsigned int *)(v8 + 4) + 4 * v9); /*0x626e80*/
      if ( !Flag::IsZero(v10) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v7 >= *(unsigned int *)(v8 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v10 ) /*0x626ec0*/
    {
      v13 = *((unsigned int *)MEMORY[0xAC48F0] + 3); /*0x626ece*/
      v14 = *(unsigned int *)v13 + 24 * ((*(int (**)(char *))(v13 + 4))(v10) % *(unsigned int *)(v13 + 8)); /*0x626ee1*/
      v15 = *(unsigned int *)(v14 + 16) - 1; /*0x626ee4*/
      v28 = v14; /*0x626ee5*/
      if ( v15 >= 0 ) /*0x626ee9*/
      {
        v16 = 260 * v15; /*0x626ef6*/
        for ( j = 260 * v15; ; v16 = j ) /*0x626ef9*/
        {
          v17 = (const char *)(*(unsigned int *)(v14 + 4) + v16); /*0x626f0b*/
          if ( String::Equals(v17, v10) ) /*0x626f0f*/
            break; /*0x626f0f*/
          --v15; /*0x626f1c*/
          j -= 260; /*0x626f25*/
          if ( v15 < 0 ) /*0x626f29*/
            return 0; /*0x626f36*/
          v14 = v28; /*0x626eff*/
        }
        v18 = v17 + 256; /*0x626f37*/
        if ( v18 && *(unsigned int *)(*(unsigned int *)v18 + 256) ) /*0x626f47*/
        {
          do /*0x626fd6*/
          {
            v19 = (unsigned int *)*((unsigned int *)MEMORY[0xAC48F0] + 3); /*0x626f63*/
            ++v27; /*0x626f66*/
            v29 = v19; /*0x626f6a*/
            if ( v30 >= v19[2] ) /*0x626f71*/
              break; /*0x626f71*/
            for ( k = 24 * v30; ; k += 24 ) /*0x626f77*/
            {
              v21 = *v19 + k; /*0x626f7e*/
              if ( v7 < *(unsigned int *)(v21 + 16) ) /*0x626f83*/
                break; /*0x626f83*/
LABEL_36:
              v7 = 0; /*0x626fb2*/
              if ( ++v30 >= v19[2] ) /*0x626fba*/
                return v27; /*0x626fba*/
            }
            while ( 1 ) /*0x626f8d*/
            {
              v22 = 65 * v7++; /*0x626f8d*/
              v23 = (unsigned char *)(*(unsigned int *)(v21 + 4) + 4 * v22); /*0x626f90*/
              if ( !Flag::IsZero(v23) ) /*0x626f95*/
                break; /*0x626f95*/
              if ( v7 >= *(unsigned int *)(v21 + 16) ) /*0x626fa1*/
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
          while ( *(unsigned int *)(*(unsigned int *)v24 + 256) ); /*0x626fd6*/
        }
      }
    }
  }
  return v27; /*0x626eb6*/

}
} // namespace gamemd
// 0x5F76B0
namespace gamemd {
void FileSystem::InitPipShapes()
{

  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  if ( !g_abs_AC1478 ) /*0x5f76ba*/
  {
    ((RawFileClass *)(v0))->Construct((int)g_abs_832AA8); /*0x5f76c5*/
    g_abs_AC1478 = (int)CCFileClass::ReadEntireFile(v0); /*0x5f76da*/
    g_abs_AC1488 = g_abs_AC1478 != 0; /*0x5f76df*/
    if ( !g_abs_AC1478 ) /*0x5f76e5*/
      g_abs_AC1478 = SearchMIXFile(g_abs_832AA8, 0); /*0x5f76f3*/
    RawFileClass::Dtor(v0); /*0x5f76fc*/
  }
  if ( !g_abs_AC147C ) /*0x5f7708*/
  {
    ((RawFileClass *)(v0))->Construct((int)g_abs_832A9C); /*0x5f7713*/
    g_abs_AC147C = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7728*/
    g_abs_AC1489 = g_abs_AC147C != 0; /*0x5f772d*/
    if ( !g_abs_AC147C ) /*0x5f7733*/
      g_abs_AC147C = SearchMIXFile(g_abs_832A9C, 0); /*0x5f7741*/
    RawFileClass::Dtor(v0); /*0x5f774a*/
  }
  if ( !g_abs_AC1480 ) /*0x5f7756*/
  {
    ((RawFileClass *)(v0))->Construct((int)g_abs_832A90); /*0x5f7761*/
    g_abs_AC1480 = (int)CCFileClass::ReadEntireFile(v0); /*0x5f7776*/
    g_abs_AC148A = g_abs_AC1480 != 0; /*0x5f777b*/
    if ( !g_abs_AC1480 ) /*0x5f7781*/
      g_abs_AC1480 = SearchMIXFile(g_abs_832A90, 0); /*0x5f778f*/
    RawFileClass::Dtor(v0); /*0x5f7798*/
  }
  if ( !g_abs_AC1484 ) /*0x5f77a4*/
  {
    ((RawFileClass *)(v0))->Construct((int)g_abs_832A80); /*0x5f77af*/
    g_abs_AC1484 = (int)CCFileClass::ReadEntireFile(v0); /*0x5f77c4*/
    g_abs_AC148B = g_abs_AC1484 != 0; /*0x5f77c9*/
    if ( !g_abs_AC1484 ) /*0x5f77cf*/
      g_abs_AC1484 = SearchMIXFile(g_abs_832A80, 0); /*0x5f77dd*/
    RawFileClass::Dtor(v0); /*0x5f77e6*/
  }

}
} // namespace gamemd
// 0x72D350
namespace gamemd {
void FileSystem::CleanupTrees()
{

  void *v0; // esi
  void *v1; // esi
  void *v2; // esi

  if ( g_abs_B0FBAC ) /*0x72d35a*/
  {
    g_abs_B0FBAC = 0; /*0x72d368*/
    if ( g_abs_B0FC70 ) /*0x72d36e*/
    {
      v0 = g_abs_B0FB34; /*0x72d370*/
      if ( g_abs_B0FB34 ) /*0x72d378*/
      {
        FileTreeNode::Destroy(g_abs_B0FB34); /*0x72d37c*/
        RA2_OPDEL(v0); /*0x72d382*/
      }
      g_abs_B0FC70 = 0; /*0x72d38a*/
    }
    g_abs_B0FB34 = 0; /*0x72d395*/
    if ( g_abs_B0FC71 ) /*0x72d39d*/
    {
      v1 = g_abs_B0FB00; /*0x72d39f*/
      if ( g_abs_B0FB00 ) /*0x72d3a7*/
      {
        FileTreeNode::Destroy(g_abs_B0FB00); /*0x72d3ab*/
        RA2_OPDEL(v1); /*0x72d3b1*/
      }
      g_abs_B0FC71 = 0; /*0x72d3b9*/
    }
    g_abs_B0FB00 = 0; /*0x72d3c4*/
    if ( g_abs_B0FC72 ) /*0x72d3cc*/
    {
      v2 = g_abs_B0FB30; /*0x72d3ce*/
      if ( g_abs_B0FB30 ) /*0x72d3d6*/
      {
        FileTreeNode::Destroy(g_abs_B0FB30); /*0x72d3da*/
        RA2_OPDEL(v2); /*0x72d3e0*/
      }
      g_abs_B0FC72 = 0; /*0x72d3e8*/
    }
    g_abs_B0FB30 = 0; /*0x72d3f3*/
    if ( g_abs_B0FBA4 ) /*0x72d3fc*/
    {
      RA2_OPDEL(g_abs_B0FBA4); /*0x72d3ff*/
      g_abs_B0FBA4 = 0; /*0x72d407*/
    }
    if ( g_abs_B0FBA8 ) /*0x72d415*/
    {
      (**(void (***)(int, int))g_abs_B0FBA8)(g_abs_B0FBA8, 1); /*0x72d41b*/
      g_abs_B0FBA8 = 0; /*0x72d41d*/
    }
  }

}
} // namespace gamemd