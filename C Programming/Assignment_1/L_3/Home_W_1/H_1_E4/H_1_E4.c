/**
*   @file   H_1_E4.c
*   @version 1.0.0
*   @brief   Write C Program to Multiply two Floating Point Numbers
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	float Number_One = 0;
	float Number_Two = 0;
	/* print message */
	printf("Enter Two Numbers: ");
	/* clear buffer */
	fflush(stdout);
	/* read inputs */
	scanf("%f %f", &Number_One, &Number_Two);
	/* print output with 6 digits by default %f 6 precision */
	printf("Product : %.6f", (Number_One * Number_Two));

	return 0;
}
