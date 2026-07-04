#pragma once
// CSP: TriggerClass

class TriggerClass : public AbstractClass {
public:
    uint8_t pad_0[1848]; // +0x0
    uint32_t member_738; // +0x738
    // 0x0041E720
    void EvaluateCondition();
    // 0x006F1E20
    void EvaluateObjectForTrigger();
    // 0x00610950
    void FindByEventType();
    // 0x00726690
    void FireAction();
    // 0x00726250
    void HasCrossesHorizontalLineEvent();
    // 0x00726290
    void HasCrossesVerticalLineEvent();
    // 0x00726860
    void LoadTrigger();
    // 0x00726940
    void StubReturn38();
    // 0x00726930
    void StubReturn72();
    // 0x0071AD40
    void UnlinkTags();
    // 0x00726820
    void ddtor();
};
