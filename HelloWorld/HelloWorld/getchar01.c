#include <stdio.h>
#include <conio.h>

// �������� ����
// �� ������ ��� �Լ����� ���� ����
int g_nCounter = 0;

void InitCounter(int nData)
{
	g_nCounter = nData;
}

void IncreaseCounter()
{
	// �������� g_nCounter�� ���� 1 ������Ų��.
	g_nCounter++;
}

int main(void)
{
	InitCounter(10);
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);

	return 0;

}