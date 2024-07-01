#pragma once
#include <initializer_list>

#include "MovementDirection.h"
#include "../Event/EventService.h"

namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum class PlayerState;

	class PlayerController
	{
		PlayerView* player_view;
		PlayerModel* player_model;

		Event::EventService* event_service;

		void readInput();
		void resetPlayer();
		void destroy();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		void move(MovementDirection direction);
		bool isPositionInBound(int targetPosition);

		int getCurrentPosition();
	};
}
