#pragma once
#include "States.h"
#include "Sprite.h"
#include "TextureManager.h"
#include "Engine.h"
#include "PlayButton.h"
class StartState : public State {
private:
	Sprite* m_pSprite;
	PlayButton* m_pPlayButton;

public:
	StartState();
	void Update(); 
	void Render();     
	void Enter();  
	void Exit();
	void Resume();
};