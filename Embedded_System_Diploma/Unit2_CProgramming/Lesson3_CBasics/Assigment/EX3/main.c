/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */

////////////Enter 3 numbers and find the largest number ///////////
#include "stdio.h"
int main(void){
	int num1;
	int num2;
	int num3;
	printf("Enter the 3 numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3){
		printf("The largest number is: %d",num1);

	}else if (num2>num1 && num2>num3){
		printf("The largest number is: %d",num2);
	}
	else {
		printf("The largest number is: %d",num3);
	}
}
