#include <stdio.h>
#include "showMenu.h"

// ���α׷��� ����Ǿ� �մ� 5���� ���� �� �ش� ������ �����ִ� ���α׷�

int main(void)
{
	int a[5] = { 80,90,80,82,100 };
	int result;

	result = showMenu();
	printf("���� : %d\n", a[result]);

	return 0;
}