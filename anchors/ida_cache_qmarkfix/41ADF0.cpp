int __thiscall AircraftClass::RevealSight(AircraftClass *this, int a2, int a3)
{
  int v4; // ebx
  void *owner; // edx
  int v6; // edx
  int v7; // eax
  void *v8; // edx
  int result; // eax
  int GUIMainButtonSound; // ebx
  int vfptr; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(_DWORD *)(this->Type + 1512);
  if ( !(*(int (__thiscall **)(AircraftClass *))(this->vfptr + 456))(this) )
  {
    v4 = 1;
LABEL_4:
    v17 = this->location[0];
    v18 = this->location[1];
    owner = (void *)this->owner;
    v19 = this->location[2];
    MapClass::RevealArea1((MapClass *)&dword_87F7E8, &v17, v4, owner, a2, a3, 0, 1, 0);
    v6 = this->location[1];
    v7 = this->location[2];
    v17 = this->location[0];
    v18 = v6;
    v8 = (void *)this->owner;
    v19 = v7;
    return MapClass::RevealArea1((MapClass *)&dword_87F7E8, &v17, v4, v8, a2, a3, 0, 1, 1);
  }
  if ( v4 )
    goto LABEL_4;
  result = dword_A8B230->vfptr;
  if ( (dword_A8B230->vfptr & 0x1000) != 0 )
  {
    GUIMainButtonSound = dword_8871E0->GUIMainButtonSound;
    v17 = this->location[0];
    v18 = this->location[1];
    vfptr = this->vfptr;
    v19 = this->location[2];
    v12 = (*(int (__thiscall **)(AircraftClass *))(vfptr + 456))(this);
    MapClass::RevealArea1(
      (MapClass *)&dword_87F7E8,
      &v17,
      GUIMainButtonSound,
      (void *)this->owner,
      0,
      0,
      1,
      v12 < dword_8871E0->GDIWallDefense[1] / 2,
      0);
    v13 = this->location[1];
    v14 = this->location[2];
    v17 = this->location[0];
    v15 = this->vfptr;
    v18 = v13;
    v19 = v14;
    v16 = (*(int (__thiscall **)(AircraftClass *))(v15 + 456))(this);
    return MapClass::RevealArea1(
             (MapClass *)&dword_87F7E8,
             &v17,
             GUIMainButtonSound,
             (void *)this->owner,
             0,
             0,
             1,
             v16 < dword_8871E0->GDIWallDefense[1] / 2,
             1);
  }
  return result;
}
