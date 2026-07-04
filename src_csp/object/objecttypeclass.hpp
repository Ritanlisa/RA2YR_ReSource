#pragma once
// CSP: ObjectTypeClass

class ObjectTypeClass : public AbstractTypeClass {
public:
    uint8_t pad_0[3225]; // +0x0
    uint32_t member_C99; // +0xC99
    // 0x006A5130
    void CalcBounds();
    // 0x00408540
    void CalcRate();
    // 0x00717BF0
    void CheckFlag();
    // 0x0041CF80
    void Copy();
    // 0x005F1C30
    void CreateInstance();
    // 0x004BA770
    void CreatePrimary();
    // 0x007170A0
    void DeserializeArrays();
    // 0x00654320
    void Destru_vt34();
    // 0x0065D1F0
    void GetDosTimestamp();
    // 0x006A5310
    void Init();
    // 0x006A5090
    void InitPositions();
    // 0x005F75C0
    void InitTripleTen();
    // 0x005F9720
    void LoadCleanup();
    // 0x006ABD30
    void LoadResources();
    // 0x00474FA0
    void ReadDouble();
    // 0x00474F50
    void ReadInt();
    // 0x00476240
    void ReadTypeListINI();
    // 0x005F61A0
    void ReleaseWaveAndString();
    // 0x004080C0
    void RequestBuffer();
    // 0x00712040
    void SelectArtOrAlt();
    // 0x005F9710
    void SetRTTI71();
    // 0x005F77F0
    void UnloadPipsSHP();
    // 0x006403A0
    void getDrain();
    // 0x00717AE0
    void loadTypeMember_5717AE0();
    // 0x0041CBF0
    void vt_entry_7C();
};
