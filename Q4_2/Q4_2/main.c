#include <stdio.h>
/*
����ڷκ��� ������ ��(second)�� �Է¹޾� ��:��:�� �������� ���
�� �ڸ��� ��� ���ڸ� ������ ǥ���ؾ��ϸ� 
�� �ڸ� ������ ��� �տ� 0�� �ٿ� ����ؾ���
*/
int main(void)
{
	int userSec = 0;
	printf("��(second)�� �Է����ּ��� : ");
	scanf_s("%d", &userSec);

	int h = userSec / 3600;
	int m = (userSec % 3600) / 60;
	int s = userSec % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", userSec, h, m, s);

	return 0;
}
