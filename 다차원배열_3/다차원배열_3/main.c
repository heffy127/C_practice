#include <stdio.h>

// 문자열 배열 출력 %s 사용

int main(void)
{
	char fruit[][10] = { "apple", "orange", "mango", "kiwi" };
	int i;

	for (i = 0; i < 4; i++)
		printf("%s\n", fruit[i]);
	return 0;
}