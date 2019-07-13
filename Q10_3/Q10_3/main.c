#include <stdio.h>
/*
기본요금과 나이를 매개변수로 받아서
나이에 따른 최종요금을 계산해 반환하는 GetFee() 함수를 작성
0~3 100%
4~13 50 %
14~19 75%
20~ 0%
*/

int GetFee(int fee, int age)
{
	if (age >= 20)
		return fee;
	else
	{
		if (age >= 14)
			return fee * 0.25;
		else
		{
			if (age >= 4)
				return fee * 0.5;
			else
				return fee * 0;
		}
	}
}

int main(void)
{
	int currentFee = 1000;
	int age = 0;
	printf("나이 입력 : ");
	scanf_s("%d", &age);
	printf("요금 : %d", GetFee(currentFee, age));

	return 0;
}