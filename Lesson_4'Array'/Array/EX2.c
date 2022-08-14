/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
int n,i;
	float arr[100],sum=0,avr;
			  printf("Enter the number of entered data\n\r");
			  fflush(stdout);  fflush(stdin); // @suppress("Symbol is not resolved")
scanf("%d",&n);
			  for(i=0;i<n;i++){
	printf("Entar the number %d\n\r",i+1);
	fflush(stdout);  fflush(stdin);
	scanf("%f",&arr[i]);
	sum+=i;
}
avr=sum/n;
printf("The averrage of numbers = %f ",avr);

fflush(stdout);  fflush(stdin);
	return 0;
}

