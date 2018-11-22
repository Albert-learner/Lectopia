/*작성자 : 이재빈 HW6*/
#include <stdio.h>

int main()
{
	int fah;
	printf("(입출력 예)\n");
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &fah);
	
	double cel = (fah-32)/1.8;
	printf("섭씨 온도는 %.1lf도 입니다.\n", cel);
	return 0;
}