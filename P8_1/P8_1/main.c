#include <stdio.h>
/*
����� �ڷ����� int�̰� ���̰� 5�� �迭�� ������ ��
����� �Է����� 5���� ������ �ʱ�ȭ
�� �� ���� ū ���� ���� ���� ���� ����ϴ� ���α׷� �ۼ�
*/
int main(void)
{
	int aList[5] = { 0 };
	printf("5���� ���� �Է� : ");
	scanf_s("%d%d%d%d%d", &aList[0], &aList[1], &aList[2], &aList[3], &aList[4]);
	int nMax = aList[0], nMin = aList[0] ;
	for (int i = 1; i < 5; i++)
	{
		if (nMax < aList[i])
			nMax = aList[i];
		if (nMin > aList[i])
			nMin = aList[i];
	 }
	
	for (int i = 0; i < 5; i++)
		printf("%d ", aList[i]);
	printf("\nMIN: %d, MAX: %d", nMin, nMax);

	return 0;
}