#pragma once
// CSP: SaveGame

class SaveGame {
public:
    // 0x0067F7E0
    void LoadMainGameState();
    // 0x0074ED60
    void LoadVeinholeData();
    // 0x00751620
    void SaveAudioQueueItems();
    // 0x004C6340
    void SaveBlock68();
    // 0x006607D0
    void SaveTriggerEvents();
    // 0x0067D300
    void Start();
    // 0x00721010
    void VtableDispatch();
    // 0x007533B0
    void WriteMagicHeader();
    // 0x00513CB0
    void WriteObject();
};
