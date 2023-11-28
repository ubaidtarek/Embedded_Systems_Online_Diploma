/**
*   @file   H_1_E6.c
*   @version 1.0.0
*   @brief   Write Source Code to Swap Two Numbers without temp variable.
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){
	unsigned int NumberOne = 0;
	unsigned int NumberTwo = 0;

	/* print message */
	printf("Enter NumberOne = ");
	/* clear buffer */
	fflush(stdout);
	/* read input One */
	scanf("%d", &NumberOne);

	/* print message */
	printf("Enter NumberTwo = ");
	/* clear buffer */
	fflush(stdout);
	/* read input Two */
	scanf("%d", &NumberTwo);

	/* swapping without using TEMP. VAR */
	NumberOne = (NumberOne + NumberTwo);
	NumberTwo = (NumberOne - NumberTwo);
	NumberOne = (NumberOne - NumberTwo);
	/* print output */
	printf("After swapping, value of NumberOne = %d\n", NumberOne);
	printf("After swapping, value of NumberTwo = %d\n", NumberTwo);

	return 0;
}


