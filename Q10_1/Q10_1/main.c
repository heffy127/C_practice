#include <stdio.h>
/*
int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	// 입력

	for (i = 0; i < 3; ++i)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &aList[i]);
	}

	// 최대값 계산
	nMax = aList[0];
	for (i = 1; i < 3; ++i)
		if (aList[i] > nMax)
			nMax = aList[i];

	// 출력
	printf("%d, %d, %d 중 가장 큰 수는  %d 입니다.\n",
		aList[0], aList[1], aList[2], nMax);
	
	return 0;
}
*/

/*
위와 같은 결과가 나올 수 있게 
3개의 사용자 정의 함수를 추가하여 
main 함수 구현
*/

int GetData()
{
	int num = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	return num;
}

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (nMax < b)
		nMax = b;
	if (nMax < c)
		nMax = c;
	return nMax;
}

void PrintData(int a, int b, int c, int nMax)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.",
		a, b, c, nMax);
}

int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	// 입력
	for (i = 0; i < 3; ++i)
		aList[i] = GetData();
	
	// 최대값 계산
	nMax = GetMax(aList[0], aList[1], aList[2]);

	// 출력
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}