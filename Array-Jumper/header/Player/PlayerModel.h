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
		const int max_lives = 3;
		int current_lives;

	public:

		PlayerModel();
		~PlayerModel();

		void initialize();
		void update();
		void render();

		//position
		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		void resetPosition();
		//playerState
		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		//lives
		int getCurrentLives();
		void decrementLife();
		void resetPlayer();
	};
}