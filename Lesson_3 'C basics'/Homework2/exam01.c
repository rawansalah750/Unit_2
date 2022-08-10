/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */

# include<stdio.h>
# include<stdlib.h>
int main(){

	int num;
	printf("Enter the number you want to check\n\r");
	fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);
	if(num%2==0){
		printf("number %d you entered is EVEN",num);
	}
	else{

		printf("number %d you entered is ODD",num);
	}




	return 0;
}
