// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x411310
int StreamClass::WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6)
{
  return (*(int (__thiscall **)(_DWORD, char *, _DWORD))(**(this + 5) + 20))(*(this + 5), &a3, a2); /*0x411328*/
}
// 0x4114B0
unsigned int StreamClass::ReadAndSeek(MouseClass * aP1, MouseClass * aP2)
{
  int v4; // edi
  unsigned int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 20) + 92))(*(_DWORD *)(this + 20), aP1, aP2); /*0x4114c9*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 96))(*(_DWORD *)(this + 20)); /*0x4114cd*/
  result = v4 + *(_DWORD *)(this + 16); /*0x4114d6*/
  if ( result >= *(_DWORD *)(this + 28) ) /*0x4114da*/
    result -= *(_DWORD *)(this + 32); /*0x4114dc*/
  return result; /*0x4114df*/
}
// 0x45AEA0
int StreamClass::Set2(unsigned int * a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45aea8*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_818858, &a2); /*0x45aebd*/
    if ( v3 >= 0 ) /*0x45aec1*/
    {
      v5 = a2; /*0x45aedf*/
      if ( *this ) /*0x45aedc*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45aeea*/
      *this = v5; /*0x45aeed*/
      return v3; /*0x45aef0*/
    }
    else
    {
      if ( *this ) /*0x45aec3*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45aecc*/
      *this = 0; /*0x45aed1*/
      return v3; /*0x45aecf*/
    }
  }
  else
  {
    v6 = *this; /*0x45aef7*/
    if ( *this ) /*0x45aef7*/
    {
      *this = 0; /*0x45aefd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af06*/
    }
    return -2147467262; /*0x45af0e*/
  }
}
// 0x45AF20
int StreamClass::Set(IUnknown * aP1)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *aP1 ) /*0x45af28*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*aP1)(*aP1, &unk_819088, &aP1); /*0x45af3d*/
    if ( v3 >= 0 ) /*0x45af41*/
    {
      v5 = aP1; /*0x45af5f*/
      if ( *this ) /*0x45af5c*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45af6a*/
      *this = v5; /*0x45af6d*/
      return v3; /*0x45af70*/
    }
    else
    {
      if ( *this ) /*0x45af43*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45af4c*/
      *this = 0; /*0x45af51*/
      return v3; /*0x45af4f*/
    }
  }
  else
  {
    v6 = *this; /*0x45af77*/
    if ( *this ) /*0x45af77*/
    {
      *this = 0; /*0x45af7d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af86*/
    }
    return -2147467262; /*0x45af8e*/
  }
}
// 0x4B4C30
BOOL StreamClass::IsInactive(IUnknown * aP0)
{
  return *(_BYTE *)(aP0 + 17) == 0; /*0x4b4c3e*/
}
// 0x4B4C50
int StreamClass::Vt32Thunk(int a1)
{
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x4b4c5d*/
}
// 0x55A710
int StreamClass::ResetPosition(LocomotionClass * aP0, int a2)
{
  *(_DWORD *)(aP0 + 8) = a2; /*0x55a718*/
  *(_DWORD *)(aP0 + 4) = a2; /*0x55a71b*/
  return 0; /*0x55a720*/
}
// 0x55A8F0
int StreamClass::SetDirty(unsigned char * a1)
{
  a1[12] = 1; /*0x55a8f5*/
  return (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 96))(a1); /*0x55a8fe*/
}
// 0x55A910
int StreamClass::ClearDirty(unsigned char * a1)
{
  a1[12] = 0; /*0x55a915*/
  return (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 96))(a1); /*0x55a91e*/
}
// 0x55A930
char StreamClass::GetDirty(int a1)
{
  return *(_BYTE *)(a1 + 12); /*0x55a937*/
}