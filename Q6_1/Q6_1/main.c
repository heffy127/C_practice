#include <stdio.h>
/*
����ڷκ��� �� ������ �Է¹޾� ���� ū �� ����ϴ� ���α׷� �ۼ�
��, �ݵ�� if���� ����ؾ��ϸ� �����̹� ������� �ϼ��� ��
*/
int main(void)
{
	int num = 0;
	int nMax;
	
	scanf_s("%d", &num);
	nMax = num;
	
	scanf_s("%d", &num);
	if (nMax < num)
		nMax = num;

	scanf_s("%d", &num);
	if (nMax < num)
		nMax = num;

	printf("MAX : %d", nMax);

	return 0;
}