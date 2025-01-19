#include "stdafx.h"
#include "secondScene.h"

HRESULT secondScene::init(void)
{
	IMAGEMANAGER->addImage("배경화면", "image/background/loopBG.bmp", 5120, 720);

	//루프 변수들 초기화
	_offsetX = _offsetY = 0;
	_bgSpeed = 0;
	
	int a;

	IMAGEMANAGER->addFrameImage("그린피쉬", "image/object/Greenfish.bmp", 1250, 540, 5, 3, true, RGB(255, 0, 255)); //프레임이미지넣기

	//if (count % 10 == 0)
	//{
		//a++;
		//if a == 5
		//{
			
		//}
	//}
	//_GreenFish = RectMakeCenter(600, 300, );
	

	return S_OK;
}

void secondScene::release(void)
{
}

void secondScene::update(void)
{
	_offsetX++;
	_bgSpeed += 3;
}

void secondScene::render(void)
{
	IMAGEMANAGER->loopRender("배경화면", getMemDC(), &RectMake(0, 0, WINSIZEX, WINSIZEY), _bgSpeed, 0);
	//IMAGEMANAGER->render("");
	//IMAGEMANAGER->frameRender("너검마", getMemDC(), rc.left, rc.top, a, 0);//프레임이미지그리기
}