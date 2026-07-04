#pragma once
// CSP: ParticleSystemClass

class ParticleSystemClass : public ObjectClass {
public:
    uint8_t pad_0[2852]; // +0x0
    uint32_t member_B24; // +0xB24
    // 0x004E9DE0
    void AddRef();
    // 0x0062E280
    void CreateBuildingLight();
    // 0x0062E380
    void CreateParticle();
    // 0x0062FE60
    void Draw();
    // 0x004E8470
    void GetClassIdentifier();
    // 0x00630200
    void GetObjectSize();
    // 0x00630210
    void GetTypeIdentifier();
    // 0x004EA010
    void Init();
    // 0x004E84A0
    void LoadTypeData();
    // 0x00630100
    void PowerDrainUpdate();
    // 0x006301E0
    void ProcessFrame();
    // 0x004EB3E0
    void ReallocateBuffer();
    // 0x004E9F60
    void Release();
    // 0x004E84C0
    void SaveToINI();
    // 0x00630220
    void Stub();
    // 0x0062FE80
    void StubReturn2();
    // 0x0062FE90
    void UpdateSystem();
    // 0x0062FF20
    void Write();
    // 0x004E8780
    void initParticleArray();
    // 0x004EB490
    void processParticleFrame();
    // 0x004E87B0
    void updateParticles();
    // 0x004E9E20
    void vt[02]();
    // 0x004E9ED0
    void vt[03]();
    // 0x004E9F00
    void vt[04]();
    // 0x004E9F40
    void vt[05]();
    // 0x00630090
    void vt[06]();
};
