#include <stdio.h>
/*
�⺻��ݰ� ���̸� �Ű������� �޾Ƽ�
���̿� ���� ��������� ����� ��ȯ�ϴ� GetFee() �Լ��� �ۼ�
0~3 100%
4~13 50 %
14~19 75%
20~ 0%
*/

int GetFee(int fee, int age)
{
	if (age >= 20)
		return fee;
	else
	{
		if (age >= 14)
			return fee * 0.25;
		else
		{
			if (age >= 4)
				return fee * 0.5;
			else
				return fee * 0;
		}
	}
}

int main(void)
{
	int currentFee = 1000;
	int age = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &age);
	printf("��� : %d", GetFee(currentFee, age));

	return 0;
}