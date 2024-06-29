#pragma once
#include "../UI/UIElement/ImageView.h"

namespace Player
{
	class PlayerController;

	class PlayerView
	{
		PlayerController* player_controller;
		UI::UIElement::ImageView* player_image;
		sf::RenderWindow* game_window;

		float player_height;
		float player_width;

		void initializePlayerImage();
		void drawPlayer();
		void loadPlayer();
		void CalculatePlayerDimensions();
		void updatePlayerPosition();
		sf::Vector2f calculatePlayerPosition();
		

	public:
		PlayerView(PlayerController* player_controller);
		virtual ~PlayerView();

		void initialize();
		void update();
		void render();
	};
}
