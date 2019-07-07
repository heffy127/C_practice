#include <stdio.h>
/*
세 정수 중에서 가장 큰 수 구하기
scanf를 한번만 호출하여 세 정수를 입력받을 것
// 구간 이외의 코드는 건들지 말것
*/
int main(void)
{
	int nMax = 0;
	int a, b, c;

	// 문제 코드 작성
	
	scanf_s("%d%d%d", &a, &b, &c);
	a > b ? (nMax = a) : (nMax = b);
	c > nMax ? (nMax = c) : nMax;

	//

	printf("MAX : %d\n", nMax);

	return 0;
}