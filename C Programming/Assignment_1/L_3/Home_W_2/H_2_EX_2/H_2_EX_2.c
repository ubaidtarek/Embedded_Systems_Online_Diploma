/**
*   @file   Ex_1.c
*   @version 1.0.1
*   @brief   Write C Program to check vowel or constant
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	unsigned char U_input = 0;
	/* print message */
	printf("Enter A character: ");
	/* clear buffer */
	fflush(stdout);
	/* Read number form user */
	scanf("%c", &U_input);

	switch(U_input)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		/* print message */
		printf(" %c is vowel: ", U_input);
		break;

	default :
		/* print message */
		printf(" %c is constant: ", U_input);
		break;
	}


	return 0;
}

