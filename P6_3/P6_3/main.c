#include <stdio.h>
/*
����ڷκ��� 5���� ������ �Է¹޾� ���� ū �� ���
�� ����ڴ� 0~100���̸� �Է��ϵ��� ����
������ ��� ���ڸ� �Է��� ��� 
0 �̸��� 0���� 100 �ʰ��� 100���� ����
*/
int main(void)
{
	int num, nMax;
	scanf_s("%d", &num);
	
	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;
	
	if (num > nMax)
		nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	if (num > nMax)
		nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	if (num > nMax)
		nMax = num;

	scanf_s("%d", &num);

	if (num > 100)
		num = 100;
	else if (num < 0)
		num = 0;

	if (num > nMax)
		nMax = num;
	
	printf("MAX : %d", nMax);
	return 0;
}