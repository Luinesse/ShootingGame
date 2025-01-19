#pragma once
#include "singletonBase.h"

#define KEYMAX 256

class keyManager : public singletonBase<keyManager>
{
private:
	BOOL _keyUp[KEYMAX];
	BOOL _keyDown[KEYMAX];

public:
	//키매니져 초기화
	HRESULT init(void);

	//키가 한번만 눌렸는지
	bool isOnceKeyDown(int key);
	//한번 누르고 띄었는지
	bool isOnceKeyUp(int key);
	//키가 계속 눌려 있는지
	bool isStayKeyDown(int key);
	//토글키
	bool isToggleKey(int key);

	keyManager() {}
	~keyManager() {}
};