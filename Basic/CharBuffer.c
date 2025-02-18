#include <stdio.h>
/* Asks and prints a char and num & buffer clear */

int main(){
	char str;
	int num;

	printf("Number Input: ");
	scanf("%d", &num); 
	printf("Char input: ");
	scanf(" %c", &str); // to avoid "\n" or spaces on buffer

	printf("Your number was %d and your char was '%c'!", num, str);
	
	return 0;
}
