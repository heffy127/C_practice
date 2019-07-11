#include <stdio.h>
/*
1~100까지의 숫자 중에서
4의 배수가 몇개이며 
이들의 총합이 얼마인지 계산해 출력하는 프로그램 작성
*/
int main(void)
{
	int cnt = 0;
	int tot = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 4 != 0)
			continue;
		cnt++;
		tot += i;
	}

	printf("4의 배수 총 개수 : %d\n총 합 : %d", cnt, tot);
	return 0;
}