#include <stdio.h>
/*
중첩된 for문으로 선택정렬로 알려진 버블정렬 구현
// 구문 안에 코드 작성
*/
int main(void)
{
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, nTmp = 0;

	// 문제 코드 작성

	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}

	//
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	return 0;

}