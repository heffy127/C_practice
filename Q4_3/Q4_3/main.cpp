#include <stdio.h>
/*
�� ������ �Է¹޾� �� ���� ����ϱ� ���� ���α׷�
���ο� ������ �߰��� �� ������ // ���� �̿��� �ڵ�� ���� �Ұ�
���� ���� ������ ����� ��
*/
int main(void) 
{
	int nInput, nTotal;

	// ���� �ڵ� �ۼ�
	nInput = 0, nTotal = 0;

	printf("ù ��° ������ �Է����ּ��� : ");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("�� ��° ������ �Է����ּ��� : ");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("�� ��° ������ �Է����ּ��� : ");
	scanf_s("%d", &nInput);
	nTotal += nInput;
	//

	printf("Total : %d\n", nTotal);
	return 0;
}