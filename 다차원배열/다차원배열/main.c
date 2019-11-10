#include <stdio.h>

/*
	1 0 0
	2 3 0
	4 5 6 다차원 배열 출력
*/

int main(void)
{
	int arr[3][3] = { {1}, {2,3}, {4,5,6} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}

	return 0;

}