#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	const char *buff = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str[100];
	int handle, n;
	handle = open("alphabet.dat", O_WRONLY | O_CREAT | O_TEXT);
	write(handle, buff, 26);
	write(handle, "\n", 1);
	close(handle);
	handle = open("alphabet.dat", O_RDONLY | O_TEXT);
	n = read(handle, str, 100);
	str[n] = NULL;
	printf("%d  %s", n, str);
	close(handle);
	return 0;
}