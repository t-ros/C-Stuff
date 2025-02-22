/*
 * Program: Letter to dec
 *              
 * Description: The programs asks the user for a lowercase letter
 *              It verifies the user input and displays an error if incorrect
 *              If valid, retrieves its decimal value and Uppercase letter
 *              
 * Author: Teros
 */

#include <stdio.h>

int main(){
	
	char lc; /* lower case */
	
	do{
		printf("Enter any lowercase letter: ");
		scanf(" %c", &lc);
		
		if (lc < 97 || lc > 122){
			printf("Error: Input is not a lowercase letter. Try again!\n");
		}
	} while(lc < 97 || lc > 122);
	
	printf("You entered: '%c' equivalent to %d on the ASCII Table.", lc, lc);
	printf(" The respective uppercase is '%c'.", lc - 32);
	
	return 0;
}
