/*
 * main.c
 *
 *  Created on: Aug 16, 2022
 *      Author: Rawan
 */
# include <stdio.h>
# include<stdlib.h>
int Factorial(int num);
int main(){
int number;
printf("Enter positive number\n\t");
fflush(stdout); fflush(stdin);
scanf("%d",&number);
printf("Factorial of number %d = %d",number,Factorial(number));
	return 0;
}
int Factorial(int num){ // @suppress("Unused function declaration")
int i,fact=1 ;
for(i=num;i>=1;i--){
	fact*=i;

}
return fact;
	}

