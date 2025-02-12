#pragma once
#include "LevelModel.h"

namespace Level
{
	class LevelController;

	class LevelService
	{
	private:
		LevelController* level_controller;

		void destroy();
	public:
		LevelService();
		~LevelService();

		void initialize();
		void update();
		void render();

		BoxDimensions getBoxDimensions();
		BlockType getCurrentBoxValue(int currentPosition);

		void loadNextLevel();
		int getCurrentLevelNumber();
		bool isLastLevel();
		void resetLevels();
	};
}
