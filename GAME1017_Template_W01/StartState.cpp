#include "StartState.h"

StartState::StartState()
{
	int src[4] = { 0,0,200,100 };
	int dst[4] = { WIDTH/2,HEIGHT/2,400,300 };
	m_pSprite = new Sprite(src, dst, "Img/circle.png", "circles");
	int src2[4] = { 0,0,400,100};
	int dst2[4] = { WIDTH / 2,2*HEIGHT / 3,400,100 };
	m_pPlayButton = new PlayButton(src2, dst2, "Img/play.png", "play");

}

void StartState::Update()
{
	m_pPlayButton->Update();
}

void StartState::Render()
{
	m_pSprite->Render();
	m_pPlayButton->Render();
}

void StartState::Enter()
{
}

void StartState::Exit()
{
}

void StartState::Resume()
{
}
