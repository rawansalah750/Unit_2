/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){

struct data{
	char name[50];
	int roll;
	float mark;
};
struct data students[10];
int i;
for(i=0;i<10;i++){
	students[i].roll=i+1;
	printf("For roll number %d\n",students[i].roll);
	fflush(stdout); fflush(stdin);
	printf("Enter name:\t");
	fflush(stdout); fflush(stdin);
	scanf("%s",&students[i].name);
	printf("Enter mark:\t");
	fflush(stdout); fflush(stdin);
	scanf("%f",&students[i].mark);
}
printf("Displaying information for students\n");
for(i=0;i<10;i++){
	printf("For roll number %d\n",students[i].roll);
	fflush(stdout); fflush(stdin);
	printf("name:%s\n",students[i].name);
	fflush(stdout); fflush(stdin);
	printf("mark%f\n",students[i].mark);
}




	return 0;
}

