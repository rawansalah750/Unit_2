/*
 * main.c
 *
 *  Created on: Aug 11, 2022
 *      Author: Rawan
 */
# include <stdio.h>
# include <stdlib.h>
int main (){

	printf("Enter the first matrix\n\r");
	fflush(stdout); fflush(stdin); // @suppress("Symbol is not resolved")
	float A[2][2] , B[2][2] , C[2][2];
	int i,j;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("Enter A%d%d :\t",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&A[i][j]);
		}
	}
	printf("Enter the second matrix\n\r");
	fflush(stdout); fflush(stdin);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter B %d %d :\t",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&B[i][j]);
		}
	}
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("Sum of matrix:\n\r");
	fflush(stdout); fflush(stdin);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%f\t",C[i][j]);
			fflush(stdout); fflush(stdin);
			if (j==1)
		printf("\n\r");
		}

	}




	return 0;
}

