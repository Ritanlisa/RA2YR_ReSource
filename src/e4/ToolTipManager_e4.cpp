// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ToolTipManager_7_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x724AA0
char ToolTipManager::addRef(int a1)
{
{
    return 1;
}
}

// 0x724B80
int ToolTipManager::ddtor(char a2)
{
{
    int result;
    if ( a2 == 1 )
    ToolTipClass::initString((wchar_t *)this);
    result = this->Position;
    if ( result )
    return this->read(this + 24);
    return result;
}
}

// 0x724BB0
void ToolTipManager::read(int a1)
{
{
    Debug::Log();
}
}

// 0x724BD0
int ToolTipManager::stubReturnFalse(int a1)
{
return 0;
}

// 0x724F40
namespace gamemd {
DynamicVector * ToolTipManager_7::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_ToolTip_const;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd
