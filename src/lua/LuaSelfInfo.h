#pragma once
#include <types.h>
#include <vector>
#include <sol_forward.hpp>

class Bot;

namespace sol { class state; }

class LuaSelfInfo
{
	public:
		guid_t id;
		std::vector<uint32_t> colors;
		bool colorsLocked;

		LuaSelfInfo(Bot& bot, guid_t aId);

		std::vector<uint32_t>& getColors() { return colors; }
		void setColors(sol::table v);

		real_t getRadius();
		real_t getMass();
		real_t getSightRadius();
		real_t getConsumeRadius();
		uint32_t getStartFrame();
		uint32_t getCurrentFrame();
		real_t getSpeed();
		real_t getConsumedNaturalFood();
		real_t getConsumedFoodHuntedByOthers();
		real_t getConsumedFoodHuntedBySelf();
		real_t getMaxStepAngle();

		static void Register(sol::state& lua);

	private:
		Bot &m_bot;
};

