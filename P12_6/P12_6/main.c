#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// srand()
// 난수 발생 전 임의의 초기값을 설정하여
// 최초 rand() 함수가 반환하는 값의 근거가 되는 초기값을 명시
int main(void)
{
	int i = 0;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
		printf("%6d\n", rand());

	for (i = 0; i < 10; i++)
		printf("%6d\n", rand() % 10);

	return 0;
}