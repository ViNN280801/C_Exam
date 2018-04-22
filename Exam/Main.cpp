#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Header.h"
FILE *fp;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	if ((fp = fopen("exam.xls", "r")) != NULL)
	{

	}
	else
		printf("Error trying to read file.\n");
}