#pragma once
#include <Windows.h>
#include <stdlib.h>
#include "EnumFile.h"

#pragma region DEFINE
#define MAP_HEIGHT 35
#define MAP_WIDTH 20
#define MENU_COUNT 3
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
bool exit_b = true;
int previousKeyState = 0;
SCENE_ID scene;
MENU_ID menu_Id;
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
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};
Obj* arrow;
Obj* menus[MENU_COUNT] = {};
Obj* m_exit[2] = {};
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

void ArrowDelete();

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
	//%SystemRoot%\System32\cmd.exe
	//system("mode con cols=1920 lines=1080");
	//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, NULL);

	HideCursor();
	scene = INTRO;
	score = 0;
	LogoInit();
	arrow = (Obj*)malloc(sizeof(Obj));
	for (int i = 0; i < MENU_COUNT; i++)
	{
		menus[i] = (Obj*)malloc(sizeof(Obj));
		menus[i]->x = 18;
		menus[i]->y = 15 + i * 2;
		menus[i]->color = White;
	}
	menus[0]->shape = "Continue";
	menus[0]->color = Blue;
	menus[1]->shape = "Title";
	menus[2]->shape = "Exit";
	for (int i = 0; i < 2; i++)
	{
		m_exit[i] = (Obj*)malloc(sizeof(Obj));
		m_exit[i]->x = 18;
		m_exit[i]->y = 15 + i * 2;
		m_exit[i]->color = White;
	}
	m_exit[0]->shape = "Yes";
	m_exit[0]->color = Blue;
	m_exit[1]->shape = "No";
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
	logoText[0]  = "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■";
	logoText[1]  = "■      ■    ■      ■     ■■■  ■    ■";
	logoText[2]  = "■      ■    ■      ■  ■■  ■■  ■    ■";
	logoText[3]  = "■■■  ■■■  ■■■■■  ■■■  ■■  ■■  ■  ■■■";
	logoText[4]  = "■■■  ■■■  ■■■■■  ■■■     ■■■  ■  ■■■";
	logoText[5]  = "■■■  ■■■    ■■■  ■■■     ■■■  ■    ■";
	logoText[6]  = "■■■  ■■■    ■■■  ■■■  ■■ ■■■  ■    ■";
	logoText[7]  = "■■■  ■■■  ■■■■■  ■■■  ■■■ ■■  ■■■  ■";
	logoText[8]  = "■■■  ■■■  ■■■■■  ■■■  ■■■■ ■  ■■■  ■";
	logoText[9]  = "■■■  ■■■    ■■■  ■■■  ■■■■■   ■    ■";
	logoText[10] = "■■■  ■■■    ■■■  ■■■  ■■■■■■  ■    ■";
	logoText[11] = "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■";
	logoText[12] = "            ■■■■■■■■■■■■            ";
	logoText[13] = "            ■■■■■■■■■■■■            ";
	logoText[14] = "            ■■■■■■■■■■■■            ";
	logoText[15] = "            ■■■■■■■■■■■■            ";
	logoText[16] = "            ■■■■■■■■■■■■            ";
	logoText[17] = "            ■■■■■■■■■■■■            ";
	logoText[18] = "            ■■■■■■■■■■■■            ";
	logoText[19] = "            ■■■■■■■■■■■■            ";
	logoText[20] = "            ■■■■■■■■■■■■            ";
	logoText[21] = "            ■■■■■■■■■■■■            ";
	logoText[22] = "            ■■■■■■■■■■■■            ";
	logoText[23] = "            ■■■■■■■■■■■■            ";
	logoText[24] = "            ■■■■■■■■■■■■            ";
	logoText[25] = "            ■■■■■■■■■■■■            ";
}

void IntroInit()
{
	scene = INTRO;
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

	//방향키
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
				SetPosition(w+5, h);
				ChangeColor(White);
				printf("■");
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

	menu_Id = CONTINUE;

	arrow->x = 17;
	arrow->y = menus[0]->y;
	arrow->color = Blue;
	arrow->shape = "▶";
}

void MenuUpdate()
{
	int currentKeyState = 0;
	if (GetAsyncKeyState(VK_UP))
	{
		currentKeyState = GetAsyncKeyState(VK_UP);
		
		if (arrow->y > menus[0]->y)
		{
			arrow->y -= 2;
			int menu_num = menu_Id;
			menus[menu_num]->color = White;
			menu_num--;
			menus[menu_num]->color = Blue;
			menu_Id = (MENU_ID)menu_num;
		}
		else
		{
			arrow->y = menus[2]->y;
			menus[0]->color = White;
			menus[2]->color = Blue;
			menu_Id = M_EXIT;
		}
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		if (arrow->y < menus[2]->y)
		{
			arrow->y += 2;
			int menu_num = menu_Id;
			menus[menu_num]->color = White;
			menu_num++;
			menus[menu_num]->color = Blue;
			menu_Id = (MENU_ID)menu_num;
		}
		else
		{
			arrow->y = menus[0]->y;
			menus[2]->color = White;
			menus[0]->color = Blue;
			menu_Id = CONTINUE;
		}
	}
	if (GetAsyncKeyState(VK_SPACE))
	{
		switch (menu_Id)
		{
		case CONTINUE:
			StageInit();
			break;
		case TITLE:
			IntroInit();
			break;
		case M_EXIT:
			ExitInit();
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < MENU_COUNT; i++)
	{
		SetPosition(menus[i]->x, menus[i]->y);
		ChangeColor(menus[i]->color);
		printf(menus[i]->shape);
	}

	SetPosition(arrow->x, arrow->y);
	ChangeColor(arrow->color);
	printf(arrow->shape);
}


void ExitInit()
{
	if (GetAsyncKeyState(VK_UP))
	{
		if (exit_b)
		{
			arrow->y = m_exit[1]->y;
			m_exit[0]->color = White;
			m_exit[1]->color = Blue;
			exit_b = false;
		}
		else
		{
			arrow->y = m_exit[0]->y;
			m_exit[1]->color = White;
			m_exit[0]->color = Blue;
			exit_b = true;
		}
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		if (exit_b)
		{
			arrow->y = m_exit[1]->y;
			m_exit[0]->color = White;
			m_exit[1]->color = Blue;
			exit_b = false;
		}
		else
		{
			arrow->y = m_exit[0]->y;
			m_exit[1]->color = White;
			m_exit[0]->color = Blue;
			exit_b = true;
		}
	}
	if (GetAsyncKeyState(VK_SPACE))
	{
		if (exit_b)
		{
			exit(0);
		}
		else
		{
			MenuInit();
		}
	}
	scene = EXIT;

	arrow->x = 17;
	arrow->y = m_exit[0]->y;
	arrow->color = Blue;
	arrow->shape = "▶";

	exit_b = true;
}

void ExitUpdate()
{
	SetPosition(13, 13);
	ChangeColor(White);
	printf("게임을 종료 하시겠습니까?");
	for (int i = 0; i < 2; i++)
	{
		SetPosition(m_exit[i]->x, m_exit[i]->y);
		ChangeColor(m_exit[i]->color);
		printf(m_exit[i]->shape);
	}

	SetPosition(arrow->x, arrow->y);
	ChangeColor(arrow->color);
	printf(arrow->shape);
}

void ArrowDelete()
{
	arrow = nullptr;
}
