#include <stdio.h>
#include <conio.h>
int main(void)
{
	int nData = 10;

	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d\n", sizeof('A'), sizeof(char));

	return 0;
} 