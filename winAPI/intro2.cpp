#include "stdafx.h"
#include "intro2.h"

HRESULT intro2::init(void)
{
	IMAGEMANAGER->addImage("인트로2", "image/background/intro2.bmp", WINSIZEX, WINSIZEY);
	_bgAlpha = 0;

	return S_OK;
}

void intro2::release(void)
{

}

void intro2::update(void)
{
	_bgAlpha += 0.5f;

	if (_bgAlpha >= 255) _bgAlpha = 255;
}

void intro2::render(void)
{
	IMAGEMANAGER->alphaRender("인트로2", getMemDC(), 0, 0, _bgAlpha);
}
