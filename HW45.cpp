/*작성자 : 이재빈 HW45*/
#include <Windows.h>
#include <stdio.h>

void gotoxy(int x, int y);

int main()
{
	gotoxy(5, 10);
	printf("Hello, World~~~");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}