#pragma once
#include "gameNode.h"

class secondScene : public gameNode
{
private:
	//������ ����(x, y)
	int _offsetX;
	int _offsetY;
	//������ ����� �̵��ӵ�(x)
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