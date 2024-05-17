/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */
////////////////////check if the number is even or odd///////////////////////
#include "stdio.h"
int main(void){
	int num;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("the number is even %d",num);
	}
	else{
		printf("the number is odd %d",num);
	}
}
