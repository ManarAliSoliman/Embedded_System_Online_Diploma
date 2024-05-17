/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */

///////////Enter the number and check if this number is positive or negative or eual zero ////////

#include "stdio.h"
int main(void){
	int num;
	printf("Enter the number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
//	if (num<0){
//		printf("the number is negative");
//	}
//	else if (num>0){
//		printf("the number is positive");
//	}
//	else {
//		printf("the number is equal to zero");
//	}
//
//}
	///////////////////////////another solution////////////////

	if(num<=0){
	if(num<0){
		printf("the number is negative");
		}else{
			printf("the number equal to zero");
		}

}else{
	printf("the number is positive");
}



}
