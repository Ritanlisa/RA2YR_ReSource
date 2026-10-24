char __thiscall TActionClass::executeEscortAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  AnimClass *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, this->TActionClass_field_44);
  GroundHeight = 0;
  v10[1] = (v8[1] << 8) + 128;
  v10[0] = (v8[0] << 8) + 128;
  GroundHeight = Cell::GetGroundHeight(v10);
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v8) + 80) & 0x100) != 0
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4;
  }
  v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
  if ( v6 )
    *((_BYTE *)AnimClass::ctor(
                 v6,
                 *((void **)dword_8B4154 + *(_DWORD *)&this->pad_6E[34]),
                 v10,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1;
  return 1;
}
