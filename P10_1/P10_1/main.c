#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// ȭ�鿡 �޴��� ����ϴ� �Լ��� ���� �� ����
int PrintMenu(void)
{
	int nInput = 0;

	// �޴��� ����ϱ� ���� ȭ���� �����. (Clear Screen)
	system("cls");
	// �޴��� ����ϰ� ����� �Է��� �޴´�.
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);

	// ����ڰ� ������ �޴� ���� ��ȯ�Ѵ�.
	return nInput;

}

int main(void)
{
	int nMenu = 0;
	// �޴� �̺�Ʈ ����
	// ����ڰ� �Է��� ���� ���� ������ ����� �ݺ��� ����
	// 0�� �Է��ϸ� �ݺ����� ������.
	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1:
			puts("�� �׸��� �߰��մϴ�.");
			break;

		case 2:
			puts("���� �׸񿡼� �˻��մϴ�.");
			break;

		case 3:
			puts("��ü ������ ����մϴ�.");
			break;

		case 4:
			puts("���� �׸��� �����մϴ�.");
			break;

		default:
			puts("�� �� ���� ����Դϴ�.");
		}

		_getch();
	}
	puts("Bye~");
	return 0;
}