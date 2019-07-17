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

위 코드의 논리적 오류 두가지를 파악하고
수정해볼것
*/


int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	//	pszData = szBuffer;
	//	szBuffer와 같은 배열이름은 배열 요소의 0번 인덱스를 가리키는 주소상수 
	//	즉 Deep Copy가 아닌 Shallow copy가 되는 형태
	memcpy(pszData, szBuffer, sizeof(szBuffer));
	puts(pszData);

	//	동적 할당 받은 메모리를 해제해주지 않을 경우
	//	메모리 누수 발생!
	free(pszData);
	return 0; 
}