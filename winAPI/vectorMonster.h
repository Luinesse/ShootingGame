#pragma once
#include "stdafx.h"
#include "gameNode.h"
#include <vector>

typedef enum type						//아이템타임 이넘
{
	SWORD = 0,
	ARMOR = 1,
	BOOTS = 2
};

typedef struct _statitus				//스테이터스설정 구조체
{
	type _type;                 //종류
	string _name;               //이름
	int _atk;                   //공격력
	int _hp;                   //방어력
	int _spd;                   //이동속도
};

class Monster
{
private:
	vector<_statitus> _MonsterV;			//_statitus구조체를 이용하여 만든 벡터
public:
	void MonsterSetting();

	Monster() {}
	~Monster() {}
};