#include <stdio.h>
/*
������� 1000��
���ɺ� �������� �����Ͽ� ��������� ���
�ݵ�� if else���� �ι� ��ø�Ͽ� ����
0~3 100%
4~13 50%
14~19 25%
*/
int main(void)
{
	int age = 0;
	int cost = 1000;
	scanf_s("%d", &age);
	
	if (age < 20)
	{
		if (age < 13)
		{
			if (age < 4)
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
	
	printf("������� : %d��", cost);

	return 0;
}