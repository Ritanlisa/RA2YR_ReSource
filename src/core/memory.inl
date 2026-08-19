// ============================================================================
// GameAllocator<T>, Memory static templates, free function templates,
// and GameDeleter — out-of-line template implementations
// ============================================================================

// --- GameAllocator<T> ---------------------------------------------------------

template <typename T>
template <typename U>
// design: constexpr only (no runtime address), no callgraph/git history reference
constexpr GameAllocator<T>::GameAllocator(const GameAllocator<U>&) noexcept {}

template <typename T>
// design: constexpr only (no runtime address), no callgraph/git history reference
constexpr bool GameAllocator<T>::operator==(const GameAllocator&) const noexcept
{
    return true;
}

template <typename T>
// design: constexpr only (no runtime address), no callgraph/git history reference
constexpr bool GameAllocator<T>::operator!=(const GameAllocator&) const noexcept
{
    return false;
}

template <typename T>
// unmatched: no callgraph reference and no git history record
T* GameAllocator<T>::allocate(std::size_t count)
{
    void* p = std::malloc(count * sizeof(T));
    if (!p) throw std::bad_alloc();
    return static_cast<T*>(p);
}

template <typename T>
// unmatched: no callgraph reference and no git history record
void GameAllocator<T>::deallocate(T* ptr, std::size_t count)
{
    (void)count;
    std::free(ptr);
}

// --- Memory static templates --------------------------------------------------

template <typename T, typename TAlloc, typename... TArgs>
T* Memory::Create(TAlloc& alloc, TArgs&&... args)
{
    auto ptr = std::allocator_traits<TAlloc>::allocate(alloc, 1);
    std::allocator_traits<TAlloc>::construct(alloc, ptr, std::forward<TArgs>(args)...);
    return ptr;
}

template <typename T, typename TAlloc>
void Memory::Delete(TAlloc& alloc, T* ptr) // 0x65d190
{
    if (ptr)
    {
        std::allocator_traits<TAlloc>::destroy(alloc, ptr);
        std::allocator_traits<TAlloc>::deallocate(alloc, ptr, 1);
    }
}

template <typename T, typename TAlloc, typename... TArgs>
T* Memory::CreateArray(TAlloc& alloc, std::size_t capacity, TArgs&&... args)
{
    auto ptr = std::allocator_traits<TAlloc>::allocate(alloc, capacity);
    if (capacity && !sizeof...(args) && std::is_scalar<T>::value)
    {
        std::memset(ptr, 0, capacity * sizeof(T));
    }
    else
    {
        for (std::size_t i = 0; i < capacity; ++i)
        {
            std::allocator_traits<TAlloc>::construct(alloc, &ptr[i], args...);
        }
    }
    return ptr;
}

template <typename T, typename TAlloc>
// unmatched: no callgraph reference and no git history record
void Memory::DeleteArray(TAlloc& alloc, T* ptr, std::size_t capacity)
{
    if (ptr)
    {
        if (capacity && !std::is_trivially_destructible<T>::value)
        {
            for (std::size_t i = 0; i < capacity; ++i)
            {
                std::allocator_traits<TAlloc>::destroy(alloc, &ptr[i]);
            }
        }
        std::allocator_traits<TAlloc>::deallocate(alloc, ptr, capacity);
    }
}

// --- Free function templates --------------------------------------------------

template <typename T, typename... TArgs>
// unmatched: no callgraph reference and no git history record
T* GameCreate(TArgs&&... args)
{
    static_assert(std::is_constructible<T, TArgs...>::value, "Cannot construct T from TArgs.");
    GameAllocator<T> alloc;
    return Memory::Create<T>(alloc, std::forward<TArgs>(args)...);
}

template <typename T>
void GameDelete(T* ptr)
{
    GameAllocator<T> alloc;
    Memory::Delete(alloc, ptr);
}

template <typename T, typename... TArgs>
// unmatched: no callgraph reference and no git history record
T* GameCreateArray(std::size_t capacity, TArgs&&... args)
{
    static_assert(std::is_constructible<T, TArgs...>::value, "Cannot construct T from TArgs.");
    GameAllocator<T> alloc;
    return Memory::CreateArray<T>(alloc, capacity, std::forward<TArgs>(args)...);
}

template <typename T>
// unmatched: no callgraph reference and no git history record
void GameDeleteArray(T* ptr, std::size_t capacity)
{
    GameAllocator<T> alloc;
    Memory::DeleteArray(alloc, ptr, capacity);
}

// --- GameDeleter --------------------------------------------------------------

template <typename T>
// unmatched: no callgraph reference and no git history record
void GameDeleter::operator()(T* ptr) const noexcept
{
    if (ptr)
    {
        GameDelete(ptr);
    }
}
