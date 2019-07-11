#include <stdio.h>
/*
버블정렬(인접된 두 항 비교) 방식으로 오름차순 정렬
중첩된 for문을 사용
// 구역 안에 코드 작성
*/
int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	// 문제 코드 작성

	for (i = 4; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (aList[j] > aList[j + 1])
			{
				nTmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = nTmp;
			}
		}
	}

	//
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	return 0;
}