/*
 * main.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Rawan
 */
# include <stdio.h>
# include<stdlib.h>
struct employee{
	char name[100];
	int id;
};
int main(){
	int i;
	struct employee emp1={"rawan",1002},emp2={"yomna",1003},emp3={"amira",1004},emp4={"aya",1005},emp5={"salma",1006};
	struct employee *arr[5]={&emp1,&emp2,&emp3,&emp4,&emp5};
	struct employee *(*p)[5];
	p=arr;

	for(i=0;i<5;i++){
		printf("employee%d name:%s\n",i+1,(**(*p+i)).name);
		printf("employee%d ID: %d\n\n",i+1,(*(*p+i))->id);
	}


	return 0;
}

