#include <stdio.h>
/*
����ڷκ��� 2~9������ ������ �Է¹޾�
�ش� ������ �������� ����� ��
�ݵ�� while���� �ÿ��ϸ� �ڵ尡 9�� �ݺ��ؾ���
����ڰ� �Է��� ���� 2~9�� ����� 'ERROR'��� ����Ұ�
*/
int main(void)
{
	int num = 0;
	int start = 1;
	scanf_s("%d", &num);
	
	if (num < 2 || num > 9)
	{
		printf("ERROR");
	}
	else
	{
		while (start <= 9)
		{
			printf("%d * %d = %d\n", num, start, (num*start));
			start++;
		}
	}

	return 0;
}