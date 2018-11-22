/*�ۼ��� : ����� HW24*/
#include <stdio.h>

int input();
int escape_date(int depth);
void output(int depth, int period);

int main()
{
	int dep, d_day, i;
	printf("(����� ��)\n");
	for (i = 0; i < 2; i++)
	{
		dep = input();
		d_day = escape_date(dep);
		output(dep, d_day);
		printf("\n\n");
	}
	return 0;
}

int input()
{
	int depth;
	printf("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	scanf("%d", &depth);
	return depth;
}

int escape_date(int depth)
{
	int day=0, climb=50;
	
	if (depth == 0)
		return day;
	else
	{
		if (depth <= 50)
		{
			depth = 50;
			day = depth / 50;
		}

		else
		{
			while (climb < depth)
			{
				climb -= 20;
				climb += 50;
				day++;
				if (climb > depth)
				{
					day++;
					break;
				}
				else if (climb == depth)
				{
					day++;
					break;
				}
			}
		}
	}
	return day;
}

void output(int depth, int period)
{
	printf("  %.2lf ���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", depth*0.01, period);
	return ;
}