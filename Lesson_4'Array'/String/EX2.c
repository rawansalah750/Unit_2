/*
 * main.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	int count,i;
	char c[1000];
	printf("Enter a string\n\t");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
	gets(c);
	for(i=0;c[i]!='\0';i++){
		count++;
	}
printf("the length of string = %d",count);








	return 0;
}

