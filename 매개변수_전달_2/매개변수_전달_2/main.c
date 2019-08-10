#include <stdio.h>
#include "cal.h"

// 두 정수의 더하기 곱하기 프로그램
// call by value, call by reference

int main(void)
{
	int x, y, result;
	printf("정수 입력 > ");
	scanf("%d", &x);
	printf("정수 입력 > ");
	scanf("%d", &y);
	plus(x, y, &result);
	printf("%d + %d = %d\n", x, y, result);
	multi(x, y, &result);
	printf("%d X %d = %d", x, y, result);
	return 0;
}