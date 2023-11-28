/**
*   @file   Ex_1.c
*   @version 1.0.1
*   @brief   Write C Program to check whether number is positive or negative.
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	float U_input = 0;


	/* print message */
	printf("Enter a number to check : ");
	/* clear buffer */
	fflush(stdout);
	/* Read number form user */
	scanf("%f", &U_input);

	if(U_input > 0)
	{
		/* print message */
		printf("the number is positive : %0.1f  ", U_input);
	}
	else if(U_input == 0)
	{
		/* print message */
		printf("You entered !! : %0.1f  ", U_input);
	}
	else
	{
		/* print message */
		printf("the number is negative : %0.1f  ", U_input);
	}

	return 0;
}
