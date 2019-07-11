#include <stdio.h>
/*
버스 기본요금 1000원
나이가 20세 미만인 경우 25% 할인
나이를 입력했을때 계산을 통해 요금이 출력되도록 할것
*/
int main(void)
{
	int age = 0;
	int cost = 1000;
	scanf_s("%d", &age);

	if (age < 20)
	{
		cost = (int)(cost * 0.75);
	}
	printf("최종요금 : %d원", cost);

	return 0;
}