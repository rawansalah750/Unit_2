/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	char ch,c[1000];
	int i,count=0;
	printf("Enter a string\n\t");
	fflush(stdout); fflush(stdin);
	gets(c);
	printf("Enter a character to search\n\t");
	fflush(stdout); fflush(stdin);
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';i++){
		if(c[i]==ch){
			count++;
		}
	}

	printf("This characterrepeated %d times",count);


return 0;

}









