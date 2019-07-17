#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
매개변수로 char*형 자료를 받아서
문자열의 길이를 계산하여 반환하는 함수 작성
함수의 이름은 GetLength()
*/

int GetLength(char *str)
{
	int index = 0;
	while(str[index] != NULL)
	{
		index++;
	}
	return index; 
}

int main(void)
{
	char word[10] = { "Hello" };
	char word2[20] = { "parkjunyeong" };
	char *myword = word;
	char *myword2 = word2;
	printf("Hello 길이 %d\n", GetLength(myword));
	printf("parkjunyeong 길이 %d", GetLength(myword2));
	return 0;
}