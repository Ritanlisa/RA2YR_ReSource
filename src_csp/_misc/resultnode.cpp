#include "resultnode.hpp"

void  ResultNode::CleanupList(uint32_t *this)
{
    uint32_t *v1; // esi
    uint32_t *v2; // edi
    v1 = (uint32_t *)*(this + 1);
    if ( v1 )
    do
    v2 = (uint32_t *)v1[3];
    if ( v1 )
    ResultNode::Init(v1);
    __3_YAXPAX_Z(v1);
    v1 = v2;
    while ( v2 );
}

