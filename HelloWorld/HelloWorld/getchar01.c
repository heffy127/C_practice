#include <stdio.h>
#include <conio.h>

// 전역변수 선언
// 이 변수는 모든 함수에서 접근 가능
int g_nCounter = 0;

void InitCounter(int nData)
{
	g_nCounter = nData;
}

void IncreaseCounter()
{
	// 전역변수 g_nCounter의 값을 1 증가시킨다.
	g_nCounter++;
}

int main(void)
{
	InitCounter(10);
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);

	return 0;

}