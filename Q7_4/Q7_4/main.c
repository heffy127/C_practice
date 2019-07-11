#include <stdio.h>
/*
사용자로부터 2~9사이의 정수를 입력받아
해당 정수의 구구단을 출력할 것
반드시 while문을 시용하며 코드가 9번 반복해야함
사용자가 입력한 값이 2~9를 벗어나면 'ERROR'라고 출력할것
*/
int main(void)
{
	int num = 0;
	int start = 1;
	scanf_s("%d", &num);
	
	if (num < 2 || num > 9)
	{
		printf("ERROR");
	}
	else
	{
		while (start <= 9)
		{
			printf("%d * %d = %d\n", num, start, (num*start));
			start++;
		}
	}

	return 0;
}