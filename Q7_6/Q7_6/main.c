#include <stdio.h>
/*
    *
   **
  ***
 ****
*****
������ \t�� ���
���� ���� ���·� �ݺ����� �Ἥ ���
*/
int main(void)
{
	for (int i = 0; i < 5; i++)
	{	
		for (int j = 5 - i; j > 1; j--)
		{
			printf("\t");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("%c\t", '*');
		}

		printf("\n");
	}

	return 0;
}