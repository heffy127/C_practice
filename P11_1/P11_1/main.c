#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
�Ű������� char*�� �ڷḦ �޾Ƽ�
���ڿ��� ���̸� ����Ͽ� ��ȯ�ϴ� �Լ� �ۼ�
�Լ��� �̸��� GetLength()
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
	printf("Hello ���� %d\n", GetLength(myword));
	printf("parkjunyeong ���� %d", GetLength(myword2));
	return 0;
}