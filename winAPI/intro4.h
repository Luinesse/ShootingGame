#pragma once
#include "gameNode.h"

class intro4 :public gameNode
{
private:
	float _bgAlpha;

public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	intro4() {}
	~intro4() {}
};