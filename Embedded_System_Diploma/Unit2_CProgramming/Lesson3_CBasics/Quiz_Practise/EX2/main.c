/*
 * main.c
 *
 *  Created on: May 18, 2024
 *      Author: hp
 */


#include "stdio.h"
int main(){
//	int i=2,j=3 ,k, l;
//	float a,b;
//	k=i/j*j; //2
//	l=j/i*i;  //3
//	a=i/j*j;
//	b=j/i*i;
//	printf("%d %d %f %f",k,l,a,b);
//
//on = ink * act / 2 + 3 / 2 * act + 2 + tig ;  (ink = 3, act =2, tig = 3.2, assume on to be an int)
	int on;
	int ink =3;
	int act =2;
	float tig =3.2;
	on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
	printf("%d",on);
}
