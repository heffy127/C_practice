#include <stdio.h>

int plus(int x, int y);
int multi(int x, int y);

int main(void)
{
	int x, y, result;

	printf("x를 입력 : ");
	scanf("%d", &x);
	printf("y를 입력 : ");
	scanf("%d", &y);

	result = plus(x, y);
	printf("%d + %d = %d\n", x, y, result);
	result = multi(x, y);
	printf("%d X %d = %d\n", x, y, result);

	return 0;
}

int plus(int x, int y)
{
	return x + y;
}

int multi(int x, int y)
{
	return x * y;
}