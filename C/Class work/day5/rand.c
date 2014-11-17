/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu


******************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i;
	srand(time(NULL));

	for(i=0 ; i < 30 ; i++){
		printf("=====>>>  %d\n",rand()%100 + 1);
	}


return 0;
}