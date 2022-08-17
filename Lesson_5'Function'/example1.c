/*
 * main.c
 *
 *  Created on: Aug 16, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int check_prim(int num); // @suppress("Unused function declaration")
int main(){
int n1,n2,j,flag;
printf("Enter two numbers intervals\n\t");
fflush(stdout); fflush(stdin);
scanf("%d %d",&n1,&n2);
printf("prime numbers between %d & %d\n\t",n1,n2);
fflush(stdout); fflush(stdin);
for(j=n1+1;j<n2;j++){
	flag=check_prim(j);
	if(flag==0){
		printf("%d\t",j);
	}

}
	return 0;
}
int check_prim(int num){
	int i,temp=0;
	for(i=2;i<=10;i++){
		if(num%i==0){
			temp=1;
			break;
		}
	}
	return temp;
}
