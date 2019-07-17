#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
사용자로부터 입력받은 첫 번째 문자열을
동적 할당된 메모리에 저장한 후 화면에 출력하고,
두 번째로 입력받은 문자열을 첫 번째 동적할당된 메모리에
덧붙여 출력하는 프로그램 작성
*/
int main(void)
{
	char szBuffer[50] = { 0 };

	gets_s(szBuffer, sizeof(szBuffer)); // 첫 번째 문자열

	int length = strlen(szBuffer);
	char *pszBuffer = (char*)malloc(length+1); // 입력된 길이만큼 메모리 동적 할당 (+1은 \0)
	strcpy_s(pszBuffer, _msize(pszBuffer), szBuffer);
	printf("%s\n", pszBuffer);
	
	gets_s(szBuffer, sizeof(szBuffer)); // 두 번째 문자열

	int length2 = strlen(szBuffer);
	char *pszNewBuffer = (char*)realloc(pszBuffer, length + length2 + 1);
	// 첫 번째 입력받은 문자열 + 두 번째 입력받은 문자열의 길이까지 메모리 확장
	if (pszNewBuffer == NULL)
	{
		printf("메모리 확장 실패");
		free(pszBuffer);
		return 0;
	}
	strcat_s(pszNewBuffer, _msize(pszNewBuffer), szBuffer); // 문자열 이어붙이는 함수
	printf("%s\n", pszNewBuffer); 

	free(pszNewBuffer);
	return 0;
}