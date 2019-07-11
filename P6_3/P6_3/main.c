#include <stdio.h>
/*
사용자로부터 5개의 정수를 입력받아 가장 큰 수 출력
단 사용자는 0~100사이만 입력하도록 강제
범위를 벗어난 숫자를 입력할 경우 
0 미만은 0으로 100 초과는 100으로 조정
*/
int main(void)
{
	int num, nMax;
	scanf_s("%d", &num);
	
	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;
	
	if (num > nMax)
		nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	if (num > nMax)
		nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	if (num > nMax)
		nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	if (num > nMax)
		nMax = num;
	
	printf("MAX : %d", nMax);
	return 0;
}