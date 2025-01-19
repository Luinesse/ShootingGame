#pragma once
#include "gameNode.h"

class intro5 :public gameNode
{
private:
	float _bgAlpha;

public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	intro5() {}
	~intro5() {}
};