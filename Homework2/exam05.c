/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){

	char x;
	printf("Enter a character\n\r");
	fflush(stdout); // @suppress("Symbol is not resolved")
	scanf("%c",&x );
	fflush(stdin);
	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
		printf("%c is an Alphapet",x);
	}
	else{
		printf("%c is not Alphapet",x);
	}






	return 0;
}

