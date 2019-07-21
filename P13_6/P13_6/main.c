#include <stdio.h>

// �ڱ� ���� ����ü�� Ȱ���� ���� ����Ʈ

typedef struct USERDATA {
	char szName[32];
	char szPhone[32];
	// USERDATA�� ����ų �� �ִ� �����͸� ����� ����
	struct USERDATA *pNext;
}USERDATA;

int main(void)
{
	// �迭�� USERDATA ����ü �ν��Ͻ� ���� ���� �� ����
	USERDATA userList[4] = {
		{"ȫ����", "8205", NULL},
		{"������", "1234", NULL},
		{"�����", "1957", NULL},
		{"��ä��", "8834", NULL}
	};

	// ���� ����Ʈ�� ù ��° �ν��Ͻ��� �ּҸ� ������ ������
	USERDATA *pUser = NULL;

	// pNext ����� �迭�� ������ ���� ����ü �ν��Ͻ��� �ּҷ� ����
	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	pUser = &userList[0];
	while (pUser != NULL)
	{
		printf("%s, %s\n", pUser->szName, pUser->szPhone);

		// �����͸� �������� �̵�
		pUser = pUser->pNext;
	}
	return 0;

}