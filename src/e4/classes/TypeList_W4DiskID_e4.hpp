// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TypeList_W4DiskID {
    void* vfptr;
    TypeList_flat * QueryInterface(unsigned int * Block, char a2);
    VectorClass_flat * validateGame(unsigned int * Block, char a2);
    char AddRef(int a2);
    char Release(int a2, unsigned int * a3);
    char addPlayer(int a2, unsigned int * a3);
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);
    int Seek(int a2, void *a2_2, void *a3);
    int findPlayer(unsigned int * a2);
    unsigned int Write(int a2);
    unsigned int updatePlayer(int a2);
    void ddtor(void *a1);
    void removePlayer();

    unsigned int u32_4;  // X10 supply (member_lookup)
};

} // namespace gamemd
