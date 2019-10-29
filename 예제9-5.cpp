#include <stdio.h>

int reset(), next(int), last(int), now(int);
int i = 1;

int main()
{
	int i, j;
	i = reset();
	for (j = 0; j < 3; j++)
	{
		printf("i = %d\t j = %d\n", i, j);
		printf("next(i) = %d\n", next(i));
		printf("last(i) = %d\n", last(i));
		printf("now(i+j) = %d\n", now(i + j));
	}
	return 0;
}

int reset() { return i; }

int next(int j) { return j = i++; }

int last(int j)
{
	static int i = 10;
	return j = i--;
}

int now(int i)
{
	int j = 10;
	return i = j += i;
}