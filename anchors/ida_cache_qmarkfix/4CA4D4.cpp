int __thiscall FactoryClass::Stat(FactoryClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  Debug::Log();
  Debug::Log();
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 44))(*(_DWORD *)&this->__pad_42[22]);
  Debug::Log();
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 64))(*(_DWORD *)&this->__pad_42[22]);
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  (*(void (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4);
  Debug::Log();
  (*(void (__stdcall **)(int *))(this->vfptr1 + 16))(&this->vfptr1);
  Debug::Log();
  v3 = AbstractClass::ProcessPower((AbstractClass *)this);
  LOBYTE(v3) = this->isSuspended[0];
  Power::FlagProcess((Power *)a2, v3);
  LOBYTE(v4) = this->__pad_42[27];
  Power::FlagProcess((Power *)a2, v4);
  Power::TimerProcess(this->balance);
  Power::TimerProcess(this->originalBalance);
  v5 = *(_DWORD *)&this->__pad_42[22];
  if ( v5 )
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
  }
  Power::TimerProcess(this->specialItem);
  v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4);
  return Power::TimerProcess(v7);
}
