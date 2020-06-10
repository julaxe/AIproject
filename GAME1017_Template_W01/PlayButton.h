#pragma once
#include "Button.h"
class PlayButton : public Button {
private:
public:
	PlayButton(int src[4], int dst[4], const char* path, const std::string key) : Button(src, dst, path, key) {};
	void Execute();
};
