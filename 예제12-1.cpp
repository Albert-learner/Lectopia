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
	struct Student s1 = { 1, {"ȫ�浿", "����", 21} };
	struct Student s2 = { 2, {"�̼���", "�︪��", 25} };
	struct Person a[3] = { {"�̼���", "�︪��", 23}, {"ȫ�浿", "����", 21}, {"������", "�λ�", 22} };
	a[0].age = 30;
	strcpy(a[0].name, "�Ż��Ӵ�");

	printf("a�迭�� �ι� �̸� : %s\t%s\t%d\n", a[0].name, a[0].addr, a[0].age);
	printf("�й� : %d, ���� : %s, �ּ� : %s, ���� : %d\n", s1.number, s1.info.name, s1.info.addr, s1.info.age);
	printf("�й� : %d, ���� : %s, �ּ� : %s, ���� : %d\n", s2.number, s2.info.name, s2.info.addr, s2.info.age);
	return 0;
}