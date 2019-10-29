#pragma warning (disable : 4996)
#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	//getchar, getche, getch
	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
	}
	getch();
	return 0;
}