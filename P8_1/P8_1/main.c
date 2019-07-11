#include <stdio.h>
/*
요소의 자료형이 int이고 길이가 5인 배열을 선언한 후
사용자 입력으로 5개의 정수로 초기화
그 중 가장 큰 수와 가장 작은 수를 출력하는 프로그램 작성
*/
int main(void)
{
	int aList[5] = { 0 };
	printf("5개의 정수 입력 : ");
	scanf_s("%d%d%d%d%d", &aList[0], &aList[1], &aList[2], &aList[3], &aList[4]);
	int nMax = aList[0], nMin = aList[0] ;
	for (int i = 1; i < 5; i++)
	{
		if (nMax < aList[i])
			nMax = aList[i];
		if (nMin > aList[i])
			nMin = aList[i];
	 }
	
	for (int i = 0; i < 5; i++)
		printf("%d ", aList[i]);
	printf("\nMIN: %d, MAX: %d", nMin, nMax);

	return 0;
}