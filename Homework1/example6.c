/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */

# include<stdio.h>
# include<stdlib.h>
int main(){
	float x,y,temp;
	setbuf(stdout,NULL);
	printf("Enter the value of x :");
     fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	printf("Enter the value of y :");
     fflush(stdout);
		scanf("%f",&y);
	fflush(stdin);
		temp=x;
	x=y;
	y=temp;
	printf("After swapping x=%f \n\r",x);
	fflush(stdout);
	printf("After swapping y=%f \n\r",y);
	fflush(stdout);
	return 0;

}
