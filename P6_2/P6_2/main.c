#include <stdio.h>
/*
버스요금 1000원
연령대별 할인율을 적용하여 최종요금 계산
반드시 다중 if문 사용
0~3 100%
4~13 50%
14~19 25%
20세 이상 0%
65세 이상 100%
*/
int main(void)
{
	int age = 0;
	int cost = 1000;
	scanf_s("%d", &age);

	if (age < 20)
	{
		if (age < 14)
		{
			if (age < 3)
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
	else if (age >= 65)
	{
		cost = (int)(cost * 0);
	}

	printf("최종요금 : %d", cost);

	return 0;
}