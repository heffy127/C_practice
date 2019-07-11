#include <stdio.h>
/*
사용자로부터 문자열을 입력받은 후 문자열의 길이를 출력
단, 입력 받는 문자열은 한글이며 글자 사이 공백은 없음
*/
int main(void)
{
	char sentence[50];
	int cnt = 0;
	int i = 0;
	gets_s(sentence, sizeof(sentence));
	while(1)
	{	
		if (sentence[i] != '\0')
			cnt++;
		else
			break;
		i++;
	}
	printf("한글 문자의 개수는 %d자 입니다.", cnt/2); // 한글은 문자하나에 2bit
}