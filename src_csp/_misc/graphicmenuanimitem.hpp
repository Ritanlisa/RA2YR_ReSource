#pragma once
// CSP: GraphicMenuAnimItem

class GraphicMenuAnimItem {
public:
    uint8_t pad_0[4512]; // +0x0
    uint32_t member_11A0; // +0x11A0
    // 0x004F3B00
    void AddRef();
    // 0x004F3090
    void Release();
    // 0x004F3AE0
    void Stub();
    // 0x004F3AD0
    void StubReturnFalse();
};
