#include <stdio.h>
/*
���� �⺻��� 1000��
���̰� 20�� �̸��� ��� 25% ����
���̸� �Է������� ����� ���� ����� ��µǵ��� �Ұ�
*/
int main(void)
{
	int age = 0;
	int cost = 1000;
	scanf_s("%d", &age);

	if (age < 20)
	{
		cost = (int)(cost * 0.75);
	}
	printf("������� : %d��", cost);

	return 0;
}