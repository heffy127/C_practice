#include <stdio.h>
// ���ڿ��� �� ���ھ� ���ȣ��� �ݺ��Ͽ� ���

void PutData(char *pszParam)
{
	//���ڿ��� ���̸� �� �̻� ���ȣ�� ���� �ʰ� ��ȯ
	if (*pszParam == '\0')
		return;

	// ���� �� ������ ���� ������ �ٲٸ� ���ڿ��� �������� ���
	putchar(*pszParam);
	// ���� ���ڸ� ����Ű�� �ּҸ� �Ű������� ���ȣ��
	PutData(pszParam + 1);
}

int main(void)
{
	PutData("TestData");
	putchar('\n');
	return 0;
}