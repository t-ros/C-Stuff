#include <stdio.h>
/* Ternary Operator vs. if else */

int main(){
	float num1 = 3.67;
	float num2 = 5;
	float min;

// Ternary Operator
min = (num1 < num2) ? num1 : num2; // condition ? if_true : if_false

	printf("Ternary Operator => min(%.2f, %.2f) is %.2f", num1, num2, min);
	
	if (num1 < num2){
		min = num1;		
	} else {
		min = num2;
	}
	printf("\n");
	printf("IfElse => min(%.2f, %.2f) is %.2f", num1, num2, min);
	printf("\n");
	printf("Exaclty the same but with different methods :)");
	
	return 0;
}
