#pragma once
// CSP: CChatEventSink

class CChatEventSink {
public:
    // 0x007AEE90
    void Check();
    // 0x007AECB0
    void ComputeBucketMask();
    // 0x007A7110
    void HandleChannelJoin();
    // 0x007A5890
    void HandleChatEvent();
    // 0x007A41C0
    void HandleServerList();
    // 0x007A9970
    void HandleUserSearch();
    // 0x007AED40
    void ProcessChatEvent();
};
