#include "stdafx.h"
#include "secondScene.h"

HRESULT secondScene::init(void)
{
	IMAGEMANAGER->addImage("���ȭ��", "image/background/loopBG.bmp", 5120, 720);

	//���� ������ �ʱ�ȭ
	_offsetX = _offsetY = 0;
	_bgSpeed = 0;
	
	int a;

	IMAGEMANAGER->addFrameImage("�׸��ǽ�", "image/object/Greenfish.bmp", 1250, 540, 5, 3, true, RGB(255, 0, 255)); //�������̹����ֱ�

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
	IMAGEMANAGER->loopRender("���ȭ��", getMemDC(), &RectMake(0, 0, WINSIZEX, WINSIZEY), _bgSpeed, 0);
	//IMAGEMANAGER->render("");
	//IMAGEMANAGER->frameRender("�ʰ˸�", getMemDC(), rc.left, rc.top, a, 0);//�������̹����׸���
}