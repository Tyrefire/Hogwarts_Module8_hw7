/*
 * =====================================================================================
 *
 *       Filename:  Hogwarts_Mod8_task1.c
 *       	Usage:  ./Hogwarts_Mod8_task1.c
 *    Description:  Copying Arrays and pointers
 *
 *        Version:  1.0
 *        Created:  03/21/2017 02:34:28 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>

#define LEN 5

/* Function Prototypes */
void CopyArr(double ar1[], const double ar2[], int n);
void CopyPtr(double* ar1[], const double* ar2[], int n);
void CopyPtrs(double* ar2[], const double* start, const double* end);
void ShowArr(const double ar[], int n);

/* Main Program */
int main(int argc, char *argv[])
{
	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	//double target2[LEN];
	//double target3[LEN];

	CopyArr(source, target1, LEN);
	ShowArr(target1, LEN);
	return 0;
}


/* Function Definitions */
void CopyArr(double ar1[], const double ar2[], int n)
{
	for(int i = 0; i < n; i++)
	{
		ar1[i] = ar2[i];
	}

	return;
}

void CopyPtr(double* ar1[], const double* ar2[], int n)
{


	return;
}

void CopyPtrs(double* ar2[], const double* start, const double* end)
{


	return;
}

void ShowArr(const double ar[], int n)
{


	return;
}


