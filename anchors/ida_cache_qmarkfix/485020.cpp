int __thiscall Building::GetNthOfType(Building *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_C[56]);
  if ( BuildingByTiberiumType == -1 )
    return 0;
  else
    return ((unsigned __int8)this->__pad_A4[122] + 1)
         * *(_DWORD *)(*(&dword_B0F4EC->vfptr + BuildingByTiberiumType) + 184);
}
