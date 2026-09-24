// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72DC20
namespace gamemd {
void sub_72DC20()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi

  if ( byte_B0FCC8 ) /*0x72dc2b*/
  {
    v0 = dword_B0FB48; /*0x72dc2d*/
    if ( dword_B0FB48 ) /*0x72dc35*/
    {
      FileTreeNode::Destroy(dword_B0FB48); /*0x72dc39*/
      __3_YAXPAX_Z(v0); /*0x72dc3f*/
    }
    byte_B0FCC8 = 0; /*0x72dc47*/
  }
  dword_B0FB48 = 0; /*0x72dc52*/
  if ( byte_B0FCCA ) /*0x72dc5a*/
  {
    v1 = dword_B0FB10; /*0x72dc5c*/
    if ( dword_B0FB10 ) /*0x72dc64*/
    {
      FileTreeNode::Destroy(dword_B0FB10); /*0x72dc68*/
      __3_YAXPAX_Z(v1); /*0x72dc6e*/
    }
    byte_B0FCCA = 0; /*0x72dc76*/
  }
  dword_B0FB10 = 0; /*0x72dc81*/
  if ( byte_B0FCCB ) /*0x72dc89*/
  {
    v2 = dword_B0F9F8; /*0x72dc8b*/
    if ( dword_B0F9F8 ) /*0x72dc93*/
    {
      FileTreeNode::Destroy(dword_B0F9F8); /*0x72dc97*/
      __3_YAXPAX_Z(v2); /*0x72dc9d*/
    }
    byte_B0FCCB = 0; /*0x72dca5*/
  }
  dword_B0F9F8 = 0; /*0x72dcb0*/
  if ( byte_B0FCCC ) /*0x72dcb8*/
  {
    v3 = dword_B0FA6C; /*0x72dcba*/
    if ( dword_B0FA6C ) /*0x72dcc2*/
    {
      FileTreeNode::Destroy(dword_B0FA6C); /*0x72dcc6*/
      __3_YAXPAX_Z(v3); /*0x72dccc*/
    }
    byte_B0FCCC = 0; /*0x72dcd4*/
  }
  dword_B0FA6C = 0; /*0x72dcda*/
}
} // namespace gamemd
