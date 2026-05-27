#include "gamemd/render/fog.hpp"

#include <cstring>

namespace gamemd
{

extern void* FoggedObjectClass_vftable[1];

FoggedObjectClass::FoggedObjectClass() noexcept
    : LastSight(0)
    , House(nullptr)
    , Cell{}
{
    const auto vtbl = const_cast<void**>(reinterpret_cast<void* const*>(FoggedObjectClass_vftable));
    reinterpret_cast<void**>(this)[0] = vtbl;
    reinterpret_cast<void**>(this)[1] = vtbl;
    reinterpret_cast<void**>(this)[2] = vtbl;
    reinterpret_cast<void**>(this)[3] = vtbl;
}

// TODO: complete FoggedObjectClass implementation

} // namespace gamemd
