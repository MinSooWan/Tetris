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
	logoText[0] = "�������������������������������������";
	logoText[1] = "�ᡡ�����������ᡡ�������ᡡ�����������ᡡ�����������ᡡ���ᡡ��������";
	logoText[2] = "�ᡡ�����������ᡡ�������ᡡ�����������ᡡ����ᡡ����ᡡ���ᡡ��������";
	logoText[3] = "���ᡡ�����ᡡ�������ᡡ�����ᡡ����ᡡ����ᡡ���ᡡ������";
	logoText[4] = "���ᡡ�����ᡡ�������ᡡ�����ᡡ�����������ᡡ���ᡡ������";
	logoText[5] = "���ᡡ�����ᡡ���������ᡡ�����ᡡ�����������ᡡ���ᡡ��������";
	logoText[6] = "���ᡡ�����ᡡ���������ᡡ�����ᡡ����ᡡ���ᡡ���ᡡ��������";
	logoText[7] = "���ᡡ�����ᡡ�������ᡡ�����ᡡ�����ᡡ��ᡡ�����ᡡ����";
	logoText[8] = "���ᡡ�����ᡡ�������ᡡ�����ᡡ������ᡡ�ᡡ�����ᡡ����";
	logoText[9] = "���ᡡ�����ᡡ���������ᡡ�����ᡡ�������ᡡ�����ᡡ��������";
	logoText[10] = "���ᡡ�����ᡡ���������ᡡ�����ᡡ��������ᡡ���ᡡ��������";
	logoText[11] = "�������������������������������������";
	logoText[12] = "������������������������������������ᡡ����������������������";
	logoText[13] = "������������������������������������ᡡ����������������������";
	logoText[14] = "������������������������������������ᡡ����������������������";
	logoText[15] = "������������������������������������ᡡ����������������������";
	logoText[16] = "������������������������������������ᡡ����������������������";
	logoText[17] = "������������������������������������ᡡ����������������������";
	logoText[18] = "������������������������������������ᡡ����������������������";
	logoText[19] = "������������������������������������ᡡ����������������������";
	logoText[20] = "������������������������������������ᡡ����������������������";
	logoText[21] = "������������������������������������ᡡ����������������������";
	logoText[22] = "������������������������������������ᡡ����������������������";
	logoText[23] = "������������������������������������ᡡ����������������������";
	logoText[24] = "������������������������������������ᡡ����������������������";
	logoText[25] = "������������������������������������ᡡ����������������������";
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