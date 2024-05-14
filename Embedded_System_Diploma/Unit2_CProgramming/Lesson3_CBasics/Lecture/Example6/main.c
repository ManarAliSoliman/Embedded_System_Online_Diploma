/*
 * main.c
 *
 *  Created on: May 13, 2024
 *      Author: Manar Ali
 */
//////////////////to run each one delete the comment /////
/////////////////Examples about For loop & While & Do While //////
////////////Calculate the average of student degree using for loop//////////

/*#include"stdio.h"
int main(int argc, char **argv){
	int i;  //         declaration
	int num_of_student;
	int data_entry;  //student degree (we can define it as float as the user can enter number float)
	int sum;         // also we can define it as float
	float total_Average;
	printf("Enter the number of student :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_of_student); // If you don't put the "&" there will be ""run time error"" because you will not access the memory location that are belong to you
	for (i =1,sum=0; i<=num_of_student;i++){
		printf("Enter student (%d) degree: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&data_entry);
		sum=data_entry+sum;
	}
	total_Average=sum/num_of_student;
	printf("Total Average is: %f\r\n",total_Average);
}
 */

////////////Calculate the average of student degree using for loop//////////
/*
#include"stdio.h"
int main(int argc, char **argv){
	int nStudents =0;
	float degree ,sum=0;
	printf("Enter negative value to exit:\r\n");
	while(1) //while provide a mechanism for repeating c statement while a condition is true

	{
		printf("Enter student (%d) degree:",nStudents +1);
		fflush(stdin);fflush(stdout);
		scanf("%f" ,&degree);
		if(degree<0)break; //break statement is used to exit from any loop type
		sum +=degree;
		nStudents++;

	}
	printf("Average students degree is : %f\r\n",sum/nStudents);

}
*/
//////////////////////////calculate the polynomial using do while //////////

#include"stdio.h"
#include "conio.h"
int main(int argc, char **argv){
	float x,y;
	do
	{
		printf("\r\n Enter x value");
		fflush(stdin);fflush(stdout);
		scanf("%f" ,&x);
		y= 5*x*x+ 3*x+2;
		printf("\r\n%f =%f",x,y);
		fflush(stdin);fflush(stdout);
		printf("\r\n do you want to evaluate again (y/n)");
	}
	while(getche()=='y');



}
