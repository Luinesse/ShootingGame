// stdafx.h: ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �Ǵ� ������Ʈ ���� ���� ������
// ��� �ִ� ���� ����
#pragma once
#include <SDKDDKver.h>

// ���� ������ �ʴ� ������ Windows ������� ����
#define WIN32_LEAN_AND_MEAN 

//Windows ��� ����
#include <Windows.h>

//C ��Ÿ�� ��� ����
#include <stdlib.h>
#include <stdio.h>
#include <tchar.h>
#include <time.h>

//C++ ��Ÿ�� ��� ����
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//===================================
// # ���� ���� ��������� �̰��� �߰� #
//===================================
#include "commonMacroFunction.h"
#include "randomFunction.h"
#include "keyManager.h"
#include "imageManager.h"


//========================
// # �̱����� �̰��� �߰� #
//========================
#define RND randomFunction::getSingleton()
#define KEYMANAGER keyManager::getSingleton()
#define IMAGEMANAGER imageManager::getSingleton()

//============================
// # ��ũ�� # (������â �ʱ�ȭ)
//============================
#define WINNAME		 (LPTSTR)(TEXT("GAME"))
#define WINSTARTX	 0
#define WINSTARTY	 0
#define WINSIZEX	 1920
#define WINSIZEY	 1080
#define WINSTYLE	 WS_CAPTION | WS_SYSMENU

//===============================================
// # ��ũ�� �Լ� # (Ŭ�������� �����Ҵ�� �κ� ����)
//===============================================
#define SAFE_DELETE(p)			{if(p) {delete (p); (p) = NULL;}}
#define SAFE_DELETE_ARRAY(p)	{if(p) {delete[] (p); (p) = NULL;}}
#define SAFE_RELEASE(p)			{if(p) {(p)->release(); (p) = NULL;}}

//=============
// # �������� #
//=============
extern HINSTANCE	_hInstance;
extern HWND			_hWnd;
extern POINT		_ptMouse;