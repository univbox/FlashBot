#include "Squad.h"

using namespace FlashBot;

Squad::Squad() : _lastRetreatSwitch(0), _lastRetreatSwitchVal(false),
_priority(0), _name("Default") {
	int a = 10;
};

Squad::Squad(const std::string & name, SquadOrder order, size_t priority)
: _name(name)
, _order(order)
, _lastRetreatSwitch(0)
, _lastRetreatSwitchVal(false)
, _priority(priority)
{
}

Squad::~Squad()
{
	//clear();
}

void Squad::update()
{
	updateUnits();

	


}

bool Squad::needsToRegroup()
{

}

void Squad::updateUnits()
{
	setAllUnits();
	setNearEnemyUnits();
	//addUnitsToMicroManagers();
}

void Squad::setAllUnits()
{
	// clean up the _units vector just in case one of them died
	BWAPI::Unitset goodUnits;
	for (auto & unit : _units)
	{
		if (unit->isCompleted() &&
			unit->getHitPoints() > 0 &&
			unit->exists() &&
			unit->getPosition().isValid() &&
			unit->getType() != BWAPI::UnitTypes::Unknown)
		{
			goodUnits.insert(unit);
		}
	}
	_units = goodUnits;
}

void Squad::setNearEnemyUnits()
{
	
}