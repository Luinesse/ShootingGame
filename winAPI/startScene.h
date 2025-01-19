#pragma once
#include "gameNode.h"

class startScene : public gameNode
{
private:
	float _alpha;
	float _bgAlpha;
	

	RECT _explore_start;
	RECT _explore_end;

	
public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	startScene() {}
	~startScene() {}
};