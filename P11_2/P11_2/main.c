#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer;
	puts(pszData);
	return 0;
}

�� �ڵ��� ���� ���� �ΰ����� �ľ��ϰ�
�����غ���
*/


int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	//	pszData = szBuffer;
	//	szBuffer�� ���� �迭�̸��� �迭 ����� 0�� �ε����� ����Ű�� �ּһ�� 
	//	�� Deep Copy�� �ƴ� Shallow copy�� �Ǵ� ����
	memcpy(pszData, szBuffer, sizeof(szBuffer));
	puts(pszData);

	//	���� �Ҵ� ���� �޸𸮸� ���������� ���� ���
	//	�޸� ���� �߻�!
	free(pszData);
	return 0; 
}