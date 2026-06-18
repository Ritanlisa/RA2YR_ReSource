# Task 1: translated/named fields migration

## Date: 2026-06-18

## What was done
- Added `translated: false` and `named: is_named` to hook object in ida_extract.py
- Created tools/migrate_translated.py scanning src/*.cpp
- Migrated functions.json: 19,067 entries have translated + named fields

## Results
- **named=true**: 13,437 (not sub_/nullsub_)
- **translated=true**: 89 (exact name match, >=5 lines, no stubs)
- **Real functions in src/**: 324 (235 names differ from functions.json)
- **Build**: gamemd_core.lib passes; hook DLL IDA error pre-existing

## Schema
`named` = not name.startswith('sub_') and not name.startswith('nullsub')
`translated` = name in functions.json AND real implementation in src/
`completed` unchanged (backward compat)

## Migration script
- 88 .cpp files scanned, brace-depth tracking, stub detection (TODO/STUB/PENDING)
- Threshold: >=5 effective lines, no stub markers
- Exact name matching (conservative, false negatives OK)
