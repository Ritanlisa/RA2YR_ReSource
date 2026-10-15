// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FileSystem {
// --- flat members (BEGIN) ---
unsigned int q004;  // 0x4 [X35-L7 kind=unsigned int]
unsigned int q008;  // 0x8 [X35-L7 kind=unsigned int]
    void* q00C;  // 0xC
    unsigned int u32_D;  // 0xD
unsigned int q010;  // 0x10 [X35-L7 kind=unsigned int]
unsigned int q014;  // 0x14 [X35-L7 kind=unsigned int]
    void* q018;  // 0x18
unsigned int q020;  // 0x20 [X35-L7 kind=unsigned int]
    void* q024;  // 0x24
    unsigned int u32_30;  // 0x30
    unsigned int q048;  // 0x48
    void* q050;  // 0x50
    unsigned int u32_60;  // 0x60
unsigned int q100;  // 0x100 [X35-L7 kind=unsigned int]
    unsigned int q114;  // 0x114
    void* q598;  // 0x598
// --- flat members (END) ---
    const char * openFile(const char *a1);
    int ProcessNextFileExtension();
    static void CleanupTrees();
    static void InitPipShapes();
    static void FlushTempFiles(FileSystem * aP1);
    int readFile();  // 0x628740
};

} // namespace gamemd
