#include <stdio.h>
#include <string.h>

// 구조체 선언 및 정의

struct USERDATA
{
	int nAge; // 나이
	char szName[32]; // 이름
	char szPhone[32]; // 전화번호
};

int main(void)
{
	// USERDATA 구조체 변수 user 선언 및 정의
	struct USERDATA user = { 0, "","" };

	// 구조체 멤버 접근 및 값 채우기
	user.nAge = 10;
	strcpy_s(user.szName, 32, "Hoon");
	strcpy_s(user.szPhone, 32, "010 - 1234 - 1234");

	// 구조체 멤버 접근 및 출력
	printf("%d살, %s, %s\n", user.nAge, user.szName, user.szPhone);
	return 0;
}