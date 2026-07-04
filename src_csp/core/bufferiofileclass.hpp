#pragma once
// CSP: BufferIOFileClass

class BufferIOFileClass : public RawFileClass {
public:
    uint8_t pad_0[6224]; // +0x0
    uint32_t member_1850; // +0x1850
    // 0x00431B20
    void Constructor();
    // 0x00535A60
    void Destruct();
    // 0x00431F30
    void Read();
    // 0x00473BA0
    void Seek();
    // 0x0065CA70
    void StubReturnFalse();
};
