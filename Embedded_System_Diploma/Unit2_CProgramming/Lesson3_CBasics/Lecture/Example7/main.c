/*
 * main.c
 *
 *  Created on: May 13, 2024
 *      Author: Manar Ali
 */
////////////print the following output using nisted loop
//0123456789
//123456789
//23456789
//3456789
//456789
//56789
//6789
//789
//89
//9

#include "stdio.h"
int main(int argc, char **argv){
    int i;//declaration
	int j;
	for (i=0;i<=9;i++)
	{
		printf("%d\n",i);
		for (j=i+1;j<=9;j++){
			printf("%d\n",j);
		}
	}
}
