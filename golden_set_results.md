# T17: Golden Set Verification — Type Inference Engine

**Date**: 2026-06-29
**Engine**: `type_map.json` (1,241 entries) → `suggested_types.json` (323 ANCHORED suggestions)
**Coverage**: 103/244 (42.2%) suggested addresses map to known named functions

## Methodology

1. Extracted 12 functions with known correct type signatures from IDA-verified C++ translations in `src/structure/building.cpp`, `src/structure/techno.cpp`, etc.
2. Matched function addresses against `suggested_types.json` entries
3. Compared engine-inferred `this` pointer type versus known ground truth
4. Computed match rate overall and per confidence tier

## Golden Set Results

| # | Function | Addr | Expected `this` | Engine Slots | `this` Match |
|---|----------|------|-----------------|-------------|-------------|
| 1 | `BuildingClass::TogglePrimaryFactory` | 0x447E90 | `BuildingClass*` | `ret=BuildingTypeClass*` | ❌ MISMATCH |
| 2 | `BuildingClass::GetCursorAction` | 0x449440 | `BuildingClass*` | `ret=BuildingTypeClass*` | ❌ MISMATCH |
| 3 | `BuildingClass::GetAmmoCountScaled` | 0x44D700 | `BuildingClass*` | `esi=BuildingTypeClass*` | ❌ MISMATCH |
| 4 | `BuildingClass::GetFactoryPosition` | 0x44F640 | `BuildingClass*` | `ret=BuildingTypeClass*` | ❌ MISMATCH |
| 5 | `BuildingClass::GetCrewCount` | 0x451330 | `BuildingClass*` | `this=BuildingTypeClass*` | ❌ MISMATCH |
| 6 | `BuildingClass::SelectVocOrSfx` | 0x4526F0 | `BuildingClass*` | `ret=BuildingTypeClass*` | ❌ MISMATCH |
| 7 | `BuildingClass::ScanCircleForTiberium` | 0x455980 | `BuildingClass*` | `ret=BuildingTypeClass*` | ❌ MISMATCH |
| 8 | `BuildingClass::CheckMissionGuard` | 0x458DD0 | `BuildingClass*` | `ret=BuildingTypeClass*` | ❌ MISMATCH |
| 9 | `TechnoClass::FindClosestPlacementCell` | 0x41A160 | `TechnoClass*` | `arg0=TechnoClass*` | ❌ MISMATCH |
| 10 | `TechnoClass::CreateUnit` | 0x423AC0 | `TechnoClass*` | `arg0=SpawnManagerClass*, this=TechnoClass*` | ✅ MATCH |
| 11 | `InfantryClass::HandleCursorOverCell` | 0x51F800 | `InfantryClass*` | `ret=InfantryTypeClass*, this=InfantryTypeClass*` | ❌ MISMATCH |
| 12 | `HouseClass::Add` | 0x575B0 | `HouseClass*` | *(not in output)* | ❌ NOT FOUND |

## Summary

| Metric | Value |
|--------|-------|
| **Total tested** | 12 |
| **`this` matches** | 1 (8.3%) |
| **`this` mismatches** | 10 (83.3%) |
| **Not in engine output** | 1 (8.3%) |

### By Confidence Tier

| Tier | Tested | Matches | Rate |
|------|--------|---------|------|
| ANCHORED | 11 | 1 | 9.1% |
| N/A (not in output) | 1 | 0 | 0% |

## Analysis

### Correct Inference (1 case)

**`TechnoClass::CreateUnit`** (0x423AC0): Engine correctly infers `this=TechnoClass*`. Also detects `arg0=SpawnManagerClass*` — the spawn manager parameter is correctly typed.

### Systematic Pattern: Type* vs Class* Confusion

The engine consistently infers `BuildingTypeClass*` or `InfantryTypeClass*` for member functions of `BuildingClass`/`InfantryClass` that access `Type` objects:

| Function | Expected | Engine Inferred |
|----------|----------|----------------|
| `GetCrewCount` | `this=BuildingClass*` | `this=BuildingTypeClass*` |
| `TogglePrimaryFactory` | `this=BuildingClass*` | `ret=BuildingTypeClass*` |
| `GetFactoryPosition` | `this=BuildingClass*` | `ret=BuildingTypeClass*` |
| `HandleCursorOverCell` | `this=InfantryClass*` | `this=InfantryTypeClass*` |

**Root cause**: These functions access `this->Type` (the `BuildingTypeClass*`/`InfantryTypeClass*` member), and the Steensgaard union-find algorithm merges the `this` pointer with the `Type` member access because both flow through CALL/RETURN/ASSIGN edges without distinguishing member offset access paths. This is a known limitation: Steensgaard is field-insensitive — it merges all fields of an object into one equivalence class.

### Missing Functions (1 case)

- **`HouseClass::Add`** (0x575B0): The address is not in `suggested_types.json` at all. The function likely has no anchored type constraints in `type_map.json`.

## Conclusion

**Match rate for `this` pointer type: 1/12 (8.3%)** on ANCHORED confidence tier.

The engine correctly identifies `TechnoClass*` as `this` for one function, but systematically confuses `Class*` and `TypeClass*` variants for functions that access their `Type` member. This is a fundamental limitation of Steensgaard's field-insensitive analysis — it cannot distinguish `this->Type` from `this` itself when both flow through assignment edges.
