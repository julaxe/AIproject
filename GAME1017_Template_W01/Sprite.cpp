#include "Sprite.h"


Sprite::Sprite(int src[4], int dst[4], const char* path, const std::string key)
{
	m_src.x = src[0];
	m_src.y = src[1];
	m_src.w = src[2];
	m_src.h = src[3];
	
	m_dst.w = dst[2];
	m_dst.h = dst[3];

	m_dst.x = dst[0] - m_dst.w/2;
	m_dst.y = dst[1] - m_dst.h/2;
	

	TextureManager::RegisterTexture(path, key);
	m_pText = TextureManager::GetTexture(key);
	m_angle = 0.0;
}

void Sprite::Render()
{
	TextureManager::RegisterTexture("Img/circle.png", "circles");
	SDL_RenderCopyExF(Engine::Instance().GetRenderer(), m_pText, GetSrcP(), GetDstP(), m_angle, 0, SDL_FLIP_NONE);
}
