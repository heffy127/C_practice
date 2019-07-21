#include <stdio.h>
#include <stdlib.h>

// 사용자로부터 숫자로 구성된 문자열을 입력받아
// 정수로 변환하여 출력하는 함수

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