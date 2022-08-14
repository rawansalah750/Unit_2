/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
int num,i,arr[100],elem,loc;
printf("Enter tne number of array");
fflush(stdout);  fflush(stdin);
scanf("%d",&num);
printf("Enter your array\n\r");
fflush(stdout);  fflush(stdin);
for(i=0;i<num;i++){
	printf("Enter element%d\n\r",i+1);
	fflush(stdout);  fflush(stdin);
	scanf("%d",&arr[i]);
}
printf("Enter your insert element\n\r");
fflush(stdout);  fflush(stdin);
scanf("%d",&elem);
printf("Enter the location");
fflush(stdout);  fflush(stdin);
scanf("%d",&loc);
loc=loc-1;
for(i=num;i>=loc;i--){
	arr[i]=arr[i-1];
}
arr[loc]=elem;
num=num+1;
printf("new array =\t");
for(i=0;i<num;i++){
	printf("%d",arr[i]);
}


	return 0;
}

