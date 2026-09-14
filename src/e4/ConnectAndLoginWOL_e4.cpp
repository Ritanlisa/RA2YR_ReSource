// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_77D1F0_e4.hpp"
#include "e4/classes/E4Recv_7ACBE0_e4.hpp"
#include "e4/classes/E4Recv_7AE180_e4.hpp"

// 0x77D1F0
namespace gamemd {
void E4Recv_77D1F0::ConnectAndLoginWOL_Connect()
{
{
    this->vfptr = &vt_SimpleWonlineDialogControl;
    OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this);
}
}
} // namespace gamemd

// 0x7ACBE0
namespace gamemd {
char E4Recv_7ACBE0::ConnectAndLoginWOL_Connect_7ACBE0(const char ** a1, TechnoTypeClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ConnectAndLoginWOL_Connect_7ACBE0(void *this, const char **a1, TechnoTypeClass *aP2)
{
  ObjectClass *v4; // eax
  ObjectClass *v5; // esi
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  CCINIClass *v9; // esi
  int v10; // eax
  int v11; // ecx
  void *v12; // edi
  unsigned int v13; // edx
  CCINIClass *v14; // edi
  int v15; // esi
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  CCINIClass *v20; // [esp+18h] [ebp+4h]
  CCINIClass *Block; // [esp+1Ch] [ebp+8h]

  v4 = (ObjectClass *)__2_YAPAXI_Z(0xCu); /*0x7acbea*/
  v5 = v4; /*0x7acbef*/
  if ( v4 ) /*0x7acbf6*/
    unknown_libname_73(v4); /*0x7acbfa*/
  else
    v5 = 0; /*0x7acc01*/
  String::Reassign((char **)v5, (AbstractClass *)a1); /*0x7acc0a*/
  v6 = *(_DWORD *)aP2->vtable0; /*0x7acc13*/
  *(_DWORD *)&v5->__pad_0[8] = 0; /*0x7acc15*/
  *(_DWORD *)&v5->__pad_0[4] = v6; /*0x7acc1c*/
  v7 = (*((int (__thiscall **)(const char **))this + 6))(a1) & ((1 << this->M12) - 1); /*0x7acc2f*/
  v8 = *(_DWORD *)(*(_DWORD *)this + 4 * v7); /*0x7acc33*/
  *(_DWORD *)(*(_DWORD *)this + 4 * v7) = v5; /*0x7acc3b*/
  if ( v8 ) /*0x7acc3d*/
    *(_DWORD *)&v5->__pad_0[8] = v8; /*0x7acc3f*/
  v9 = (CCINIClass *)this->M8; /*0x7acc45*/
  v10 = this->M4 + 1; /*0x7acc48*/
  this->M4 = v10; /*0x7acc55*/
  if ( (double)(unsigned int)v10 / (double)(int)v9 >= *((double *)this + 5) && (unsigned char)this->M20 != 1 ) /*0x7acc7e*/
  {
    Block = *(CCINIClass **)this; /*0x7acc89*/
    v11 = this->M12 + 1; /*0x7acc97*/
    this->M8 = 2 * (_DWORD)v9; /*0x7acc99*/
    this->M12 = v11; /*0x7acc9c*/
    v12 = (void *)__2_YAPAXI_Z(8 * (_DWORD)v9); /*0x7acca7*/
    v13 = 4 * this->M8; /*0x7accac*/
    *(_DWORD *)this = v12; /*0x7accb3*/
    memset(v12, 0, v13); /*0x7accb8*/
    if ( (int)v9 > 0 ) /*0x7accc3*/
    {
      v14 = Block; /*0x7accc5*/
      v20 = v9; /*0x7accc9*/
      do /*0x7acd07*/
      {
        v15 = *(_DWORD *)v14->__pad_0; /*0x7acccd*/
        if ( *(_DWORD *)v14->__pad_0 ) /*0x7acccd*/
        {
          do /*0x7accf9*/
          {
            v16 = (*((int (__thiscall **)(int))this + 6))(v15) & ((1 << this->M12) - 1); /*0x7acce3*/
            v17 = *(_DWORD *)(*(_DWORD *)this + 4 * v16); /*0x7acce7*/
            *(_DWORD *)(*(_DWORD *)this + 4 * v16) = v15; /*0x7acced*/
            v18 = *(_DWORD *)(v15 + 8); /*0x7accef*/
            *(_DWORD *)(v15 + 8) = v17; /*0x7accf2*/
            v15 = v18; /*0x7accf5*/
          }
          while ( v18 ); /*0x7accf9*/
        }
        v14 = (CCINIClass *)((char *)v14 + 4); /*0x7accff*/
        v20 = (CCINIClass *)((char *)v20 - 1); /*0x7acd03*/
      }
      while ( v20 ); /*0x7acd07*/
    }
    __3_YAXPAX_Z(Block); /*0x7acd0e*/
  }
  return 1; /*0x7acd16*/
}
}
} // namespace gamemd

// 0x7AE180
namespace gamemd {
bool E4Recv_7AE180::sub_7AE180(const char ** a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_7AE180(_DWORD *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !*(this + 1) ) /*0x7ae184*/
    return 0; /*0x7ae18c*/
  v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(const char **))*(this + 6))(a2) & ((1 << *(this + 3)) - 1))); /*0x7ae1aa*/
  if ( !v4 ) /*0x7ae1af*/
    return 0; /*0x7ae1b2*/
  while ( 1 ) /*0x7ae1bb*/
  {
    result = String::Compare((const char **)v4, a2); /*0x7ae1bb*/
    if ( result ) /*0x7ae1c2*/
      break; /*0x7ae1c2*/
    v4 = *(_DWORD *)(v4 + 8); /*0x7ae1c4*/
    if ( !v4 ) /*0x7ae1c9*/
      return result; /*0x7ae1c9*/
  }
  *a3 = v4 + 4; /*0x7ae1e5*/
  return 1; /*0x7ae18b*/
}
}
} // namespace gamemd
