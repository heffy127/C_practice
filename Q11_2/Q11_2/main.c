#include <stdio.h>
#include <string.h>
/*
배열 szBuffer를 그림으로 표현한 후 예제 실행결과를 작성
특히 세 번째와 여섯 번째 printf() 함수의 출력 결과에 대해
이유를 기술할것

'Q11_2 풀이.JPEG'에 작성하였음
*/
int main(void)
{
	char szBuffer[32] = { "You are a girl." };
	char *pszData = szBuffer + 4;

	printf("%c\n", szBuffer[0]);
	printf("%c\n", pszData[0]);
	printf("%c\n", pszData[6]);

	printf("%s\n", szBuffer + 4);
	printf("%s\n", pszData);
	printf("%s\n", pszData + 4);
	return 0;
}