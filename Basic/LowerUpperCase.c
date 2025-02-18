#include <stdio.h>
/* Check if a letter is lowercase or uppercase */
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

