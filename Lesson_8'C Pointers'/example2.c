/*
 * main.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	char alpha[27],*p;
	char i;
	printf("the alphapets are \n");
	p=alpha;
	for(i=0;i<26;i++){
		*p='A'+i;
		p++;
	}
	for(i=0;i<26;i++){
		p=&alpha[i];
		printf("%c",*p);
printf("  ");
	}






	return 0;
}
