#include <stdio.h>
/*
메모리의 주소 두 개를 매개변수로 받아 
문자열을 복사(deep copy)하는 함수인 MyStrcpy() 함수를 작성 
main() 함수의 코드와 실행결과가 다음과 같을 때
정상적으로 작동할 수 있도록 구현
기능적으로 MYStrcpy()는 strcpy()와 같음
*/
char* MyStrcpy(char *bufferDst, int sizeDst, char *bufferSrc)
{
	int cnt = 0;

	for (int i = 0; i < sizeDst; i++)
	{
		if (bufferSrc[cnt] != '\0')
			bufferDst[cnt] = bufferSrc[cnt];
		else
			break;
		cnt++;
	}

	return *bufferDst;
}

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}