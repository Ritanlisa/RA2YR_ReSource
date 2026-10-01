// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FileSystem {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned int u32_D;  // 0xD
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned int u32_30;  // 0x30
    unsigned int q048;  // 0x48
    void* q050;  // 0x50
    void* q100;  // 0x100
    unsigned int q114;  // 0x114
    void* q598;  // 0x598
    unsigned int openFile;
// --- flat members (END) ---
    int ProcessNextFileExtension();
    void CleanupTrees();
    void InitPipShapes();
    static double FlushTempFiles(...);  // C2597 interim stub
    int readFile();  // 0x628740
};

} // namespace gamemd
