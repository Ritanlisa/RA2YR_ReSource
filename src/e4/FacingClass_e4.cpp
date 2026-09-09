// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4C9220
char FacingClass::Update(DirStruct * desiredFacing)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FacingClass::Update(FacingClass *this, DirStruct *desiredFacing)
{
  __int16 v2; // ax
  __int16 ROT; // bp
  int StartTime; // edi
  int TimeLeft; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  __int16 v10; // di
  IUnknown *v11; // eax
  DirStruct v12; // edx
  int v13; // eax
  CDTimerClass *p_RotationTimer; // ecx
  IUnknown *v16; // [esp+0h] [ebp-10h]
  int v17; // [esp+8h] [ebp-8h]

  v2 = this->DesiredFacing; /*0x4c9224*/
  if ( LOWORD(this->DesiredFacing) == desiredFacing->Value ) /*0x4c922d*/
    return 0; /*0x4c92f7*/
  ROT = this->ROT; /*0x4c9235*/
  if ( ROT <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  StartTime = this->RotationTimer.StartTime; /*0x4c9240*/
  TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9243*/
  if ( StartTime != -1 ) /*0x4c924f*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - StartTime >= TimeLeft ) /*0x4c9257*/
    {
LABEL_15:
      v11 = (IUnknown *)this->DesiredFacing; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    TimeLeft -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - StartTime; /*0x4c9259*/
  }
  if ( !TimeLeft ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  v6 = (__int16)(v2 - LOWORD(this->StartFacing)); /*0x4c9266*/
  v7 = abs16(v2 - LOWORD(this->StartFacing)) / ROT; /*0x4c9271*/
  v16 = (IUnknown *)this->DesiredFacing; /*0x4c9275*/
  if ( (__int16)v7 > 0 ) /*0x4c927c*/
  {
    v8 = this->RotationTimer.StartTime; /*0x4c927e*/
    v9 = this->RotationTimer.TimeLeft; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      LOWORD(v9) = v9 - (*(_WORD *)&HouseClass_Player.__pad_5568[23248] - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
LABEL_12:
    LOWORD(v16) = (_WORD)v16 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  }
  v11 = v16; /*0x4c92a5*/
LABEL_16:
  this->StartFacing = (unsigned int)v11; /*0x4c92b1*/
  v12 = *desiredFacing; /*0x4c92bb*/
  this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c92bd*/
  if ( ROT > 0 ) /*0x4c92bf*/
  {
    v13 = abs16(v12.Value - LOWORD(this->StartFacing)) / ROT; /*0x4c92da*/
    p_RotationTimer = &this->RotationTimer; /*0x4c92e0*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c92e3*/
    p_RotationTimer->pad_04 = v17; /*0x4c92e5*/
    p_RotationTimer->TimeLeft = v13; /*0x4c92e8*/
  }
  return 1; /*0x4c92f1*/
}
}

// 0x4C9300
char FacingClass::Set_SyncLog(DirStruct * desiredFacing)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FacingClass::Set_SyncLog(FacingClass *this, DirStruct *desiredFacing)
{
  TerrainTypeClass *v3; // ebx
  int v4; // eax
  int TimeLeft; // edx
  int v6; // ebx
  __int16 v7; // cx
  unsigned int v8; // ecx
  CDTimerClass *p_RotationTimer; // esi
  char result; // al
  unsigned int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]

  if ( SLOWORD(this->ROT) > 0 ) /*0x4c930c*/
  {
    v3 = (TerrainTypeClass *)&this->RotationTimer; /*0x4c930e*/
    if ( CDTimerClass::TimeRemaining(&this->RotationTimer.StartTime) ) /*0x4c9313*/
    {
      v4 = abs16(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / SLOWORD(this->ROT); /*0x4c9333*/
      v11 = this->DesiredFacing; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9340*/
      v6 = *(_DWORD *)v3->__pad_0; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v6 >= TimeLeft ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(TimeLeft) = TimeLeft - (*(_WORD *)&HouseClass_Player.__pad_5568[23248] - v6); /*0x4c9356*/
      }
      v7 = TimeLeft; /*0x4c9358*/
LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = this->DesiredFacing; /*0x4c9375*/
LABEL_12:
  if ( (_WORD)v8 == desiredFacing->Value ) /*0x4c937e*/
  {
    p_RotationTimer = &this->RotationTimer; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c93b8*/
    p_RotationTimer->pad_04 = v12; /*0x4c93ba*/
  }
  else
  {
    this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c9382*/
    this->StartFacing = (unsigned int)*desiredFacing; /*0x4c9386*/
    p_RotationTimer = &this->RotationTimer; /*0x4c9390*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4c9393*/
    p_RotationTimer->pad_04 = v12; /*0x4c9399*/
    result = 1; /*0x4c939c*/
  }
  p_RotationTimer->TimeLeft = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
}
}
