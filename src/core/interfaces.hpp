#pragma once

#include <windows.h>
#include <Unknwn.h>

#include "enums.hpp"
#include "math.hpp"

namespace gamemd
{

#ifdef IN
#undef IN
#endif

struct CONNECTDATA
{
    IUnknown*    pUnk;
    unsigned long dwCookie;
};

class INoticeSink
{
public:
    virtual bool __stdcall INoticeSink_Unknown(DWORD dwUnknown) = 0;
};

class INoticeSource
{
public:
    virtual void __stdcall INoticeSource_Unknown() = 0;
};

class ISwizzle : public IUnknown
{
public:
    virtual HRESULT __stdcall Reset() = 0;
    virtual HRESULT __stdcall Swizzle(void** pointer) = 0;
    virtual HRESULT __stdcall Fetch_Swizzle_ID(void* pointer, long* id) const = 0;
    virtual HRESULT __stdcall Here_I_Am(long id, void* pointer) = 0;  // 0x6CF2C0
    virtual HRESULT __stdcall Save_Interface(IStream* stream, IUnknown* pointer) = 0;
    virtual HRESULT __stdcall Load_Interface(IStream* stream, GUID* riid, void** pointer) = 0;
    virtual HRESULT __stdcall Get_Save_Size(int* size) const = 0;
};

class IApplication : public IUnknown
{
public:
    virtual HRESULT __stdcall FullName(BSTR* retval) = 0;
    virtual HRESULT __stdcall Name(BSTR* retval) = 0;
    virtual HRESULT __stdcall Quit() = 0;
    virtual HRESULT __stdcall ScenarioName(BSTR* retval) = 0;
    virtual HRESULT __stdcall FrameCount(long* retval) = 0;
    virtual HRESULT __stdcall Swizzle_Interface(ISwizzle** pVal) = 0;
};

class IHouse : public IUnknown
{
public:
    virtual long __stdcall ID_Number() const = 0;
    virtual BSTR __stdcall Name() const = 0;
    virtual IApplication* __stdcall Get_Application() = 0;
    virtual long __stdcall AvailableMoney() const = 0;
    virtual long __stdcall Available_Storage() const = 0;
    virtual long __stdcall Power_Output() const = 0;
    virtual long __stdcall Power_Drain() const = 0;
    virtual long __stdcall Category_Quantity(Category category) const = 0;
    virtual long __stdcall Category_Power(Category category) const = 0;
    virtual CellStruct __stdcall Base_Center() const = 0;
    virtual HRESULT __stdcall Fire_Sale() const = 0;
    virtual HRESULT __stdcall All_To_Hunt() = 0;
};

class IPublicHouse : public IUnknown
{
public:
    virtual long __stdcall ID_Number() const = 0;
    virtual BSTR __stdcall Name() const = 0;
    virtual long __stdcall Apparent_Category_Quantity(Category category) const = 0;
    virtual long __stdcall Apparent_Category_Power(Category category) const = 0;
    virtual CellStruct __stdcall Apparent_Base_Center() const = 0;
    virtual bool __stdcall Is_Powered() const = 0;
};

class IEnumConnections : public IUnknown
{
public:
    virtual HRESULT __stdcall RemoteNext(unsigned long cConnections, CONNECTDATA* rgcd, unsigned long* pcFetched) = 0;
    virtual HRESULT __stdcall Skip(unsigned long cConnections) = 0;
    virtual HRESULT __stdcall Reset() = 0;
    virtual HRESULT __stdcall Clone(IEnumConnections** ppEnum) = 0;
};

class IConnectionPointContainer;

class IConnectionPoint : public IUnknown
{
public:
    virtual HRESULT __stdcall GetConnectionInterface(GUID* pIID) = 0;  // 0x4A0760
    virtual HRESULT __stdcall GetConnectionPointContainer(IConnectionPointContainer** ppCPC) = 0;
    virtual HRESULT __stdcall Advise(IUnknown* pUnkSink, unsigned long* pdwCookie) = 0;
    virtual HRESULT __stdcall Unadvise(unsigned long dwCookie) = 0;
    virtual HRESULT __stdcall EnumConnections(IEnumConnections** ppEnum) = 0;
};

class IEnumConnectionPoints;

class IConnectionPointContainer : public IUnknown
{
public:
    virtual HRESULT __stdcall EnumConnectionPoints(IEnumConnectionPoints** ppEnum) = 0;
    virtual HRESULT __stdcall FindConnectionPoint(GUID* riid, IConnectionPoint** ppCP) = 0;
};

class IEnumConnectionPoints : public IUnknown
{
public:
    virtual HRESULT __stdcall RemoteNext(unsigned long cConnections, IConnectionPoint** ppCP, unsigned long* pcFetched) = 0;
    virtual HRESULT __stdcall Skip(unsigned long cConnections) = 0;
    virtual HRESULT __stdcall Reset() = 0;
    virtual HRESULT __stdcall Clone(IEnumConnectionPoints** ppEnum) = 0;
};

class IGameMap : public IUnknown
{
public:
    virtual long __stdcall Is_Visible(CellStruct cell) = 0;
};

class ILinkStream : public IUnknown
{
public:
    virtual HRESULT __stdcall Link_Stream(IUnknown* stream) = 0;
    virtual HRESULT __stdcall Unlink_Stream(IUnknown** stream) = 0;
};

class IFlyControl : public IUnknown
{
public:
    virtual int __stdcall Landing_Altitude() = 0;
    virtual int __stdcall Landing_Direction() = 0;
    virtual long __stdcall Is_Loaded() = 0;
    virtual long __stdcall Is_Strafe() = 0;
    virtual long __stdcall Is_Fighter() = 0;
    virtual long __stdcall Is_Locked() = 0;
};

class ILocomotion : public IUnknown
{
public:
    virtual HRESULT __stdcall Link_To_Object(void* pointer) = 0;
    virtual bool __stdcall Is_Moving() = 0;
    virtual CoordStruct* __stdcall Destination(CoordStruct* pcoord) = 0;
    virtual CoordStruct* __stdcall Head_To_Coord(CoordStruct* pcoord) = 0;
    virtual Move __stdcall Can_Enter_Cell(CellStruct cell) = 0;
    virtual bool __stdcall Is_To_Have_Shadow() = 0;
    virtual Matrix3D* __stdcall Draw_Matrix(Matrix3D* pMatrix, int* key) = 0;
    virtual Matrix3D* __stdcall Shadow_Matrix(Matrix3D* pMatrix, int* key) = 0;
    virtual Point2D* __stdcall Draw_Point(Point2D* pPoint) = 0;
    virtual Point2D* __stdcall Shadow_Point(Point2D* pPoint) = 0;
    virtual VisualType __stdcall Visual_Character(VARIANT_BOOL unused) = 0;
    virtual int __stdcall Z_Adjust() = 0;
    virtual ZGradient __stdcall Z_Gradient() = 0;
    virtual bool __stdcall Process() = 0;
    virtual void __stdcall Move_To(CoordStruct to) = 0;
    virtual void __stdcall Stop_Moving() = 0;
    virtual void __stdcall Do_Turn(unsigned short facing) = 0;
    virtual void __stdcall Unlimbo() = 0;
    virtual void __stdcall Tilt_Pitch_AI() = 0;
    virtual bool __stdcall Power_On() = 0;
    virtual bool __stdcall Power_Off() = 0;
    virtual bool __stdcall Is_Powered() = 0;
    virtual bool __stdcall Is_Ion_Sensitive() = 0;
    virtual bool __stdcall Push(unsigned short dir) = 0;
    virtual bool __stdcall Shove(unsigned short dir) = 0;
    virtual void __stdcall Force_Track(int track, CoordStruct coord) = 0;
    virtual Layer __stdcall In_Which_Layer() = 0;
    virtual void __stdcall Force_Immediate_Destination(CoordStruct coord) = 0;
    virtual void __stdcall Force_New_Slope(int ramp) = 0;
    virtual bool __stdcall Is_Moving_Now() = 0;
    virtual int __stdcall Apparent_Speed() = 0;
    virtual int __stdcall Drawing_Code() = 0;
    virtual FireError __stdcall Can_Fire() = 0;
    virtual int __stdcall Get_Status() = 0;
    virtual void __stdcall Acquire_Hunter_Seeker_Target() = 0;
    virtual bool __stdcall Is_Surfacing() = 0;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) = 0;
    virtual bool __stdcall Is_Moving_Here(CoordStruct to) = 0;
    virtual bool __stdcall Will_Jump_Tracks() = 0;
    virtual bool __stdcall Is_Really_Moving_Now() = 0;
    virtual void __stdcall Stop_Movement_Animation() = 0;
    virtual void __stdcall Lock() = 0;
    virtual void __stdcall Unlock() = 0;
    virtual void __stdcall ILocomotion_B8() = 0;
    virtual int __stdcall Get_Track_Number() = 0;
    virtual int __stdcall Get_Track_Index() = 0;
    virtual int __stdcall Get_Speed_Accum() = 0;
};

class IPiggyback : public IUnknown
{
public:
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) = 0;
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) = 0;
    virtual bool __stdcall Is_Ok_To_End() = 0;
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) = 0;
    virtual bool __stdcall Is_Piggybacking() = 0;
};

} // namespace gamemd
