#include <stdio.h>
#include "swap.h"

// �Է¹��� �� ������ ���� �ٲٴ� �Լ�
// call by reference

int main(void)
{
	int x=5, y=10;
	printf("Before > x = %d, y= %d\n", x, y);
	swap(&x, &y);
	printf("After > x = %d, y= %d", x, y);
	return 0;
}