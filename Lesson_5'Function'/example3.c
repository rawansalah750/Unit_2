/*
 * main.c
 *
 *  Created on: Aug 16, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
void reverse(char sentance[],int size);
int main(){
	char string[1000];
	printf("Enter a sentance\n");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
gets(string);
printf("the reverse of the sentance is \n\t");
reverse(string,1000);
	return 0;
}
void reverse(char sentance[],int size){
	int i,j;
	j=strlen(sentance)-1;
	for(i=j;i>=0;i--){
		printf("%c",sentance[j]);
		j--;
	}
}
