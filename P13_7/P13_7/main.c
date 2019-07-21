#include <stdio.h>
// 공용체 (한 가지 자료에 대해 여러가지 해석방법(자료형)을 부여)
// IP_ADDR '공용체' 선언 및 형 재선언
// 4바이트를 세 가지 형식으로 달리 해석 가능
typedef union _IP_ADDR
{
	int nAddress;	// 해석1
	short awData[2]; // 해석2
	unsigned char addr[4]; // 해석3
}IP_ADDR;

int main(void)
{
	IP_ADDR Data = { 0 };
	Data.nAddress = 0x41424344;

	// 0x41424344를 8비트씩 넷으로 잘라 영문자 출력
	printf("%c%c%c%c\n", Data.addr[0], Data.addr[1], Data.addr[2], Data.addr[3]);
	// 16비트씩 둘로 잘라 출력
	printf("%x, %d\n", Data.awData[0], Data.awData[0]);
	printf("%x, %d\n", Data.awData[1], Data.awData[1]);
	return 0;
}