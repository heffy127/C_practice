#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
������ �Է¹ް�, �� ������ŭ char*�� 
������ ������ �� �ִ� �޸𸮸� ���� �Ҵ���
�׸��� �Է��� ���ڿ��� �ִ� ���̸� �Է¹ް�
�ִ� ������ ���ڿ��� ������ �� �ִ� ũ���� �޸𸮸� ���� �Ҵ��Ͽ�
�Է¹��� ���ڿ��� ���� �� ���
*/

int main(void)
{
	int num = 0;
	int strLen = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &num);
	char **ppstr = (char**)malloc(sizeof(char*) * num); // ������ ������ ��� ������ ����

	printf("���ڿ� �ִ� ���� �Է� : ");
	scanf_s("%d%*c", &strLen);

	for (int i = 0; i < num; i++)
	{
		*(ppstr + i) = (char*)malloc(sizeof(char) * strLen);
		gets_s(*(ppstr + i), strLen + 1);
	}

	for (int i = 0; i < num; i++)
		printf("%s\n", ppstr[i]);

	for (int i = 0; i < num; i++)
		free(ppstr[i]);
	free(ppstr); 
	
	return 0;
}