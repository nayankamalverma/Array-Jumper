#pragma once
#include "LevelController.h"
#include "LevelModel.h"
#include "../UI/UIElement/ImageView.h"


namespace Level
{
	 class LevelView
	 {
		 LevelController* level_controller;
		 sf::RenderWindow* game_window;
		 BoxDimensions box_dimensions;

		 UI::UIElement::ImageView* background_image;
		 UI::UIElement::ImageView* box_image;

		 UI::UIElement::ImageView* target_overlay_image;
		 UI::UIElement::ImageView* letter_one_overlay_image;
		 UI::UIElement::ImageView* letter_two_overlay_image;
		 UI::UIElement::ImageView* letter_three_overlay_image;
		 UI::UIElement::ImageView* obstacle_one_overlay_image;
		 UI::UIElement::ImageView* obstacle_two_overlay_image;

	 	 const float background_alpha = 110.f;

		 void createImages();
		 void initializeImages();
		 void updateImages();
		 void drawLevel();
		 void deleteImages();

	 	void calculateBoxDimensions();
		void calculateBoxWidthHeight();
		void calculateBoxSpacing();
		sf::Vector2f calculateBoxPosition(int index);
	 	UI::UIElement::ImageView* getBoxOverlayImage(BlockType block_type);
		 void drawBox(sf::Vector2f position);
		 void drawBoxValue(sf::Vector2f position, BlockType box_value);

	 public:
		 LevelView(LevelController* controller);
		 ~LevelView();

		 void initialize();
		 void update();
		 void render();

		 BoxDimensions getBoxDimensions();
	 };
}
