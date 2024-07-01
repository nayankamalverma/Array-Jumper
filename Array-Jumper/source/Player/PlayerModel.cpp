#include "../../header/Player/PlayerModel.h"

namespace Player
{
	PlayerModel::PlayerModel()
	{
		
	}

	PlayerModel::~PlayerModel()
	{
		
	}
	void PlayerModel::initialize()
	{
		player_state = PlayerState::ALIVE;
	}
	void PlayerModel::update()
	{
		
	}

	void PlayerModel::render()
	{
		
	}


	PlayerState PlayerModel::getPlayerState()
	{
		return player_state;
	}

	void PlayerModel::setPlayerState(PlayerState new_player_state)
	{
		player_state = new_player_state;
	}

	int PlayerModel::getCurrentPosition()
	{
		return current_position;
	}

	void PlayerModel::setCurrentPosition(int new_position)
	{
		current_position = new_position;
	}

	void PlayerModel::resetPlayer()
	{
		setCurrentPosition(0);
		setPlayerState(PlayerState::ALIVE);
	}


}
