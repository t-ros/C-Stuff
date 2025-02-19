#include <stdio.h>
/*  
 * Program: Character and Number Input with Buffer Clear  
 * Description: This program prompts the user to enter an integer and a character.  
 *              It ensures proper input handling by preventing buffer issues,  
 *              avoiding unintended newline or space characters from affecting input.  
 *              Finally, it displays the entered values.  
 * Author: Teros  
 */

int main(){
	char str;
	int num;

	printf("Number Input: ");
	scanf("%d", &num); 
	printf("Char input: ");
	scanf(" %c", &str); /* to avoid "\n" or spaces on buffer */

	printf("Your number was %d and your char was '%c'!", num, str);
	
	return 0;
}
