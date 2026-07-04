#pragma once
// CSP: MoveFeedback

class MoveFeedback {
public:
    // 0x0040B960
    void AddRef();
    // 0x0040B640
    void ClearBuffer();
    // 0x0040BE50
    void Destroy();
    // 0x0040BB90
    void Draw();
    // 0x0040B930
    void FindItem();
    // 0x0040C0E0
    void FindMoveItem();
    // 0x0040BE80
    void GetIndex2();
    // 0x0040B670
    void PointerToIndex();
    // 0x007327D0
    void ProcessCommand();
    // 0x0040C030
    void SetCapacity();
    // 0x0040B6F0
    void Show();
    // 0x0040B6D0
    void Update();
};
