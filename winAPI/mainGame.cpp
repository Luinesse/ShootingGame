#include "stdafx.h"
#include "mainGame.h"

/*===============================================

			���� �����ұ�?

			��Ʈ�� �� ����
			��������
			��ų
			���� �ΰ����� ���
			

===============================================*/



//================
// # init # �ʱ�ȭ
//================
HRESULT mainGame::init(void)
{
	gameNode::init(TRUE);
	//�̰����� �ʱ�ȭ �Ѵ�
	//�̹���
	IMAGEMANAGER->addImage("��Ʈ��1", "image/background/intro1.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��2", "image/background/intro2.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��3", "image/background/intro3.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��4", "image/background/intro4.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��5", "image/background/intro5.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��6", "image/background/intro6.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��7", "image/background/intro7.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��8", "image/background/intro8.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��9", "image/background/intro9.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��10", "image/background/intro10.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��11", "image/background/intro11.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��12", "image/background/intro12.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��13", "image/background/intro13.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��14", "image/background/intro14.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��15", "image/background/intro15.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��16", "image/background/intro16.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��17", "image/background/intro17.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��18", "image/background/intro18.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��19", "image/background/intro19.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��20", "image/background/intro20.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��21", "image/background/intro21.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("��Ʈ��22", "image/background/intro22.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("�̽��͹���", "image/background/BUG.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("���", "image/background/���.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addFrameImage("�÷��̾�1", "image/player1.bmp",1200,67 ,6, 1, true, RGB(0, 0, 255));
	IMAGEMANAGER->addFrameImage("�÷��̾�2", "image/player2.bmp", 6164, 67, 23, 1, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("����ȭ��", "image/background/����ֹ��.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("���Ӽ���ȭ��", "image", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("���ӽ���", "image/Ui start.bmp", 532, 132, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("���Ӽ���", "image/Ui option.bmp", 532, 132, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("������", "image/Ui Exit.bmp", 532, 132, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("���콺", "image/���콺.bmp", 30, 30, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("Ŭ�����콺", "image/Ŭ�����콺.bmp", 30, 30, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�Ѿ�1", "image/bullet1.bmp", 52, 12, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�Ѿ�2", "image/bullet2.bmp", 52, 12, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�÷��̾�1ĳ���͵�ü��", "image/�÷��̾�1ĳ���͵�ü��.bmp", 550, 60, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�÷��̾�2ĳ���͵�ü��", "image/�÷��̾�2ĳ���͵�ü��.bmp", 550, 60, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("3", "image/3.bmp", 800, 1000, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("2", "image/2.bmp", 800, 1000, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("1", "image/1.bmp", 800, 1000, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("START", "image/START.bmp", 1000, 600, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�÷��̾�2�踮��", "image/�÷��̾�1�踮��.bmp", 35, 145, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�÷��̾�1�踮��", "image/�÷��̾�2�踮��.bmp", 35, 145, true, RGB(0, 0, 255));
	IMAGEMANAGER->addImage("�ܰ����й�", "image/�ܰ����й�.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("�ΰ��й�", "image/�ΰ��й�.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("�ΰ��¸����â", "image/�ΰ��¸����â.bmp", WINSIZEX, WINSIZEY);
	IMAGEMANAGER->addImage("�ܰ��ν¸����â", "image/�ܰ��ν¸����â.bmp", WINSIZEX, WINSIZEY);
		//bool
	_GameStartMode = false;
	_GameinformationMode = false;

	_Player1_died = false;
	_Player2_died = false;
	_GameRealStartMode = false;

	_PlayerBarrierOn = false;
	_PlayerSecondBarrierOn = false;
	_PlayerShootingTimeOn = false;
	_PlayerSecondShootingTimeOn = false;

	_PlayerVictory = false;
	_PlayerSecondVictory = false;

	_introStart = true;
	//����
	count = 0;
	_count = 0;
	_index = 0;//������,���߿�
	_time = 0;
	_time2 = 0;

	_321 = 0;

	_PlayerBarrierTime = 0;
	_PlayerSecondBarrierTime = 0;
	_PlayerShootingTime = 0;
	_PlayerSecondShootingTime = 0;
	_LimitTime = 6000;

	_PlayerHPBARDPM = 0;
	_PlayerSecondHPBARDPM = 0;
	_PlayerSecondShootingrealTime = 15;
	_PlayerShootingrealTime = 15;
	_EndingScene = 0;
	_SceneCnt = 0;
	//��Ʈ
	_GameStart = RectMakeCenter(1520, 650, 532, 132);
	_Gameinformation = RectMakeCenter(1500, 680, 532, 132);
	_GameExit = RectMakeCenter(1500, 860, 532, 132);

	_PlayerHPBar = RectMakeCenter(427, 100, 500, 60);
	_PlayerCharHPBar = RectMakeCenter(400, 100, 550, 60);
	_PlayerSecondHPBar = RectMakeCenter(1573, 100, 500, 60);
	_PlayerSecondCharHPBar = RectMakeCenter(1600, 100, 550, 60);

	_Three = RectMakeCenter(960, 540, 800, 1000);
	_Two = RectMakeCenter(960, 540, 800, 1000);
	_One = RectMakeCenter(960, 540, 800, 1000);
	_START = RectMakeCenter(960, 540, 1000, 600);

	_GameEnd_Exit = RectMakeCenter(1000, 800, 532, 132);

	//�÷��̾� �ɷ�ġ����
	_Player.rc = RectMakeCenter(400, 400, 200, 67);
	_Player.spd = 6.0f;
	_Player.hp = 100;

	_PlayerSecond.rc = RectMakeCenter(1500, 500, 200, 67);
	_PlayerSecond.spd = 6.0f;
	_PlayerSecond.hp = 100;
	
	//�÷��̾� ź������
	for (int i = 0; i < BULLETMAX; i++)
	{
		_bullet[i].speed = 20.0f;//ź���ӵ�
		_bullet[i].fire = false;//�Ѿ˽���?
	}

	for (int i = 0; i < BULLETMAX2; i++)
	{
		_bulletSecond[i].speed = 20.0f;//ź���ӵ�
		_bulletSecond[i].fire = false;//�Ѿ˽���?
	}

	//��

	return S_OK;
}

//=================
// # release # ����
//=================
void mainGame::release(void)
{
	gameNode::release();
	//�����Ҵ��� �ߴٸ� ���⿡�� SAFE_DELETE() ���

	
}

//====================
// # update # ������Ʈ
//====================
void mainGame::update(void)
{
	gameNode::update();
	//�̰����� ����, Ű����, ���콺���� ������Ʈ �Ѵ�
	// ���콺 
	_Mouse = RectMakeCenter(_ptMouse.x, _ptMouse.y, 30, 30);//���콺 ��Ʈ

	if (_introStart == true)
	{
		if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
		{
			_SceneCnt++;
		}
	}
	
	if (_SceneCnt > 22)
	{
		_introStart = false;
	}

	if (_GameStartMode == true)
	{
		_321++;
		if(_321 > 430)
		_GameRealStartMode = true;
	}

	// P1
	if (KEYMANAGER->isStayKeyDown('A') && _Player.rc.left >= 0
		&& _GameRealStartMode == true && _Player1_died == false)//����
	{
		_Player.rc.left -= _Player.spd;
		_Player.rc.right -= _Player.spd;
	}
	if (KEYMANAGER->isStayKeyDown('D') && _Player.rc.right <= 860 
		&& _GameRealStartMode == true && _Player1_died == false)//������
	{
		_Player.rc.left += _Player.spd;
		_Player.rc.right += _Player.spd;
	}
	if (KEYMANAGER->isStayKeyDown('W') && _Player.rc.top >= 130 
		&& _GameRealStartMode == true && _Player1_died == false)//��
	{
		_Player.rc.top -= _Player.spd;
		_Player.rc.bottom -= _Player.spd;
	}
	if (KEYMANAGER->isStayKeyDown('S') && _Player.rc.bottom <= 1080 
		&& _GameRealStartMode == true && _Player1_died == false)//�Ʒ�
	{
		_Player.rc.top += _Player.spd;
		_Player.rc.bottom += _Player.spd;
	}
	if (KEYMANAGER->isStayKeyDown('1') && _GameRealStartMode == true)
	{
		_PlayerSecondBarrierOn = true;
	}
	if (_PlayerSecondBarrierOn == true)
	{
		_PlayerSecondBarrierTime++;
		if (_PlayerSecondBarrierTime > 700)
		{
			_PlayerSecondBarrierOn = false;
		}
	}
	if (KEYMANAGER->isOnceKeyDown('2') && _GameRealStartMode == true)
	{
		_PlayerShootingTimeOn = true;
		
	}
	if (_PlayerShootingTimeOn == true)
	{
		_PlayerShootingTime++;
		if (_PlayerShootingTime < 500)
		{
			_PlayerShootingrealTime = 3;
		}
		if (_PlayerShootingTime > 500)
		{
			_PlayerShootingrealTime = 15;
		}
	}
	
	if (KEYMANAGER->isStayKeyDown(VK_SHIFT) && _GameRealStartMode == true && _Player1_died == false)//�Ѿ˽��Ű
	{
		_time++;
		if (_time == _PlayerShootingrealTime)//�Ѿ˰���
		{
			fire();
		}
		if (_time > _PlayerShootingrealTime)
		{
			_time = 0;
		}
	}

	// P2
	if (KEYMANAGER->isStayKeyDown(VK_LEFT) && _PlayerSecond.rc.left >= 1000 
		&& _GameRealStartMode == true && _Player2_died == false)//����
	{
		_PlayerSecond.rc.left -= _PlayerSecond.spd;
		_PlayerSecond.rc.right -= _PlayerSecond.spd;
	}
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT) && _PlayerSecond.rc.right <= 1920 
		&& _GameRealStartMode == true && _Player2_died == false)//������
	{
		_PlayerSecond.rc.left += _PlayerSecond.spd;
		_PlayerSecond.rc.right += _PlayerSecond.spd;
	}
	if (KEYMANAGER->isStayKeyDown(VK_UP) && _PlayerSecond.rc.top >= 130 
		&& _GameRealStartMode == true && _Player2_died == false)//��
	{
		_PlayerSecond.rc.top -= _PlayerSecond.spd;
		_PlayerSecond.rc.bottom -= _PlayerSecond.spd;
	}
	if (KEYMANAGER->isStayKeyDown(VK_DOWN) && _PlayerSecond.rc.bottom <= 1080 
		&& _GameRealStartMode == true && _Player2_died == false)//�Ʒ�
	{
		_PlayerSecond.rc.top += _PlayerSecond.spd;
		_PlayerSecond.rc.bottom += _PlayerSecond.spd;
	}
	if (KEYMANAGER->isOnceKeyDown(VK_INSERT) && _GameRealStartMode == true)
	{
		_PlayerBarrierOn = true;
	}
	if (_PlayerBarrierOn == true)
	{
		_PlayerBarrierTime++;
		if (_PlayerBarrierTime > 700)
		{
			_PlayerBarrierOn = false;
		}
	}
	if (KEYMANAGER->isOnceKeyDown(VK_HOME) && _GameRealStartMode == true)
	{
		_PlayerSecondShootingTimeOn = true;
	}
	if (_PlayerSecondShootingTimeOn == true)
	{
		_PlayerSecondShootingTime++;
		if (_PlayerSecondShootingTime < 500)
		{
			_PlayerSecondShootingrealTime = 3;
		}
		if (_PlayerSecondShootingTime > 500)
		{
			_PlayerSecondShootingrealTime = 15;
		}
	}
	if(KEYMANAGER->isStayKeyDown(VK_RETURN)&& _GameRealStartMode == true && _Player2_died == false)//�Ѿ˽��Ű
	{
		_time2++;
		if (_time2 == _PlayerSecondShootingrealTime)//�Ѿ˰���
		{
			fire2();
		}
		if (_time2 > _PlayerSecondShootingrealTime)
		{
			_time2 = 0;
		}
	}
	
	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON)&& _introStart==false)//Ŭ�����ü���
	{
		if (IntersectRect(&_Default, &_Mouse, &_GameStart))
		{
			_GameStartMode = true;
		}
		if (IntersectRect(&_Default, &_Mouse, &_GameExit))
		{
			PostQuitMessage(0);
		}
		if (IntersectRect(&_Default, &_Mouse, &_GameEnd_Exit))
		{
			PostQuitMessage(0);

		}
	}

	for (int i = 0; i < BULLETMAX; i++)
	{
		
		if (IntersectRect(&_IntersectDst1, &_bullet[i].rc, &_PlayerSecondBarrier)&& _PlayerBarrierOn == true)
		{
			_bullet[i].rc.left = 3000;
			_bullet[i].rc.right = 3010;
			_bullet[i].rc.top = 2990;
			_bullet[i].rc.bottom = 3010;
		}
		if (IntersectRect(&_default, &_bullet[i].rc, &_PlayerSecond.rc) && _Player2_died == false)
		{
			_PlayerSecondHPBar.left += 35;

			_PlayerHPBARDPM++;

			_bullet[i].rc.left = 3000;
			_bullet[i].rc.right = 3010;
			_bullet[i].rc.top = 2990;
			_bullet[i].rc.bottom = 3010;
		}
	}
	if (_PlayerSecondHPBar.left >= 1820)
	{
		_Player2_died = true;
		_PlayerVictory = true;
	}

	for (int i = 0; i < BULLETMAX2; i++)
	{
		if (IntersectRect(&_default, &_bulletSecond[i].rc, &_Player.rc) && _Player1_died == false)
		{

			_PlayerHPBar.right -= 35;

			_PlayerSecondHPBARDPM++;

			_bulletSecond[i].rc.left = -500;
			_bulletSecond[i].rc.right = -510;
			_bulletSecond[i].rc.top = -490;
			_bulletSecond[i].rc.bottom = -510;
		}
		if (_PlayerSecondBarrierOn == true)
		{
			if (IntersectRect(&_IntersectDst2, &_bulletSecond[i].rc, &_PlayerBarrier))
			{
				_bulletSecond[i].rc.left = -500;
				_bulletSecond[i].rc.right = -510;
				_bulletSecond[i].rc.top = -490;
				_bulletSecond[i].rc.bottom = -510;
			}
		}
	}

	if (_PlayerHPBar.right <= 180)
	{
		_Player1_died = true;
		_PlayerSecondVictory=true;
	}

	


	_PlayerBarrier = RectMakeCenter(_Player.rc.right + 50, _Player.rc.top + 33, 35, 141);
	_PlayerSecondBarrier = RectMakeCenter(_PlayerSecond.rc.left - 50, _PlayerSecond.rc.top + 33, 35, 141);

	wsprintf(_LimitTimeCH, TEXT("%d"), _LimitTime);//���ھ� ��Ͽ�
	if(_GameRealStartMode==true)
	_LimitTime--;

	if (_LimitTime <= 0)
	{
		_GameRealStartMode = false;

		if (_GameRealStartMode == false)
		{
			if (_PlayerHPBARDPM > _PlayerSecondHPBARDPM)
			{
				_PlayerVictory = true;
			}
			if (_PlayerSecondHPBARDPM > _PlayerHPBARDPM)
			{
				_PlayerSecondVictory = true;
			}
		}
	}
	

	move();//�Լ�����
	move2();

	frameWork();	
	
	//=============================================================
	//������� ������ HDC�� �׸���
	this->getBackBuffer()->render(getHDC());
}

void mainGame::render(void)
{
	ShowCursor(FALSE);
	if (_introStart == true)
	{
		if (_SceneCnt == 0)
			IMAGEMANAGER->render("��Ʈ��1", getMemDC());
		if (_SceneCnt == 1)
			IMAGEMANAGER->render("��Ʈ��2", getMemDC());
		if (_SceneCnt == 2)
			IMAGEMANAGER->render("��Ʈ��3", getMemDC());
		if (_SceneCnt == 3)
			IMAGEMANAGER->render("��Ʈ��4", getMemDC());
		if (_SceneCnt == 4)
			IMAGEMANAGER->render("��Ʈ��5", getMemDC());
		if (_SceneCnt == 5)
			IMAGEMANAGER->render("��Ʈ��6", getMemDC());
		if (_SceneCnt == 6)
			IMAGEMANAGER->render("��Ʈ��7", getMemDC());
		if (_SceneCnt == 7)
			IMAGEMANAGER->render("��Ʈ��8", getMemDC());
		if (_SceneCnt == 8)
			IMAGEMANAGER->render("��Ʈ��9", getMemDC());
		if (_SceneCnt == 9)
			IMAGEMANAGER->render("��Ʈ��10", getMemDC());
		if (_SceneCnt == 10)
			IMAGEMANAGER->render("��Ʈ��11", getMemDC());
		if (_SceneCnt == 11)
			IMAGEMANAGER->render("��Ʈ��12", getMemDC());
		if (_SceneCnt == 12)
			IMAGEMANAGER->render("��Ʈ��13", getMemDC());
		if (_SceneCnt == 13)
			IMAGEMANAGER->render("��Ʈ��14", getMemDC());
		if (_SceneCnt == 14)
			IMAGEMANAGER->render("��Ʈ��15", getMemDC());
		if (_SceneCnt == 15)
			IMAGEMANAGER->render("��Ʈ��16", getMemDC());
		if (_SceneCnt == 16)
			IMAGEMANAGER->render("��Ʈ��17", getMemDC());
		if (_SceneCnt == 17)
			IMAGEMANAGER->render("��Ʈ��18", getMemDC());
		if (_SceneCnt == 18)
			IMAGEMANAGER->render("��Ʈ��19", getMemDC());
		if (_SceneCnt == 19)
			IMAGEMANAGER->render("��Ʈ��20", getMemDC());
		if (_SceneCnt == 20)
			IMAGEMANAGER->render("��Ʈ��21", getMemDC());
		if (_SceneCnt == 21)
			IMAGEMANAGER->render("��Ʈ��22", getMemDC());
		if (_SceneCnt == 22)
			//IMAGEMANAGER->render("�̽��͹���", getMemDC());


		IMAGEMANAGER->render("���콺", getMemDC(), _Mouse.left, _Mouse.top);
	}

	if (_GameStartMode == false && _introStart == false)
	{
		IMAGEMANAGER->render("���", getMemDC());
		IMAGEMANAGER->render("���ӽ���", getMemDC(), _GameStart.left, _GameStart.top);
		IMAGEMANAGER->render("������", getMemDC(), _GameExit.left, _GameExit.top);
		IMAGEMANAGER->render("���콺", getMemDC(), _Mouse.left, _Mouse.top);
		if (IntersectRect(&_DefaultGamestart, &_Mouse, &_GameStart))
		{
			IMAGEMANAGER->render("Ŭ�����콺", getMemDC(), _Mouse.left, _Mouse.top);
		}
		if (IntersectRect(&_DefaultGamestart, &_Mouse, &_GameExit))
		{
			IMAGEMANAGER->render("Ŭ�����콺", getMemDC(), _Mouse.left, _Mouse.top);
		}
		if (IntersectRect(&_DefaultGamestart, &_Mouse, &_Gameinformation))
		{
			IMAGEMANAGER->render("Ŭ�����콺", getMemDC(), _Mouse.left, _Mouse.top);
		}
	}
	/*
	if (_GameinformationMode == false)
	{
		IMAGEMANAGER->render("���Ӽ���ȭ��", getMemDC());
		//IMAGEMANAGER->render("���콺", getMemDC(), _Mouse.left, _Mouse.top);
	}
	*/
	if (_GameStartMode == true)
	{
		IMAGEMANAGER->render("����ȭ��", getMemDC());
		if (_321 > 30 && _321 < 130)
		{
			IMAGEMANAGER->render("3", getMemDC(), _Three.left, _Three.top);
		}
		if (_321 > 130 && _321 < 230)
		{
			IMAGEMANAGER->render("2", getMemDC(), _Two.left, _Two.top);
		}
		if (_321 > 230 && _321 <= 330)
		{
			IMAGEMANAGER->render("1", getMemDC(), _One.left, _One.top);
		}
		if (_321 > 330 && _321 < 430)
		{
			IMAGEMANAGER->render("START", getMemDC(), _START.left, _START.top);
		}
		
		if (_Player2_died == false)
		{
			IMAGEMANAGER->frameRender("�÷��̾�2", getMemDC(), _PlayerSecond.rc.left, _PlayerSecond.rc.top, _index, 0);
			//Rectangle(getMemDC(), _PlayerSecond.rc.left, _PlayerSecond.rc.top, _PlayerSecond.rc.right, _PlayerSecond.rc.bottom);
			if(_PlayerSecondBarrierOn==true)
			IMAGEMANAGER->render("�÷��̾�2�踮��",getMemDC(), _PlayerBarrier.left, _PlayerBarrier.top);
		}
		if (_Player1_died == false)
		{
			IMAGEMANAGER->frameRender("�÷��̾�1", getMemDC(), _Player.rc.left, _Player.rc.top, _index, 0);
			//(getMemDC(), _Player.rc.left, _Player.rc.top, _Player.rc.right, _Player.rc.bottom);
			if(_PlayerBarrierOn==true)
			IMAGEMANAGER->render("�÷��̾�1�踮��", getMemDC(), _PlayerSecondBarrier.left, _PlayerSecondBarrier.top);
		}
		
		for (int i = 0; i < BULLETMAX; i++)
		{
			IMAGEMANAGER->render("�Ѿ�1", getMemDC(), _bullet[i].rc.left, _bullet[i].rc.top);
		}
		for (int i = 0; i < BULLETMAX2; i++)
		{
			IMAGEMANAGER->render("�Ѿ�2",getMemDC(), _bulletSecond[i].rc.left, _bulletSecond[i].rc.top);
		}
		IMAGEMANAGER->render("�÷��̾�1ĳ���͵�ü��", getMemDC(), _PlayerCharHPBar.left, _PlayerCharHPBar.top);
		if (_Player1_died == false)
		{
			HBRUSH myBrush = (HBRUSH)CreateSolidBrush(RGB(163, 0, 0));
			HBRUSH oldBrush = (HBRUSH)SelectObject(getMemDC(), myBrush);
			Rectangle(getMemDC(), _PlayerHPBar.left, _PlayerHPBar.top, _PlayerHPBar.right, _PlayerHPBar.bottom);
			SelectObject(getMemDC(), oldBrush);
			DeleteObject(myBrush);
		}
		IMAGEMANAGER->render("�÷��̾�2ĳ���͵�ü��", getMemDC(), _PlayerSecondCharHPBar.left, _PlayerSecondCharHPBar.top);
		if (_Player2_died == false)
		{
			HBRUSH myBrush = (HBRUSH)CreateSolidBrush(RGB(163, 0, 0));
			HBRUSH oldBrush = (HBRUSH)SelectObject(getMemDC(), myBrush);
			Rectangle(getMemDC(), _PlayerSecondHPBar.left, _PlayerSecondHPBar.top, _PlayerSecondHPBar.right, _PlayerSecondHPBar.bottom);
			SelectObject(getMemDC(), oldBrush);
			DeleteObject(myBrush);
		}
		IMAGEMANAGER->render("���콺", getMemDC(), _Mouse.left, _Mouse.top);
		TextOut(getMemDC(), 910, 100, _LimitTimeCH, 2);//���ھ����
		if (_PlayerVictory == true)
		{
			IMAGEMANAGER->render("�ܰ����й�", getMemDC());
			_EndingScene++;
			if (_EndingScene > 300)
			{
				IMAGEMANAGER->render("�ΰ��¸����â", getMemDC());
				IMAGEMANAGER->render("������", getMemDC(), _GameEnd_Exit.left, _GameEnd_Exit.top);
				IMAGEMANAGER->render("���콺", getMemDC(), _Mouse.left, _Mouse.top);
			}
		}
		if (_PlayerSecondVictory == true)
		{
			IMAGEMANAGER->render("�ΰ��й�", getMemDC());
			_EndingScene++;
			if (_EndingScene > 300)
			{
				IMAGEMANAGER->render("�ܰ��ν¸����â", getMemDC());
				IMAGEMANAGER->render("������", getMemDC(), _GameEnd_Exit.left, _GameEnd_Exit.top);
				IMAGEMANAGER->render("���콺", getMemDC(), _Mouse.left, _Mouse.top);
			}
		}
	}
}
	
	
	



void mainGame::frameWork(void)
{
	_count++;
	if (_count % 6 == 1)
	{
		if (_index > 20)
		{
			_index = 0;
		}
		_index++;
	}
}

void mainGame::fire(void)
{
	for (int i = 0; i < BULLETMAX; i++)
	{
		if (_bullet[i].fire) continue;
		_bullet[i].fire = true;
		_bullet[i].rc = RectMakeCenter(_Player.rc.right - 35, _Player.rc.top + 45, 10, 10);
		break;
	}
}

void mainGame::move(void)
{
	for (int i = 0; i < BULLETMAX; i++)
	{
		if (!_bullet[i].fire) continue;
		_bullet[i].rc.left +=  _bullet[i].speed;
		_bullet[i].rc.right +=  _bullet[i].speed;
		if (_bullet[i].rc.right >= 2000)
			_bullet[i].fire =	  false;		
	}
}

void mainGame::fire2(void)
{
	for (int i = 0; i < BULLETMAX2; i++)
	{
		if (_bulletSecond[i].fire) continue;
		_bulletSecond[i].fire = true;
		_bulletSecond[i].rc = RectMakeCenter(_PlayerSecond.rc.left + 15, _PlayerSecond.rc.top + 45, 10, 10);
		break;
	}
}

void mainGame::move2(void)
{
	for (int i = 0; i < BULLETMAX2; i++)
	{
		if (!_bulletSecond[i].fire) continue;
		_bulletSecond[i].rc.left -= _bulletSecond[i].speed;
		_bulletSecond[i].rc.right -= _bulletSecond[i].speed;
		if (_bulletSecond[i].rc.left <= -100)
			_bulletSecond[i].fire = false;
	}
}
