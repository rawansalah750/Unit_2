/*
 * main.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
int main(){
	int i,j;
	char str[1000];
	printf("Enter the strig\n\t");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
     gets(str);
     j=strlen(str)-1;
     printf("the reverse:\t");
     for(i=j;i>=0;i--){
    	 printf("%c",str[i]);
    	 j--;
     }







	return 0;
}

