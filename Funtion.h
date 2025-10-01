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
	logoText[0]  = "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoText[1]  = "¡á      ¡á    ¡á      ¡á     ¡á¡á¡á  ¡á    ¡á";
	logoText[2]  = "¡á      ¡á    ¡á      ¡á  ¡á¡á  ¡á¡á  ¡á    ¡á";
	logoText[3]  = "¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á¡á  ¡á¡á¡á  ¡á¡á  ¡á¡á  ¡á  ¡á¡á¡á";
	logoText[4]  = "¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á¡á  ¡á¡á¡á     ¡á¡á¡á  ¡á  ¡á¡á¡á";
	logoText[5]  = "¡á¡á¡á  ¡á¡á¡á    ¡á¡á¡á  ¡á¡á¡á     ¡á¡á¡á  ¡á    ¡á";
	logoText[6]  = "¡á¡á¡á  ¡á¡á¡á    ¡á¡á¡á  ¡á¡á¡á  ¡á¡á ¡á¡á¡á  ¡á    ¡á";
	logoText[7]  = "¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á ¡á¡á  ¡á¡á¡á  ¡á";
	logoText[8]  = "¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á ¡á  ¡á¡á¡á  ¡á";
	logoText[9]  = "¡á¡á¡á  ¡á¡á¡á    ¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á¡á   ¡á    ¡á";
	logoText[10] = "¡á¡á¡á  ¡á¡á¡á    ¡á¡á¡á  ¡á¡á¡á  ¡á¡á¡á¡á¡á¡á  ¡á    ¡á";
	logoText[11] = "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoText[12] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[13] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[14] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[15] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[16] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[17] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[18] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[19] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[20] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[21] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[22] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[23] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[24] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
	logoText[25] = "            ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á            ";
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

	//¹æÇâÅ°
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
				printf("¡á");
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
