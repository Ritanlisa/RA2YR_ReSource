char __thiscall TActionClass::CreateNukeEffect(TActionClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  _DWORD *v10; // esi
  int v11; // edi
  CellClass *v12; // eax
  Function *UIObjectCOM; // edi
  int v14; // eax
  int v16; // [esp-10h] [ebp-68h]
  int v17; // [esp-Ch] [ebp-64h]
  __int16 v18[2]; // [esp+Ch] [ebp-4Ch] BYREF
  double v19; // [esp+10h] [ebp-48h] BYREF
  double v20; // [esp+18h] [ebp-40h]
  double v21; // [esp+20h] [ebp-38h]
  int v22; // [esp+28h] [ebp-30h] BYREF
  int v23; // [esp+2Ch] [ebp-2Ch]
  int GroundHeight; // [esp+30h] [ebp-28h]
  _DWORD v25[3]; // [esp+34h] [ebp-24h] BYREF
  _QWORD v26[3]; // [esp+40h] [ebp-18h] BYREF

  *(_DWORD *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, this->TActionClass_field_44);
  GroundHeight = 0;
  v23 = (v18[1] << 8) + 128;
  v22 = (v18[0] << 8) + 128;
  GroundHeight = Cell::GetGroundHeight(&v22);
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18) + 80) & 0x100) != 0 )
    GroundHeight += dword_B0E6D4;
  v10 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(&stru_81AFA0));
  v11 = v10[40];
  v17 = v10[43];
  v16 = v10[41];
  v12 = Coord::To_Cell((Coord *)&dword_87F7E8, &v22);
  UIObjectCOM = (Function *)CreateUIObjectCOM(v11, (int)v12, 0, v16, v17, 50, 0);
  Function::Method_46B260(UIObjectCOM, (int)v10);
  v25[0] = v22;
  v25[1] = v23;
  v25[2] = GroundHeight + 20000;
  if ( !UIObjectCOM )
    return 0;
  Math::SinCos(1.570748388432313);
  v19 = v5;
  Math::ArcTan2(1.570748388432313);
  v19 = v6 * v19 * -100.0;
  Math::ArcTan2(1.570748388432313);
  v20 = v7;
  Math::ArcTan2(1.570748388432313);
  v21 = v19;
  *(double *)&v26[1] = v19;
  v20 = v8 * v20 * -100.0;
  *(double *)v26 = v20;
  Math::SinCos(1.570748388432313);
  v14 = *(_DWORD *)UIObjectCOM->__pad_0;
  *(double *)&v26[2] = v9 * -100.0;
  (*(void (__thiscall **)(Function *, _DWORD *, _QWORD *))(v14 + 496))(UIObjectCOM, v25, v26);
  return 1;
}
