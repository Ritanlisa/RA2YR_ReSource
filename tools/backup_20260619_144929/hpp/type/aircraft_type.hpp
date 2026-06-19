#pragma once

#include "techno_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AnimTypeClass;

class AircraftTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::AircraftType;

    static DynamicVectorClass<AircraftTypeClass*>* Array;
    static AircraftTypeClass* Find(const char* pID);  // 0x41C8B0
    static AircraftTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x41CEB0 (as GetClassIdentifier)

    virtual ~AircraftTypeClass() = default;  // 0x41CFE0 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x41CFB0 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x41CFC0 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // 0x41CB60 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override; // 0x41CB70 (as CreateAircraft)

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
