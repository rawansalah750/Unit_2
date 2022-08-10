/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	float x,y,z;
	printf("Enter three numbers\n\r");
	fflush(stdout); // @suppress("Symbol is not resolved")
	scanf("%f %f %f",&x,&y,&z);
	fflush(stdin);
	if(x>y && x>z){
		printf("The largest number is:%f",x);
	}
	else if(y>x && y>z){
		printf("The largest number is:%f",y);
	}
	else{
		printf("The largest number is:%f",z);
	}





	return 0;
}

