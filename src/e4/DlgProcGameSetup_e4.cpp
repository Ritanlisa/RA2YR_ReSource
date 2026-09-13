// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72B8E0
namespace gamemd {
char sub_72B8E0()
{
{
    char result;
    result = DataGlobal_B0FD5D;
    if ( !DataGlobal_B0FD5D )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FB54 = LoadFileSHP(DataGlobal_844DC4, (bool *)&DataGlobal_B0FD5C);
    result = LoadPaletteSimple(DataGlobal_844DC8, &DataGlobal_B0FD60, &DataGlobal_B0FD64);
    DataGlobal_B0FD5D = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72B930
namespace gamemd {
void sub_72B930()
{
{
    void *v0;
    if ( DataGlobal_B0FD5D )
  {
    if ( DataGlobal_B0FD5C )
    {
    v0 = DataGlobal_B0FB54;
    if ( DataGlobal_B0FB54 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB54);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD5C = 0;
    }
    DataGlobal_B0FB54 = 0;
    if ( DataGlobal_B0FD60 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD60);
    DataGlobal_B0FD60 = 0;
    }
    if ( DataGlobal_B0FD64 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD64)(DataGlobal_B0FD64, 1);
    DataGlobal_B0FD64 = 0;
    }
  }
    DataGlobal_B0FD5D = 0;
}
}
} // namespace gamemd
