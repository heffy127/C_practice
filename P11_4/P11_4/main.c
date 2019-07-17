#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
정수를 입력받고, 그 개수만큼 char*를 
여러개 저장할 수 있는 메모리를 동적 할당함
그리고 입력할 문자열의 최대 길이를 입력받고
최대 길이의 문자열을 저장할 수 있는 크기의 메모리를 동적 할당하여
입력받은 문자열을 저장 후 출력
*/

int main(void)
{
	int num = 0;
	int strLen = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &num);
	char **ppstr = (char**)malloc(sizeof(char*) * num); // 포인터 변수를 담는 포인터 변수

	printf("문자열 최대 길이 입력 : ");
	scanf_s("%d%*c", &strLen);

	for (int i = 0; i < num; i++)
	{
		*(ppstr + i) = (char*)malloc(sizeof(char) * strLen);
		gets_s(*(ppstr + i), strLen + 1);
	}

	for (int i = 0; i < num; i++)
		printf("%s\n", ppstr[i]);

	for (int i = 0; i < num; i++)
		free(ppstr[i]);
	free(ppstr); 
	
	return 0;
}