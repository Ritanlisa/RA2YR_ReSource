// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TrajectoryHelper {
// --- flat members (BEGIN) ---
    void* q1850;  // 0x1850
    void* q6224;  // 0x6224
// --- flat members (END) ---
    unsigned int * FindFirstImpenetrableObstacle(unsigned int *a1, int *a2, int a3, void *a4);  // G57w10-S raw 0x004CC310 IUnknown 占位清除
    unsigned int * FindFirstObstacle(unsigned int *a1, int *a2, int a3, void *a4);  // G57w10-S raw 0x004CC100 IUnknown 占位清除
    unsigned int * GetObstacle(unsigned char * a1, unsigned char * a2, int a3, int a4, int a5, int a6, int a7, void * other);
};

} // namespace gamemd
