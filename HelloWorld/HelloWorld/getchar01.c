#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char *pszBuffer = NULL, *pszNewBuffer = NULL;

	pszBuffer = (char*)malloc(12);
	sprintf_s(pszBuffer, "%s", "TestString");
	printf("[%p] %d %s\n",
		pszBuffer, _msize(pszBuffer), pszBuffer);


	return 0;
}