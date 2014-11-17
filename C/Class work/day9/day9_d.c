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

int main(){
	char name[30];
	char * q;
	int i;
	
	printf("Enter name: ");
	
	/*scanf("%s",name);*/
	
	gets(name);
	
	printf("Hello %s ...\n",name);
	
	q ="Hello From Jupiter\n";
	
	printf("=======>> %d\n",strlen(q));
	
	for(i=0 ; i < strlen(q) ; i++)
	{
		printf("%c\n",q[i]);
	}
	
	printf(q);
	
	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}