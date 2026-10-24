int __thiscall LayerClass::AssignCellOwnership(LayerClass *this)
{
  LayerClass *v1; // esi
  int v2; // eax
  int result; // eax
  int i; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  ObjectClass *v8; // esi
  int v9; // eax
  int v10; // [esp+8h] [ebp-8h]

  v1 = this;
  v2 = *((_DWORD *)this + 61);
  *((_DWORD *)this + 67) = 1;
  *((_DWORD *)this + 68) = v2;
  *((_DWORD *)this + 69) = v2 - 1;
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4;
  result = LayerClass::CellIteratorNext(this);
  for ( i = result; result; i = result )
  {
    v5 = *(_DWORD *)(i + 68);
    if ( v5 != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v5) + 680) )
      {
        v6 = -1;
        v7 = 0;
        v10 = 0x7FFFFFFF;
        if ( *(int *)&stru_A8E960.altNextScenario[236] > 0 )
        {
          do
          {
            v8 = *(ObjectClass **)(*(_DWORD *)&stru_A8E960.altNextScenario[224] + 4 * v7);
            v9 = ObjectClass::DistanceTo(v8, i);
            if ( v8->isAliveFlag[0]
              && v8->isOnMap[0]
              && *(_BYTE *)(*(_DWORD *)(v8[3].nextArrayIndex + 52) + 423)
              && (v6 == -1 || v9 < v10) )
            {
              v10 = v9;
              v6 = v7;
            }
            ++v7;
          }
          while ( v7 < *(int *)&stru_A8E960.altNextScenario[236] );
          if ( v6 != -1 )
            *(_DWORD *)(i + 80) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8E960.altNextScenario[224]
                                                                    + 4 * v6)
                                                        + 540)
                                            + 48);
          v1 = this;
        }
      }
    }
    result = LayerClass::CellIteratorNext(v1);
  }
  return result;
}
