#include <stdio.h>
#include <string.h>

// �����м� strpbrk()
// Ư�� ���ڿ��� �ƴ� Ư�� ���ڵ� �� �ϳ��� �ִ��� �˻�

int main(void)
{
	char szBuffer[128] = { 0 };
	char szSet[128] = { 0 };
	char *pszStart = szBuffer;

	// �˻� ��� ���ڿ��� �Է¹޴´�.
	printf("Input String : ");
	gets_s(szBuffer, sizeof(szBuffer));

	// ã�� ���ڵ��� �Է¹޴´�.
	printf("Input character set : ");
	gets(szSet);

	// ��� ���ڿ��� ��ġ�ϴ� ���ڰ� �ִ��� �˻��Ѵ�.
	while ((pszStart = strpbrk(pszStart, szSet)) != NULL)
	{
		printf("[%p] Index: %d, %c \n",
			pszStart, pszStart - szBuffer, *pszStart);

		//��ġ�ϴ� �ϳ��� ã�����Ƿ� �������� �̵��ϰ� ��� ã�´�.
		pszStart++;
	}
}