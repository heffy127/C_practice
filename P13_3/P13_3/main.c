#include <stdio.h>

//USERDATA ����ü ���� �� �� �缱��
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
}USERDATA;

int main(void)
{
	// USERDATA ����ü �迭 ����
	USERDATA userList[3] = {
		{19, "ȫ����", "8205"},
		{19, "������", "3395"},
		{22, "�����", "3201"}
	};

	for (int i = 0; i < 3; ++i)
	{
		printf("%d��\t%s\t%s\n",
			userList[i].nAge, userList[i].szName, userList[i].szPhone);
	}
	return 0;
}