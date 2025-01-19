#include "vectorMonster.h"

void Monster::MonsterSetting()
{
	_statitus MonsterDove[100];
	for (int i = 0; i < 100; i++)
	{
		MonsterDove[i]._atk = 10;
		MonsterDove[i]._hp = 5;
		MonsterDove[i]._spd = 5.0f;
		MonsterDove[i]._name = "ºñµÑ±â";
		_MonsterV.push_back(MonsterDove[i]);
	} 


}

