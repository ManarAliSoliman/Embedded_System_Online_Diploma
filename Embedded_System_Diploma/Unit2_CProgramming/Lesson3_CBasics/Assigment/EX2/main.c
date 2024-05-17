/*
 * main.c
 *
 *  Created on: May 17, 2024
 *      Author: hp
 */

////////////////////Enter an alphabet and check if this vowel or consonant///////////
#include "stdio.h"
int main(void){
	char ch;
	printf("Enter an alphabet :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
	        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
	printf("This character is vowels %c",ch);
	}else{
		printf("This character is consonant %c",ch);
	}
}
