/*
 * Program: Is Upper Case?
 *              
 * Description: Checks if a given character is an Uppercase or Else
 *              
 * Author: Teros
 */
 
#include <stdio.h>

int main(){
	char a;
	
	printf("Enter a char: ");
	scanf(" %c", &a);
	
	if (a >= 'A' && a <= 'Z'){
		printf("-> %c is an uppercase letter", a);
	} else printf("That's not an uppercase letter");
	
	return 0;
}
