/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	struct{
		float r;
		float i;
	}num1,num2,sum;
	printf("Enter the first complex number\n");
fflush(stdout); fflush(stdin);
	printf("Enter the Real & imaginary parts in order");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&num1.r,&num1.i);

	printf("Enter the second complex number\n");
	fflush(stdout); fflush(stdin);
		printf("Enter the Real & imaginary parts in order");
		fflush(stdout); fflush(stdin);
		scanf("%f %f",&num2.r,&num2.i);

	sum.r=num1.r+num2.r;
	sum.i=num1.i+num2.i;
	printf("The sum of two complex numbers =%f+%fi",sum.r,sum.i);




	return 0;
}

