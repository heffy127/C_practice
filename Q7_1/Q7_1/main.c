#include <stdio.h>
/*
사용자로부터 1~9 범위 정수를 입력받아
그 수만큼 *를 출력하는 프로그램을 작성
모두 한 행에 연이어 출력하며
입력이 범위를 벗어난 경우 1이나 9로 강제보정
*/
int main(void)
{
	int num = 0;
	int start = 1;
	scanf_s("%d", &num);
	
	if (num < 1)
		num = 1;
	else if (num > 9)
		num = 9;
	
	while (start <= num)
	{
		printf("%c", '*');
		start++;
	}
	printf("\n");
}