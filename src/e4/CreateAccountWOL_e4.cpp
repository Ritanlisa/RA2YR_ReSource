// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72C240
namespace gamemd {
char sub_72C240()
{
{
    char result;
    result = DataGlobal_B0FD21;
    if ( !DataGlobal_B0FD21 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA30 = LoadFileSHP(DataGlobal_844D9C, (bool *)&DataGlobal_B0FD20);
    result = LoadPaletteSimple(DataGlobal_844DA0, &DataGlobal_B0FD24, &DataGlobal_B0FD28);
    DataGlobal_B0FD21 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72C290
namespace gamemd {
void sub_72C290()
{
{
    void *v0;
    if ( DataGlobal_B0FD21 )
  {
    if ( DataGlobal_B0FD20 )
    {
    v0 = DataGlobal_B0FA30;
    if ( DataGlobal_B0FA30 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA30);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD20 = 0;
    }
    DataGlobal_B0FA30 = 0;
    if ( DataGlobal_B0FD24 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD24);
    DataGlobal_B0FD24 = 0;
    }
    if ( DataGlobal_B0FD28 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD28)(DataGlobal_B0FD28, 1);
    DataGlobal_B0FD28 = 0;
    }
  }
    DataGlobal_B0FD21 = 0;
}
}
} // namespace gamemd

// 0x72C420
namespace gamemd {
char sub_72C420()
{
{
    char result;
    result = DataGlobal_B0FD15;
    if ( !DataGlobal_B0FD15 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA64 = LoadFileSHP(DataGlobal_844D94, (bool *)&DataGlobal_B0FD14);
    result = LoadPaletteSimple(DataGlobal_844D98, &DataGlobal_B0FD18, &DataGlobal_B0FD1C);
    DataGlobal_B0FD15 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72C470
namespace gamemd {
void sub_72C470()
{
{
    void *v0;
    if ( DataGlobal_B0FD15 )
  {
    if ( DataGlobal_B0FD14 )
    {
    v0 = DataGlobal_B0FA64;
    if ( DataGlobal_B0FA64 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA64);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD14 = 0;
    }
    DataGlobal_B0FA64 = 0;
    if ( DataGlobal_B0FD18 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD18);
    DataGlobal_B0FD18 = 0;
    }
    if ( DataGlobal_B0FD1C )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD1C)(DataGlobal_B0FD1C, 1);
    DataGlobal_B0FD1C = 0;
    }
  }
    DataGlobal_B0FD15 = 0;
}
}
} // namespace gamemd
