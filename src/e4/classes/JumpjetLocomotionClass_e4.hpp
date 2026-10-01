// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct JumpjetLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* Owner;  // 0x8
    void* LinkedTo;  // 0xC
    void* Powered;  // 0x10
    char Dirty;  // 0x11
    unsigned short q012;  // 0x12
    void* RefCount;  // 0x14
    void* vtable3;  // 0x18
    char Speed[4];  // 0x1C
    bool q01D;  // 0x1D
    char Climb[4];  // 0x20
    float Crash;  // 0x24
    float Height;  // 0x28
    bool q02B;  // 0x2B
    char Accel[4];  // 0x2C
    float Wobbles;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    float Deviation;  // 0x34
    bool q037;  // 0x37
    char NoWobbles[1];  // 0x38
    char q039[4];  // 0x39
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    bool q03C;  // 0x3C
    unsigned char unknown_3D;  // 0x3D
    unsigned char unknown_3E;  // 0x3E
    unsigned char unknown_3F;  // 0x3F
    char DestinationCoords[12];  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    ILocomotion * ptr_48;  // 0x48
    bool q04A;  // 0x4A
    bool IsMoving;  // 0x4C
    unsigned char unknown_4D;  // 0x4D
    unsigned char unknown_4E;  // 0x4E
    unsigned char unknown_4F;  // 0x4F
    char CurrentState[4];  // 0x50
    unsigned char u8_53;  // 0x53
    unsigned char q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned int q068;  // 0x68
    void* unknown_6C;  // 0x6C
    unsigned char unknown_6D;  // 0x6D
    unsigned char unknown_6E;  // 0x6E
    unsigned char unknown_6F;  // 0x6F
    int CurrentHeight;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned char q080;  // 0x80
    unsigned char unknown_84;  // 0x84
    unsigned char unknown_85;  // 0x85
    unsigned char unknown_86;  // 0x86
    unsigned char unknown_87;  // 0x87
    char DestinationReached[1];  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned char unknown_91;  // 0x91
    unsigned char unknown_92;  // 0x92
    unsigned char unknown_93;  // 0x93
    ILocomotion* Piggybackee;  // 0x94
// --- flat members (END) ---
    AbstractClass * * FindClosestOccupiableCell();
    BOOL CheckWindowsErrorWrapper_0(int a2);
    BOOL ComputeFloatExpression(int a1);
    BOOL ComputeFloatExpression_2(int a1);
    BOOL GetLinkedLocomotorPointer(int a1);
    BOOL GetLinkedLocomotorPointer_0(int a1);
    BOOL HasFieldStateChanged(unsigned int * a1);
    BOOL HasScoreDisplayChanged(unsigned int * a1);
    BOOL ShortFunc_4B65F0(DropPodLocomotionClass * aP0);
    BOOL ShortFunc_4B66C0(int a1);
    BOOL ShortFunc_54DF70(int a1);
    BOOL ShortFunc_71A100(int a1);
    BOOL ShortFunc_72A1E0(int a1);
    BOOL ShortFunc_75CBA0(int a1);
    BuildingClass * * ProcessRotation();
    Coord * * DispatchLocomotion(unsigned int * a1);
    Coord * * MoveToDestination(int a1);
    Coord * * UpdateFootLocomotion(int a1, int a2, int a3, int a4);
    HRESULT CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3);
    HRESULT InitClass(int * a1, int * pStm);
    HRESULT InitMultiFieldArray_0(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    JumpjetLocomotionClass * ProcessAttach(char a2);
    LONG GetField_0x7C(int a1);
    LONG GetField_0x80(int a1);
    LONG GetInterface2(int a1);
    LONG IUnknownAddRef(int a1);
    LONG IUnknownRelease(volatile LONG * a1);
    LONG SmallStub_4B6750(int a1);
    LONG SmallStub_4B6760(int a1);
    LONG SmallStub_4B6780(int a1);
    LONG SmallStub_4B6790(int a1);
    LONG SmallStub_54E000(int a1);
    LONG SmallStub_54E010(int a1);
    LONG SmallStub_54E030(int a1);
    LONG SmallStub_54E040(int a1);
    LONG SmallStub_6A4310(int a1);
    LONG SmallStub_6A4320(int a1);
    LONG SmallStub_71A170(int a1);
    LONG SmallStub_71A180(int a1);
    LONG SmallStub_71A1A0(int a1);
    LONG SmallStub_71A1B0(int a1);
    LONG SmallStub_75CC40(int a1);
    LONG SmallStub_75CC50(int a1);
    LONG SmallStub_75CC70(int a1);
    LONG SmallStub_75CC80(int a1);
    LONG Stub2(int a1);
    LONG loc_4B4DD0(int a1);
    LONG loc_4B4DE0(int a1);
    LONG loc_6A4340(int a1);
    LONG loc_6A4350(int a1);
    TechnoClass * * ComputeMoveToPosition(int a1);
    TeleportLocomotionClass * ConstructLocomotor(char a2);
    bool CheckBaseClassState(int a1);
    bool CheckBaseClassState_0(int a1);
    bool CheckCompositeState(int a1);
    bool CheckCompositeState_0(int a1);
    bool CheckPiggybackState(int a1);
    bool CheckPiggybackState_0(int a1);
    bool ComputeFloatExpression_0(int a1);
    bool ComputeFloatExpression_4(unsigned int * a1);
    bool DispatchVirtualCall_1(int a1);
    bool IsPositionWithinThreshold(int a1, int a2, int a3, int a4);
    bool IsPositionWithinThreshold_0(int a1, int a2, int a3, int a4);
    bool IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4);
    bool IsStateInRange(int a1);
    bool ShortFunc_718080(int a1);
    bool ShortFunc_728A50(int a1);
    bool StubReturnTrue(int a1);
    bool StubReturnTrue_0(InfantryClass * aP0);
    bool StubReturnTrue_2(int a1);
    bool StubReturnTrue_4(InfantryClass * aP0);
    bool StubReturnTrue_5(int a1);
    bool StubReturnTrue_6(InfantryClass * aP0);
    bool StubReturnTrue_7(int a1);
    char ConvertCoordToCell_4(int a1, int a2, int a3, int a4);
    char DispatchVirtualCall_4(int a1, int a2);
    char IsBridgeBlocking(int a1);
    char IsMapCoordVisible();
    char MissionStub(int a1);
    char MissionStub2(int a1, int a2);
    char MissionStub3(int a1, int a2);
    char MissionStub4(int a1);
    char MissionStub7(int a1);
    char MissionStub8(int a1, int a2, int a3, int a4);
    char MissionStub9(int a1);
    char MoveToChecked(DriveLocomotionClass * aP0, int a2);
    char MoveToChecked_0(ShipLocomotionClass * aP0, int a2);
    char ProcessLocomotionStep(int a1);
    char RandomizeLocomotionParam(HoverLocomotionClass * aP0, HoverLocomotionClass * aP1);
    char ShortFunc_4CFD90(int a1);
    char SmallStub_54AE50(int a1);
    char SmallStub_5AFF70(int a1);
    char SmallStub_75AB30(int a1);
    char SmallStub_75CB20(int a1);
    char StubReturnTrue_1(int a1);
    char StubReturnTrue_3(int a1);
    char StubReturnZero_11(int a1);
    char StubReturnZero_20(unsigned int * a1);
    char SynchronizeFacingDirection(int a1, int a2);
    char SynchronizeFacingDirection_0(int a1, int a2);
    char SynchronizeFacingDirection_1(int a1, int a2);
    char TryMoveToAdjacentCell(unsigned int a1, unsigned int a2);
    char UpdateFacingDirection(int a1, int a2);
    char UpdateFacingDirection_0(int a1, int a2);
    char UpdateFacingDirection_1(int a1, int a2);
    char UpdateFacingDirection_2(int a1, int a2);
    char UpdateFacingDirection_3(int a1, int a2);
    char UpdateFacingDirection_4(int a1, int a2);
    double ComputeVectorLengthMetric(void *a1);
    float * ComputeAudio3DRotation(unsigned int * a1, float * a2, unsigned int * a3);
    float * ComputeAudio3DRotation_0(int a1, float * a2, unsigned int * a3);
    float * ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3);
    float * ComputeVoxelMatrix(int a1, float * a2, unsigned int * a3);
    void* AdjustClimbFacing(unsigned int * a2, void *a2);
    int CheckAttachStatus();
    int CheckState(TunnelLocomotionClass * aP0);
    int CheckState2(int a1, int a2);
    int CheckState3(int a1);
    int CheckState4(int a1);
    int CheckState5(int a1);
    int CheckStateWithOverride(TunnelLocomotionClass * aP0);
    int CheckWindowsErrorWrapper(int a1);
    int CheckWindowsErrorWrapper_1(int a1);
    int ClearLocomotionDirty(unsigned char * a1);
    int ClearLocomotionDirty_0(unsigned char * a1);
    int ComputeBounceHeight(int a1);
    int ComputeFloatExpression_3(int a1, int a2, int a3, int a4);
    int ConvertCoordToCell_0(int a1);
    int ConvertCoordToCell_1(int a1, int aP1, IUnknown * aP2, IUnknown * aP3);
    int ConvertCoordToCell_3(int a2, void * a3);
    int DispatchCheckState(TunnelLocomotionClass * aP0);
    int DispatchCheckState_6A3EB0(TunnelLocomotionClass * aP0);
    int DispatchVirtualCall(int * a1);
    int DispatchVirtualCall_0(int a1);
    int DispatchVirtualCall_10(unsigned int * a1, int a2);
    int DispatchVirtualCall_2(int a1);
    int DispatchVirtualCall_3(unsigned int * a1, int a2);
    int DispatchVirtualCall_5(unsigned int * a1, int a2);
    int DispatchVirtualCall_6(int * a1);
    int DispatchVirtualCall_7(unsigned int * a1, int a2);
    int DispatchVirtualCall_8(FootClass * aP0);
    int DispatchVirtualCall_9(int a1, int a2, int a3, int a4);
    int DrawVoxelAnimation(unsigned char * a1);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetField_0x48(int a1);
    int GetField_0x54(int a1);
    int GetField_0x58(int a1);
    int GetField_0x78(int a1, const void * a2, int * a3);
    int GetFloorZSetContext(void *a1);
    int GetInterface(int a1, const void * a2, unsigned int * a3);
    int InitMovementParams(int a1, int a2);
    int InitMultiFieldArray(unsigned int * a1, int a2, int a3, int a4);
    int IsAtDestination(int a1, int a2, int a3, int a4);
    int   LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_0(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_1(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2);
    int MissionStub10(int a1);
    int MissionStub11(int a1);
    int MissionStub5(int a1, int a2);
    int MissionStub6(int a1);
    int ResetMovementState(int a1);
    int SetByteField(int a1);
    int SetByteField_0(int a1);
    int SetByteField_1(int a1);
    int SetByteField_2(int a1);
    int SetByteField_3(int a1);
    int SetCoordinateField(unsigned int * a1);
    int SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4);
    int ShortFunc_5B0060(int a1);
    int ShortFunc_718090();
    int ShortFunc_72A1A0(int a1);
    int ShortFunc_72A1C0(int a1);
    int SmallStub_4B64D0(int a1);
    int SmallStub_4B6740(int a1, const void * a2, int * a3);
    int SmallStub_4B6770(int a1, const void * a2, int * a3);
    int SmallStub_517100(int a1);
    int SmallStub_54DFF0(int a1, const void * a2, int * a3);
    int SmallStub_54E020(int a1, const void * a2, int * a3);
    int SmallStub_5B19D0(int a1);
    int SmallStub_663460(int a1);
    int SmallStub_6A3E50(int a1);
    int SmallStub_6A4230(int a1);
    int SmallStub_6A4240(int a1);
    int SmallStub_6A4250(int a1);
    int SmallStub_6A4300(int a1, const void * a2, int * a3);
    int SmallStub_719E20(int a1);
    int SmallStub_71A120();
    int SmallStub_71A160(int a1, const void * a2, int * a3);
    int SmallStub_71A190(int a1, const void * a2, int * a3);
    int SmallStub_75C7E0(int a1);
    int SmallStub_75CC30(int a1, const void * a2, int * a3);
    int SmallStub_75CC60(int a1, const void * a2, int * a3);
    int SmoothObjectPlacement(int a1, int a2, int a3, int a4);
    int StubReturnFalse(int a1);
    int StubReturnTwo(int a1);
    int StubReturnZero(int a1, int a2);
    int StubReturnZero_0(int a1, unsigned int * a2);
    int StubReturnZero_1(int a1);
    int StubReturnZero_10(int a1, unsigned int * a2);
    int StubReturnZero_12(int a1, int a2);
    int StubReturnZero_13(int a1, unsigned int * a2);
    int StubReturnZero_14(int a1);
    int StubReturnZero_15(unsigned int a1);
    int StubReturnZero_16();
    int StubReturnZero_17(int a1, unsigned int * a2);
    int StubReturnZero_18(int a1, int a2);
    int StubReturnZero_19(int a1, unsigned int * a2);
    int StubReturnZero_2(unsigned int a1);
    int StubReturnZero_21(int a1, char a2);
    int StubReturnZero_22(int a1, int a2);
    int StubReturnZero_23(int a1, unsigned int * a2);
    int StubReturnZero_3(int a1, int a2);
    int StubReturnZero_4(int a1, unsigned int * a2);
    int StubReturnZero_5();
    int StubReturnZero_6();
    int StubReturnZero_7(LocomotionClass * aP0, unsigned int * a1);
    int StubReturnZero_8(unsigned char * a1);
    int StubReturnZero_9(int a1, int a2);
    int SyncMatrixTransformState(int a1);
    int SyncMovementPosition(int a1, int a2, int a3, int a4);
    int Thunk_VtableDispatch4(int a1);
    int UpdateAltitude(int a1, const void * a2, int * a3);
    int loc_4B4DC0(int a1, const void * a2, int * a3);
    int loc_6A4330(int a1, void *a2, void *a3);
    long long ComputeFloatExpression_1(int a1);
    unsigned int * CalculateBobOffset(int a1, unsigned int * a2);
    unsigned int * ClampToCellBounds(MouseClass * aP1, IUnknown * aP2, char a4);
    unsigned int * ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3);
    unsigned int * ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3);
    unsigned int * GetConditionedCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int *   GetCoordinateConditional(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinate_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinate_1(unsigned int * a1, unsigned int * a2);
    unsigned int * GetGlobalCoordinate(int a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2);
    unsigned int * GetSpeedCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * HasScoreDisplayChanged_514CB0(unsigned int * a1, unsigned int * a2);
    unsigned int * HasScoreDisplayChanged_514D10(unsigned int * a1, unsigned int * a2);
    unsigned int * HasScoreDisplayChanged_516320(unsigned int * a1);
    unsigned int * InitMovementState(unsigned int * a1, int a2);
    unsigned int * InitMovementState_0(unsigned int * a1, int a2);
    unsigned int * InitMultiFieldArray_1(unsigned int * a1);
    unsigned int * SetMovementTarget(int a1, int a2, int a3, int a4);
    unsigned int * ShortFunc_4CF940(int a1, unsigned int * a2);
    void * ComputeMovementTransform(signed int a1, float * a2, unsigned int * a3);
    void * ComputePitchYaw(signed int a1, float * a2, int * a3);
    void * ComputeRotationMatrix(int a1, float * a2, signed int a3);
    void * ComputeVoxelTransform(unsigned int * a1, float * a2, unsigned int * a3);
    void * ComputeVoxelTransform2(unsigned int * a1, float * a2, unsigned int * a3);
    void ** UpdateMovementPosition(unsigned int * a1, double VeteranCombat_low, int a3);
    void* ComputeVectorLengthMetric_0(void *a1);
    void Stub10(int a1);
    void Stub11(int a1, int a2, int a3, int a4);
    void Stub12(int a1, int a2, int a3, int a4, int a5);
    void Stub13(int a1);
    void Stub14(int a1, int a2);
    void Stub15(int a1, int a2, int a3, int a4);
    void Stub16(int a1, int a2);
    void Stub3(int a1);
    void Stub4(int a1);
    void Stub5(int a1);
    void Stub6(int a1);
    void Stub7(int a1, int a2);
    void Stub8(int a1);
    void Stub9(int a1);
    void* * ComputeTurretTransform(unsigned int * a1, void * a2, int * a3);
    void* * ProcessLanding(int * a2, unsigned int * a3);
    void* Update2();
};

} // namespace gamemd
