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

#define BLANK ' '


int main(){

	char init, ch;
	
	printf("Enter first last name\n");
	
	/* get first letter of first name */
	
	init = getchar();

	/* Skip the rest of first name*/

	while((ch=getchar())!= ' ');

	/* Skip rest of a blank */

	while((ch=getchar())== BLANK);
	
	do{
		printf("%c",ch);
	}while((ch=getchar())!= '\n')
	
	printf(" %c.",init);



	//needed for all basic programs to run for the professor
	system("pause");
	
	return(0);
}