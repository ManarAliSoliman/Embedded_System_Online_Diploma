/*
 * main.c
 *
 *  Created on: May 10, 2024
 *      Author: hp
 */

#include "stdio.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WITH_ENGINE_TEMP_CONTROLLER 1

int s =0;
int enginetemperature =70, roomtemperature=40;
char AC[4]="OFF";
char stateofcontroller[4]="OFF";
char stateofengine[4]="OFF";
int a;

//Function Prototyping
void second_choice(char input2);
void fourth_choice(char input4);

void TheStateOfCurrent(int a)
{
	printf("**Current Vehicle State:\n");
	printf("Engine State : %s\n",stateofengine);
	printf("AC : %s\n",AC);
	printf("Vehicle speed: %d km/hr \n",s);
	printf("Current Room Temperature: %d\n",roomtemperature);
#if(WITH_ENGINE_TEMP_CONTROLLER)
	printf("Current Engine Temperature Controller State: %s\n",stateofcontroller);
	printf("Engine Temperature: %d\n",enginetemperature);
#endif
}
void ThefirstList(char input1)
{
	char x;

	if (input1=='a'){
		printf("Turn on the vehicle engine\n");

		printf("a. Turn off the engine\n");
		printf("b. Set the traffic light color\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");
	}
	else if(input1=='b'){
		printf("Turn off the vehicle engine\n");

		printf("a. Turn on the vehicle engine\n");
		printf("b. Turn off the vehicle engine\n");
		printf("c. Quit the system\n");
		scanf(" %c",&x);
		second_choice(x);
	}
	else if(input1=='c'){
		printf("Quit the system\n");
		exit(0);


	}

}
//turn off the vehicle engine
void second_choice(char input2)
{ char z;
	if (input2=='a'){
		printf(" Turn on the vehicle engine\n");
	}
	else if(input2=='b'){
		printf("Turn off the vehicle engine\n");


		printf("a. Turn on the vehicle engine\n");
		printf("b. Turn off the vehicle engine\n");
		printf("c. Quit the system\n");
		scanf(" %c",&z);
		ThefirstList(z);
	}
	else if(input2=='c'){
		printf("Quit the system\n");
		exit(0);

	}

}
void third_choice(char input3)
{
	char x;
	if (input3=='a'){
		printf("Turn off the engine\n");
		printf("a. Turn on the vehicle engine\n");
		printf("b.Turn off the vehicle engine\n");
		printf("c.Quit the system\n");
	}
	scanf(" %c", &x);
	ThefirstList(x);

}

void fourth_choice(char input4)
{

	if(input4=='a'){
		printf("Turn off the engine\n");
	}
	else if(input4=='b'){
		printf("enter the required color\n");

	}
	else if(input4=='c'){
			printf("input the room temperature\n");
		}
	#if(WITH_ENGINE_TEMP_CONTROLLER)
		else if(input4=='d'){
			printf("input the engine temperature\n");
		}
	#endif
	}

	void traffic_light(char input5)
	{
		if(input5 =='g'){
			s =100;

			printf("Vehicle speed: %d km/hr \n",s);
			TheStateOfCurrent(a);

			printf("a. Turn off the engine\n");
			printf("b. Set the traffic light color\n");
			printf("c. Set the room temperature (Temperature Sensor)\n");
			printf("d. Set the engine temperature (Engine Temperature Sensor)\n");


		}
		else if (input5=='o'){
			s=30;

			printf("Vehicle speed: %d km/hr \n",s);
			printf("Room Temperature: %d\n",roomtemperature*((5/4)+1));
#if(WITH_ENGINE_TEMP_CONTROLLER)
		printf("Engine Temperatue Controller State: %s\n",stateofcontroller);
		printf("Engine Temperature: %d\n",enginetemperature*((5/4)+1));
#endif
	TheStateOfCurrent(a);

		printf("a. Turn off the engine\n");
		printf("b. Set the traffic light color\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");


	}
	else if (input5=='r'){
		s=0;

		printf("Vehicle speed: km/hr \n");
		TheStateOfCurrent(a);

		printf("a. Turn off the engine\n");
		printf("b. Set the traffic light color\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");
	}
	}

	void room_temperature(int temp1)
	{
		if(temp1<10){
			roomtemperature=20;
			strcpy(AC,"ON");

			printf("turn AC %s\n",AC);
			printf("Room Temperature: %d\n",roomtemperature);
		   TheStateOfCurrent(a);

			printf("a. Turn off the engine\n");
			printf("b. Set the traffic light color\n");
			printf("c. Set the room temperature (Temperature Sensor)\n");
			printf("d. Set the engine temperature (Engine Temperature Sensor)\n");

		}
		else if (temp1>30){
			roomtemperature=20;
			strcpy(AC,"ON");

			printf("turn AC %s\n",AC);
			printf("Room Temperature: %d\n",roomtemperature);
			TheStateOfCurrent(a);

			printf("a. Turn off the engine\n");
			printf("b. Set the traffic light color\n");
			printf("c. Set the room temperature (Temperature Sensor)\n");
			printf("d. Set the engine temperature (Engine Temperature Sensor)\n");

		}
		else{
			strcpy(AC,"OFF");

			printf("turn AC %s\n",AC);
			printf("Room Temperature: %d\n",roomtemperature);
			TheStateOfCurrent(a);

			printf("a. Turn off the engine\n");
			printf("b. Set the traffic light color\n");
			printf("c. Set the room temperature (Temperature Sensor)\n");
			printf("d. Set the engine temperature (Engine Temperature Sensor)\n");


		}}

	void engine_temperature(int temp2)
	{
	#if(WITH_ENGINE_TEMP_CONTROLLER)
		if(temp2<100){
			enginetemperature=125;
			strcpy(stateofcontroller,"ON");

			printf("Engine Temperatue Controller State: %s\n",stateofcontroller);
			printf("Engine Temperature: %d\n",enginetemperature);
			TheStateOfCurrent(a);

			printf("a. Turn off the engine\n");
			printf("b. Set the traffic light color\n");
			printf("c. Set the room temperature (Temperature Sensor)\n");
			printf("d. Set the engine temperature (Engine Temperature Sensor)\n");

		}
		else if(temp2>150){
			enginetemperature=125;
			strcpy(stateofcontroller,"ON");

			printf("Engine Temperatue Controller State: %s\n",stateofcontroller);
			printf("Engine Temperature: %d\n",enginetemperature);
			TheStateOfCurrent(a);

			printf("a. Turn off the engine\n");
			printf("b. Set the traffic light color\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");

	}
	else{
		strcpy(stateofcontroller,"OFF");

		printf("Engine Temperatue Controller State: %s\n",stateofcontroller);
		printf("Engine Temperature: %d\n",enginetemperature);
		TheStateOfCurrent(a);

		printf("a. Turn off the engine\n");
		printf("b. Set the traffic light color\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");


	}
#endif
}


int main(int argc , char **argv){
	setvbuf(stdout , NULL , _IONBF , 0);

		char input1,input2,color,temp;


		printf("a. Turn on the vehicle engine\n");
		printf("b. Turn off the vehicle engine\n");
		printf("c. Quit the system\n");

		scanf(" %c",&input1);
		ThefirstList(input1);
		scanf(" %c",&input2);

		if(input1=='b'){
		second_choice(input2);

		}

		while(1){
		if(input1=='a'&& input2=='a'){
		third_choice(input2);
		}

		if(input1=='a'&&input2=='b'){
			fourth_choice(input2);
		}
		if(input1=='a'&& input2=='b'){
			scanf(" %c", &color);
			traffic_light(color);

		}if(input1=='a'&& input2=='c'){
			printf("enter the temperature\n");
			scanf(" %c",&temp);
			room_temperature(temp);
		}
		if(input1=='a'&& input2=='d'){
			printf("enter the temperature\n");
			scanf(" %c",&temp);
			engine_temperature(temp);
			}

		scanf(" %c",&input2);
		}
		return 0;
	}

