#pragma once
#include "GameplayController.h"

namespace Gameplay
{
	class GameplayService
	{
		GameplayController* gameplay_controller;

	public:
		GameplayService();
		~GameplayService();

		void initialize();
		void update();
		void render();

		void onPositionChanged(int position);
		void onDeath();
	};
}
