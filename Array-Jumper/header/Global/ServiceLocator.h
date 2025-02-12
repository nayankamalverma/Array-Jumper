#pragma once
#include "../../header/Graphics/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Sound/SoundService.h""
#include "../Gameplay/GameplayService.h"
#include "../Level/LevelService.h"
#include "../Player/PlayerService.h"

namespace Global
{
    class ServiceLocator
    {
    private:
        Graphics::GraphicService* graphic_service;
        Event::EventService* event_service;
        Sound::SoundService* sound_service;
        UI::UIService* ui_service;
        Level::LevelService* level_service;
        Player::PlayerService* player_service;
        Gameplay::GameplayService* gameplay_service;

        void createServices();
        void clearAllServices();

    public:
        ServiceLocator();
    	~ServiceLocator();

    	static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();

        Graphics::GraphicService* getGraphicService();
        Event::EventService* getEventService();
        Sound::SoundService* getSoundService();
        UI::UIService* getUIService();
    	Level::LevelService* getLevelService();
        Player::PlayerService* getPlayerService();
        Gameplay::GameplayService* getGameplayService();
        
    };
}
