#include <stdio.h>
/*
최소값을 구하는 프로그램 작성
최소값이 저장되는 변수를 따로 설정하지않고 
배열의 0번 요소에 저장
단, 배열의 값이 유실되는 경우는 없도록 해야 함
// 구역안에 코드 작성
*/
int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	// 문제 코드 작성

	for (i = 1; i < 5; i++)
	{
		if (aList[0] > aList[i])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}
	}

	//
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MIN : %d\n", aList[0]);

	return 0;
}
