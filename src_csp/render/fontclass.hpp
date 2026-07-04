#pragma once
// CSP: FontClass

class FontClass {
public:
    uint8_t pad_0[3]; // +0x0
    uint32_t member_3; // +0x3
    // 0x007719D0
    void Close();
    // 0x0068C710
    void InitMetrics();
    // 0x00771970
    void Read();
    // 0x005CC880
    void Stop();
    // 0x00771980
    void Write();
};
