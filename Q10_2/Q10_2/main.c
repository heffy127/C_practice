#include <stdio.h>
/*
매개변수 int형 자료 4개를 받아
그 중 가장 작은 숫자를 반환하는
GetMin() 함수를 작성
*/
int GetMin(int array[]);

int main(void)
{
	int i = 0;
	int num = 0;
	int array[4] = { 0 };
	for (i = 0; i < 4; i++)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &array[i]);
	}

	printf("최소값 : %d", GetMin(array));
	return 0;
}

int GetMin(int array[])
{
	int nMin = 9999;
	int i = 0;
	for (i = 0; i < sizeof(array); i++)
	{
		if (nMin > array[i])
			nMin = array[i];
	}
	return nMin;
}