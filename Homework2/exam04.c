/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	float num;
	printf("Enter a number\n\r");
	fflush(stdout); // @suppress("Symbol is not resolved")
	scanf("%f",&num);
	fflush(stdin);// @suppress("Symbol is not resolved")
	if(num>0){
		printf("Number %f is Positive",num);
	}
	else if(num<0){
		printf("Number %f is Negative", num);
	}
	else{
		printf("You entered Zero");
	}



	return 0;
}















