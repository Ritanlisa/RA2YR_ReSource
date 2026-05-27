#pragma once

#include "techno_type.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class AnimTypeClass;

class AircraftTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::AircraftType;

    static DynamicVectorClass<AircraftTypeClass*>* Array;
    static AircraftTypeClass* Find(const char* pID);
    static AircraftTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~AircraftTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::AircraftType; }
    virtual int Size() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    AircraftTypeClass(const char* pID) noexcept;

protected:
    AircraftTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    bool Carryall;
    AnimTypeClass* Trailer;
    int SpawnDelay;
    bool Rotors;
    bool CustomRotor;
    bool Landable;
    bool FlyBy;
    bool FlyBack;
    bool AirportBound;
    bool Fighter;
};

} // namespace gamemd
