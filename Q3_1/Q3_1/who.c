#include <stdio.h>
// ���̿� �̸��� �Է¹޾� ����ϱ�
int main(void)
{
	int age = 0;
	char name[10];
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	getchar();

	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));

	printf("����� ���̴� %d���̰� �̸��� %s�Դϴ�", age, name);
	return 0;
}