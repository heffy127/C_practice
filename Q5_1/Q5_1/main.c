#include <stdio.h>
/*
�����̹� ������� ������ �ִ밪 ���ϱ� ���α׷�
����� �Է��� -100���� +100 ������ ������ �Է�
�ּ� ó�� �Ǿ��ִ� ���� �ɰ��� ���� ������ �����ϱ�
*/
int main(void)
{
	//int nMax, nInput = 0;
	int nMax = -100, nInput = 0;
	/*
	�� �ڵ尡 ������ ����
	�ʱ�ȭ�� �̷�� ���� �ʾұ⿡ ���� ����
	������ ����ڰ� �Է��� �� �ִ� ���� ���� ���� -100���� �ʱ�ȭ
	*/

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);


	return 0;
}