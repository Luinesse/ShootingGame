#include "stdafx.h"
#include "intro1.h"

HRESULT intro1::init(void)
{
	IMAGEMANAGER->addImage("인트로1", "image/background/intro1.bmp", WINSIZEX, WINSIZEY);
	_bgAlpha = 0;

	return S_OK;
}

void intro1::release(void)
{
	
}

void intro1::update(void)
{
	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
}

void intro1::render(void)
{
	IMAGEMANAGER->alphaRender("인트로1", getMemDC(), 0, 0, _bgAlpha);
}
