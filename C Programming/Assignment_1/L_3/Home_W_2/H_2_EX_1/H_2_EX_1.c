/**
*   @file   Ex_1.c
*   @version 1.0.1
*   @brief   Write C Program to check odd or even number
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	unsigned int Number = 0;
	/* print message */
	printf("Enter An Integer: ");
	/* clear buffer */
	fflush(stdout);
	/* Read number form user */
	scanf("%d", &Number);

	if(Number % 2 == 0)
	{
		/* print output */
	    printf("Number is even: %d \n", Number);
	}
	else
	{
		/* print output */
		printf("Number is odd: %d \n", Number);
	}


	return 0;
}


