#include <stdio.h>
/*

*
**
***
****
*****

�ݺ����� ����ؼ� ���� ���� ���
*/
int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	return 0;
}