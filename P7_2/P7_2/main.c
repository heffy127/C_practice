#include <stdio.h>
/*
      *
	*   *
  *   *   *
*   *   *   *

���� ���� ����ϴ� ���α׷� �ۼ�
*/
int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5 - i; j > 0; j--)
			printf("\t");
		for (int k = i; k > 0; k--)
			printf("%c\t\t", '*');
		printf("\n");
	}
	return 0;
}