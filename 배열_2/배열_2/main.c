#include <stdio.h>
#include "inputAvg.h"

int main(void)
{
	int a[5];
	int i;
	double result;

	for (i = 0; i < 5; i++)
	{
		getInput(a, i);
	}

	result = average(a, 5);

	printf("Æò±Õ°ª : %.2lf\n", result);

	return 0;
}