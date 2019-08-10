#include <stdio.h>

void getInput(int arr[], int index)
{
	int input;

	printf("%d번째 점수를 입력 > ", index);
	scanf_s("%d", &input);

	arr[index] = input;
}

double average(int arr[], int length)
{
	double total = 0.0;
	int i;

	for (i = 0; i < length; i++)
	{
		total += arr[i];
	}

	return (total / length);
}