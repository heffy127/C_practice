#include <stdio.h>
// ����ڷκ��� ������ �Է¹޾� 
// 5�� ���� �������� ����ϴ� ���α׷� �ۼ�
int main(void)
{
	int num = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	printf("5�� ���� ������ : %d", num % 5);

	return 0;
}