#pragma once

#include "memory.hpp"

#include <utility>
#include <algorithm>

namespace gamemd
{

template <typename T>
class VectorClass
{
public:
    static_assert(!needs_vector_delete<T>::value || (alignof(T) <= 4),
        "Alignment of T needs to be less than or equal to 4.");

    constexpr VectorClass() noexcept = default;

    explicit VectorClass(int capacity, T* mem = nullptr)
    {
        if (capacity != 0)
        {
            Capacity = capacity;
            if (mem)
            {
                Items = mem;
            }
            else
            {
                Items = GameCreateArray<T>(static_cast<std::size_t>(capacity));
                IsAllocated = true;
            }
        }
    }

    VectorClass(const VectorClass& other)
    {
        if (other.Capacity > 0)
        {
            Items = GameCreateArray<T>(static_cast<std::size_t>(other.Capacity));
            IsAllocated = true;
            Capacity = other.Capacity;
            for (int i = 0; i < other.Capacity; ++i)
            {
                Items[i] = other.Items[i];
            }
        }
    }

    VectorClass(VectorClass&& other) noexcept
        : Items(other.Items)
        , Capacity(other.Capacity)
        , IsInitialized(other.IsInitialized)
        , IsAllocated(std::exchange(other.IsAllocated, false)) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {}

    virtual ~VectorClass() noexcept
    {
        if (IsAllocated)
        {
            GameDeleteArray(Items, static_cast<std::size_t>(Capacity));
        }
    }

    VectorClass& operator=(const VectorClass& other) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        VectorClass(other).Swap(*this);
        return *this;
    }

    VectorClass& operator=(VectorClass&& other) noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        VectorClass(std::move(other)).Swap(*this);
        return *this;
    }

    virtual bool operator==(const VectorClass& other) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (Capacity != other.Capacity)
        {
            return false;
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

    bool operator!=(const VectorClass& other) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return !(*this == other);
    }

    virtual bool SetCapacity(int capacity, T* mem = nullptr)
    {
        if (capacity != 0)
        {
            IsInitialized = false;
            bool mustAllocate = (mem == nullptr);
            if (!mem)
            {
                mem = GameCreateArray<T>(static_cast<std::size_t>(capacity));
            }
            IsInitialized = true;
            if (!mem)
            {
                return false;
            }
            if (Items)
            {
                int n = (capacity < Capacity) ? capacity : Capacity;
                for (int i = 0; i < n; ++i)
                {
                    mem[i] = std::move_if_noexcept(Items[i]);
                }
                if (IsAllocated)
                {
                    GameDeleteArray(Items, static_cast<std::size_t>(Capacity)); // IDA: UNMATCHED — no_callgraph_match, no_git_history
                    Items = nullptr;
                }
            }
            IsAllocated = mustAllocate;
            Items = mem;
            Capacity = capacity;
        }
        else
        {
            Clear();
        }
        return true;
    }

    virtual void Clear()
    {
        VectorClass(std::move(*this));
        Items = nullptr;
        Capacity = 0;
    }

    virtual int FindItemIndex(const T& item) const
    {
        if (!IsInitialized)
        {
            return 0;
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

    virtual int GetItemIndex(const T* item) const final
    {
        if (!IsInitialized)
        {
            return 0;
        }
        return static_cast<int>(item - Items);
    }

    virtual T GetItem(int i) const final
    {
        return Items[i];
    }

    T& operator[](int i)
    {
        return Items[i];
    }

    const T& operator[](int i) const
    {
        return Items[i];
    }

    bool Reserve(int capacity) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (!IsInitialized)
        {
            return false;
        }
        if (Capacity >= capacity)
        {
            return true;
        }
        return SetCapacity(capacity, nullptr);
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
    constexpr DynamicVectorClass() noexcept = default;

    explicit DynamicVectorClass(int capacity, T* mem = nullptr)
        : VectorClass<T>(capacity, mem)
    {}

    DynamicVectorClass(const DynamicVectorClass& other)
    {
        if (other.Capacity > 0)
        {
            this->Items = GameCreateArray<T>(static_cast<std::size_t>(other.Capacity));
            this->IsAllocated = true;
            this->Capacity = other.Capacity;
            Count = other.Count;
            CapacityIncrement = other.CapacityIncrement;
            for (int i = 0; i < other.Count; ++i)
            {
                this->Items[i] = other.Items[i];
            }
        }
    }

    DynamicVectorClass(DynamicVectorClass&& other) noexcept
        : VectorClass<T>(std::move(other))
        , Count(other.Count)
        , CapacityIncrement(other.CapacityIncrement) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {}

    DynamicVectorClass& operator=(const DynamicVectorClass& other) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        DynamicVectorClass(other).Swap(*this);
        return *this;
    }

    DynamicVectorClass& operator=(DynamicVectorClass&& other) noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        DynamicVectorClass(std::move(other)).Swap(*this);
        return *this;
    }

    bool SetCapacity(int capacity, T* mem = nullptr) override
    {
        bool result = VectorClass<T>::SetCapacity(capacity, mem);
        if (this->Capacity < Count)
        {
            Count = this->Capacity;
        }
        return result;
    }

    void Clear() override
    {
        VectorClass<T>::Clear();
        Count = 0;
    }

    int FindItemIndex(const T& item) const override final
    {
        if (!this->IsInitialized)
        {
            return 0;
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

    bool ValidIndex(int index) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return static_cast<unsigned>(index) < static_cast<unsigned>(Count);
    }

    T GetItemOrDefault(int i) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return GetItemOrDefault(i, T());
    }

    T GetItemOrDefault(int i, T def) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (ValidIndex(i))
        {
            return this->Items[i];
        }
        return def;
    }

    T* begin() // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return &this->Items[0];
    }

    T* end() // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return &this->Items[Count];
    }

    const T* begin() const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return &this->Items[0];
    }

    const T* end() const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return &this->Items[Count];
    }

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
        this->Items[Count++] = std::move(item);
        return true;
    }

    bool AddUnique(const T& item) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        int idx = FindItemIndex(item);
        return idx < 0 && AddItem(item);
    }

    bool RemoveItem(int index)
    {
        if (!ValidIndex(index))
        {
            return false;
        }
        --Count;
        for (int i = index; i < Count; ++i)
        {
            this->Items[i] = std::move_if_noexcept(this->Items[i + 1]);
        }
        return true;
    }

    bool Remove(const T& item)
    {
        int idx = FindItemIndex(item);
        return idx >= 0 && RemoveItem(idx);
    }

    void Swap(DynamicVectorClass& other) noexcept
    {
        VectorClass<T>::Swap(other);
        std::swap(Count, other.Count);
        std::swap(CapacityIncrement, other.CapacityIncrement);
    }

    int Count = 0;
    int CapacityIncrement = 10;
};

// IDA: TypeList<T> is declared in entity/tiberium.hpp
// Used by RulesClass/ScenarioClass as typed list container.

} // namespace gamemd
