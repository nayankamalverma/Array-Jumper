﻿#include "../../header/Gameplay/GameplayController.h"

#include "../../header/Global/ServiceLocator.h"
#include "../../header/Main/GameService.h"

namespace Gameplay
{
	using namespace Main;
	using namespace Global;
	using namespace Sound;
	using namespace Level;

	GameplayController::GameplayController()
	{
		
	}

	GameplayController::~GameplayController()
	{
		
	}

	void GameplayController::initialize()
	{
		
	}

	void GameplayController::update()
	{
		
	}

	void GameplayController::render()
	{
		
	}

	void GameplayController::onPositionChanged(int position)
	{
		BlockType value = ServiceLocator::getInstance()->getLevelService()->getCurrentBoxValue(position);

		if (isObstacle(value)) processObstacle();
		if (isEndBlock(value)) processEndBlock();
	}

	void GameplayController::processObstacle()
	{
		ServiceLocator::getInstance()->getPlayerService()->takeDamage();
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::DEATH);
	}

	bool GameplayController::isObstacle(Level::BlockType value)
	{
		if (value == BlockType::OBSTACLE_ONE || value == BlockType::OBSTACLE_TWO)
			return true;
		return false;
	}

	bool GameplayController::isEndBlock(Level::BlockType value)
	{
		if (value == BlockType::TARGET)
			return true;
		return false;
	}

	void GameplayController::processEndBlock()
	{
		ServiceLocator::getInstance()->getPlayerService()->levelComplete();
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::LEVEL_COMPLETE);

		if (isLastLevel())
		{
			gameWon();
			return;
		}

		loadNextLevel();
	}

	void GameplayController::gameWon()
	{
		GameService::setGameState(GameState::CREDITS);
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::GAME_WON);
		ServiceLocator::getInstance()->getLevelService()->resetLevels();
	}

	void GameplayController::gameOver()
	{
		GameService::setGameState(GameState::CREDITS);
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::DEATH);
	}

	void GameplayController::onDeath()
	{
		gameOver();
	}
	bool GameplayController::isLastLevel()
	{
		return ServiceLocator::getInstance()->getLevelService()->isLastLevel();
	}

	void GameplayController::loadNextLevel()
	{
		ServiceLocator::getInstance()->getLevelService()->loadNextLevel();
	}
}
