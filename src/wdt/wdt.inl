// ============================================================================
// rc_ptr<T> — out-of-line template method implementations
// ============================================================================

template <typename T>
rc_ptr<T>::rc_ptr(T* ptr) noexcept
    // unmatched: no callgraph reference and no git history record
    : ptr(ptr)
{
    if (ptr) { ptr->AddRef(); }
}

template <typename T>
rc_ptr<T>::rc_ptr(const rc_ptr& other) noexcept
    // unmatched: no callgraph reference and no git history record
    : ptr(other.ptr)
{
    if (ptr) { ptr->AddRef(); }
}

template <typename T>
rc_ptr<T>::rc_ptr(rc_ptr&& other) noexcept
    // unmatched: no callgraph reference and no git history record
    : ptr(other.ptr)
{
    other.ptr = nullptr;
}

template <typename T>
rc_ptr<T>::~rc_ptr()
{
    if (ptr) { ptr->Release(); }
}

template <typename T>
// unmatched: no callgraph reference and no git history record
rc_ptr<T>& rc_ptr<T>::operator=(const rc_ptr& other) noexcept
{
    if (this != &other)
    {
        if (ptr) { ptr->Release(); }
        ptr = other.ptr;
        if (ptr) { ptr->AddRef(); }
    }
    return *this;
}

template <typename T>
// unmatched: no callgraph reference and no git history record
rc_ptr<T>& rc_ptr<T>::operator=(rc_ptr&& other) noexcept
{
    if (this != &other)
    {
        if (ptr) { ptr->Release(); }
        ptr = other.ptr;
        other.ptr = nullptr;
    }
    return *this;
}

template <typename T>
// unmatched: no callgraph reference and no git history record
T* rc_ptr<T>::get() const noexcept { return ptr; }

template <typename T>
// unmatched: no callgraph reference and no git history record
T* rc_ptr<T>::operator->() const noexcept { return ptr; }

template <typename T>
// unmatched: no callgraph reference and no git history record
T& rc_ptr<T>::operator*() const noexcept { return *ptr; }

template <typename T>
// unmatched: no callgraph reference and no git history record
rc_ptr<T>::operator bool() const noexcept { return ptr != nullptr; }

template <typename T>
void rc_ptr<T>::reset(T* ptr) noexcept
{
    if (ptr) { ptr->Release(); }
    ptr = ptr;
    if (ptr) { ptr->AddRef(); }
}

template <typename T>
// unmatched: no callgraph reference and no git history record
T* rc_ptr<T>::release() noexcept
{
    T* tmp = ptr;
    ptr = nullptr;
    return tmp;
}
