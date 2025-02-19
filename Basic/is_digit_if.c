#include <stdio.h>
/*
 * Program: Is Digit w/ If Else
 * Description: Check if a given character is a digit (0-9)
 *              Has to be done with an If Else
 * Author: Teros
 */

int main(){
	char a;
	
	printf("Enter a char: ");
	scanf(" %c", &a);
	
	if (a >= '0' && a <= '9'){
		printf("-> %c is a digit", a);
	} else printf("That's not a digit!");
	
	return 0;
}
