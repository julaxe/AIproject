#pragma once
#ifndef _BUTTON_H_
#define _BUTTON_H_

#include "Sprite.h"
#include <SDL.h>

// Button will be an example of the command design pattern.
class Button : public Sprite
{
public: // Public methods.
	int Update();
	void Render();
protected: // Private but inherited!
	Button(int src[4], int dst[4], const char* path, const std::string key);
	enum state { STATE_UP, STATE_OVER, STATE_DOWN } m_state;
	bool MouseCollision();
	virtual void Execute() = 0; // Pure virtual method, meaning Button is now an abstract class (interface)!
};

// List button subclasses here...

#endif