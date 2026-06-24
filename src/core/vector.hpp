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
    static_assert(!needs_vector_delete<T>::value || (alignof(T) <= 4),
        "Alignment of T needs to be less than or equal to 4.");

    // design: constexpr default ctor — Items=0, Capacity=0, IsInitialized=true,
    //         IsAllocated=false (matches the base-init prologue of every ctor)
    constexpr VectorClass() noexcept = default;

    // 0x478790 (VectorClass<TechnoTypeClass*> ctor) — base allocation path
    explicit VectorClass(int capacity, T* mem = nullptr)
    {
        Items = nullptr;
        Capacity = capacity;
        IsInitialized = true;
        IsAllocated = false;
        if (capacity)
        {
            if (mem)
            {
                Items = mem;
            }
            else
            {
                Items = GameCreateArray<T>((std::size_t)capacity);
                IsAllocated = true;
            }
        }
    }

    // 0x4779E0 (DynamicVectorClass<int>::Copy base portion) — deep copy of
    // Capacity elements (NOT Count)
    VectorClass(const VectorClass& other)
    {
        if (other.Capacity > 0)
        {
            Capacity = other.Capacity;
            Items = GameCreateArray<T>((std::size_t)other.Capacity);
            if (Items)
            {
                IsAllocated = true;
                for (int i = 0; i < other.Capacity; ++i)
                {
                    Items[i] = other.Items[i];
                }
            }
        }
    }

    // design: move ctor — modern C++ convenience (no binary equivalent; MSVC 6.0
    //         has no move semantics). Transfers ownership without reallocating.
    VectorClass(VectorClass&& other) noexcept
        : Items(other.Items)
        , Capacity(other.Capacity)
        , IsInitialized(other.IsInitialized)
        , IsAllocated(std::exchange(other.IsAllocated, false))
    {
        other.Items = nullptr;
        other.Capacity = 0;
    }

    // 0x46B8C0 (~VectorClass<BulletClass*>, scalar-deleting wrapper body)
    // The vtable reset + "if (flag&1) operator delete(this)" are compiler-
    // generated; the source destructor body is exactly the lines below.
    virtual ~VectorClass() noexcept
    {
        if (Items && IsAllocated)
        {
            GameDeleteArray(Items, (std::size_t)Capacity);
            Items = nullptr;
        }
        IsAllocated = false;
        Capacity = 0;
    }

    // design: copy/move assignment via copy-and-swap (mirrors the
    //         "Destroy-then-copy" shape of DynamicVectorClass::Copy @0x4779E0)
    VectorClass& operator=(const VectorClass& other)
    {
        VectorClass(other).Swap(*this);
        return *this;
    }

    VectorClass& operator=(VectorClass&& other) noexcept
    {
        VectorClass(std::move(other)).Swap(*this);
        return *this;
    }

    // 0x46B660 — operator== [vtable slot 1]
    virtual bool operator==(const VectorClass& other) const
    {
        if (Capacity != other.Capacity)
        {
            return false;
        }
        if (Capacity <= 0)
        {
            return true;
        }
        for (int i = 0; i < Capacity; ++i)
        {
            if (Items[i] == other.Items[i])
            {
                continue;
            }
            return false;
        }
        return true;
    }

    bool operator!=(const VectorClass& other) const
    {
        return !(*this == other);
    }

    // 0x46B6A0 — VectorClass::SetCapacity [vtable slot 2] (base, flat)
    virtual bool SetCapacity(int capacity, T* mem = nullptr)
    {
        if (capacity)
        {
            IsInitialized = false;
            T* buffer = mem ? mem : GameCreateArray<T>((std::size_t)capacity);
            IsInitialized = true;
            if (buffer)
            {
                if (Items)
                {
                    int n = (capacity < Capacity) ? capacity : Capacity;
                    for (int i = 0; i < n; ++i)
                    {
                        buffer[i] = Items[i];
                    }
                    if (IsAllocated)
                    {
                        GameDeleteArray(Items, (std::size_t)Capacity);
                        Items = nullptr;
                    }
                }
                Items = buffer;
                Capacity = capacity;
                IsAllocated = (mem == nullptr);
                return true;
            }
            return false;
        }
        Clear();  // virtual dispatch — vtable[3]
        return true;
    }

    // 0x46B750 — VectorClass::Clear [vtable slot 3] (base)
    virtual void Clear()
    {
        if (Items && IsAllocated)
        {
            GameDeleteArray(Items, (std::size_t)Capacity);
            Items = nullptr;
        }
        IsAllocated = false;
        Capacity = 0;
    }

    // 0x46B780 — VectorClass::FindItemIndex [vtable slot 4] (base, scans Capacity)
    virtual int FindItemIndex(const T& item) const
    {
        if (!IsInitialized)
        {
            return 0;
        }
        if (Capacity <= 0)
        {
            return -1;
        }
        for (int i = 0; i < Capacity; ++i)
        {
            if (Items[i] == item)
            {
                return i;
            }
        }
        return -1;
    }

    // 0x46B7C0 — VectorClass::GetItemIndex [vtable slot 5] (final)
    virtual int GetItemIndex(const T* item) const final
    {
        if (IsInitialized)
        {
            return (int)(item - Items);
        }
        return 0;
    }

    // 0x46B630 — VectorClass::GetItem [vtable slot 6] (final)
    virtual T GetItem(int i) const final
    {
        return Items[i];
    }

    // design: inline accessors, inlined at all call sites in the binary
    T& operator[](int i)
    {
        return Items[i];
    }

    const T& operator[](int i) const
    {
        return Items[i];
    }

    void Swap(VectorClass& other) noexcept
    {
        std::swap(Items, other.Items);
        std::swap(Capacity, other.Capacity);
        std::swap(IsInitialized, other.IsInitialized);
        std::swap(IsAllocated, other.IsAllocated);
    }

    T* Items = nullptr;
    int Capacity = 0;
    bool IsInitialized = true;
    bool IsAllocated = false;
};

template <typename T>
class DynamicVectorClass : public VectorClass<T>
{
public:
    // design: constexpr default ctor — base init + Count=0, CapacityIncrement=10
    constexpr DynamicVectorClass() noexcept = default;

    // 0x477DB0 (DynamicVectorClass<int>::Construct) — base ctor then
    //          CapacityIncrement=10, Count=0 (member initializers below)
    explicit DynamicVectorClass(int capacity, T* mem = nullptr)
        : VectorClass<T>(capacity, mem)
    {}

    // 0x4779E0 (DynamicVectorClass<int>::Copy) — deep copy of Capacity elements;
    //          Count and CapacityIncrement copied unconditionally
    DynamicVectorClass(const DynamicVectorClass& other)
    {
        if (other.Capacity > 0)
        {
            this->Capacity = other.Capacity;
            this->Items = GameCreateArray<T>((std::size_t)other.Capacity);
            if (this->Items)
            {
                this->IsAllocated = true;
                for (int i = 0; i < other.Capacity; ++i)
                {
                    this->Items[i] = other.Items[i];
                }
            }
        }
        Count = other.Count;
        CapacityIncrement = other.CapacityIncrement;
    }

    // design: move ctor — modern convenience, no binary equivalent
    DynamicVectorClass(DynamicVectorClass&& other) noexcept
        : VectorClass<T>(std::move(other))
        , Count(other.Count)
        , CapacityIncrement(other.CapacityIncrement)
    {
        other.Count = 0;
    }

    DynamicVectorClass& operator=(const DynamicVectorClass& other)
    {
        DynamicVectorClass(other).Swap(*this);
        return *this;
    }

    DynamicVectorClass& operator=(DynamicVectorClass&& other) noexcept
    {
        DynamicVectorClass(std::move(other)).Swap(*this);
        return *this;
    }

    // 0x4E9AA0 — DynamicVectorClass::SetCapacity [vtable slot 2 override]
    // FLAT function: base alloc/copy logic inlined + Count clamp at the end.
    // (Does NOT delegate to VectorClass::SetCapacity — matches the binary.)
    bool SetCapacity(int capacity, T* mem = nullptr) override
    {
        if (capacity)
        {
            this->IsInitialized = false;
            T* buffer = mem ? mem : GameCreateArray<T>((std::size_t)capacity);
            this->IsInitialized = true;
            if (!buffer)
            {
                return false;
            }
            if (this->Items)
            {
                int n = (capacity < this->Capacity) ? capacity : this->Capacity;
                for (int i = 0; i < n; ++i)
                {
                    buffer[i] = this->Items[i];
                }
                if (this->IsAllocated)
                {
                    GameDeleteArray(this->Items, (std::size_t)this->Capacity);
                    this->Items = nullptr;
                }
            }
            this->Items = buffer;
            this->Capacity = capacity;
            this->IsAllocated = (mem == nullptr);
        }
        else
        {
            this->Clear();  // virtual dispatch — DynamicVectorClass::Clear
        }
        if (this->Capacity < Count)
        {
            Count = this->Capacity;
        }
        return true;
    }

    // 0x46B5E0 — DynamicVectorClass::Clear [vtable slot 3 override]
    // Resets Count=0 first, then frees Items (flat; mirrors the binary order).
    void Clear() override
    {
        T* old = this->Items;
        Count = 0;
        if (old && this->IsAllocated)
        {
            GameDeleteArray(old, (std::size_t)this->Capacity);
            this->Items = nullptr;
        }
        this->IsAllocated = false;
        this->Capacity = 0;
    }

    // 0x4E9B50 — DynamicVectorClass::FindItemIndex [vtable slot 4 override]
    // Scans Count (NOT Capacity); returns -1 when Count<=0. There is NO
    // IsInitialized check here (unlike the base VectorClass version).
    int FindItemIndex(const T& item) const override final
    {
        if (Count <= 0)
        {
            return -1;
        }
        for (int i = 0; i < Count; ++i)
        {
            if (this->Items[i] == item)
            {
                return i;
            }
        }
        return -1;
    }

    // design: inline accessor, inlined at all call sites
    int GetSize() const { return Count; }

    // 0x413A70 (DynamicVector::AddItem) — append with capacity growth
    bool AddItem(T item)
    {
        if (Count >= this->Capacity)
        {
            if (!this->IsAllocated && this->Capacity != 0)
            {
                return false;
            }
            if (CapacityIncrement <= 0)
            {
                return false;
            }
            if (!this->SetCapacity(this->Capacity + CapacityIncrement, nullptr))
            {
                return false;
            }
        }
        this->Items[Count++] = item;
        return true;
    }

    // 0x45ADD0 (DynamicVector::RemoveItem) — remove by index, shift-down.
    // Guard is the signed test `index >= Count` (matches the binary; this is
    // NOT an unsigned ValidIndex check).
    bool RemoveItem(int index)
    {
        if (index >= Count)
        {
            return false;
        }
        --Count;
        if (index < Count)
        {
            for (int i = index; i < Count; ++i)
            {
                this->Items[i] = this->Items[i + 1];
            }
        }
        return true;
    }

    // 0x4390D0 (RemoveFromDynamicVector pattern) — FindItemIndex then RemoveItem
    bool Remove(const T& item)
    {
        int idx = FindItemIndex(item);
        if (idx < 0)
        {
            return false;
        }
        return RemoveItem(idx);
    }

    // design: YRpp convenience helpers, inlined in the binary
    bool ValidIndex(int index) const
    {
        return (unsigned)index < (unsigned)Count;
    }

    bool AddUnique(const T& item)
    {
        int idx = FindItemIndex(item);
        return idx < 0 && AddItem(item);
    }

    T GetItemOrDefault(int i, T def) const
    {
        if (ValidIndex(i))
        {
            return this->Items[i];
        }
        return def;
    }

    T* begin() { return &this->Items[0]; }
    T* end() { return &this->Items[Count]; }
    const T* begin() const { return &this->Items[0]; }
    const T* end() const { return &this->Items[Count]; }

    void Swap(DynamicVectorClass& other) noexcept
    {
        VectorClass<T>::Swap(other);
        std::swap(Count, other.Count);
        std::swap(CapacityIncrement, other.CapacityIncrement);
    }

    int Count = 0;
    int CapacityIncrement = 10;
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
    constexpr TypeList() noexcept = default;

    // 0x478790 (base portion) / 0x67A4F0 (TypeList::Construct) — ctor(capacity,mem)
    explicit TypeList(int capacity, T* mem = nullptr)
        : DynamicVectorClass<T>(capacity, mem)
    {}

    // 0x513740 (TypeList::CopyConstructor) — deep copy via base copy ctor
    TypeList(const TypeList& other)
        : DynamicVectorClass<T>(other)
    {}

    TypeList& operator=(const TypeList& other)
    {
        DynamicVectorClass<T>::operator=(other);
        return *this;
    }

    // 0x67AE70 — TypeList::operator== [distinct vtable slot 1, identical body]
    bool operator==(const VectorClass<T>& other) const override
    {
        if (this->Capacity != other.Capacity)
        {
            return false;
        }
        if (this->Capacity <= 0)
        {
            return true;
        }
        for (int i = 0; i < this->Capacity; ++i)
        {
            if (this->Items[i] == other.Items[i])
            {
                continue;
            }
            return false;
        }
        return true;
    }
};

} // namespace gamemd
