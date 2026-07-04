#pragma once
// CSP: CStreamClass

class CStreamClass {
public:
    // 0x004A2930
    void AddRef();
    // 0x004A4AD0
    void ClearBuffer();
    // 0x004A2F10
    void Commit();
    // 0x004A4CB0
    void CopyItems();
    // 0x004A2CD0
    void CopyStreamToBuffer();
    // 0x004A4D60
    void FindItem();
    // 0x004A3230
    void IStreamAddRef();
    // 0x004A3220
    void IStreamQueryInterface();
    // 0x004A3240
    void IStreamRelease();
    // 0x004A31F0
    void IsEmpty();
    // 0x004A2F80
    void LockRegion();
    // 0x004A4B00
    void PointerToIndex();
    // 0x004A2990
    void QueryInterface();
    // 0x004A2E00
    void Read();
    // 0x004A2950
    void Release();
    // 0x004A2F40
    void Revert();
    // 0x004A2EA0
    void Seek();
    // 0x004A2EE0
    void SetSize();
    // 0x004A2FF0
    void Stat();
    // 0x004A2AB0
    void StreamRead();
    // 0x004A2A20
    void StubReturnNullPointer();
    // 0x004A2FC0
    void UnlockRegion();
    // 0x004A2E50
    void Write();
};
