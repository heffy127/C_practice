#include <stdio.h>
#include <string.h>

// ����ü ���� �� ����

struct USERDATA
{
	int nAge; // ����
	char szName[32]; // �̸�
	char szPhone[32]; // ��ȭ��ȣ
};

int main(void)
{
	// USERDATA ����ü ���� user ���� �� ����
	struct USERDATA user = { 0, "","" };

	// ����ü ��� ���� �� �� ä���
	user.nAge = 10;
	strcpy_s(user.szName, 32, "Hoon");
	strcpy_s(user.szPhone, 32, "010 - 1234 - 1234");

	// ����ü ��� ���� �� ���
	printf("%d��, %s, %s\n", user.nAge, user.szName, user.szPhone);
	return 0;
}