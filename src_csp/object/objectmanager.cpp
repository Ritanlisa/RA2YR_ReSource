#include "objectmanager.hpp"

void  ObjectManager::CleanupArrays(int this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    void *v8; // eax
    void *v9; // eax
    void *v10; // eax
    void *v11; // eax
    void *v12; // eax
    void *v13; // eax
    void *v14; // eax
    void *v15; // eax
    while ( *(uint32_t *)(this + 10532) )
    __3_YAXPAX_Z(**(void ***)(this + 10520));
    v2 = *(uint32_t *)(this + 10532);
    if ( v2 > 0 )
    v3 = v2 - 1;
    v4 = 0;
    for ( *(uint32_t *)(this + 10532) = v3;
    v4 < *(uint32_t *)(this + 10532);
    *(uint32_t *)(*(uint32_t *)(this + 10520) + 4 * v4 - 4) = *(uint32_t *)(*(uint32_t *)(this + 10520) + 4 * v4) )
    ++v4;
    while ( *(uint32_t *)(this + 10556) )
    free(**(void ***)(this + 10544));
    v5 = *(uint32_t *)(this + 10556);
    if ( v5 > 0 )
    v6 = v5 - 1;
    v7 = 0;
    for ( *(uint32_t *)(this + 10556) = v6;
    v7 < *(uint32_t *)(this + 10556);
    *(uint32_t *)(*(uint32_t *)(this + 10544) + 4 * v7 - 4) = *(uint32_t *)(*(uint32_t *)(this + 10544) + 4 * v7) )
    ++v7;
    v8 = *(void **)(this + 10544);
    *(uint32_t *)(this + 10540) = &VectorClass<unsigned short const *>::`vftable';
    if ( v8 && *(uint8_t *)(this + 10553) )
    __3_YAXPAX_Z(v8);
    *(uint32_t *)(this + 10544) = 0;
    *(uint8_t *)(this + 10553) = 0;
    *(uint32_t *)(this + 10548) = 0;
    v9 = *(void **)(this + 10520);
    *(uint32_t *)(this + 10516) = &VectorClass<char *>::`vftable';
    if ( v9 && *(uint8_t *)(this + 10529) )
    __3_YAXPAX_Z(v9);
    *(uint32_t *)(this + 10520) = 0;
    *(uint8_t *)(this + 10529) = 0;
    *(uint32_t *)(this + 10524) = 0;
    v10 = *(void **)(this + 10496);
    *(uint32_t *)(this + 10492) = &VectorClass<PhoneEntryClass *>::`vftable';
    if ( v10 && *(uint8_t *)(this + 10505) )
    __3_YAXPAX_Z(v10);
    *(uint32_t *)(this + 10496) = 0;
    *(uint8_t *)(this + 10505) = 0;
    *(uint32_t *)(this + 10500) = 0;
    v11 = *(void **)(this + 10304);
    *(uint32_t *)(this + 10300) = &VectorClass<NodeNameType *>::`vftable';
    if ( v11 && *(uint8_t *)(this + 10313) )
    __3_YAXPAX_Z(v11);
    *(uint32_t *)(this + 10304) = 0;
    *(uint8_t *)(this + 10313) = 0;
    *(uint32_t *)(this + 10308) = 0;
    v12 = *(void **)(this + 10280);
    *(uint32_t *)(this + 10276) = &VectorClass<NodeNameType *>::`vftable';
    if ( v12 && *(uint8_t *)(this + 10289) )
    __3_YAXPAX_Z(v12);
    *(uint32_t *)(this + 10280) = 0;
    *(uint8_t *)(this + 10289) = 0;
    *(uint32_t *)(this + 10284) = 0;
    v13 = *(void **)(this + 10256);
    *(uint32_t *)(this + 10252) = &VectorClass<NodeNameType *>::`vftable';
    if ( v13 && *(uint8_t *)(this + 10265) )
    __3_YAXPAX_Z(v13);
    *(uint32_t *)(this + 10256) = 0;
    *(uint8_t *)(this + 10265) = 0;
    *(uint32_t *)(this + 10260) = 0;
    *(uint32_t *)(this + 9044) = &CCFileClass::`vftable';
    *(uint32_t *)(this + 9144) = 0;
    Vector::Clear(this + 9132);
    *(uint32_t *)(this + 9044) = &off_7E1668;
    BufferIOFileClass::Dtor((uint32_t *)(this + 9044));
    ObjectManager::InitMessageList(this + 2600);
    v14 = *(void **)(this + 2292);
    *(uint32_t *)(this + 2288) = &VectorClass<GlobalPacketType *>::`vftable';
    if ( v14 && *(uint8_t *)(this + 2301) )
    __3_YAXPAX_Z(v14);
    *(uint32_t *)(this + 2292) = 0;
    *(uint8_t *)(this + 2301) = 0;
    *(uint32_t *)(this + 2296) = 0;
    v15 = *(void **)(this + 1684);
    *(uint32_t *)(this + 1680) = &VectorClass<MultiMission *>::`vftable';
    if ( v15 && *(uint8_t *)(this + 1693) )
    __3_YAXPAX_Z(v15);
    *(uint32_t *)(this + 1684) = 0;
    *(uint8_t *)(this + 1693) = 0;
    *(uint32_t *)(this + 1688) = 0;
}

