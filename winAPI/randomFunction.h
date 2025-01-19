#pragma once
#include "singletonBase.h"

//====================
// # randomFunction # 
//====================
class randomFunction : public singletonBase <randomFunction>
{
public:
	randomFunction()
	{
		srand(GetTickCount());
	}
	~randomFunction() {}

	HRESULT init() { return S_OK; }

	//getInt
	inline int getInt(int num)
	{
		return rand() % num;
	}
	//주의사항: 0이 나오면 터진다
	inline int getFromIntTo(int fromNum, int toNum)
	{
		return rand() % (toNum - fromNum + 1) + fromNum;
	}

	//getFloat 
	//0.0 ~ 1.0 RAND_MAX의 최대값 (32767)
	float getFloat(void)
	{ 
		return (float)rand() / (float)RAND_MAX;
	}

	float getFloat(float num)
	{
		return (float)rand() / (float)RAND_MAX * num;
	}

	float getFromFloatTo(float fromNum, float toNum)
	{
		float rnd = (float)rand() / (float)RAND_MAX;
		return (rnd * (toNum - fromNum) + fromNum);
	}
};