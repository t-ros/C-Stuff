#include <stdio.h>
/*
 * Program: Check Char Type
 * Description: This program prompts the user to enter a single character.  
 *              It checks what type of character it is 
 *              Only recognizes letters and digits  
 * Author: Teros
 */
int main(){
	
	char a;
	
	printf("Enter a letter: ");
	scanf(" %c", &a);
	
	if( a >= 'a' && a <= 'z'){
		printf("'%c' is a lowercase letter", a);
	} else if (a >= 'A' && a <= 'Z') {
		printf("'%c' is an Uppercase letter", a);
	} else if (a >= '0' && a <= '9'){
		printf("%c is a digit", a);
	} else printf("That's not a digit!");
	
	return 0;
}


