#include "stdafx.h"
#include "startScene.h"

HRESULT startScene::init(void)
{
		
	IMAGEMANAGER->addImage("�����ؽ�Ʈ", "image/background/����(����).bmp", 1000, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("Ž�����", "image/background/explore start.bmp", 239, 69, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("Ž������", "image/background/explore end.bmp", 239, 69, true, RGB(255, 0, 255));
	

	_explore_start = RectMakeCenter(200, 500, 239, 69);
	_explore_end = RectMakeCenter(200, 580, 239, 69);
	

	_bgAlpha = 0;
	_alpha = 255;
	

	return S_OK;
}

void startScene::release(void)
{
}

void startScene::update(void)
{
	//_mouse = RectMakeCenter(_ptMouse.x, _ptMouse.y, 1, 1);
	_alpha -= 3.0f;

	if (_alpha <= 0) _alpha = 255;

	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
	
	
}

void startScene::render(void)
{
	IMAGEMANAGER->alphaRender("����ȭ��", getMemDC(), 0, 0, _bgAlpha);

	//if (_bgAlpha >= 160) IMAGEMANAGER->alphaRender("�����ؽ�Ʈ", getMemDC(), 130, WINSIZEY / 2 + 220, _alpha);

	
	IMAGEMANAGER->alphaRender("Ž������", getMemDC(), _explore_end.left, _explore_end.top,_bgAlpha);
	IMAGEMANAGER->alphaRender("Ž�����", getMemDC(), _explore_start.left, _explore_start.top, _bgAlpha);
}