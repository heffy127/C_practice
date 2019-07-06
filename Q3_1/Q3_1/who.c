#include <stdio.h>
// 나이와 이름을 입력받아 출력하기
int main(void)
{
	int age = 0;
	char name[10];
	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &age);
	/*
	scanf 사용시 마지막 Enter가 버퍼에 남기 때문에
	gets에서 버퍼 마지막에 남은 Enter를 끝으로 인식해버려서
	입력받지 않고 종료되는 경우가 생김
	이를 방지하기위해 scanf 입력받을때 %*c를 추가
	이는 마지막 문자 하나(\n)를 버린다는 뜻
	*/

	printf("이름을 입력하세요 : ");
	gets_s(name, sizeof(name));

	printf("당신의 나이는 %d살이고 이름은 %s입니다", age, name);
	return 0;
}