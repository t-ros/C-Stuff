/*
 * Program: Small Calculator w/ DBL_MAX & DBL_MIN
 *              
 * Description: Presents a Small Menu to the User.
 *              Reads user Input for operands and two numbers.
 *              If invalid operands, presents an Error Message.
 *              If valid, presents the Operation result
 *              When dealing with divisor 0, performs accordingly
 *              DBL_MAX & DBL_MIN to show a large number with a lot of zeros instead of inf
 *              
 * Author: Teros
 */

#include <stdio.h>
#include <float.h>

int main(){
	double a, b;
	char c;
	
	do{
	printf("Small Calculator\n");
	printf("+ Sum\n");
	printf("- Subtraction\n");
	printf("* Multiplication\n");
	printf("/ Division\n");
	printf("Which operation would you like to perfom: ");
	scanf(" %c", &c);
	
	if(c != '+' && c != '-' && c != '*' && c != '/' ){
		printf("\nERROR: Invalid Operand. Try again!\n");
	}
	
	} while(c != '+' && c != '-' && c != '*' && c != '/' );
	
	printf("Give me 2 values for the operation: ");
	scanf("%lf %lf", &a, &b);
	
	double div;
	switch(c){
		case '+':
		printf("%.2f + %.2f = %.2f\n", a, b, a+b);
		break;
		case '-':
		printf("%.2f - %.2f = %.2f\n", a, b, a-b);
		break;
		case '*':
		printf("%.2f * %.2f = %.2f\n", a, b, a*b);
		break;
		case '/':
		if(b!=0){
			div = a/b;
		} else if (b==0.0 && a>0.0) {
			div = DBL_MAX;
		} else if (b==0.0 && a<0.0) {
			div = DBL_MIN;
		} else { // If b == 0 && a == 0
			div = 0.0;
		}
		printf("%.2f / %.2f = %.2f\n", a, b, div);
		break;
	}
	
	return 0;
}
