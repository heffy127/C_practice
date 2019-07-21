#include <stdio.h>

// 자기 참조 구조체를 활용한 연결 리스트

typedef struct USERDATA {
	char szName[32];
	char szPhone[32];
	// USERDATA를 가리킬 수 있는 포인터를 멤버로 선언
	struct USERDATA *pNext;
}USERDATA;

int main(void)
{
	// 배열로 USERDATA 구조체 인스턴스 넷을 선언 및 정의
	USERDATA userList[4] = {
		{"홍다희", "8205", NULL},
		{"나북희", "1234", NULL},
		{"사쿠라", "1957", NULL},
		{"김채원", "8834", NULL}
	};

	// 연결 리스트의 첫 번째 인스턴스의 주소를 저장할 포인터
	USERDATA *pUser = NULL;

	// pNext 멤버를 배열의 순서상 다음 구조체 인스턴스의 주소로 정의
	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	pUser = &userList[0];
	while (pUser != NULL)
	{
		printf("%s, %s\n", pUser->szName, pUser->szPhone);

		// 포인터를 다음으로 이동
		pUser = pUser->pNext;
	}
	return 0;

}