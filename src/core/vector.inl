// ============================================================================
// VectorClass<T> — out-of-line template method implementations
// ============================================================================

template <typename T>
constexpr VectorClass<T>::VectorClass() noexcept = default;

template <typename T>
VectorClass<T>::VectorClass(int capacity, T* mem)
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

template <typename T>
VectorClass<T>::VectorClass(const VectorClass& other)
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

template <typename T>
VectorClass<T>::VectorClass(VectorClass&& other) noexcept
    : Items(other.Items)
    , Capacity(other.Capacity)
    , IsInitialized(other.IsInitialized)
    , IsAllocated(std::exchange(other.IsAllocated, false))
{
    other.Items = nullptr;
    other.Capacity = 0;
}

template <typename T>
VectorClass<T>::~VectorClass() noexcept
{
    if (Items && IsAllocated)
    {
        GameDeleteArray(Items, (std::size_t)Capacity);
        Items = nullptr;
    }
    IsAllocated = false;
    Capacity = 0;
}

template <typename T>
VectorClass<T>& VectorClass<T>::operator=(const VectorClass& other)
{
    VectorClass(other).Swap(*this);
    return *this;
}

template <typename T>
VectorClass<T>& VectorClass<T>::operator=(VectorClass&& other) noexcept
{
    VectorClass(std::move(other)).Swap(*this);
    return *this;
}

template <typename T>
bool VectorClass<T>::operator==(const VectorClass& other) const
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

template <typename T>
bool VectorClass<T>::operator!=(const VectorClass& other) const
{
    return !(*this == other);
}

template <typename T>
bool VectorClass<T>::SetCapacity(int capacity, T* mem)
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
    Clear();
    return true;
}

template <typename T>
void VectorClass<T>::Clear()
{
    if (Items && IsAllocated)
    {
        GameDeleteArray(Items, (std::size_t)Capacity);
        Items = nullptr;
    }
    IsAllocated = false;
    Capacity = 0;
}

template <typename T>
int VectorClass<T>::FindItemIndex(const T& item) const
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

template <typename T>
int VectorClass<T>::GetItemIndex(const T* item) const
{
    if (IsInitialized)
    {
        return (int)(item - Items);
    }
    return 0;
}

template <typename T>
T VectorClass<T>::GetItem(int i) const
{
    return Items[i];
}

template <typename T>
T& VectorClass<T>::operator[](int i)
{
    return Items[i];
}

template <typename T>
const T& VectorClass<T>::operator[](int i) const
{
    return Items[i];
}

template <typename T>
void VectorClass<T>::Swap(VectorClass& other) noexcept
{
    std::swap(Items, other.Items);
    std::swap(Capacity, other.Capacity);
    std::swap(IsInitialized, other.IsInitialized);
    std::swap(IsAllocated, other.IsAllocated);
}

// ============================================================================
// DynamicVectorClass<T> — out-of-line template method implementations
// ============================================================================

template <typename T>
constexpr DynamicVectorClass<T>::DynamicVectorClass() noexcept = default;

template <typename T>
DynamicVectorClass<T>::DynamicVectorClass(int capacity, T* mem)
    : VectorClass<T>(capacity, mem)
{}

template <typename T>
DynamicVectorClass<T>::DynamicVectorClass(const DynamicVectorClass& other)
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

template <typename T>
DynamicVectorClass<T>::DynamicVectorClass(DynamicVectorClass&& other) noexcept
    : VectorClass<T>(std::move(other))
    , Count(other.Count)
    , CapacityIncrement(other.CapacityIncrement)
{
    other.Count = 0;
}

template <typename T>
DynamicVectorClass<T>& DynamicVectorClass<T>::operator=(const DynamicVectorClass& other)
{
    DynamicVectorClass(other).Swap(*this);
    return *this;
}

template <typename T>
DynamicVectorClass<T>& DynamicVectorClass<T>::operator=(DynamicVectorClass&& other) noexcept
{
    DynamicVectorClass(std::move(other)).Swap(*this);
    return *this;
}

template <typename T>
bool DynamicVectorClass<T>::SetCapacity(int capacity, T* mem)
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
        this->Clear();
    }
    if (this->Capacity < Count)
    {
        Count = this->Capacity;
    }
    return true;
}

template <typename T>
void DynamicVectorClass<T>::Clear()
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

template <typename T>
int DynamicVectorClass<T>::FindItemIndex(const T& item) const
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

template <typename T>
int DynamicVectorClass<T>::GetSize() const
{
    return Count;
}

template <typename T>
bool DynamicVectorClass<T>::AddItem(T item)
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

template <typename T>
bool DynamicVectorClass<T>::RemoveItem(int index)
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

template <typename T>
bool DynamicVectorClass<T>::Remove(const T& item)
{
    int idx = FindItemIndex(item);
    if (idx < 0)
    {
        return false;
    }
    return RemoveItem(idx);
}

template <typename T>
bool DynamicVectorClass<T>::ValidIndex(int index) const
{
    return (unsigned)index < (unsigned)Count;
}

template <typename T>
bool DynamicVectorClass<T>::AddUnique(const T& item)
{
    int idx = FindItemIndex(item);
    return idx < 0 && AddItem(item);
}

template <typename T>
T DynamicVectorClass<T>::GetItemOrDefault(int i, T def) const
{
    if (ValidIndex(i))
    {
        return this->Items[i];
    }
    return def;
}

template <typename T>
T* DynamicVectorClass<T>::begin()
{
    return &this->Items[0];
}

template <typename T>
T* DynamicVectorClass<T>::end()
{
    return &this->Items[Count];
}

template <typename T>
const T* DynamicVectorClass<T>::begin() const
{
    return &this->Items[0];
}

template <typename T>
const T* DynamicVectorClass<T>::end() const
{
    return &this->Items[Count];
}

template <typename T>
void DynamicVectorClass<T>::Swap(DynamicVectorClass& other) noexcept
{
    VectorClass<T>::Swap(other);
    std::swap(Count, other.Count);
    std::swap(CapacityIncrement, other.CapacityIncrement);
}

// ============================================================================
// TypeList<T> — out-of-line template method implementations
// ============================================================================

template <typename T>
constexpr TypeList<T>::TypeList() noexcept = default;

template <typename T>
TypeList<T>::TypeList(int capacity, T* mem)
    : DynamicVectorClass<T>(capacity, mem)
{}

template <typename T>
TypeList<T>::TypeList(const TypeList& other)
    : DynamicVectorClass<T>(other)
{}

template <typename T>
TypeList<T>& TypeList<T>::operator=(const TypeList& other)
{
    DynamicVectorClass<T>::operator=(other);
    return *this;
}

template <typename T>
bool TypeList<T>::operator==(const VectorClass<T>& other) const
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
