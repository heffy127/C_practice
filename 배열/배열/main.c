#include <stdio.h>
#include "showMenu.h"

// 프로그램에 저장되어 잇는 5개의 과목 중 해당 점수를 보여주는 프로그램

int main(void)
{
	int a[5] = { 80,90,80,82,100 };
	int result;

	result = showMenu();
	printf("점수 : %d\n", a[result]);

	return 0;
}