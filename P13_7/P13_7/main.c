#include <stdio.h>
// ����ü (�� ���� �ڷῡ ���� �������� �ؼ����(�ڷ���)�� �ο�)
// IP_ADDR '����ü' ���� �� �� �缱��
// 4����Ʈ�� �� ���� �������� �޸� �ؼ� ����
typedef union _IP_ADDR
{
	int nAddress;	// �ؼ�1
	short awData[2]; // �ؼ�2
	unsigned char addr[4]; // �ؼ�3
}IP_ADDR;

int main(void)
{
	IP_ADDR Data = { 0 };
	Data.nAddress = 0x41424344;

	// 0x41424344�� 8��Ʈ�� ������ �߶� ������ ���
	printf("%c%c%c%c\n", Data.addr[0], Data.addr[1], Data.addr[2], Data.addr[3]);
	// 16��Ʈ�� �ѷ� �߶� ���
	printf("%x, %d\n", Data.awData[0], Data.awData[0]);
	printf("%x, %d\n", Data.awData[1], Data.awData[1]);
	return 0;
}