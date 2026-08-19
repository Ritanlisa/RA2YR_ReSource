#pragma once
#include "src/object/object.hpp"

namespace ra2 { namespace game {

class TechnoTypeClass : public ObjectTypeClass {
public:
    // unmatched: no callgraph reference and no git history record
    bool isArmed() const;
    int getWeaponRange(int weaponIdx) const;
    // unmatched: no callgraph reference and no git history record
    WeaponTypeClass* getWeapon(int weaponIdx) const;
    // design: inline accessor, inlined at all call sites
    bool hasTurret() const { return false; }

    // INI-loaded members
    bool armed; bool hasTurretFlag;
    int weaponCount; WeaponTypeClass* weapon1; WeaponTypeClass* weapon2;
    WeaponTypeClass* eliteWeapon1; WeaponTypeClass* eliteWeapon2;
    int ammo; int guardRange; int sight;
    int cost; int strength; int armor;
    int techLevel; int pipScale;
    float speed; float speedType;
    int threatPosed; int threatAvoidValue;
    bool cloakable; int cloakRadius;
    bool trainable; int buildLimit;
    // TODO: complete ~200 more INI-loaded members from IDA analysis
protected:
    TechnoTypeClass(const char* id) noexcept;
};

class ObjectTypeClass {
    // TODO: complete from IDA
};

class BuildingTypeClass : public TechnoTypeClass {
public:
    // TODO: complete ~100 INI members from IDA
};

class UnitTypeClass : public TechnoTypeClass {};
class InfantryTypeClass : public TechnoTypeClass {};
class AircraftTypeClass : public TechnoTypeClass {};

class WarheadTypeClass {};
class WeaponTypeClass {};
class BulletTypeClass {};
class AnimTypeClass {};
class ParticleTypeClass {};
class ParticleSystemTypeClass {};
class OverlayTypeClass {};
class SmudgeTypeClass {};
class TerrainTypeClass {};
class SuperWeaponTypeClass {};

class AbstractTypeClass {};
class HouseTypeClass {};
class SideClass {};

}} // namespace