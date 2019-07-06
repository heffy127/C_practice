#include <stdio.h>
// 나이와 이름을 입력받아 출력하기
int main(void)
{
	int age = 0;
	char name[10];
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	getchar();

	printf("이름을 입력하세요 : ");
	gets_s(name, sizeof(name));

	printf("당신의 나이는 %d살이고 이름은 %s입니다", age, name);
	return 0;
}