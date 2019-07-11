#include <stdio.h>
/*
int 형 요소가 5행 5열로 이루어진  2차원 배열을 선언하고
전체요소를 모두 0으로 초기화한후 아래 보기와 같이 작성
반복문을 5번 이상 사용하거나 배열의 초기값을 기술하여 채우지 말것

1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25

*/
int main(void)
{
	int i = 0, j = 0, num = 1;
	int square[5][5] = { 0 };

	for (i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < 5; j++)
			{
				square[i][j] = num;
				num++;
			}
		}
		else
		{
			for (j = 4; j >= 0; j--)
			{
				square[i][j] = num;
				num++;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", square[i][j]);
		}
		printf("\n");
	}

	return 0;
}