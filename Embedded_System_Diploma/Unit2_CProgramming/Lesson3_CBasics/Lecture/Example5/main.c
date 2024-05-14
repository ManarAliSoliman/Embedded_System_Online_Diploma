/*
 * main.c
 *
 *  Created on: May 13, 2024
 *      Author: hp
 */
/////////////calculate the submission of value between (1 and 99)
#include "stdio.h"
int main (int argc , char **argv){
	int i =1; //declaration and initialization but if we write int i ; this is only declaration and we will initialize it in for statement
	int sum=0;
	for (i;i<=99;i++)
	{
		sum=sum+i;

	}
	printf("The sum of values between (1 and 99) is %d :",sum);
}



