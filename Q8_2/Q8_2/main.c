#include <stdio.h>
/*
�ּҰ��� ���ϴ� ���α׷� �ۼ�
�ּҰ��� ����Ǵ� ������ ���� ���������ʰ� 
�迭�� 0�� ��ҿ� ����
��, �迭�� ���� ���ǵǴ� ���� ������ �ؾ� ��
// �����ȿ� �ڵ� �ۼ�
*/
int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, nTmp = 0;

	// ���� �ڵ� �ۼ�

	for (i = 1; i < 5; i++)
	{
		if (aList[0] > aList[i])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}
	}

	//
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	printf("MIN : %d\n", aList[0]);

	return 0;
}
