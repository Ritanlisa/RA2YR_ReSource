#include "tooltipmanager.hpp"

char __stdcall ToolTipManager::_vt01(int a1)
{
    return 1;
}

int  ToolTipManager::_vt02(uint32_t *this, int a2)
{
    *(this + 6) = 0;
    *(this + 7) = 0;
    *(this + 8) = 0;
    *(this + 9) = 0;
    *(this + 1) = 0;
    return 0;
}

// 0x00724B80
void  ToolTipManager::ddtor(ToolTipManager *this)
{
    char v2; // [esp+8h] [ebp+4h]
    if ( v2 == 1 )
    ToolTipClass::initString((wchar_t *)this);
    if ( *(uint32_t *)&this->isVisible )
    (*((void (__thiscall **)(ToolTipManager *, char *))this->vtable + 4))(this, (char *)&this->duration + 2);
}

void __stdcall ToolTipManager::_vt04(int a1)
{
    Debug::Log();
}

int __stdcall ToolTipManager::_vt05(int a1)
{
    return 0;
}

