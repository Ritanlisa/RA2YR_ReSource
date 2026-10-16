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
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BTree_e4.hpp"

// 0x69E210
namespace gamemd {  // G42.18 ns repair
void MixFileClass::CleanupCache()
{


  unsigned int *v0; // edi
  v0 = (unsigned int *)(dword_B077B0); /*0x69e213*/
  if ( dword_B077B0 ) /*0x69e21d*/
  {
    do /*0x69e289*/
    {
      if ( *(unsigned short *)v0 == 0xFFFF && v0->uniqueId ) /*0x69e225*/
      {
        void *v1 = v0->vtable4; // esi /*0x69e22a*/
        if ( v1 ) /*0x69e22f*/
        {
          if ( *(unsigned short *)v1 == 0xFFFF ) /*0x69e235*/
          {
            BTree::DeleteSubtree(v0->vtable4); /*0x69e239*/
            int v2 = v1->u32_18; // eax /*0x69e23e*/
            if ( v2 ) /*0x69e243*/
              *(unsigned int *)(v2 + 28) = v1->u32_1C; /*0x69e248*/
            int v3 = v1->u32_1C; // eax /*0x69e24b*/
            if ( v3 ) /*0x69e250*/
              *(unsigned int *)(v3 + 24) = v1->u32_18; /*0x69e255*/
            else
              dword_B077B0 = (void *)v1->u32_18; /*0x69e25d*/
            if ( v1->u32_8 ) /*0x69e262*/
            {
              free(*((void **)v1 + 2)); /*0x69e26a*/
              v1->u32_8 = 0; /*0x69e272*/
            }
          }
          __3_YAXPAX_Z(v1); /*0x69e276*/
        }
        v0->vtable4 = 0; /*0x69e27e*/
        v0->uniqueId = 0; /*0x69e281*/
      }
      v0 = v0->nextArrayIndex; /*0x69e284*/
    }
    while ( v0 ); /*0x69e289*/
  }
  void *v4; // esi
  v4 = (void *)(dword_B077B4); /*0x69e28b*/
  if ( dword_B077B4 ) /*0x69e293*/
  {
    if ( *(unsigned short *)dword_B077B4 == 0xFFFF ) /*0x69e299*/
    {
      unsigned char *v5; // ebp
      v5 = (unsigned char *)((char *)dword_B077B4 + 16); /*0x69e29f*/
      if ( *((unsigned char *)dword_B077B4 + 16) ) /*0x69e29b*/
      {
        void *v6; // ecx
        v6 = (void *)*((unsigned int *)dword_B077B4 + 3); /*0x69e2a6*/
        unsigned int *v7; // edi
        v7 = (unsigned int *)((char *)dword_B077B4 + 12); /*0x69e2a9*/
        if ( v6 ) /*0x69e2ae*/
          MixFileClass::CacheNode_Dtor(v6, 1); /*0x69e2b2*/
        *v7 = 0; /*0x69e2b7*/
        *v5 = 0; /*0x69e2b9*/
      }
      int v8 = v4->nextArrayIndex; // eax /*0x69e2bc*/
      if ( v8 ) /*0x69e2c2*/
        *(unsigned int *)(v8 + 28) = v4->referenceCount; /*0x69e2c7*/
      int v9 = v4->referenceCount; // eax /*0x69e2ca*/
      if ( v9 ) /*0x69e2cf*/
        *(unsigned int *)(v9 + 24) = v4->nextArrayIndex; /*0x69e2d4*/
      else
        dword_B077B0 = (void *)v4->nextArrayIndex; /*0x69e2dc*/
      if ( v4->vtable3 ) /*0x69e2e1*/
      {
        free(*((void **)v4 + 2)); /*0x69e2e9*/
        v4->vtable3 = 0; /*0x69e2f1*/
      }
    }
    __3_YAXPAX_Z(v4); /*0x69e2f5*/
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
  void *v1; // edi

  void *v0; // esi
  v0 = (void *)(dword_B077B0); /*0x69e182*/
  if ( dword_B077B0 ) /*0x69e18c*/
  {
    do /*0x69e1f9*/
    {
      v1 = (void *)v0->nextArrayIndex; /*0x69e18f*/
      if ( v0 ) /*0x69e194*/
      {
        if ( *(unsigned short *)v0 == 0xFFFF ) /*0x69e19a*/
        {
          if ( v0->uniqueId ) /*0x69e19c*/
          {
            void *v2; // ecx
            v2 = (void *)v0->vtable4; /*0x69e1a1*/
            if ( v2 ) /*0x69e1a6*/
              MixFileClass::CacheNode_Dtor(v2, 1); /*0x69e1aa*/
            v0->vtable4 = 0; /*0x69e1af*/
            v0->uniqueId = 0; /*0x69e1b2*/
          }
          int v3 = v0->nextArrayIndex; // eax /*0x69e1b5*/
          if ( v3 ) /*0x69e1ba*/
            *(unsigned int *)(v3 + 28) = v0->referenceCount; /*0x69e1bf*/
          int v4 = v0->referenceCount; // eax /*0x69e1c2*/
          if ( v4 ) /*0x69e1c7*/
            *(unsigned int *)(v4 + 24) = v0->nextArrayIndex; /*0x69e1cc*/
          else
            dword_B077B0 = (void *)v0->nextArrayIndex; /*0x69e1d4*/
          if ( v0->vtable3 ) /*0x69e1d9*/
          {
            free(v0->vtable3); /*0x69e1e1*/
            v0->vtable3 = 0; /*0x69e1e9*/
          }
        }
        operator delete((v0)); /*0x69e1ed*/
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