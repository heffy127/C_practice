#include <stdio.h>
/*
int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	// �Է�

	for (i = 0; i < 3; ++i)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &aList[i]);
	}

	// �ִ밪 ���
	nMax = aList[0];
	for (i = 1; i < 3; ++i)
		if (aList[i] > nMax)
			nMax = aList[i];

	// ���
	printf("%d, %d, %d �� ���� ū ����  %d �Դϴ�.\n",
		aList[0], aList[1], aList[2], nMax);
	
	return 0;
}
*/

/*
���� ���� ����� ���� �� �ְ� 
3���� ����� ���� �Լ��� �߰��Ͽ� 
main �Լ� ����
*/

int GetData()
{
	int num = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	return num;
}

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (nMax < b)
		nMax = b;
	if (nMax < c)
		nMax = c;
	return nMax;
}

void PrintData(int a, int b, int c, int nMax)
{
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.",
		a, b, c, nMax);
}

int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	// �Է�
	for (i = 0; i < 3; ++i)
		aList[i] = GetData();
	
	// �ִ밪 ���
	nMax = GetMax(aList[0], aList[1], aList[2]);

	// ���
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}