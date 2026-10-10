// GENERATED flat e4 class (mechanical; render_ext bridge cut G57w8d --
// Camera body lives here, truth render_ext.hpp:215)
#pragma once

#include "e4/classes/CoordStruct_e4.hpp"  // G57w8d: Camera members are CoordStruct by-value

namespace gamemd {

class Camera
{
public:
    // IDA 0x48B2A0 area
    int64_t UpdateTilt();
    // IDA 0x48B2A0 area
    void StubReturnFalse();
    // IDA 0x48B2A0 area
    void StubReturnVoid();  // 0x58B7C0
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void SetPosition(const CoordStruct& pos);

    CoordStruct m_Position;     // 0x00
    CoordStruct m_Target;       // 0x0C
    int32_t     m_Zoom;         // 0x18
    float       m_Tilt;         // 0x1C
    void StubReturn();  // plateau: def-aligned C2039/C2660
};

} // namespace gamemd
