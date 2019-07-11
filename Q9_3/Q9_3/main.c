#include <stdio.h>
/*
선택정렬 방식으로 오름차순 정렬
중첩된 for문으로 구현
// 구역 안에 코드 작성
*/
int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

	// 문제 코드 작성
	for (i = 0; i < 4; i++)
	{
		nMinIndex = i;
		for (j = i; j < 5; j++)
		{
			if (aList[nMinIndex] > aList[j])
			{
				nMinIndex = j;
			}
		}
		nTmp = aList[i];
		aList[i] = aList[nMinIndex];
		aList[nMinIndex] = nTmp;
	}
	//

	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	return 0;

}