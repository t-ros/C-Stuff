#include <stdio.h>
/*  
 * Program: Return n Times
 * Description: This programs keeps prompting for an odd number > 1
 *              Returns the same number for the same amount of times
 * Example: Input: 5
 *          Output: 5 5 5 5 5 
 * Author: Teros  
 */
 
int main(){
	int num;
	
	do{
	printf("Give me an odd number grater than 1: ");
	scanf("%d", &num);
	} while (num <= 1 || num%2 == 0);
	
	for(int i=0; i<num; i++){
		printf("%d ", num);
	}
	
	return 0;
}
