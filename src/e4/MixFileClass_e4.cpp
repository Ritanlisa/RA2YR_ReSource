// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AudioController_e4.hpp"

// 0x69E210
namespace gamemd {
void MixFileClass::CleanupCache()
{
  unsigned int v0;
  void *v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v4;
  unsigned char *v5; // ebp
  void *v6; // ecx
  unsigned int *v7; // edi
  int v8; // eax
  int v9; // eax

  v0 = dword_B077B0; /*0x69e213*/
  if ( dword_B077B0 ) /*0x69e21d*/
  {
    do /*0x69e289*/
    {
      if ( *(unsigned short *)v0 == 0xFFFF && *((unsigned char *)v0 + 16) ) /*0x69e225*/
      {
        v1 = (void *)v0[3]; /*0x69e22a*/
        if ( v1 ) /*0x69e22f*/
        {
          if ( *(unsigned short *)v1 == 0xFFFF ) /*0x69e235*/
          {
            BTree::DeleteSubtree((unsigned int *)v0[3]); /*0x69e239*/
            v2 = *((unsigned int *)v1 + 6); /*0x69e23e*/
            if ( v2 ) /*0x69e243*/
              *(unsigned int *)(v2 + 28) = *((unsigned int *)v1 + 7); /*0x69e248*/
            v3 = *((unsigned int *)v1 + 7); /*0x69e24b*/
            if ( v3 ) /*0x69e250*/
              *(unsigned int *)(v3 + 24) = *((unsigned int *)v1 + 6); /*0x69e255*/
            else
              dword_B077B0 = (void *)*((unsigned int *)v1 + 6); /*0x69e25d*/
            if ( *((unsigned int *)v1 + 2) ) /*0x69e262*/
            {
              free(*((void **)v1 + 2)); /*0x69e26a*/
              *((unsigned int *)v1 + 2) = 0; /*0x69e272*/
            }
          }
          RA2_OPDEL(v1); /*0x69e276*/
        }
        v0[3] = 0; /*0x69e27e*/
        *((unsigned char *)v0 + 16) = 0; /*0x69e281*/
      }
      v0 = (unsigned int *)v0[6]; /*0x69e284*/
    }
    while ( v0 ); /*0x69e289*/
  }
  v4 = dword_B077B4; /*0x69e28b*/
  if ( dword_B077B4 ) /*0x69e293*/
  {
    if ( *(unsigned short *)dword_B077B4 == 0xFFFF ) /*0x69e299*/
    {
      v5 = (unsigned char *)((char *)dword_B077B4 + 16);
      if ( *((unsigned char *)dword_B077B4 + 16) ) /*0x69e29b*/
      {
        v6 = (unsigned int *)((void *)*((unsigned int *)dword_B077B4 + 3));
        v7 = (unsigned int *)((char *)dword_B077B4 + 12);
        if ( v6 ) /*0x69e2ae*/
          MixFileClass::CacheNode_Dtor(v6, 1); /*0x69e2b2*/
        *v7 = 0; /*0x69e2b7*/
        *v5 = 0; /*0x69e2b9*/
      }
      v8 = *((unsigned int *)v4 + 6); /*0x69e2bc*/
      if ( v8 ) /*0x69e2c2*/
        *(unsigned int *)(v8 + 28) = *((unsigned int *)v4 + 7); /*0x69e2c7*/
      v9 = *((unsigned int *)v4 + 7); /*0x69e2ca*/
      if ( v9 ) /*0x69e2cf*/
        *(unsigned int *)(v9 + 24) = *((unsigned int *)v4 + 6); /*0x69e2d4*/
      else
        dword_B077B0 = (void *)*((unsigned int *)v4 + 6); /*0x69e2dc*/
      if ( *((unsigned int *)v4 + 2) ) /*0x69e2e1*/
      {
        free(*((void **)v4 + 2)); /*0x69e2e9*/
        *((unsigned int *)v4 + 2) = 0; /*0x69e2f1*/
      }
    }
    RA2_OPDEL(v4); /*0x69e2f5*/
    dword_B077B4 = 0; /*0x69e2fd*/
    dword_B077B8 = 0; /*0x69e303*/
    dword_B077BC = 0; /*0x69e309*/
  }
}
} // namespace gamemd
// 0x69E180
namespace gamemd {
void MixFileClass::DestroyCache()
{
  void * v0;
  void *v1; // edi
  void *v2; // ecx
  int v3; // eax
  int v4; // eax

  v0 = dword_B077B0; /*0x69e182*/
  if ( dword_B077B0 ) /*0x69e18c*/
  {
    do /*0x69e1f9*/
    {
      v1 = (void *)*((unsigned int *)v0 + 6); /*0x69e18f*/
      if ( v0 ) /*0x69e194*/
      {
        if ( *(unsigned short *)v0 == 0xFFFF ) /*0x69e19a*/
        {
          if ( *((unsigned char *)v0 + 16) ) /*0x69e19c*/
          {
            v2 = (void *)*((unsigned int *)v0 + 3); /*0x69e1a1*/
            if ( v2 ) /*0x69e1a6*/
              MixFileClass::CacheNode_Dtor(v2, 1); /*0x69e1aa*/
            *((unsigned int *)v0 + 3) = 0; /*0x69e1af*/
            *((unsigned char *)v0 + 16) = 0; /*0x69e1b2*/
          }
          v3 = *((unsigned int *)v0 + 6); /*0x69e1b5*/
          if ( v3 ) /*0x69e1ba*/
            *(unsigned int *)(v3 + 28) = *((unsigned int *)v0 + 7); /*0x69e1bf*/
          v4 = *((unsigned int *)v0 + 7); /*0x69e1c2*/
          if ( v4 ) /*0x69e1c7*/
            *(unsigned int *)(v4 + 24) = *((unsigned int *)v0 + 6); /*0x69e1cc*/
          else
            dword_B077B0 = (void *)*((unsigned int *)v0 + 6); /*0x69e1d4*/
          if ( *((unsigned int *)v0 + 2) ) /*0x69e1d9*/
          {
            free(*((void **)v0 + 2)); /*0x69e1e1*/
            *((unsigned int *)v0 + 2) = 0; /*0x69e1e9*/
          }
        }
        RA2_OPDEL(v0); /*0x69e1ed*/
      }
      v0 = v1; /*0x69e1f7*/
    }
    while ( v1 ); /*0x69e1f9*/
    dword_B077B0 = 0; /*0x69e1fc*/
  }
  else
  {
    dword_B077B0 = 0; /*0x69e205*/
  }
}
} // namespace gamemd