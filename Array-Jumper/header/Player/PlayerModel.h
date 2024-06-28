#pragma once

namespace Player
{

	enum class PlayerState
	{
		ALIVE,
		DEAD
	};

	class PlayerModel
	{
		int current_position;
		PlayerState player_state;

	public:

		//getter setter
		//position
		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		//playerState
		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
	};
}