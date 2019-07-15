#include <stdio.h>
#include <stdlib.h>
/*
밑의 예제를 작성하여 실행하면 실행결과가 잘 출력되지만
두가지 심각한 결함이 존재한다.
무엇인지 답하고 문제가 없는 코드가 되도록 수정할것

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
	//c언어에서 배열이름은 주소상수..
	//pszData에는 szBuffer의 메모리 주소만 대입되게 됨 (내용 복사 X)
	for (int i = 0; i < sizeof(szBuffer); i++)
		pszData[i] = szBuffer[i];
	puts(pszData);

	free(pszData); // 동적할당한 메모리를 해제해야 메모리 누수가 일어나지 않음
	return 0;
}