#pragma once

#include <memory>
#include <type_traits>
#include <new>
#include <cstring>
#include <cstdlib>

namespace gamemd
{

template <typename T>
struct GameAllocator
{
    using value_type = T;

    constexpr GameAllocator() noexcept = default;

    template <typename U>
    constexpr GameAllocator(const GameAllocator<U>&) noexcept {}

    constexpr bool operator==(const GameAllocator&) const noexcept { return true; }
    constexpr bool operator!=(const GameAllocator&) const noexcept { return false; }

    T* allocate(std::size_t count)
    {
        void* p = std::malloc(count * sizeof(T));
        if (!p) throw std::bad_alloc();
        return static_cast<T*>(p);
    }
    void deallocate(T* ptr, std::size_t count)
    {
        (void)count;
        std::free(ptr);
    }
};

template <typename T>
struct needs_vector_delete : std::integral_constant<bool,
    !std::is_scalar<T>::value && !std::is_trivially_destructible<T>::value> {};

class Memory
{
public:
    template <typename T, typename TAlloc, typename... TArgs>
    static T* Create(TAlloc& alloc, TArgs&&... args)
    {
        auto ptr = std::allocator_traits<TAlloc>::allocate(alloc, 1);
        std::allocator_traits<TAlloc>::construct(alloc, ptr, std::forward<TArgs>(args)...);
        return ptr;
    }

    template <typename T, typename TAlloc>
    static void Delete(TAlloc& alloc, T* ptr)
    {
        if (ptr)
        {
            std::allocator_traits<TAlloc>::destroy(alloc, ptr);
            std::allocator_traits<TAlloc>::deallocate(alloc, ptr, 1);
        }
    }

    template <typename T, typename TAlloc, typename... TArgs>
    static T* CreateArray(TAlloc& alloc, std::size_t capacity, TArgs&&... args)
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
    static void DeleteArray(TAlloc& alloc, T* ptr, std::size_t capacity)
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
};

template <typename T, typename... TArgs>
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
T* GameCreateArray(std::size_t capacity, TArgs&&... args)
{
    static_assert(std::is_constructible<T, TArgs...>::value, "Cannot construct T from TArgs.");
    GameAllocator<T> alloc;
    return Memory::CreateArray<T>(alloc, capacity, std::forward<TArgs>(args)...);
}

template <typename T>
void GameDeleteArray(T* ptr, std::size_t capacity)
{
    GameAllocator<T> alloc;
    Memory::DeleteArray(alloc, ptr, capacity);
}

struct GameDeleter
{
    template <typename T>
    void operator()(T* ptr) const noexcept
    {
        if (ptr)
        {
            GameDelete(ptr);
        }
    }
};

} // namespace gamemd
