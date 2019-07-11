#include <stdio.h>
/*
1~10까지 총합을 출력하는 프로그램 작성
while문을 사용하여 누적하는 방식으로 구현
*/
int main(void)
{
	int tot = 0;
	int start = 1;
	while (start <= 10)
	{
		tot += start;
		start++;
	}
	printf("Total : %d", tot);

	return 0;
}