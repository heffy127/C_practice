#include <stdio.h>
// ���̿� �̸��� �Է¹޾� ����ϱ�
int main(void)
{
	int age = 0;
	char name[10];
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &age);
	/*
	scanf ���� ������ Enter�� ���ۿ� ���� ������
	gets���� ���� �������� ���� Enter�� ������ �ν��ع�����
	�Է¹��� �ʰ� ����Ǵ� ��찡 ����
	�̸� �����ϱ����� scanf �Է¹����� %*c�� �߰�
	�̴� ������ ���� �ϳ�(\n)�� �����ٴ� ��
	*/

	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));

	printf("����� ���̴� %d���̰� �̸��� %s�Դϴ�", age, name);
	return 0;
}