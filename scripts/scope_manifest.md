# Scope Manifest — RA2YR ReSource Header Completion

> Generated: 2026-06-17 | Sources: header_classification.json + class_hierarchy_order.json
> In scope: 97 files (PARTIAL + STUB) | Out of scope: 19 files (COMPLETE + UTILITY)
> Total unknown_ fields to resolve: 245 | Total stub methods to implement: 771

## ⚠️ Pre-Requisite: Address Comment Audit

**CRITICAL**: Task 3 discovered that `// 0xADDR` comments in `src/system/map.hpp` are **incorrect**.
For example, `IsVisible@0x4ACAC0` is actually `ProcessVisibilityFlags`. 
This means address comments in other files may also be wrong. 
**Before any Wave begins**, audit and correct all `// 0x` address comments using IDA verification:

| File | Suspect | Action |
|------|---------|--------|
| `src/system/map.hpp` | 59 address comments — at least 1 known wrong | Full IDA cross-reference audit |
| `src/system/scenario.hpp` | 28 address comments | Spot-check top 5 by xref count |
| `src/object/techno.hpp` | 29 address comments | Spot-check top 5 by xref count |
| `src/structure/building.hpp` | 15 address comments | Audit all |
| `src/object/object.hpp` | 11 address comments | Audit all |
| `src/object/foot.hpp` | 8 address comments | Audit all |
| `src/misc/rules.hpp` | 24 address comments | Audit all (COMPLETE file but comments may mislead) |
| `src/network/multiplayer.hpp` | 50 address comments | Spot-check top 5 |
| `src/ui/mouse.hpp` | 10 address comments | Audit all |
| `src/system/tactical.hpp` | 10 address comments | Audit all |
| `src/system/cell.hpp` | 7 address comments | Audit all |
| `src/network/connection.hpp` | 19 address comments | Spot-check top 5 |
| `src/house/house.hpp` | 1 address comment | Verify |

---

## 📋 IN SCOPE (97 files — PARTIAL + STUB)

These files need work: resolve unknown_ fields, replace stubs with real implementations, add address comments.

### `src/core/` (2 files: 2 PARTIAL, 0 STUB, 0 unknown_, 3 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `interfaces.hpp` | PARTIAL | 16 | 0 | 0 | 0 | Wave 1 |
| `memory.hpp` | PARTIAL | 3 | 0 | 3 | 18 | Wave 1 |

### `src/entity/` (12 files: 1 PARTIAL, 11 STUB, 36 unknown_, 59 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `anim.hpp` | STUB | 2 | 4 | 6 | 0 | Wave 4 |
| `bullet.hpp` | STUB | 2 | 8 | 4 | 0 | Wave 4 |
| `overlay.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 4 |
| `particle.hpp` | STUB | 1 | 16 | 6 | 0 | Wave 4 |
| `particle_system.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 4 |
| `smudge.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 4 |
| `terrain.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 4 |
| `tiberium.hpp` | STUB | 2 | 0 | 6 | 0 | Wave 4 |
| `tube.hpp` | STUB | 1 | 7 | 5 | 0 | Wave 4 |
| `voxel.hpp` | PARTIAL | 5 | 0 | 3 | 6 | Wave 4 |
| `voxel_anim.hpp` | STUB | 2 | 0 | 4 | 0 | Wave 4 |
| `wave.hpp` | STUB | 1 | 1 | 5 | 0 | Wave 4 |

### `src/house/` (3 files: 1 PARTIAL, 2 STUB, 8 unknown_, 16 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `house.hpp` | PARTIAL | 12 | 8 | 6 | 4 | Wave 12 |
| `house_type.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 12 |
| `side.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 12 |

### `src/misc/` (3 files: 0 PARTIAL, 3 STUB, 43 unknown_, 77 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `audio.hpp` | STUB | 5 | 22 | 2 | 0 | Wave 12 |
| `locomotion.hpp` | STUB | 12 | 21 | 71 | 2 | Wave 12 |
| `super_weapon.hpp` | STUB | 6 | 0 | 4 | 0 | Wave 12 |

### `src/network/` (4 files: 3 PARTIAL, 1 STUB, 0 unknown_, 57 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `connection.hpp` | PARTIAL | 5 | 0 | 50 | 7 | Wave 12 |
| `multiplayer.hpp` | PARTIAL | 7 | 0 | 4 | 0 | Wave 12 |
| `session.hpp` | STUB | 5 | 0 | 3 | 0 | Wave 12 |
| `winsock.hpp` | PARTIAL | 3 | 0 | 0 | 0 | Wave 12 |

### `src/object/` (6 files: 4 PARTIAL, 2 STUB, 13 unknown_, 13 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `abstract.hpp` | PARTIAL | 4 | 0 | 4 | 3 | Wave 9 |
| `foot.hpp` | PARTIAL | 2 | 11 | 0 | 0 | Wave 8 |
| `mission.hpp` | STUB | 2 | 0 | 1 | 0 | Wave 8 |
| `object.hpp` | PARTIAL | 2 | 2 | 1 | 4 | Wave 9 |
| `radio.hpp` | STUB | 2 | 0 | 6 | 0 | Wave 8 |
| `techno.hpp` | PARTIAL | 9 | 0 | 1 | 2 | Wave 8 |

### `src/render/` (14 files: 6 PARTIAL, 8 STUB, 18 unknown_, 85 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `bink_control.hpp` | STUB | 1 | 0 | 4 | 0 | Wave 11 |
| `bounce.hpp` | PARTIAL | 2 | 0 | 0 | 0 | Wave 11 |
| `display.hpp` | PARTIAL | 3 | 14 | 0 | 0 | Wave 11 |
| `fog.hpp` | STUB | 1 | 0 | 6 | 0 | Wave 11 |
| `light_source.hpp` | STUB | 2 | 0 | 6 | 0 | Wave 11 |
| `movie.hpp` | PARTIAL | 4 | 0 | 11 | 1 | Wave 11 |
| `palette.hpp` | STUB | 3 | 0 | 2 | 0 | Wave 11 |
| `shp_blitter.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 11 |
| `shp_render.hpp` | STUB | 3 | 0 | 3 | 0 | Wave 11 |
| `shp_struct.hpp` | STUB | 4 | 2 | 7 | 0 | Wave 11 |
| `surface.hpp` | STUB | 4 | 2 | 35 | 2 | Wave 11 |
| `text_render.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 11 |
| `voxel.hpp` | STUB | 5 | 0 | 11 | 0 | Wave 11 |
| `vxl_format.hpp` | PARTIAL | 8 | 0 | 0 | 0 | Wave 11 |

### `src/structure/` (4 files: 1 PARTIAL, 3 STUB, 5 unknown_, 33 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `aircraft.hpp` | STUB | 3 | 1 | 20 | 0 | Wave 7 |
| `building.hpp` | PARTIAL | 2 | 3 | 3 | 0 | Wave 7 |
| `infantry.hpp` | STUB | 1 | 1 | 5 | 0 | Wave 7 |
| `unit.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 7 |

### `src/system/` (16 files: 11 PARTIAL, 5 STUB, 70 unknown_, 52 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `buffer_io_file.hpp` | STUB | 1 | 0 | 1 | 0 | Wave 10 |
| `cc_file.hpp` | PARTIAL | 2 | 0 | 3 | 9 | Wave 10 |
| `cd_drive.hpp` | PARTIAL | 2 | 2 | 0 | 0 | Wave 10 |
| `cd_file.hpp` | STUB | 1 | 0 | 1 | 0 | Wave 10 |
| `cell.hpp` | PARTIAL | 2 | 23 | 10 | 6 | Wave 10 |
| `convert_class.hpp` | STUB | 2 | 0 | 2 | 0 | Wave 10 |
| `factory.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 10 |
| `file_class.hpp` | STUB | 2 | 0 | 18 | 0 | Wave 10 |
| `file_system.hpp` | PARTIAL | 3 | 0 | 3 | 1 | Wave 10 |
| `ini_class.hpp` | PARTIAL | 7 | 1 | 1 | 1 | Wave 10 |
| `map.hpp` | PARTIAL | 8 | 0 | 1 | 0 | Wave 10 |
| `mix_blowfish.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 10 |
| `mix_file.hpp` | PARTIAL | 5 | 0 | 6 | 1 | Wave 10 |
| `radar.hpp` | PARTIAL | 1 | 37 | 0 | 0 | Wave 10 |
| `scenario.hpp` | PARTIAL | 4 | 7 | 0 | 1 | Wave 10 |
| `tactical.hpp` | PARTIAL | 1 | 0 | 1 | 1 | Wave 10 |

### `src/team/` (5 files: 2 PARTIAL, 3 STUB, 16 unknown_, 46 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `campaign.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 12 |
| `script.hpp` | PARTIAL | 3 | 0 | 10 | 3 | Wave 12 |
| `tag.hpp` | STUB | 2 | 0 | 12 | 0 | Wave 12 |
| `team.hpp` | STUB | 1 | 16 | 5 | 0 | Wave 12 |
| `trigger.hpp` | PARTIAL | 2 | 0 | 14 | 5 | Wave 12 |

### `src/type/` (17 files: 1 PARTIAL, 16 STUB, 23 unknown_, 119 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `abstract_type.hpp` | STUB | 2 | 0 | 2 | 0 | Wave 9 |
| `aircraft_type.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 5 |
| `anim_type.hpp` | STUB | 3 | 1 | 3 | 0 | Wave 5 |
| `building_type.hpp` | STUB | 3 | 4 | 11 | 0 | Wave 5 |
| `bullet_type.hpp` | PARTIAL | 1 | 0 | 6 | 1 | Wave 5 |
| `infantry_type.hpp` | STUB | 3 | 0 | 9 | 0 | Wave 5 |
| `object_type.hpp` | STUB | 5 | 0 | 3 | 0 | Wave 8 |
| `overlay_type.hpp` | STUB | 1 | 0 | 6 | 0 | Wave 5 |
| `particle_system_type.hpp` | STUB | 2 | 7 | 5 | 0 | Wave 5 |
| `particle_type.hpp` | STUB | 2 | 9 | 5 | 0 | Wave 5 |
| `smudge_type.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 5 |
| `techno_type.hpp` | STUB | 4 | 1 | 18 | 1 | Wave 8 |
| `terrain_type.hpp` | STUB | 1 | 0 | 7 | 0 | Wave 5 |
| `type_classes.hpp` | STUB | 21 | 0 | 16 | 0 | Wave 9 |
| `unit_type.hpp` | STUB | 1 | 1 | 7 | 0 | Wave 5 |
| `warhead_type.hpp` | STUB | 2 | 0 | 6 | 0 | Wave 5 |
| `weapon_type.hpp` | STUB | 1 | 0 | 5 | 0 | Wave 5 |

### `src/ui/` (10 files: 8 PARTIAL, 2 STUB, 11 unknown_, 106 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `command_class.hpp` | STUB | 19 | 0 | 93 | 0 | Wave 12 |
| `g_screen.hpp` | PARTIAL | 1 | 1 | 0 | 0 | Wave 12 |
| `gadget.hpp` | PARTIAL | 6 | 0 | 7 | 1 | Wave 12 |
| `menu_screen.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 12 |
| `message_list.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 12 |
| `mouse.hpp` | PARTIAL | 5 | 0 | 2 | 0 | Wave 12 |
| `power.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 12 |
| `sidebar.hpp` | STUB | 3 | 10 | 4 | 0 | Wave 12 |
| `tab.hpp` | PARTIAL | 2 | 0 | 0 | 0 | Wave 12 |
| `tool_tip.hpp` | PARTIAL | 1 | 0 | 0 | 0 | Wave 12 |

### `src/wdt/` (1 files: 1 PARTIAL, 0 STUB, 0 unknown_, 6 stubs)

| File | Status | Classes | unknown_ | Stubs | Impl | Wave |
|------|--------|---------|----------|-------|------|------|
| `wdt.hpp` | PARTIAL | 9 | 0 | 6 | 24 | Wave 13 |

---

## ✅ OUT OF SCOPE (19 files — COMPLETE + UTILITY)

These files need no further work for the header completion phase.

### COMPLETE (4 files) — All members named, no stubs, all implementations present

| File | Classes | Reason |
|------|---------|--------|
| `game_loop.hpp` | 2 | All members named, no stubs, 3 inline implementations |
| `rules.hpp` | 3 | All members named, no stubs, 24 address comments |
| `blitter.hpp` | 4 | All members named, no stubs, 57 inline implementations |
| `xcc_names.hpp` | 1 | All members named, no stubs, 2 inline implementations |

### UTILITY (15 files) — No game class definitions (enums, infrastructure, configs)

| File | Type | Reason |
|------|------|--------|
| `cmdline.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `com_defs.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `coordinate.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `ddraw_init.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `enums.hpp` | enums | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `init_stubs.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `logging.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `math.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `reverse_marker.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `spawn_config.hpp` | config | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `target.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `vector.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `fundamentals.hpp` | infrastructure | Explicitly excluded as UTILITY (no class definitions or infrastructure file) |
| `font_render.hpp` | infrastructure | No class definitions found |
| `dialog.hpp` | infrastructure | No class definitions found |

---

## 🆕 NEW HEADERS NEEDED (12 classes)

These classes exist in the IDA database / YRpp but have **no corresponding header file** in the project. Must be created before Wave 9 (base classes) since AbstractClass depends on some of them.

| # | Class | Likely Directory | Priority | Notes |
|---|-------|-----------------|----------|-------|
| 1 | `RadSiteClass` | TBD | P1 | Radar site effect — likely in src/render/ or src/entity/ |
| 2 | `EBolt` | TBD | P1 | Electric bolt effect — likely in src/entity/ |
| 3 | `BuildingLightClass` | TBD | P1 | Building light/illumination — likely in src/render/ |
| 4 | `WaypointClass` | TBD | P1 | Map waypoint marker — likely in src/system/ |
| 5 | `LayerClass` | TBD | P1 | Map rendering layer — likely in src/system/ or src/render/ |
| 6 | `Checksummer` | TBD | P1 | Checksum utility — likely in src/core/ or src/system/ |
| 7 | `RepeatableTimerStruct` | TBD | P1 | Timer utility struct — likely in src/core/ |
| 8 | `ScoreStruct` | TBD | P1 | Score tracking struct — likely in src/ui/ or src/misc/ |
| 9 | `BaseClass` | TBD | P1 | Base node for linked lists — likely in src/core/ |
| 10 | `BaseNodeClass` | TBD | P1 | Node for linked lists — likely in src/core/ |
| 11 | `DropshipStruct` | TBD | P1 | Dropship animation data — likely in src/entity/ |
| 12 | `NodeNameType` | TBD | P1 | INI node name type — likely in src/system/ or src/type/ |

**Action**: Use IDA to determine each class's vtable/member layout, then create stub headers in the appropriate directory. Add to Wave 4-6 as appropriate.

---

## 🌊 Task Wave Assignments

Work order: leaf classes first (no dependents), then mid-hierarchy, then root classes. Independent hierarchies can be parallelized within a wave.

### Wave 1: Foundation (core types, enums, math)
**2 files** (2 PARTIAL, 0 STUB) — 0 unknown_ fields, 3 stubs

**`src/core/`**:
- `interfaces.hpp` — PARTIAL, 16 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `memory.hpp` — PARTIAL, 3 classes, 0 unknown_, 3 stubs, 18 impl — 🟢 LOW


### Wave 4: Entity Instances (BulletClass, AnimClass, Particle, etc.)
**12 files** (1 PARTIAL, 11 STUB) — 36 unknown_ fields, 59 stubs

**`src/entity/`**:
- `anim.hpp` — STUB, 2 classes, 4 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `bullet.hpp` — STUB, 2 classes, 8 unknown_, 4 stubs, 0 impl — 🟡 MEDIUM
- `overlay.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `particle.hpp` — STUB, 1 classes, 16 unknown_, 6 stubs, 0 impl — 🔴 HIGH
- `particle_system.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `smudge.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `terrain.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `tiberium.hpp` — STUB, 2 classes, 0 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `tube.hpp` — STUB, 1 classes, 7 unknown_, 5 stubs, 0 impl — 🟡 MEDIUM
- `voxel.hpp` — PARTIAL, 5 classes, 0 unknown_, 3 stubs, 6 impl — 🟢 LOW
- `voxel_anim.hpp` — STUB, 2 classes, 0 unknown_, 4 stubs, 0 impl — 🟢 LOW
- `wave.hpp` — STUB, 1 classes, 1 unknown_, 5 stubs, 0 impl — 🟢 LOW

> **Dependency**: None — these are leaf ObjectClass subclasses. No class depends on them.

### Wave 5: Entity Types (individual type headers)
**13 files** (1 PARTIAL, 12 STUB) — 22 unknown_ fields, 80 stubs

**`src/type/`**:
- `aircraft_type.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `anim_type.hpp` — STUB, 3 classes, 1 unknown_, 3 stubs, 0 impl — 🟢 LOW
- `building_type.hpp` — STUB, 3 classes, 4 unknown_, 11 stubs, 0 impl — 🟢 LOW
- `bullet_type.hpp` — PARTIAL, 1 classes, 0 unknown_, 6 stubs, 1 impl — 🟢 LOW
- `infantry_type.hpp` — STUB, 3 classes, 0 unknown_, 9 stubs, 0 impl — 🟢 LOW
- `overlay_type.hpp` — STUB, 1 classes, 0 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `particle_system_type.hpp` — STUB, 2 classes, 7 unknown_, 5 stubs, 0 impl — 🟡 MEDIUM
- `particle_type.hpp` — STUB, 2 classes, 9 unknown_, 5 stubs, 0 impl — 🟡 MEDIUM
- `smudge_type.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `terrain_type.hpp` — STUB, 1 classes, 0 unknown_, 7 stubs, 0 impl — 🟢 LOW
- `unit_type.hpp` — STUB, 1 classes, 1 unknown_, 7 stubs, 0 impl — 🟢 LOW
- `warhead_type.hpp` — STUB, 2 classes, 0 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `weapon_type.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW

> **Dependency**: None — leaf AbstractTypeClass subclasses. No class depends on them.

### Wave 7: Structure Classes (Building, Infantry, Unit, Aircraft)
**4 files** (1 PARTIAL, 3 STUB) — 5 unknown_ fields, 33 stubs

**`src/structure/`**:
- `aircraft.hpp` — STUB, 3 classes, 1 unknown_, 20 stubs, 0 impl — 🟡 MEDIUM
- `building.hpp` — PARTIAL, 2 classes, 3 unknown_, 3 stubs, 0 impl — 🟢 LOW
- `infantry.hpp` — STUB, 1 classes, 1 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `unit.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW

> **Dependency**: Waves 4-5, 8 (FootClass → TechnoClass must be complete first)

### Wave 8: Mid-Hierarchy Chain (Foot, Techno, Radio, Mission, TechnoType, ObjectType)
**6 files** (2 PARTIAL, 4 STUB) — 12 unknown_ fields, 29 stubs

**`src/object/`**:
- `foot.hpp` — PARTIAL, 2 classes, 11 unknown_, 0 stubs, 0 impl — 🟡 MEDIUM
- `mission.hpp` — STUB, 2 classes, 0 unknown_, 1 stubs, 0 impl — 🟢 LOW
- `radio.hpp` — STUB, 2 classes, 0 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `techno.hpp` — PARTIAL, 9 classes, 0 unknown_, 1 stubs, 2 impl — 🟢 LOW

**`src/type/`**:
- `object_type.hpp` — STUB, 5 classes, 0 unknown_, 3 stubs, 0 impl — 🟢 LOW
- `techno_type.hpp` — STUB, 4 classes, 1 unknown_, 18 stubs, 1 impl — 🟡 MEDIUM

> **Dependency**: Wave 9 complete (ObjectClass → AbstractClass base). Mid-hierarchy sits between leaf and root.

### Wave 9: Base Classes (ObjectClass, AbstractTypeClass, AbstractClass, type_classes.hpp)
**4 files** (2 PARTIAL, 2 STUB) — 2 unknown_ fields, 23 stubs

**`src/object/`**:
- `abstract.hpp` — PARTIAL, 4 classes, 0 unknown_, 4 stubs, 3 impl — 🟢 LOW
- `object.hpp` — PARTIAL, 2 classes, 2 unknown_, 1 stubs, 4 impl — 🟢 LOW

**`src/type/`**:
- `abstract_type.hpp` — STUB, 2 classes, 0 unknown_, 2 stubs, 0 impl — 🟢 LOW
- `type_classes.hpp` — STUB, 21 classes, 0 unknown_, 16 stubs, 0 impl — 🟡 MEDIUM

> **Dependency**: Waves 4-8 complete. Root classes affect everything. Address comment audit MUST be done first.

### Wave 10: System Classes (cell, map, scenario, tactical, factory, radar, ini, files, mix)
**16 files** (11 PARTIAL, 5 STUB) — 70 unknown_ fields, 52 stubs

**`src/system/`**:
- `buffer_io_file.hpp` — STUB, 1 classes, 0 unknown_, 1 stubs, 0 impl — 🟢 LOW
- `cc_file.hpp` — PARTIAL, 2 classes, 0 unknown_, 3 stubs, 9 impl — 🟢 LOW
- `cd_drive.hpp` — PARTIAL, 2 classes, 2 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `cd_file.hpp` — STUB, 1 classes, 0 unknown_, 1 stubs, 0 impl — 🟢 LOW
- `cell.hpp` — PARTIAL, 2 classes, 23 unknown_, 10 stubs, 6 impl — 🔴 HIGH
- `convert_class.hpp` — STUB, 2 classes, 0 unknown_, 2 stubs, 0 impl — 🟢 LOW
- `factory.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `file_class.hpp` — STUB, 2 classes, 0 unknown_, 18 stubs, 0 impl — 🟡 MEDIUM
- `file_system.hpp` — PARTIAL, 3 classes, 0 unknown_, 3 stubs, 1 impl — 🟢 LOW
- `ini_class.hpp` — PARTIAL, 7 classes, 1 unknown_, 1 stubs, 1 impl — 🟢 LOW
- `map.hpp` — PARTIAL, 8 classes, 0 unknown_, 1 stubs, 0 impl — 🟢 LOW
- `mix_blowfish.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `mix_file.hpp` — PARTIAL, 5 classes, 0 unknown_, 6 stubs, 1 impl — 🟢 LOW
- `radar.hpp` — PARTIAL, 1 classes, 37 unknown_, 0 stubs, 0 impl — 🔴 HIGH
- `scenario.hpp` — PARTIAL, 4 classes, 7 unknown_, 0 stubs, 1 impl — 🟡 MEDIUM
- `tactical.hpp` — PARTIAL, 1 classes, 0 unknown_, 1 stubs, 1 impl — 🟢 LOW

> **Dependency**: Independent hierarchies (GScreen, File, etc.) — can proceed in parallel with waves 4-9.

### Wave 11: Render Classes (display, surface, movie, shp, text, voxel, palette, fog, bounce, bink)
**14 files** (6 PARTIAL, 8 STUB) — 18 unknown_ fields, 85 stubs

**`src/render/`**:
- `bink_control.hpp` — STUB, 1 classes, 0 unknown_, 4 stubs, 0 impl — 🟢 LOW
- `bounce.hpp` — PARTIAL, 2 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `display.hpp` — PARTIAL, 3 classes, 14 unknown_, 0 stubs, 0 impl — 🟡 MEDIUM
- `fog.hpp` — STUB, 1 classes, 0 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `light_source.hpp` — STUB, 2 classes, 0 unknown_, 6 stubs, 0 impl — 🟢 LOW
- `movie.hpp` — PARTIAL, 4 classes, 0 unknown_, 11 stubs, 1 impl — 🟢 LOW
- `palette.hpp` — STUB, 3 classes, 0 unknown_, 2 stubs, 0 impl — 🟢 LOW
- `shp_blitter.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `shp_render.hpp` — STUB, 3 classes, 0 unknown_, 3 stubs, 0 impl — 🟢 LOW
- `shp_struct.hpp` — STUB, 4 classes, 2 unknown_, 7 stubs, 0 impl — 🟢 LOW
- `surface.hpp` — STUB, 4 classes, 2 unknown_, 35 stubs, 2 impl — 🔴 HIGH
- `text_render.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `voxel.hpp` — STUB, 5 classes, 0 unknown_, 11 stubs, 0 impl — 🟢 LOW
- `vxl_format.hpp` — PARTIAL, 8 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW

> **Dependency**: Independent hierarchies (Surface, Blitter, Movie, SHP) — can proceed in parallel.

### Wave 12: Support (house, network, team, misc, ui -- parallelizable)
**25 files** (14 PARTIAL, 11 STUB) — 78 unknown_ fields, 302 stubs

**`src/house/`**:
- `house.hpp` — PARTIAL, 12 classes, 8 unknown_, 6 stubs, 4 impl — 🟡 MEDIUM
- `house_type.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `side.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW

**`src/misc/`**:
- `audio.hpp` — STUB, 5 classes, 22 unknown_, 2 stubs, 0 impl — 🔴 HIGH
- `locomotion.hpp` — STUB, 12 classes, 21 unknown_, 71 stubs, 2 impl — 🔴 HIGH
- `super_weapon.hpp` — STUB, 6 classes, 0 unknown_, 4 stubs, 0 impl — 🟢 LOW

**`src/network/`**:
- `connection.hpp` — PARTIAL, 5 classes, 0 unknown_, 50 stubs, 7 impl — 🔴 HIGH
- `multiplayer.hpp` — PARTIAL, 7 classes, 0 unknown_, 4 stubs, 0 impl — 🟢 LOW
- `session.hpp` — STUB, 5 classes, 0 unknown_, 3 stubs, 0 impl — 🟢 LOW
- `winsock.hpp` — PARTIAL, 3 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW

**`src/team/`**:
- `campaign.hpp` — STUB, 1 classes, 0 unknown_, 5 stubs, 0 impl — 🟢 LOW
- `script.hpp` — PARTIAL, 3 classes, 0 unknown_, 10 stubs, 3 impl — 🟢 LOW
- `tag.hpp` — STUB, 2 classes, 0 unknown_, 12 stubs, 0 impl — 🟢 LOW
- `team.hpp` — STUB, 1 classes, 16 unknown_, 5 stubs, 0 impl — 🔴 HIGH
- `trigger.hpp` — PARTIAL, 2 classes, 0 unknown_, 14 stubs, 5 impl — 🟢 LOW

**`src/ui/`**:
- `command_class.hpp` — STUB, 19 classes, 0 unknown_, 93 stubs, 0 impl — 🔴 HIGH
- `g_screen.hpp` — PARTIAL, 1 classes, 1 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `gadget.hpp` — PARTIAL, 6 classes, 0 unknown_, 7 stubs, 1 impl — 🟢 LOW
- `menu_screen.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `message_list.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `mouse.hpp` — PARTIAL, 5 classes, 0 unknown_, 2 stubs, 0 impl — 🟢 LOW
- `power.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `sidebar.hpp` — STUB, 3 classes, 10 unknown_, 4 stubs, 0 impl — 🟡 MEDIUM
- `tab.hpp` — PARTIAL, 2 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW
- `tool_tip.hpp` — PARTIAL, 1 classes, 0 unknown_, 0 stubs, 0 impl — 🟢 LOW

> **Dependency**: Independent hierarchies + support classes. Can be parallelized across sub-teams.

### Wave 13: Final Integration (app, WDT, verification)
**1 files** (1 PARTIAL, 0 STUB) — 0 unknown_ fields, 6 stubs

**`src/wdt/`**:
- `wdt.hpp` — PARTIAL, 9 classes, 0 unknown_, 6 stubs, 24 impl — 🟢 LOW


---

## 🔗 Critical Path

The following sequence is the **blocking dependency chain** — each step must complete before the next can start:

```
Wave 9: ObjectClass → AbstractTypeClass → AbstractClass
    ↑ requires
Wave 8: TechnoClass → FootClass → RadioClass → MissionClass
    ↑ requires
Wave 7: BuildingClass → InfantryClass → UnitClass → AircraftClass
    ↑ requires
Wave 6: type_classes.hpp (TechnoTypeClass → ObjectTypeClass)
    ↑ requires
Wave 4-5: Entity instances + individual type headers
```

**Independent (can proceed in parallel with critical path):**
- Waves 10-12 (system, render, support — mostly independent hierarchies)
- Wave 13 (final integration)

---

## 📊 Completion Statistics

| Category | Count | % |
|----------|-------|---|
| COMPLETE | 4 | 3.4% |
| UTILITY | 15 | 12.9% |
| PARTIAL | 41 | 35.3% |
| STUB | 56 | 48.3% |
| **Total** | **116** | **100%** |

| Effort | Count |
|--------|-------|
| LOW | 74 |
| MEDIUM | 15 |
| HIGH | 8 |

| Directory | Files | unknown_ | Stubs |
|-----------|-------|----------|-------|
| `src/core/` | 2 | 0 | 3 |
| `src/entity/` | 12 | 36 | 59 |
| `src/house/` | 3 | 8 | 16 |
| `src/misc/` | 3 | 43 | 77 |
| `src/network/` | 4 | 0 | 57 |
| `src/object/` | 6 | 13 | 13 |
| `src/render/` | 14 | 18 | 85 |
| `src/structure/` | 4 | 5 | 33 |
| `src/system/` | 16 | 70 | 52 |
| `src/team/` | 5 | 16 | 46 |
| `src/type/` | 17 | 23 | 119 |
| `src/ui/` | 10 | 11 | 106 |
| `src/wdt/` | 1 | 0 | 6 |
