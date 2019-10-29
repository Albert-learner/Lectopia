#include <stdio.h>

int main()
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch >= 'a' && ch <= 'z') { ch -= 'a' - 'A'; }
		else if (ch >= 'A' && ch <= 'z') { ch += 'a' - 'A'; }
		else{}
		putchar(ch);
	}
	return 0;
}