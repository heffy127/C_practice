#include <stdio.h>

int showMenu()
{
	int input;
	printf("---성적표---\n");
	printf("0. 국어\n");
	printf("1. 영어\n");
	printf("2. 수학\n");
	printf("3. 과학\n");
	printf("4. 음악\n");
	printf("------------");
	printf("번호를 선택하세요 > ");
	scanf_s("%d", &input);

	return input;
}