/*
 * =====================================================================================
 *
 *       Filename:  Hogwarts_Mod8_task2.c
 *       	Usage:  ./Hogwarts_Mod8_task2.c
 *    Description:  Generate a random Array
 *
 *        Version:  1.0
 *        Created:  03/21/2017 02:34:57 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>

/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);

/* Main Program */
int main(int argc, char *argv[])
{
	int nums[10];
	srand(time(NULL));
	printf("The List is:\n");
	for(int i = 0; i < 10; i++)
	{
		nums[i] = rand() %100;
		printf("%d ", nums[i]);
	}


	return 0;
}


/* Function Definitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	//int minval, maxval;

	return;
}


