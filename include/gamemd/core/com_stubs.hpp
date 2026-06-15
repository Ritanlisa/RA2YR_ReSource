#pragma once

#include <cstdint>

namespace gamemd {

// Minimal headers for small COM/utility classes used in cc_file.cpp stubs.
// These will be expanded as member layouts are reverse-engineered.

// IDA vtable 0x7EE8E8 — MSAnim: simple animation object
class MSAnim {
public:
    void SetVtable();
private:
    uintptr_t m_vtable;
};

// IDA vtable 0x7F0954 — ReferenceCounted: base class for ref-counted objects
class ReferenceCounted {
public:
    void Constructor();
private:
    uintptr_t m_vtable;
};

// IDA 0x76F180 — VectorCursor: ref-counted iterator cursor
class VectorCursor {
public:
    void* AddRef();
private:
    uintptr_t m_vtable;
    uint32_t  m_pad_04;
    uint32_t  m_ref_count;  // +0x08, incremented by AddRef
};

// IDA 0x7748A0 — WinModemClass: modem interface wrapper
class WinModemClass {
public:
    void Release(int val);   // sets f[24]
    void ddtor(int val);     // sets f[25]
    void HangUp(int val);    // sets f[26]
private:
    uintptr_t m_vtable;      // +0x00
    uint32_t  m_pad[23];     // +0x04..+0x5F
    uint32_t  m_fld24;    // +0x60
    uint32_t  m_fld25;    // +0x64
    uint32_t  m_fld26;    // +0x68
};

// IDA 0x5C1CB0 — MPCooperative: cooperative multiplayer helper
class MPCooperative {
public:
    void SetFlag();            // sets byte at +832
private:
    uint8_t m_pad[832];       // +0x00..+0x33F
    uint8_t m_flag;           // +0x340 — set to 1 by SetFlag
};

// IDA 0x7BE660/0x7C35B0 — AudioStream: audio pipeline processing object
// Members at +0x6D0 (DWORD[436]) and +0x714 (uint16_t[906])
class AudioStream {
public:
    void ResetDword436();     // sets DWORD at +0x6D0 = -1
    uint16_t GetField714() const; // returns uint16_t at +0x714
private:
    uint8_t m_pad1[0x6D0];   // +0x000..+0x6CF
    int32_t m_fld6D0;      // +0x6D0 — set to -1 by Reset
    uint8_t m_pad2[0x40];    // +0x6D4..+0x713
    uint16_t m_fld714;    // +0x714 — returned by GetField714
};

// IDA — GraphicMenuImageItem: menu image widget with 3 image slots
class GraphicMenuImageItem {
public:
    int Draw(bool flag);
};

// IDA — SliderClass: slider UI widget
class SliderClass {
public:
    bool Draw(int value);
};

// IDA — VoxelPalette: voxel palette structure (4 DWORD fields)
struct VoxelPalette {
    int m_palette;      // +0x10 — pointer to 768B RGB palette
    int m_color_table;  // +0x14 — pointer to 32KB color table
    int m_pal_owned;    // +0x18 — palette self-allocated flag
    int m_ct_owned;     // +0x1C — color table self-allocated flag

    void Init(int palette_src, int color_src);
    int  LoadFromFile(void* file);
    int  ConvertFromFile(int file);
};

} // namespace gamemd

