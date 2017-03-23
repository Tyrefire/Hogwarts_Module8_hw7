/*
 * =====================================================================================
 *
 *       Filename:  Hogwarts_Mod8_task1.c
 *       	Usage:  ./Hogwarts_Mod8_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2017 01:57:44 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>
#define LEN 5

/*  Function Prototypes */
void CopyArr(double ar1[], const double ar2[], int n);
void CopyPtr(double* ar1, const double* ar2, int n);
void CopyPtrs(double* ar2, const double* start, const double* end);
void ShowArr(const double ar[], int n);

/*  Main Program */
int main(int argc, char *argv[])
{
	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];

	printf("Source:        ");
	ShowArr(source, LEN);
	printf("Index:         ");
	CopyArr(target1, source, LEN);
	printf("Pointer:       ");
	CopyPtr(target2, source, LEN);
	printf("Pointer Range: ");
	CopyPtrs(target3, &source[0], &source[LEN]);

	return 0;
}

/*  Function Definitions */
void CopyArr(double ar1[], const double ar2[], int n)
{
	for(int i = 0; i < n; i++)
	{
		ar1[i] = ar2[i];
	}

	ShowArr(ar1, n);

	return;
}

void CopyPtr(double* ar1, const double* ar2, int n)
{
	for(int i = 0; i < n; i++)
	{
		*(ar1 + i) = *(ar2 + i);// did not like ar1++ or ar2++ for some reason
	
	}

	ShowArr(ar1, n);

	return;
}

void CopyPtrs(double* ar2, const double* start, const double* end)
{
	int i = 0;
	
	while(start != end)
	{
		*(ar2 + i) = *start;
		i++;
		start++;
	}

	ShowArr(ar2, LEN);

	return;
}

void ShowArr(const double ar[], int n)
{
	for(int i = 0; i < LEN; i++)
	{
		printf("%.1f ", ar[i]);
	}
	printf("\n");

	return;
}


