#pragma once
#include "../Level/LevelController.h"

namespace Gameplay
{
	class GameplayController
	{
		void processObstacle();
		bool isObstacle(Level::BlockType value);

	public:
		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();

		void onPositionChanged(int position);
	};
}
