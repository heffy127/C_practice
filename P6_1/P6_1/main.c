#include <stdio.h>
/*
버스요금 1000원
연령별 할인율을 적용하여 최종요금을 계산
반드시 if else문을 두번 중첩하여 구현
0~3 100%
4~13 50%
14~19 25%
*/
int main(void)
{
	int age = 0;
	int cost = 1000;
	scanf_s("%d", &age);
	
	if (age < 20)
	{
		if (age < 13)
		{
			if (age < 4)
			{
				cost = cost * 0;
			}
			else
			{
				cost = (int)(cost * 0.5);
			}
		}
		else
		{
			cost = (int)(cost * 0.75);
		}
	}
	
	printf("최종요금 : %d원", cost);

	return 0;
}