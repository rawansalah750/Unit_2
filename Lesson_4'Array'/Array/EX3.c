/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	int a[100][100],trans[100][100],r,c,i,k;
	printf("Enter numbers of rows & column\t");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
scanf("%d %d",&r,&c);
for(i=0;i<r;i++){
	for(k=0;k<c;k++){
	printf("a %d %d:\t",i+1,k+1);
	fflush(stdout); fflush(stdin);
	scanf("%d",&a[i][k]);
	fflush(stdin);
}
}
printf("your entered matrix is:\n\r");
fflush(stdout); fflush(stdin);
for(i=0;i<r;i++){
	for(k=0;k<c;k++){
		printf("%d\t",a[i][k]);
		if(k==c-1){
			printf("\n\r");
		}

	}
}
	for(i=0;i<r;i++){
			for(k=0;k<c;k++){
				trans[k][i]=a[i][k];
			}
		}

printf("The Transpose matrix");
for(i=0;i<c;i++){
	for(k=0;k<r;k++){
	printf("%d\t",trans[i][k]);
	fflush(stdout); fflush(stdin);
	if(k==r-1){
		printf("\n\r");
	}
	}
}
	return 0;
}

