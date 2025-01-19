#pragma once
#include "stdafx.h"
#include "gameNode.h"
#include <vector>

typedef enum type						//������Ÿ�� �̳�
{
	SWORD = 0,
	ARMOR = 1,
	BOOTS = 2
};

typedef struct _statitus				//�������ͽ����� ����ü
{
	type _type;                 //����
	string _name;               //�̸�
	int _atk;                   //���ݷ�
	int _hp;                   //����
	int _spd;                   //�̵��ӵ�
};

class Monster
{
private:
	vector<_statitus> _MonsterV;			//_statitus����ü�� �̿��Ͽ� ���� ����
public:
	void MonsterSetting();

	Monster() {}
	~Monster() {}
};