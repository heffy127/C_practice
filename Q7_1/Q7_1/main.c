#include <stdio.h>
/*
����ڷκ��� 1~9 ���� ������ �Է¹޾�
�� ����ŭ *�� ����ϴ� ���α׷��� �ۼ�
��� �� �࿡ ���̾� ����ϸ�
�Է��� ������ ��� ��� 1�̳� 9�� ��������
*/
int main(void)
{
	int num = 0;
	int start = 1;
	scanf_s("%d", &num);
	
	if (num < 1)
		num = 1;
	else if (num > 9)
		num = 9;
	
	while (start <= num)
	{
		printf("%c", '*');
		start++;
	}
	printf("\n");
}