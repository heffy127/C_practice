#include <stdio.h>
/*
������� 1000��
���ɴ뺰 �������� �����Ͽ� ������� ���
�ݵ�� ���� if�� ���
0~3 100%
4~13 50%
14~19 25%
20�� �̻� 0%
65�� �̻� 100%
*/
int main(void)
{
	int age = 0;
	int cost = 1000;
	scanf_s("%d", &age);

	if (age < 20)
	{
		if (age < 14)
		{
			if (age < 3)
			{
				cost = cost * 0;
			}
			else
			{
				cost = (int)(cost * 0.5);
			}
		}
		else
		{
			cost = (int)(cost * 0.75);
		}
	}
	else if (age >= 65)
	{
		cost = (int)(cost * 0);
	}

	printf("������� : %d", cost);

	return 0;
}