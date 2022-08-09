/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */

# include<stdio.h>
# include<stdlib.h>
int main(){
	int x,y,sum;
	printf("inter two integers:\n\r");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("sum equal %d",sum);

	return 0;
}
