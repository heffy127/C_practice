#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
}USERDATA;

int main(void)
{
	// USERDATA 구조체에 대한 포인터 변수 선언 및 정의
	USERDATA *pUser = NULL;

	//USERDATA 구조체가 저장될 수 있을 수 있는 크기의 메모리 동적 할당
	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	//포인터 이므로 '.'이 아니라 '->'연산자로 멤버에 접근
	pUser->nAge = 10;
	strcpy_s(pUser->szName, sizeof(pUser->szName), "홍다희");
	strcpy_s(pUser->szPhone, sizeof(pUser->szPhone), "010-1222-8205");

	printf("%d살\t%s\t%s",
		pUser->nAge, pUser->szName, pUser->szPhone);

	return 0;

	//
}