// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4134A0
int GadgetGrid::InsertItem(ObjectClass * aP1)
{
{
    ObjectClass **v4;
    ObjectClass *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int result;
    int *v12;
    int v13;
    int v14;
    char v15[4];
    ObjectClass *aP1a;
    v4 = (ObjectClass **)(*(int (__thiscall **)(ObjectClass *, char *))(*(int *)aP1->__pad_0 + 440))(aP1, v15);
    v5 = *v4;
    aP1a = *v4;
    (*(void (__thiscall **)(ObjectClass *, ObjectClass *))(*(int *)aP1->__pad_0 + 760))(aP1, *v4);
    if ( (short)v5 >= 0 )
    v5 = (ObjectClass *)(short)v5;
    else
    v5 = 0;
    if ( SHIWORD(aP1a) >= 0 )
    v6 = SHIWORD(aP1a);
    else
    v6 = 0;
    v7 = (int)v5 / (*(int *)&DataGlobal_87F8E4.field_2D[3] / 20);
    v8 = 19;
    if ( v7 <= 19 )
    v8 = v7;
    v9 = v6 / (*(int *)&DataGlobal_87F8E4[52] / 20);
    if ( v9 > 19 )
    v9 = 19;
    v10 = 3 * (v8 + 20 * v9);
    result = *(this + 120 * v9 + 6 * v8 + 2);
    v12 = this + 2 * v10;
    if ( v12[4] < result || (*((char *)(v12) + 13) || !result) && (v13 = v12[5], v13 > 0) && (result = (*(int (__thiscall **)(int *, int, int))(*v12 + 8))(v12, result + v13, 0), (char)result) )
  {
    result = v12[4];
    v14 = v12[1];
    v12[4] = result + 1;
    *(int *)(v14 + 4 * result) = aP1;
  }
    return result;
}
}

// 0x4135D0
int GadgetGrid::RemoveItem(IUnknown * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int *v9;
    int result;
    int v11;
    int v12;
    short v13;
    char v14[4];
    v3 = *(int *)(*(int (__thiscall **)(IUnknown *, char *))(aP1->field_0 + 756))(aP1, v14);
    v13 = HIWORD(v3);
    (*(void (__thiscall **)(IUnknown *, int))(aP1->field_0 + 760))(aP1, *(int *)&DataGlobal_87F8E4[32620]);
    if ( (v3 & 0x8000u) == 0 )
    v3 = (short)v3;
    else
    v3 = 0;
    if ( v13 >= 0 )
    v4 = v13;
    else
    v4 = 0;
    v5 = v3 / (*(int *)&DataGlobal_87F8E4.field_2D[3] / 20);
    v6 = 19;
    if ( v5 <= 19 )
    v6 = v5;
    v7 = v4 / (*(int *)&DataGlobal_87F8E4[52] / 20);
    if ( v7 > 19 )
    v7 = 19;
    v8 = *(this + 120 * v7 + 6 * v6);
    v9 = this + 120 * v7 + 6 * v6;
    result = (*(int (__thiscall **)(int *, IUnknown **))(v8 + 16))(v9, &aP1);
    if ( result != -1 )
  {
    v11 = v9[4];
    if ( result < v11 )
    {
    v12 = v11 - 1;
    for ( v9[4] = v12; result < v9[4]; *(int *)(v9[1] + 4 * result - 4) = *(int *)(v9[1] + 4 * result) )
    ++result;
    }
  }
    return result;
}
}
