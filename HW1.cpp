/*작성자 : 이재빈 HW1 */
#include <stdio.h>

void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "이재빈";
	int age = 23;
	double height = 174;

	printf("성명: %s\n", name);
	printAge(age);
	printHeight(height);
	return 0;
}

void printAge(int age)
{
	printf("나이: %d\n", age);
}

void printHeight(double height)
{
	printf("키: %f\n", height);
}