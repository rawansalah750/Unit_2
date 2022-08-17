/*
 * main.c
 *
 *  Created on: Aug 17, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int power_function(int num,int pow); // @suppress("Unused function declaration")
int main(){
int number,power;
printf("Enter a number\n");
fflush(stdout);  fflush(stdin);
scanf("%d",&number);
printf("Enter the power of the number\n");
fflush(stdout);  fflush(stdin);
scanf("%d",&power);
printf("%d^%d=%d",number,power,power_function(number,power));
fflush(stdout);  fflush(stdin);
	return 0;
}
int power_function(int num,int pow){
	if(pow>0){

		return (num* power_function(num,pow-1));
	}
	else{
		return 1;
	}
}

