#include "stdafx.h"
#include "intro4.h"

HRESULT intro4::init(void)
{
	IMAGEMANAGER->addImage("��Ʈ��4", "image/background/intro4.bmp", WINSIZEX, WINSIZEY);
	_bgAlpha = 0;
	
	return S_OK;
}

void intro4::release(void)
{

}

void intro4::update(void)
{
	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
}

void intro4::render(void)
{
	IMAGEMANAGER->alphaRender("��Ʈ��4", getMemDC(), 0, 0, _bgAlpha);
}