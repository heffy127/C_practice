#include <stdio.h>

// ���ڿ� �迭

int main(void)
{
	char fruit[][10] = { "apple", "orange", "kiwi" };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%c", fruit[i][j]);
		}
		printf("\n");
	}
	return 0;
}