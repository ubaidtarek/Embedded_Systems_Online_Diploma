/**
*   @file   H_1_E3.c
*   @version 1.0.1
*   @brief   Write C Program to Add Two Integers
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	unsigned int Number_One = 0;
	unsigned int Number_Two = 0;
	/* print message */
	printf("Enter Two Integers : ");
	/* clear buffer */
	fflush(stdout);
	/* read inputs */
	scanf("%d %d", &Number_One, &Number_Two);
	/* print sum */
	printf("Sum is : %d \n", (Number_One + Number_Two));

	return 0;
}
