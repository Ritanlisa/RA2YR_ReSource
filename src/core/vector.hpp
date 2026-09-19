#pragma once

#include "memory.hpp"

#include <utility>
#include <algorithm>

namespace gamemd
{

// ============================================================================
// VectorClass<T> / DynamicVectorClass<T> / TypeList<T>
//
// Re-translated to STRICTLY mirror the gamemd.exe IDA decompilation. Templates
// cannot be validated by the downstream 对拍 (shadow comparison) framework, so
// IDA fidelity is the ONLY verification — every method below reproduces the
// exact control flow, field usage, edge cases and operation order of the binary.
//
// Object layout (verified via TiberiumClass::Debris ctor @0x7216C0 and the
// per-type vtables, e.g. VectorClass<BulletClass*>::vftable @0x7E4698):
//
//   offset 0  : vtable pointer
//   offset 4  : T*   Items
//   offset 8  : int  Capacity
//   offset 12 : bool IsInitialized
//   offset 13 : bool IsAllocated
//   (DynamicVectorClass adds)
//   offset 16 : int  Count
//   offset 20 : int  CapacityIncrement   (default 10)
//
// VectorClass vtable order (confirmed): [0] ~dtor, [1] operator==,
//   [2] SetCapacity, [3] Clear, [4] FindItemIndex, [5] GetItemIndex,
//   [6] GetItem.
//
// NOTE on IDA stub names: IDA's per-instance "method names" (Add/Remove/Get/
// Release/QueryInterface/GetSize/GetCapacity…) are heuristic and systematically
// MISLABELED. The real identity comes from the decompiled body + vtable slot:
//   IDA "QueryInterface" (_vt00) = scalar-deleting ~dtor
//   IDA "Add"           (_vt01) = operator==
//   IDA "Release"       (_vt02) = VectorClass::SetCapacity (base)
//   IDA "Remove"        (_vt03) = VectorClass::Clear (base)
//   IDA "GetSize"       (_vt04) = VectorClass::FindItemIndex (base, Capacity)
//   IDA "GetCapacity"   (_vt05) = VectorClass::GetItemIndex
//   IDA "Get"           (_vt06) = VectorClass::GetItem
// The genuine non-virtual AddItem/RemoveItem/GetSize(Count) live as
// `DynamicVector::*` functions (e.g. AddItem @0x413A70, RemoveItem @0x45ADD0).
// ============================================================================

template <typename T>
class VectorClass
{
public:
    // G22: embed-cleanup helpers (DTOR family callees)
    static void Cleanup(void* embed);   // 0x45a270
    static void Destroy(void* embed);   // 0x477d20
public:
    static_assert(!needs_vector_delete<T>::value || (alignof(T) <= 4),
        "Alignment of T needs to be less than or equal to 4.");

    // design: constexpr default ctor — Items=0, Capacity=0, IsInitialized=true,
    //         IsAllocated=false (matches the base-init prologue of every ctor)
    constexpr VectorClass() noexcept;

    // 0x478790 (VectorClass<TechnoTypeClass*> ctor) — base allocation path
    explicit VectorClass(int capacity, T* mem = nullptr);

    // 0x4779E0 (DynamicVectorClass<int>::Copy base portion) — deep copy of
    // Capacity elements (NOT Count)
    VectorClass(const VectorClass& other);

    // design: move ctor — modern C++ convenience (no binary equivalent; MSVC 6.0
    //         has no move semantics). Transfers ownership without reallocating.
    VectorClass(VectorClass&& other) noexcept;

    // 0x46B8C0 (~VectorClass<BulletClass*>, scalar-deleting wrapper body)
    // The vtable reset + "if (flag&1) operator delete(this)" are compiler-
    // generated; the source destructor body is exactly the lines below.
    virtual ~VectorClass() noexcept;

    // design: copy/move assignment via copy-and-swap (mirrors the
    //         "Destroy-then-copy" shape of DynamicVectorClass::Copy @0x4779E0)
    VectorClass& operator=(const VectorClass& other);
    VectorClass& operator=(VectorClass&& other) noexcept;

    // 0x46B660 — operator== [vtable slot 1]
    virtual bool operator==(const VectorClass& other) const;
    bool operator!=(const VectorClass& other) const;

    // 0x46B6A0 — VectorClass::SetCapacity [vtable slot 2] (base, flat)
    virtual bool SetCapacity(int capacity, T* mem = nullptr);

    // 0x46B750 — VectorClass::Clear [vtable slot 3] (base)
    virtual void Clear();

    // 0x46B780 — VectorClass::FindItemIndex [vtable slot 4] (base, scans Capacity)
    virtual int FindItemIndex(const T& item) const;

    // 0x46B7C0 — VectorClass::GetItemIndex [vtable slot 5] (final)
    virtual int GetItemIndex(const T* item) const final;

    // 0x46B630 — VectorClass::GetItem [vtable slot 6] (final)
    virtual T GetItem(int i) const final;

    // design: inline accessors, inlined at all call sites in the binary
    T& operator[](int i);
    const T& operator[](int i) const;

    void Swap(VectorClass& other) noexcept;

    T* Items = nullptr;
    int Capacity = 0;
    bool IsInitialized = true;
    bool IsAllocated = false;
// --- e4 declarations (BEGIN) ---
    char AddRef(int a2);  // 0x40B140
    char Release(int a2, char * a3);  // 0x40B180
    void Cleanup5();  // 0x40B270
    int GetSize(unsigned int * a2);  // 0x40B2A0
    unsigned int GetCapacity(int a2);  // 0x40B2E0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x40B300
    int GetAt(int a2);  // 0x40CCC0
    int RemoveObjectById();  // 0x4137A0
    char ResizeEx(int a2, unsigned int * a3);  // 0x42F860
    unsigned int * CellConstructor(IUnknown * aP1, IUnknown * aP2);  // 0x42FCB0
    void Cleanup();  // 0x45A270
    unsigned int * ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2);  // 0x45AD80
    int * ScalarDtor(char a2);  // 0x477750
    unsigned int * Copy(VectorClass * aP1);  // 0x4777B0
    int GetAt_Copy(int a2);  // 0x477890
    unsigned int * Construct(int a2, int a3);  // 0x477BE0
    char vt02(int a2, unsigned int * a3);  // 0x477C70
    void Destroy();  // 0x477D20
    int vt04(unsigned int * a2);  // 0x477D50
    unsigned int vt05(int a2);  // 0x477D90
    char Resize(int a2, unsigned int * a3);  // 0x477E10
    VectorClass * vt00(unsigned int * Block, char a2);  // 0x478630
    int GetCount();  // 0x49FB60
    void ClearAndFree2();  // 0x4A10A0
    void CleanupTyped();  // 0x4A1330
    char AppendCopy(DynamicVector * aP1);  // 0x4A7FE0
    unsigned int GetIndex(int a2);  // 0x4EBFA0
    void Cleanup4();  // 0x4ED950
    char InsertAt(IUnknown * aP1, int a3);  // 0x50EB70
    void ClearAndFree3();  // 0x50F830
    unsigned int * BuildingConstructor(int a2, int a3);  // 0x510550
    unsigned int * BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2);  // 0x5105A0
    unsigned int * CopyConstructor(InfantryTypeClass * aP1);  // 0x512FA0
    char PushBack(VectorClass * aP1);  // 0x5132F0
    void ClearAndFree4();  // 0x5134D0
    unsigned int * CopyDefault(VectorClass * aP1);  // 0x525060
    int RemoveItem(ObjectClass * aP1);  // 0x55BAE0
    void CleanupSubzone();  // 0x588C90
    unsigned int * ConstructSubzone(int a2, int a3);  // 0x58AC70
    void ddtor();  // 0x5D8640
    void Cleanup3();  // 0x5EED00
    void Destructor();  // 0x5FFFC0
    unsigned int * ConstructHSV(int a2, int a3);  // 0x628DF0
    char PushBackCopy(AbstractClass * aP1);  // 0x630250
    void Cleanup2();  // 0x63E140
    char Append(VectorClass * aP1);  // 0x63E540
    char EraseAt(IUnknown * aP1);  // 0x63E900
    unsigned int * PointConstructor(MapClass * aP1, MapClass * aP2);  // 0x658D60
    int RemoveElement();  // 0x65A970
    void Dtor();  // 0x679F70
    int LoadStream(TechnoTypeClass * aP1);  // 0x67A630
    int SaveLoad(TechnoTypeClass * aP1);  // 0x67A850
    unsigned int * CopyAssign(VectorClass * aP1);  // 0x67AA80
    unsigned int * CopySmudge(CCINIClass * aP1);  // 0x67AE00
    void ClearAndFree();  // 0x67AF60
    unsigned int * CopyBuilding(VectorClass * aP1);  // 0x67B180
    char PushBack2(unsigned int * a2);  // 0x691160
    unsigned int * WstringConstructor(int a2, unsigned int * a3);  // 0x69D7C0
    int Check(Pipe * aP1, int aP2);  // 0x69E9B0
    char RemoveAt(int a2);  // 0x6CE2D0
    unsigned int * CopyParticle(DynamicVector * aP1);  // 0x717D20
    int GetAtChecked(IUnknown * aP1);  // 0x763BA0
    char Shrink();  // 0x7AE730
// --- e4 declarations (END) ---
};

template <typename T>
class DynamicVectorClass : public VectorClass<T>
{
public:
    static void Destroy_Alt(void* embed);   // 0x5251c0
    // design: constexpr default ctor — base init + Count=0, CapacityIncrement=10
    constexpr DynamicVectorClass() noexcept;

    // 0x477DB0 (DynamicVectorClass<int>::Construct) — base ctor then
    //          CapacityIncrement=10, Count=0 (member initializers below)
    explicit DynamicVectorClass(int capacity, T* mem = nullptr);

    // 0x4779E0 (DynamicVectorClass<int>::Copy) — deep copy of Capacity elements;
    //          Count and CapacityIncrement copied unconditionally
    DynamicVectorClass(const DynamicVectorClass& other);

    // design: move ctor — modern convenience, no binary equivalent
    DynamicVectorClass(DynamicVectorClass&& other) noexcept;

    DynamicVectorClass& operator=(const DynamicVectorClass& other);
    DynamicVectorClass& operator=(DynamicVectorClass&& other) noexcept;

    // 0x4E9AA0 — DynamicVectorClass::SetCapacity [vtable slot 2 override]
    // FLAT function: base alloc/copy logic inlined + Count clamp at the end.
    // (Does NOT delegate to VectorClass::SetCapacity — matches the binary.)
    bool SetCapacity(int capacity, T* mem = nullptr) override;

    // 0x46B5E0 — DynamicVectorClass::Clear [vtable slot 3 override]
    // Resets Count=0 first, then frees Items (flat; mirrors the binary order).
    void Clear() override;

    // 0x4E9B50 — DynamicVectorClass::FindItemIndex [vtable slot 4 override]
    // Scans Count (NOT Capacity); returns -1 when Count<=0. There is NO
    // IsInitialized check here (unlike the base VectorClass version).
    int FindItemIndex(const T& item) const override final;

    // design: inline accessor, inlined at all call sites
    int GetSize() const;

    // 0x413A70 (DynamicVector::AddItem) — append with capacity growth
    bool AddItem(T item);

    // 0x45ADD0 (DynamicVector::RemoveItem) — remove by index, shift-down.
    // Guard is the signed test `index >= Count` (matches the binary; this is
    // NOT an unsigned ValidIndex check).
    bool RemoveItem(int index);

    // 0x4390D0 (RemoveFromDynamicVector pattern) — FindItemIndex then RemoveItem
    bool Remove(const T& item);

    // design: YRpp convenience helpers, inlined in the binary
    bool ValidIndex(int index) const;
    bool AddUnique(const T& item);
    T GetItemOrDefault(int i, T def) const;

    T* begin();
    T* end();
    const T* begin() const;
    const T* end() const;

    void Swap(DynamicVectorClass& other) noexcept;

    int Count = 0;
    int CapacityIncrement = 10;
// --- e4 declarations (BEGIN) ---
    unsigned int * Copy(DynamicVector * aP1);  // 0x4779E0
    unsigned int * Construct(int a2, int a3);  // 0x477DB0
    void Destroy();  // 0x50EA00
    void Destroy_Alt();  // 0x5251C0
    unsigned int * AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2);  // 0x525250
    unsigned int * BuildingTypeConstructor(int a2, int a3);  // 0x5AC900
// --- e4 declarations (END) ---
};

// ============================================================================
// TypeList<T> : public DynamicVectorClass<T>
//
// Same memory layout as DynamicVectorClass<T> (no extra fields) — confirmed by
// TypeList::CopyConstructor @0x513740 which copies exactly the 6 DynamicVector
// fields. TypeList only differs by its own vtable (a distinct operator== slot,
// @0x67AE70, with a body identical to the base). All other behaviour is
// inherited from DynamicVectorClass.
// ============================================================================
template <typename T>
class TypeList : public DynamicVectorClass<T>
{
public:
    // design: constexpr default ctor — inherits DynamicVectorClass field init
    constexpr TypeList() noexcept;

    // 0x478790 (base portion) / 0x67A4F0 (TypeList::Construct) — ctor(capacity,mem)
    explicit TypeList(int capacity, T* mem = nullptr);

    // 0x513740 (TypeList::CopyConstructor) — deep copy via base copy ctor
    TypeList(const TypeList& other);

    TypeList& operator=(const TypeList& other);

    // 0x67AE70 — TypeList::operator== [distinct vtable slot 1, identical body]
    bool operator==(const VectorClass<T>& other) const override;
// --- e4 declarations (BEGIN) ---
    void ddtor();  // 0x477840
    unsigned int GetCapacity(int a2);  // 0x477870
    TypeList * QueryInterface(unsigned int * Block, char a2);  // 0x477990
    int GetSize(unsigned int * a2);  // 0x477F10
    unsigned int * Copy(unsigned int * a2);  // 0x478720
    unsigned int * TechnoTypeConstructor(int a2, int a3);  // 0x478790
    unsigned int * CopyConstructor(VectorClass * aP1);  // 0x513740
    unsigned int * AnimTypeCopy(VectorClass * aP1);  // 0x5255F0
    CCINIClass * BuildingTypeConstructor();  // 0x5AC400
    unsigned int * BuildingTypeCopy(VectorClass * aP1);  // 0x5AD660
    void InfantryCleanup();  // 0x67A030
    int * CopyFull(VectorClass * aP1);  // 0x67A090
    int * CopyAircraft(VectorClass * aP1);  // 0x67A110
    int * CopyInfantry(CCINIClass * aP1);  // 0x67A290
    CCINIClass * VoxelAnimConstructor();  // 0x67A390
    DynamicVector * Construct();  // 0x67A4F0
    CCINIClass * ConstructSmudge();  // 0x67A600
    int Clear(int a2);  // 0x67A6D0
    unsigned int * InfantryConstructor();  // 0x67A820
    char AddRef(int a2);  // 0x67AE70
    char Release(int a2, unsigned int * a3);  // 0x67B050
    unsigned int * CopyVoxelAnim(VectorClass * aP1);  // 0x67C1F0
    unsigned int * ParticleConstructor(int a2, int a3);  // 0x717C70
    char PushBack(VectorClass * aP1);  // 0x717CD0
// --- e4 declarations (END) ---
};

#include "vector.inl"

} // namespace gamemd
