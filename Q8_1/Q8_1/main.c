#include <stdio.h>
/*
최대값을 출력하는 프로그램 작성
단, nMax같은 최대값을 따로 저장하는 변수 사용하지 말것
// 구역 안에 코드를 작성하여 완성시킬것

출력 예 :
50 40 10 50 20
MAX : 50

*/
int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0;

	// 문제 코드 작성
	for (i = 1; i < 5; i++)
	{
		if (aList[0] < aList[i])
			aList[0] = aList[i];
	}


	//
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MAX : %d\n", aList[0]);

	return 0;
}