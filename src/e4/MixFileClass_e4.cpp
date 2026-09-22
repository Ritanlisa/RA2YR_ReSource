// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x69E210
void MixFileClass::CleanupCache()
{
{

  AbstractClass *v0 = DataGlobal_B077B0; /*0x69e213*/
  if ( DataGlobal_B077B0 ) /*0x69e21d*/
  {
    do /*0x69e289*/
    {
      if ( *(_WORD *)v0 == 0xFFFF && v0->uniqueId ) /*0x69e225*/
      {
        void * v1 = (void *)v0[3]; /*0x69e22a*/
        if ( v1 ) /*0x69e22f*/
        {
          if ( *(_WORD *)v1 == 0xFFFF ) /*0x69e235*/
          {
            BTree::DeleteSubtree((_DWORD *)v0[3]); /*0x69e239*/
            int v2 = *((_DWORD *)v1 + 6); /*0x69e23e*/
            if ( v2 ) /*0x69e243*/
              *(_DWORD *)(v2 + 28) = *((_DWORD *)v1 + 7); /*0x69e248*/
            int v3 = *((_DWORD *)v1 + 7); /*0x69e24b*/
            if ( v3 ) /*0x69e250*/
              *(_DWORD *)(v3 + 24) = *((_DWORD *)v1 + 6); /*0x69e255*/
            else
              DataGlobal_B077B0 = (void *)*((_DWORD *)v1 + 6); /*0x69e25d*/
            if ( *((_DWORD *)v1 + 2) ) /*0x69e262*/
            {
              free(*((void **)v1 + 2)); /*0x69e26a*/
              *((_DWORD *)v1 + 2) = 0; /*0x69e272*/
            }
          }
          __3_YAXPAX_Z(v1); /*0x69e276*/
        }
        v0[3] = 0; /*0x69e27e*/
        v0->uniqueId = 0; /*0x69e281*/
      }
      v0 = (_DWORD *)v0[6]; /*0x69e284*/
    }
    while ( v0 ); /*0x69e289*/
  }
  AbstractClass *v4 = DataGlobal_B077B4; /*0x69e28b*/
  if ( DataGlobal_B077B4 ) /*0x69e293*/
  {
    if ( *(_WORD *)DataGlobal_B077B4 == 0xFFFF ) /*0x69e299*/
    {
      _BYTE * v5 = (char *)DataGlobal_B077B4 + 16; /*0x69e29f*/
      if ( *((_BYTE *)DataGlobal_B077B4 + 16) ) /*0x69e29b*/
      {
        void * v6 = (void *)*((_DWORD *)DataGlobal_B077B4 + 3); /*0x69e2a6*/
        _DWORD * v7 = (char *)DataGlobal_B077B4 + 12; /*0x69e2a9*/
        if ( v6 ) /*0x69e2ae*/
          MixFileClass::CacheNode_Dtor(v6, 1); /*0x69e2b2*/
        *v7 = 0; /*0x69e2b7*/
        *v5 = 0; /*0x69e2b9*/
      }
      int v8 = v4->nextArrayIndex; /*0x69e2bc*/
      if ( v8 ) /*0x69e2c2*/
        *(_DWORD *)(v8 + 28) = v4->referenceCount; /*0x69e2c7*/
      int v9 = v4->referenceCount; /*0x69e2ca*/
      if ( v9 ) /*0x69e2cf*/
        *(_DWORD *)(v9 + 24) = v4->nextArrayIndex; /*0x69e2d4*/
      else
        DataGlobal_B077B0 = (void *)v4->nextArrayIndex; /*0x69e2dc*/
      if ( v4->vtable3 ) /*0x69e2e1*/
      {
        free(v4->vtable3); /*0x69e2e9*/
        v4->vtable3 = 0; /*0x69e2f1*/
      }
    }
    __3_YAXPAX_Z(v4); /*0x69e2f5*/
    DataGlobal_B077B4 = 0; /*0x69e2fd*/
    DataGlobal_B077B8 = 0; /*0x69e303*/
    DataGlobal_B077BC = 0; /*0x69e309*/
  }
}
}

// 0x69E180
void MixFileClass::DestroyCache()
{
{
    void *v0;
    void *v1;
    void *v2;
    int v3;
    int v4;
    v0 = DataGlobal_B077B0;
    if ( DataGlobal_B077B0 )
  {
    do
    {
    v1 = (void *)*((int *)(v0) + 6);
    if ( v0 )
      {
    if ( *(short *)v0 == 0xFFFF )
        {
    if ( *((char *)(v0) + 16) )
          {
    v2 = (void *)*((int *)(v0) + 3);
    if ( v2 )
    MixFileClass::CacheNode_Dtor(v2, 1);
    *((int *)(v0) + 3) = 0;
    *((char *)(v0) + 16) = 0;
          }
    v3 = *((int *)(v0) + 6);
    if ( v3 )
    *(int *)(v3 + 28) = *((int *)(v0) + 7);
    v4 = *((int *)(v0) + 7);
    if ( v4 )
    *(int *)(v4 + 24) = *((int *)(v0) + 6);
    else
    DataGlobal_B077B0 = (void *)*((int *)(v0) + 6);
    if ( *((int *)(v0) + 2) )
          {
    free(*((void **)(v0) + 2));
    *((int *)(v0) + 2) = 0;
          }
        }
    __3_YAXPAX_Z(v0);
      }
    v0 = v1;
    }
    while ( v1 );
    DataGlobal_B077B0 = 0;
  }
    else
  {
    DataGlobal_B077B0 = 0;
  }
}
}
