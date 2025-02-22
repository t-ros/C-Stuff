/*
 * Program: Empty Square
 *              
 * Description: Asks a user for a number between an interval
 *              Verifies the input
 *              If valid, prints # on the borders of the nxn matrix
 *              
 * Example: Input: 3
 *          Ouput: ###
 *                 # #
 *                 ###
 *              
 * Author: Teros
 */

#include <stdio.h>

int main(){
	
	int num;
	
	do{
		printf("Give me an integer between 1 and 20: ");
		scanf("%d", &num);
	} while (num < 1 || num > 20);
	
	for(int i=1;i<=num;i++){
		for(int j = 1;j<=num;j++){
			if(i==1 || i==num || j==1 || j==num){
				printf("#");
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
