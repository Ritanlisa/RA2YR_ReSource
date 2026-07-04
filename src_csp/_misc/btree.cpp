#include "btree.hpp"

void  BTree::DeleteSubtree(uint32_t *this)
{
    void *v2; // esi
    int v3; // eax
    int v4; // eax
    if ( *(_WORD *)this == 0xFFFF && *((uint8_t *)this + 16) )
    v2 = (void *)*(this + 3);
    if ( v2 )
    if ( *(_WORD *)v2 == 0xFFFF )
    BTree::DeleteSubtree(*(this + 3));
    v3 = *((uint32_t *)v2 + 6);
    if ( v3 )
    *(uint32_t *)(v3 + 28) = *((uint32_t *)v2 + 7);
    v4 = *((uint32_t *)v2 + 7);
    if ( v4 )
    *(uint32_t *)(v4 + 24) = *((uint32_t *)v2 + 6);
    else
    dword_B077B0 = (void *)*((uint32_t *)v2 + 6);
    if ( *((uint32_t *)v2 + 2) )
    free(*((void **)v2 + 2));
    *((uint32_t *)v2 + 2) = 0;
    __3_YAXPAX_Z(v2);
    *(this + 3) = 0;
    *((uint8_t *)this + 16) = 0;
}

