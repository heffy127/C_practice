#include <stdio.h>
#include "print99.h"

int main(void)
{
	int input = 1;

	while (input)
	{
		input = getInput();

		print99(input);
	}

	return 0;
}