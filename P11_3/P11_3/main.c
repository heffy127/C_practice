#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
����ڷκ��� �Է¹��� ù ��° ���ڿ���
���� �Ҵ�� �޸𸮿� ������ �� ȭ�鿡 ����ϰ�,
�� ��°�� �Է¹��� ���ڿ��� ù ��° �����Ҵ�� �޸𸮿�
���ٿ� ����ϴ� ���α׷� �ۼ�
*/
int main(void)
{
	char szBuffer[50] = { 0 };

	gets_s(szBuffer, sizeof(szBuffer)); // ù ��° ���ڿ�

	int length = strlen(szBuffer);
	char *pszBuffer = (char*)malloc(length+1); // �Էµ� ���̸�ŭ �޸� ���� �Ҵ� (+1�� \0)
	strcpy_s(pszBuffer, _msize(pszBuffer), szBuffer);
	printf("%s\n", pszBuffer);
	
	gets_s(szBuffer, sizeof(szBuffer)); // �� ��° ���ڿ�

	int length2 = strlen(szBuffer);
	char *pszNewBuffer = (char*)realloc(pszBuffer, length + length2 + 1);
	// ù ��° �Է¹��� ���ڿ� + �� ��° �Է¹��� ���ڿ��� ���̱��� �޸� Ȯ��
	if (pszNewBuffer == NULL)
	{
		printf("�޸� Ȯ�� ����");
		free(pszBuffer);
		return 0;
	}
	strcat_s(pszNewBuffer, _msize(pszNewBuffer), szBuffer); // ���ڿ� �̾���̴� �Լ�
	printf("%s\n", pszNewBuffer); 

	free(pszNewBuffer);
	return 0;
}