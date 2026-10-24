void __thiscall JumpjetLocomotionClass::ProcessRotation(JumpjetLocomotionClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  _DWORD *LinkedTo; // ecx
  CellClass *v6; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( this->__pad_50[3] && *(int *)(this->LinkedTo + 108) > 0 )
  {
    if ( (*(unsigned __int8 (__stdcall **)(char *))(*(_DWORD *)this->__pad_4 + 96))(this->__pad_4) )
    {
      LinkedTo = (_DWORD *)this->LinkedTo;
      this->__pad_50[3] = 0;
      LinkedTo += 39;
      v9[0] = *LinkedTo;
      v9[1] = LinkedTo[1];
      v9[2] = LinkedTo[2];
      v6 = Coord::To_Cell((Coord *)&dword_87F7E8, v9);
      BuildingClass::CreateIdleAnim((BuildingClass *)v6);
    }
    else
    {
      LOWORD(v7) = *ProgressTimer::GetValue((ProgressTimer *)(this->LinkedTo + 904), &v8)
                 + ((unsigned __int16)*(_DWORD *)&this->__pad_50[4] << 8);
      FacingClass::Set_SyncLog((char *)(this->LinkedTo + 904), &v7);
      v2 = *(_DWORD *)&this->__pad_50[4];
      v3 = abs32(v2);
      if ( v3 >= 1 )
        v3 = 1;
      if ( v2 >= 0 )
        v4 = v2 - v3;
      else
        v4 = v3 + v2;
      *(_DWORD *)&this->__pad_50[4] = v4;
    }
  }
}
