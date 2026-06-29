# Type Contradiction Report

**Total contradictions**: 574

## Summary: Top conflicting type pairs

| Type A | Type B | Frequency |
|---|---|---|
| `CellClass` | `HVASectionMatrix` | 550 |
| `CellClass` | `TechnoTypeClass` | 550 |
| `INILinkNode` | `TechnoTypeClass` | 472 |
| `HVASectionMatrix` | `TechnoTypeClass` | 465 |
| `TeamTypeClass` | `TechnoTypeClass` | 451 |
| `CellClass` | `TeamTypeClass` | 107 |
| `CellClass` | `INILinkNode` | 107 |
| `INILinkNode` | `TeamTypeClass` | 104 |
| `HVASectionMatrix` | `INILinkNode` | 43 |
| `HVASectionMatrix` | `TeamTypeClass` | 21 |

---

## Top 50 contradictions (of 574)

### Contradiction #1

**Equivalence class root**: 25463

**Sample variables**:
- `0x0047E8A0::ecx`
- `CellClass::AddContent.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #2

**Equivalence class root**: 26414

**Sample variables**:
- `0x00636590::esi`
- `FactoryClass::CompleteCurrentItem.this.member(0x30)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #3

**Equivalence class root**: 27236

**Sample variables**:
- `0x00527CC0::eax`
- `0x00527CC0::ecx`
- `0x00527CC0::edx`
- `0x00527CC0::esi`
- `INIClass::ParseValue.this.member(0x4)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #4

**Equivalence class root**: 30529

**Sample variables**:
- `0x006F0130::eax`
- `0x006F0130::ecx`
- `0x006F0130::edx`
- `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
- `TeamClass::CheckMemberSuperWeapon.this.member(0x4)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #5

**Equivalence class root**: 33705

**Sample variables**:
- `0x0075AEC0::eax`
- `0x0075AEC0::ecx`
- `0x0075AEC0::edi`
- `0x0075AEC0::edx`
- `0x0075AEC0::esi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #6

**Equivalence class root**: 34424

**Sample variables**:
- `[ebp+9Ch]`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #7

**Equivalence class root**: 34335

**Sample variables**:
- `[ebp+4]`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #8

**Equivalence class root**: 34266

**Sample variables**:
- `[ebp+28h]`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #9

**Equivalence class root**: 34238

**Sample variables**:
- `[ebp+1Ch]`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #10

**Equivalence class root**: 31482

**Sample variables**:
- `0x00743A50::ecx`
- `UnitClass::Scatter.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #11

**Equivalence class root**: 14999

**Sample variables**:
- `0x0065E010::eax`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #12

**Equivalence class root**: 30722

**Sample variables**:
- `0x007393C0::ecx`
- `0x007393C0::edx`
- `TechnoClass::Deploy.this.member(0x404)`
- `TechnoClass::Deploy.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #13

**Equivalence class root**: 27360

**Sample variables**:
- `0x00518F90::ecx`
- `0x00518F90::edi`
- `InfantryClass::Draw.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #14

**Equivalence class root**: 8348

**Sample variables**:
- `0x00518F90::esi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #15

**Equivalence class root**: 19103

**Sample variables**:
- `0x0070D590::esi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #16

**Equivalence class root**: 28749

**Sample variables**:
- `0x00718260::eax`
- `ObjectClass::FindPlacementPosition.this.member(0x4)`
- `ObjectClass::FindPlacementPosition.this.member(0x9c)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #17

**Equivalence class root**: 24913

**Sample variables**:
- `0x00739EC0::ecx`
- `BuildingClass::ProcessSell.this.member(0x268)`
- `BuildingClass::ProcessSell.this.member(0x69c)`
- `BuildingClass::ProcessSell.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #18

**Equivalence class root**: 24909

**Sample variables**:
- `0x00739EC0::eax`
- `BuildingClass::ProcessSell.this.member(0x4)`
- `BuildingClass::ProcessSell.this.member(0xee8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #19

**Equivalence class root**: 20385

**Sample variables**:
- `0x00739EC0::edi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #20

**Equivalence class root**: 30738

**Sample variables**:
- `0x0073B470::eax`
- `TechnoClass::DrawVoxel.this.member(0x4)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #21

**Equivalence class root**: 30739

**Sample variables**:
- `0x0073B470::ecx`
- `TechnoClass::DrawVoxel.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #22

**Equivalence class root**: 24286

**Sample variables**:
- `0x00449C30::eax`
- `AnimClass::finalizeAnimation.this.member(0x4)`
- `AnimClass::finalizeAnimation.this.member(0x408)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #23

**Equivalence class root**: 24287

**Sample variables**:
- `0x00449C30::ecx`
- `AnimClass::finalizeAnimation.this.member(0x6a4)`
- `AnimClass::finalizeAnimation.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #24

**Equivalence class root**: 2099

**Sample variables**:
- `0x00449C30::edx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #25

**Equivalence class root**: 2100

**Sample variables**:
- `0x00449C30::esi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #26

**Equivalence class root**: 27099

**Sample variables**:
- `0x0050A350::eax`
- `0x0050A350::edx`
- `0x0050A350::esi`
- `HouseClass::FireSuperWeaponAtBestTarget.this.member(0x4)`
- `HouseClass::RecordCratePlacement.this.member(0x5708)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #27

**Equivalence class root**: 25162

**Sample variables**:
- `0x004666E0::eax`
- `0x004666E0::edx`
- `BulletClass::ProcessNukeExplosion.this.member(0x2bc)`
- `BulletClass::ProcessNukeExplosion.this.member(0x2d0)`
- `BulletClass::ProcessNukeExplosion.this.member(0x2d8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #28

**Equivalence class root**: 24903

**Sample variables**:
- `0x0044B780::eax`
- `BuildingClass::ProcessRepair.this.member(0x4)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #29

**Equivalence class root**: 33815

**Sample variables**:
- `0x0073E5E0::ecx`
- `0x0073E5E0::edx`
- `VoxelTypeClass::ReadINI.this.member(0x8)`
- `VoxelTypeClass::ReadINI.this.member(0xd78)`
- `VoxelTypeClass::ReadINI.this.member(0xd7c)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #30

**Equivalence class root**: 28948

**Sample variables**:
- `0x0062A980::eax`
- `0x0062A980::ecx`
- `ParasiteClass::TryInfect.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #31

**Equivalence class root**: 31413

**Sample variables**:
- `0x00741970::eax`
- `0x00741970::ebx`
- `0x00741970::edx`
- `UnitClass::AssignDestination_SyncLog.this.member(0x3f8)`
- `UnitClass::AssignDestination_SyncLog.this.member(0x4)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #32

**Equivalence class root**: 2014

**Sample variables**:
- `0x00443860::edx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #33

**Equivalence class root**: 5729

**Sample variables**:
- `0x004D3920::eax`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #34

**Equivalence class root**: 2284

**Sample variables**:
- `0x00455F10::edx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #35

**Equivalence class root**: 13806

**Sample variables**:
- `0x0062BD50::eax`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #36

**Equivalence class root**: 885

**Sample variables**:
- `0x004144B0::esi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #37

**Equivalence class root**: 13813

**Sample variables**:
- `0x0062C6E0::eax`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #38

**Equivalence class root**: 29970

**Sample variables**:
- `0x00445F80::ecx`
- `SuperWeapon::CreateUnits.this.member(0x1568)`
- `SuperWeapon::CreateUnits.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #39

**Equivalence class root**: 31414

**Sample variables**:
- `0x00741970::ecx`
- `UnitClass::AssignDestination_SyncLog.this.member(0x3ec)`
- `UnitClass::AssignDestination_SyncLog.this.member(0x8)`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #40

**Equivalence class root**: 2042

**Sample variables**:
- `0x00445F80::esi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #41

**Equivalence class root**: 8444

**Sample variables**:
- `0x005206B0::ecx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `INIClass::ParseValue.this.member(0x4)`
  - Type: `INILinkNode`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- Anchor B: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #42

**Equivalence class root**: 7297

**Sample variables**:
- `0x004F2300::ebx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #43

**Equivalence class root**: 7298

**Sample variables**:
- `0x004F2300::ecx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #44

**Equivalence class root**: 20996

**Sample variables**:
- `0x00759260::ecx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #45

**Equivalence class root**: 15749

**Sample variables**:
- `0x006941A0::edx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #46

**Equivalence class root**: 6022

**Sample variables**:
- `0x004E0B10::edi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #47

**Equivalence class root**: 7430

**Sample variables**:
- `0x004F54A0::eax`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #48

**Equivalence class root**: 22152

**Sample variables**:
- `0x00781D20::edi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #49

**Equivalence class root**: 22404

**Sample variables**:
- `0x007A9970::edi`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

### Contradiction #50

**Equivalence class root**: 23045

**Sample variables**:
- `0x007C3990::edx`

**Conflicting anchor paths**:

#### Pair 1
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `VoxelAnim::Draw.this.member(0x8)`
  - Type: `HVASectionMatrix`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 2
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `CellClass::AddContent.this.member(0x8)`
  - Type: `CellClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

#### Pair 3
- Anchor A: `FactoryClass::CompleteCurrentItem.this.member(0x30)`
  - Type: `TechnoTypeClass`
  - Source: `member_types`
- Anchor B: `TeamClass::CheckMemberSuperWeapon.this.member(0x24)`
  - Type: `TeamTypeClass`
  - Source: `member_types`
- **Meet result**: `TOP` (contradiction)

---

