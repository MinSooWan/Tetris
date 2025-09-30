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
	SMALL_RECT rect = { 0,0,100, 100 };

	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE),TRUE, &rect);

	LogoInit();
	for (int i = 0; i < 26; i++)
	{
		SetPosition(0, 5 + i);
		ChangeColor(Blue);
		printf(logoText[i]);
	}
}

void IntroUpdate()
{

}