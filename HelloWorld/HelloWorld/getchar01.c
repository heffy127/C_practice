#include <stdio.h>
#include <conio.h>
int main(void)
{
	int nAge = 0;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);
	printf("당신의 나이는 %d입니다.", nAge);
	
	return 0;
} 