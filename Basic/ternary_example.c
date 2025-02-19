#include <stdio.h>
/*  
 * Program: Ternary Operator vs. If-Else  
 * Description: This program compares the use of the ternary operator and the if-else statement  
 *              to determine the minimum of two floating-point numbers.  
 *              It first calculates the minimum using the ternary operator  
 *              and then does the same using an if-else statement,  
 *              demonstrating that both methods yield the same result.  
 * Author: Teros  
 */

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

	printf("\nIfElse => min(%.2f, %.2f) is %.2f", num1, num2, min);

	printf("\nExaclty the same but with different methods :)");
	
	return 0;
}
