#include <stdio.h>
/*
�Ű����� int�� �ڷ� 4���� �޾�
�� �� ���� ���� ���ڸ� ��ȯ�ϴ�
GetMin() �Լ��� �ۼ�
*/
int GetMin(int array[]);

int main(void)
{
	int i = 0;
	int num = 0;
	int array[4] = { 0 };
	for (i = 0; i < 4; i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &array[i]);
	}

	printf("�ּҰ� : %d", GetMin(array));
	return 0;
}

int GetMin(int array[])
{
	int nMin = 9999;
	int i = 0;
	for (i = 0; i < sizeof(array); i++)
	{
		if (nMin > array[i])
			nMin = array[i];
	}
	return nMin;
}