#include <stdio.h>
/*
1~10���� ������ ����ϴ� ���α׷� �ۼ�
while���� ����Ͽ� �����ϴ� ������� ����
*/
int main(void)
{
	int tot = 0;
	int start = 1;
	while (start <= 10)
	{
		tot += start;
		start++;
	}
	printf("Total : %d", tot);

	return 0;
}