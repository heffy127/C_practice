#include <stdio.h>
/*
�޸��� �ּ� �� ���� �Ű������� �޾� 
���ڿ��� ����(deep copy)�ϴ� �Լ��� MyStrcpy() �Լ��� �ۼ� 
main() �Լ��� �ڵ�� �������� ������ ���� ��
���������� �۵��� �� �ֵ��� ����
��������� MYStrcpy()�� strcpy()�� ����
*/
char* MyStrcpy(char *bufferDst, int sizeDst, char *bufferSrc)
{
	int cnt = 0;

	for (int i = 0; i < sizeDst; i++)
	{
		if (bufferSrc[cnt] != '\0')
			bufferDst[cnt] = bufferSrc[cnt];
		else
			break;
		cnt++;
	}

	return *bufferDst;
}

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}