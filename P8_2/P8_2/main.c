#include <stdio.h>
/*
����ڷκ��� ���ڿ��� �Է¹��� �� ���ڿ��� ���̸� ���
��, �Է� �޴� ���ڿ��� �ѱ��̸� ���� ���� ������ ����
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
	printf("�ѱ� ������ ������ %d�� �Դϴ�.", cnt/2); // �ѱ��� �����ϳ��� 2bit
}