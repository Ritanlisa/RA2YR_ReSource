char __thiscall TeamClass::UpdateReadinessState(TeamClass *this)
{
  int v2; // eax
  int totalObjects; // ecx
  int buildingType; // edi
  char v6; // al
  int i; // edi
  char v8; // [esp+Fh] [ebp-1h]

  v8 = this->TeamClass_field_7A[0];
  v2 = TeamClass::SumMemberCounts(*(TeamClass **)(this->buildingType + 228));
  totalObjects = this->totalObjects;
  if ( totalObjects > 0 )
  {
    this->unknown79[0] = totalObjects == v2;
    if ( totalObjects == v2 )
      this->spawnStatus[0] = 1;
    buildingType = this->buildingType;
    if ( *(_BYTE *)(buildingType + 171) )
    {
      if ( v2 <= 2 )
        this->TeamClass_field_7A[0] = totalObjects < v2;
      else
        this->TeamClass_field_7A[0] = totalObjects <= v2 / 3;
    }
    else
    {
      this->TeamClass_field_7A[0] = this->spawnStatus[0] == 0;
    }
    if ( *(_BYTE *)(buildingType + 167) )
    {
      if ( this->TeamClass_field_7A[0] )
        this->unknown76[0] = 0;
      else
        this->unknown76[0] = 1;
    }
    this->TeamClass_field_7E[0] = 0;
    this->needsToDisappear[0] = 0;
    goto LABEL_14;
  }
  v6 = this->spawnStatus[0];
  this->unknown76[0] = 0;
  this->TeamClass_field_7A[0] = 1;
  this->unknown79[0] = 0;
  this->spawnCell = 0;
  if ( !v6 )
  {
LABEL_14:
    if ( v8 != this->TeamClass_field_7A[0] )
      this->TeamClass_field_7B[0] = 1;
    return 1;
  }
  if ( this->unknown82[0] )
  {
    for ( i = dword_8B40D8 - 1; i >= 0; --i )
    {
      if ( (unsigned __int8)TeamClass::Update_0(*((TeamClass **)dword_8B40CC + i), 23, 0, dword_B0E948, 0, 0)
        && !dword_8B40D8 )
      {
        break;
      }
    }
  }
  if ( this )
    (*(void (__thiscall **)(TeamClass *, int))(this->vfptr + 32))(this, 1);
  return 0;
}
