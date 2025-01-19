#pragma once
#include "gameNode.h"

class game_explanation :public gameNode
{
private:
	float _bgAlpha;
public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	game_explanation() {}
	~game_explanation() {}
};

