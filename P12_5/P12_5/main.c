#include <stdio.h>
#include <stdlib.h>

// ����ڷκ��� ���ڷ� ������ ���ڿ��� �Է¹޾�
// ������ ��ȯ�Ͽ� ����ϴ� �Լ�

int main(void)
{
	char szBuffer[32];
	int nResult = 0;

	printf("Input String : ");
	gets(szBuffer);

	// Ascii to Integer
	nResult = atoi(szBuffer);
	printf("%d\n", nResult);

	return 0;
}

// atol (Ascii to Long)
// atof (Ascii to Float)