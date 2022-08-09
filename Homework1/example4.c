/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){

	float x,y,product;
	printf("Enter two numbers");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f",&x,&y);
	product=x*y;
	printf("product : %f",product);




	return 0;
}

