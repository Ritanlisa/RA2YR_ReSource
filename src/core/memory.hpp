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

    // design: default constructor (compiler-generated), no callgraph reference
    constexpr GameAllocator() noexcept = default;

    template <typename U>
    // design: constexpr only (no runtime address), no callgraph/git history reference
    constexpr GameAllocator(const GameAllocator<U>&) noexcept;

    // design: constexpr only (no runtime address), no callgraph/git history reference
    constexpr bool operator==(const GameAllocator&) const noexcept;
    // design: constexpr only (no runtime address), no callgraph/git history reference
    constexpr bool operator!=(const GameAllocator&) const noexcept;

    // unmatched: no callgraph reference and no git history record
    T* allocate(std::size_t count);
    // unmatched: no callgraph reference and no git history record
    void deallocate(T* ptr, std::size_t count);
};

template <typename T>
struct needs_vector_delete : std::integral_constant<bool,
    !std::is_scalar<T>::value && !std::is_trivially_destructible<T>::value> {};

class Memory
{
public:
    template <typename T, typename TAlloc, typename... TArgs>
    static T* Create(TAlloc& alloc, TArgs&&... args);

    template <typename T, typename TAlloc>
    static void Delete(TAlloc& alloc, T* ptr); // 0x65d190

    template <typename T, typename TAlloc, typename... TArgs>
    static T* CreateArray(TAlloc& alloc, std::size_t capacity, TArgs&&... args);

    template <typename T, typename TAlloc>
    // unmatched: no callgraph reference and no git history record
    static void DeleteArray(TAlloc& alloc, T* ptr, std::size_t capacity);
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int FreeConditional(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x5c0e90
    int FreeConditional2(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5c0fa0
    int Alloc76();  // 0x731ce0
    // === FUNCS-MOVE (END) ===
};

template <typename T, typename... TArgs>
// unmatched: no callgraph reference and no git history record
T* GameCreate(TArgs&&... args);

template <typename T>
void GameDelete(T* ptr);

template <typename T, typename... TArgs>
// unmatched: no callgraph reference and no git history record
T* GameCreateArray(std::size_t capacity, TArgs&&... args);

template <typename T>
// unmatched: no callgraph reference and no git history record
void GameDeleteArray(T* ptr, std::size_t capacity);

struct GameDeleter
{
    template <typename T>
    // unmatched: no callgraph reference and no git history record
    void operator()(T* ptr) const noexcept;
};

#include "memory.inl"

} // namespace gamemd
