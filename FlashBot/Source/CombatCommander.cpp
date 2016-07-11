#include "CombatCommander.h"

using namespace FlashBot;

const size_t IdlePriority = 0;
const size_t AttackPriority = 1;
const size_t BaseDefensePriority = 2;
const size_t ScoutDefensePriority = 3;
const size_t DropPriority = 4;



CombatCommander::CombatCommander()
: _initialized(false)
{

}