// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AF540_e4.hpp"

// 0x7AF540
namespace gamemd {
int E4Recv_7AF540::sub_7AF540(HWND hWnd, int * a3)
{
{
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    result = this->Vf8();
    if ( !(char)result )
  {
    v5 = 0;
    this->M28 = this->M16;
    result = *a3;
    if ( *a3 >= 16 && result < 364 && (v6 = *((int*)(a3) + 1), v6 >= 20) && v6 < 136 || result >= 130 && result < 300 && (v7 = *((int*)(a3) + 1), v7 >= 100) && v7 < 216 || result >= 175 && result < 245 && (v8 = *((int*)(a3) + 1), v8 >= 216) && v8 < 262 )
    {
    result = this->M20;
    v5 = 2;
    this->M28 = result;
    }
    else if ( result >= 252 && result < 466 && (v9 = *((int*)(a3) + 1), v9 >= 180) && v9 < 382 || result >= 212 && result < 496 && (v10 = *((int*)(a3) + 1), v10 >= 262) && v10 < 422 )
    {
    v5 = 3;
    this->M28 = this->M24;
    }
    if ( this->M12 != v5 )
    {
    this->M12 = v5;
    return InvalidateRect(hWnd, 0, 0);
    }
  }
    return result;
}
}
} // namespace gamemd
