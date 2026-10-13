// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComStreamClass {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    AbstractClass * * readData();
    LONG AddRef(void *a1);
    int QueryInterface(unsigned int *a2, char **a3, int a4, int a1, int a5);
    int Release(void *a1);
    int Seek(int a2, int a3, int a4, int a1, int a5);
    int Write(int a2, uint8_t *a3, const char *lParam, const char *lParama, int a1, int a4, int a5);
    int ddtor(int a2, int a3, unsigned int a1, int a4, int a5);
    unsigned int * getStreamSize();
    unsigned int * seekToPosition();
    void ** writeData(char a2);
    void flushStream();

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
};

} // namespace gamemd
