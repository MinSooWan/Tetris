#include <stdio.h>
#include "Funtion.h"

int main()
{
	Init();
	while (true)
	{
		Update();
		Sleep(50);
	}

	return 0;
}