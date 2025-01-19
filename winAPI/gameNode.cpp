#include "stdafx.h"
#include "gameNode.h"

//================
// # init # �ʱ�ȭ
//================
HRESULT gameNode::init(void)
{
	return S_OK;
}

//==================================
// # init(bool managerInit) # �ʱ�ȭ
//==================================
HRESULT gameNode::init(bool managerInit)
{
	_hdc = GetDC(_hWnd);
	_managerInit = managerInit;
	
	if (managerInit)
	{
		//Ÿ�̸� �ʱ�ȭ
		SetTimer(_hWnd, 1, 10, NULL);

		//Ű�Ŵ��� �ʱ�ȭ
		KEYMANAGER->init();
		//������� �ʱ�ȭ
		RND->init();
		//�̹����Ŵ��� �ʱ�ȭ
		IMAGEMANAGER->init();
	}

	return S_OK;
}

//=================
// # release # ����
//=================
void gameNode::release(void)
{
	if (_managerInit)
	{
		//Ÿ�̸� ����
		KillTimer(_hWnd, 1);

		//Ű�Ŵ��� �̱��� ����
		KEYMANAGER->releaseSingleton();
		//������� �̱��� ����
		RND->releaseSingleton();
		//�̹����Ŵ��� ����, �̱��� ����
		IMAGEMANAGER->release();
		IMAGEMANAGER->releaseSingleton();
	}

	//DC ����
	ReleaseDC(_hWnd, _hdc);
}

//====================
// # update # ������Ʈ
//====================
void gameNode::update(void)
{
	//���ΰ�ħ
	//���� ���۸� ���� ������� �ʴ´�
	InvalidateRect(_hWnd, NULL, FALSE);
}

//================
// # render # ����
//================
void gameNode::render(void)
{
}

//=========================
// # MainProc # �������ν���
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