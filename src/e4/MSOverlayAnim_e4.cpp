// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CEB50
void MSOverlayAnim::StubReturnFalse(int a1)
{
{
    ;
}
}

// 0x5CEB80
MSShapeAnim * MSOverlayAnim::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->u32_1C;
    *(void**)this = &vt_MSShapeAnim;
    if ( v3 && this->q03C )
  {
    __3_YAXPAX_Z(v3);
    this->u32_1C = 0;
    this->q03C = 0;
  }
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSShapeAnim *)this;
}
}
