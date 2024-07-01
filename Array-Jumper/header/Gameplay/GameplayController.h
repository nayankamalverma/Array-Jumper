#pragma once
#include "../Level/LevelController.h"

namespace Gameplay
{
	using namespace Level;
	class GameplayController
	{
		void processObstacle();
		bool isObstacle(BlockType value);
		void processEndBlock();
		void gameOver();

	public:
		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();

		void onPositionChanged(int position);
		bool isEndBlock(BlockType value);

		void onDeath();
	};
}
