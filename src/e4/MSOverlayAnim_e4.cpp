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
    v3 = (void *)*(this + 7);
    *(void**)this = &vt_MSShapeAnim;
    if ( v3 && *((char *)(this) + 60) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 7) = 0;
    *((char *)(this) + 60) = 0;
  }
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSShapeAnim *)this;
}
}
