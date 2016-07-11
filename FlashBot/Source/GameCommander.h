#pragma once

#include "Common.h"
#include "CombatCommander.h"



namespace FlashBot
{
	class UnitToAssign
	{
	public:
		BWAPI::Unit unit;
		bool isAssigned;

		UnitToAssign(BWAPI::Unit u)
		{
			unit = u;
			isAssigned = false;
		}
	};

	class GameCommander{
		CombatCommander _combatCommander;

	public:
		GameCommander();
		~GameCommander() {};

		void update();
		void doThing();

	};


}