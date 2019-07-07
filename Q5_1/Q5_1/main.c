#include <stdio.h>
/*
서바이벌 방식으로 구현한 최대값 구하기 프로그램
사용자 입력은 -100에서 +100 사이의 정수만 입력
주석 처리 되어있는 행의 심각한 논리적 결함을 수정하기
*/
int main(void)
{
	//int nMax, nInput = 0;
	int nMax = -100, nInput = 0;
	/*
	위 코드가 에러난 이유
	초기화가 이루어 지지 않았기에 빌드 오류
	때문에 사용자가 입력할 수 있는 가장 작은 수인 -100으로 초기화
	*/

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);


	return 0;
}