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
	char asci;
	printf("Enter a character\n\r");
	  fflush(stdin);    fflush(stdout);

	scanf("%c",&x);
	asci = x;
	printf("the ASCI code of %c=%d",x,asci);



	return 0;
}
