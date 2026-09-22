// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AE7C0_e4.hpp"
#include "e4/classes/E4Recv_7AE8E0_e4.hpp"

// 0x798340
namespace gamemd {
int sub_798340()
{
{
  HANDLE *v0; // esi
  BOOL result; // eax

  v0 = &Handles; /*0x798348*/
  do /*0x79835b*/
    result = ResetEvent(*v0++); /*0x798350*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79835b*/
  return result; /*0x79835d*/
}
} // namespace gamemd

// 0x72C060
namespace gamemd {
char sub_72C060()
{
{
    char result;
    result = DataGlobal_B0FD2D;
    if ( !DataGlobal_B0FD2D )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA4C = LoadFileSHP(DataGlobal_844DA4, (bool *)&DataGlobal_B0FD2C);
    result = LoadPaletteSimple(DataGlobal_844DA8, &DataGlobal_B0FD30, &DataGlobal_B0FD34);
    DataGlobal_B0FD2D = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72C0B0
namespace gamemd {
void sub_72C0B0()
{
{
    void *v0;
    if ( DataGlobal_B0FD2D )
  {
    if ( DataGlobal_B0FD2C )
    {
    v0 = DataGlobal_B0FA4C;
    if ( DataGlobal_B0FA4C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA4C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD2C = 0;
    }
    DataGlobal_B0FA4C = 0;
    if ( DataGlobal_B0FD30 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD30);
    DataGlobal_B0FD30 = 0;
    }
    if ( DataGlobal_B0FD34 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD34)(DataGlobal_B0FD34, 1);
    DataGlobal_B0FD34 = 0;
    }
  }
    DataGlobal_B0FD2D = 0;
}
}
} // namespace gamemd
