#pragma once
// CSP: ScriptAction

class ScriptAction {
public:
    uint8_t pad_0[272]; // +0x0
    uint32_t member_110; // +0x110
    // 0x00635F20
    void Constructor();
    // 0x006E3B60
    void GetActionTypeInfo();
    // 0x00721270
    void GetArgumentString();
    // 0x006E6AB0
    void GetWaypointCoords();
    // 0x0063A8E0
    void HitTest();
    // 0x004C6860
    void InitActionFields();
    // 0x006E1830
    void ReadParameter();
    // 0x00637DB0
    void SetField10();
};
