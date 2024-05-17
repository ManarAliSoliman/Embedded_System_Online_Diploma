/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */

///////////Enter a character and see if this character is alphabet or not //////////

#include "stdio.h"
int main(void){
	char c;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
     scanf("%c",&c);
	if(c>='a' && c<='z'){
		printf("%c the character is alphabet",c);

	}else{
		printf("%c is not alphabet",c);
	}




}

