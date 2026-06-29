# Type Inference Masking Test Results

**Date**: auto-generated  |  **Sample size**: 100

## Overview

| Metric | Value |
|---|---|
| Total sampled | 100 |
| Matched (correct) | 8 (8.0%) |
| Mismatched (wrong type) | 0 (0.0%) |
| Not found (type lost) | 92 (92.0%) |
| Confidence changed (correct type, different tier) | 0 |
| **Overall accuracy** | **8.0%** |

## Accuracy by Confidence Tier

| Tier | Total | Matched | Mismatched | Not Found | Accuracy |
|---|---|---|---|---|---|
| ANCHORED | 100 | 8 | 0 | 92 | 8.0% |

## Masked Engine Output Summary

- Total entries: 3329
- Confidence distribution: {'ANCHORED': 2459, 'INFERRED': 717, 'CHAIN_PROP': 151, 'DIRECT_PROP': 2}

## Anchor Removal Statistics

- Total anchor entries removed: 98
- From member_types.json: 98
- From global_types.json: 0
- Variables affected: 98

## Mismatch/Not-Found Details (92)

- **0x006F79A0::ecx**
  - Original: `HouseClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0069C6C0::eax**
  - Original: `MPGameModeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0051F800::eax**
  - Original: `InfantryTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x004FEA60::ebx**
  - Original: `BuildingClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x005D70F0::edx**
  - Original: `ScoreStruct` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00522700::eax**
  - Original: `InfantryTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x006EAEE0::edx**
  - Original: `FootClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x004733A0::eax**
  - Original: `GenericNode` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0044F640::eax**
  - Original: `BuildingTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00428B80::eax**
  - Original: `AnimTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00455D50::eax**
  - Original: `BuildingTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0045EC20::eax**
  - Original: `SHPStruct` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00636120::esi**
  - Original: `HouseClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0067A6E0::eax**
  - Original: `UnitTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00529880::ecx**
  - Original: `INILinkNode` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00455980::eax**
  - Original: `BuildingTypeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0069C4A0::edx**
  - Original: `MPGameModeClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0047FF80::edx**
  - Original: `TagClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x00423AC0::ecx**
  - Original: `TechnoClass` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**
- **0x0040E270::edx**
  - Original: `GenericNode` (ANCHORED)
  - Masked:   `NOT_FOUND` (NOT_FOUND)
  - Status: **NOT_FOUND**

... and 72 more

## Conclusion

❌ **FAIL**: Overall accuracy 8.0% is below 85%. The propagation is not recovering types reliably after anchor removal.
