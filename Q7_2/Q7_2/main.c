#include <stdio.h>
/*
5�� 5���� (*)�� ����ϴ� ���α׷� �ۼ�
while���� �ι� ��ø�Ͽ� �����Ұ�
�� ���� (*)�� \t �� ����ؼ� ����
*/
int main(void)
{
	int i = 0;
	int j = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			printf("%c\t", '*');
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
