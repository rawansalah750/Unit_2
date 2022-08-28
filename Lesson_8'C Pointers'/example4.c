/*
 * main.c
 *
 *  Created on: Aug 26, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
int array[15],i,*p,x,j,t=0;
printf("Enter number of elements");
fflush(stdout); fflush(stdin);
scanf("%d",&x);
printf("Enter the numbers\n");
fflush(stdout); fflush(stdin);
p=&array[0];
for(i=0;i<x;i++){
	printf("element%d:",i+1);
	fflush(stdout); fflush(stdin);
	scanf("%d",p);
	p++;
}
t=x;
p=&array[x-1];
printf("The element in reverse\n");
for(j=0;j<x;j++){
	printf("element%d:%d\n",t,*p);
	fflush(stdout); fflush(stdin);
	p--;
t--;
}
	return 0;
}

