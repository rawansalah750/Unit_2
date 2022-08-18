/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
# define pi 3.14
# define area(r)( pi*(r)*(r))
int main(){
	float radius, area;
	printf("Enter thr radius\n");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
scanf("%f",&radius);
area=area(radius);

printf("Area= %f",area);









	return 0;
}

