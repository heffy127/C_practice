#include <stdio.h>
#include "cal.h"

int main(void)
{
	int x, y, result;

	printf("x�� �Է��ϼ��� > ");
	scanf("%d", &x);
	printf("y�� �Է��ϼ��� > ");
	scanf("%d", &y);

	result = plus(x, y);
	printf("%d + %d = %d\n", x, y, result);
	result = multi(x, y);
	printf("%d X %d = %d\n", x, y, result);

	return 0;
}