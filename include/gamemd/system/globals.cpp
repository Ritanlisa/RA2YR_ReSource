// Global utility functions for the system module
// Functions from system/_funcs.hpp translated to C++
#include "system/globals_system.hpp"

#include <cstdint>

namespace gamemd
{

// ============================================================================
// ComputeHash - simple hash accumulator (0x64de80, 17B, fastcall)
// Original: updates *a1 with simple hash formula
// ============================================================================
int ComputeHash(int* a1, int a2)
{
    int result = a2 + (*a1 >> 31) + 2 * *a1;
    *a1 = result;
    return result;
}

// ============================================================================
// HashStringMod31 - string hash with modulus 31 (0x626660, 40B, fastcall)
// Original: h = (c + 26*h) % 31 for each character
// ============================================================================
int HashStringMod31(const char* a1)
{
    int result = 0;
    while (*a1)
    {
        result = (static_cast<int>(*a1) + 26 * result) % 31;
        ++a1;
    }
    return result;
}

// ============================================================================
// InsertIntoHashTree - insertion into sorted linked-list tree (0x5b3ff0, 45B)
// Original: walks *a2 chain, inserts a1 based on comparison at offset 2
// ============================================================================
void InsertIntoHashTree(int* a1, int** a2)
{
    int** cur = a2;
    while (*cur)
    {
        int* node = *cur;
        // Compare the key at offset 2 (node[2] vs a1[2])
        if (node[2] < a1[2])
            cur = reinterpret_cast<int**>(&node[1]);   // go to next (right)
        else
            cur = reinterpret_cast<int**>(node);  // go to left
    }
    *cur = a1;
    a1[0] = 0;
    a1[1] = 0;
}

} // namespace gamemd
