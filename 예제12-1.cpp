#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	char addr[40];
	int age;
};

struct Student
{
	int number;
	struct Person info;
};

int main()
{
	struct Student s1 = { 1, {"홍길동", "서울", 21} };
	struct Student s2 = { 2, {"이순신", "울릉도", 25} };
	struct Person a[3] = { {"이순신", "울릉도", 23}, {"홍길동", "서울", 21}, {"강감찬", "부산", 22} };
	a[0].age = 30;
	strcpy(a[0].name, "신사임당");

	printf("a배열의 인물 이름 : %s\t%s\t%d\n", a[0].name, a[0].addr, a[0].age);
	printf("학번 : %d, 성명 : %s, 주소 : %s, 나이 : %d\n", s1.number, s1.info.name, s1.info.addr, s1.info.age);
	printf("학번 : %d, 성명 : %s, 주소 : %s, 나이 : %d\n", s2.number, s2.info.name, s2.info.addr, s2.info.age);
	return 0;
}