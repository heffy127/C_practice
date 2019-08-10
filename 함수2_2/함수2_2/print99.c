#include <stdio.h>
#include "cal.h"
#include "print99.h"

int getInput()
{
	int input;
	printf("출력할 단을 입력하세요 > ");
	scanf("%d", &input);

	return input;
}

void print99(int input)
{
	int i = 0;
	printf("\n\n ---- %d 단 ----\n", input);

	for (i = 1; i < 10; i++)
	{
		printf("%d X %d = %d\n", input, i, multi(input, i));
	}
}
