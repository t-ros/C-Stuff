/*
 * Program: Next ASCII Character
 *              
 * Description: This program prompts the user to enter a single character.  
 *              It then calculates and displays the next ASCII character.  
 *              The input is read using getchar() instead of scanf().  
 *              
 * Author: Teros
 */
 
#include <stdio.h>

int main(){
	char str;
	char next;
	
	printf("Char input: ");
	
	str = getchar(); /* or scanf("%c", &str); */
	
	next = str + 1;
	
	printf("Next ASCII char: %c", next);
	
	return 0;
}
