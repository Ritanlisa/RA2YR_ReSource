#include "misc/movement_ext.hpp"

namespace gamemd {

// --- Locomotor ---

// 0x426630
void Locomotor::GetSpeed() {}

// --- MoveFeedback ---

// 0x40b640
void MoveFeedback::ClearBuffer() {}
// 0x40b670
void MoveFeedback::PointerToIndex() {}
// 0x40b6d0
void MoveFeedback::Update() {}
// 0x40b6f0
void MoveFeedback::Show() {}
// 0x40b930
void MoveFeedback::FindItem() {}

// --- MovementClass ---

// 0x4c9530
void MovementClass::CompareAbsCoords() {}
// 0x54bff0
void MovementClass::CalcSpeed() {}

// --- Pathfinding ---

// 0x42c290
void Pathfinding::AStar() {}
// 0x42d170
void Pathfinding::CalcDistance() {}
// 0x42dca0
void Pathfinding::SiftDown() {}
// 0x583180
void Pathfinding::CrossBridge() {}
// 0x5833f0
void Pathfinding::SelectRegionPath() {}

// --- PathfindingClass ---

// 0x4ffb20
void PathfindingClass::FindPath() {}

} // namespace gamemd
