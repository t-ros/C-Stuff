/* 
 * Program: Alphabetical Order of 3 Letters
 * Description: This program prompts the user to enter three lowercase letters.  
 *              It validates the input to ensure only lowercase letters are accepted.  
 *              Then, it displays the entered letters and prints them in alphabetical order.  
 * Author: Teros
 */

#include <stdio.h>

int main(){
	char a, b, c;
	
	do {
		printf("Firt letter: ");
		scanf(" %c", &a);		
		while (getchar() != '\n');
		if (a < 'a' || a > 'z'){
			printf("Only lowercase letters accepted\n");
		}
	} while (a < 'a' || a > 'z'); 
	
	do {
		printf("Second letter: ");
		scanf(" %c", &b);
		while (getchar() != '\n');
		if (b < 'a' || b > 'z'){
			printf("Only lowercase letters accepted\n");
		}
	} while (b < 'a' || b > 'z');
	
	do {
		printf("Third letter: ");
		scanf(" %c", &c);
		while (getchar() != '\n');
		if (c < 'a' || c > 'z'){
			printf("Only lowercase letters accepted\n");
		}
	} while (c < 'a' || c > 'z');
	
	printf("Your inputs were: ['%c','%c','%c']\n", a, b, c);
	printf("Alphabetic Order: ");
	
	if (a < b){
		if (b < c){
			printf("'%c', '%c', '%c'", a, b, c);
		} else if (c < b){
			if (a < c){
			printf("'%c', '%c', '%c'", a, c, b);
			} else printf("'%c', '%c', '%c'", c, a, b);						
		} 
	} else if (b < a) {
		if (b < c){
			if (a < c){
				printf("'%c', '%c', '%c'", b, a, c);
				} else printf("'%c', '%c', '%c'", b, c, a);	
		} else if (c < b){			
			printf("'%c', '%c', '%c'", c, b, a);								
		} 
	}
		
	return 0;
}
