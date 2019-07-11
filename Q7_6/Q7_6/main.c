#include <stdio.h>
/*
    *
   **
  ***
 ****
*****
여백은 \t를 사용
위와 같은 형태로 반복문을 써서 출력
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