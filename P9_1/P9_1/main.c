#include <stdio.h>
/*
int �� ��Ұ� 5�� 5���� �̷����  2���� �迭�� �����ϰ�
��ü��Ҹ� ��� 0���� �ʱ�ȭ���� �Ʒ� ����� ���� �ۼ�
�ݺ����� 5�� �̻� ����ϰų� �迭�� �ʱⰪ�� ����Ͽ� ä���� ����

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