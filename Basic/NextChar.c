#include <stdio.h>
/* Asks for a single char input and presents the next */

int main(){
	char str;
	char next;
	
	printf("Char input: ");
	// scanf("%c", &str);
	str = getchar();
	
	next = str + 1;
	
	printf("Next ASCII char: %c", next);
	
	return 0;
}
