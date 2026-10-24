int __thiscall TActionClass::executeRepairAction(TActionClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  DisplayClass *i; // esi
  int DisplayClass_field_0x140; // eax

  result = a2;
  if ( a2 )
    *(_BYTE *)(*(&dword_A8022C->vfptr + *(_DWORD *)(a2 + 48)) + 577) = 0;
  if ( a2 != *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
  {
    if ( a2 )
      return result;
    goto LABEL_7;
  }
  if ( !a2 )
LABEL_7:
    Debug::Log();
  HouseClass::ResetObjectOrders(0, 0);
  v4 = *((_DWORD *)this + 61);
  *((_DWORD *)this + 67) = 1;
  *((_DWORD *)this + 68) = v4;
  *((_DWORD *)this + 69) = v4 - 1;
  *((_DWORD *)this + 70) = (v4 << 11) + *((_DWORD *)this + 79) + 4;
  for ( i = (DisplayClass *)LayerClass::CellIteratorNext((LayerClass *)this);
        i;
        i = (DisplayClass *)LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    DisplayClass::AdvanceFrameCounter(i);
    if ( i->DisplayClass_field_0x130 >= 0 )
    {
      DisplayClass_field_0x140 = i->DisplayClass_field_0x140;
      LOBYTE(DisplayClass_field_0x140) = DisplayClass_field_0x140 & 0xFC;
      i->DisplayClass_field_0x12C &= 0xFFFFFFE7;
      i->DisplayClass_field_0x140 = DisplayClass_field_0x140;
    }
  }
  Radar::UpdateReveal(0, 0);
  *(_BYTE *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 576) = 0;
  FogOfWar::Render((FogOfWar *)&dword_87F7E8);
  return (*(int (__thiscall **)(TActionClass *, int))(this->vfptr + 56))(this, 2);
}
