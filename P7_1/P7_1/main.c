#include <stdio.h>
/*
1~100������ ���� �߿���
4�� ����� ��̸� 
�̵��� ������ ������ ����� ����ϴ� ���α׷� �ۼ�
*/
int main(void)
{
	int cnt = 0;
	int tot = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 4 != 0)
			continue;
		cnt++;
		tot += i;
	}

	printf("4�� ��� �� ���� : %d\n�� �� : %d", cnt, tot);
	return 0;
}