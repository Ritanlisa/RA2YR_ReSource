#pragma once
// CSP: DeleteCommandClass

class DeleteCommandClass : public CommandClass {
public:
    // 0x00537F20
    void AddRef();
    // 0x00537F10
    void Constructor();
    // 0x00537F70
    void Read();
    // 0x00537F30
    void Release();
    // 0x00537F90
    void Undo();
    // 0x00537F50
    void ddtor();
};
