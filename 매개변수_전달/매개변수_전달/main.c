#include <stdio.h>
#include "swap.h"

// 입력받은 두 변수의 값을 바꾸는 함수
// call by reference

int main(void)
{
	int x=5, y=10;
	printf("Before > x = %d, y= %d\n", x, y);
	swap(&x, &y);
	printf("After > x = %d, y= %d", x, y);
	return 0;
}