/*�ۼ��� : ����� HW1 */
#include <stdio.h>

void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "�����";
	int age = 23;
	double height = 174;

	printf("����: %s\n", name);
	printAge(age);
	printHeight(height);
	return 0;
}

void printAge(int age)
{
	printf("����: %d\n", age);
}

void printHeight(double height)
{
	printf("Ű: %f\n", height);
}