#include "stdafx.h"
#include "intro5.h"

HRESULT intro5::init(void)
{
	IMAGEMANAGER->addImage("��Ʈ��5", "image/background/intro5.bmp", WINSIZEX, WINSIZEY);
	_bgAlpha = 0;
	
	return S_OK;
}

void intro5::release(void)
{

}

void intro5::update(void)
{
	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
}

void intro5::render(void)
{
	IMAGEMANAGER->alphaRender("��Ʈ��5", getMemDC(), 0, 0, _bgAlpha);
}