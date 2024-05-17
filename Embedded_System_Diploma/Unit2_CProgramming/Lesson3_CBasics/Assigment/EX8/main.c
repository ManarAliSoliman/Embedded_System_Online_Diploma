/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */

/////////////make a simple calculator using a switch statement ////////
#include "stdio.h"
int main(void){
	char o;
	float num1 ,num2;
	printf("Enter operator either + OR - OR * OR Divide");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);
	printf("Enter the 2 operands:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(o){
	case '+':
		printf("The addition of 2 number is %f:",num1+num2);
		break;
	case '-':
		printf("The subtraction of 2 number is%f :",num1-num2);
		break;
	case'*':
		printf("The multiplication of 2 number is %f:",num1*num2);
		break;
	case '/':
		printf("The division of 2 number is %f:",num1/num2);
		break;
	default:
		printf("error operator you enter");
		break;
	}

}
