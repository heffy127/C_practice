#include <stdio.h>

int showMenu()
{
	int input;
	printf("---����ǥ---\n");
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("------------");
	printf("��ȣ�� �����ϼ��� > ");
	scanf_s("%d", &input);

	return input;
}