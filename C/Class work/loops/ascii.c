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
	
	int i;
	char ch;
	
	
	printf("Enter lowercase character: ");
	scanf("%c",&ch);
	
	printf("====>%c\n",ch-32);
	
	for(i=0; i < 256; i++){
		printf("%c = %d\n",i,i);
	}
	
	return(0);
}