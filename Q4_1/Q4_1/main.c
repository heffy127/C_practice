#include <stdio.h>
/*
����ڷκ��� �� ������ �Է¹޾� �μ��� ��� ���
�Է��� scanf() ����� prinf() ����� ��
�Ҽ��� ��° �ڸ������� ǥ��, ������ 2���� ����
*/
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	printf("�� ���� �Է� : ");
	scanf_s("%d%d", &num1, &num2);
	printf("AVG : %.2f", (num1 + num2) / 2.0);

	return 0;
}