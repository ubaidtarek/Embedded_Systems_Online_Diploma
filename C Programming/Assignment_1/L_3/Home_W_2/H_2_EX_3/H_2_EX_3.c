/**
*   @file   Ex_1.c
*   @version 1.0.1
*   @brief   Write C Program to find largest number among 3 numbers.
*   @details This file contains the C Programming Application.
	@author  Abdullah Tarek Ali
*/

#include<stdio.h>


int main(){

	unsigned int Number_One = 0;
	unsigned int Number_Two = 0;
	unsigned int Number_Three = 0;

	/* print message */
	printf("Enter Three Numbers : ");
	/* clear buffer */
	fflush(stdout);
	/* Read number form user */
	scanf("%d %d %d", &Number_One, &Number_Two, &Number_Three);

	/* solving using nested if */
	if(Number_One > Number_Two)
	{
		if(Number_One > Number_Three)
		{
			/* print message */
			printf("The Largest Number is %d :", Number_One);
		}
		else
		{
			/* print message */
			printf("The Largest Number is %d :", Number_Three);
		}

	}
	else
	{
		if(Number_Two > Number_Three)
		{
			/* print message */
			printf("The Largest Number is %d :", Number_Two);
		}
		else
		{
			/* print message */
			printf("The Largest Number is %d :", Number_Three);
		}
	}



	return 0;
}


