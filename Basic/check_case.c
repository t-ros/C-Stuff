#include <stdio.h>
/*
 * Program: Letter Case Checker
 * Description: This program prompts the user to enter a single character.  
 *              It checks whether the entered character is a lowercase or uppercase letter.  
 *              If it is not a letter, it informs the user accordingly.  
 * Author: Teros
 */
int main(){
	
	char comp;
	
	printf("Enter a letter: ");
	scanf(" %c", &comp);
	
	if( comp >= 'a' && comp <= 'z'){
		printf("'%c' is a lowercase letter", comp);
	} else if (comp >= 'A' && comp <= 'Z') {
		printf("'%c' is an Uppercase letter", comp);
	} else {
		printf("That's not a letter!");
	}
	
	return 0;
}

