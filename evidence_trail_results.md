# T18: Evidence Trail Verification — Type Inference Engine

**Date**: 2026-06-29
**Engine**: `type_map.json` (1,241 entries, 696 equivalence classes, 242 inter-class edges)
**Focus**: CHAIN_PROP confidence tier (257 entries, all TOP/contradiction)

## Methodology

1. Selected 10 random CHAIN_PROP entries from `type_map.json` (seed=42)
2. For each, traced evidence chains through the constraint graph (raw_constraints.json, 97,671 edges)
3. BFS from each entry's equivalence class root, following reverse constraint edges
4. Verified: (a) presence of ANCHORED entries in same eq class, (b) path existence to any anchored eq class
5. Checked constraint edge validity: CALL, ASSIGN, RETURN types connecting eq classes

## Key Statistics

| Metric | Value |
|--------|-------|
| Total `type_map.json` entries | 1,241 |
| Equivalence classes (eq_roots) | 696 |
| Classes with inter-class edges | 127 (18.3%) |
| Total inter-class constraint edges | 242 |

### Confidence Tier Breakdown

| Tier | Entries | Concrete Types | TOP (Contradiction) | TOP Rate |
|------|---------|---------------|---------------------|----------|
| ANCHORED | 389 | 323 | 66 | 17.0% |
| DIRECT_PROP | 4 | 0 | 4 | 100% |
| CHAIN_PROP | 257 | **0** | 257 | **100%** |
| INFERRED | 591 | **0** | 591 | **100%** |
| **Total** | **1,241** | **323** | **918** | **74.0%** |

**Only ANCHORED tier produces usable types.** All three propagation tiers (DIRECT_PROP, CHAIN_PROP, INFERRED) are 100% TOP — the constraint graph propagates contradictions, not types.

## Trail Results

| # | Variable (addr::reg) | Function | Type | Eq Class | Anchors In-Class | Path to Anchor | Verdict |
|---|---------------------|----------|------|----------|------------------|----------------|---------|
| 1 | `0x541820::ecx` | `Network::ReceiveLoop` | TOP | 1 node | 0 | No | ISOLATED |
| 2 | `0x44E8F0::eax` | `BuildingClass::OnObjectExpired` | TOP | 1 node | 0 | No | ISOLATED |
| 3 | `Array::GetElementAt.this.member(0x38)` | *(sub_*)* | TOP | 2 nodes | 0 | No | ISOLATED |
| 4 | `0x75AEC0::ebx` | `VoxelAnim::Draw` | TOP | 1 node | 0 | **Yes** (1 hop) | PATH_EXISTS |
| 5 | `0x73B470::ecx` | `TechnoClass::DrawVoxel` | TOP | 2 nodes | 0 | No | ISOLATED |
| 6 | `0x618D40::eax` | `Options::DialogProc` | TOP | 13 nodes | 0 | No | ISOLATED |
| 7 | `0x529350::esi` | `INIClass::GetCSFString` | TOP | 1 node | 0 | No | ISOLATED |
| 8 | `0x526B10::esi` | `HashTableSection::FindSection` | TOP | 1 node | 0 | No | ISOLATED |
| 9 | `WalkLocomotion::TransformCoords.this.member(0x58)` | *(sub_*)* | TOP | 24 nodes | 0 | No | ISOLATED |
| 10 | `0x49B660::edx` | `MPCooperative::processTurn` | TOP | 1 node | 0 | No | ISOLATED |

## Detailed Trail: The Only Connected Path

**Trail 4: `VoxelAnim::Draw.ebx`** (eq_root=21089)
- **Outgoing edges**: 3 (all CALL type)
- **Incoming edges**: 1
- **Path to anchor**: eq_root 33705 --[CALL]--> eq_root 21089
- **Anchored target**: `VoxelAnim::Draw.eax` (TOP), `VoxelAnim::Draw.ecx` (TOP)
- **Result**: Path exists but the "anchor" is itself TOP — propagation is structurally valid but both ends are contradictory, so no useful type is resolved.

This is the **only** CHAIN_PROP entry among the 10 samples with any path to another eq_class. The path traverses a CALL constraint edge, which is a valid propagation mechanism in the type lattice. However, both source and target are TOP, meaning the lattice meet operation produced no usable type.

## Constraint Graph Topology

```
696 eq_classes total
├── 127 connected classes (18.3%) with 242 edges
│   ├── CALL edges: primary propagation mechanism
│   ├── ASSIGN edges: within-function variable merging
│   └── RETURN edges: return value propagation
└── 569 isolated classes (81.7%) with 0 edges
```

The constraint graph is **sparse and fragmented**. The majority of equivalence classes (81.7%) are isolated singletons with no inter-class edges. Among connected classes, paths rarely reach anchored nodes.

## Edge Type Distribution (sampled from connected classes)

| Constraint Type | Role in Propagation |
|----------------|---------------------|
| CALL | Connects caller eq_root → callee eq_root (parameter/return flow) |
| ASSIGN | Merges two variables within same function into one eq class |
| RETURN | Propagates return type from callee to caller's return site |

All observed edges use valid constraint types. No "broken" edges (invalid types or dangling references) were found.

## Summary

| Metric | Value |
|--------|-------|
| **Entries traced** | 10 |
| **With ANCHOR in same class** | 0/10 |
| **With path to anchor** | 1/10 (10%) |
| **Isolated (no path to any anchor)** | 9/10 (90%) |
| **Contradictions (TOP)** | 10/10 (100%) |
| **Valid edges (no broken)** | 10/10 (100%) |

**Pass rate for having valid anchor connection**: 1/10 (10%)

## Analysis

### Why Are All CHAIN_PROP Entries TOP?

1. **Anchor scarcity**: Only 389/1,241 entries (31.3%) are ANCHORED. The remaining 852 entries must propagate from these anchors, but most eq_classes are disconnected from any anchor.

2. **Field-insensitive merging**: Steensgaard union-find merges all fields of an object (e.g., `this->Type` and `this->Owner`) into one equivalence class. When these fields have incompatible types (e.g., `BuildingTypeClass*` meet `HouseClass*` → TOP), the entire class becomes TOP.

3. **Sparse constraint graph**: 81.7% of eq_classes have zero inter-class edges. Propagation cannot reach them from any anchor.

4. **Cascade effect**: Once an eq_class becomes TOP, all neighbors that meet with it also become TOP. With 74% of entries already TOP, further propagation only spreads contradiction.

### Structural Integrity

All constraint edges connecting eq_classes use valid types (CALL, ASSIGN, RETURN). No broken edges, dangling references, or malformed constraint entries were observed. The propagation infrastructure itself is structurally sound — the issue is insufficient anchor coverage and excessive field-insensitive merging.

## Conclusion

The evidence trail pass rate is **1/10 (10%)** for anchor connectivity. All 257 CHAIN_PROP entries, all 591 INFERRED entries, and all 4 DIRECT_PROP entries resolve to TOP (contradiction). **The propagation pipeline is fundamentally non-functional** — only ANCHORED tier (direct lookups) produces usable types.

### Root Causes

1. **Field-insensitive Steensgaard**: Merges all fields of an object (e.g., `this->Type`, `this->Owner`) into one equivalence class. Incompatible field types produce TOP.

2. **Sparse constraint graph**: 81.7% of eq_classes have zero inter-class edges. Propagation cannot reach them from any anchor.

3. **Cascade effect**: Once an eq_class becomes TOP, all neighbors that meet with it also become TOP. With 74% already TOP, further propagation only spreads contradiction.

4. **Insufficient anchor coverage**: Only 323/19,067 functions (1.7%) have anchored type entries. The propagation graph cannot bridge the gap.

### Structural Integrity

All constraint edges connecting eq_classes use valid types (CALL, ASSIGN, RETURN). No broken edges, dangling references, or malformed constraint entries were observed. The propagation infrastructure itself is structurally sound — the issue is excessive field-insensitive merging and sparse anchor coverage.

### Recommendation

For practical type inference, the engine should prioritize:
- **Field-sensitive analysis** (e.g., Andersen-style) to avoid merging incompatible object fields
- **Anchor expansion** — more member_types.json and global_types.json entries
- **Direct lookup fallback** — when propagation fails, return the ANCHORED type lookup directly (which already works for 323 entries)
