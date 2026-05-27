#include "gamemd/ui/command_class.hpp"

namespace gamemd
{

DynamicVectorClass<CommandClass*>* CommandClass::Array = nullptr;

// TODO: complete command class implementations

static MoveCommandClass       s_MoveCommand;
static AttackCommandClass     s_AttackCommand;
static SelectCommandClass     s_SelectCommand;
static StopCommandClass       s_StopCommand;
static GuardCommandClass      s_GuardCommand;
static DeployCommandClass     s_DeployCommand;
static WaypointCommandClass   s_WaypointCommand;
static SellCommandClass       s_SellCommand;
static RepairCommandClass     s_RepairCommand;
static EnterCommandClass      s_EnterCommand;
static TogglePowerCommandClass s_TogglePowerCommand;

} // namespace gamemd
