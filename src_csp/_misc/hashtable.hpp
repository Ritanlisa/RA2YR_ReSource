#pragma once
// CSP: HashTable

class HashTable {
public:
    uint8_t pad_0[329]; // +0x0
    uint32_t member_149; // +0x149
    // 0x007ACE60
    void CleanupAndResize();
    // 0x00625070
    void ComputeHash();
    // 0x00624140
    void FindAndMark();
    // 0x007AE950
    void FindWOLHashTableEntry();
    // 0x00624760
    void Get();
    // 0x007AE510
    void Grow();
    // 0x00624FC0
    void Grow2();
    // 0x007AE1F0
    void Lookup();
    // 0x007ACF70
    void Rebuild();
    // 0x00625830
    void Rebuild2();
    // 0x006BAC40
    void RemoveHashTableEntry();
    // 0x007AEC00
    void Shrink();
    // 0x00625780
    void Shrink2();
};
