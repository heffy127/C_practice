#include <stdio.h>

//USERDATA 구조체 선언 및 형 재선언
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
}USERDATA;

int main(void)
{
	// USERDATA 구조체 배열 선언
	USERDATA userList[3] = {
		{19, "홍다희", "8205"},
		{19, "나북희", "3395"},
		{22, "사쿠라", "3201"}
	};

	for (int i = 0; i < 3; ++i)
	{
		printf("%d살\t%s\t%s\n",
			userList[i].nAge, userList[i].szName, userList[i].szPhone);
	}
	return 0;
}