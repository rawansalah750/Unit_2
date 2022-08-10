/*
 * main.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Rawan
 */
# include<stdio.h>
# include<stdlib.h>
int main(){
	char letter;
	printf("Enter an alphabet\n\r");
	fflush(stdout); // @suppress("Symbol is not resolved")
 scanf("%c",&letter);
 fflush(stdin); // @suppress("Symbol is not resolved")
if(letter=='a'||letter=='i'||letter=='e'||letter=='u'||letter=='o' )
{
	printf("Letter %c is Vowel",letter);

}
else {
	printf("Letter %c is consonant",letter);
}



	return 0;
}

