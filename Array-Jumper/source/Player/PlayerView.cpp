#include "../../header/Player/PlayerView.h"
#include "../../header/Global/Config.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Player/PlayerController.h"
#include "../../header/Player/PlayerModel.h"

namespace Player
{
	using namespace UI::UIElement;
	using namespace Global;

	PlayerView::PlayerView(PlayerController* player_controller)
	{
		this->player_controller = player_controller;
		game_window = nullptr;
		player_image = new ImageView();
	}

	PlayerView::~PlayerView() {}

	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::loadPlayer()
	{
		CalculatePlayerDimensions();
		initializePlayerImage();
	}

	void PlayerView::CalculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
			player_width,
			player_height,
			sf::Vector2f(0, 0));
	}

	 //updqate

	void PlayerView::update()
	{
		updatePlayerPosition();
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calculatePlayerPosition());
	}

	sf::Vector2f PlayerView::calculatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}

	//render
	void PlayerView::render()
	{
		switch (player_controller->getPlayerState())
		{
		case PlayerState::ALIVE:
			drawPlayer();
			break;
		}
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}

}
