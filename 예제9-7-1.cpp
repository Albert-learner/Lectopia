#include <stdio.h>

int reset(), next(), last();
int now(int);

int main()
{
	int i, j;
	i = reset();
	for (j = 0; j < 3; j++)
	{
		printf("i = %d\t j = %d\n", i, j);
		printf("next() = %d\n", next());
		printf("last() = %d\n", last());
		printf("next(i+j) = %d\n", now(i + j));
	}
	return 0;
}

extern int i;
int reset()
{
	return i;
}

int i = 10;
int next()
{
	return i += 1;
}

int last()
{
	return i -= 1;
}

int now(int i)
{
	static int j = 5;
	return i = j += i;
}