# Type Contradiction Report

**Total contradictions**: 1

## Summary: Top conflicting type pairs

| Type A | Type B | Frequency |
|---|---|---|
| `State` | `TriggerTypeClass` | 1 |
| `HouseClass` | `State` | 1 |
| `State` | `TagClass` | 1 |
| `AnimTypeClass` | `State` | 1 |
| `State` | `TechnoClass` | 1 |

---

## Top 1 contradictions (of 1)

### Contradiction #1

**Equivalence class root**: 0

**Sample variables**:
- `0`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `JumpjetLocomotionClass::StubReturnZero_0.this.member(0x50)`
  - Type: `State`
  - Source: `member_types`
- Anchor B: `TriggerClass::FireAction.this.member(0x24)`
  - Type: `TriggerTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `JumpjetLocomotionClass::StubReturnZero_0.this.member(0x50)`
  - Type: `State`
  - Source: `member_types`
- Anchor B: `TriggerClass::FireAction.this.member(0x2c)`
  - Type: `HouseClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `JumpjetLocomotionClass::StubReturnZero_0.this.member(0x50)`
  - Type: `State`
  - Source: `member_types`
- Anchor B: `ObjectClass::SetReference.this.member(0x34)`
  - Type: `TagClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

