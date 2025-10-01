#pragma once
#include <Windows.h>
#include <stdlib.h>
#include "EnumFile.h"

#pragma region DEFINE
#define MAP_HEIGHT 50
#define MAP_WIDTH 20
#pragma endregion
#pragma region STRUCT
struct Obj
{
	int x;
	int y;
	const char* shape;
	Color color;
};

struct Block : Obj
{

};
#pragma endregion
#pragma region PARAMETER
int highScore;
int score;
int combo;
const char* logoText[26];
SCENE_ID scene;
int map[MAP_HEIGHT][MAP_WIDTH] =
{
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};
Obj* arrow;
#pragma endregion

#pragma region WINAPI
void HideCursor();
void ChangeColor(Color color);
void SetPosition(int x, int y);
#pragma endregion

void Init();
void Update();
void LogoInit();

void IntroInit();
void IntroUpdate();

void StageInit();
void StageUpdate();
void StageProgress();
void StageRender();

void MenuInit();
void MenuUpdate();

void ExitInit();
void ExitUpdate();

#pragma region WINAPI
void HideCursor()
{
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void ChangeColor(Color color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
#pragma endregion

void Init()
{
	system("mode con cols=1920 lines=1080");
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);

	HideCursor();
	scene = INTRO;
	score = 0;
	LogoInit();
}

void Update()
{
	switch (scene)
	{
	case INTRO:
		IntroUpdate();
		break;
	case STAGE:
		StageUpdate();
		break;
	case MENU:
		MenuUpdate();
		break;
	case EXIT:
		ExitUpdate();
		break;
	default:
		break;
	}
}

void LogoInit()
{
	logoText[0]  = "�������������������������������������";
	logoText[1]  = "��      ��    ��      ��     ����  ��    ��";
	logoText[2]  = "��      ��    ��      ��  ���  ���  ��    ��";
	logoText[3]  = "����  ����  ������  ����  ���  ���  ��  ����";
	logoText[4]  = "����  ����  ������  ����     ����  ��  ����";
	logoText[5]  = "����  ����    ����  ����     ����  ��    ��";
	logoText[6]  = "����  ����    ����  ����  ��� ����  ��    ��";
	logoText[7]  = "����  ����  ������  ����  ���� ���  ����  ��";
	logoText[8]  = "����  ����  ������  ����  ����� ��  ����  ��";
	logoText[9]  = "����  ����    ����  ����  ������   ��    ��";
	logoText[10] = "����  ����    ����  ����  �������  ��    ��";
	logoText[11] = "�������������������������������������";
	logoText[12] = "            �������������            ";
	logoText[13] = "            �������������            ";
	logoText[14] = "            �������������            ";
	logoText[15] = "            �������������            ";
	logoText[16] = "            �������������            ";
	logoText[17] = "            �������������            ";
	logoText[18] = "            �������������            ";
	logoText[19] = "            �������������            ";
	logoText[20] = "            �������������            ";
	logoText[21] = "            �������������            ";
	logoText[22] = "            �������������            ";
	logoText[23] = "            �������������            ";
	logoText[24] = "            �������������            ";
	logoText[25] = "            �������������            ";
}

void IntroInit()
{
	
}

void IntroUpdate()
{
	for (int i = 0; i < 26; i++)
	{
		SetPosition(10, 5 + i);
		ChangeColor(Blue);
		printf(logoText[i]);
	}

	SetPosition(16, 32);
	printf("HighScore : %d", score);

	if (GetAsyncKeyState(VK_SPACE) || GetAsyncKeyState(VK_RETURN))
	{
		StageInit();
	}
}

void StageInit()
{
	scene = STAGE;
}

void StageUpdate()
{
	StageProgress();
	StageRender();
}

void StageProgress()
{
	//ESC
	if (GetAsyncKeyState(VK_ESCAPE))
	{
		MenuInit();
	}

	//����Ű
	if (GetAsyncKeyState(VK_UP))
	{

	}
	if (GetAsyncKeyState(VK_DOWN))
	{

	}
	if (GetAsyncKeyState(VK_LEFT))
	{

	}
	if (GetAsyncKeyState(VK_RIGHT))
	{

	}
	if (GetAsyncKeyState(VK_SPACE))
	{

	}
}

void StageRender()
{
	for (int h = 0; h < MAP_HEIGHT; h++)
	{
		for (int w = 0; w < MAP_WIDTH; w++)
		{
			switch (map[h][w])
			{
			case 0:
				break;
			case 1:
				SetPosition(w, h);
				ChangeColor(White);
				printf("��");
				break;
			default:
				break;
			}
		}
	}
}

void MenuInit()
{
	scene = MENU;
	arrow = (Obj*)malloc(sizeof(Obj));

}

void MenuUpdate()
{

}

void ExitInit()
{
}

void ExitUpdate()
{
}
