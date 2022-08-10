/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include <stdio.h>
 int main(){
	 int n,sum=0;
	 printf("Enter an integer");
	 fflush(stdout); // @suppress("Symbol is not resolved")
	 scanf("%d",& n);
	 fflush(stdin);
	 for(int i=0;i<=n;i++){

		 sum += i;
	 }
	 printf("sum of numbers=%d",sum);



	 return 0;
 }

