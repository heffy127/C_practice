#include <stdio.h>
#include "cal.h"

// �� ������ ���ϱ� ���ϱ� ���α׷�
// call by value, call by reference

int main(void)
{
	int x, y, result;
	printf("���� �Է� > ");
	scanf("%d", &x);
	printf("���� �Է� > ");
	scanf("%d", &y);
	plus(x, y, &result);
	printf("%d + %d = %d\n", x, y, result);
	multi(x, y, &result);
	printf("%d X %d = %d", x, y, result);
	return 0;
}