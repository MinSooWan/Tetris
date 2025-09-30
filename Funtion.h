#pragma once
#include <Windows.h>
#include "EnumFile.h"

int highScore;
int score;
int combo;
const char* logoText[26];

#pragma region WINAPI
void HideCursor();
void ChangeColor(Color color);
void SetPosition(int x, int y);
#pragma endregion

void Update();
void LogoInit();

void IntroInit();
void IntroUpdate();

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

void Update()
{

}

void LogoInit()
{
	logoText[0] = "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoText[1] = "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á";
	logoText[2] = "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡á¡á¡¡¡¡¡á¡á¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á";
	logoText[3] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡¡¡¡¡á¡á¡¡¡¡¡á¡¡¡¡¡á¡á¡á";
	logoText[4] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡¡¡¡¡á¡á¡á";
	logoText[5] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á";
	logoText[6] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡¡¡á¡á¡á¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á";
	logoText[7] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á";
	logoText[8] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡¡¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á";
	logoText[9] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á";
	logoText[10] = "¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡á¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á";
	logoText[11] = "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoText[12] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[13] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[14] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[15] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[16] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[17] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[18] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[19] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[20] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[21] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[22] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[23] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[24] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
	logoText[25] = "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡";
}

void IntroInit()
{
	LogoInit();
	for (int i = 0; i < 26; i++)
	{
		printf(logoText[i]);
	}
	SetPosition(10, 10);
}

void IntroUpdate()
{

}