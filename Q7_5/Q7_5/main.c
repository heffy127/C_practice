#include <stdio.h>
/*

*
**
***
****
*****

반복문을 사용해서 위와 같이 출력
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