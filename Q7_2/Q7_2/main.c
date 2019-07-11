#include <stdio.h>
/*
5행 5열로 (*)을 출력하는 프로그램 작성
while문을 두번 중첩하여 구현할것
한 행의 (*)은 \t 를 사용해서 띄울것
*/
int main(void)
{
	int i = 0;
	int j = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			printf("%c\t", '*');
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
