#include <stdio.h>
#include <stdlib.h>
/*
���� ������ �ۼ��Ͽ� �����ϸ� �������� �� ��µ�����
�ΰ��� �ɰ��� ������ �����Ѵ�.
�������� ���ϰ� ������ ���� �ڵ尡 �ǵ��� �����Ұ�

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer;
	puts(pszData);
	return 0;
}
*/

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	//pszData = szBuffer;
	//c���� �迭�̸��� �ּһ��..
	//pszData���� szBuffer�� �޸� �ּҸ� ���Եǰ� �� (���� ���� X)
	for (int i = 0; i < sizeof(szBuffer); i++)
		pszData[i] = szBuffer[i];
	puts(pszData);

	free(pszData); // �����Ҵ��� �޸𸮸� �����ؾ� �޸� ������ �Ͼ�� ����
	return 0;
}