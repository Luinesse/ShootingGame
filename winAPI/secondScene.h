#pragma once
#include "gameNode.h"

class secondScene : public gameNode
{
private:
	//루프용 변수(x, y)
	int _offsetX;
	int _offsetY;
	//루프될 배경의 이동속도(x)
	int _bgSpeed;

	RECT _GreenFish;	
public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	secondScene() {}
	~secondScene() {}
};