/*
 * Program: Multiple Of
 *              
 * Description: Asks the user for an integer input between 20 and 50.
 *              Validates the input, showing an error message if invalid.
 *              If valid, checks for multiples between 20 and 200.
 *              
 * Author: Teros
 */

#include <stdio.h>

int main(){
	int num;
	
	do{
	printf("Give me an integer between 20 and 50: ");
	scanf("%d", &num);
	if(num<20 || num>50){
		printf("\nERROR: Invalid Input. Try again!\n");
	}
	}while(num<20 || num>50);
	
	printf("\nMultiple numbers of %d between 20 and 200:\n", num);
	
	for(int i=20;i<=200;i++){
		int res = i%num;
		
		if(res==0){
		printf("%d ", i);
		}		
	}
	printf("\n");
	
	return 0;
}
