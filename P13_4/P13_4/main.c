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
	// USERDATA ����ü�� ���� ������ ���� ���� �� ����
	USERDATA *pUser = NULL;

	//USERDATA ����ü�� ����� �� ���� �� �ִ� ũ���� �޸� ���� �Ҵ�
	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	//������ �̹Ƿ� '.'�� �ƴ϶� '->'�����ڷ� ����� ����
	pUser->nAge = 10;
	strcpy_s(pUser->szName, sizeof(pUser->szName), "ȫ����");
	strcpy_s(pUser->szPhone, sizeof(pUser->szPhone), "010-1222-8205");

	printf("%d��\t%s\t%s",
		pUser->nAge, pUser->szName, pUser->szPhone);

	return 0;

	//
}