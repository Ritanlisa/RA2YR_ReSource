#pragma once
// CSP: EventClass

class EventClass {
public:
    uint8_t pad_0[3432]; // +0x0
    uint32_t member_D68; // +0xD68
    // 0x005F19C0
    void CheckFlag();
    // 0x0054F200
    void Enqueue();
    // 0x0053EC70
    void GetKeyStateSafe();
    // 0x005F3440
    void GetState();
    // 0x0048BAD0
    void SetData();
    // 0x0040BAE0
    void checkCondition();
    // 0x0040C410
    void clearEvents();
    // 0x0040C260
    void dequeueEvent();
    // 0x00542280
    void deserializeEvent();
    // 0x0040B9A0
    void dispatchEvent();
    // 0x0040BE10
    void finalizeEvent();
    // 0x0040C590
    void getEventCount();
    // 0x0040B6A0
    void initEvent();
    // 0x0040B740
    void processEvent();
    // 0x0048B390
    void serializeEvent();
    // 0x0040B880
    void validateEvent();
    // 0x00664440
    void validateEventType();
};
