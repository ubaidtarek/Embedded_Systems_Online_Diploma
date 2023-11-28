/**
*   @file   Ex_2.c
*   @version 1.0.1
*   @brief   Write C Program to Print a Integer Entered by a User
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
	/* print output */
	printf("You Entered: %d \n", Number);

	return 0;
}
