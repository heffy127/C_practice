#include <stdio.h>
#include <string.h>

// typedef�� �̿��� �� ����

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
}USERDATA;

int main(void)
{
	// typedef ���� ���� ����� struct ���� ����
	USERDATA user = { 0 , "", "" };

	user.nAge = 19;
	strcpy_s(user.szName, sizeof(user.szName), "Hong");
	strcpy_s(user.szPhone, sizeof(user.szPhone), "010-1234-8205");

	printf("%d��, %s, %s", user.nAge, user.szName, user.szPhone);
	return 0;
}