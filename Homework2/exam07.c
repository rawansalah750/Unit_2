/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	int x,factorial=1;
	printf("Enter a positive number\n\r");
	fflush(stdout); // @suppress("Symbol is not resolved")
scanf("%d",&x);
fflush(stdin);
if(x>0){
	for(int i=1 ; i <= x ;i++ ){
		factorial=factorial*i;
	}
printf("Factorial=%d",factorial);

}
else if(x<0){
	printf("Factorial dosent exist");
}
else{
	printf("Factorial=1");
}

	return 0;
}

