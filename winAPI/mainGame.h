#pragma once
#include <vector>
#include <time.h>
#include "gameNode.h"

#define BULLETMAX 100
#define BULLETMAX2 100


typedef struct player
{
	RECT rc;
	int hp;
	int atk;
	float spd;
};

typedef struct player2
{
	RECT rc;
	int hp;
	int atk;
	float spd;
};

struct Bullet
{
	float x, y;				//총알 중심좌표
	float speed;			//이동할 거리(원의 반지름 1로 만들면 계산하기 편하다)
	bool fire;				//총알 발사여부
	RECT rc;
};

struct BulletSecond
{
	float x, y;				//총알 중심좌표
	float speed;			//이동할 거리(원의 반지름 1로 만들면 계산하기 편하다)
	bool fire;				//총알 발사여부
	RECT rc;
};

class mainGame : public gameNode
{
private:
	
	bool _GameStartMode;
	bool _GameinformationMode;
	bool _GameRealStartMode;
	
	bool _Player1_died;
	bool _Player2_died;

	bool _PlayerBarrierOn;
	bool _PlayerSecondBarrierOn;
	bool _PlayerShootingTimeOn;
	bool _PlayerSecondShootingTimeOn;
	
	bool _PlayerVictory;
	bool _PlayerSecondVictory;

	bool _introStart;

	//렉트
	RECT rc;
	Bullet _bullet[BULLETMAX];
	BulletSecond _bulletSecond[BULLETMAX2];
	player _Player;
	player2 _PlayerSecond;
	RECT _PlayerHPBar;
	RECT _PlayerCharHPBar;
	RECT _PlayerSecondHPBar;
	RECT _PlayerSecondCharHPBar;

	RECT _PlayerBarrier;
	RECT _PlayerSecondBarrier;

	RECT _Mouse;
	
	RECT _GameStart;
	RECT _Gameinformation;
	RECT _GameExit;

	RECT _One;
	RECT _Two;
	RECT _Three;
	RECT _START;
	
	RECT _GameEnd_Exit;
	

	RECT _Default;
	RECT _default;
	RECT _IntersectDst1;
	RECT _IntersectDst2;
	RECT _DefaultGamestart;

	

	char abc;

	char _LimitTimeCH[128];

	int count;
	int _time;
	int _time2;
	int _count;
	int _index;

	int _PlayerBarrierTime;
	int _PlayerSecondBarrierTime;
	int _PlayerShootingTime;
	int _PlayerShootingrealTime;

	int _PlayerSecondShootingrealTime;
	int _PlayerSecondShootingTime;

	int _LimitTime;
	
	int _PlayerHPBARDPM;
	int _PlayerSecondHPBARDPM;

	int _SceneCnt;

	int _EndingScene;


	int _321;
public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	void fire(void);
	void move(void);

	void fire2(void);
	void move2(void);

	void frameWork(void);


	mainGame() {}
	~mainGame() {}
};