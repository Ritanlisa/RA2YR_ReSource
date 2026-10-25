// X134 W2c: TechnoClass slot placeholder definitions.

// Split out of techno.cpp: that TU has a pre-existing malformed function header

// (line ~1313 `int TechnoClass::ClearScriptPlanningData() { return 0;`) whose

// parser-error state broke qualification of the appended defs (C2653 cascade).

#include "object/techno.hpp"

#include "object/globals_object.hpp"



namespace ra2 {

namespace game {



// ============================================================================

// X134: slot placeholder definitions (inherited-range overrides + own inserts

// without existing translations; bodies pending IDA-faithful translation)

// ============================================================================



// --- inherited-range overrides ---

HRESULT __stdcall TechnoClass::Load(IStream* stream) {  (void)stream; return 0;  }// slot 5 = 0x70BF50

HRESULT __stdcall TechnoClass::Save(IStream* stream, int clear_dirty) {  (void)stream; (void)clear_dirty; return 0;  }// slot 6 = 0x70C250

int TechnoClass::PerFrameUpdate() {  return 0;  }// slot 9 = 0x6F3F40

int TechnoClass::Unlink(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 10 = 0x7077C0

int TechnoClass::ProcessPower() {  return 0;  }// slot 13 = 0x70C270 (arity divergence: impl reads 1 arg; I525)

int TechnoClass::computeDistanceSquared() {  return 0;  }// slot 14 = 0x6F9DB0

int TechnoClass::COMStub_Return0_15() {  return 0;  }// slot 15 = 0x6F9DC0

int TechnoClass::DetectCloaked() {  return 0;  }// slot 23 = 0x6F9E50

int TechnoClass::ResetPointerIfMatch(int a1) {  (void)a1; return 0;  }// slot 24 = 0x710410

bool TechnoClass::COMStub_Return0_25() {  return false;  }// slot 25 = 0x6F32D0

int TechnoClass::COMStub_26(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 26 = 0x703860

int TechnoClass::COMStub_28(int a1, int a2, int a3) {  (void)a1; (void)a2; (void)a3; return 0;  }// slot 28 = 0x700600

int TechnoClass::COMStub_29(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 29 = 0x6FFEC0

int TechnoClass::COMStub_Return0_33() {  return 0;  }// slot 33 = 0x6F3270

int TechnoClass::COMStub_Ret2147483647_35() {  return (int)0x80000001;  }// slot 35 = 0x708B30

bool TechnoClass::COMStub_Return0_37() {  return false;  }// slot 37 = 0x701140

bool TechnoClass::COMStub_Return0_39() {  return false;  }// slot 39 = 0x7010D0

bool TechnoClass::COMStub_Return0_40() {  return false;  }// slot 40 = 0x700C40

int TechnoClass::GetDrawPosition(int a1, int a2, int a3, int a4, int a5) {  (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; return 0;  }// slot 44 = 0x6F3AD0

bool TechnoClass::COMStub_Return0_49() {  return false;  }// slot 49 = 0x41C010 (semantic: IsDisguised)

int TechnoClass::COMStub_50(int a1) {  (void)a1; return 0;  }// slot 50 = 0x41C020

AbstractClass** TechnoClass::Undeploy() {  return 0;  }// slot 53 = 0x6F6AC0

AbstractClass** TechnoClass::Deploy(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 54 = 0x6F6CA0

int TechnoClass::COMStub_Return0_56(int a1) {  (void)a1; return 0;  }// slot 56 = 0x702D40

int TechnoClass::COMStub_Return0_57(int a1) {  (void)a1; return 0;  }// slot 57 = 0x703230

int TechnoClass::COMStub_Return0_63() {  return 0;  }// slot 63 = 0x703850

int TechnoClass::COMStub_64(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 64 = 0x7099D0

int TechnoClass::COMStub_Return0_67(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 67 = 0x6F60D0

int TechnoClass::COMStub_Return0_68(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 68 = 0x6F5190 (semantic: DrawHealthBar)

int TechnoClass::COMStub_Return0_71() {  return 0;  }// slot 71 = 0x6F4A40

int TechnoClass::COMStub_Return0_72(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 72 = 0x70ADC0

int TechnoClass::UpdateProductionDisplay(int a1) {  (void)a1; return 0;  }// slot 73 = 0x6F4A70

int TechnoClass::COMStub_79(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 79 = 0x6FC030

int TechnoClass::COMStub_Return0_82(int a1) {  (void)a1; return 0;  }// slot 82 = 0x6F9DD0

int TechnoClass::HandleSelection() {  return 0;  }// slot 83 = 0x6FBFA0

int TechnoClass::COMStub_Return0_85(int a1, int a2, int a3) {  (void)a1; (void)a2; (void)a3; return 0;  }// slot 85 = 0x70E2B0

int TechnoClass::COMStub_Return0_86() {  return 0;  }// slot 86 = 0x70E340

int TechnoClass::COMStub_Return0_87(int a1) {  (void)a1; return 0;  }// slot 87 = 0x70E300

bool TechnoClass::COMStub_Return0_88() {  return false;  }// slot 88 = 0x41BF40

int TechnoClass::COMStub_89(int a1, int a2) {  (void)a1; (void)a2; return 0;  }// slot 89 = 0x6F7970

int TechnoClass::COMStub_90(int a1) {  (void)a1; return 0;  }// slot 90 = 0x7012C0

int TechnoClass::CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {  (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; return 0;  }// slot 91 = 0x701900

int TechnoClass::COMStub_Return0_92() {  return 0;  }// slot 92 = 0x710460

int TechnoClass::COMStub_Return0_96() {  return 0;  }// slot 96 = 0x707DD0

int TechnoClass::COMStub_Return0_99(int a1) {  (void)a1; return 0;  }// slot 99 = 0x6F5090

int TechnoClass::ProcessInputKey(int a1, int a2, int a3) {  (void)a1; (void)a2; (void)a3; return 0;  }// slot 101 = 0x6F4AB0

int TechnoClass::IsNotNull(int a1) {  (void)a1; return 0;  }// slot 102 = 0x6F4960

bool TechnoClass::COMStub_Return0_117() {  return false;  }// slot 117 = 0x70C5B0

bool TechnoClass::COMStub_Return0_118() {  return false;  }// slot 118 = 0x70C5C0

bool TechnoClass::COMStub_Return0_119() {  return false;  }// slot 119 = 0x70C5D0

int TechnoClass::getCoordCenter2() {  return 0;  }// slot 120 = 0x70C5F0

int TechnoClass::COMStub_Return0_121() {  return 0;  }// slot 121 = 0x705D70

int TechnoClass::COMStub_125(int a1, int a2, int a3) {  (void)a1; (void)a2; (void)a3; return 0;  }// slot 125 = 0x7013A0

int TechnoClass::COMStub_126() {  return 0;  }// slot 126 = 0x7013E0



// --- demoted pure phantoms (defs required once non-virtual) ---

void TechnoClass::Destroyed(ObjectClass* killer) { (void)killer; }  // 0x459E80-family: per-class impls

void TechnoClass::onBuildingPlacement(uint32_t a, uint32_t b) { (void)a; (void)b; }  // pending translation



// --- own inserts without existing defs ---

int TechnoClass::StubReturnFalse_161() {  return 0;  }// slot 161 = 0x41BEE0

int TechnoClass::CheckCellPassability() {  return 0;  }// slot 162 = 0x70C5A0

int TechnoClass::StubReturnFalse_164() {  return 0;  }// slot 164 = 0x459D80

int TechnoClass::IsInvisible() {  return 0;  }// slot 166 = 0x6F9E10

int TechnoClass::StubReturnFalse2_181() {  return 0;  }// slot 181 = 0x41BF00

int TechnoClass::StubReturnFalse3_182() {  return 0;  }// slot 182 = 0x41BF10

int TechnoClass::StubReturnFalse4_183() {  return 0;  }// slot 183 = 0x41BF20

int TechnoClass::StubReturnTrue3() {  return 1;  }// slot 184 = 0x70D980

int TechnoClass::MissionStubReturnZero5() {  return 0;  }// slot 188 = 0x459DA0

int TechnoClass::ClearLimpetCheck() {  return 0;  }// slot 189 = 0x459DB0

int TechnoClass::COMStub_Return0_190() {  return 0;  }// slot 190 = 0x459DC0

int TechnoClass::StubReturnFalse2_200() {  return 0;  }// slot 200 = 0x459DD0

int TechnoClass::vt_entry_1FC() { return 0; }// slot 204 = 0x41BF30

int TechnoClass::COMStub_Return0_205() {  return 0;  }// slot 205 = 0x459DE0

int TechnoClass::FindBridgeCell() { return 0; }// slot 206 = 0x70F8F0

int TechnoClass::StubReturnFalse3_207() { return 0; }// slot 207 = 0x459DF0

int TechnoClass::StubReturnFalse4_208() { return 0; }// slot 208 = 0x459E00

int TechnoClass::StubReturnFalse10() { return 0; }// slot 209 = 0x459E10

int TechnoClass::StubReturnFalse11() { return 0; }// slot 210 = 0x459E20

int TechnoClass::StubReturnFalse12() { return 0; }// slot 211 = 0x459E30

int TechnoClass::StubReturnFalse11_212() {  return 0;  }// slot 212 = 0x701190

int TechnoClass::RecordEvent() { return 0; }// slot 221 = 0x6FFE00

int TechnoClass::ExecuteMissionCmd() { return 0; }// slot 222 = 0x6FFBE0

int TechnoClass::StubReturnFalse13() { return 0; }// slot 224 = 0x459E40

int TechnoClass::StubReturnFalse5() { return 0; }// slot 225 = 0x41BF80

int TechnoClass::StubReturnFalse6() { return 0; }// slot 226 = 0x41BF90

int TechnoClass::OnCellPlacementComplete() { return 0; }// slot 229 = 0x710670

int TechnoClass::vt_entry_68() { return 0; }// slot 238 = 0x4C9150 (shared Return0)

int TechnoClass::ReadINI(int a1, int a2, int a3) {  (void)a1; (void)a2; (void)a3; return 0;  }// slot 240 = 0x6FC0B0

int TechnoClass::StubReturnFalse14() { return 0; }// slot 247 = 0x459E50

int TechnoClass::CheckTypeFlag1681() { return 0; }// slot 249 = 0x70DD70

int TechnoClass::vt_entry_3E8() {  return 1;  }// slot 250 = 0x70DD90

int TechnoClass::CheckTypeFlag1681_2() { return 0; }// slot 251 = 0x70DDA0

int TechnoClass::UpdatePowered() {  return 0;  }// slot 253 = 0x70E1A0

int TechnoClass::SelectVocOrSfx(int a1) {  (void)a1; return 0;  }// slot 254 = 0x70E140

bool TechnoClass::ProcessFrame() { return false; }// slot 255 = 0x41BFA0

int TechnoClass::StubReturnFalse7() {  return 0;  }// slot 256 = 0x41BFB0

int TechnoClass::StubReturnFalse8() {  return 0;  }// slot 257 = 0x41BFC0

int TechnoClass::StubReturnFalse9() {  return 0;  }// slot 258 = 0x41BFD0

int TechnoClass::HandleSellOrRepair() { return 0; }// slot 259 = 0x701410

int TechnoClass::UpdateLocomotion(int a1, int a2) { return 0; }// slot 260 = 0x6FB740

int TechnoClass::RevealShroud() { return 0; }// slot 261 = 0x6FB170

int TechnoClass::RemoveShroud() { return 0; }// slot 262 = 0x6FB470

int TechnoClass::vt_entry_428() { return 0; }// slot 266 = 0x41BFE0

int TechnoClass::GetBridgeAwareCoords() {  return 0;  }// slot 267 = 0x705CA0

int TechnoClass::vt_entry_434() { return 0; }// slot 269 = 0x41BFF0

int TechnoClass::COMStub_Return0_270() { return 0; }// slot 270 = 0x459E60

int TechnoClass::vt_entry_448() { return 0; }// slot 274 = 0x6F60C0

int TechnoClass::DrawHealthBar() {  return 0;  }// slot 275 = 0x6F64A0

int TechnoClass::StubReturnTrue2() {  return 1;  }// slot 282 = 0x41C000

int TechnoClass::CheckAction() {  return 0;  }// slot 284 = 0x41C030

int TechnoClass::StubReturnFalse10_286() {  return 0;  }// slot 286 = 0x41C040

int TechnoClass::COMStub_Return0_287() { return 0; }// slot 287 = 0x709A20

int TechnoClass::vt_entry_68_292() {  return 0;  }// slot 292 = 0x4C9150 (shared Return0)

int TechnoClass::StubReturnFalse5_299() { return 0; }// slot 299 = 0x70F020

int TechnoClass::StubReturnFalse6_300() { return 0; }// slot 300 = 0x70F030

int TechnoClass::checkMovementRestrictions() { return 0; }// slot 301 = 0x70F040

int TechnoClass::GetTypeVt41() {  return 0;  }// slot 304 = 0x70F090

int TechnoClass::StubReturnFalse7_305() {  return 0;  }// slot 305 = 0x70F0E0

int TechnoClass::StubReturnFalse8_306() {  return 0;  }// slot 306 = 0x70F0F0

int TechnoClass::StubReturnFalse9_308() {  return 0;  }// slot 308 = 0x70F110





} // namespace game

} // namespace ra2
