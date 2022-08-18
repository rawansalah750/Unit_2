/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	struct Distance {
		int feet;
		float inch;
	}d1,d2,sum;
	printf("Enter the information of distsnce1:\n");
	fflush(stdout); fflush(stdin);
	printf("Enter Feet:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&d1.feet);
	printf("Enter inch:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&d1.inch);

	printf("Enter the information of distsnce2:\n");
		fflush(stdout); fflush(stdin);
		printf("Enter Feet:");
		fflush(stdout); fflush(stdin);
		scanf("%d",&d2.feet);
		printf("Enter inch:");
		fflush(stdout); fflush(stdin);
		scanf("%f",&d2.inch);
		sum.feet=d1.feet+d2.feet;
		sum.inch=d1.inch+d2.inch;
		int i;
		for(i=12;i<=sum.inch;i++){
		if(sum.inch>=12){
			sum.inch=sum.inch-12;
			sum.feet++;
		}
		}
	printf("sum of distance = %dfeet and %finch",sum.feet,sum.inch);








	return 0;
}

