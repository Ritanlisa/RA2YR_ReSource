// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72BE80
namespace gamemd {
char sub_72BE80()
{
{
    char result;
    result = DataGlobal_B0FD39;
    if ( !DataGlobal_B0FD39 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA9C = LoadFileSHP(DataGlobal_844DAC, (bool *)&DataGlobal_B0FD38);
    result = LoadPaletteSimple(DataGlobal_844DB0, &DataGlobal_B0FD3C, &DataGlobal_B0FD40);
    DataGlobal_B0FD39 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72BED0
namespace gamemd {
void sub_72BED0()
{
{
    void *v0;
    if ( DataGlobal_B0FD39 )
  {
    if ( DataGlobal_B0FD38 )
    {
    v0 = DataGlobal_B0FA9C;
    if ( DataGlobal_B0FA9C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA9C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD38 = 0;
    }
    DataGlobal_B0FA9C = 0;
    if ( DataGlobal_B0FD3C )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD3C);
    DataGlobal_B0FD3C = 0;
    }
    if ( DataGlobal_B0FD40 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD40)(DataGlobal_B0FD40, 1);
    DataGlobal_B0FD40 = 0;
    }
  }
    DataGlobal_B0FD39 = 0;
}
}
} // namespace gamemd
