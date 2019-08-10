#include <stdio.h>
#include "cal.h"

int main(void)
{
	int x, y, result;

	printf("x를 입력하세요 > ");
	scanf("%d", &x);
	printf("y를 입력하세요 > ");
	scanf("%d", &y);

	result = plus(x, y);
	printf("%d + %d = %d\n", x, y, result);
	result = multi(x, y);
	printf("%d X %d = %d\n", x, y, result);

	return 0;
}