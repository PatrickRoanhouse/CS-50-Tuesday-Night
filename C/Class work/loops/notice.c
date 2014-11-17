#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/*****************************
Patrick Roanhouse
Student ID: 1492026
CS 50 - Programing in C
Section: 4135

Tuesday Night 6:45

Phone: 410-929-2008

Email: Roanhouse_Patrick_m@student.smc.edu


******************************/
int main(){
	
	int num;
	char ch;
	
	
	printf("enter an integer: ");
	scanf("%d",&num);
	printf("You just entered %d\n",num);
	fflush(stdin); //clears the text entry buffer before the character entry - windows only
	printf("enter a character: ");
	scanf("%c",&ch);
	printf("You just entered %c\n",ch);
	
	
	return(0);	
}