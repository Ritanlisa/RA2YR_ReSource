#pragma once

#include "abstract.hpp"
#include "core/vector.hpp"

namespace ra2 {
namespace game {

class FootClass;
class HouseClass;
class TechnoClass;

// sizeof ~0x58 (ctor 0x4717D0, ddtor 0x4729C0)
class CaptureManagerClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::CaptureManager;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~CaptureManagerClass() = default;  // 0x4729c0

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}

    // Construction
    CaptureManagerClass(TechnoClass* owner, HouseClass* originalOwner, bool); // 0x4717D0
    void Constructor_VectorClass_ControlNode(int, int);                // 0x473000
    void Constructor_473140(int);                                      // 0x473140
    void ddtor();                                                      // 0x4729C0
    void Destroy();                                                    // 0x472C30

    // IUnknown (separate COM interface, not overriding AbstractClass)
    HRESULT __stdcall QueryInterface(const IID&, void**);             // 0x473050
    ULONG __stdcall AddRef();                                         // 0x472B40
    ULONG __stdcall Release();                                        // 0x472CC0

    // Capture logic
    bool CanCapture(FootClass*) const;                                 // 0x471C90
    bool Capture(FootClass*);                                          // 0x472D70
    bool CaptureUnit(FootClass*);                                      // 0x471D40
    void FreeUnit(FootClass*);                                         // 0x471FF0
    void HandleOverload();                                             // 0x471A50
    bool IsOverloading() const;                                        // 0x4726C0
    bool CannotControlAnyMore() const;                                 // 0x4722A0
    HouseClass* GetOriginalOwner() const;                              // 0x4722F0
    void DecideUnitFate(FootClass*);                                   // 0x4723B0
    bool NeedsToDrawLinks() const;                                     // 0x472640
    void DrawLinks();                                                  // 0x472160
    void AddMember(TechnoClass*);                                      // 0x6EA4F0

    // Save/Load
    void LoadFromStream(IStream*);                                     // 0x472720
    void LoadTypeData();                                               // 0x472AB0
    void SaveToINI();                                                  // 0x4728E0
    void PowerDrainUpdate();                                           // 0x4726F0
    int GetClassIdentifier();                                          // 0x472960
    int GetObjectSize();                                               // 0x4729A0
    int GetTypeIdentifier();                                           // 0x4729B0

    // Vector operations
    void SetCapacity(unsigned int);                                    // 0x472B80
    int IndexOf(FootClass*) const;                                     // 0x472C60
    int PointerToIndex(void*) const;                                   // 0x472CA0

    // Stub/vtable
    void vt_03();                                                      // 0x472A80
    void vt_06();                                                      // 0x472AD0

    DynamicVectorClass<void*>   controlNodes;      // +0x24 (this+36)
    int32_t                     controlNodeCount;  // +0x34 (this+52)
    int32_t                     controlNodeCapacity;// +0x38 (this+56)
    TechnoClass*                owner;              // +0x48 (this+72)
    HouseClass*                 originalOwner;     // +0x3C (this+60)
    bool                        CaptureManagerClass_field_30;          // +0x30 (this+48)
    bool                        CaptureManagerClass_field_31;          // +0x31 (this+49)
    uint8_t                     pad_32[2];         // +0x32..+0x33
    bool                        CaptureManagerClass_field_40;          // +0x40 (this+64)
    bool                        CaptureManagerClass_field_41;          // +0x41 (this+65)
    uint8_t                     pad_42[2];         // +0x42..+0x43
    int32_t                     overloadLimit;     // +0x4C (this+76)
    int32_t                     overloadCount;     // +0x44 (this+68)
    int32_t                     linkCount;         // +0x28 (this+40)
    int32_t                     CaptureManagerClass_field_2C;          // +0x2C (this+44)
};

} // namespace game
} // namespace ra2
