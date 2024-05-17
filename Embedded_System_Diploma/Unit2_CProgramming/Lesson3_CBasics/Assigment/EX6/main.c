/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */
/////////////program to calculate sum of natural number//////////
#include "stdio.h"
int main(void){
	int num;
	int sum=0;
	printf("Enter an Integer");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for (int i=0;i<=num;i++){
		sum=sum+i;
	}
	printf("Sum=%d",sum);
	return 0;
}


