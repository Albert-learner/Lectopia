#include <stdio.h>

void menuDisplay1(const char **menuPtr, size_t menuCnt);
void menuDisplay2(char(*menuPtr)[10], size_t menuCnt);

int main()
{
	const char *ptrAryMenu[] = { "insert", "output", "search", "quit" };
	char aryPtrMenu[][10] = { "INSERT", "OUTPUT", "SEARCH", "QUIT" };

	menuDisplay1(ptrAryMenu, sizeof(ptrAryMenu) / sizeof(ptrAryMenu[0]));
	printf("\n\n");
	menuDisplay2(aryPtrMenu, sizeof(aryPtrMenu) / sizeof(aryPtrMenu[0]));

	return 0;
}

void menuDisplay1(const char **menuPtr, size_t menuCnt)
{
	for (size_t i = 0; i < menuCnt; i++)
	{
		printf("%d. %s\n", i + 1, menuPtr[i]);
	}
	return ;
}

void menuDisplay2(char(*menuPtr)[10], size_t menuCnt)
{
	for (size_t i = 0; i < menuCnt; i++)
	{
		printf("%d. %s\n", i + 1, menuPtr[i]);
	}
	return ;
}