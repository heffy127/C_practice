#include <stdio.h>

// MYBODY 구조체 선언 및 형 재선언
typedef struct MYBODY
{
	int nHeight;
	int nWeight;
}MYBODY;

// MYBODY 구조체를 멤버로 가지는 USERDATA 구조체 선언
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	MYBODY body;
}USERDATA;

int main(void)
{
	USERDATA user = {
		"홍다희",
		"8205",
	{158, 46}
	};
	
	printf("%s\t%s\t%d\t%d",
		user.szName, user.szPhone, user.body.nHeight, user.body.nWeight);
}