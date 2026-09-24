// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x4A7A30
D DiskLaserClass::DiskLaserClass()
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4a7a33*/
  *(_DWORD *)this = &DiskLaserClass::`vftable'; /*0x4a7a3a*/
  *(_DWORD *)(this + 4) = &DiskLaserClass::`vftable'; /*0x4a7a40*/
  *(_DWORD *)(this + 8) = &DiskLaserClass::`vftable'; /*0x4a7a47*/
  *(_DWORD *)(this + 12) = &DiskLaserClass::`vftable'; /*0x4a7a4e*/
  *(_DWORD *)(this + 36) = 0; /*0x4a7a55*/
  *(_DWORD *)(this + 40) = 0; /*0x4a7a58*/
  *(_DWORD *)(this + 44) = 0; /*0x4a7a5b*/
  *(_DWORD *)(this + 48) = 0; /*0x4a7a5e*/
  *(_DWORD *)(this + 52) = 0; /*0x4a7a61*/
  *(_DWORD *)(this + 56) = 0; /*0x4a7a64*/
  *(_DWORD *)(this + 60) = 0; /*0x4a7a67*/
  if ( dword_8A0218 < dword_8A0210 /*0x4a7a9e*/
    || (byte_8A0215 || !dword_8A0210)
    && dword_8A021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8A0208 + 8))(
         &dword_8A0208,
         dword_8A0210 + dword_8A021C,
         0) )
  {
    v2 = dword_8A0218++; /*0x4a7aab*/
    *((_DWORD *)dword_8A020C + v2) = this; /*0x4a7aba*/
  }
  return this; /*0x4a7abf*/
}
// 0x4A7C90
void * DiskLaserClass::CopyTo(char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *this = &DiskLaserClass::`vftable'; /*0x4a7c9d*/
  *(this + 1) = &DiskLaserClass::`vftable'; /*0x4a7ca3*/
  *(this + 2) = &DiskLaserClass::`vftable'; /*0x4a7caa*/
  *(this + 3) = &DiskLaserClass::`vftable'; /*0x4a7cb1*/
  v5 = this; /*0x4a7cbf*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_8A0208 + 16))(&dword_8A0208, &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < dword_8A0218 && v3 < --dword_8A0218 ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((_DWORD *)dword_8A020C + v3 - 1) = *((_DWORD *)dword_8A020C + v3); /*0x4a7cea*/
    }
    while ( v3 < dword_8A0218 ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR(this); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    __3_YAXPAX_Z(this); /*0x4a7d07*/
  return this; /*0x4a7d11*/
}
// 0x4A7B90
int DiskLaserClass::Write(AbstractClass * aP0, int aP1)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x4a7ba1*/
  if ( Prefix_0 >= 0 ) /*0x4a7ba5*/
  {
    if ( aP0 ) /*0x4a7ba9*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x4a7bb2*/
      *aP0 = (int)&DiskLaserClass::`vftable'; /*0x4a7bb7*/
      aP0[1] = (int)&DiskLaserClass::`vftable'; /*0x4a7bbd*/
      aP0[2] = (int)&DiskLaserClass::`vftable'; /*0x4a7bc4*/
      aP0[3] = (int)&DiskLaserClass::`vftable'; /*0x4a7bcb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x4a7bdb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 10); /*0x4a7be9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 11); /*0x4a7bf7*/
  }
  return Prefix_0; /*0x4a7bfe*/
}
// 0x4A7C10
int DiskLaserClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x4a7c24*/
}
// 0x4A7C30
int DiskLaserClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4a7c36*/
    return -2147467261; /*0x4a7c38*/
  *a2 = 1378929064; /*0x4a7c46*/
  a2[1] = 1206682730; /*0x4a7c4e*/
  a2[2] = -1786862915; /*0x4a7c57*/
  a2[3] = 1226661444; /*0x4a7c60*/
  return 0; /*0x4a7c3d*/
}
// 0x4A7C70
int DiskLaserClass::StubReturn64()
{
  return 64; /*0x4a7c75*/
}
// 0x4A7C80
int DiskLaserClass::StubReturn73()
{
  return 73; /*0x4a7c85*/
}