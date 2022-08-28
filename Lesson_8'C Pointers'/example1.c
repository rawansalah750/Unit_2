/*
 * main.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){

	int m=29,*ab;
	printf("value of m =%d\n",m);
	printf("address of m =%p\n",&m);
printf("\n");
printf("Now ab is assigned with the address of m\n");
ab=&m;
printf("address of pointer ab is %p \n",ab);
printf("contant of pointer ab is %d\n",*ab);
m=34;
printf("\n");
printf("The value of m assigned to 34 now\n");
printf("address of pointer ab now is %p\n",ab);
printf("contant of pointer ab now is %d\n",*ab);
*ab=7;
printf("\n");
printf("the pointer variable ab is assigned with value 7\n");
printf("The value of m = %d\n",m);
printf("The address of m = %p\n",&m);
	return 0;
}


