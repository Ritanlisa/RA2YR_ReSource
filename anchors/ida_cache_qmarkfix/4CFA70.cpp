char __thiscall LocomotionClass::CheckBridgeBlock(LocomotionClass *this)
{
  int v2; // eax
  _DWORD *LinkedTo; // edi
  Cell *v4; // eax
  _DWORD *v5; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->LinkedTo + 388))(this->LinkedTo) == 7
    || (LOBYTE(v2) = BuildingClass::GetType_Thunk((BuildingClass *)this->LinkedTo), !(_BYTE)v2) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this->LinkedTo + 44))(this->LinkedTo);
    if ( v2 == 2
      && (LinkedTo = (_DWORD *)this->LinkedTo, v2 = LinkedTo[433], *(_BYTE *)(v2 + 3597))
      && (v4 = (Cell *)(*(int (__thiscall **)(int))(*LinkedTo + 444))(this->LinkedTo),
          v5 = Cell::IsBridge(v4),
          LOBYTE(v2) = Array::Contains((Array *)this->LinkedTo, (int)v5),
          !(_BYTE)v2) )
    {
      LOBYTE(v2) = (*(char (__thiscall **)(_DWORD *, _DWORD, int))(*LinkedTo + 1156))(LinkedTo, 0, 1);
    }
    else
    {
      LOBYTE(this->u32_58) = 0;
      BYTE1(this->u32_58) = 1;
      BYTE2(this->u32_58) = 0;
      this->u32_38 = 0;
    }
  }
  return v2;
}
