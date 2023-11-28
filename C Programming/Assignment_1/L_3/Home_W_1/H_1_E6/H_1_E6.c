/**
*   @file   H_1_E6.c
*   @version 1.0.0
*   @brief   Write Source Code to Swap Two Numbers
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){
	float NumberOne = 0;
	float NumberTwo = 0;
	float Temp = 0;

	printf("Enter value of NumberOne = ");
	/* clear buffer */
	fflush(stdout);
	/* read input */
	scanf("%f", &NumberOne);

	printf("Enter value of NumberTwo = ");
	/* clear buffer */
	fflush(stdout);
	/* read input */
	scanf("%f", &NumberTwo);
	/* swapping variables */
	Temp = NumberOne;
	NumberOne = NumberTwo;
	NumberTwo = Temp;
	/* print output one */
	printf("After swapping, value of NumberOne = %.1f\n", NumberOne);
	/* print output two */
	printf("After swapping, value of NumberTwo = %.1f\n", NumberTwo);
	return 0;
}

