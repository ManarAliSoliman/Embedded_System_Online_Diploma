/*
 * main.c
 *
 *  Created on: May 12, 2024
 *      Author: hp
 */


///////////////////claculate the area and circumtance of circle using switch case /////
#include "stdio.h"
int main(int argc, char **argv){
	char choice;
	float area ;
	float circum ;
	float radius;
	printf("Enter the number of radius you want to calculate :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	printf("choose a for calculate the area or b to calculate the circum :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	switch (choice){
	case 'a':
	case 'A':
	{
		area =  3.14159 * radius * radius;
		printf("area is =%f",area);
	}
	break;

	case 'b':
	case 'B':
	{
		circum= 2*3.14159 *radius ;
		printf("circum is =%f",circum);

	}
	break;
	default:  //using when the statement doesn't match with any cases
		printf("just'a' or'b' please !");
		break;

	}
}
