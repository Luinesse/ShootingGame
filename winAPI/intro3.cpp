#include "stdafx.h"
#include "intro3.h"

HRESULT intro3::init(void)
{
	IMAGEMANAGER->addImage("인트로3", "image/background/intro3.bmp", WINSIZEX, WINSIZEY);
	_bgAlpha = 0;
	
	return S_OK;
}

void intro3::release(void)
{

}

void intro3::update(void)
{
	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
}

void intro3::render(void)
{
	IMAGEMANAGER->alphaRender("인트로3", getMemDC(), 0, 0, _bgAlpha);
}