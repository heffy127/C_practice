#include <stdio.h>
/*
5��¥�� �Ƕ�̵带 ���
*/
int main(void)
{
	int all = 5;
	for (int i = 1; i <= 5; i++)
	{
		int j = 0;
		for ( ; j < 5-i; j++)
			printf("\t");
		for (int k = all - j; k > 0; k--)
			printf("%c\t", '*');
		all++;
		printf("\n");
	}
	return 0;
}