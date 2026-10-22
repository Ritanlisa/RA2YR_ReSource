// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FileSystem {
    unsigned int u32_0;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    char q00C[1];  // 0xC
    char u32_D[3];  // 0xD
    unsigned int q010;  // 0x10
    unsigned int q014;  // 0x14
    void * q018;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int q020;  // 0x20
    void * q024;  // 0x24
    char __pad_28[8];  // 0x28
    unsigned int u32_30;  // 0x30
    char __pad_34[20];  // 0x34
    unsigned int q048;  // 0x48
    char __pad_4C[4];  // 0x4C
    void * q050;  // 0x50
    char __pad_54[12];  // 0x54
    unsigned int u32_60;  // 0x60
    char __pad_64[156];  // 0x64
    unsigned int q100;  // 0x100
    char __pad_104[16];  // 0x104
    unsigned int q114;  // 0x114
    char __pad_118[1152];  // 0x118
    void * q598;  // 0x598
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    const char * openFile(const char *a1);
    int ProcessNextFileExtension();
    static void CleanupTrees();
    static void InitPipShapes();
    static void FlushTempFiles(FileSystem * aP1);
    int readFile();  // 0x628740
};

} // namespace gamemd
