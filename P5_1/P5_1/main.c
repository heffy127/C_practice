#include <stdio.h>

/*
사용자로부터 키를 입력받아 150이상이면 합격, 아니면 불합격 출력
반드시 삼항 연산자 이용할 것
*/
int main(void)
{
	int height = 0;
	printf("키를 입력해주세요(cm) : ");
	scanf_s("%d", &height);
	printf("결과 : %s", height >= 150 ? "합격" : "불합격");

	return 0;
}
