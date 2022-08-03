
Sign up

BrightDaniel
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
 master 
alx-low_level_programming/0x0F-function_pointers/3-main.c

BrightDaniel Functions Project 1st Commit
…
 1 contributor
32 lines (27 sloc)  401 Bytes
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
