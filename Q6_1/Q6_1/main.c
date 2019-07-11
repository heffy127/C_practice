#include <stdio.h>
/*
사용자로부터 세 정수를 입력받아 가장 큰 수 출력하는 프로그램 작성
단, 반드시 if문을 사용해야하며 서바이벌 방식으로 완성할 것
*/
int main(void)
{
	int num = 0;
	int nMax;
	
	scanf_s("%d", &num);
	nMax = num;
	
	scanf_s("%d", &num);
	if (nMax < num)
		nMax = num;

	scanf_s("%d", &num);
	if (nMax < num)
		nMax = num;

	printf("MAX : %d", nMax);

	return 0;
}