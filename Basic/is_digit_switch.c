/*
 * Program: Is Digit w/ Switch
 * Description: Check if a given character is a digit (0-9)
 *              Has to be done with a Switch Case
 * Author: Teros
 */
 
 #include <stdio.h>

int main(){
	char a;
	
	printf("Enter a char: ");
	scanf(" %c", &a);
	
	switch (a){
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			printf("-> %c is a digit", a);
			break;
		default: 
			printf("That's not a digit!");
			break;
	}
	return 0;
}
