#include <stdio.h>
// 사용자로부터 정수를 입력받아 
// 5로 나눈 나머지를 출력하는 프로그램 작성
int main(void)
{
	int num = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	printf("5로 나눈 나머지 : %d", num % 5);

	return 0;
}