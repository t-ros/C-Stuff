#include <stdio.h>
/*
 * Program: Is Upper
 * Description: Checks if a given character is an Uppercase or Else
 * Author: Teros
 */

int main(){
	char a;
	
	printf("Enter a char: ");
	scanf(" %c", &a);
	
	if (a >= 'A' && a <= 'Z'){
		printf("-> %c is an uppercase letter", a);
	} else printf("That's not an uppercase letter");
	
	return 0;
}
