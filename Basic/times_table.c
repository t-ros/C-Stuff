/*
 * Program: Multiplication Table
 *              
 * Description: Asks the user for a number input
 *              Checks the input
 *              If valid, returns the multiplication table of that number num*[1,10]
 *              
 * Author: Teros
 */

#include <stdio.h>

int main(){
	int num;
	
	do{
	printf("Give me a number between 2 and 9: ");
	scanf("%d", &num);
	} while(num<2||num>9);
	
	for(int i=1;i<=10;i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
	
	return 0;
}
