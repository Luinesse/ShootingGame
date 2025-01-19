#include "stdafx.h"
#include "game_explanation.h"

HRESULT game_explanation::init(void)
{
	IMAGEMANAGER->addImage("���Ӽ���", "image/background/game explanation.bmp", WINSIZEX, WINSIZEY);
	_bgAlpha = 0;

	return S_OK;
}

void game_explanation::release(void)
{
}

void game_explanation::update(void)
{
	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
}

void game_explanation::render(void)
{
	IMAGEMANAGER->alphaRender("���Ӽ���", getMemDC(), 0, 0, _bgAlpha);
}
