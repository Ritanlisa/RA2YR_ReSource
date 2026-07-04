#pragma once
// CSP: Sidebar

class Sidebar {
public:
    uint8_t pad_0[3782]; // +0x0
    uint32_t member_EC6; // +0xEC6
    // 0x006A60A0
    void ActivateTab();
    // 0x006A6140
    void FindProductionType();
    // 0x00533F50
    void ScrollSidebarSkipGame();
};
