#pragma once
#include "Common.h"
#include "Squad.h"


namespace FlashBot
{
	class CombatCommander
	{

		bool _initialized;
		BWAPI::Unitset	_combatUnits;
	public:

		CombatCommander();

		void update(const BWAPI::Unitset & combatUnits);

	};
}