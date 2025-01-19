﻿#include "stdafx.h"
#include "mainGame.h"

//=============
// # 전역변수 #
//=============
HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0, 0 };
mainGame* _mg;

//==================
// # 함수 전방선언 #
//==================
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void setWindowSize(int x, int y, int width, int height);

//===================
// # 윈도우 메인함수 #
//===================
int APIENTRY WinMain(HINSTANCE hInstance,				// 프로그램의 핸들 인스턴스 (프로세스ID)
					 HINSTANCE hPrevInstance,			// 이전에 실행된 프로그램의 핸들 인스턴스 (잘안씀)
					 LPSTR lpszCmdParam,				// 도스나 터미널같은 명령행으로 입력된 프로그램 인수. (잘안씀)
					 int nCmdShow)						// 프로그램이 실행될 형태. (최소화, 보통 등등)
{
	_mg = new mainGame();

	//인스턴스를 전역변수에 담는다
	_hInstance = hInstance;

	//WNDCLASS: 윈도우 창의 정보를 저장하기 위한 클래스
	//윈도우창 클래스 선언 및 초기화
	WNDCLASS wndClass;
	wndClass.cbClsExtra = 0;									   //클래스 여분 메모리
	wndClass.cbWndExtra = 0;									   //윈도우 여분 메모리
	wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);  //백그라운드
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);				   //마우스 커서
	wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);			   //아이콘
	wndClass.hInstance = hInstance;								   //인스턴스
	wndClass.lpfnWndProc = (WNDPROC)WndProc;					   //윈도우 프로시져
	wndClass.lpszClassName = WINNAME;							   //클래스 이름
	wndClass.lpszMenuName = NULL;								   //메뉴이름
	wndClass.style = CS_HREDRAW | CS_VREDRAW;					   //윈도우 스타일

	//윈도우 클래스 등록
	RegisterClass(&wndClass);				// 운영체제가 윈도우 클래스를 인지할 수 있도록 커널에 등록

	//화면에 보여줄 윈도우 창을 생성
	_hWnd = CreateWindow(
		WINNAME,				//윈도우 클래스의 이름
		WINNAME,				//윈도우 타이틀바 이름
		WINSTYLE,				//윈도우 스타일
		WINSTARTX,				//윈도우 화면 X좌표
		WINSTARTY,				//윈도우 화면 Y좌표
		WINSIZEX,				//윈도우 화면 가로크기
		WINSIZEY,				//윈도우 화면 세로크기
		NULL,					//부모 윈도우
		(HMENU)NULL,			//메뉴핸들
		hInstance,				//인스턴스 지정
		NULL					//윈도우의 자식 윈도우를 생성하면 지정하고 그렇지 않으면 NULL
								//필요에 의해서 사용하지만 지금은 NULL
	);

	//클라이언트 영역의 사이즈를 정확히 잡아준다
	setWindowSize(WINSTARTX, WINSTARTY, WINSIZEX, WINSIZEY);

	//화면에 윈도우창 보여주기
	ShowWindow(_hWnd, nCmdShow);

	//메인게임 클래스의 초기화 실패시 종료
	if (FAILED(_mg->init()))
	{
		return 0;
	}

	//MSG: 운영체제에서 발생하는 메세지 정보를 저장하기 위한 구조체
	MSG message;

	//메세지 루프
	//GetMessage: 메세지를 꺼내올 수 있을때까지 멈춰있는 함수
	//PeekMessage: 메세지가 없더라도 리턴되는 함수

	//게임용
	/*
	while (true)
	{
		if (PeekMessage(&message, NULL, 0, 0, PM_REMOVE))
		{
			if (message.message == WM_QUIT) break;
			TranslateMessage(&message);
			DispatchMessage(&message);
		}
	}
	*/	

	//일반 프로그래밍용
	while (GetMessage(&message, 0, 0, 0))				// 메시지 큐에서 메시지를 읽어들여서 message 구조체에 저장.
	{
		TranslateMessage(&message);						// 문자열이 들어오면 그 문자열 처리를 위한 메시지 발생
		DispatchMessage(&message);						// 들어온 메시지를 윈도우 프로시저에 전달.
	}

	_mg->release();

	//윈도우 클래스 등록 해제
	UnregisterClass(WINNAME, hInstance);

	return message.wParam;
}

//===================
// # 윈도우 프로시져 # 
//===================
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)			// 메시지 루프로 메시지가 입력되면, 윈도우즈에 의해 호출되어 메시지를 처리한다. 따라서, 이 함수는 winmain에서 호출되는게 아닌, 윈도우즈에서 호출하므로, 운영체제에서 호출되는 프로그램 내부의 함수를 콜백함수라고 한다.
{
	return _mg->MainProc(hWnd, iMessage, wParam, lParam);
}

//=============================================================
// # 윈도우 크기 조정 # (클라이언트 영역의 사이즈를 정확히 잡아준다)
//=============================================================
void setWindowSize(int x, int y, int width, int height)
{
	RECT rc = { 0, 0, width, height };

	//실제 윈도우 크기 조정
	AdjustWindowRect(&rc, WINSTYLE, false);

	//위 렉트 정보로 윈도우 클라이언트 사이즈 셋팅
	SetWindowPos(_hWnd, NULL, x, y, 
		(rc.right - rc.left), 
		(rc.bottom - rc.top),
		SWP_NOZORDER | SWP_NOMOVE);
}