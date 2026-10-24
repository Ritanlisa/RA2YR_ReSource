int __thiscall TeamClass::DisbandTeam(TeamClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int i; // eax
  unsigned int v6; // edx

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
  v4 = *((_DWORD *)this + 61);
  *((_DWORD *)this + 67) = 1;
  *((_DWORD *)this + 68) = v4;
  *((_DWORD *)this + 69) = v4 - 1;
  *((_DWORD *)this + 70) = (v4 << 11) + *((_DWORD *)this + 79) + 4;
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    v6 = *(_DWORD *)(i + 320) & 0xFFFFFFFC;
    *(_DWORD *)(i + 300) &= 0xFFFFFFE7;
    *(_DWORD *)(i + 320) = v6;
  }
  HouseClass::RevealShroudForAllies(0, 0);
  *(_BYTE *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 576) = 0;
  FogOfWar::Render((FogOfWar *)&dword_87F7E8);
  return (*(int (__thiscall **)(TeamClass *, int))(this->vfptr + 56))(this, 2);
}
