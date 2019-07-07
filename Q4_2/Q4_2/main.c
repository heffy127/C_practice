#include <stdio.h>
/*
사용자로부터 정수로 초(second)를 입력받아 시:분:초 형식으로 출력
각 자리는 모두 두자리 정수로 표시해야하며 
한 자리 숫자인 경우 앞에 0을 붙여 출력해야함
*/
int main(void)
{
	int userSec = 0;
	printf("초(second)를 입력해주세요 : ");
	scanf_s("%d", &userSec);

	int h = userSec / 3600;
	int m = (userSec % 3600) / 60;
	int s = userSec % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", userSec, h, m, s);

	return 0;
}
