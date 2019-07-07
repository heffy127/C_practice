#include <stdio.h>
/*
사용자로부터 두 정수를 입력받아 두수의 평균 계산
입력은 scanf() 출력은 prinf() 사용할 것
소수점 둘째 자리까지만 표시, 변수는 2개만 선언
*/
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	printf("두 정수 입력 : ");
	scanf_s("%d%d", &num1, &num2);
	printf("AVG : %.2f", (num1 + num2) / 2.0);

	return 0;
}