int __thiscall TeamClass::PowerDrainUpdate(TeamClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int unknown38; // eax
  int v6; // eax
  int firstUnit; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int tag; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx

  AbstractClass::ProcessPower((AbstractClass *)this);
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->buildingType + 4) + 16))(this->buildingType + 4);
  Power::TimerProcess(v3);
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4);
  Power::TimerProcess(v4);
  unknown38 = this->unknown38;
  if ( unknown38 )
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(unknown38 + 4) + 16))(unknown38 + 4);
    Power::TimerProcess(v6);
  }
  Power::TimerProcess(this->totalObjects);
  Power::TimerProcess(this->totalThreatValue);
  firstUnit = this->firstUnit;
  if ( firstUnit )
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(firstUnit + 4) + 16))(firstUnit + 4);
    Power::TimerProcess(v8);
  }
  v9 = this->guardAreaTimer[0];
  v10 = this->guardAreaTimer[2];
  if ( v9 != -1 )
  {
    if ( *(_DWORD *)&stru_A8E960.random[528] - v9 >= v10 )
      v10 = 0;
    else
      v10 -= *(_DWORD *)&stru_A8E960.random[528] - v9;
  }
  Power::TimerProcess(v10);
  v11 = this->suspendTimer[0];
  v12 = this->suspendTimer[2];
  if ( v11 != -1 )
  {
    if ( *(_DWORD *)&stru_A8E960.random[528] - v11 >= v12 )
      v12 = 0;
    else
      v12 -= *(_DWORD *)&stru_A8E960.random[528] - v11;
  }
  Power::TimerProcess(v12);
  tag = this->tag;
  if ( tag )
  {
    v14 = (*(int (__stdcall **)(int))(*(_DWORD *)(tag + 4) + 16))(tag + 4);
    tag = Power::TimerProcess(v14);
  }
  LOBYTE(tag) = this->unknown77[0];
  Power::FlagProcess((Power *)a2, tag);
  LOBYTE(v15) = this->spawnStatus[0];
  Power::FlagProcess((Power *)a2, v15);
  LOBYTE(v16) = this->unknown79[0];
  v17 = Power::FlagProcess((Power *)a2, v16);
  LOBYTE(v17) = this->TeamClass_field_7A[0];
  Power::FlagProcess((Power *)a2, v17);
  LOBYTE(v18) = this->TeamClass_field_7B[0];
  Power::FlagProcess((Power *)a2, v18);
  LOBYTE(v19) = this->visibilityFlags[0];
  v20 = Power::FlagProcess((Power *)a2, v19);
  LOBYTE(v20) = this->needsToDisappear[0];
  Power::FlagProcess((Power *)a2, v20);
  LOBYTE(v21) = this->TeamClass_field_7E[0];
  Power::FlagProcess((Power *)a2, v21);
  LOBYTE(v22) = this->TeamClass_field_7F[0];
  v23 = Power::FlagProcess((Power *)a2, v22);
  LOBYTE(v23) = this->stepCompleted[0];
  Power::FlagProcess((Power *)a2, v23);
  LOBYTE(v24) = this->unknown82[0];
  Power::FlagProcess((Power *)a2, v24);
  LOBYTE(v25) = this->isSuspended[0];
  Power::FlagProcess((Power *)a2, v25);
  return Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->countObjects, 24);
}
