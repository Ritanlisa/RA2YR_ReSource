// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72DC20
namespace gamemd {
void sub_72DC20()
{
{
    void *v0;
    void *v1;
    void *v2;
    void *v3;
    if ( DataGlobal_B0FCC8 )
  {
    v0 = DataGlobal_B0FB48;
    if ( DataGlobal_B0FB48 )
    {
    FileTreeNode::Destroy(DataGlobal_B0FB48);
    __3_YAXPAX_Z(v0);
    }
    DataGlobal_B0FCC8 = 0;
  }
    DataGlobal_B0FB48 = 0;
    if ( DataGlobal_B0FCCA )
  {
    v1 = DataGlobal_B0FB10;
    if ( DataGlobal_B0FB10 )
    {
    FileTreeNode::Destroy(DataGlobal_B0FB10);
    __3_YAXPAX_Z(v1);
    }
    DataGlobal_B0FCCA = 0;
  }
    DataGlobal_B0FB10 = 0;
    if ( DataGlobal_B0FCCB )
  {
    v2 = DataGlobal_B0F9F8;
    if ( DataGlobal_B0F9F8 )
    {
    FileTreeNode::Destroy(DataGlobal_B0F9F8);
    __3_YAXPAX_Z(v2);
    }
    DataGlobal_B0FCCB = 0;
  }
    DataGlobal_B0F9F8 = 0;
    if ( DataGlobal_B0FCCC )
  {
    v3 = DataGlobal_B0FA6C;
    if ( DataGlobal_B0FA6C )
    {
    FileTreeNode::Destroy(DataGlobal_B0FA6C);
    __3_YAXPAX_Z(v3);
    }
    DataGlobal_B0FCCC = 0;
  }
    DataGlobal_B0FA6C = 0;
}
}
} // namespace gamemd
