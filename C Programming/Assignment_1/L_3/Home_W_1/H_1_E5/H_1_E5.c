/**
*   @file   H_1_E5.c
*   @version 1.0.0
*   @brief   Write C Program to Find ASCII Value of a Character
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	unsigned char Input = 0;
	/* print message */
	printf("Enter a character : ");
	/* clear buffer */
	fflush(stdout);
	/* read input */
	scanf("%c", &Input);
	/* print output */
	printf("ASCII value of %c = %d", Input, Input);

	return 0;
}

