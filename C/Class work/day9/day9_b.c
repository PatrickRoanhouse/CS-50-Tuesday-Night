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
#include <time.h>

void inputstring (char * a);

int main()
{
	char x[255];
	char * q;
	
	q = x;
	
	printf("enter a phrase: ");
	
	inputstring(q);
	
	printf("Phase: %s",q);
	
	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}

void inputstring(char * a)
{
	while( (*a++=getchar())!='\n')
	{
		*(--a)='\0';
	}
}