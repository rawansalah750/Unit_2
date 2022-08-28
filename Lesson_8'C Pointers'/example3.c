/*
 * main.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
int main(){
	char string [1000];
	char *p;
	int i,j;
	printf("Enter the string\n");
	fflush(stdout); fflush(stdin);
	gets(string);
	printf("\n");
	j=strlen(string)-1;
	 p=&string[j];
	for(i=0;i<=j;i++){
   printf("%c",*p);
   p--;
	}
	return 0;
}

