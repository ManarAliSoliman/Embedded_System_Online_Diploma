/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */
////////////find factorial of number/////////////
#include "stdio.h"
int main(void){
	int num;
	float factorial =1;
	printf("Enter the number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num<=0){
		if(num<0){
			printf("The negative number have no factorial ");
		}else{
			printf("Factorial 0 is 1");
		}
	}
	if(num>0){
		for (int i =1;i<=num;i++){
			factorial*=i;
		}printf("the factorial of %d is %f",num,factorial);
	}
}
