/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){

int num,i,arr[100],elem;
printf("enter the num of element\r\t");
fflush(stdout); fflush(stdin);
scanf("%d",&num);
for(i=0;i<num;i++){
	printf("enter the element%d",i+1);
	fflush(stdout); fflush(stdin);
	scanf("%d",&arr[i]);
}
printf("enter the element to be searched\r\t");
fflush(stdout); fflush(stdin);
scanf("%d",&elem);
for(i=0;i<num;i++){
	if(arr[i]==elem){
		printf("number found at location\r\t%d",i+1);
		fflush(stdout); fflush(stdin);
	}
}

	return 0;
}

