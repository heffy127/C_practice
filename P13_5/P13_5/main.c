#include <stdio.h>

// MYBODY ����ü ���� �� �� �缱��
typedef struct MYBODY
{
	int nHeight;
	int nWeight;
}MYBODY;

// MYBODY ����ü�� ����� ������ USERDATA ����ü ����
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	MYBODY body;
}USERDATA;

int main(void)
{
	USERDATA user = {
		"ȫ����",
		"8205",
	{158, 46}
	};
	
	printf("%s\t%s\t%d\t%d",
		user.szName, user.szPhone, user.body.nHeight, user.body.nWeight);
}