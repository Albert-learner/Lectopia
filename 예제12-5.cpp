#include <stdio.h>
#define CNT 3

typedef struct _person
{
	char name[10];
	char addr[40];
	int age;
}Person;

int main()
{
	Person x[CNT] = { {"Kim", "Seoul", 20}, {"Lee", "Pusan", 30}, {"Park", "Daegu", 25} };
	Person *ps;
	int i;
	ps = x;
	for (i = 0; i < CNT; i++)
	{
		printf("%s(%d) : %s\n", (ps + i)->name, (ps + i)->age, (ps + i)->addr);
	}
	return 0;
}