#include "stdafx.h"
#include "gameNode.h"

//================
// # init # 초기화
//================
HRESULT gameNode::init(void)
{
	return S_OK;
}

//==================================
// # init(bool managerInit) # 초기화
//==================================
HRESULT gameNode::init(bool managerInit)
{
	_hdc = GetDC(_hWnd);
	_managerInit = managerInit;
	
	if (managerInit)
	{
		//타이머 초기화
		SetTimer(_hWnd, 1, 10, NULL);

		//키매니져 초기화
		KEYMANAGER->init();
		//랜덤펑션 초기화
		RND->init();
		//이미지매니져 초기화
		IMAGEMANAGER->init();
	}

	return S_OK;
}

//=================
// # release # 해제
//=================
void gameNode::release(void)
{
	if (_managerInit)
	{
		//타이머 해제
		KillTimer(_hWnd, 1);

		//키매니져 싱글톤 해제
		KEYMANAGER->releaseSingleton();
		//랜덤펑션 싱글톤 해제
		RND->releaseSingleton();
		//이미지매니져 해제, 싱글톤 해제
		IMAGEMANAGER->release();
		IMAGEMANAGER->releaseSingleton();
	}

	//DC 해제
	ReleaseDC(_hWnd, _hdc);
}

//====================
// # update # 업데이트
//====================
void gameNode::update(void)
{
	//새로고침
	//더블 버퍼링 이후 사용하지 않는다
	InvalidateRect(_hWnd, NULL, FALSE);
}

//================
// # render # 렌더
//================
void gameNode::render(void)
{
}

//=========================
// # MainProc # 메인프로시져
//=========================
LRESULT gameNode::MainProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;

	switch (iMessage)
	{
	case WM_TIMER:
		this->update();
		break;

	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		this->render();
		EndPaint(hWnd, &ps);
		break;

	case WM_MOUSEMOVE:
		_ptMouse.x = LOWORD(lParam);
		_ptMouse.y = HIWORD(lParam);
		break;
	
	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_ESCAPE:
			PostMessage(hWnd, WM_DESTROY, 0, 0);
			break;
		}
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	}

	return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}