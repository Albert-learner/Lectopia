#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	const char *p = "C program";
	char str[20] = "C program";

	//문자열 변경 가능 여부 판단하기
	//p[0] = 'B'; -> const char형이므로 문자를 바로 바꿀 수 없다
	str[0] = 'B'; // 문자열 배열이므로 배열 방 일부 바꿀 수 있다

	printf("p : %s\n", p);
	printf("str : %s\n", str);

	//strcpy(p, "Java"); //const char형이므로 문자열 주소 복사해서 바꿀 수 없다
	strcpy(str, "Java");

	printf("p : %s\n", p);
	printf("str : %s\n", str);

	p = "Python programming";
	//str = "Python programming"; //문자열 배열이므로 크기 맞지 않아 바꿀 수 없고, 크기 같아도 아예 할 수 없다

	/*
	문자열 전체를 바꿀 때에는 const char *형으로 받는게 편하고
	문자열 일부를 바꿀 때에는 문자열 배열 char []로 받는 게 편하다
	*/
	printf("p : %s\n", p);
	printf("str : %s\n", str);
	return 0;
}