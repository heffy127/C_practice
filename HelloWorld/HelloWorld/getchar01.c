#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
	char szPath[128] = { "C:\\program Files\\" };
	char szBuffer[128] = { 0 };
	printf("Input path: ");
	gets_s(szBuffer, sizeof(szBuffer));

	strcat_s(szPath, sizeof(szBuffer), szBuffer);
	puts(szPath);
	return 0;
}