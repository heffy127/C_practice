#include <stdio.h>
/*
�� ���� �߿��� ���� ū �� ���ϱ�
scanf�� �ѹ��� ȣ���Ͽ� �� ������ �Է¹��� ��
// ���� �̿��� �ڵ�� �ǵ��� ����
*/
int main(void)
{
	int nMax = 0;
	int a, b, c;

	// ���� �ڵ� �ۼ�
	
	scanf_s("%d%d%d", &a, &b, &c);
	a > b ? (nMax = a) : (nMax = b);
	c > nMax ? (nMax = c) : nMax;

	//

	printf("MAX : %d\n", nMax);

	return 0;
}