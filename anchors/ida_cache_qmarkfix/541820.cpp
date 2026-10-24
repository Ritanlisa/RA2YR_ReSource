int __thiscall Network::ReceiveLoop(IPXManagerClass *this)
{
  unsigned int Network_field_0xC; // ebx
  int v3; // edx
  unsigned int field_60; // ecx
  int v5; // edi
  bool v6; // zf
  unsigned __int16 *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  __int16 v12; // ax
  __int16 v13; // bp
  int v14; // edx
  int *v15; // ecx
  int *v16; // eax
  int PlayerName; // eax
  signed int v18; // ebp
  unsigned int *p_q028; // ebx
  char *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *v23; // edx
  _WORD *u32_64; // ecx
  char v25; // cl
  signed int v26; // ebp
  unsigned int *v27; // edi
  char LinkedIndex; // al
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  int i; // edi
  int *v33; // ecx
  int *v34; // eax
  int *v35; // eax
  int *v36; // ecx
  unsigned int v37; // ecx
  signed int v38; // ebp
  unsigned int v39; // ecx
  unsigned int u32_68; // ecx
  unsigned int *v41; // edi
  int result; // eax
  __int16 v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  Network *v45; // [esp+24h] [ebp-4C8h]
  __int16 v46[2]; // [esp+34h] [ebp-4B8h] BYREF
  Network v47[2]; // [esp+38h] [ebp-4B4h] BYREF

  v47[0].Network_field_0x10 = 1;
  Waypoint::InitInvalid((Waypoint *)v47);
  if ( dword_887628 )
  {
    while ( 1 )
    {
      *(_DWORD *)v47[0].__pad_14 = 1024;
      *(_DWORD *)&v47[0].__pad_14[4] = 128;
      *(_DWORD *)v46 = 0;
      Network_field_0xC = (*(int (__thiscall **)(WinsockInterface *, char *, char *, char *, char *, __int16 *))(*(_DWORD *)dword_887628->__pad_0 + 8))(
                            dword_887628,
                            &v47[0].__pad_87[45],
                            v47[0].__pad_14,
                            v47[0].__pad_34,
                            &v47[0].__pad_14[4],
                            v46);
      v47[0].Network_field_0xC = Network_field_0xC;
      if ( !Network_field_0xC )
        goto LABEL_92;
      v3 = *(_DWORD *)&v47[0].__pad_34[4];
      v47[0].Network_field_0x0 = *(_DWORD *)v47[0].__pad_34;
      field_60 = this->field_60;
      *((_DWORD *)this + 35) = &v47[0].__pad_87[45];
      v47[0].Network_field_0x4 = v3;
      v47[0].Network_field_0x8 = *(_DWORD *)&v47[0].__pad_34[8];
      if ( *(_WORD *)&v47[0].__pad_87[45] == *(_WORD *)(field_60 + 36) )
      {
        if ( Network_Recv(
               (int)&v47[0].__pad_87[45],
               (int)&v47[0].__pad_87[45],
               Network_field_0xC,
               (Network *)v47[0].__pad_34,
               v46[0]) )
        {
          goto LABEL_87;
        }
        if ( (*(int (__thiscall **)(unsigned int, char *, unsigned int, Network *, _DWORD))(*(_DWORD *)this->field_60
                                                                                          + 48))(
               this->field_60,
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               *(_DWORD *)v46) )
        {
          if ( *(_DWORD *)&dword_A8B238.field_0 == 4 && byte_A8E2C8 )
          {
            v5 = 0;
            v6 = *(_DWORD *)&stru_A8D804.__pad_3D[579] == 0;
            if ( *(int *)&stru_A8D804.__pad_3D[579] <= 0 )
            {
LABEL_14:
              if ( !v6 )
              {
                Debug::Log();
                if ( Network_field_0xC >= 0x10 && v47[0].__pad_87[47] != 2 && Network_field_0xC >= 0x3F )
                {
                  v8 = *(_DWORD *)(*((_DWORD *)this + 35) + 16);
                  if ( v8 == 39 || v8 == 41 || v8 == 13 )
                  {
                    v9 = (const char *)(*((_DWORD *)this + 35) + 20);
                    *(_DWORD *)&v47[0].__pad_14[8] = 0;
                    *(_DWORD *)&v47[0].__pad_14[12] = 0;
                    *(_DWORD *)&v47[0].Network_field_0x22[2] = 0;
                    v47[0].Network_field_0x28 = 0;
                    *(_DWORD *)v47[0].__pad_2C = 0;
                    LOWORD(v47[0].Network_field_0x30) = 0;
                    strncpy(&v47[0].__pad_14[8], v9, 0x14u);
                    v10 = 0;
                    if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 )
                    {
                      while ( 1 )
                      {
                        v11 = ToWideStringChar(*(char **)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10));
                        if ( !_strcmpi(v11, &v47[0].__pad_14[8]) )
                          break;
                        if ( ++v10 >= *(int *)&stru_A8D804.__pad_3D[579] )
                          goto LABEL_87;
                      }
                      if ( !(unsigned __int8)NetworkID::Compare(
                                               (bool *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40),
                                               (int)v47)
                        || *(_WORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40) != v46[0] )
                      {
                        Debug::Log();
                        v12 = v46[0];
                        v13 = *(&dword_A8E2B2 + v10);
                        *(&dword_A8E2B2 + v10) = v46[0];
                        Network::reconnect(
                          (Network *)&dword_B052D0,
                          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 111),
                          v12);
                        (*(void (__thiscall **)(unsigned int, Network *, __int16))(*(_DWORD *)this->field_60 + 64))(
                          this->field_60,
                          v47,
                          v13);
                        v14 = *(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10);
                        LOWORD(v14) = *(_WORD *)(v14 + 40);
                        (*(void (__thiscall **)(unsigned int, Network *, int))(*(_DWORD *)this->field_60 + 64))(
                          this->field_60,
                          v47,
                          v14);
                        v15 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40);
                        *v15 = v47[0].Network_field_0x0;
                        v15[1] = v47[0].Network_field_0x4;
                        v15[2] = v47[0].Network_field_0x8;
                        Network::SetPort(
                          (Network *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40),
                          v46[0]);
                        NetworkManager::SetPlayerAddress(
                          (NetworkManager *)&dword_B052D0,
                          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 111),
                          (_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10) + 40));
                        v16 = (int *)(*(_DWORD *)&stru_A8D804.__pad_3D[4 * GameClass::FindPlayerName(v10) + 591] + 40);
                        *v16 = v47[0].Network_field_0x0;
                        v16[1] = v47[0].Network_field_0x4;
                        v16[2] = v47[0].Network_field_0x8;
                        v43 = v46[0];
                        PlayerName = GameClass::FindPlayerName(v10);
                        Network::SetPort((Network *)(*(_DWORD *)&stru_A8D804.__pad_3D[4 * PlayerName + 591] + 40), v43);
                        v18 = 0;
                        if ( (int)this->field_5C > 0 )
                        {
                          p_q028 = &this->q028;
                          while ( 1 )
                          {
                            v20 = ToWideStringChar((char *)(*p_q028 + 104));
                            if ( !_strcmpi(v20, &v47[0].__pad_14[8]) )
                              break;
                            ++v18;
                            ++p_q028;
                            if ( v18 >= (signed int)this->field_5C )
                              goto LABEL_33;
                          }
                          v21 = (int *)(*(_DWORD *)&this->field_24[4 * v18 + 4] + 76);
                          *v21 = v47[0].Network_field_0x0;
                          v21[1] = v47[0].Network_field_0x4;
                          v21[2] = v47[0].Network_field_0x8;
                          Network::SetPort((Network *)(*(_DWORD *)&this->field_24[4 * v18 + 4] + 76), v46[0]);
                          Network::FormatAddress((Network *)(*(_DWORD *)&this->field_24[4 * v18 + 4] + 76), 0);
                          Debug::Log();
LABEL_33:
                          Network_field_0xC = v47[0].Network_field_0xC;
                        }
                        if ( !byte_A8D60E )
                        {
                          if ( this->field_5C )
                          {
                            v22 = *(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v10);
                            if ( dword_A80238 > *(_DWORD *)(v22 + 111)
                              && SessionClass::IsValidHouse(
                                   (int)&dword_A8B238,
                                   *((#375 **)&dword_A8022C->vfptr + *(_DWORD *)(v22 + 111))) )
                            {
                              Network::FormatAddress(v47, 0);
                              Network::FormatAddress((Network *)(this->u32_68 + 76), 0);
                              Debug::Log();
                              v23 = (int *)(this->u32_68 + 76);
                              *v23 = v47[0].Network_field_0x0;
                              v23[1] = v47[0].Network_field_0x4;
                              v23[2] = v47[0].Network_field_0x8;
                              Network::SetPort((Network *)(this->u32_68 + 76), v46[0]);
                              stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0;
                              dword_A8BB24 = v47[0].Network_field_0x8;
                              dword_A8BB20 = v47[0].Network_field_0x4;
                              Network::SetPort(&stru_A8BB1C, v46[0]);
                              *(NetworkID *)&stru_A8D804.__pad_3D[867] = *(NetworkID *)&v47[0].Network_field_0x0;
                              *(_DWORD *)&stru_A8D804.__pad_3D[875] = v47[0].Network_field_0x8;
                              Network::SetPort((Network *)&stru_A8D804.__pad_3D[867], v46[0]);
                              *(_WORD *)&stru_A8D804.__pad_3D[891] = v46[0];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v7 = &dword_A8E2B2;
              while ( !(unsigned __int8)NetworkID::Compare(
                                          (bool *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v5) + 40),
                                          (int)v47)
                   || *v7 != v46[0] )
              {
                ++v5;
                ++v7;
                if ( v5 >= *(int *)&stru_A8D804.__pad_3D[579] )
                {
                  v6 = *(_DWORD *)&stru_A8D804.__pad_3D[579] == 0;
                  goto LABEL_14;
                }
              }
            }
          }
          goto LABEL_87;
        }
        ++*((_DWORD *)this + 41);
        goto LABEL_91;
      }
      u32_64 = (_WORD *)this->u32_64;
      if ( *(_WORD *)&v47[0].__pad_87[45] == u32_64[18] )
      {
        if ( !stru_A8D804.__pad_3D[863]
          || (*(int (__thiscall **)(_WORD *, char *, unsigned int, Network *, _DWORD))(*(_DWORD *)u32_64 + 48))(
               u32_64,
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               0) )
        {
          goto LABEL_87;
        }
        ++*((_DWORD *)this + 41);
LABEL_91:
        Debug::Log();
        goto LABEL_92;
      }
      if ( *(_WORD *)&v47[0].__pad_87[45] != this->u32_20
        || Network_Recv(
             (int)&v47[0].__pad_87[45],
             (int)&v47[0].__pad_87[45],
             Network_field_0xC,
             (Network *)v47[0].__pad_34,
             v46[0]) )
      {
        goto LABEL_87;
      }
      v25 = v47[0].__pad_87[47];
      if ( stru_A8D804.__pad_3D[863] && v47[0].__pad_87[48] == -1 )
      {
        if ( v47[0].__pad_87[47] == 2 )
        {
          (*(void (__thiscall **)(unsigned int, char *, unsigned int))(*(_DWORD *)this->u32_68 + 12))(
            this->u32_68,
            &v47[0].__pad_87[45],
            Network_field_0xC);
        }
        else if ( (int)this->field_5C > 0 )
        {
          Network::FormatAddress(v47, 0);
          Debug::Log();
          if ( !(*(int (__thiscall **)(unsigned int, char *, unsigned int))(*(_DWORD *)this->q028 + 12))(
                  this->q028,
                  &v47[0].__pad_87[45],
                  Network_field_0xC) )
          {
            Network_field_0xC = 0;
            ++*((_DWORD *)this + 41);
            goto LABEL_74;
          }
        }
        goto LABEL_75;
      }
      v26 = 0;
      if ( (int)this->field_5C <= 0 )
      {
LABEL_60:
        if ( *(_DWORD *)&dword_A8B238.field_0 == 4
          && !dword_A8E7AC
          && *(int *)&stru_A8E960.random[528] > 8
          && !stru_A8D804.__pad_3D[863]
          && Network_field_0xC > 0xF
          && v25 == 1
          && v47[0].__pad_87[59] == 25 )
        {
          v29 = 1;
          v30 = v47[0].__pad_87[61];
          if ( *(int *)&stru_A8D804.__pad_3D[579] > 1 )
          {
            v31 = *(_DWORD *)&stru_A8D804.__pad_3D[567] + 4;
            while ( *(_DWORD *)(*(_DWORD *)v31 + 111) != v47[0].__pad_87[61] )
            {
              ++v29;
              v31 += 4;
              if ( v29 >= *(int *)&stru_A8D804.__pad_3D[579] )
                goto LABEL_86;
            }
            v35 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v29) + 40);
            v44 = v47[0].__pad_87[61];
            *v35 = v47[0].Network_field_0x0;
            v35[1] = v47[0].Network_field_0x4;
            v35[2] = v47[0].Network_field_0x8;
            if ( (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, v44) != -1 )
            {
              v36 = (int *)(*(_DWORD *)&this->field_24[4
                                                     * (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(
                                                         this,
                                                         v30)
                                                     + 4]
                          + 76);
              *v36 = v47[0].Network_field_0x0;
              v36[1] = v47[0].Network_field_0x4;
              v36[2] = v47[0].Network_field_0x8;
            }
LABEL_86:
            Network_field_0xC = v47[0].Network_field_0xC;
          }
        }
        goto LABEL_87;
      }
      v27 = &this->q028;
      while ( stru_A8D804.__pad_3D[863] )
      {
        LinkedIndex = Factory::GetLinkedIndex(&dword_B052D0, *(_DWORD *)(*v27 + 100));
        v25 = v47[0].__pad_87[47];
        if ( LinkedIndex == v47[0].__pad_87[48] )
          goto LABEL_72;
        if ( !stru_A8D804.__pad_3D[863] )
          break;
LABEL_59:
        ++v26;
        ++v27;
        if ( v26 >= (signed int)this->field_5C )
          goto LABEL_60;
      }
      if ( !(unsigned __int8)GUID::Compare((char *)(*v27 + 76), (int)v47) )
        break;
LABEL_72:
      if ( !(*(int (__thiscall **)(_DWORD, char *, unsigned int))(**(_DWORD **)&this->field_24[4 * v26 + 4] + 12))(
              *(_DWORD *)&this->field_24[4 * v26 + 4],
              &v47[0].__pad_87[45],
              Network_field_0xC) )
      {
        Network_field_0xC = 0;
        ++*((_DWORD *)this + 41);
LABEL_74:
        Debug::Log();
      }
LABEL_75:
      if ( *(_DWORD *)&dword_A8B238.field_0 == 4 )
      {
        if ( stru_A8D804.__pad_3D[863] )
        {
          if ( Network::processPacket((char *)v47, this->u32_68 + 76) )
          {
            for ( i = 1; i < *(int *)&stru_A8D804.__pad_3D[579]; ++i )
            {
              if ( (unsigned __int8)NetworkID::Compare(
                                      (bool *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * i) + 40),
                                      this->u32_68 + 76)
                && SessionClass::IsValidHouse(
                     (int)&dword_A8B238,
                     *((#375 **)&dword_A8022C->vfptr
                     + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * i) + 111))) )
              {
                Network::FormatAddress(v47, 0);
                Network::FormatAddress((Network *)(this->u32_68 + 76), 0);
                Debug::Log();
                v33 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * i) + 40);
                *v33 = v47[0].Network_field_0x0;
                v33[1] = v47[0].Network_field_0x4;
                v33[2] = v47[0].Network_field_0x8;
                v34 = (int *)(this->u32_68 + 76);
                *v34 = v47[0].Network_field_0x0;
                v34[1] = v47[0].Network_field_0x4;
                v34[2] = v47[0].Network_field_0x8;
                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0;
                *(NetworkID *)&stru_A8D804.__pad_3D[867] = *(NetworkID *)&v47[0].Network_field_0x0;
                dword_A8BB20 = v47[0].Network_field_0x4;
                dword_A8BB24 = v47[0].Network_field_0x8;
                *(_DWORD *)&stru_A8D804.__pad_3D[875] = v47[0].Network_field_0x8;
                NetworkManager::SetPlayerAddress(
                  (NetworkManager *)&dword_B052D0,
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * i) + 111),
                  v47);
              }
            }
          }
        }
      }
LABEL_87:
      if ( !Network_field_0xC )
        goto LABEL_92;
    }
    v25 = v47[0].__pad_87[47];
    goto LABEL_59;
  }
LABEL_92:
  v37 = this->field_60;
  v38 = 0;
  if ( v37 && dword_887628 && !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)v37 + 20))(v37) )
  {
    (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this->field_60 + 24))(this->field_60);
    v47[0].Network_field_0x10 = 0;
  }
  if ( stru_A8D804.__pad_3D[863] )
  {
    v39 = this->u32_64;
    if ( v39 )
    {
      if ( !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)v39 + 20))(v39) )
      {
        (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this->u32_64 + 24))(this->u32_64);
        v47[0].Network_field_0x10 = 0;
      }
      if ( !byte_A8E2D0 )
        Network::ProcessAddressChange(v45);
    }
    if ( stru_A8D804.__pad_3D[863] )
    {
      u32_68 = this->u32_68;
      if ( u32_68 )
      {
        if ( !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)u32_68 + 20))(u32_68) )
        {
          Debug::Log();
          v47[0].Network_field_0x10 = 0;
        }
      }
    }
  }
  if ( dword_887628 && (int)this->field_5C > 0 )
  {
    v41 = &this->q028;
    do
    {
      if ( !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)*v41 + 20))(*v41) )
      {
        v47[0].Network_field_0x10 = 0;
        *((_DWORD *)this + 42) = *(_DWORD *)(*v41 + 100);
        Debug::Log();
      }
      ++v38;
      ++v41;
    }
    while ( v38 < (signed int)this->field_5C );
  }
  result = v47[0].Network_field_0x10;
  if ( v47[0].Network_field_0x10 )
    *((_DWORD *)this + 42) = -1;
  return result;
}
