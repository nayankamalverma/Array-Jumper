#pragma once
#include <initializer_list>

#include "PlayerModel.h"
#include "PlayerView.h"

namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum class PlayerState;

	class PlayerController
	{
		PlayerView* player_view;
		PlayerModel* player_model;

		void destroy();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
	};
}
