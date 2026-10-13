#pragma once
#include "object/object.hpp"
#include "type/abstract_type.hpp"
#include "type/object_type.hpp"
#include "type/weapon_type.hpp"

namespace ra2 { namespace game {

class WeaponTypeClass;

class TechnoTypeClass : public gamemd::ObjectTypeClass {
public:
    // unmatched: no callgraph reference and no git history record
    bool isArmed() const;
    int getWeaponRange(int weaponIdx) const;
    // unmatched: no callgraph reference and no git history record
    WeaponTypeClass* getWeapon(int weaponIdx) const;
    // design: inline accessor, inlined at all call sites
    bool hasTurret() const;

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
























}} // namespace