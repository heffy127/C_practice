#include <stdio.h>

/*
����ڷκ��� Ű�� �Է¹޾� 150�̻��̸� �հ�, �ƴϸ� ���հ� ���
�ݵ�� ���� ������ �̿��� ��
*/
int main(void)
{
	int height = 0;
	printf("Ű�� �Է����ּ���(cm) : ");
	scanf_s("%d", &height);
	printf("��� : %s", height >= 150 ? "�հ�" : "���հ�");

	return 0;
}
