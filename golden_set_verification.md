# Golden Set Verification — Type Inference Engine

**Generated**: 2026-06-29 18:28
**Engine**: `type_map.json` (1241 entries)
**Golden set**: 12 functions from `golden_set_results.md`

## Summary

| Metric | Value |
|--------|-------|
| **Total tested** | 12 |
| **`this` matches** | 1 (8.3%) |
| **`this` mismatches (wrong type)** | 9 (75.0%) |
| **`this` partial (right type, wrong register)** | 1 (8.3%) |
| **Not in engine output** | 1 (8.3%) |

### By Confidence Tier

| Tier | Tested | Matches | Mismatches | Partial | Not Found | Rate |
|------|--------|---------|------------|---------|-----------|------|
| ANCHORED | 11 | 1 | 9 | 1 | 0 | 18.2% |
| NOT_FOUND | 1 | 0 | 0 | 0 | 1 | 0.0% |

## Detailed Results

| # | Function | Addr | Expected `this` | Engine Result | Status |
|---|----------|------|-----------------|----------------|--------|
| 1 | `BuildingClass::TogglePrimaryFactory` | 0x00447E90 | `BuildingClass*` | `no register has BuildingClass*; found: eax=BuildingTypeClass*` | ❌ MISMATCH |
| 2 | `BuildingClass::GetCursorAction` | 0x00449440 | `BuildingClass*` | `no register has BuildingClass*; found: eax=BuildingTypeClass*` | ❌ MISMATCH |
| 3 | `BuildingClass::GetAmmoCountScaled` | 0x0044D700 | `BuildingClass*` | `no register has BuildingClass*; found: esi=BuildingTypeClass*` | ❌ MISMATCH |
| 4 | `BuildingClass::GetFactoryPosition` | 0x0044F640 | `BuildingClass*` | `no register has BuildingClass*; found: eax=BuildingTypeClass*` | ❌ MISMATCH |
| 5 | `BuildingClass::GetCrewCount` | 0x00451330 | `BuildingClass*` | `ecx=BuildingTypeClass* (expected BuildingClass*)` | ❌ MISMATCH |
| 6 | `BuildingClass::SelectVocOrSfx` | 0x004526F0 | `BuildingClass*` | `no register has BuildingClass*; found: eax=BuildingTypeClass*` | ❌ MISMATCH |
| 7 | `BuildingClass::ScanCircleForTiberium` | 0x00455980 | `BuildingClass*` | `no register has BuildingClass*; found: eax=BuildingTypeClass*` | ❌ MISMATCH |
| 8 | `BuildingClass::CheckMissionGuard` | 0x00458DD0 | `BuildingClass*` | `no register has BuildingClass*; found: eax=BuildingTypeClass*` | ❌ MISMATCH |
| 9 | `TechnoClass::FindClosestPlacementCell` | 0x0041A160 | `TechnoClass*` | `edx=TechnoClass* (correct type but not in ecx)` | ⚠️ PARTIAL |
| 10 | `TechnoClass::CreateUnit` | 0x00423AC0 | `TechnoClass*` | `ecx=TechnoClass*` | ✅ MATCH |
| 11 | `InfantryClass::HandleCursorOverCell` | 0x0051F800 | `InfantryClass*` | `ecx=InfantryTypeClass* (expected InfantryClass*)` | ❌ MISMATCH |
| 12 | `HouseClass::Add` | 0x000575B0 | `HouseClass*` | `function not in type_map.json` | ❌ NOT FOUND |

## Per-Function Details

### 1. `BuildingClass::TogglePrimaryFactory` (0x00447E90)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: eax=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24968)

### 2. `BuildingClass::GetCursorAction` (0x00449440)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: eax=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24788)

### 3. `BuildingClass::GetAmmoCountScaled` (0x0044D700)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: esi=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `esi` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24781)

### 4. `BuildingClass::GetFactoryPosition` (0x0044F640)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: eax=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24796)

### 5. `BuildingClass::GetCrewCount` (0x00451330)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: ecx=BuildingTypeClass* (expected BuildingClass*)
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `ecx` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24928)

### 6. `BuildingClass::SelectVocOrSfx` (0x004526F0)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: eax=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24833)

### 7. `BuildingClass::ScanCircleForTiberium` (0x00455980)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: eax=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24952)

### 8. `BuildingClass::CheckMissionGuard` (0x00458DD0)

- **Expected `this`**: `BuildingClass*`
- **Status**: MISMATCH
- **Detail**: no register has BuildingClass*; found: eax=BuildingTypeClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `BuildingTypeClass*` (confidence: ANCHORED, eq_root: 24710)

### 9. `TechnoClass::FindClosestPlacementCell` (0x0041A160)

- **Expected `this`**: `TechnoClass*`
- **Status**: PARTIAL
- **Detail**: edx=TechnoClass* (correct type but not in ecx)
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `edx` = `TechnoClass*` (confidence: ANCHORED, eq_root: 30767)

### 10. `TechnoClass::CreateUnit` (0x00423AC0)

- **Expected `this`**: `TechnoClass*`
- **Status**: MATCH
- **Detail**: ecx=TechnoClass*
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `ecx` = `TechnoClass*` (confidence: ANCHORED, eq_root: 30712)
  - `edx` = `SpawnManagerClass*` (confidence: ANCHORED, eq_root: 30713)

### 11. `InfantryClass::HandleCursorOverCell` (0x0051F800)

- **Expected `this`**: `InfantryClass*`
- **Status**: MISMATCH
- **Detail**: ecx=InfantryTypeClass* (expected InfantryClass*)
- **Confidence tier**: ANCHORED
- **All engine entries for this address**:
  - `eax` = `InfantryTypeClass*` (confidence: ANCHORED, eq_root: 27413)
  - `ecx` = `InfantryTypeClass*` (confidence: ANCHORED, eq_root: 27413)

### 12. `HouseClass::Add` (0x000575B0)

- **Expected `this`**: `HouseClass*`
- **Status**: NOT_FOUND
- **Detail**: function not in type_map.json
- **All engine entries for this address**: *(none)*

## Methodology

1. For each golden-set function, look up `0xADDR::ecx` in `type_map.json` (ECX = `this` pointer in MSVC thiscall)
2. Compare engine-inferred type against known ground-truth `this` type
3. Classification:
   - **MATCH**: `ecx` type equals expected `this` type
   - **MISMATCH**: `ecx` exists but has wrong type, or other registers have wrong types
   - **PARTIAL**: correct type found but in non-ecx register
   - **NOT FOUND**: function address not present in `type_map.json`
