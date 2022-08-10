/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	char c;
	float x,y;

	printf("Enter the operatot\n\r");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
	scanf("%c",&c);
	printf("Enter two operands\n\r");
	fflush(stdout); fflush(stdin);
	//scanf("%f ",&x);
	scanf("%f %f",&x,&y);
	float result;
	switch(c){
	case '+':

		result=x+y;
		printf(" now %f + %f =%f",x,y,result);


	break;
	case'*':

		result=x*y;
		printf("now %f * %f =%f" ,x,y,result);

	break;

	case'/':

		result=x/y;
		printf("now %f / %f =%f" ,x,y,result);

		break;

	case'-':
		result=x-y;
		printf("now %f - %f =%f" ,x,y,result);

			break;
	}
	return 0; // @suppress("Unused return value")
}

