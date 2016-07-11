#pragma once

#include "Common.h"
#include "SquadOrder.h"

namespace FlashBot
{
	class Squad
	{
		std::string			_name;
		BWAPI::Unitset		_units;
		std::string			_regroupStatus;
		int					_lastRetreatSwitch;
		bool					_lastRetreatSwitchVal;
		size_t				_priority;

		SquadOrder			_order;

		std::map<BWAPI::Unit, bool> _nearEnemy;

		BWAPI::Unit			getRegroupUnit();
		BWAPI::Unit			unitClosestToEnemy();

		void					updateUnits();
		void					setAllUnits();
		void					setNearEnemyUnits();

		bool					unitNearEnemy(BWAPI::Unit unit);
		bool					needsToRegroup();


	public:
		Squad();
		Squad(const std::string &name, SquadOrder order, size_t prioriry);
		~Squad();

		void update();
		


		BWAPI::Position     calcCenter();
		BWAPI::Position     calcRegroupPosition();

		const BWAPI::Unitset &  getUnits() const;


	};
}