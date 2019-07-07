#include <stdio.h>
/*
세 정수를 입력받아 총 합을 출력하기 위한 프로그램
새로운 변수를 추가할 수 없으며 // 구역 이외의 코드는 수정 불가
복합 대입 연산자 사용할 것
*/
int main(void) 
{
	int nInput, nTotal;

	// 문제 코드 작성
	nInput = 0, nTotal = 0;

	printf("첫 번째 정수를 입력해주세요 : ");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("두 번째 정수를 입력해주세요 : ");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("세 번째 정수를 입력해주세요 : ");
	scanf_s("%d", &nInput);
	nTotal += nInput;
	//

	printf("Total : %d\n", nTotal);
	return 0;
}