/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	struct Data{
		char name[100];
		int roll;
		float marks;
	};
	struct Data student;
	printf("Enter student information\n");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
	printf("Enter student name\n");
		fflush(stdout); fflush(stdin);
		scanf("%s",&student.name);
	printf("Enter student roll number\n");
			fflush(stdout); fflush(stdin);
		scanf("%d",&student.roll);
		printf("Enter student mark\n");
				fflush(stdout); fflush(stdin);
			scanf("%f",&student.marks);
printf("Displaying information\n");
fflush(stdout); fflush(stdin);
printf("name:\t%s\n",student.name);
fflush(stdout); fflush(stdin);
printf("roll number:\t%d\n",student.roll);
fflush(stdout); fflush(stdin);
printf("mark:\t%f\n",student.marks);
fflush(stdout); fflush(stdin);
	return 0;
}
