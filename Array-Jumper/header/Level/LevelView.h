#pragma once
#include "LevelController.h"
#include "../UI/UIElement/ImageView.h"


namespace Level
{
	 class LevelView
	 {
		 LevelController* level_controller;
		 sf::RenderWindow* game_window;

		 UI::UIElement::ImageView* background_image;
		 const float background_alpha = 110.f;

		 void createImages();
		 void initializeImages();
		 void updateImages();
		 void drawLevel();
		 void deleteImages();

	 public:
		 LevelView(LevelController* controller);
		 ~LevelView();

		 void initialize();
		 void update();
		 void render();

	 };
}
