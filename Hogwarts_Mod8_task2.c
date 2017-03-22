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

#define NUMV 10
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);

/* Main Program */
int main(int argc, char *argv[])
{
	int nums[NUMV] = {0,0,0,0,0,0,0,0,0,0};
	int min = 0, max = 0;
	srand(time(NULL));
	printf("The List is:\n");
	for(int i = 0; i < 10; i++)
	{
		nums[i] = (rand() %100) + 1;
		for(int j = 0; j < 10; j++)
		{
			if(nums[j] == nums[i])
			{
				nums[i] = (rand() %100) + 1;
			}
		}
		printf("%d ", nums[i]);
	}
	printf("\n");

	MaxMin(NUMV, nums, &min, &max);

	printf("The minimum value is: %d\n", min);
	printf("The maximum value is: %d\n", max);

	return 0;
}


/* Function Definitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	(*min) = vals[0];
	(*max) = vals[0];
	for(int i = 1; i < numvals; i++)
	{
		if(*min > vals[i])
		{
			*min = vals[i];
		}
		if(*max < vals[i])
		{
			*max = vals[i];
		}
	}

	return;
}


